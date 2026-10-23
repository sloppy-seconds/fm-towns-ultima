#!/usr/bin/env node
// tools/statesegments.js - map which parts of the image survive into the runtime state.
//
// The decisive test from docs/addressing-limits.md, run against a real savestate.
//
// Result so far: with the image base at 0x762d2, the debug mode strings at 0x5501 and
// the MAP2_1 path at 0x22cc are byte-identical to the file, while the string pointer
// table at 0x7a864, the switch table at 0xe4086 and the 170-entry table at 0xd8f84 are
// all ZEROS at runtime.
//
// That is not a relocation. Something zeroes those addresses. The likely reading is that
// the image maps a BSS-like region over them, or that the game clears a data area on
// startup, and the tables are in that area.
//
// This tool walks the whole image in blocks and classifies each one as:
//   SAME   identical to the file
//   ZERO   all zero at runtime
//   DIFF   neither

'use strict';

const fs = require('fs');
const path = require('path');

const ROOT = path.join(__dirname, '..');
const STATE = process.argv[2] ?? '/var/tmp/death.state';
const BASE = Number(process.argv[3] ?? 0x762d2);
const BLOCK = 256;

const file = fs.readFileSync(path.join(ROOT, 'ENCHANT.EXP')).slice(0x20);
const state = fs.readFileSync(STATE);

if (BASE + file.length > state.length) {
	console.error('base out of range');
	process.exit(1);
}

const counts = { SAME: 0, ZERO: 0, DIFF: 0, PAST_END: 0 };
const segs = [];
let cur = null;

for (let off = 0; off < file.length; off += BLOCK) {
	const len = Math.min(BLOCK, file.length - off);
	const f = file.subarray(off, off + len);
	const s = state.subarray(BASE + off, BASE + off + len);

	let kind;
	if (Buffer.compare(f, s) === 0) kind = 'SAME';
	else if (s.every((b) => b === 0)) kind = 'ZERO';
	else kind = 'DIFF';

	// If the file block is all zero anyway, "ZERO" is not informative. Mark it.
	if (kind === 'ZERO' && f.every((b) => b === 0)) kind = 'ZERO_BOTH';

	counts[kind in counts ? kind : 'DIFF'] = (counts[kind in counts ? kind : 'DIFF'] || 0) + 1;

	if (!cur || cur.kind !== kind) {
		if (cur) segs.push(cur);
		cur = { kind, start: off, end: off + len };
	} else {
		cur.end = off + len;
	}
}
if (cur) segs.push(cur);

console.log(`base 0x${BASE.toString(16)}, block ${BLOCK}, image ${file.length} bytes`);
console.log('classification counts:');
for (const [k, v] of Object.entries(counts)) {
	if (v) console.log(`  ${k}: ${v} blocks (${v * BLOCK} bytes approx)`);
}

// Report only the segments big enough to be structural.
console.log('\nsegments of 2KB or longer, in order:');
for (const s of segs) {
	const len = s.end - s.start;
	if (len < 2048) continue;
	console.log(
		`  0x${s.start.toString(16).padStart(6, '0')} .. 0x${s.end.toString(16).padStart(6, '0')}` +
			`  ${String(len).padStart(7)} bytes  ${s.kind}`
	);
}

// The key question: where does the ZERO region begin, and does it contain the tables?
const firstZero = segs.find((s) => (s.kind === 'ZERO' || s.kind === 'ZERO_BOTH') && s.end - s.start >= 4096);
console.log('\nfirst large zeroed segment:');
if (firstZero) {
	console.log(
		`  0x${firstZero.start.toString(16)} .. 0x${firstZero.end.toString(16)} (${firstZero.end - firstZero.start} bytes)`
	);
	const tables = [0x7a864, 0x7a7d0, 0x7aee4, 0xe4086, 0xe4086, 0xd8f84];
	console.log('  do known tables fall inside it?');
	for (const t of new Set(tables)) {
		const inside = t >= firstZero.start && t < firstZero.end;
		console.log(`    0x${t.toString(16)}: ${inside ? 'YES' : 'no'}`);
	}
} else {
	console.log('  none');
}
