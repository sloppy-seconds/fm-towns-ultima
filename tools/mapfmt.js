#!/usr/bin/env node
// tools/mapfmt.js - measure the MAP2_* map files.
//
// Why this exists: the project claimed these were ASCII, one character per cell,
// and that was wrong. The mistake was reading one file's byte histogram and
// applying it to another. This tool prints the histogram so the claim can be
// checked rather than remembered.
//
// It also tests the encoding hypothesis. Every byte in MAP2_1 is (hi<<4)|lo with
// both nibbles in 0..7, which is 64 combinations: the same 64-tile vocabulary the
// DOS release uses, packed differently. That is measured here, not assumed.
//
// Usage:
//   node tools/mapfmt.js            measure MAP2_1/2/3
//   node tools/mapfmt.js --render   character map of MAP2_1 for eyeballing
//
// A note on what this does NOT settle: the cell geometry. See
// docs/assets-and-graphics.md 5.2.

'use strict';

const path = require('path');
const { Disc, defaultDisc } = require('./cd.js');

const ROOT = path.join(__dirname, '..');
const disc = defaultDisc(ROOT);
if (!disc) throw new Error('no disc .img found');
const d = new Disc(disc);
const cat = d.catalogue();

function get(name) {
	const entry = [...cat.keys()].find((k) => k.toUpperCase().endsWith(name));
	if (!entry) throw new Error(name + ' not on the disc');
	return d.get(cat, entry);
}

const args = process.argv.slice(2);
const files = ['MAP2_1.TIF', 'MAP2_2.TIF', 'MAP2_3.TIF'];

for (const f of files) {
	const b = get(f);
	const count = (v) => {
		let n = 0;
		for (const x of b) if (x === v) n++;
		return n;
	};
	const distinct = new Set(b);

	// The claim under test: not character data.
	const lf = count(0x0a);
	const cr = count(0x0d);

	// Encoding: is every byte (hi<<4)|lo with both nibbles in 0..7?
	let inRange = 0;
	for (const x of b) if ((x >> 4) <= 7 && (x & 15) <= 7) inRange++;

	const missing = [];
	for (let h = 0; h < 8; h++) {
		for (let l = 0; l < 8; l++) {
			if (!distinct.has((h << 4) | l)) missing.push('0x' + ((h << 4) | l).toString(16).padStart(2, '0'));
		}
	}

	console.log('== ' + f + ' ==');
	console.log('  size            :', b.length);
	console.log('  distinct values :', distinct.size);
	console.log('  LF / CR         :', lf, '/', cr, lf + cr === 0 ? '(not text)' : '');
	console.log('  (hi<<4)|lo with both nibbles in 0..7:', inRange, '/', b.length,
		'(' + ((inRange / b.length) * 100).toFixed(1) + '%)');
	console.log('  of 64 possible  :', 64 - missing.length, 'present, missing', missing.join(' ') || 'none');
	console.log('');
}

// Geometry check on MAP2_1: horizontal autocorrelation finds the tile period.
const b = get('MAP2_1.TIF');
const W = 320;
const H = 104;
if (b.length === W * H) {
	const ac = (lag) => {
		let same = 0;
		let t = 0;
		for (let y = 0; y < H; y++) {
			for (let x = 0; x + lag < W; x++) {
				if (b[y * W + x] === b[y * W + x + lag]) same++;
				t++;
			}
		}
		return (same / t) * 100;
	};
	console.log('== MAP2_1 horizontal autocorrelation (assumed ' + W + 'x' + H + ') ==');
	console.log('  lag  1 :', ac(1).toFixed(1) + '%');
	for (const l of [4, 8, 15, 16, 17]) console.log('  lag ' + String(l).padStart(2) + ' :', ac(l).toFixed(1) + '%');
	console.log('  a spike at 16 is a 16-pixel period, matching the 16x16 tile viewport');
	console.log('');
}

// Cross-check the three files: MAP2_1/2/3 share a body if they are variants of
// one map rather than three maps. Measured on 320-byte rows, rows 0..31 differ
// and rows 32..103 are byte-identical in all three.
{
	const m2 = get('MAP2_2.TIF');
	const m3 = get('MAP2_3.TIF');
	let diff = 0;
	let sameAll = 0;
	for (let i = 0; i < b.length; i++) {
		if (b[i] !== m2[i] || b[i] !== m3[i]) diff++;
		if (b[i] === m2[i] && b[i] === m3[i]) sameAll++;
	}
	console.log('== across MAP2_1 / MAP2_2 / MAP2_3 ==');
	console.log('  bytes identical in all three:', sameAll, '(' + ((sameAll / b.length) * 100).toFixed(1) + '%)');
	// Which row bands are shared? This is what showed the 0..31 / 32..103 split.
	const W = 320;
	const H = b.length / W;
	if (Number.isInteger(H)) {
		// Report the longest contiguous run of fully shared rows. Isolated shared
		// rows inside the differing block are not interesting; the tail is.
		const rowShared = (y) => {
			for (let x = 0; x < W; x++) {
				const v = b[y * W + x];
				if (v !== m2[y * W + x] || v !== m3[y * W + x]) return false;
			}
			return true;
		};
		let bestStart = -1;
		let bestLen = 0;
		let runStart = -1;
		let runLen = 0;
		for (let y = 0; y < H; y++) {
			if (rowShared(y)) {
				if (runStart < 0) { runStart = y; runLen = 0; }
				runLen++;
				if (runLen > bestLen) { bestLen = runLen; bestStart = runStart; }
			} else {
				runStart = -1;
			}
		}
		console.log('  longest run of rows identical in all three:', bestStart, 'to',
			bestStart + bestLen - 1, '(' + (W * bestLen) + ' bytes)');
	}
	console.log('');
}

if (args.includes('--render')) {
	const hist = {};
	for (const x of b) hist[x] = (hist[x] || 0) + 1;
	const order = Object.entries(hist).sort((p, q) => q[1] - p[1]).map((e) => +e[0]);
	const ramp = ' .:-=+*#%@';
	const ch = {};
	order.forEach((v, i) => { ch[v] = ramp[Math.min(i, ramp.length - 1)]; });
	console.log('legend, most common first:');
	console.log(order.slice(0, 10).map((v, i) => '0x' + v.toString(16) + '=' + ch[v]).join('  '));
	console.log('');
	for (let y = 0; y < H; y += 2) {
		let line = '';
		for (let x = 0; x < W; x += 4) line += ch[b[y * W + x]];
		console.log(line);
	}
}

d.close();
