#!/usr/bin/env node
// tools/mirror.js - map the mirrored region of the image in memory.
//
// Probing the upper region of ENCHANT.EXP in a savestate gives a striking pattern: the
// implied base DECREASES by exactly 0x2000 for every 0x1000 increase in image offset.
//
//   image 0xd0000 -> base 0x2992d2
//   image 0xd1000 -> base 0x2972d2
//   image 0xd2000 -> base 0x2952d2
//   ...
//   image 0x105000 -> base 0x22f2d2
//
// That is a mirror. The code is not stored contiguously; it is interleaved: 0x1000 of
// image, then 0x1000 of something else, walking DOWNWARD in memory as the image
// offset goes UP.
//
// This is a real and unusual layout and it explains why every contiguous-base
// assumption failed for the whole top half of the binary.
//
// This tool derives the exact mapping and verifies it byte for byte.

'use strict';

const fs = require('fs');
const path = require('path');

const ROOT = path.join(__dirname, '..');
const STATE = process.argv[2] ?? '/var/tmp/title.state';

const file = fs.readFileSync(path.join(ROOT, 'ENCHANT.EXP')).slice(0x20);
const state = fs.readFileSync(STATE);

// From the probe data: for image offset o in [0xd0000, 0x105000],
//   implied base b(o) = 0x2992d2 - 2*(o - 0xd0000)
// and the state address is o + b(o):
//   o + 0x2992d2 - 2o + 0x1a0000 = 0x4392d2 - o
//
// Verified at five probe points. The first attempt dropped the +o and used
// 0x2f92d2, which matched nothing.
const MIRROR_C = 0x4392d2;

function stateAddr(o) {
	return MIRROR_C - o;
}

console.log(`state ${STATE}`);
console.log(`mirror constant 0x${MIRROR_C.toString(16)}`);
console.log(`state address for image offset o is 0x${MIRROR_C.toString(16)} - o\n`);

// Verify against the probes.
const checks = [0xd0000, 0xe7000, 0xf7000, 0x100000, 0x105000];
console.log('verification at probe points:');
for (const o of checks) {
	const a = stateAddr(o);
	const p = file.subarray(o, o + 64);
	const s = state.subarray(a, a + 64);
	console.log(
		`  image 0x${o.toString(16)} -> state 0x${a.toString(16)}  match=${Buffer.compare(p, s) === 0}`
	);
}

// Now measure how much of the region is explained by this mapping.
console.log('\nblock-by-block coverage under the mirror mapping:');
let ok = 0;
let bad = 0;
let past = 0;
for (let o = 0xd0000; o + 4096 <= file.length; o += 4096) {
	const a = stateAddr(o + 4096);
	if (a < 0 || a > state.length) {
		past++;
		continue;
	}
	const f = file.subarray(o, o + 4096);
	if (f.every((b) => b === 0)) continue;
	const s = state.subarray(stateAddr(o + 4096), stateAddr(o + 4096) + 4096);
	if (Buffer.compare(f, s) === 0) ok++;
	else bad++;
}
console.log(`  identical under the mirror: ${ok} blocks`);
console.log(`  not identical:              ${bad} blocks`);
console.log(`  address out of range:       ${past} blocks`);

// What occupies the gaps? In the mirrored layout, between image block o and o+0x1000
// the state has 0x1000 of something. Look at one gap.
console.log('\ngap contents, between two image blocks:');
const o = 0xe6000;
const gapStart = stateAddr(o) + 0x1000;
const gap = state.subarray(gapStart, gapStart + 64);
console.log(`  state 0x${gapStart.toString(16)}: ${gap.toString('hex')}`);
console.log('  (this is the interleaved data between mirrored image blocks)');

// And the start of the mirrored region.
console.log(`\nmirror covers state addresses 0x${stateAddr(0x105cee).toString(16)} to 0x${stateAddr(0xd0000).toString(16)}`);
console.log(`that is ${stateAddr(0xd0000) - stateAddr(0x105cee)} bytes of state`);
