#!/usr/bin/env node
// tools/expimage.js - measure ENCHANT.EXP as a code image.
//
// Answers the questions that decide whether static analysis is worth doing:
// where the image loads, where the real bytes are, how dispatch works, and how
// many function boundaries are actually visible.
//
// Every number in docs/code-analysis.md comes from here. Run it and compare.
//
// Two traps this exists to avoid, both of which produced wrong figures first:
//   1. The image is 78% zero fill. Counts taken over the whole file are mostly
//      measuring padding. Real-bytes-only is what is reported.
//   2. The header EIP suggests a 0x100000 load address. It is actually 0. With
//      the wrong base every absolute operand looks out of range and the results
//      are confidently false.
//
// Usage:
//   node tools/expimage.js                 measure the disc's ENCHANT.EXP
//   node tools/expimage.js --dump FILE     also write the flat image for a decompiler

'use strict';

const fs = require('fs');
const path = require('path');
const { Disc, defaultDisc } = require('./cd.js');

const ROOT = path.join(__dirname, '..');

// A zero run at least this long is padding, not data. Short zero runs occur
// legitimately inside instructions and tables.
const PADDING_RUN = 16;

// The flat image loads at 0, so a virtual address equals a file offset.
// Derived, not assumed: absolute operands in the code are all below 0x110000,
// which is impossible under a 0x100000 base. See docs/code-analysis.md.
const IMAGE_BASE = 0;

function loadImage() {
	const file = path.join(ROOT, 'ENCHANT.EXP');
	if (fs.existsSync(file)) return { buf: fs.readFileSync(file), source: file };

	// Not extracted yet. Pull it off the disc rather than failing, so this tool
	// works from a clean checkout with only the zip.
	const disc = defaultDisc(ROOT);
	if (!disc) throw new Error('no ENCHANT.EXP and no disc .img found');
	const d = new Disc(disc);
	const cat = d.catalogue();
	const name = [...cat.keys()].find((k) => /ENCHANT\.EXP$/i.test(k));
	if (!name) throw new Error('ENCHANT.EXP not found on the disc');
	const buf = d.get(cat, name);
	d.close();
	return { buf, source: disc + ' :: ' + name };
}

const buf = loadImage().buf;

// --- header ------------------------------------------------------------------
// The MP header is the documented 30-byte layout and reproduces the file size
// exactly, so a mismatch here means the extraction is wrong, not the format.
const sig = buf.slice(0, 2).toString('latin1');
const lastPage = buf.readUInt16LE(2);
const blocks = buf.readUInt16LE(4);
const eip = buf.readUInt32LE(0x14);
const expected = (blocks - 1) * 512 + lastPage;
const image = buf.slice(0x20);

console.log('== image ==');
console.log('  source        :', loadImage().source);
console.log('  signature     :', JSON.stringify(sig));
console.log('  file size     :', buf.length);
console.log('  header size   :', expected);
console.log('  header valid  :', expected === buf.length ? 'yes' : 'NO (mismatch)');
console.log('  EIP           : 0x' + eip.toString(16));
console.log('  flat image    :', image.length, 'bytes at base 0x' + IMAGE_BASE.toString(16));

// --- padding -----------------------------------------------------------------
const real = new Uint8Array(image.length).fill(1);
const runs = [];
let i = 0;
while (i < image.length) {
	if (image[i] === 0) {
		let j = i;
		while (j < image.length && image[j] === 0) j++;
		if (j - i >= PADDING_RUN) {
			for (let k = i; k < j; k++) real[k] = 0;
			runs.push([i, j - i]);
		}
		i = j;
	} else i++;
}
const realBytes = real.reduce((a, b) => a + b, 0);

console.log('\n== padding ==');
console.log('  real bytes    :', realBytes, '(' + ((realBytes / image.length) * 100).toFixed(1) + '%)');
runs.sort((a, b) => b[1] - a[1]);
console.log('  zero runs >=' + PADDING_RUN + ':', runs.length);
for (const [off, len] of runs.slice(0, 3)) {
	console.log('    0x' + off.toString(16).padStart(6, '0'), len, 'bytes');
}

// --- instruction census ------------------------------------------------------
// Count only where the first byte is real data, so a pattern is not matched
// across the boundary into a zero run.
function count(bytes) {
	let n = 0;
	for (let k = 0; k + bytes.length <= image.length; k++) {
		if (!real[k]) continue;
		let ok = true;
		for (let j = 0; j < bytes.length; j++) {
			if (image[k + j] !== bytes[j]) { ok = false; break; }
		}
		if (ok) n++;
	}
	return n;
}

const e8 = count([0xe8]);
const e9 = count([0xe9]);
const prologue89 = count([0x55, 0x89, 0xe5]);
const prologue8b = count([0x55, 0x8b, 0xec]);
const ret = count([0xc3]);
const indirect = count([0xff, 0x24]) + count([0xff, 0x25]) + count([0xff, 0x14]) + count([0xff, 0x15]);

console.log('\n== dispatch ==');
console.log('  E8 call rel32 :', e8);
console.log('  E9 jmp  rel32 :', e9);
console.log('  indirect      :', indirect);
if (indirect) {
	console.log('  direct/indirect ratio:', ((e8 + e9) / indirect).toFixed(1) + ':1');
} else {
	console.log('  direct/indirect ratio: all dispatch is direct');
}

console.log('\n== boundaries ==');
console.log('  push ebp;mov ebp,esp (55 8B EC):', prologue8b);
console.log('  push ebp;mov ebp,esp (55 89 E5):', prologue89);
console.log('  ret (C3)                       :', ret);
if (ret > prologue8b + prologue89) {
	console.log('  => more returns than prologues: most functions have no frame pointer,');
	console.log('     so prologue scanning undercounts. Seed a decompiler instead.');
}

// --- strings -----------------------------------------------------------------
const s = image.toString('latin1');
const printable = s.match(/[ -~]{12,}/g) || [];
const assets = printable.filter((r) => /\.(TIF|SND|EUP|FMB|UT2|MP2|EXP)\b/i.test(r));
const dupes = new Set();
for (const a of assets) dupes.add(a);
console.log('\n== strings ==');
console.log('  printable runs >=12 :', printable.length);
console.log('  asset/format strings:', dupes.size);

if (process.argv.includes('--dump')) {
	const out = path.join('/var/tmp', 'enchant_flat.bin');
	fs.writeFileSync(out, image);
	console.log('\nwrote flat image ->', out, '(load at base 0)');
}

console.log('\ndone');
