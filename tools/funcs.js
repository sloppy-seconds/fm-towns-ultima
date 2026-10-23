#!/usr/bin/env node
// tools/funcs.js - find real function entry points in ENCHANT.EXP.
//
// Why this exists. docs/code-analysis.md records that "most functions are compiled
// without a frame prologue", so counting `push ebp / mov ebp,esp` finds only a
// minority. Every byte-pattern probe in this project has been unreliable for exactly
// that reason: a search that starts mid-instruction finds matches that are not
// instructions at all.
//
// The one reliable signal is the CALL instruction. Every `E8 rel32` has an exact
// target, and that target is by definition a function entry. This tool collects them.
// It also follows `E9` jumps only to report them separately, because a jump target is
// a basic block, not necessarily a function.
//
// What this does NOT do: disassemble. It finds entries. Reading a function is done by
// disassembling from a known entry, which is the only way to get alignment right.
//
// Usage:
//   node tools/funcs.js                 summary and the most-called targets
//   node tools/funcs.js --list          every entry, one per line
//   node tools/funcs.js --at 0xe7b38    disassemble from a given entry

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

// Collect CALL REL32 targets (E8) and JMP REL32 targets (E9), scanning every byte.
// Scanning every byte over-counts: a byte that happens to be 0xE8 inside an operand
// produces a bogus target. The filter that removes most of them is that a real call
// target lands inside the image's code, and appears many times.
function collectCalls(buf) {
	const calls = new Map();
	const jumps = new Map();
	for (let i = 0; i < buf.length - 5; i++) {
		const op = buf[i];
		if (op !== 0xe8 && op !== 0xe9) continue;
		const rel = buf.readInt32LE(i + 1);
		const target = (i + 5 + rel) >>> 0;
		if (target >= buf.length) continue;
		const m = op === 0xe8 ? calls : jumps;
		m.set(target, (m.get(target) || 0) + 1);
	}
	return { calls, jumps };
}

function main() {
	const buf = loadImage();
	const args = process.argv.slice(2);

	if (args[0] === '--at') {
		const entry = Number(args[1]);
		const len = args[2] ? Number(args[2]) : 0x200;
		const out = '/var/tmp/funcs-at.bin';
		fs.writeFileSync(out, buf.subarray(entry, entry + len));
		const text = execFileSync(
			'ndisasm',
			['-b32', '-o' + entry, out],
			{ encoding: 'utf8' }
		);
		process.stdout.write(text);
		return;
	}

	const { calls, jumps } = collectCalls(buf);

	// A target called from many distinct places is overwhelmingly likely to be a real
	// function. A target called once could be a coincidental byte. Report the counts so
	// the distinction is visible rather than hidden by a threshold.
	const byCount = [...calls.entries()].sort((a, b) => b[1] - a[1]);
	console.log(`image: ${buf.length} bytes, base 0`);
	console.log(`distinct CALL targets: ${calls.size}`);
	console.log(`distinct JMP  targets: ${jumps.size}`);
	console.log(`call sites (raw E8 scan): ${[...calls.values()].reduce((a, b) => a + b, 0)}`);
	console.log();

	const strong = byCount.filter(([, n]) => n >= 3);
	const medium = byCount.filter(([, n]) => n === 2);
	const weak = byCount.filter(([, n]) => n === 1);
	console.log(`targets called >=3 times: ${strong.length}`);
	console.log(`targets called exactly twice: ${medium.length}`);
	console.log(`targets called once: ${weak.length}`);
	console.log();

	if (args[0] === '--list') {
		for (const [t, n] of byCount) {
			console.log(`0x${t.toString(16)}\t${n}`);
		}
		return;
	}

	console.log('most-called targets:');
	for (const [t, n] of byCount.slice(0, 25)) {
		console.log(`  0x${t.toString(16)}\t${n} calls`);
	}

	// A real function entry very often has the bytes of a prologue or a distinctive
	// first instruction. Report how many of the strong targets look like that, which
	// tells us whether the prologue heuristic is as useless as the docs claim.
	let withPrologue = 0;
	for (const [t] of strong) {
		const b0 = buf[t];
		const b1 = buf[t + 1];
		// push ebp; mov ebp,esp   ->  55 8b ec
		if (b0 === 0x55 && b1 === 0x8b && buf[t + 2] === 0xec) withPrologue++;
	}
	console.log();
	console.log(
		`of ${strong.length} strongly-called targets, ${withPrologue} start with 55 8b ec`
	);
	console.log(
		`that is ${((100 * withPrologue) / strong.length).toFixed(1)}%, which tests the`
	);
	console.log('claim in docs/code-analysis.md that most functions have no prologue.');
}

if (require.main === module) main();
