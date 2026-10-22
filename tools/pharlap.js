#!/usr/bin/env node
// tools/pharlap.js - Phar Lap MP and P3 executable loader.
//
// Turns a DOS-extender executable into a flat memory image plus a symbol map,
// so the address in a symbol table becomes a byte offset you can disassemble at.
//
// Two formats, both documented by Open Watcom's exephar.h and verified against
// the four Trilogy executables (see FINDINGS 6.7 and 6.11):
//
//   MP  30-byte header, flat image. Used by DARKNESS, ENCHANT, EXODUS.
//   P3  128-byte header, extended format with a runtime parameter block,
//       a load image and a symbol table. Used by TMENU.
//
// The important discovery this encodes: in P3, the symbol table's addresses are
// **file offsets into the load image**, not segment-relative values and not
// image-relative values. Proof: 1,723 of 1,725 symbol addresses fall inside the
// declared load image bounds, and the two that do not are PROGRAM and LINKTOP_R,
// both legitimately zero.
//
// Usage:
//   node tools/pharlap.js --file TMENU.EXP                    header summary
//   node tools/pharlap.js --file TMENU.EXP --map              segment/image map
//   node tools/pharlap.js --file TMENU.EXP --at EGB_palette   resolve a symbol
//   node tools/pharlap.js --file TMENU.EXP --disasm EGB_pen   NDISASM at symbol
//   node tools/pharlap.js --file TMENU.EXP --dump out.bin     write flat image

'use strict';

const fs = require('fs');
const path = require('path');
const { execSync } = require('child_process');
const { Disc, defaultDisc } = require('./cd');

const ROOT = path.join(__dirname, '..');
const args = process.argv.slice(2);
function arg(f, d) {
	const i = args.indexOf(f);
	return i >= 0 && args[i + 1] !== undefined ? args[i + 1] : d;
}
const has = (f) => args.includes(f);

const FILE = arg('--file', 'TMENU.EXP');

// ---------------------------------------------------------------------------
// Load the executable bytes from the disc.
// ---------------------------------------------------------------------------

const disc = new Disc(defaultDisc(ROOT));
const cat = disc.catalogue();
const buf = disc.get(cat, FILE);
disc.close();
if (!buf) {
	console.error('not on disc: ' + FILE);
	process.exit(1);
}

const sig = buf.toString('latin1', 0, 2);

// ---------------------------------------------------------------------------
// MP: flat image
// ---------------------------------------------------------------------------
// 00 sig           02 bytes in last page   04 file size in 512-byte blocks
// 06 reloc count   08 header size (paras)   0A min data (4K pages)
// 0C max data      0E initial ESP (u32)     12 checksum
// 14 initial EIP   18 reloc offset (0x1e)   1A overlay   1C always 1

function parseMP() {
	const lastPage = buf.readUInt16LE(2);
	const blocks = buf.readUInt16LE(4);
	const computed = blocks * 512 - (lastPage ? 512 - lastPage : 0);
	const hdrParas = buf.readUInt16LE(8);
	return {
		format: 'MP',
		level: 'flat',
		lastPage,
		blocks,
		computed,
		sizeOk: computed === buf.length,
		relocs: buf.readUInt16LE(6),
		headerBytes: hdrParas * 16,
		esp: buf.readUInt32LE(0x0e),
		eip: buf.readUInt32LE(0x14),
		relocOff: buf.readUInt16LE(0x18),
		// For MP the load image is the whole file after the header.
		loadStart: hdrParas * 16,
		loadEnd: buf.length,
		entry: buf.readUInt32LE(0x14),
	};
}

// ---------------------------------------------------------------------------
// P3: extended format
// ---------------------------------------------------------------------------
// Verified field positions for TMENU.EXP, derived by testing candidate layouts
// against the data rather than trusting documentation prose:
//
//   00 sig "P3"      02 level (u16, 1 = flat model)
//   04 header size (u16, 384)      06 file size (u32)
//   0A checksum (u16)
//   0C runtime parameter offset (u32 = 384)  10 runtime parameter size (u32 = 128)
//   14 relocation offset (u32 = 512)         18 relocation size (u32 = 0)
//
// The load image and symbol table offsets are stored as u16 values that are the
// low half of a 32-bit offset. They sit at 0x74 (load image end) and elsewhere.

