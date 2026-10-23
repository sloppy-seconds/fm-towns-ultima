#!/usr/bin/env node
// tools/structfields.js - map the field offsets of a strided record.
//
// Given a record base and stride, scan the whole image for every memory operand that
// reaches into the array, and report the field offsets touched.
//
// Why whole-image. An earlier version scanned one function and found two fields,
// because most accessors live in other functions. A record's shape is the union of
// every access.
//
// The idiom, confirmed by disassembly rather than assumed:
//   lea eax,[edi+edi*2]      eax = i*3
//   lea edx,[eax+eax*8]      edx = i*27
//   lea edx,[eax+edx*2]      edx = i*57
//   mov dword [edx+0x7aefd],0
//
// so the displacement is BASE + FIELD, a constant baked into the instruction. Finding
// fields therefore means finding displacements in [base, base+stride).
//
// Usage:
//   node tools/structfields.js <base-hex> <stride>

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

// Opcodes whose ModRM is followed by a disp32: the 0x80-0x8F and 0x38-0x3F families
// that accept a memory destination or source. This is deliberately broad. The filter
// that matters is the displacement range, which is narrow.
const OPCODES = new Set([
	0x8b, 0x89, 0x3b, 0x39, 0x83, 0x81, 0x8d, 0x80, 0xc7, 0xc6, 0xff, 0x0f,
	0x03, 0x0b, 0x13, 0x1b, 0x23, 0x2b, 0x33, 0xa1, 0xacc,
]);

function main() {
	const base = Number(process.argv[2] ?? 0x7aef9);
	const stride = Number(process.argv[3] ?? 57);
	const buf = loadImage();

	const fields = new Map();
	for (let p = 0; p < buf.length - 6; p++) {
		const op = buf[p];
		if (!OPCODES.has(op)) continue;
		const modrm = buf[p + 1];
		if (((modrm >> 6) & 3) !== 2) continue; // disp32
		if ((modrm & 7) === 4) continue; // SIB, different encoding
		const disp = buf.readUInt32LE(p + 2);
		const rel = disp - base;
		if (rel < 0 || rel >= stride) continue;
		if (!fields.has(rel)) fields.set(rel, []);
		fields.get(rel).push(p);
	}

	console.log(`record base 0x${base.toString(16)}, stride ${stride}`);
	console.log(`fields touched anywhere in the image: ${fields.size}\n`);
	for (const off of [...fields.keys()].sort((a, b) => a - b)) {
		const refs = fields.get(off);
		console.log(
			`  +${String(off).padStart(3)}  0x${off.toString(16).padStart(2, '0')}` +
				`  ${String(refs.length).padStart(3)} refs  ` +
				refs.slice(0, 5).map((r) => '0x' + r.toString(16)).join(' ')
		);
	}

	const gaps = [];
	for (let i = 0; i < stride; i++) if (!fields.has(i)) gaps.push(i);
	console.log(`\nuntouched offsets: ${gaps.length} of ${stride}`);
	if (gaps.length) console.log('  ' + gaps.join(' '));
}

if (require.main === module) main();
