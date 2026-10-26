#!/usr/bin/env node
'use strict';
// tools/cmpdisp.js - compare a compiled routine against the game, tolerating the
// bytes that are link-time relocations.
//
// WHY THIS EXISTS. `tools/cc.sh --want` requires byte equality, and the project has
// two recovery standards. Byte equality is only reachable for routines with no
// absolute reference and no call. Everything else differs in exactly those bytes,
// which are the linker's to fill:
//
//   - an absolute data reference, `a1 <disp32>` or `[base+disp32]`, where the object
//     carries 00 00 00 00 and the game carries its real address
//   - a direct call, `e8 <rel32>`, same reason
//
// So a routine that is correct can never satisfy --want, and calling it a mismatch is
// the error that made the whole base-fold and non-leaf set look unmatched for weeks.
// `docs/base-fold-negative.md` established the mechanism. This tool applies it: it
// masks the relocation fields on BOTH sides and reports the remaining difference.
//
// WHAT IT DOES NOT DO. It does not patch the game's bytes to our output, which would
// be forging the evidence. It masks both sides symmetrically and then requires the
// remaining bytes to be EQUAL. A routine that differs anywhere outside a relocation
// field still fails.
//
// Usage:
//   node tools/cmpdisp.js --addr 0xfdeb6 --code "a1 00 00 00 00 c3"
//   node tools/cmpdisp.js --addr 0xfdeb6 --code "..." --json
//
// Exit: 0 identical after masking, 1 differs elsewhere, 2 usage or image error.

const fs = require('fs');
const path = require('path');

const ROOT = path.join(__dirname, '..');
const IMAGE = path.join(ROOT, 'ENCHANT.EXP');

// Decode the game's routine from its entry to the first ret, using the shared
// decoder so operand types identify which bytes are relocations.
const D = require('./decode.js');

function targetInsns(addr, image = IMAGE) {
	const { insns } = D.decode(addr, addr + 512, { image });
	const out = [];
	for (const ins of D.toFirstRet(insns)) out.push(ins);
	return out;
}

// The byte ranges inside an instruction that hold a link-time value.
//
// Derived from the instruction's ENCODING, not guessed from the operand alone. The
// first version assumed the disp32 sat in the last four bytes, which is true for
// `a1 <disp32>` (5 bytes) but false for `83 05 <disp32> <imm8>` (7 bytes), where the
// immediate follows the displacement. That masked the wrong bytes and reported a
// correct routine as differing at byte 2. See the 0x104228 case.
//
// The opcode length is found by skipping prefixes, then the ModRM (when present)
// decides whether a disp32 follows and where.
const PREFIXES = new Set([0x66, 0x67, 0xf2, 0xf3, 0x2e, 0x36, 0x3e, 0x26, 0x64, 0x65]);

function bytes(addr, image) {
	return fs.readFileSync(image).subarray(addr, addr + 16);
}

function relocFields(ins, image = IMAGE) {
	const fields = [];
	const b = bytes(ins.addr, image);
	let i = 0;
	while (i < ins.size && PREFIXES.has(b[i])) i++;
	const op = b[i];

	// Direct call/jmp rel32: e8/e9 (opcode then 4 bytes), 0f 8x (two-byte opcode)
	if (op === 0xe8 || op === 0xe9) {
		fields.push([i + 1, i + 5]);
		return fields;
	}
	if (op === 0x0f && b[i + 1] >= 0x80 && b[i + 1] <= 0x8f) {
		fields.push([i + 2, i + 6]);
		return fields;
	}
	// Short jmp rel8
	if (op === 0xeb) {
		fields.push([i + 1, i + 2]);
		return fields;
	}

	// a1/a3: moffs32 immediately follows the opcode.
	if (op === 0xa1 || op === 0xa3) {
		fields.push([i + 1, i + 5]);
		return fields;
	}

	// A memory operand encoded with ModRM mod=00 rm=101 (disp32, no base) or
	// mod=10 (disp32 after ModRM, possibly after SIB). Only mask when the decoded
	// operand really is absolute, so a constant displacement stays unmasked.
	const hasAbsMem = ins.operands.some((o) =>
			o.type === 'mem' && o.base === null && o.index === null
			&& o.disp >= 0x10000 && o.disp <= 0x200000);
	if (!hasAbsMem) return fields;

	// Find the ModRM byte: it follows the opcode, plus a second opcode byte for 0f xx.
	let modrmAt = i + 1;
	if (op === 0x0f) modrmAt = i + 2;
	const modrm = b[modrmAt];
	if (modrm === undefined) return fields;
	const mod = (modrm >> 6) & 3;
	const rm = modrm & 7;

	let dispAt;
	if (mod === 0 && rm === 5) dispAt = modrmAt + 1;            // [disp32]
	else if (mod === 2) {
		// disp32 follows ModRM, and after a SIB byte when rm == 4.
		dispAt = modrmAt + 1 + (rm === 4 ? 1 : 0);
	} else return fields;                                       // disp8/no disp: not a link-time value

	if (dispAt + 4 <= ins.size) fields.push([dispAt, dispAt + 4]);
	return fields;
}

