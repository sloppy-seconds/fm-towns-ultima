#!/usr/bin/env node
// tools/coderefs.js - find the code that references each string in ENCHANT.EXP.
//
// The point is to reach game logic without playing the game. An asset path is an
// address in the data segment, so something must load it, and that something is
// the loader routine. Find the reference and you have found the routine.
//
// This tool exists because the naive version does not work, and the reasons are
// worth keeping:
//
//   1. Scanning for the string's address as a bare 4-byte pattern produces
//      false positives inside Shift-JIS text and inside tables of small
//      integers. Requiring the target to be a *clean* string start (preceded by
//      a null, all printable, terminated by a null) removes almost all of them.
//
//   2. Most asset strings are referenced ZERO times directly. Only 5 of 68 turn
//      up as a push or mov immediate. So the loader does not embed most paths.
//      That is a finding, not a failure: see docs/code-analysis.md.
//
//   3. Instructions must be decoded from real code. A pattern found inside the
//      337 KB zero region is meaningless, and its neighbours are zeros, so a
//      push there reads a nonsense target.
//
// Usage:
//   node tools/coderefs.js               summary: how many strings are referenced
//   node tools/coderefs.js --all         every reference with its site and call
//   node tools/coderefs.js --string X    references to one string
//   node tools/coderefs.js --calls       callees of the referencing functions

'use strict';

const fs = require('fs');
const path = require('path');
const { Disc, defaultDisc } = require('./cd.js');

const ROOT = path.join(__dirname, '..');
const PADDING_RUN = 16;

// The image loads at address 0, so a virtual address equals a file offset.
// Derived in docs/code-analysis.md: absolute operands are all below 0x110000,
// which is impossible under the 0x100000 base that the header EIP suggests.
function loadImage() {
	const local = path.join(ROOT, 'ENCHANT.EXP');
	if (fs.existsSync(local)) return fs.readFileSync(local).slice(0x20);

	const disc = defaultDisc(ROOT);
	if (!disc) throw new Error('no ENCHANT.EXP and no disc .img found');
	const d = new Disc(disc);
	const cat = d.catalogue();
	const name = [...cat.keys()].find((k) => /ENCHANT\.EXP$/i.test(k));
	if (!name) throw new Error('ENCHANT.EXP not found on the disc');
	const buf = d.get(cat, name);
	d.close();
	return buf.slice(0x20);
}

const img = loadImage();

// --- mask ---------------------------------------------------------------------
// Long zero runs are BSS, not code. A pattern there is padding, not an instruction.
const real = new Uint8Array(img.length).fill(1);
{
	let i = 0;
	while (i < img.length) {
		if (img[i] === 0) {
			let j = i;
			while (j < img.length && img[j] === 0) j++;
			if (j - i >= PADDING_RUN) for (let k = i; k < j; k++) real[k] = 0;
			i = j;
		} else i++;
	}
}

// --- strings ------------------------------------------------------------------
// A clean start is preceded by a null and followed by a printable run ending in
// a null. This is what separates a real string address from the middle of
// Shift-JIS text, which is the false positive that made the first attempt wrong.
function stringAt(a) {
	if (a <= 0 || a >= img.length) return null;
	if (img[a - 1] !== 0) return null;
	let e = a;
	while (e < img.length && img[e] !== 0) e++;
	if (e >= img.length || e - a < 4) return null;
	for (let k = a; k < e; k++) {
		if (img[k] < 0x20 || img[k] > 0x7e) return null;
	}
	return img.slice(a, e).toString('latin1');
}

// Only the asset-looking strings are useful for tying code to data files.
const ASSET = /\.(TIF|SND|EUP|FMB|UT2|MP2)$/i;

