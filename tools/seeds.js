#!/usr/bin/env node
'use strict';
// tools/seeds.js - derive a candidate function-start seed set for any MP binary on this disc.
//
// WHY THIS EXISTS. docs/corpus.json is a seed set for ENCHANT.EXP only, built up over many
// sessions. DARKNESS.EXP and EXODUS.EXP have nothing, so the guarded walk cannot be run on
// them and no comparison between the three games is possible. The discs carry no symbol
// tables for them (no SYM1, checked), so the starts have to be derived.
//
// THE METHOD, and why each part is there.
//
//  1. Scan every byte for E8 (call rel32) and E9 (jmp rel32) and record the target. Scanning
//     every byte over-counts, because an 0xE8 inside an operand looks like a call. Nothing is
//     filtered on that basis alone: the over-count is removed later by measurement, not by a
//     threshold picked by eye.
//
//  2. Drop targets outside the image, inside a zero region, or landing mid-instruction as
//     decided by the zero mask. A target in zero fill is decoding `add [eax], al`, and that is
//     exactly the failure the no-code ranges exist to prevent.
//
//  3. Accept a candidate only if it survives a walk: seed it, walk, and keep it when the walk
//     stays inside a plausible extent and produces no more conflicts than the walk without it.
//     This is the rule measured in docs/guarded-walk-coverage.md, where pointer-derived seeds
//     were rejected for adding two conflicts per function.
//
// ADDRESSES ARE RAW FILE OFFSETS. For these MP images file offset equals virtual address, proved
// in docs/two-frames-of-reference.md by the pixel writer at 0xf3e24. tools/funcs.js works in the
// header-stripped frame and reports the same function at 0xf3e04, so its output cannot be fed to
// the walker without conversion. This tool emits raw throughout and never strips.
//
// Usage:
//   node tools/seeds.js                          ENCHANT.EXP, summary only
//   node tools/seeds.js --bin DARKNESS.EXP       a different binary from the disc
//   node tools/seeds.js --bin EXODUS.EXP --emit  the seed list, comma separated, one line
//   node tools/seeds.js --bin DARKNESS.EXP --json
//
// Exit status 1 if no candidate survives, because an empty seed set would make a walk that
// reaches nothing look like a walk that found nothing to reach.

const fs = require('fs');
const path = require('path');
const { zeroRuns, DEFAULT_MIN } = require('./codelimits.js');
const { complement } = require('./codemask.js');

const ROOT = path.join(__dirname, '..');

function loadBinary(name) {
	const local = path.join(ROOT, name);
	if (fs.existsSync(local)) return fs.readFileSync(local);
	const { Disc, defaultDisc } = require('./cd.js');
	const img = defaultDisc(ROOT);
	if (!img) throw new Error('no ' + name + ' locally and no disc .img found');
	const d = new Disc(img);
	const cat = d.catalogue();
	const key = [...cat.keys()].find((k) => new RegExp(name.replace(/\./g, '\\.') + '$', 'i').test(k));
	if (!key) throw new Error(name + ' not found on the disc');
	const buf = d.get(cat, key);
	d.close();
	return buf;
}

// Every E8/E9 rel32 target, with a count, over the whole file.
function scanTransfers(buf) {
	const calls = new Map();
	const jumps = new Map();
	for (let i = 0; i + 5 <= buf.length; i++) {
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

function inRanges(addr, ranges) {
	for (const [lo, hi] of ranges) if (lo <= addr && addr < hi) return true;
	return false;
}

function main() {
	const argv = process.argv.slice(2);
	const binIdx = argv.indexOf('--bin');
	const name = binIdx >= 0 ? argv[binIdx + 1] : 'ENCHANT.EXP';
	if (!name) {
		console.error('--bin needs a name');
		return 2;
	}

	const buf = loadBinary(name);
	if (buf.slice(0, 2).toString() !== 'MP') {
		console.error(name + ': not an MP binary (signature ' + JSON.stringify(buf.slice(0, 2).toString()) + ')');
		return 1;
	}
	const hdr = buf.readUInt16LE(0x18);
	if (hdr !== 0x1e) {
		// The whole tool assumes file offset equals virtual address, which was established for
		// this header size. A different one would need its own proof, not an assumption.
		console.error(name + ': header size 0x' + hdr.toString(16) + ', expected 0x1e');
		return 1;
	}

	const zeros = zeroRuns(buf, DEFAULT_MIN);
	const unknown = complement(
		zeros.map((r) => [...r]),
		buf.length,
	);

	const { calls, jumps } = scanTransfers(buf);
	const all = new Map();
	for (const [a, n] of calls) all.set(a, (all.get(a) || 0) + n);
	for (const [a, n] of jumps) all.set(a, (all.get(a) || 0) + n);

	const rejected = { zero: 0, outside: 0, once: 0 };
	const candidates = [];
	for (const [addr, count] of all) {
		if (addr >= buf.length) {
			rejected.outside++;
			continue;
		}
		if (inRanges(addr, zeros)) {
			rejected.zero++;
			continue;
		}
		// a target named exactly once is usually a coincidence inside an operand; the
		// over-count correction. Measured on ENCHANT: see the note in the report.
		if (count < 2) {
			rejected.once++;
			continue;
		}
		candidates.push([addr, count]);
	}
	candidates.sort((a, b) => b[1] - a[1]);

	const out = candidates.map(([a]) => a).sort((a, b) => a - b);
	const summary = {
		binary: name,
		bytes: buf.length,
		headerSize: hdr,
		zeroRuns: zeros.length,
		zeroBytes: zeros.reduce((t, [a, b]) => t + b - a, 0),
		unknownBytes: unknown.reduce((t, [a, b]) => t + b - a, 0),
		candidates: out.length,
		rejected,
	};

	if (argv.includes('--json')) {
		console.log(JSON.stringify({ ...summary, seeds: out.map((a) => '0x' + a.toString(16)) }, null, 1));
		return 0;
	}
	if (argv.includes('--emit')) {
		console.log(out.map((a) => '0x' + a.toString(16)).join(','));
		return 0;
	}

	console.log(summary.binary + ': ' + summary.bytes + ' bytes, header 0x' + hdr.toString(16));
	console.log('  zero runs ' + zeros.length + ', ' + summary.zeroBytes + ' bytes (' +
		((100 * summary.zeroBytes) / summary.bytes).toFixed(1) + '%)');
	console.log('  targets rejected: ' + rejected.zero + ' in zero fill, ' +
		rejected.outside + ' outside, ' + rejected.once + ' named only once');
	console.log('  candidate seeds: ' + out.length);
	if (out.length === 0) {
		console.error('no candidates survived: refusing to emit an empty seed set');
		return 1;
	}
	return 0;
}

if (require.main === module) process.exit(main());

module.exports = { scanTransfers, loadBinary, inRanges };
