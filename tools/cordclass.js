#!/usr/bin/env node
'use strict';
// tools/cordclass.js - the failure taxonomy for the decompilation loop.
//
// WHY THIS EXISTS. A cord pull that only says "did not match" is a dead end: it
// tells the next person nothing and it cannot be correlated. A cord pull that
// says WHY is a lead. If six routines fail with `base-fold`, then solving base
// folding unblocks six routines at once, and the taxonomy is what makes that
// visible without re-reading six transcripts.
//
// Each class below is a cause with a distinct remedy. The remedy is the point:
// a class whose remedy is "nothing, this is structural" is a class we stop
// spending time on, and that is a real result.
//
// Adding a class is a deliberate act. If a failure does not fit one of these,
// that is a signal that a new cause has been found, not that it should be
// squeezed into the nearest one.

const CLASSES = {
	// --- structural: no source form fixes these ---------------------------
	'base-fold': {
		severity: 'structural',
		summary: 'An absolute address is added into a register instead of folded into the operand displacement.',
		cause: 'The disp32 only folds when it is a relocation the linker resolves. A literal constant is added instead.',
		remedy: 'None at Level 1. Requires linking. Measured: extern decl gives 0f b6 80 00000000, linked gives 0f b6 80 <real>.',
		unblocks: 'Every routine referencing a global through a symbol. Excluded by preflight; no action.',
	},
	'relocation-placeholder': {
		severity: 'structural',
		summary: 'The emitted displacement is 00 00 00 00 where the target has a real address.',
		cause: 'The object carries FIXUPP; the value is the linker\'s to fill.',
		remedy: 'None at Level 1. Same underlying cause as base-fold.',
		unblocks: 'Same class as base-fold; counted together when correlating.',
	},
	'not-a-boundary': {
		severity: 'structural',
		summary: 'The address is not a function start.',
		cause: 'It is an interior address that happens to be a CALL target.',
		remedy: 'None. Use cfgwalk --check on the stripped address to find the real entry.',
		unblocks: 'Nothing; these are not functions.',
	},

	// --- addressable: a source-form change may fix these -------------------
	'frame-decision': {
		severity: 'addressable',
		summary: 'The target is framed (55 8b ec, args at [ebp+N]); the compile is frameless (args at [esp+N]).',
		cause: 'High C emits a frame when the routine needs a stack slot. Measured: adding any local forces 55 8b ec.',
		remedy: 'Find the local the original had. A dormant local variable is the lever; try declaring and not using.',
		unblocks: 'Every routine with this shape. Worth one focused pass, since the lever is known to exist.',
	},
	'register-choice': {
		severity: 'addressable',
		summary: 'Instruction count and shapes match; only the registers differ.',
		cause: 'Allocator difference on semantically identical C.',
		remedy: 'Try reordering declarations or changing which value is computed first. Low prior, because the allocator is not easily steered.',
		unblocks: 'Unknown until one is cracked.',
	},
	'pointer-type': {
		severity: 'addressable',
		summary: 'A displacement that should fold into the operand is being added instead, on a *parameter*.',
		cause: 'An int pointer makes the compiler add; a char pointer or struct lets it fold. Measured on 0xe662c.',
		remedy: 'Change the pointer type. This is the cheapest lever in the whole project and it works.',
		unblocks: 'Already resolved where tried. Check this first on any new mismatch.',
	},
	'operand-order': {
		severity: 'addressable',
		summary: 'Branch or instruction order is reversed.',
		cause: 'Operand order in && decides which test is emitted first. Measured on 0xe9e2c.',
		remedy: 'Swap the operands of the condition.',
		unblocks: 'Already resolved where tried. Check second.',
	},
	'associativity': {
		severity: 'addressable',
		summary: 'Same arithmetic, different instruction order.',
		cause: 'n*10 + (*s - \'0\') and v*10 + *s - \'0\' differ. Measured on 0xe44d0.',
		remedy: 'Change the parenthesisation.',
		unblocks: 'Already resolved where tried. Check third.',
	},
	'idiom': {
		severity: 'addressable',
		summary: 'The compiler picked a different instruction for the same operation, e.g. add r,r instead of shl r,1.',
		cause: 'Source shape did not suggest the idiom the original used.',
		remedy: 'Vary the expression form, or the type width.',
		unblocks: 'Case by case.',
	},

	// --- instrument: not the function's fault ------------------------------
	'transient': {
		severity: 'instrument',
		summary: 'The compile API failed (did not finish, no object file produced, or a 500).',
		cause: 'Guest state degrades after several back-to-back compiles, or the floppy is low on space.',
		remedy: 'Retry; check GET /api/health; POST /api/reset if the image is unhealthy.',
		unblocks: 'Nothing about the routine. Re-run it.',
	},

	// --- genuine unknowns --------------------------------------------------
	'unexplained': {
		severity: 'unknown',
		summary: 'Shapes differ in a way none of the above describes.',
		cause: 'Not yet characterised.',
		remedy: 'Inspect the target and the closest attempt side by side. This class should shrink over time.',
		unblocks: 'Unknown. Each one is a lead.',
	},
	'needs-source': {
		severity: 'unknown',
		summary: 'No C has been written for this routine yet.',
		cause: 'Not attempted.',
		remedy: 'Write the C.',
		unblocks: 'n/a',
	},
};