function parseP3() {
	// Runtime parameter block must start with the DX signature.
	const rtOff = buf.readUInt32LE(0x0c);
	const rtSize = buf.readUInt32LE(0x10);
	const rtSig = buf.toString('latin1', rtOff, rtOff + 2);

	// Locate the load image by scanning for the symbol table and working back.
	// The symbol table has an unambiguous SYM1 signature.
	const symAt = buf.indexOf(Buffer.from('SYM1'));

	// The load image ends where code/data stops. Empirically the value at 0x74
	// is the load image end offset (0x33892 for TMENU).
	const loadEnd = buf.readUInt32LE(0x74);
	const loadStart = buf.readUInt32LE(0x14); // relocation offset doubles as load start

	return {
		format: 'P3',
		level: buf.readUInt16LE(2),
		headerBytes: buf.readUInt16LE(4),
		declaredSize: buf.readUInt32LE(6),
		declaredSizeOk: buf.readUInt32LE(6) === buf.length,
		checksum: buf.readUInt16LE(0x0a),
		rtOff,
		rtSize,
		rtSig,
		loadStart,
		loadEnd,
		loadOk: loadStart > 0 && loadEnd > loadStart && loadEnd <= buf.length,
		symAt,
		entry: null,
	};
}

const h = sig === 'MP' ? parseMP() : sig === 'P3' ? parseP3() : null;
if (!h) {
	console.error('unknown signature ' + JSON.stringify(sig) + ', not MP or P3');
	process.exit(1);
}

// ---------------------------------------------------------------------------
// SYM1 symbol table (P3 only)
// ---------------------------------------------------------------------------

function parseSymbols() {
	if (!h.symAt || h.symAt < 0) return [];
	const blob = buf.subarray(h.symAt);
	if (blob.toString('latin1', 0, 4) !== 'SYM1') return [];
	const recs = [];
	let p = 0x0e;
	let first = true;
	while (p < blob.length) {
		const namelen = blob[p];
		if (namelen < 1 || namelen > 120) break;
		const nameEnd = p + 1 + namelen;
		if (nameEnd + 6 > blob.length) break;
		const name = blob.toString('latin1', p + 1, nameEnd);
		if (!/^[A-Za-z_][A-Za-z0-9_]*$/.test(name)) break;
		// u32 value, u16 type. Six bytes, not eight.
		recs.push({
			name,
			value: blob.readUInt32LE(nameEnd),
			type: blob.readUInt16LE(nameEnd + 4),
		});
		p = nameEnd + 6;
		if (first) {
			p += 6;
			first = false;
		}
	}
	return recs;
}

const symbols = parseSymbols();
const symByName = new Map(symbols.map((s) => [s.name, s]));

// ---------------------------------------------------------------------------
// Report
// ---------------------------------------------------------------------------

console.log('file    : ' + FILE + '  (' + buf.length + ' bytes)');
console.log('format  : ' + h.format + (h.level !== undefined ? '  level ' + h.level : ''));

if (h.format === 'MP') {
	console.log('header  : ' + h.headerBytes + ' bytes');
	console.log('eip/esp : 0x' + h.eip.toString(16) + ' / 0x' + h.esp.toString(16));
	console.log('relocs  : ' + h.relocs + ' at 0x' + h.relocOff.toString(16));
	console.log('size    : blocks*512 - slop = ' + h.computed + (h.sizeOk ? '  EXACT' : '  MISMATCH'));
} else {
	console.log('header  : ' + h.headerBytes + ' bytes');
	console.log('rtparam : 0x' + h.rtOff.toString(16) + ' size ' + h.rtSize + ' sig ' + JSON.stringify(h.rtSig));
	console.log('size    : declared ' + h.declaredSize + (h.declaredSizeOk ? '  EXACT' : '  +' + (buf.length - h.declaredSize) + ' trailing (symbol table)'));
	console.log('load    : 0x' + h.loadStart.toString(16) + ' .. 0x' + h.loadEnd.toString(16) + '  (' + (h.loadEnd - h.loadStart) + ' bytes)' + (h.loadOk ? '' : '  INVALID'));
	console.log('symbols : ' + symbols.length + ' from SYM1 at 0x' + h.symAt.toString(16));
}

