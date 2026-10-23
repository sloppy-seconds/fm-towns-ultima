#!/usr/bin/env node
// tools/relocate.js - work out where the image actually lives at runtime.
//
// The two-state diff showed only 49,152 bytes matching the file at base 0x762d2.
// That is one 48 KB run at image 0x2000..0xe000. Everything else is absent.
//
// That is far too little for a working game, so the base 0x762d2 must be right for the
// region that matches and WRONG for the rest. The image is not one contiguous block in
// memory: it is split, and different parts sit at different addresses.
//
// This tool finds those addresses. For each image region that is missing at 0x762d2, it
// searches the whole state for a long run from that region, which gives the real
// runtime address.

'use strict';

const fs = require('fs');
const path = require('path');

const ROOT = path.join(__dirname, '..');
const FILE = path.join(ROOT, 'ENCHANT.EXP');
const STATE = process.argv[2] ?? '/var/tmp/title.state';
const PROBE = 512;

const img = fs.readFileSync(FILE);
const file = img.slice(0x20);
const state = fs.readFileSync(STATE);

console.log(`state ${STATE}`);
console.log(`image ${file.length} bytes, scanning for ${PROBE}-byte probes\n`);

// Probe points across the image. Skip regions that are zero in the file, because a
// zero probe matches everywhere and proves nothing.
const results = [];
for (let off = 0; off + PROBE <= file.length; off += 0x4000) {
	const probe = file.subarray(off, off + PROBE);
	if (probe.every((b) => b === 0)) {
		results.push({ imageOff: off, skipped: 'zero in file' });
		continue;
	}
	const at = state.indexOf(probe);
	results.push({
		imageOff: off,
		stateOff: at >= 0 ? at : null,
		base: at >= 0 ? at - off : null,
	});
}

console.log('image offset  ->  runtime offset   implied base');
for (const r of results) {
	if (r.skipped) {
		console.log(`    0x${r.imageOff.toString(16).padStart(6, '0')}  ${r.skipped}`);
		continue;
	}
	if (r.stateOff === null) {
		console.log(`    0x${r.imageOff.toString(16).padStart(6, '0')}  NOT FOUND`);
		continue;
	}
	console.log(
		`    0x${r.imageOff.toString(16).padStart(6, '0')}  ->  0x${r.stateOff.toString(16).padStart(6, '0')}      0x${r.base.toString(16)}`
	);
}

// Summarise the distinct bases found.
const found = results.filter((r) => r.base !== null && !r.skipped);
const bases = new Map();
for (const r of found) bases.set(r.base, (bases.get(r.base) || 0) + 1);
console.log('\ndistinct implied bases:');
for (const [b, n] of [...bases.entries()].sort((a, b) => b[1] - a[1])) {
	console.log(`  0x${b.toString(16).padStart(7, '0')}  ${n} probes`);
}
