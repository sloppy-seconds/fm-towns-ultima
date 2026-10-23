#!/usr/bin/env node
// tools/fontgrid.js - find the cell grid in a character sheet by gutter spacing.
//
// tools/fontsheet.js showed GAI.TIF (352x352) has 184 empty columns and 103 empty
// rows, which means the ink is sparse and regularly spaced. That is a character
// sheet signature. This tool finds the actual pitch by looking at the gaps between
// runs of non-empty columns and rows.

'use strict';

const fs = require('fs');
const zlib = require('zlib');

function readPng(file) {
	const b = fs.readFileSync(file);
	let pos = 8;
	let w = 0;
	let h = 0;
	const idat = [];
	while (pos < b.length) {
		const len = b.readUInt32BE(pos);
		const type = b.toString('latin1', pos + 4, pos + 8);
		const d = b.subarray(pos + 8, pos + 8 + len);
		if (type === 'IHDR') {
			w = d.readUInt32BE(0);
			h = d.readUInt32BE(4);
		} else if (type === 'IDAT') idat.push(d);
		else if (type === 'IEND') break;
		pos += 12 + len;
	}
	const raw = zlib.inflateSync(Buffer.concat(idat));
	const out = Buffer.alloc(w * h);
	for (let y = 0; y < h; y++) {
		const ft = raw[y * (w + 1)];
		const line = raw.subarray(y * (w + 1) + 1, (y + 1) * (w + 1));
		for (let x = 0; x < w; x++) {
			const i = y * w + x;
			const a = x > 0 ? out[i - 1] : 0;
			const bb = y > 0 ? out[i - w] : 0;
			const c = x > 0 && y > 0 ? out[i - w - 1] : 0;
			let v = line[x];
			switch (ft) {
				case 1: v += a; break;
				case 2: v += bb; break;
				case 3: v += (a + bb) >> 1; break;
				case 4: {
					const p = a + bb - c;
					const pa = Math.abs(p - a);
					const pb = Math.abs(p - bb);
					const pc = Math.abs(p - c);
					v += pa <= pb && pa <= pc ? a : pb <= pc ? bb : c;
					break;
				}
			}
			out[i] = v & 0xff;
		}
	}
	return { w, h, px: out };
}

const file = process.argv[2] ?? '/var/home/paul/Projects/ai/fm-family-ultima-trilogy/extracted/u2/title/gai.png';
const { w, h, px } = readPng(file);
const INK = 40;
const ink = (x, y) => px[y * w + x] > INK;

const colHas = [];
for (let x = 0; x < w; x++) {
	let n = 0;
	for (let y = 0; y < h; y++) if (ink(x, y)) n++;
	colHas.push(n);
}
const rowHas = [];
for (let y = 0; y < h; y++) {
	let n = 0;
	for (let x = 0; x < w; x++) if (ink(x, y)) n++;
	rowHas.push(n);
}

// Runs of non-empty columns, with the gap sizes between them.
function runsWithGaps(has) {
	const runs = [];
	let start = -1;
	for (let i = 0; i < has.length; i++) {
		if (has[i] > 0 && start < 0) start = i;
		if (has[i] === 0 && start >= 0) {
			runs.push({ start, end: i - 1 });
			start = -1;
		}
	}
	if (start >= 0) runs.push({ start, end: has.length - 1 });

	const gaps = [];
	for (let i = 1; i < runs.length; i++) gaps.push(runs[i].start - runs[i - 1].end - 1);
	return { runs, gaps };
}

const c = runsWithGaps(colHas);
const r = runsWithGaps(rowHas);

console.log(`${file}  ${w}x${h}, ink threshold ${INK}`);
console.log(`\ncolumn runs: ${c.runs.length}`);
console.log('  first 12:', c.runs.slice(0, 12).map((x) => `${x.start}-${x.end}(${x.end - x.start + 1})`).join(' '));
console.log(`row runs: ${r.runs.length}`);
console.log('  first 12:', r.runs.slice(0, 12).map((x) => `${x.start}-${x.end}(${x.end - x.start + 1})`).join(' '));

const gapHist = (g) => {
	const m = new Map();
	for (const v of g) m.set(v, (m.get(v) || 0) + 1);
	return [...m.entries()].sort((a, b) => b[1] - a[1]);
};
console.log('\ncolumn gap sizes:', gapHist(c.gaps).slice(0, 6).map(([k, n]) => `${k}px x${n}`).join(', '));
console.log('row gap sizes:   ', gapHist(r.gaps).slice(0, 6).map(([k, n]) => `${k}px x${n}`).join(', '));

// Cell pitch from run starts.
function pitchOf(runs) {
	if (runs.length < 3) return null;
	const diffs = [];
	for (let i = 1; i < runs.length; i++) diffs.push(runs[i].start - runs[i - 1].start);
	const m = new Map();
	for (const d of diffs) m.set(d, (m.get(d) || 0) + 1);
	return [...m.entries()].sort((a, b) => b[1] - a[1]).slice(0, 4);
}
console.log('\ncolumn start-to-start deltas:', (pitchOf(c.runs) ?? []).map(([k, n]) => `${k}x${n}`).join(', '));
console.log('row start-to-start deltas:   ', (pitchOf(r.runs) ?? []).map(([k, n]) => `${k}x${n}`).join(', '));

// If the sheet is a grid, the number of runs should be a clean count per axis.
console.log(`\nruns per axis: ${c.runs.length} columns, ${r.runs.length} rows`);
console.log(`dimensions divisible: 352/16=${352 / 16} 352/22=${352 / 22} 352/11=${352 / 11}`);

// Print a coarse ASCII view so the shape is visible without vision.
console.log('\ncoarse view, 1 char per 4x4 block (>30% ink = #):');
for (let by = 0; by < h; by += 4) {
	let line = '';
	for (let bx = 0; bx < w; bx += 4) {
		let n = 0;
		for (let y = by; y < by + 4 && y < h; y++)
			for (let x = bx; x < bx + 4 && x < w; x++) if (ink(x, y)) n++;
		line += n >= 5 ? '#' : n > 0 ? '.' : ' ';
	}
	console.log('  ' + line);
}
