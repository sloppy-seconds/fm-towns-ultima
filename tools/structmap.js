#!/usr/bin/env node
// tools/structmap.js - enumerate every 57-stride array and its fields.
//
// Three functions (0xe6b1c, 0xe7440, and others) address a table at 0x7a7d0 with a
// 57-byte stride, which is a DIFFERENT array from the text-window one at 0x7aee4.
// The instruction form is:
//
//   mov eax,0x7a7d0
//   lea edx,[edi+edi*2] / lea ecx,[edx+edx*8] / lea ecx,[edx+ecx*2]
//   mov [eax+ecx+0x739], ...
//
// Note the displacement is relative to eax = 0x7a7d0, so a field offset is
// (0x739 - 0x739) ... no: the [eax+ecx+disp] form means disp is an offset INTO the
// array from its base. So field = disp directly.
//
// This tool finds all such bases and reports every field touched.

'use strict';

const fs = require('fs');
const path = require('path');

const IMG = '/var/home/paul/Projects/ai/fm-family-ultima-trilogy/ENCHANT.EXP';
const buf = fs.readFileSync(IMG).slice(0x20);

// Candidate array bases seen in the code as `mov reg, imm32` where imm is in the
// data segment and looks like an array start.
const BASES = [0x7a7d0, 0x7aee4];

// Find the lea chain that computes i*57 into a register, then find instructions
// that use [base + that register + disp].
//
// Simpler and more reliable: scan for [reg+disp32] operands (mod=10) and, for a known
// base, treat the field as disp when disp is in [base, base+stride).

function fieldsFor(base, stride) {
	const fields = new Map();
	for (let p = 0; p < buf.length - 6; p++) {
		const modrm = buf[p + 1];
		if (((modrm >> 6) & 3) !== 2) continue;
		if ((modrm & 7) === 4) continue;
		const disp = buf.readUInt32LE(p + 2);
		const rel = disp - base;
		if (rel < 0 || rel >= stride) continue;
		if (!fields.has(rel)) fields.set(rel, []);
		fields.get(rel).push(p + 0x20);
	}
	return fields;
}

// The [eax+ecx+disp] SIB form with base 0x7a7d0 puts the field offset directly in disp.
function sibFieldsFor(base, stride) {
	const fields = new Map();
	// 8b/89/3b/39/83/etc with mod=10, rm=4 (SIB), then sib byte, then disp32.
	for (let p = 0; p < buf.length - 8; p++) {
		const op = buf[p];
		if (![0x8b, 0x89, 0x3b, 0x39, 0x83, 0x81, 0xc7, 0x80, 0x0b, 0x03].includes(op)) {
			continue;
		}
		const modrm = buf[p + 1];
		if (((modrm >> 6) & 3) !== 2) continue;
		if ((modrm & 7) !== 4) continue;
		const sib = buf[p + 2];
		const idx = (sib >> 3) & 7;
		if (idx === 4) continue;
		const disp = buf.readUInt32LE(p + 3);
		// For this form the displacement is a raw offset into the array.
		if (disp < 0x700 || disp >= 0x700 + stride) continue;
		const rel = disp - 0x700;
		if (!fields.has(rel)) fields.set(rel, []);
		fields.get(rel).push(p + 0x20);
	}
	return fields;
}

console.log(`image ${buf.length} bytes\n`);

for (const base of BASES) {
	console.log(`=== array at 0x${base.toString(16)}, stride 57, [reg+disp32] form ===`);
	const f = fieldsFor(base, 57);
	console.log(`  fields: ${f.size}`);
	for (const off of [...f.keys()].sort((a, b) => a - b)) {
		console.log(
			`    +${String(off).padStart(3)}  0x${off.toString(16).padStart(2, '0')}  ` +
				`${String(f.get(off).length).padStart(2)} refs`
		);
	}
	console.log();
}

console.log('=== array at 0x7a7d0, stride 57, [base+index+disp] SIB form ===');
const s = sibFieldsFor(0x7a7d0, 57);
console.log(`  fields: ${s.size}`);
for (const off of [...s.keys()].sort((a, b) => a - b)) {
	console.log(
		`    +${String(off).padStart(3)}  0x${(0x700 + off).toString(16)}  ` +
			`${String(s.get(off).length).padStart(2)} refs  ` +
			s.get(off).slice(0, 4).map((x) => '0x' + x.toString(16)).join(' ')
	);
}
