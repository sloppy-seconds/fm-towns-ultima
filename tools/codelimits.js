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
//   node tools/codelimits.js --file TBIOS.BIN --args   the same for another module's image
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

function loadImage(file) {
	// Raw file, not header-stripped: every address in docs/ is a raw file offset for this
	// binary, proved in docs/two-frames-of-reference.md by the pixel writer at 0xf3e24.
	const local = file || path.join(ROOT, 'ENCHANT.EXP');
	if (!fs.existsSync(local)) {
		throw new Error('ENCHANT.EXP not present; see README section 1');
	}
	return fs.readFileSync(local);
}

// THE MP HEADER IS NOT CODE EITHER, AND FINDING ZERO RUNS DOES NOT CATCH IT.
//
// A walk seeded inside the low addresses decoded the 30-byte header as instructions and reported
// conflicts at 0x5, 0x6 and 0x7, which are the bytes `4d 50 0e 01 2f 08`. The header is not zero,
// so zeroRuns cannot see it, and without this the descent treats `MP\x0e\x01/\x08` as `dec/push/
// push/add/or`. Masking 0x0:0x1e removes 7 conflicts on ENCHANT.EXP.
//
// The size comes from the header's own field at 0x18, and is checked rather than trusted: a value
// outside 0x1e..0x400 is refused by exp.py, so only a plausible one is masked here.
function headerRange(img) {
	if (img.length < 0x1a || img.slice(0, 2).toString() !== 'MP') return [];
	const size = img.readUInt16LE(0x18);
	if (size < 0x1e || size > 0x400) return [];
	return [[0, size]];
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

	// A second image, for a module that is not ENCHANT. The ranges are in that file's own frame,
	// which for the TBIOS module is the runtime frame already, since boot_towns puts the image at a
	// page boundary and the module is keyed by offsets into it. --check is refused with --file
	// because DOCUMENTED describes ENCHANT's fill and would be meaningless against another image.
	const fileIdx = argv.indexOf('--file');
	const file = fileIdx >= 0 ? argv[fileIdx + 1] : null;
	if (fileIdx >= 0 && !file) {
		console.error('--file needs a path');
		return 2;
	}
	if (file && argv.includes('--check')) {
		console.error('--check asserts the table for ENCHANT.EXP; it means nothing with --file');
		return 2;
	}

	const img = loadImage(file);
	const runs = [...headerRange(img), ...zeroRuns(img, min)];

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
		const zr = zeroRuns(img, min);
		console.log(`\n${zr.length} zero runs of ${min}+ bytes, plus the ${headerRange(img).length} header range; ` +
			`${runs.reduce((t, r) => t + r[1] - r[0], 0)} bytes masked in total, ` +
			`${((100 * runs.reduce((t, r) => t + r[1] - r[0], 0)) / img.length).toFixed(1)}% of ${img.length}`);
		return bad ? 1 : 0;
	}

	for (const [a, z] of runs) console.log(`${hex(a)}:${hex(z)}`);
	return 0;
}

if (require.main === module) process.exit(main());

module.exports = { zeroRuns, headerRange, density, loadImage, DEFAULT_MIN };
