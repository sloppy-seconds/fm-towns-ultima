#!/usr/bin/env node
'use strict';
// tools/codemask.js - where the walk did NOT reach, which is a lower bound on where code is not.
//
// WHY THIS EXISTS. The zero mask removes 76 percent of ENCHANT.EXP that cannot be code, because
// zeros decode as `add [eax], al` forever with no error. It does not remove data: strings, sprite
// banks and tables decode as valid x86 just as happily. What is left after the zero mask is
// 123,501 bytes of unknown, and that is what a walk can waste effort on or walk into.
//
// REACH, NOT DETECTION. There is no reliable general test for "this is data". A jump table is an
// array of code addresses, a string table is printable ASCII, and a 4bpp sprite bank is
// high-entropy bytes that decode exactly like a routine. A detector for those is five detectors
// with five failure modes. What a descent already knows is the answer to a different and
// easier question: it decoded instructions at these addresses, so code is there. Everything else
// is UNKNOWN, and is labelled unknown rather than data, because an unseeded function and a
// sprite bank are indistinguishable to this measurement.
//
// THE PRECEDENT THAT MAKES THIS CREDIBLE. A dword in the code band that points into the code
// band looked like a good seed source and was not: 234 candidates, adding conflicts twice as
// fast as functions. Data full of pointers looks like code full of calls. Reach has no such
// failure mode because it is a record of work done, not an inference about content.
//
// Usage:
//   node tools/codemask.js --from FILE         the ranges not reached, as LO:HI
//   node tools/codemask.js --from FILE --args  as --no-code flags
//   node tools/codemask.js --from FILE --outside-zero
//                                              only the unknown that is not already zero fill
//   node tools/codemask.js --from FILE --stats  a summary instead of the ranges
//
// FILE is the output of `fmtownskit.recomp.discover ... --code-ranges`, one LO:HI per line.
//
// THAT IS A THIRD-PARTY DEPENDENCY AND IT IS A SUBMODULE, NOT SOMETHING IN THIS REPOSITORY. fmtownskit lives at
// ./fmtownskit, pinned to a commit on https://github.com/paulczar/fmtownskit (a fork of vs-sr-dev/fmtownskit) with
// this project's MP support committed on branch mp-support. A stranger gets it with
// `git submodule update --init fmtownskit` and needs nothing else, which is why docs/fmtownskit-patches.md no
// longer describes applying a patch. Stated here because the alternative is a tool that looks self-contained and
// fails on the first command, and because AGENTS.md requires every result to be reproducible from the disc rather
// than from something produced in an earlier session.
//
// Exit status 1 if --from is missing or unreadable, because a mask that silently comes out empty
// would look exactly like a clean result.

const fs = require('fs');
const path = require('path');

const ROOT = path.join(__dirname, '..');

function loadImage() {
	const local = path.join(ROOT, 'ENCHANT.EXP');
	if (!fs.existsSync(local)) throw new Error('ENCHANT.EXP not present; see README section 1');
	return fs.readFileSync(local);
}

function parseRanges(text) {
	const out = [];
	for (const line of text.split('\n')) {
		const m = /^\s*(0x[0-9a-f]+|[0-9a-f]+)\s*:\s*(0x[0-9a-f]+|[0-9a-f]+)\s*$/i.exec(line);
		if (!m) continue;
		const lo = Number(m[1].toLowerCase().startsWith('0x') ? m[1] : '0x' + m[1]);
		const hi = Number(m[2].toLowerCase().startsWith('0x') ? m[2] : '0x' + m[2]);
		if (hi > lo) out.push([lo, hi]);
	}
	out.sort((a, b) => a[0] - b[0]);
	return out;
}

