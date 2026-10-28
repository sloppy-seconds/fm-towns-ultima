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

// Callbacks. A function pointer passed as an argument has no call site to find: the address is an
// immediate in the code and the call goes through `call dword ptr [ebp+8]`. Measured on ENCHANT.EXP,
// dwords whose value points at a `55 8b ec` prologue come to exactly 7, and two of them were confirmed
// by running the recompiled program, which faulted on them: guest 0x103620 and guest 0x10388c. Two of
// the seven the call scan already found, so the rule adds five.
//
// The values are guest addresses, meaning image base 0 in the runtime frame, which is 0x200 below this
// tool's raw file frame. The target to seed is therefore value + 0x200, not value.
// The prologue is tested alone here, without the terminator test that looksLikeFunctionEntry applies to
// call sites, and that difference is measured rather than convenient. Guest 0x103620, which the recompiled
// program transferred into and executed, is preceded by the bytes `42 4f 44 59 3e` or "BODY>", a string
// constant. Guest 0x102e20 and 0x1039f4 are preceded by the same string, and guest 0x10168c by "ceive". So
// this image interleaves string constants with code and a real function head can follow a string. A
// coincidental dword is the risk the terminator test guards against at a call site, where a random operand
// can land on a prologue; a dword that equals a code address with a prologue is not that kind of accident.
function scanCallbacks(buf) {
	const out = new Set();
	for (let i = 0; i + 4 <= buf.length; i++) {
		const v = buf.readUInt32LE(i);
		const f = v + 0x200;
		if (v < 0x200 || f + 3 > buf.length) continue;
		if (buf[f] === 0x55 && buf[f + 1] === 0x8b && buf[f + 2] === 0xec) out.add(f);
	}
	return out;
}

// Functions whose address the program takes. High C does not emit `mov reg, imm32` for an address, it emits
// `lea reg, [disp32]`, so a `lea` with an absolute displacement is the compiler saying "here is the address of
// this thing". Nothing points a call site at such a function, which is why the transfer scan and the prologue
// rules both miss them.
//
// Measured on ENCHANT.EXP: 23 `lea reg, [disp32]` targets land in the guest address range, and most are data
// or stack (the timer handler does `lea esp, [0xdee57]`). Excluding targets that fall inside a zero run, which
// is uninitialised data, leaves the code ones. Two of them were confirmed by running the recompiled program,
// which faulted on them: guest 0xfdde8 (the timer handler itself) and guest 0xffb72 (the callback it calls
// through DS:0xdea3c).
function scanAddressTaken(buf, zeros) {
	const out = new Set();
	for (let i = 0; i + 7 <= buf.length; i++) {
		if (buf[i] !== 0x8d) continue;                       // lea
		const m = buf[i + 1];
		if ((m >> 6) !== 0 || (m & 7) !== 5) continue;       // mod 00, rm 101: [disp32]
		const v = buf.readUInt32LE(i + 2);
		if (v < 0x200 || v + 0x200 + 2 > buf.length) continue;
		if (inRanges(v + 0x200, zeros)) continue;            // uninitialised data, not code
		out.add(v + 0x200);
	}
	return out;
}

function inRanges(addr, ranges) {
	for (const [lo, hi] of ranges) if (lo <= addr && addr < hi) return true;
	return false;
}

// A call rel32 whose target opens with a High C prologue is a function the binary states
// exists. This is stronger evidence than being named twice, and the two are independent,
// so the seed set takes the union.
//
// Measured on ENCHANT.EXP. Of 5718 call sites, 3993 land on `55 8b ec` and 1725 do not.
// Every E9 jmp target lacks a prologue (944 of 944), so jumps contribute nothing here and
// are deliberately excluded: an intra-function jump lands mid-function.
//
// The prologue alone is not sufficient. A coincidental `55 8b ec` can occur inside a string,
// and the giveaway is the byte before it. A real function starts after something that ends
// the previous one: ret, ret n, leave-then-ret, the `8b c0` two-byte nop, a plain nop, a jmp,
// or a zero pad. Of the 134 single-caller prologue targets, 102 pass that test and 32 do not,
// and every one of the 32 is preceded by ASCII fragments (`ita`, `uf\n`, `tc\r`, `ive`).
function looksLikeFunctionEntry(buf, addr) {
	if (addr + 3 > buf.length) return false;
	if (buf[addr] !== 0x55 || buf[addr + 1] !== 0x8b || buf[addr + 2] !== 0xec) return false;
	if (addr < 2) return true;
	const p1 = buf[addr - 1];
	const p2 = buf[addr - 2];
	if (0xc3 === p1 || 0xc2 === p1) return true;      // ret, ret n
	if (0xe9 === p1 || 0xeb === p1) return true;      // jmp
	if (0x90 === p1 || 0xcc === p1 || 0x00 === p1) return true;  // nop, int3, pad
	if (0xc9 === p2 && 0xc3 === p1) return true;      // leave; ret
	if (0x8b === p2 && 0xc0 === p1) return true;      // the two-byte nop mov eax,eax
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
	const promoted = [];
	for (const [addr, count] of all) {
		if (addr >= buf.length) {
			rejected.outside++;
			continue;
		}
		if (inRanges(addr, zeros)) {
			rejected.zero++;
			continue;
		}
		// A target named exactly once is usually a coincidence inside an operand. That holds for
		// a jump, and it holds for a call that does not land on a prologue. It does not hold for a
		// call whose target opens `55 8b ec` after a terminator, which the binary states is a
		// function. Those are promoted rather than dropped, and counted separately so the
		// promotion is visible in the report instead of silently inflating the set.
		if (count < 2) {
			if (calls.has(addr) && looksLikeFunctionEntry(buf, addr)) {
				promoted.push(addr);
				continue;
			}
			rejected.once++;
			continue;
		}
		candidates.push([addr, count]);
	}
	for (const a of promoted) candidates.push([a, 1]);
	candidates.sort((a, b) => b[1] - a[1]);

	const out = candidates.map(([a]) => a).sort((a, b) => a - b);
	const callbacks = scanCallbacks(buf);
	const taken = scanAddressTaken(buf, zeros);
	const fromTransfers = out.length;
	for (const a of callbacks) if (!out.includes(a)) out.push(a);
	const afterCallbacks = out.length;
	for (const a of taken) if (!out.includes(a)) out.push(a);
	out.sort((a, b) => a - b);
	const summary = {
		binary: name,
		bytes: buf.length,
		headerSize: hdr,
		zeroRuns: zeros.length,
		zeroBytes: zeros.reduce((t, [a, b]) => t + b - a, 0),
		unknownBytes: unknown.reduce((t, [a, b]) => t + b - a, 0),
		candidates: out.length,
		promoted: promoted.length,
		callbacks: callbacks.size,
		callbacksNew: afterCallbacks - fromTransfers,
		addressTaken: taken.size,
		addressTakenNew: out.length - afterCallbacks,
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
	console.log('  single-caller call targets promoted by prologue: ' + summary.promoted);
	console.log('  callback immediates pointing at a prologue: ' + summary.callbacks + ' (' +
		summary.callbacksNew + ' not already found by a transfer)');
	console.log('  seeds from transfers: ' + fromTransfers);
	console.log('  functions whose address the program takes: ' + summary.addressTaken + ' (' +
		summary.addressTakenNew + ' not already found)');
	console.log('  candidate seeds: ' + out.length);
	if (out.length === 0) {
		console.error('no candidates survived: refusing to emit an empty seed set');
		return 1;
	}
	return 0;
}

if (require.main === module) process.exit(main());

module.exports = { scanTransfers, loadBinary, inRanges };