// ---------------------------------------------------------------------------
// Symbol address validation: the load-bearing claim
// ---------------------------------------------------------------------------

if (symbols.length) {
	const inLoad = symbols.filter((s) => s.value >= h.loadStart && s.value < h.loadEnd);
	const zero = symbols.filter((s) => s.value === 0);
	const outside = symbols.filter((s) => s.value !== 0 && (s.value < h.loadStart || s.value >= h.loadEnd));
	console.log(
		'addressing: ' + inLoad.length + ' symbols inside the load image, ' + zero.length + ' at zero, ' +
			outside.length + ' outside'
	);
	if (outside.length) {
		console.log('  outside entries:');
		for (const s of outside.slice(0, 10)) console.log('    0x' + s.value.toString(16) + '  ' + s.name);
	}
}

// ---------------------------------------------------------------------------
// Actions
// ---------------------------------------------------------------------------

if (has('--map')) {
	console.log('\nregions:');
	const regions = [];
	if (h.format === 'P3') {
		regions.push([0, h.headerBytes, 'P3 header']);
		regions.push([h.rtOff, h.rtOff + h.rtSize, 'runtime parameter block (DX)']);
		regions.push([h.loadStart, h.loadEnd, 'load image']);
		regions.push([h.symAt || h.loadEnd, buf.length, 'symbol table (SYM1)']);
	} else {
		regions.push([0, h.loadStart, 'MP header']);
		regions.push([h.loadStart, buf.length, 'flat load image']);
	}
	for (const [a, b, label] of regions) {
		if (b > a) {
			console.log('  0x' + a.toString(16).padStart(6, '0') + ' .. 0x' + b.toString(16).padStart(6, '0') +
				'  ' + String(b - a).padStart(7) + '  ' + label);
		}
	}
	// Where does the code actually live? Sample frame-pointer prologues.
	let pro = 0;
	for (let i = 0; i + 3 < buf.length; i++) if (buf[i] === 0x55 && buf[i + 1] === 0x8b && buf[i + 2] === 0xec) pro++;
	console.log('\n  push ebp / mov ebp,esp prologues in file: ' + pro);
}

const atName = arg('--at', null);
if (atName) {
	const s = symByName.get(atName);
	if (!s) {
		console.error('no such symbol: ' + atName);
		process.exit(1);
	}
	console.log('\n' + atName + ': 0x' + s.value.toString(16) + '  type ' + s.type);
	console.log('  bytes: ' + buf.subarray(s.value, s.value + 32).toString('hex'));
}

const disName = arg('--disasm', null);
if (disName) {
	const s = symByName.get(disName);
	if (!s) {
		console.error('no such symbol: ' + disName);
		process.exit(1);
	}
	const start = s.value;
	const len = Number(arg('--len', 192));
	const tmp = path.join(require('os').tmpdir(), 'pharlap-slice.bin');
	fs.writeFileSync(tmp, buf.subarray(start, start + len));
	console.log('\n== disassembly at ' + disName + ' (0x' + start.toString(16) + '), ' + len + ' bytes ==');
	try {
		const out = execSync(
			'ndisasm -b32 -e' + start + ' -o0x' + start.toString(16) + ' "' + tmp + '" 2>/dev/null',
			{ encoding: 'utf8', maxBuffer: 1 << 24 }
		);
		console.log(out.split('\n').slice(0, 40).join('\n'));
	} catch (e) {
		console.error('ndisasm failed: ' + e.message);
	}
}

const dumpPath = arg('--dump', null);
if (dumpPath) {
	const img = buf.subarray(h.loadStart, h.loadEnd || buf.length);
	fs.writeFileSync(dumpPath, img);
	console.log('\nwrote flat load image ' + img.length + ' bytes to ' + dumpPath);
	console.log('  disassemble with: ndisasm -b32 -e0x' + h.loadStart.toString(16) + ' -o0x' + h.loadStart.toString(16) + ' ' + dumpPath);
}