// The complement of `reached` over the whole image. Written as a subtraction rather than by
// walking the gaps between extents, so overlapping input cannot produce an overlong range.
//
// THE BUG THIS GUARDS. An earlier version tracked only the running end and pushed [cur, lo]
// whenever lo was above it. With extents that merely touch or nest, that emits a range starting
// before the previous one ended, and a printed width computed from the two numbers came out as
// 799,810 bytes for a span 0x3442 wide. Merging first makes both numbers come from the same place.
function complement(reached, size) {
	// merge touching and overlapping extents
	const merged = [];
	for (const [lo, hi] of reached) {
		if (merged.length && lo <= merged[merged.length - 1][1]) {
			merged[merged.length - 1][1] = Math.max(merged[merged.length - 1][1], hi);
		} else {
			merged.push([lo, hi]);
		}
	}
	const out = [];
	let cur = 0;
	for (const [lo, hi] of merged) {
		if (lo > cur) out.push([cur, lo]);
		cur = Math.max(cur, hi);
	}
	if (cur < size) out.push([cur, size]);
	return out;
}

// Range subtraction: everything in `a` that is not in `b`.
function subtract(a, b) {
	let cur = a.map((r) => [...r]);
	for (const [lo, hi] of b) {
		const out = [];
		for (const [s, e] of cur) {
			if (hi <= s || lo >= e) {
				out.push([s, e]);
				continue;
			}
			if (lo > s) out.push([s, lo]);
			if (hi < e) out.push([hi, e]);
		}
		cur = out;
	}
	return cur;
}

function hex(n) {
	return '0x' + n.toString(16);
}

function main() {
	const argv = process.argv.slice(2);
	const fromIdx = argv.indexOf('--from');
	if (fromIdx < 0 || !argv[fromIdx + 1]) {
		console.error('usage: node tools/codemask.js --from <code-ranges.txt> [--args] [--outside-zero] [--stats]');
		return 1;
	}
	let text;
	try {
		text = fs.readFileSync(argv[fromIdx + 1], 'utf8');
	} catch (e) {
		console.error('cannot read ' + argv[fromIdx + 1] + ': ' + e.message);
		return 1;
	}

	const img = loadImage();
	const reached = parseRanges(text);
	if (reached.length === 0) {
		// An empty input produces a mask covering the whole image, which would disable the walk.
		// Failing loudly is the only safe reading of "no ranges".
		console.error('no ranges parsed from ' + argv[fromIdx + 1] + ': refusing to emit a full mask');
		return 1;
	}

	let unknown = complement(reached, img.length);
	if (argv.includes('--outside-zero')) {
		const { zeroRuns, DEFAULT_MIN } = require('./codelimits.js');
		unknown = subtract(unknown, zeroRuns(img, DEFAULT_MIN));
	}

	const total = unknown.reduce((t, [a, b]) => t + b - a, 0);

	if (argv.includes('--stats')) {
		const code = reached.reduce((t, [a, b]) => t + b - a, 0);
		console.log(`reached:  ${reached.length} extents, ${code} bytes, ${((100 * code) / img.length).toFixed(1)}% of ${img.length}`);
		console.log(`unknown:  ${unknown.length} extents, ${total} bytes, ${((100 * total) / img.length).toFixed(1)}%`);
		const big = [...unknown].sort((x, y) => (y[1] - y[0]) - (x[1] - x[0]));
		console.log('largest unknown extents:');
		for (const [a, b] of big.slice(0, 10)) {
			const s = img.slice(a, b);
			let printable = 0;
			for (const x of s) if (x >= 32 && x < 127) printable++;
			console.log(`  ${hex(a)}..${hex(b)}  ${b - a} bytes, ${((100 * printable) / s.length).toFixed(0)}% printable`);
		}
		return 0;
	}

	if (argv.includes('--args')) {
		console.log(unknown.map(([a, b]) => `--no-code ${hex(a)}:${hex(b)}`).join(' '));
		return 0;
	}

	for (const [a, b] of unknown) console.log(`${hex(a)}:${hex(b)}`);
	return 0;
}

if (require.main === module) process.exit(main());

module.exports = { parseRanges, complement, subtract };
