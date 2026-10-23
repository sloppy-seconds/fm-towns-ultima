#!/usr/bin/env node
// tools/sweep.js - build an instruction-boundary set by linear sweep.
//
// Why this exists. tools/randmods.js byte-scans for E8 opcodes and reports a call site when
// the relative target matches. That produces false positives: an E8 inside an operand looks
// like a call. The concrete case:
//
//   byte scan says there is a randMod call at 0xef4bb
//   sweeping from the function entry gives:
//     000EF4BA  A1A0EC0C00  mov eax,[0xceca0]
//     ...so 0xef4bb is the SECOND BYTE of that mov, part of the address 0x0ceca0
//
// ndisasm already decodes x86-32 and emits one instruction per line at fixed columns, so
// this tool needs no instruction decoder of its own. It runs ndisasm once per function and
// collects the addresses that begin a real instruction.
//
// The one real risk: a sweep from a WRONG entry gives confidently wrong boundaries for the
// whole slice. The guard is the db-ratio. A correctly aligned sweep consumes its bytes as
// instructions and produces almost no `db` directives. A misaligned one produces many. The
// ratio is reported per function so bad entries can be spotted rather than trusted.
//
// Usage:
//   node tools/sweep.js --entry 0xef400 --len 0x100    sweep one function
//   node tools/sweep.js --funcs                        sweep every strongly-called function
//   node tools/sweep.js --check 0xef4bb --entry 0xef400 --len 0x100
//                                                      is this address an instruction boundary

'use strict';

const fs = require('fs');
const path = require('path');
const { execFileSync } = require('child_process');
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

// Parse one ndisasm line into { addr, bytes, text }.
// The layout is fixed: 8 hex digits, two spaces, the byte column padded, then the mnemonic.
const LINE = /^([0-9A-Fa-f]{8})\s+([0-9A-Fa-f ]+?)\s{2,}(.*)$/;

function sweep(img, entry, len) {
	const slice = img.subarray(entry, entry + len);
	const tmp = '/var/tmp/sweep.bin';
	fs.writeFileSync(tmp, slice);

	// -o sets the origin label, so addresses come back in the project's address space.
	const out = execFileSync('ndisasm', ['-b32', '-o' + entry, tmp], {
		encoding: 'utf8',
		maxBuffer: 64 * 1024 * 1024,
	});

	const insns = [];
	let dbBytes = 0;
	let insnBytes = 0;
	for (const line of out.split('\n')) {
		const m = LINE.exec(line);
		if (!m) continue;
		const addr = parseInt(m[1], 16);
		const bytes = m[2].replace(/\s/g, '');
		const text = m[3].trim();
		const size = bytes.length / 2;
		insns.push({ addr, size, text });
		if (/^(db|dw|dd)\b/.test(text)) dbBytes += size;
		else insnBytes += size;
	}

	const boundaries = new Set(insns.map((i) => i.addr));
	// The end of the last instruction is also a boundary in the sense of "not inside one".
	if (insns.length) {
		const last = insns[insns.length - 1];
		boundaries.add(last.addr + last.size);
	}

	const total = dbBytes + insnBytes;
	return {
		entry,
		len,
		insns,
		boundaries,
		dbBytes,
		insnBytes,
		dbRatio: total ? dbBytes / total : 1,
		// A trustworthy sweep has a low db ratio and ends near the slice end.
		endGap: insns.length ? entry + len - (insns[insns.length - 1].addr + insns[insns.length - 1].size) : len,
	};
}

// A sweep is trustworthy when most bytes decode as instructions.
function trustworthy(r) {
	return r.dbRatio < 0.15;
}

function functionList(img) {
	// Reuse the CALL-target collection from funcs.js rather than duplicating it.
	const calls = new Map();
	for (let i = 0; i < img.length - 5; i++) {
		if (img[i] !== 0xe8) continue;
		const target = (i + 5 + img.readInt32LE(i + 1)) >>> 0;
		if (target < img.length) calls.set(target, (calls.get(target) || 0) + 1);
	}
	return [...calls.entries()].filter(([, n]) => n >= 3).map(([t]) => t);
}

function main() {
	const img = loadImage();
	const args = process.argv.slice(2);
	const get = (flag, dflt) => {
		const i = args.indexOf(flag);
		return i >= 0 ? Number(args[i + 1]) : dflt;
	};

	if (args.includes('--check')) {
		const entry = get('--entry', 0);
		const len = get('--len', 0x400);
		const check = get('--check', 0);
		const r = sweep(img, entry, len);
		const isBoundary = r.boundaries.has(check);
		console.log(`sweep 0x${entry.toString(16)} + 0x${len.toString(16)}`);
		console.log(`  instructions: ${r.insns.length}, db ratio ${(100 * r.dbRatio).toFixed(1)}%`);
		console.log(`  trustworthy:  ${trustworthy(r)}`);
		console.log(`  is 0x${check.toString(16)} an instruction boundary: ${isBoundary}`);
		// Show the instruction that contains it, if any.
		for (const ins of r.insns) {
			if (check >= ins.addr && check < ins.addr + ins.size) {
				console.log(
					`  it lies inside 0x${ins.addr.toString(16)} (${ins.size} bytes) ${ins.text}`
				);
			}
		}
		return;
	}

	if (args.includes('--funcs')) {
		const targets = functionList(img);
		console.log(`sweeping ${targets.length} strongly-called functions\n`);
		let good = 0;
		const bad = [];
		for (const entry of targets) {
			const r = sweep(img, entry, 0x200);
			if (trustworthy(r)) good++;
			else bad.push({ entry, ratio: r.dbRatio });
		}
		console.log(`trustworthy sweeps: ${good} of ${targets.length}`);
		if (bad.length) {
			console.log('\nfunctions whose sweep looked misaligned (db ratio >= 15%):');
			for (const b of bad.slice(0, 15)) {
				console.log(
					`  0x${b.entry.toString(16)}  db ${(100 * b.ratio).toFixed(1)}%`
				);
			}
			if (bad.length > 15) console.log(`  ... and ${bad.length - 15} more`);
		}
		return;
	}

	// Default: sweep the entry given, or 0xe1c5c as a smoke test.
	const entry = get('--entry', 0xe1c5c);
	const len = get('--len', 0x40);
	const r = sweep(img, entry, len);
	console.log(`sweep 0x${entry.toString(16)}, ${len} bytes`);
	for (const i of r.insns) {
		console.log(
			`  0x${i.addr.toString(16)}  ${String(i.size).padStart(2)}  ${i.text}`
		);
	}
	console.log(`\n  ${r.insns.length} instructions, db ${(100 * r.dbRatio).toFixed(1)}%`);
}

if (require.main === module) main();
