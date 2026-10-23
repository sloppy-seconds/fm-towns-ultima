#!/usr/bin/env node
// tools/statedump.js - read the loaded image out of a Tsugaru savestate.
//
// The addressing limit (docs/addressing-limits.md) blocks five lines of work. The
// specific test that would settle it: if the image as loaded differs from the file at
// the addresses that fail to resolve, something relocates or builds them at runtime.
//
// This tool does NOT assume the image base. It finds it, by searching the state for a
// long run of bytes that matches the file. The base recorded in earlier sessions
// (0x762d2) is a prior observation, not a given, and re-deriving it costs nothing and
// protects against a state from a different build.

'use strict';

const fs = require('fs');
const path = require('path');

const ROOT = path.join(__dirname, '..');
const STATE = process.argv[2] ?? '/var/tmp/death.state';
const IMG = path.join(ROOT, 'ENCHANT.EXP');

if (!fs.existsSync(IMG)) {
	console.error('ENCHANT.EXP not present; extract it first');
	process.exit(1);
}

const file = fs.readFileSync(IMG).slice(0x20); // flat image, base 0
const state = fs.readFileSync(STATE);

console.log(`state:  ${STATE} (${state.length} bytes)`);
console.log(`image:  ${file.length} bytes`);

// Find the base by matching a distinctive 64-byte probe from the middle of the image.
// The middle is used because the start may be patched and the end is BSS.
function findBase() {
	const PROBE_OFF = 0x20000;
	const PROBE_LEN = 64;
	const probe = file.subarray(PROBE_OFF, PROBE_OFF + PROBE_LEN);
	const hits = [];
	let from = 0;
	while (hits.length < 8) {
		const at = state.indexOf(probe, from);
		if (at < 0) break;
		hits.push(at - PROBE_OFF);
		from = at + 1;
	}
	return hits;
}

const bases = findBase();
console.log(`\ncandidate bases from a 64-byte probe at image+0x20000:`);
for (const b of bases) console.log(`  0x${b.toString(16)}`);

if (!bases.length) {
	console.log('\nNOT FOUND. The image is not present verbatim in this state.');
	process.exit(0);
}

// Verify each candidate by checking how much of the image matches at that base.
function verify(base) {
	if (base < 0 || base + file.length > state.length) return { ok: 0, total: 0 };
	let ok = 0;
	const STEP = 64;
	let total = 0;
	for (let off = 0; off + STEP <= file.length; off += STEP) {
		total++;
		let same = true;
		for (let i = 0; i < STEP; i++) {
			if (state[base + off + i] !== file[off + i]) {
				same = false;
				break;
			}
		}
		if (same) ok++;
	}
	return { ok, total };
}

let best = null;
for (const b of bases) {
	const v = verify(b);
	const pct = v.total ? (100 * v.ok) / v.total : 0;
	console.log(`  base 0x${b.toString(16)}: ${v.ok}/${v.total} blocks match (${pct.toFixed(1)}%)`);
	if (!best || v.ok > best.ok) best = { base: b, ...v };
}

if (!best) process.exit(0);
console.log(`\nbest base: 0x${best.base.toString(16)}`);

// Now the actual test: read the addresses that fail to resolve in the file.
const TESTS = [
	{ name: 'switch table 0xe4086', addr: 0xe4086, len: 64 },
	{ name: 'table 0xd8f84', addr: 0xd8f84, len: 64 },
	{ name: 'debug names 0x5501', addr: 0x5501, len: 64 },
	{ name: 'MAP2_1 path 0x22cc', addr: 0x22cc, len: 48 },
	{ name: 'string table 0x7a864', addr: 0x7a864, len: 48 },
	{ name: 'text windows 0x7aee4', addr: 0x7aee4, len: 48 },
];

console.log('\n=== file vs runtime at the failing addresses ===');
for (const t of TESTS) {
	const f = file.subarray(t.addr, t.addr + t.len);
	const sOff = best.base + t.addr;
	const s = state.subarray(sOff, sOff + t.len);
	const same = Buffer.compare(f, s) === 0;
	const fNz = [...f].filter((x) => x !== 0).length;
	const sNz = [...s].filter((x) => x !== 0).length;
	console.log(`\n${t.name} (0x${t.addr.toString(16)})`);
	console.log(`  file:    ${f.toString('hex')}`);
	console.log(`  runtime: ${s.toString('hex')}`);
	console.log(`  identical: ${same}   non-zero bytes: file ${fNz}, runtime ${sNz}`);
}
