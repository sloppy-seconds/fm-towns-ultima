#!/usr/bin/env node
// tools/randmods.js - classify every call site of the random helper 0xe1c5c.
//
// 0xe1c5c is randMod(n), returning rng % (n+1), so 0 to n inclusive. Its call sites are
// where game logic asks for a random number, and the shape of each site gives the odds.
//
// TWO TRAPS, both hit on the first attempt:
//
// 1. A raw scan for byte 0xE8 finds "call" opcodes inside instruction operands. Three
//    apparent sites turned out to be mid-instruction garbage. The filter that removes
//    most of them: a real site must be preceded by a push that supplies the argument,
//    and must have a cmp on the result. Sites failing both are reported as suspect.
//
// 2. The comparison is frequently further than 28 bytes away, or on edx rather than
//    eax. The search window is now 48 bytes and both registers are checked.
//
// Usage:
//   node tools/randmods.js                table
//   node tools/randmods.js --suspects     only the ones that did not resolve
//   node tools/randmods.js --at 0xf25b4   disassemble around a site

'use strict';

const fs = require('fs');
const path = require('path');
const { decode, decodeMany, format } = require('./decode');

const ROOT = path.join(__dirname, '..');
const TARGET = 0xe1c5c;
// img is the file sliced by 0x20, so a frame address in this file is a raw
// file offset minus 0x20. decode() speaks raw file offsets; SLICE converts
// at the boundary and nowhere else.
const SLICE = 0x20;
const img = fs.readFileSync(path.join(ROOT, 'ENCHANT.EXP')).slice(SLICE);

// Instruction-boundary filtering.
//
// A raw E8 scan finds call opcodes inside operands. Proven case: 0xef4bb looks like a
// randMod call but is the second byte of `mov eax,[0xceca0]` at 0xef4ba.
//
// When --sweep is passed, every candidate site is checked against the instruction
// boundaries produced by tools/sweep.js and rejected if no instruction starts there.
// A FULL-IMAGE sweep is not usable and this is worth recording.
//
// Sweeping from offset 0 decodes the loader stub and any data as instructions, so the
// boundaries drift and the whole set is wrong. Measured: the full sweep reports
// stripped 0xe391e as a boundary and stripped 0xe391d (the real `cmp edx,0x48`) as
// NOT one, which is exactly backwards.
//
// Per-function sweeps are trustworthy because they start at a verified entry. So the
// boundary set is built function by function from the CALL-target list, which is what
// tools/sweep.js --funcs does.
function boundarySet() {
	const calls = new Map();
	for (let i = 0; i < img.length - 5; i++) {
		if (img[i] !== 0xe8) continue;
		const t = (i + 5 + img.readInt32LE(i + 1)) >>> 0;
		if (t < img.length) calls.set(t, (calls.get(t) || 0) + 1);
	}
	// Sweep EVERY call target, not just the strongly-called ones. A function called
	// once still contains real instructions, and a site inside it would otherwise
	// never be checked. Measured: 0xe393e is a false positive inside 0xe3904, which
	// has exactly one caller, so a >=3 filter let it through.
	const entries = [...calls.keys()];

	const set = new Set();
	// One worker process for every entry (plan item 4h): the retired path paid an
	// ndisasm spawn per entry and parsed its columns.
	const results = decodeMany(entries.map((e) => [e + SLICE, e + SLICE + 0x200]));
	for (const r of results) {
		for (const ins of r.insns) set.add(ins.addr - SLICE);
	}
	return set;
}

function sites() {
	const out = [];
	for (let i = 0; i < img.length - 5; i++) {
		if (img[i] !== 0xe8) continue;
		if (((i + 5 + img.readInt32LE(i + 1)) >>> 0) === TARGET) out.push(i);
	}
	return out;
}

// The argument push, searched backwards but stopped at anything that looks like a
// previous call, so we cannot walk into the preceding statement.
function argumentFor(at) {
	for (let p = at - 1; p > at - 20 && p >= 0; p--) {
		if (img[p] === 0xe8) return { kind: 'none', value: null };
		if (img[p] === 0x6a) return { kind: 'imm8', value: img[p + 1] };
		if (img[p] === 0x68 && p + 5 <= at) return { kind: 'imm32', value: img.readUInt32LE(p + 1) };
		if (img[p] >= 0x50 && img[p] <= 0x57) return { kind: 'reg', value: null };
	}
	return { kind: 'none', value: null };
}