// --- references ---------------------------------------------------------------
// Two encodings put an absolute address in the instruction stream and are what
// a compiler emits for a string literal argument:
//   68 <imm32>      push imm32
//   B8..BF <imm32>  mov r32, imm32
function findRefs(filterAsset) {
	const out = [];
	for (let k = 0; k + 5 <= img.length; k++) {
		if (!real[k]) continue;
		const op = img[k];
		let kind = null;
		if (op === 0x68) kind = 'push';
		else if (op >= 0xb8 && op <= 0xbf) kind = 'mov';
		else continue;

		const addr = img.readUInt32LE(k + 1);
		const s = stringAt(addr);
		if (!s) continue;
		if (filterAsset && !ASSET.test(s)) continue;

		// The next direct call is the routine being handed the string. Walk forward
		// properly: the push is 5 bytes, a following `push imm8` (6a xx) is 2 more,
		// and only then look for the E8. 
		let p = k + 5;
		if (p < img.length && img[p] === 0x6a) p += 2;           // push imm8 arg
		if (p < img.length && img[p] === 0x50) p += 1;           // push eax
		let call = null;
		for (let j = p; j < Math.min(k + 40, img.length - 4); j++) {
			if (img[j] === 0xe8) {
				// j is an image offset, so the next-instruction address in virtual
				// terms is j + 0x20 + 5. Adding only j + 5 lands 0x20 short.
				call = j + 0x20 + 5 + img.readInt32LE(j + 1);
				break;
			}
		}
		// k indexes the flat image, which begins 0x20 bytes into the file. Report
		// the virtual address, not the image offset, or every site reads 0x20 low.
		out.push({ at: k + 0x20, addr, kind, s, call });
	}
	return out;
}

const refs = findRefs(true);
const allStrings = [];
for (let i = 1; i < img.length; i++) {
	const s = stringAt(i);
	if (s) allStrings.push({ at: i + 0x20, s });
}

const args = process.argv.slice(2);

if (args.includes('--string')) {
	const want = args[args.indexOf('--string') + 1] || '';
	const hits = findRefs(false).filter((r) => r.s.toUpperCase().includes(want.toUpperCase()));
	if (!hits.length) {
		console.log('no reference to a string matching', JSON.stringify(want));
		process.exit(1);
	}
	for (const h of hits) {
		console.log('0x' + h.at.toString(16).padStart(6, '0'), h.kind, '->', h.s,
			h.call !== null ? '(call 0x' + h.call.toString(16) + ')' : '');
	}
	process.exit(0);
}

if (args.includes('--all')) {
	for (const h of findRefs(false)) {
		console.log('0x' + h.at.toString(16).padStart(6, '0'), h.kind.padEnd(4),
			'0x' + h.addr.toString(16).padStart(6, '0'),
			h.call !== null ? 'call 0x' + h.call.toString(16).padStart(6, '0') : '         ',
			h.s);
	}
	process.exit(0);
}

if (args.includes('--calls')) {
	const seen = new Map();
	for (const r of refs) {
		if (r.call === null) continue;
		if (!seen.has(r.call)) seen.set(r.call, []);
		seen.get(r.call).push(r.s);
	}
	console.log('callees that receive an asset path:');
	for (const [callee, files] of [...seen.entries()].sort((a, b) => b[1].length - a[1].length)) {
		console.log('  0x' + callee.toString(16).padStart(6, '0'), files.length + ' call(s):', files.join(', '));
	}
	process.exit(0);
}

// --- summary ------------------------------------------------------------------
const assets = allStrings.filter((s) => ASSET.test(s.s));
const referenced = new Set(refs.map((r) => r.s));
const missing = assets.filter((a) => !referenced.has(a.s));

console.log('== asset strings ==');
console.log('  on the image      :', assets.length);
console.log('  referenced by code:', referenced.size);
console.log('  never referenced  :', missing.length);
console.log('');
console.log('== reference sites ==');
for (const r of refs) {
	console.log('  0x' + r.at.toString(16).padStart(6, '0'), r.kind.padEnd(4),
		'->', r.s, r.call !== null ? '(call 0x' + r.call.toString(16) + ')' : '');
}
console.log('');
console.log('Most asset paths are not embedded as immediates. That is expected: the');
console.log('loader builds or indexes them at runtime. See docs/code-analysis.md.');
