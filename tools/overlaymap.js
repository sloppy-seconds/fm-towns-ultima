#!/usr/bin/env node
// tools/overlaymap.js - diff two savestates to map which image regions are resident.
//
// Plan item A8. One savestate cannot distinguish "cleared once at startup" from
// "cleared continuously", and it cannot show which overlays exist. Two states taken at
// different screens can.
//
// Method: for each block of the image, ask whether the runtime bytes match the file.
// A block that matches in EITHER state is resident in that state. A block that matches
// in state A but not B, or the reverse, was swapped in or out.
//
// The value of this: it separates three things that look alike in a single state.
//   - code that is always resident      -> matches in both
//   - code in an overlay, present in A  -> matches in A only
//   - data cleared at startup           -> matches in neither
//
// Usage:
//   node tools/overlaymap.js <stateA> <stateB> [base]

'use strict';

const fs = require('fs');
const path = require('path');

const ROOT = path.join(__dirname, '..');
const BLOCK = 4096;

const stateA = process.argv[2] ?? '/var/tmp/death.state';
const stateB = process.argv[3] ?? '/var/tmp/title.state';
const BASE = Number(process.argv[4] ?? 0x762d2);

const file = fs.readFileSync(path.join(ROOT, 'ENCHANT.EXP')).slice(0x20);
const A = fs.readFileSync(stateA);
const B = fs.readFileSync(stateB);

console.log(`image  ${file.length} bytes`);
console.log(`state A ${stateA} (${A.length})`);
console.log(`state B ${stateB} (${B.length})`);
console.log(`base  0x${BASE.toString(16)}\n`);

function match(buf, off, len) {
	if (BASE + off + len > buf.length) return false;
	return Buffer.compare(file.subarray(off, off + len), buf.subarray(BASE + off, BASE + off + len)) === 0;
}

const rows = [];
for (let off = 0; off < file.length; off += BLOCK) {
	const len = Math.min(BLOCK, file.length - off);
	const fZ = file.subarray(off, off + len).every((b) => b === 0);
	const a = match(A, off, len);
	const b = match(B, off, len);
	let kind;
	if (fZ && a && b) kind = 'blank';
	else if (a && b) kind = 'resident';
	else if (a) kind = 'A-only';
	else if (b) kind = 'B-only';
	else kind = 'absent';
	rows.push({ off, kind });
}

const tally = new Map();
for (const r of rows) tally.set(r.kind, (tally.get(r.kind) || 0) + 1);
console.log('block classification across both states:');
for (const [k, v] of [...tally.entries()].sort((a, b) => b[1] - a[1])) {
	console.log(`  ${k.padEnd(10)} ${String(v).padStart(4)}  = ${String(v * BLOCK).padStart(7)} bytes`);
}

console.log('\nmap, one char per 4KB:');
console.log('  # = resident in both      a = only in A (death)');
console.log('  b = only in B (title)     - = absent from both');
console.log('  . = blank in the file and matches both\n');

const CH = { resident: '#', 'A-only': 'a', 'B-only': 'b', absent: '-', blank: '.' };
let line = '';
for (let i = 0; i < rows.length; i++) {
	line += CH[rows[i].kind];
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

// Report the A-only and B-only runs, which are the overlays.
function runsOf(kind) {
	const out = [];
	let cur = null;
	for (const r of rows) {
		if (r.kind === kind) {
			if (cur && r.off === cur.end) cur.end = r.off + BLOCK;
			else {
				if (cur) out.push(cur);
				cur = { start: r.off, end: r.off + BLOCK };
			}
		}
	}
	if (cur) out.push(cur);
	return out;
}

for (const kind of ['resident', 'A-only', 'B-only']) {
	const rs = runsOf(kind);
	if (!rs.length) continue;
	const total = rs.reduce((a, r) => a + (r.end - r.start), 0);
	console.log(`\n${kind}: ${rs.length} runs, ${total} bytes`);
	for (const r of rs.filter((x) => x.end - x.start >= BLOCK * 2).slice(0, 12)) {
		console.log(`  0x${r.start.toString(16).padStart(6, '0')} .. 0x${r.end.toString(16).padStart(6, '0')}  ${r.end - r.start} bytes`);
	}
}

// The interesting question: is there any block present in B but absent in A?
// That would prove an overlay swap rather than a one-way clear.
const bOnly = rows.filter((r) => r.kind === 'B-only').length;
const aOnly = rows.filter((r) => r.kind === 'A-only').length;
console.log('\nverdict:');
if (bOnly > 0 && aOnly > 0) {
	console.log('  blocks exist that are present in one state and absent in the other.');
	console.log('  that is an OVERLAY SWAP, not a one-way clear.');
} else if (bOnly > 0 || aOnly > 0) {
	console.log(`  ${aOnly} blocks in A only, ${bOnly} in B only.`);
	console.log('  a one-way difference is consistent with a clear, not a swap.');
} else {
	console.log('  no block is state-exclusive. Either nothing swaps, or the two');
	console.log('  states happen to hold the same resident set.');
}
