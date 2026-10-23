#!/usr/bin/env node
// tools/msgtable.js - resolve table-based string arguments.
//
// tools/msgcallers.js classifies each call to the renderer by where argument 2 comes
// from. 123 are literals. 75 are registers, which means the pointer was loaded
// elsewhere and this tool's naive backward walk cannot see it.
//
// A register argument usually comes from a load from a global table indexed by a
// constant. If the index is a constant, the string is statically known even though
// the push is a register.
//
// This tool looks for the pattern before each register push:
//     mov  reg,[table + index*4]      ; or
//     mov  reg,[table]  with index folded into the address
// and reports the table base and index when both are constants.

'use strict';

const fs = require('fs');
const path = require('path');

const IMG = '/var/home/paul/Projects/ai/fm-family-ultima-trilogy/ENCHANT.EXP';
const buf = fs.readFileSync(IMG).slice(0x20);
const RENDER = 0xe6e90;

function stringAt(addr, max = 160) {
	if (addr < 0x20 || addr >= buf.length) return null;
	let end = addr;
	while (end < buf.length && end - addr < max && buf[end] !== 0) end++;
	if (end === addr) return null;
	const raw = buf.subarray(addr, end);
	let printable = 0;
	for (const b of raw) if (b >= 0x20) printable++;
	if (printable / raw.length < 0.9) return null;
	return raw.toString('latin1');
}

// Decode `mov r32, [disp32]` = 8b /r with mod=00, rm=101 -> A1 for eax, or 8b 05.
function movRegFromAbs(p) {
	// A1 imm32         mov eax,[imm32]
	if (buf[p] === 0xa1) return { reg: 0, addr: buf.readUInt32LE(p + 1), len: 5 };
	// 8B /r with mod=00 rm=101 : 8b 0d imm32, 8b 15, 8b 1d, 8b 2d, 8b 35, 8b 3d
	if (buf[p] === 0x8b) {
		const m = buf[p + 1];
		if (((m >> 6) & 3) === 0 && (m & 7) === 5) {
			return { reg: (m >> 3) & 7, addr: buf.readUInt32LE(p + 2), len: 6 };
		}
	}
	return null;
}

const sites = [];
for (let i = 0; i < buf.length - 5; i++) {
	if (buf[i] !== 0xe8) continue;
	if (((i + 5 + buf.readInt32LE(i + 1)) >>> 0) !== RENDER) continue;
	sites.push(i);
}

console.log(`calls to renderer: ${sites.length}`);
let resolved = 0;
const found = [];

for (const site of sites) {
	// Look back for `push reg` (50..57) immediately before the call, then for a load
	// into that register within the preceding 32 bytes.
	const p0 = site - 1;
	if (!(buf[p0] >= 0x50 && buf[p0] <= 0x57)) continue;
	const reg = buf[p0] - 0x50;

	let hit = null;
	for (let p = p0 - 1; p > p0 - 32 && p >= 0; p--) {
		const m = movRegFromAbs(p);
		if (m && m.reg === reg) {
			hit = m;
			break;
		}
	}
	if (!hit) continue;

	const s = stringAt(hit.addr);
	found.push({ site, reg, addr: hit.addr, text: s });
	if (s) resolved++;
}

console.log(`register pushes with a constant absolute load: ${found.length}`);
console.log(`of those, pointing at a decodable string: ${resolved}\n`);

for (const f of found.slice(0, 60)) {
	const kind = f.text ? JSON.stringify(f.text.slice(0, 60)) : '<not a string>';
	console.log(`  0x${f.site.toString(16)}  reg${f.reg}  [0x${f.addr.toString(16)}]  ${kind}`);
}
