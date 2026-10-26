#!/usr/bin/env node
'use strict';
// tools/signedness.js - pin CHAR_DEFAULT_UNSIGNED from the code, not from the kit.
//
// WHY. `CHAR_DEFAULT_UNSIGNED` is one of the 43 real toggles (docs/compiler-toggles.md).
// If it was on when the game was built, every plain `char` compares and sign-extends as
// unsigned. If off, as signed. That is a compiler choice which leaves a signature in the
// emitted code, so it can be read off the image without the kit and without compiling
// anything.
//
// WHY IT MUST BE DECODED AND NOT BYTE-SCANNED. A raw scan for `0x7c` counts the byte
// wherever it appears: inside a data table, inside a longer instruction's immediate, in
// the middle of a displacement. This project has already been bitten twice by exactly
// that (docs/tooling-policy.md). So every count here comes from tools/decode.js over a
// region known to be code, and the mnemonics are what get counted.
//
// THE SIGNAL. Two independent ones:
//
//   conditional branches   jl/jle/jg/jge are signed, jb/jbe/ja/jae unsigned. A program
//                          that compares plain chars as signed produces the first family;
//                          one built with CHAR_DEFAULT_UNSIGNED produces the second.
//   byte extension         movsx is signed, movzx unsigned. On a bare `char` load the
//                          compiler picks from the same default.
//
// CAVEAT STATED UP FRONT. The game also declares its own `unsigned char` where it wants
// unsigned, and that is indistinguishable from a global default at the instruction level.
// So this measures the RATIO, which is evidence about the default, not proof of it. A
// default-off compiler with many explicit unsigned chars and a default-on compiler both
// produce a mix. What separates them is which family dominates the comparisons the
// compiler generates for plain char, and that cannot be isolated perfectly here.
//
// Usage:
//   node tools/signedness.js [--json]

const fs = require('fs');
const path = require('path');
const D = require('./decode.js');

const ROOT = path.join(__dirname, '..');
const IMAGE = path.join(ROOT, 'ENCHANT.EXP');

// The code region. Taken from docs/capstone-gate.md: 0xe0000-0xf0000 is the range where
// Capstone and ndisasm agree on every real instruction, so decoding there is safe. The
// library region above 0xff000 is excluded on purpose: it is not Origins' C, so its
// signedness says nothing about how the game was compiled.
const CODE_LO = 0xe0000;
const CODE_HI = 0xf0000;

// THE SIGNAL, AND A CORRECTION TO THE FIRST VERSION OF THIS TOOL.
//
// The obvious signal is the jcc family: jl/jle/jg/jge are signed, jb/jbe/ja/jae unsigned.
// A first version of this tool reported 77 percent signed on the whole code region and
// concluded the compiler used signed char. That was WRONG, and the measurement that
// showed it is worth keeping: of 370 conditional branches, 264 compare REGISTERS and only
// 74 touch memory, because the great majority are integer loop counters and bounds
// checks. Their signedness is a property of the surrounding arithmetic, not of char.
//
// The corrected signal only counts a branch whose comparison actually reads a BYTE
// register. Those are the comparisons a char default can influence.
//
// SECOND CORRECTION. An earlier assumption here was that CHAR_DEFAULT_UNSIGNED defaults
// to off. It does not. Measured with tools/cc.sh on a plain global char load:
//
//   default                       0f b6   movzx   -> char is UNSIGNED by default
//   -off CHAR_DEFAULT_UNSIGNED    0f be   movsx   -> this is how you get signed
//
// So `-on CHAR_DEFAULT_UNSIGNED` is a no-op, the default is already on, and the toggle
// exists to turn it off. A source that wants signed bytes says `signed char` or the build
// says `-off`.
const SIGNED_BRANCH = new Set(['jl', 'jle', 'jg', 'jge']);
const UNSIGNED_BRANCH = new Set(['jb', 'jbe', 'ja', 'jae']);
const BYTE_REGS = new Set(['al', 'bl', 'cl', 'dl', 'ah', 'bh', 'ch', 'dh']);
const SIGN_EXTEND = 'movsx';
const ZERO_EXTEND = 'movzx';

