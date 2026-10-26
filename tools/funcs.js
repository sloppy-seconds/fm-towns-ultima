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
// ENCHANT.EXP is a Phar Lap MP image whose header is 0x20 bytes. Code offsets in
// docs/ are RAW FILE OFFSETS (the pixel writer is at 0xf3e24 in the file), so every
// address this tool prints must be converted back to a raw offset before it is
// compared with a doc.
//
// This was a real and costly confusion: funcs.js works on stripped bytes and
// reports the pixel writer at 0xf3e04, which is the STRIPPED offset. The raw
// offset is 0xf3e24 and that is what docs/ quotes. Both numbers were correct in
// their own frame of reference, and the mismatch made three docs look wrong.
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
		// The buffer is the image with the 0x20 MP header stripped, so an offset in
		// buf equals a virtual address under base 0, and that is the address space the
		// rest of the project uses throughout.
		//
		// ndisasm's -o value becomes the label of the FIRST byte AND the base for
		// resolving relative branches, so it must be given the stripped address.
		// Passing the file address labelled everything 0x20 high, which made
		// `call 0xe1c5c` print as `call 0xe1c7c` and sent one afternoon chasing a
		// function that does not exist. Measured, not assumed: the randMod prologue
		// sits at stripped 0xe1c5c and raw 0xe1c7c.
		const entry = Number(args[1]);
		const len = args[2] ? Number(args[2]) : 0x200;
		// Bytes go to ndisasm on STDIN, not through a file. A fixed path here is the
		// exact hazard that produced a fabricated disassembly in tools/trycands.py:
		// when the write did not happen, ndisasm disassembled a stale file and the
		// output looked completely normal. tools/imgaudit.js asserts that no tool
		// disassembles a fixed /var/tmp path.
		// Label the origin as the STRIPPED address, which is the address space the whole
		// project uses (base 0 over the header-stripped image).
		//
		// This was wrong before: no -o was passed, so labels started at 0 while the
		// rest of the project used absolute stripped addresses. An earlier attempt
		// passed the FILE address instead, which labelled everything 0x20 high and made
		// `call 0xe1c5c` print as `call 0xe1c7c`. Both mistakes cost real time on a
		// function that does not exist.
		//
		// Measured, not assumed: the randMod prologue is at stripped 0xe1c5c and raw
		// 0xe1c7c.
		const text = execFileSync('ndisasm', ['-b32', '-w', '-o' + entry, '-'], {
			input: buf.subarray(entry, entry + len),
			encoding: 'utf8',
		});
		process.stdout.write(text);
		return;
	}

	// Is this address the START of a function, rather than an interior address that
// happens to be a CALL target?
//
// This distinction was missing and it caused real damage. `distinct CALL targets`
// counts 738, but some are interior addresses: 0xf3e04 is called 104 times and
// docs called it "the pixel writer" for weeks, while the actual function begins
// at 0xf3e24. 0xe6b1c is called 240 times and disassembles to `push ebp` then
// garbage, because the containing instruction is `89 94 08 41 07 00 00` and the
// target lands inside its displacement.
//
// The test: work backwards, strip alignment padding (`8b c0` = mov eax,eax, `90`
// nop, `cc` int3), and require a ret before it. A real entry follows the previous
// function's return.
//
// Measured: 454 of 738 targets pass. cfgwalk --check answers a different
// question and returns true for interior addresses too, so both are needed.
function isRealEntry(buf, addr, width = 8) {
	const tail = buf.slice(Math.max(0, addr - width), addr);
	let i = tail.length;
	while (i >= 2 && tail[i - 2] === 0x8b && tail[i - 1] === 0xc0) i -= 2;
	while (i >= 1 && (tail[i - 1] === 0x90 || tail[i - 1] === 0xcc)) i -= 1;
	if (i === 0) return false;
	return tail[i - 1] === 0xc3 || tail[i - 1] === 0xc2;
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

	// Report RAW FILE OFFSETS so the numbers match docs/. Internally everything is
	// in stripped space; add HEADER back on the way out.
	const raw = (t) => '0x' + (t + HEADER).toString(16);

	if (args[0] === '--list') {
		for (const [t, n] of byCount) {
			console.log(`${raw(t)}\t${n}`);
		}
		return;
	}

	const realEntries = byCount.filter(([t]) => isRealEntry(buf, t));
	const interior = byCount.filter(([t]) => !isRealEntry(buf, t));
	console.log(`targets that are real function starts: ${realEntries.length}`);
	console.log(`targets that are INTERIOR addresses:   ${interior.length}`);
	console.log();
	console.log('most-called targets:');
	for (const [t, n] of byCount.slice(0, 25)) {
		const mark = isRealEntry(buf, t) ? ' ' : '  <- interior, not a function start';
		console.log(`  ${raw(t)}\t${n} calls${mark}`);
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
