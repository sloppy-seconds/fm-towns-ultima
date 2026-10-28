#!/usr/bin/env node
// tools/propnames.js - propagate names from a build that kept symbols onto one that did not.
//
// WHY THIS EXISTS. TMENU.EXP carries a SYM1 table naming 1,725 things, and ENCHANT.EXP
// carries none. Both are Fujitsu-era binaries from the same disc, so a function that is
// shared library code should be byte-identical in both, and a 24-byte probe from the named
// one can be located in the unnamed one. That is the method references/UWReverseEngineering's
// FM Towns notes used to name 113 functions in a symbol-less build, and it needs no
// disassembly, no decompiler and no assumption about calling convention.
//
// WHAT IT IS NOT. A unique 24-byte match proves the bytes are shared, not that the meaning is
// the same in both programs. Library code is where this is safest (identical source, one
// compiler), and game code is where a match may be a coincidental common idiom. Every result
// is a candidate with an address, to be read before it is trusted.
//
// THE FRAME. TMENU's SYM1 values are 32-bit file offsets into its load image, which spans
// 0x200 to 0x33892 in the file, so a probe is taken at the value directly. ENCHANT.EXP is
// compared as raw file bytes, and the search reports where the probe landed in that file. Do
// not convert the landed offset to a runtime address here: ENCHANT's running image is the file
// with 0x200 bytes of header and stub removed (docs/cfg-findings.md), and mixing the two frames
// is this project's most expensive recurring mistake.
//
// THE DEGENERATE FILTER, and why it is not optional. A 24-byte probe of all zeros, or of one
// repeated byte, or of a table of identical dwords, appears thousands of times in a 1 MB image
// and would be reported as "not unique" for the wrong reason. Probes are dropped when they hold
// fewer than MIN_DISTINCT byte values or fewer than MIN_NONZERO nonzero bytes.
//
// THE CONTROL. `--shift N` moves every probe N bytes into the function. A real result collapses
// under that shift, because the byte sequence that identifies a function starts at its entry.
// If the shifted run produces the same hit count as the aligned one, the method is measuring
// something else.
//
// Usage:
//   node tools/propnames.js                 propagate, print a summary
//   node tools/propnames.js --shift 1       the control
//   node tools/propnames.js --tsv FILE      write name, tmenu offset, enchant offset
//   node tools/propnames.js --list          print every landed name
//
// Exit status 1 if TMENU or ENCHANT cannot be read, because an empty result from a missing
// input is indistinguishable from a method that found nothing.

'use strict';

const fs = require('fs');
const path = require('path');
const { Disc, defaultDisc } = require('./cd');

const ROOT = path.join(__dirname, '..');
const PROBE = 24;
const MIN_DISTINCT = 4;
const MIN_NONZERO = 8;

const args = process.argv.slice(2);
const shift = args.includes('--shift') ? Number(args[args.indexOf('--shift') + 1]) : 0;
const tsvAt = args.includes('--tsv') ? args[args.indexOf('--tsv') + 1] : null;
const list = args.includes('--list');

function fromDisc(name) {
	const discPath = defaultDisc(ROOT);
	if (!discPath) return null;
	const disc = new Disc(discPath);
	const cat = disc.catalogue();
	const hit = [...cat.keys()].find((k) => k.toUpperCase().endsWith(name.toUpperCase()));
	if (!hit) {
		disc.close();
		return null;
	}
	const buf = disc.get(cat, hit);
	disc.close();
	return buf;
}

function load(name) {
	const local = path.join(ROOT, name);
	if (fs.existsSync(local)) return { buf: fs.readFileSync(local), source: local };
	const buf = fromDisc(name);
	if (!buf) throw new Error(name + ' neither local nor on the disc');
	return { buf, source: 'disc' };
}

// The SYM1 record is [u8 namelen][name][u32 value][u16 type], and the first record carries six
// extra bytes before its value. The tail bytes are what matters for the stride, and the u32 read
// is what makes the values usable as offsets: docs/palette.md 6.12 measured 1,723 of 1,725
// values falling inside the declared load image only when the value is read as 32 bits.
const TAIL = 6;
const START = 0x0e;
const FIRST_EXTRA = 6;

function symbols(tmenu) {
	const at = tmenu.indexOf(Buffer.from('SYM1'));
	if (at < 0) throw new Error('no SYM1 in TMENU.EXP');
	const blob = tmenu.subarray(at);
	if (blob.toString('latin1', 0, 4) !== 'SYM1') throw new Error('bad SYM1 signature');
	const recs = [];
	let p = START;
	let first = true;
	while (p < blob.length) {
		const namelen = blob[p];
		if (namelen < 1 || namelen > 120) return { recs, exact: false, why: 'namelen ' + namelen };
		const nameEnd = p + 1 + namelen;
		if (nameEnd + TAIL > blob.length) return { recs, exact: false, why: 'overrun' };
		const name = blob.toString('latin1', p + 1, nameEnd);
		if (!/^[A-Za-z_][A-Za-z0-9_]*$/.test(name)) return { recs, exact: false, why: 'name ' + JSON.stringify(name) };
		const value = blob.readUInt32LE(nameEnd);
		const type = blob.readUInt16LE(nameEnd + 4);
		recs.push({ name, value, type });
		p = nameEnd + TAIL;
		if (first) {
			p += FIRST_EXTRA;
			first = false;
		}
	}
	return { recs, exact: p === blob.length, why: 'end' };
}