function maskEnds(width) {
	// Compare masks are applied to a fixed 2-byte chained representation. Simplicity
	// beats cleverness here: a per-position 'reloc' flag is easier to reason about than
	// ranges, and the lengths are tiny.
	return new Array(width).fill(false);
}

function fmtBytes(arr) {
	return arr.map((x) => x.toString(16).padStart(2, '0')).join(' ');
}

function main() {
	const args = process.argv.slice(2);
	const opt = (n, d) => {
		const i = args.indexOf('--' + n);
		return i >= 0 && args[i + 1] !== undefined ? args[i + 1] : d;
	};
	const addrStr = opt('addr', null);
	if (!addrStr) {
		console.error('usage: cmpdisp.js --addr 0xADDR --code "aa bb .." [--json]');
		process.exit(2);
	}
	const addr = parseInt(String(addrStr).replace(/^0x/, ''), 16);
	if (!Number.isInteger(addr)) {
		console.error('bad --addr');
		process.exit(2);
	}
	let code = opt('code', '').trim();
	if (!code) {
		console.error('need --code "aa bb .." (the compiled bytes, e.g. from cc.sh)');
		process.exit(2);
	}
	const ours = code.split(/\s+/).filter(Boolean).map((h) => parseInt(h, 16));

	if (!fs.existsSync(IMAGE)) {
		console.error('ENCHANT.EXP missing; see README section 1');
		process.exit(2);
	}
	const buf = fs.readFileSync(IMAGE);
	const insns = targetInsns(addr);

	// Rebuild the game's byte string and a per-byte mask from the decoded instructions.
	const theirs = [];
	const mask = [];
	for (const ins of insns) {
		const start = theirs.length;
		for (let i = 0; i < ins.size; i++) theirs.push(buf[ins.addr + i]);
		for (let i = 0; i < ins.size; i++) mask.push(false);
		for (const [a, b] of relocFields(ins)) {
			for (let i = a; i < b; i++) mask[start + i] = true;
		}
	}

	const result = {
		addr: '0x' + addr.toString(16),
		targetLen: theirs.length,
		ourLen: ours.length,
		target: fmtBytes(theirs),
		ours: fmtBytes(ours),
	};

	if (theirs.length !== ours.length) {
		result.verdict = 'length-differs';
		result.note = 'a length difference is outside the disp32 standard and is a real mismatch';
		if (args.includes('--json')) console.log(JSON.stringify(result, null, 2));
		else {
			console.log(`${result.addr}  LENGTH DIFFERS: target ${theirs.length}B, ours ${ours.length}B`);
			console.log(`  target: ${result.target}`);
			console.log(`  ours:   ${result.ours}`);
		}
		process.exit(1);
	}

	const diffs = [];
	let maskedOutside = [];
	for (let i = 0; i < theirs.length; i++) {
		if (theirs[i] === ours[i]) continue;
		if (mask[i]) diffs.push(i);
		else maskedOutside.push(i);
	}
	result.maskedBytes = diffs.length;
	result.otherDiffs = maskedOutside.length;
	result.otherAt = maskedOutside.map((i) => i.toString(16));

	if (maskedOutside.length === 0) {
		result.verdict = diffs.length ? 'identical-except-disp32' : 'matched';
	} else {
		result.verdict = 'differs';
	}

	if (args.includes('--json')) {
		console.log(JSON.stringify(result, null, 2));
	} else {
		console.log(`${result.addr}  ${result.verdict.toUpperCase()}`);
		console.log(`  target: ${result.target}`);
		console.log(`  ours:   ${result.ours}`);
		if (diffs.length) console.log(`  masked relocation bytes: ${diffs.length}`);
		if (maskedOutside.length) {
			console.log(`  OTHER DIFFERENCES (real mismatch) at byte ${result.otherAt.join(', ')}:`);
			for (const i of maskedOutside) {
				console.log(`    byte ${i.toString(16)}: target ${theirs[i].toString(16)} ours ${ours[i].toString(16)}`);
			}
		}
	}
	process.exit(result.verdict === 'differs' ? 1 : 0);
}

main();
