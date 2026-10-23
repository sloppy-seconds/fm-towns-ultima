#!/usr/bin/env node
// tools/cellfield.js - rank candidate cell fields by spatial coherence.
//
// The map grid is settled at 128 x 256 (docs/map-geometry.md). This tool answers what a
// cell byte means, by measuring which of its fields is spatially coherent.
//
// The method matters more than the result. A raw "are adjacent bytes equal" test scores
// 62.9% at EVERY width from 64 to 256, because across a flat array that fraction barely
// depends on where rows are cut. It cannot discriminate and it was used earlier in this
// project to justify a wrong conclusion.
//
// What discriminates is comparing each FIELD against its own random baseline. Four values
// have a 25% chance of agreeing by accident, 256 values have about 0.4%. A field scoring
// 84.5% against 25% is far stronger evidence than a byte scoring 62.9% against 0.4%.
//
// Usage:
//   node tools/cellfield.js <state> [width] [height] [bufferOffset]

'use strict';

const fs = require('fs');

const W = Number(process.argv[3] ?? 128);
const H = Number(process.argv[4] ?? 256);
const OFF = Number(process.argv[5] ?? 0xb04c2);
const state = process.argv[2] ?? '/var/tmp/title.state';

const S = fs.readFileSync(state);
const buf = S.subarray(OFF, OFF + W * H);
if (buf.length !== W * H) {
	console.error(`buffer short: ${buf.length} != ${W * H}`);
	process.exit(1);
}

function hcoh(pick) {
	let same = 0;
	let tot = 0;
	for (let y = 0; y < H; y++) {
		for (let x = 0; x < W - 1; x++) {
			tot++;
			if (pick(buf[y * W + x]) === pick(buf[y * W + x + 1])) same++;
		}
	}
	return (100 * same) / tot;
}

function vcoh(pick) {
	let same = 0;
	let tot = 0;
	for (let y = 0; y < H - 1; y++) {
		for (let x = 0; x < W; x++) {
			tot++;
			if (pick(buf[y * W + x]) === pick(buf[(y + 1) * W + x])) same++;
		}
	}
	return (100 * same) / tot;
}

// Distinct values in a field, which gives the random baseline.
function distinct(pick) {
	const s = new Set();
	for (let i = 0; i < buf.length; i++) s.add(pick(buf[i]));
	return s.size;
}

const FIELDS = [
	['v & 3', (v) => v & 3],
	['v & 7', (v) => v & 7],
	['v & 0xF', (v) => v & 0xF],
	['v >> 4', (v) => v >> 4],
	['v >> 2 & 3', (v) => (v >> 2) & 3],
	['full byte', (v) => v],
];

console.log(`${state}`);
console.log(`buffer 0x${OFF.toString(16)}, ${W} x ${H}\n`);
console.log('field          H%     V%    values  H-chance  V-chance  H / chance');
console.log('-'.repeat(72));

const rows = [];
for (const [label, pick] of FIELDS) {
	const h = hcoh(pick);
	const v = vcoh(pick);
	const n = distinct(pick);
	const chance = 100 / n;
	rows.push({ label, h, v, n, chance, ratio: h / chance });
	console.log(
		label.padEnd(14) +
			h.toFixed(1).padStart(5) +
			v.toFixed(1).padStart(7) +
			String(n).padStart(8) +
			chance.toFixed(2).padStart(10) +
			chance.toFixed(2).padStart(10) +
			(h / chance).toFixed(2).padStart(11)
	);
}

// Rank by ABSOLUTE horizontal coherence, not by the ratio.
//
// The ratio (coherence / chance) was tried first and it ranked the full byte top at
// 38.97x, ahead of v & 3 at 3.38x. That is an artefact: dividing by a small chance
// value rewards a large alphabet for a mediocre score. The full byte's 62.9% is lower
// than every narrower field, and it contains all of them, so it cannot be the terrain
// field. Absolute coherence with the alphabet size stated is the honest comparison.
rows.sort((a, b) => b.h - a.h);
console.log(`\nbest field by absolute horizontal coherence: ${rows[0].label}`);
console.log(
	`  ${rows[0].h.toFixed(1)}% over ${rows[0].n} values, chance ${rows[0].chance.toFixed(1)}%`
);
console.log('  NOTE: the ratio column is shown for completeness but is not the ranking.');
console.log('  It rewards large alphabets for mediocre scores and put the full byte first.');

console.log('\ncontrol: raw byte agreement per assumed width');
for (const w of [64, 96, 128, 160, 192, 244, 256]) {
	let same = 0;
	let tot = 0;
	for (let i = 0; i < buf.length - 1; i++) {
		if (i % w === w - 1) continue;
		tot++;
		if (buf[i] === buf[i + 1]) same++;
	}
	console.log(`  width ${String(w).padStart(3)}: ${((100 * same) / tot).toFixed(1)}%`);
}
console.log('  that fraction is essentially constant, so it cannot find the geometry.');