function distinctBytes(buf) {
	const seen = new Set();
	for (const b of buf) seen.add(b);
	return seen.size;
}

function countAt(hay, needle) {
	const hits = [];
	let at = hay.indexOf(needle, 0);
	while (at >= 0) {
		hits.push(at);
		at = hay.indexOf(needle, at + 1);
	}
	return hits;
}

function main() {
	const t = load('TMENU.EXP');
	const e = load('ENCHANT.EXP');
	console.log('TMENU.EXP:    ' + t.buf.length + ' bytes from ' + t.source);
	console.log('ENCHANT.EXP:  ' + e.buf.length + ' bytes from ' + e.source);

	const sym = symbols(t.buf);
	console.log('SYM1:         ' + sym.recs.length + ' records, walk ' + (sym.exact ? 'EXACT' : 'INEXACT (' + sym.why + ')'));
	if (!sym.exact) {
		console.log('Refusing to propagate names from a table that does not walk exactly.');
		return 1;
	}

	const stats = { named: sym.recs.length, zero: 0, outside: 0, degenerate: 0, tried: 0, none: 0, one: 0, many: 0 };
	const landed = [];
	const manyExamples = [];

	for (const r of sym.recs) {
		if (r.value === 0) {
			stats.zero++;
			continue;
		}
		const at = r.value + shift;
		if (at < 0 || at + PROBE > t.buf.length) {
			stats.outside++;
			continue;
		}
		const probe = t.buf.subarray(at, at + PROBE);
		if (distinctBytes(probe) < MIN_DISTINCT || probe.filter((b) => b !== 0).length < MIN_NONZERO) {
			stats.degenerate++;
			continue;
		}
		stats.tried++;
		const hits = countAt(e.buf, probe);
		if (hits.length === 0) {
			stats.none++;
		} else if (hits.length === 1) {
			stats.one++;
			landed.push({ name: r.name, tmenu: r.value, enchant: hits[0], type: r.type });
		} else {
			stats.many++;
			if (manyExamples.length < 5) manyExamples.push({ name: r.name, n: hits.length });
		}
	}

	console.log(
		'\nprobes: ' + stats.tried + ' usable of ' + stats.named + ' records' +
			'  (zero value ' + stats.zero + ', outside image ' + stats.outside + ', degenerate ' + stats.degenerate + ')'
	);
	console.log('  unique match in ENCHANT:  ' + stats.one);
	console.log('  no match:                 ' + stats.none);
	console.log('  matched more than once:   ' + stats.many);
	if (manyExamples.length) {
		console.log('  examples of the ambiguity: ' + manyExamples.map((x) => x.name + ' x' + x.n).join(', '));
	}
	if (stats.tried) {
		console.log('  unique rate:              ' + ((100 * stats.one) / stats.tried).toFixed(1) + ' percent of usable probes');
	}

	if (landed.length) {
		const bands = new Map();
		for (const l of landed) {
			const k = (l.enchant >> 16) << 16;
			bands.set(k, (bands.get(k) || 0) + 1);
		}
		console.log('\nlanded offsets in ENCHANT.EXP, by 64 KiB block:');
		for (const k of [...bands.keys()].sort((a, b) => a - b)) {
			console.log('  0x' + k.toString(16).padStart(6, '0') + ': ' + bands.get(k));
		}
		const l = landed.map((x) => x.enchant).sort((a, b) => a - b);
		console.log('  range: 0x' + l[0].toString(16) + ' to 0x' + l[l.length - 1].toString(16));
	}

	if (list) {
		console.log('');
		for (const l of landed.sort((a, b) => a.enchant - b.enchant)) {
			console.log('  0x' + l.enchant.toString(16).padStart(6, '0') + '  ' + l.name);
		}
	}

	if (tsvAt) {
		const out = path.join(ROOT, tsvAt);
		fs.mkdirSync(path.dirname(out), { recursive: true });
		const rows = ['enchant_offset\ttmenu_offset\ttype\tname'];
		for (const l of landed.sort((a, b) => a.enchant - b.enchant)) {
			rows.push('0x' + l.enchant.toString(16) + '\t0x' + l.tmenu.toString(16) + '\t' + l.type + '\t' + l.name);
		}
		fs.writeFileSync(out, rows.join('\n') + '\n');
		console.log('\nwrote ' + out + ' (' + landed.length + ' rows)');
	}
	return 0;
}

process.exit(main());
