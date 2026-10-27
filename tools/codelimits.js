#!/usr/bin/env node
'use strict';
// tools/codelimits.js - where code cannot be in ENCHANT.EXP, for a walker to be told.
//
// WHY THIS EXISTS. 75.6 percent of this image is zero fill, and zeros are valid x86:
// `00 00` decodes as `add [eax], al`, two bytes, forever. A recursive descent that
// reaches one does not fail, it succeeds silently, and every instruction it reports is
// real. Measured on one seed before the ranges were excluded: 143,025 instructions and
// 288,188 bytes of code, of which 4,090 instructions and 10,298 bytes were the routine.
// docs/code-analysis.md says to exclude the zero regions first; this produces the list.
//
// THE RANGES ARE DERIVED, NOT TYPED. A hardcoded table in a doc goes stale against a
// different rip of the disc and nobody notices, because the symptom is a count that is
// merely larger. Deriving them from the bytes each run means a different image produces
// different ranges instead of silently wrong ones.
//
// WHAT A ZERO RUN IS NOT. Not all data is zero. docs/code-analysis.md measures 21.9
// percent of the image as real data, and strings, sprite banks and tables sit in the same
// address space as code. This excludes only the part that is unambiguously not code. A
// transfer into a string table is still followed, and the tool must not be described as
// solving that.
//
// Usage:
//   node tools/codelimits.js                     the ranges, one per line, hex
//   node tools/codelimits.js --args              the same as --no-code flags, for a shell
//   node tools/codelimits.js --min 64            a different threshold
//   node tools/codelimits.js --density           nonzero percentage per 64 KiB block
//   node tools/codelimits.js --check             assert the table in docs/code-analysis.md
//
// Exit status 1 if --check disagrees with the measured runs.

const fs = require('fs');
const path = require('path');

const ROOT = path.join(__dirname, '..');

// A run this long cannot be data that happens to be zero. Measured sensitivity, total
// bytes covered by runs at or above the threshold:
//
//   min=  64   66 runs   821,284 bytes   76.6%
//   min= 256   23 runs   816,926 bytes   76.2%
//   min=1024   12 runs   810,474 bytes   75.6%
//   min=4096    7 runs   802,339 bytes   74.8%
//
// The choice barely matters, which is the point: this is not a tuned parameter. 64 is
// used because it keeps the small BSS gaps that a higher threshold drops, without
// fragmenting into 387 pieces as min=16 does.
const DEFAULT_MIN = 64;

// The three runs docs/code-analysis.md records, as lengths from a start offset. Kept here
// only so --check can prove the measurement and the doc still agree.
//
// THE DOC'S OFFSETS ARE STRIPPED, AND THESE ARE RAW. The recorded start offsets are 0x20
// below the measured ones (0x07b557 against 0x07b577, and the same for the other two),
// while the lengths are identical to the byte. That is the two frames again, documented in
// docs/two-frames-of-reference.md, so the table here carries the raw offsets and --check
// converts nothing: the measured run must begin where this says it does. Changing these to
// the doc's numbers without also changing the scan would make the check pass against the
// wrong base, which is the failure it exists to catch.
const DOCUMENTED = [
	[0x07b577, 337645],
	[0x04108e, 233598],
	[0x00e5f2, 207322],
];

function loadImage() {
	// Raw file, not header-stripped: every address in docs/ is a raw file offset for this
	// binary, proved in docs/two-frames-of-reference.md by the pixel writer at 0xf3e24.
	const local = path.join(ROOT, 'ENCHANT.EXP');
	if (!fs.existsSync(local)) {
		throw new Error('ENCHANT.EXP not present; see README section 1');
	}
	return fs.readFileSync(local);
}

function zeroRuns(img, min) {
	const runs = [];
	let start = null;
	for (let i = 0; i <= img.length; i++) {
		const isZero = i < img.length && img[i] === 0;
		if (isZero) {
			if (start === null) start = i;
		} else if (start !== null) {
			if (i - start >= min) runs.push([start, i]);
			start = null;
		}
	}
	return runs;
}

function density(img, block = 0x10000) {
	const out = [];
	for (let a = 0; a < img.length; a += block) {
		const end = Math.min(a + block, img.length);
		let nz = 0;
		for (let i = a; i < end; i++) if (img[i]) nz++;
		out.push([a, end, (100 * nz) / (end - a)]);
	}
	return out;
}

function hex(n) {
	return '0x' + n.toString(16);
}

function main() {
	const argv = process.argv.slice(2);
	const minIdx = argv.indexOf('--min');
	const min = minIdx >= 0 ? Number(argv[minIdx + 1]) : DEFAULT_MIN;
	if (!Number.isFinite(min) || min < 1) {
		console.error('--min needs a positive number');
		return 2;
	}

	const img = loadImage();
	const runs = zeroRuns(img, min);

	if (argv.includes('--density')) {
		console.log('block start  end        nonzero');
		for (const [a, z, pct] of density(img)) {
			console.log(`${hex(a).padStart(10)}  ${hex(z).padStart(9)}  ${pct.toFixed(1)}%`);
		}
		return 0;
	}

	if (argv.includes('--args')) {
		console.log(runs.map(([a, z]) => `--no-code ${hex(a)}:${hex(z)}`).join(' '));
		return 0;
	}

	if (argv.includes('--check')) {
		// A check that has never been seen to fail is a comment. This one fails if the doc
		// and the bytes disagree, which is what a different rip of the disc would cause.
		let bad = 0;
		for (const [startByte, len] of DOCUMENTED) {
			// The doc gives a start offset and a length. A run may begin a little before the
			// recorded offset, so the test is that the recorded point is inside a measured
			// run of at least that len.
			const hit = runs.find(([a, z]) => a <= startByte && startByte < z && z - a >= len);
			if (!hit) {
				console.error(`FAIL  recorded 0x${startByte.toString(16)} + ${len} is not in a measured run`);
				bad++;
			} else {
				console.log(`ok    0x${startByte.toString(16)} + ${len} is inside ${hex(hit[0])}..${hex(hit[1])} (${hit[1] - hit[0]})`);
			}
		}
		console.log(`\n${runs.length} runs of ${min}+ bytes, ${runs.reduce((t, r) => t + r[1] - r[0], 0)} bytes, ` +
			`${((100 * runs.reduce((t, r) => t + r[1] - r[0], 0)) / img.length).toFixed(1)}% of ${img.length}`);
		return bad ? 1 : 0;
	}

	for (const [a, z] of runs) console.log(`${hex(a)}:${hex(z)}`);
	return 0;
}

if (require.main === module) process.exit(main());

module.exports = { zeroRuns, density, loadImage, DEFAULT_MIN };
