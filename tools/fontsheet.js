#!/usr/bin/env node
// tools/fontsheet.js - test whether a grayscale PNG is a character sheet.
//
// GAI.TIF is 352x352 and the name is "gaiji", the Japanese word for supplementary
// characters. That is the strongest hint of a font anywhere in this disc, and no
// vision is available here, so the test has to be numeric.
//
// A character sheet has three properties that a picture does not:
//   1. Strong periodicity in BOTH axes at a character-cell pitch.
//   2. A grid of empty gutters between cells.
//   3. Ink that clusters into cells rather than spreading.
//
// PNG decoding is done by hand here because this project has no dependencies and
// these files are 8-bit grayscale, which is the simplest case.

'use strict';

const fs = require('fs');
const zlib = require('zlib');

function readPngGray(file) {
	const b = fs.readFileSync(file);
	if (b.readUInt32BE(0) !== 0x89504e47) throw new Error('not a PNG');
	let pos = 8;
	let w = 0;
	let h = 0;
	let bitDepth = 0;
	const idat = [];
	while (pos < b.length) {
		const len = b.readUInt32BE(pos);
		const type = b.toString('latin1', pos + 4, pos + 8);
		const data = b.subarray(pos + 8, pos + 8 + len);
		if (type === 'IHDR') {
			w = data.readUInt32BE(0);
			h = data.readUInt32BE(4);
			bitDepth = data[8];
		} else if (type === 'IDAT') {
			idat.push(data);
		} else if (type === 'IEND') break;
		pos += 12 + len;
	}
	if (bitDepth !== 8) throw new Error('only 8-bit handled, got ' + bitDepth);
	const raw = zlib.inflateSync(Buffer.concat(idat));
	// Undo PNG filters. Bytes per pixel is 1 for grayscale.
	const out = Buffer.alloc(w * h);
	const stride = w;
	for (let y = 0; y < h; y++) {
		const ft = raw[y * (stride + 1)];
		const line = raw.subarray(y * (stride + 1) + 1, (y + 1) * (stride + 1));
		for (let x = 0; x < w; x++) {
			const i = y * stride + x;
			const a = x > 0 ? out[i - 1] : 0;
			const bb = y > 0 ? out[i - stride] : 0;
			const c = x > 0 && y > 0 ? out[i - stride - 1] : 0;
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

// Count transitions along each axis. A font sheet has sharp periodic structure.
function axisProfile(px, w, h, axis) {
	const n = axis === 'x' ? w : h;
	const m = axis === 'x' ? h : w;
	const ink = new Array(n).fill(0);
	for (let i = 0; i < n; i++) {
		for (let j = 0; j < m; j++) {
			const v = axis === 'x' ? px[j * w + i] : px[i * w + j];
			if (v > 40) ink[i]++;
		}
	}
	return ink;
}

function autocorrelation(arr) {
	const n = arr.length;
	const mean = arr.reduce((a, b) => a + b, 0) / n;
	const d = arr.map((v) => v - mean);
	const out = [];
	for (let lag = 1; lag < Math.min(64, Math.floor(n / 2)); lag++) {
		let s = 0;
		let norm = 0;
		for (let i = 0; i + lag < n; i++) {
			s += d[i] * d[i + lag];
			norm += d[i] * d[i];
		}
		out.push({ lag, r: norm ? s / norm : 0 });
	}
	return out;
}

const file = process.argv[2] ?? '/var/home/paul/Projects/ai/fm-family-ultima-trilogy/extracted/u2/title/gai.png';
const { w, h, px } = readPngGray(file);
console.log(`${file}\n  ${w} x ${h}`);

const colInk = axisProfile(px, w, h, 'x');
const rowInk = axisProfile(px, w, h, 'y');

// Empty columns and rows are the gutters.
const emptyCols = colInk.filter((v) => v === 0).length;
const emptyRows = rowInk.filter((v) => v === 0).length;
console.log(`  completely empty columns: ${emptyCols} of ${w}`);
console.log(`  completely empty rows:    ${emptyRows} of ${h}`);

const acCol = autocorrelation(colInk);
const acRow = autocorrelation(rowInk);
const topCol = [...acCol].sort((a, b) => b.r - a.r).slice(0, 8);
const topRow = [...acRow].sort((a, b) => b.r - a.r).slice(0, 8);
console.log('\nstrongest column-lag correlations (period candidates):');
console.log('  ' + topCol.map((x) => `lag ${x.lag}: ${x.r.toFixed(3)}`).join(', '));
console.log('strongest row-lag correlations:');
console.log('  ' + topRow.map((x) => `lag ${x.lag}: ${x.r.toFixed(3)}`).join(', '));

// If a periodic pitch P divides both dimensions, it is a cell size.
const dims = [w, h];
console.log('\nguess: cell pitch that divides both dimensions');
for (let p = 8; p <= 64; p++) {
	if (w % p === 0 && h % p === 0) {
		const cs = topCol.find((x) => x.lag === p);
		const rs = topRow.find((x) => x.lag === p);
		console.log(
			`  pitch ${p}: ${w / p} x ${h / p} = ${(w / p) * (h / p)} cells` +
				`  colR=${cs ? cs.r.toFixed(3) : 'n/a'}  rowR=${rs ? rs.r.toFixed(3) : 'n/a'}`
		);
	}
}
