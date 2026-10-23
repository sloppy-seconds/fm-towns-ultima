#!/usr/bin/env node
// tools/stride.js - find struct strides from the lea address-generation idiom.
//
// High C and other 32-bit compilers of this era compute `base + index*stride` with a
// chain of `lea` instructions, because `lea` can multiply by 2, 3, 4, 5, 8 and 9 but
// not by arbitrary constants. The chain is a fingerprint: it names the stride exactly,
// with no guessing and no statistics.
//
// Example, from the function at 0xe6e48:
//   lea eax,[edi+edi*2]      eax = i*3
//   lea edx,[eax+eax*8]      edx = eax*9 = i*27
//   lea edx,[eax+edx*2]      edx = eax + edx*2 = i*3 + i*54 = i*57
//
// So the stride is 57. That is arithmetic, not inference.
//
// This tool finds such chains near the top of each strongly-called function and
// reports the stride it computes. It does not claim the stride is a record size for
// any particular array: it reports what the code multiplies by.
//
// Usage:
//   node tools/stride.js            chains found in the most-called functions
//   node tools/stride.js --all      every chain

'use strict';

const fs = require('fs');
const path = require('path');
const { Disc, defaultDisc } = require('./cd.js');

const ROOT = path.join(__dirname, '..');
const HEADER = 0x20;

function loadImage() {
	const local = path.join(ROOT, 'ENCHANT.EXP');
	if (fs.existsSync(local)) return fs.readFileSync(local).slice(HEADER);
	const disc = defaultDisc(ROOT);
	if (!disc) throw new Error('no ENCHANT.EXP and no disc .img found');
	const d = new Disc(disc);
	const cat = d.catalogue();
	const name = [...cat.keys()].find((k) => /ENCHANT\.EXP$/i.test(k));
	if (!name) throw new Error('ENCHANT.EXP not found on the disc');
	const buf = d.get(cat, name).slice(HEADER);
	d.close();
	return buf;
}

function collectCalls(buf) {
	const calls = new Map();
	for (let i = 0; i < buf.length - 5; i++) {
		if (buf[i] !== 0xe8) continue;
		const rel = buf.readInt32LE(i + 1);
		const target = (i + 5 + rel) >>> 0;
		if (target < buf.length) calls.set(target, (calls.get(target) || 0) + 1);
	}
	return calls;
}

// Decode one `lea r32, [base + index*scale]` or `lea r32,[index*scale + disp]`.
// Returns { dest, base, index, scale } or null. Only the register forms matter here.
function decodeLea(buf, at) {
	if (buf[at] !== 0x8d) return null;
	const modrm = buf[at + 1];
	if ((modrm & 0xc0) !== 0x00) return null; // mod must be 00 (no disp) for the chain
	const reg = (modrm >> 3) & 7;
	const rm = modrm & 7;
	if (rm === 4) {
		// SIB follows
		const sib = buf[at + 2];
		const scale = 1 << ((sib >> 6) & 3);
		const index = (sib >> 3) & 7;
		const base = sib & 7;
		if (index === 4) return null; // no index
		return { dest: reg, base, index, scale };
	}
	return null;
}

// Walk a lea chain tracking the value of each register as a linear function k*i.
// edi is the index argument, seeded to 1. Any register not yet in the map is
// unknown and breaks the chain.
function chainStride(buf, start, maxInsn = 8) {
	const vals = new Map();
	vals.set(7, 1); // edi is the loop index argument
	let at = start;
	let found = null;
	for (let n = 0; n < maxInsn; n++) {
		const l = decodeLea(buf, at);
		if (!l) break;
		const bv = vals.get(l.base);
		const iv = vals.get(l.index);
		if (bv === undefined || iv === undefined) break;
		const v = bv + iv * l.scale;
		vals.set(l.dest, v);
		if (v > 1) found = { stride: v, at, dest: l.dest };
		at += 3; // 8d /r /sib is 3 bytes for these forms
	}
	return found;
}

function main() {
	const buf = loadImage();
	const all = process.argv.includes('--all');
	const calls = collectCalls(buf);
	const top = [...calls.entries()]
		.sort((a, b) => b[1] - a[1])
		.slice(0, all ? calls.size : 40);

	console.log(`image: ${buf.length} bytes, base 0`);
	console.log('lea-chain strides, function entry and the constant it multiplies by\n');

	const strides = new Map();
	for (const [entry, nCalls] of top) {
		// Search the first 0x60 bytes of the function for a lea chain.
		for (let p = entry; p < entry + 0x60; p++) {
			if (buf[p] !== 0x8d) continue;
			const r = chainStride(buf, p);
			if (r && r.stride >= 2) {
				strides.set(r.stride, (strides.get(r.stride) || 0) + 1);
				console.log(
					`  0x${entry.toString(16)} (${nCalls} calls): stride ${r.stride}` +
						` = 0x${r.stride.toString(16)}, chain at 0x${p.toString(16)}`
				);
				break;
			}
		}
	}

	console.log('\nstride frequency across those functions:');
	for (const [s, n] of [...strides.entries()].sort((a, b) => b[1] - a[1])) {
		console.log(`  ${String(s).padStart(4)}  0x${s.toString(16).padStart(4, '0')}  x${n}`);
	}
}

if (require.main === module) main();