// A comparison on eax or edx within 48 bytes of the call, skipping over the stack
// cleanup. Both `cmp reg,imm8` and `cmp reg,imm32` are handled.
function comparisonFor(at) {
	for (let p = at + 5; p < at + 48 && p < img.length - 6; p++) {
		// 83 f8 nn  cmp eax,imm8      83 fa nn  cmp edx,imm8
		if (img[p] === 0x83 && (img[p + 1] === 0xf8 || img[p + 1] === 0xfa)) {
			return { reg: img[p + 1] === 0xf8 ? 'eax' : 'edx', value: img[p + 2] };
		}
		// 3d imm32  cmp eax,imm32
		if (img[p] === 0x3d) return { reg: 'eax', value: img.readUInt32LE(p + 1) };
		// 81 f8 imm32  cmp eax,imm32     81 fa imm32  cmp edx,imm32
		if (img[p] === 0x81 && (img[p + 1] === 0xf8 || img[p + 1] === 0xfa)) {
			return { reg: img[p + 1] === 0xf8 ? 'eax' : 'edx', value: img.readUInt32LE(p + 2) };
		}
		// Stop if we run into another call, which means we left the statement.
		if (img[p] === 0xe8) return null;
	}
	return null;
}

function main() {
	const args = process.argv.slice(2);
	if (args[0] === '--at') {
		const entry = Number(args[1]);
		// Same byte window as the retired ndisasm call (raw [entry, entry+0xc0),
		// which is this frame's [entry-0x20, entry+0xa0): 0x20 of context before
		// the site). The old `-o` labeled those bytes 0x20 too high; these labels
		// are true in this file's frame.
		const { insns } = decode(entry, entry + 0xc0);
		process.stdout.write(insns.map((i) => format({ ...i, addr: i.addr - SLICE })).join('\n') + '\n');
		return;
	}

	let all = sites();
	const filtered = args.includes('--sweep');
	if (filtered) {
		const bnd = boundarySet();
		const before = all.length;
		all = all.filter((at) => bnd.has(at));
		console.log(`boundary filter: ${before} raw hits -> ${all.length} real call sites\n`);
	}
	const rows = [];
	for (const at of all) {
		const a = argumentFor(at);
		const c = comparisonFor(at);
		rows.push({ at: at + 0x20, a, c });
	}

	const good = rows.filter((r) => r.a.kind !== 'none' && r.c);
	const suspect = rows.filter((r) => r.a.kind === 'none' || !r.c);

	if (args.includes('--suspects')) {
		console.log(`${suspect.length} sites that did not resolve:\n`);
		for (const r of suspect) {
			console.log(
				`  0x${r.at.toString(16).padEnd(9)} arg=${r.a.kind.padEnd(6)} cmp=${r.c ? 'yes' : 'no'}`
			);
		}
		return;
	}

	console.log(`calls to randMod (0xe1c5c): ${all.length}`);
	console.log(`  resolved to arg + comparison: ${good.length}`);
	console.log(`  unresolved:                   ${suspect.length}`);
	console.log();
	console.log('site       n   span  cmp   odds');
	console.log('-'.repeat(46));

	for (const r of good) {
		const n = r.a.value;
		const span = n + 1;
		const k = r.c.value;
		console.log(
			`0x${r.at.toString(16).padEnd(8)} ${String(n).padStart(3)} ${String(span).padStart(5)}` +
				` ${String(k).padStart(4)}   ${k}/${span}`
		);
	}

	// Only odds where k is within the span make sense. Anything else is a misparse.
	const sane = good.filter((r) => r.c.value <= r.a.value + 1);
	console.log(`\nodds that are numerically consistent: ${sane.length} of ${good.length}`);

	const dist = new Map();
	for (const r of sane) {
		const key = `${r.c.value}/${r.a.value + 1}`;
		dist.set(key, (dist.get(key) || 0) + 1);
	}
	console.log('\nmost common odds across the game:');
	for (const [k, n] of [...dist.entries()].sort((a, b) => b[1] - a[1]).slice(0, 15)) {
		const pct = ((100 * Number(k.split('/')[0])) / Number(k.split('/')[1])).toFixed(1);
		console.log(`  ${k.padEnd(9)} ${pct.padStart(5)}%   ${n} sites`);
	}
}

if (require.main === module) main();
