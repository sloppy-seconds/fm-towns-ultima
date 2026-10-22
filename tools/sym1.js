#!/usr/bin/env node
// tools/sym1.js - parse the SYM1 symbol table out of TMENU.EXP.
//
// See FINDINGS.md 6.8. The layout below is derived from the data and validated
// by requiring the walk to consume the blob exactly.
//
//   [u8 namelen][name bytes][u16 value][u16 zero][u16 type]
//
// That is 6 bytes after the name. Uniform across 1,724 records. The single
// irregularity is the FIRST record, PROGRAM, which carries 6 extra bytes before
// its value field. With that one correction the walk lands on 0x7b7a, which is
// exactly the blob length, for 1,725 records.
//
// Byte evidence, from the hexdump:
//
//   0x0e  07            namelen 7
//   0x0f  "PROGRAM"     0x0f..0x15, ends 0x16
//   0x16  00 00 00 00   extra 6 bytes unique to the first record
//   0x1c  94 38 04 00   value 0x00043894
//   0x20  0c 00         type 0x000c
//   0x22  0a            next namelen
//   0x23  "ACT_HANDLE"  ends 0x2d
//   0x2d  f3 d2 00 00   value 0xd2f3
//   0x31  01 00         type 1
//   0x33  0a            next namelen
//
// Four earlier attempts failed by assuming a fixed record stride, a padded name
// field, or a u32 value. The lesson is in AGENTS.md: anchor on the names, then
// measure the gap, rather than guessing the field layout.
//
// Usage:
//   node tools/sym1.js              parse and summarise
//   node tools/sym1.js --dump       write analysis/SYM1-symbols.txt
//   node tools/sym1.js --find EGB   list symbols matching a pattern

'use strict';

const fs = require('fs');
const path = require('path');
const { Disc, defaultDisc } = require('./cd');

const ROOT = path.join(__dirname, '..');
const args = process.argv.slice(2);
const DUMP = args.includes('--dump');
const findIdx = args.indexOf('--find');
const FIND = findIdx >= 0 ? args[findIdx + 1] : null;

// ---------------------------------------------------------------------------
// Source: the live disc if present, so this stays reproducible from the zip.
// ---------------------------------------------------------------------------

function loadBlob() {
	const discPath = defaultDisc(ROOT);
	if (discPath && fs.existsSync(discPath)) {
		const disc = new Disc(discPath);
		const cat = disc.catalogue();
		const tmenu = disc.get(cat, 'TMENU.EXP');
		disc.close();
		const at = tmenu.indexOf(Buffer.from('SYM1'));
		if (at < 0) throw new Error('SYM1 not found in TMENU.EXP');
		return { blob: tmenu.subarray(at), at, source: 'disc' };
	}
	const cached = path.join(ROOT, 'analysis', 'SYM1-TMENU.bin');
	if (fs.existsSync(cached)) return { blob: fs.readFileSync(cached), at: 0, source: cached };
	throw new Error('no disc and no analysis/SYM1-TMENU.bin');
}

const { blob, at, source } = loadBlob();
console.log(
	'SYM1 blob: ' + blob.length + ' bytes from ' + source + (at ? ' (file offset 0x' + at.toString(16) + ')' : '')
);

if (blob.toString('latin1', 0, 4) !== 'SYM1') throw new Error('bad signature');
console.log(
	'header: u16 ' +
		blob.readUInt16LE(4) +
		', ' +
		blob.readUInt16LE(6) +
		', ' +
		blob.readUInt16LE(8) +
		'  u32 0x' +
		blob.readUInt32LE(10).toString(16)
);

// ---------------------------------------------------------------------------
// Walk
// ---------------------------------------------------------------------------

const START = 0x0e; // namelen byte of the first record
const TAIL = 6; // bytes after the name for every record
const FIRST_EXTRA = 6; // extra bytes unique to the first record

function walk(startOff) {
	const recs = [];
	let p = startOff;
	let first = true;
	while (p < blob.length) {
		if (p + 1 > blob.length) return { recs, p, why: 'truncated' };
		const namelen = blob[p];
		if (namelen < 1 || namelen > 120) return { recs, p, why: 'namelen ' + namelen };
		const nameEnd = p + 1 + namelen;
		if (nameEnd + TAIL > blob.length) return { recs, p, why: 'overrun' };
		const name = blob.toString('latin1', p + 1, nameEnd);
		if (!/^[A-Za-z_][A-Za-z0-9_]*$/.test(name)) return { recs, p, why: 'name ' + JSON.stringify(name) };
		const value = blob.readUInt16LE(nameEnd);
		const zero = blob.readUInt16LE(nameEnd + 2);
		const type = blob.readUInt16LE(nameEnd + 4);
		recs.push({ name, value, zero, type, at: p });
		p = nameEnd + TAIL;
		if (first) {
			p += FIRST_EXTRA;
			first = false;
		}
	}
	return { recs, p, why: 'end' };
}

const result = walk(START);
const exact = result.p === blob.length;

console.log(
	'\nwalk from 0x' + START.toString(16) + ': ' + result.recs.length + ' records, ended 0x' +
		result.p.toString(16) + ' of ' + blob.length + ' -> ' + (exact ? 'EXACT' : 'INEXACT (' + result.why + ')')
);

if (!exact) {
	console.log('Framing is wrong. Refusing to report symbols.');
	process.exit(1);
}

// ---------------------------------------------------------------------------
// Sanity
// ---------------------------------------------------------------------------

const nonzero = result.recs.filter((r) => r.value !== 0);
const types = new Map();
for (const r of result.recs) types.set(r.type, (types.get(r.type) || 0) + 1);
const zeros = result.recs.filter((r) => r.zero !== 0).length;

console.log(
	'values: ' +
		nonzero.length +
		' nonzero, 16-bit range 0x' +
		Math.min(...nonzero.map((r) => r.value)).toString(16) +
		' - 0x' +
		Math.max(...result.recs.map((r) => r.value)).toString(16)
);
console.log(
	'types: ' +
		[...types.entries()]
			.sort((a, b) => b[1] - a[1])
			.map(([t, n]) => t + ' x' + n)
			.join(', ')
);
if (zeros) console.log('WARNING: ' + zeros + ' records have a nonzero reserved field');

// ---------------------------------------------------------------------------
// Report
// ---------------------------------------------------------------------------

const fmt = (r) => '0x' + r.value.toString(16).padStart(4, '0') + '  ' + r.name;

if (FIND) {
	const re = new RegExp(FIND, 'i');
	const hits = result.recs.filter((r) => re.test(r.name));
	console.log('\n' + hits.length + ' symbols matching /' + FIND + '/i');
	for (const r of hits) console.log('  ' + fmt(r));
} else {
	console.log('\nfirst 12 symbols:');
	for (const r of result.recs.slice(0, 12)) console.log('  ' + fmt(r));
	const gp = result.recs.filter((r) => /palet|color|colour|EBG|EGB|graph|video|screen/i.test(r.name));
	console.log('\ncolour/palette/graphics symbols (' + gp.length + '):');
	for (const r of gp) console.log('  ' + fmt(r));
}

if (DUMP) {
	const outDir = path.join(ROOT, 'analysis');
	fs.mkdirSync(outDir, { recursive: true });
	const out = path.join(outDir, 'SYM1-symbols.txt');
	const lines = result.recs.map((r) => r.value.toString(16).padStart(4, '0') + '  ' + r.type + '  ' + r.name);
	fs.writeFileSync(out, 'addr  type  name\n' + lines.join('\n') + '\n');
	console.log('\nwrote ' + out + ' (' + result.recs.length + ' symbols)');
}
