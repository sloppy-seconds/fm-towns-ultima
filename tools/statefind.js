#!/usr/bin/env node
// tools/statefind.js - does this savestate contain ENCHANT.EXP at all?
//
// tools/statedump.js found candidate bases at NEGATIVE offsets, which means its 64-byte
// probe appeared in the state at a position earlier than the probe's own file offset.
// That is a spurious match, not a base.
//
// Before drawing any conclusion about runtime patching, establish whether the image is
// in the state at all, and if so where. A savestate taken at a game screen holds the
// game's code, so it should be there.

'use strict';

const fs = require('fs');
const path = require('path');

const ROOT = path.join(__dirname, '..');
const STATE = process.argv[2] ?? '/var/tmp/death.state';
const file = fs.readFileSync(path.join(ROOT, 'ENCHANT.EXP')).slice(0x20);
const state = fs.readFileSync(STATE);

console.log(`state ${state.length}, image ${file.length}`);

// What fill value dominates the state? 0xe5 appeared everywhere in the last test.
const hist = new Map();
for (let i = 0; i < state.length; i += 4096) {
	const b = state[i];
	hist.set(b, (hist.get(b) || 0) + 1);
}
console.log('sampled byte histogram (top 5):');
for (const [b, n] of [...hist.entries()].sort((a, b) => b[1] - a[1]).slice(0, 5)) {
	console.log(`  0x${b.toString(16).padStart(2, '0')}: ${n}`);
}

// Count occurrences of 0xe5 in the whole state, to confirm it is fill.
let e5 = 0;
for (let i = 0; i < state.length; i++) if (state[i] === 0xe5) e5++;
console.log(`\n0xe5 bytes in state: ${e5} (${((100 * e5) / state.length).toFixed(1)}%)`);

// Try to find the image with several distinct probes from different parts.
const PROBES = [0x1000, 0x20000, 0x40000, 0x60000, 0x80000, 0xa0000];
console.log('\nsearching for the image with probes from several offsets:');
for (const po of PROBES) {
	if (po + 64 > file.length) continue;
	const probe = file.subarray(po, po + 64);
	const at = state.indexOf(probe);
	console.log(
		`  image+0x${po.toString(16).padStart(6)}: ` +
			(at < 0 ? 'not found' : `found at state 0x${at.toString(16)}, implies base 0x${(at - po).toString(16)}`)
	);
}

// Is the image perhaps stored compressed, or with the MP header intact?
const raw = fs.readFileSync(path.join(ROOT, 'ENCHANT.EXP'));
console.log(`\nfull file (with MP header) is ${raw.length} bytes`);
const hdrProbe = raw.subarray(0, 32);
const hdrAt = state.indexOf(hdrProbe);
console.log(`MP header found in state: ${hdrAt < 0 ? 'no' : 'at 0x' + hdrAt.toString(16)}`);

// Check whether ANY long run of the image appears.
console.log('\nlongest matching run found by scanning 4KB windows:');
let bestRun = { imageOff: 0, stateOff: 0, len: 0 };
const WIN = 4096;
for (let io = 0; io + WIN <= file.length; io += WIN) {
	const w = file.subarray(io, io + WIN);
	const at = state.indexOf(w);
	if (at >= 0) {
		// Extend the match.
		let len = WIN;
		while (
			io + len < file.length &&
			at + len < state.length &&
			state[at + len] === file[io + len]
		) {
			len++;
		}
		if (len > bestRun.len) bestRun = { imageOff: io, stateOff: at, len };
	}
}
if (bestRun.len) {
	console.log(
		`  image 0x${bestRun.imageOff.toString(16)} matches state 0x${bestRun.stateOff.toString(16)}` +
			` for ${bestRun.len} bytes (implies base 0x${(bestRun.stateOff - bestRun.imageOff).toString(16)})`
	);
} else {
	console.log('  no 4KB window of the image appears anywhere in the state');
}