// Classify a mismatch from the two byte strings. Deliberately conservative:
// anything not confidently matched lands in `unexplained` rather than being
// forced into a class, because a wrong class is worse than no class.
function classifyMismatch(target, got, targetInsns, gotInsns) {
	if (!got) return 'transient';
	if (/00 00 00 00/.test(got) && !/00 00 00 00/.test(target)) return 'relocation-placeholder';

	const t = target.split(' ');
	const g = got.split(' ');
	const tFramed = t[0] === '55' && t[1] === '8b' && t[2] === 'ec';
	const gFramed = g[0] === '55' && g[1] === '8b' && g[2] === 'ec';
	if (tFramed !== gFramed) return 'frame-decision';

	// Same length but different bytes: likely a register or operand choice.
	if (t.length === g.length) {
		const diffs = t.filter((b, i) => b !== g[i]).length;
		if (diffs <= 4) return 'register-choice';
	}

	// The most common addressable shape: got has 'add reg,imm32' where the
	// target has a folded displacement on the same load/store.
	if (/ 05 /.test(got) || / 03 44 24 /.test(got)) return 'base-fold';

	return 'unexplained';
}

module.exports = { CLASSES, classifyMismatch };

// CLI: summarise a run file by class, or explain a class.
if (require.main === module) {
	const fs = require('fs');
	const args = process.argv.slice(2);
	if (args[0] === '--explain' && args[1]) {
		const c = CLASSES[args[1]];
		if (!c) { console.error('no such class: ' + args[1]); process.exit(64); }
		console.log(`${args[1]}  [${c.severity}]`);
		console.log(`  ${c.summary}`);
		console.log(`  cause:    ${c.cause}`);
		console.log(`  remedy:   ${c.remedy}`);
		console.log(`  unblocks: ${c.unblocks}`);
		return;
	}
	if (args[0] === '--classes') {
		for (const [k, v] of Object.entries(CLASSES)) {
			console.log(`${k.padEnd(24)} ${v.severity.padEnd(12)} ${v.summary}`);
		}
		return;
	}
	// Summarise a run file.
	const file = args[0];
	if (!file) { console.error('usage: cordclass.js <run.json> | --classes | --explain <cls>'); process.exit(64); }
	const run = JSON.parse(fs.readFileSync(file, 'utf8'));
	const by = {};
	for (const r of run.results || []) {
		const k = r.cordClass || r.state;
		(by[k] = by[k] || []).push(r.addr);
	}
	const rows = Object.entries(by).sort((a, b) => b[1].length - a[1].length);
	for (const [k, addrs] of rows) {
		const sev = CLASSES[k] ? CLASSES[k].severity : '-';
		console.log(`${String(addrs.length).padStart(3)}  ${k.padEnd(24)} ${sev.padEnd(12)} ${addrs.slice(0, 6).join(' ')}${addrs.length > 6 ? ' ...' : ''}`);
	}
}
