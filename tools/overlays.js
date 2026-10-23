#!/usr/bin/env node
// tools/overlays.js - test whether ENCHANT.EXP uses code overlays.
//
// The runtime image test found that everything above 0x7a0e0 diverges, AND that the
// code at 0xe23d6, 0xe9c4a, 0xeb011 and 0xf5485 is zero at runtime, not just data.
//
// If CODE is absent from memory at the time of the screenshot, the binary is not one
// flat image that stays resident. It is split into overlays loaded on demand.
//
// This matters enormously: it means a savestate only contains the overlays that were
// resident, and searching the state for a function gives a false negative when that
// overlay happened to be swapped out.
//
// The test: for a sample of known code addresses, is the corresponding state region
// identical, zero, or something else? Then group by address to find the overlay
// boundaries.

'use strict';

const fs = require('fs');
const path = require('path');

const ROOT = path.join(__dirname, '..');
const BASE = 0x762d2;
const BLOCK = 4096;
const file = fs.readFileSync(path.join(ROOT, 'ENCHANT.EXP')).slice(0x20);
const state = fs.readFileSync('/var/tmp/death.state');

console.log(`image ${file.length}, base 0x${BASE.toString(16)}\n`);

// Walk 4KB blocks and classify. Distinguish "file is zero" from "runtime is zero",
// because a zero-vs-zero match says nothing.
const rows = [];
for (let off = 0; off < file.length; off += BLOCK) {
	const len = Math.min(BLOCK, file.length - off);
	const f = file.subarray(off, off + len);
	const s = state.subarray(BASE + off, BASE + off + len);
	const fZ = f.every((b) => b === 0);
	const sZ = s.every((b) => b === 0);
	let kind;
	if (Buffer.compare(f, s) === 0) kind = fZ ? 'both-zero' : 'SAME';
	else if (sZ) kind = 'RUNTIME-ZERO';
	else kind = 'DIFF';
	rows.push({ off, kind, fZ });
}

const tally = new Map();
for (const r of rows) tally.set(r.kind, (tally.get(r.kind) || 0) + 1);
console.log('block classification (4KB blocks):');
for (const [k, v] of [...tally.entries()].sort((a, b) => b[1] - a[1])) {
	console.log(`  ${k.padEnd(14)} ${String(v).padStart(4)}  = ${v * BLOCK} bytes`);
}

// Print the map compactly, one char per 4KB block.
console.log('\nimage map, one character per 4KB:');
console.log('  S = identical and not zero');
console.log('  . = zero in the file and zero at runtime');
console.log('  Z = RUNTIME-ZERO (file has data, runtime does not)');
console.log('  D = different (both non-zero, but not equal)\n');
let line = '';
for (let i = 0; i < rows.length; i++) {
	const r = rows[i];
	line += r.kind === 'SAME' ? 'S' : r.kind === 'both-zero' ? '.' : r.kind === 'RUNTIME-ZERO' ? 'Z' : 'D';
	if (line.length === 100) {
		const start = (i - 99) * BLOCK;
		console.log(`  0x${start.toString(16).padStart(6, '0')}  ${line}`);
		line = '';
	}
}
if (line) {
	const start = (rows.length - line.length) * BLOCK;
	console.log(`  0x${start.toString(16).padStart(6, '0')}  ${line}`);
}

// The decisive number: how much of the CODE is resident?
// Code is conventionally everything before the data at 0x7a0e0.
let codeBlocks = 0;
let codeResident = 0;
for (const r of rows) {
	if (r.off >= 0x7a0e0) break;
	codeBlocks++;
	if (r.kind === 'SAME' || r.kind === 'both-zero') codeResident++;
}
console.log(
	`\nbelow the 0x7a0e0 boundary: ${codeResident}/${codeBlocks} blocks resident` +
		` (${((100 * codeResident) / codeBlocks).toFixed(1)}%)`
);

// And above it.
let above = 0;
let aboveResident = 0;
for (const r of rows) {
	if (r.off < 0x7a0e0) continue;
	above++;
	if (r.kind === 'SAME' || r.kind === 'both-zero') aboveResident++;
}
console.log(
	`above the boundary:        ${aboveResident}/${above} blocks resident` +
		` (${((100 * aboveResident) / above).toFixed(1)}%)`
);

console.log('\nInterpretation:');
console.log('  if the upper region is mostly Z and D, the binary uses overlays and the');
console.log('  savestate holds only the resident part. Any scan of the state for an');
console.log('  upper-region function is a false negative.');