function main() {
	if (!fs.existsSync(IMAGE)) {
		console.error('ENCHANT.EXP missing; see README section 1');
		process.exit(2);
	}

	const { insns, skips } = D.decode(CODE_LO, CODE_HI, { image: IMAGE });

	const counts = {
		signedBranch: 0,
		unsignedBranch: 0,
		movsx: 0,
		movzx: 0,
		total: insns.length,
	};
	const detail = {
		signed: { jl: 0, jle: 0, jg: 0, jge: 0 },
		unsigned: { jb: 0, jbe: 0, ja: 0, jae: 0 },
	};

	// Every conditional branch, for the record, and separately the byte-register subset
	// that actually carries the signal.
	let allSigned = 0;
	let allUnsigned = 0;
	const arr = insns;
	for (let i = 0; i < arr.length; i++) {
		const m = arr[i].mnemonic.toLowerCase();
		const isSigned = SIGNED_BRANCH.has(m);
		const isUnsigned = UNSIGNED_BRANCH.has(m);

		if (isSigned) { allSigned++; counts.signedBranch++; detail.signed[m]++; }
		if (isUnsigned) { allUnsigned++; counts.unsignedBranch++; detail.unsigned[m]++; }

		if (m === SIGN_EXTEND) counts.movsx++;
		else if (m === ZERO_EXTEND) counts.movzx++;

		if (!isSigned && !isUnsigned) continue;

		// Find the comparison feeding this branch, within a few instructions.
		let cmp = null;
		for (let j = i - 1; j >= 0 && i - j < 6; j--) {
			const pm = arr[j].mnemonic.toLowerCase();
			if (pm === 'cmp' || pm === 'test') { cmp = arr[j]; break; }
		}
		if (!cmp) continue;
		const byteCompare = cmp.operands.some((o) => o.type === 'reg' && BYTE_REGS.has(o.name));
		if (!byteCompare) continue;
		if (isSigned) counts.byteSignedBranch = (counts.byteSignedBranch || 0) + 1;
		else counts.byteUnsignedBranch = (counts.byteUnsignedBranch || 0) + 1;
	}

	const result = {
		region: `0x${CODE_LO.toString(16)}-0x${CODE_HI.toString(16)}`,
		instructions: counts.total,
		undecodableBytes: skips.length,
		allConditional: {
			signed: allSigned,
			unsigned: allUnsigned,
			detail,
		},
		byteRegisterBranches: {
			signed: counts.byteSignedBranch || 0,
			unsigned: counts.byteUnsignedBranch || 0,
		},
		extensions: { movsx: counts.movsx, movzx: counts.movzx },
	};

	const byteTotal = result.byteRegisterBranches.signed + result.byteRegisterBranches.unsigned;
	result.byteRegisterSignedShare = byteTotal ? result.byteRegisterBranches.signed / byteTotal : null;
	const extTotal = counts.movsx + counts.movzx;
	result.movsxShare = extTotal ? counts.movsx / extTotal : null;

	if (process.argv.includes('--json')) {
		console.log(JSON.stringify(result, null, 2));
		return;
	}

	console.log(`region ${result.region}, ${result.instructions} instructions decoded`);
	console.log(`undecodable bytes: ${result.undecodableBytes}`);
	console.log();
	console.log('ALL conditional branches (mostly integer loop counters, weak signal):');
	console.log(`  signed   ${allSigned}  (${['jl', 'jle', 'jg', 'jge'].map((k) => k + '=' + detail.signed[k]).join(' ')})`);
	console.log(`  unsigned ${allUnsigned}  (${['jb', 'jbe', 'ja', 'jae'].map((k) => k + '=' + detail.unsigned[k]).join(' ')})`);
	console.log();
	console.log('Branches whose comparison reads a BYTE register (the signal that matters):');
	console.log(`  signed   ${result.byteRegisterBranches.signed}`);
	console.log(`  unsigned ${result.byteRegisterBranches.unsigned}`);
	if (result.byteRegisterSignedShare !== null) {
		console.log(`  signed share: ${(result.byteRegisterSignedShare * 100).toFixed(1)}%`);
	}
	console.log();
	console.log('Byte extension:');
	console.log(`  movsx ${counts.movsx}   movzx ${counts.movzx}   movsx share ${(result.movsxShare * 100).toFixed(1)}%`);
	console.log();
	console.log('How to read this. This compiler defaults to UNSIGNED char: a plain global');
	console.log('char load emits movzx, and only -off CHAR_DEFAULT_UNSIGNED turns it into');
	console.log('movsx. So a game built with the default shows movzx dominating and few signed');
	console.log('byte comparisons. Low movsx does NOT mean signed char: it means the default.');
}

main();
