#!/usr/bin/env node
'use strict';
// tools/globals.js - enumerate the absolute DATA references in a routine, and
// separate them from code references.
//
// WHY THIS IS NOT A REFINEMENT OF preflight.js. preflight asks one question, "does
// this routine touch an absolute address at all", and stops at the first hit. That
// is right for a yes/no gate and wrong for mapping globals, where the graph is the
// point. 76 base-fold routines reported 56 distinct addresses, but that is a lower
// bound: preflight records exactly one per routine and 0 of 76 carry more.
//
// WHY THE FIRST PROTOTYPE WAS WRONG, and this file exists in this form because of
// it. A draft matched a hex constant immediately before `]`, which found ZERO
// references in 0xf3e24, the routine with the most callers in the image and a
// known reference at 0x77e90. ndisasm writes that operand as
// `[eax+edx*2+0x77e90]`, so the constant is not adjacent to the bracket. That is
// the fourth time a detector in this project has silently answered the wrong
// question, so the rule here is: match any hex literal in the operand, then
// classify, rather than pattern-matching the form you expect.
//
// AND WHY CLASSIFICATION IS MANDATORY. Matching any literal admits jump targets.
// 0xe6a58 yields 3 candidates and 2 are branches (`jnl 0xe6a81`). 0xe30a0 yields
// 10 and at least 3 are branches. Without separation the address set is polluted
// with code addresses and every conclusion built on it is wrong.
//
// Usage:
//   node tools/globals.js 0xf3e24
//   node tools/globals.js --scan base-fold
//   node tools/globals.js --scan base-fold --json > /var/tmp/globals.json
//
// The data range is 0x10000..0x200000, matching preflight's established range.
// Note that this range ADMITS code addresses, which is why classification is by
// operand kind and not by range alone.

const fs = require('fs');
const path = require('path');
const { execFileSync } = require('child_process');

const ROOT = path.join(__dirname, '..');
const IMAGE = path.join(ROOT, 'ENCHANT.EXP');
const CORPUS = path.join(ROOT, 'docs', 'corpus.json');

// --image lets a test point at a deliberately corrupted copy. Without it the
// detectors can only be run against the real binary, and a check that has never
// been seen to fail on bad input is a comment.
function imagePath() {
	const args = process.argv.slice(2);
	const i = args.indexOf('--image');
	return i >= 0 && args[i + 1] ? args[i + 1] : IMAGE;
}

function load() {
	return fs.readFileSync(imagePath());
}

// Refuse to guess a routine length. A wrong length silently changes which bytes
// are scanned, which is the failure mode being avoided here.
function routineText(buf, addr, maxLen = 4096) {
	const out = execFileSync('ndisasm', ['-b32', '-w', '-o', '0x' + addr.toString(16), '-'], {
		input: buf.subarray(addr, addr + maxLen), encoding: 'buffer', stdio: 'pipe',
	});
	return out.toString('latin1');
}

// An operand that names a memory location or loads an address is data.
// A branch target is code. The distinction is by MNEMONIC first, because that is
// what decides the meaning of the operand, not the shape of the constant.
const BRANCH = /^(j[a-z]+|call|loop[a-z]*)$/i;

// IS IT TRULY ABSOLUTE, or is it a displacement added to a register?
//
// This distinction was missed in the first version and it changed the answer by a
// factor of three. `mov eax,[0xceca0]` is an absolute global. `cmp dword
// [edx+0xcdf57],0x5` is NOT: edx holds 351*index, so 0xcdf57 is a field offset
// inside a struct, and the effective address moves with the index. Treating both
// as "globals" reported 436 distinct addresses of which most were record fields.
//
// THREE classes, not two, and the third was found by breaking the regression.
// `mov [eax+edx*2+0x77e90],cx` has registers AND a disp32, but the disp32 there is
// the ARRAY BASE and the registers are the index. That is 0xf3e24, the routine
// this tool was written for, and a two-class rule called it relative and reported
// zero references, failing its own regression test.
//
//   absolute      bare disp32, no base register. A global.
//   indexed-base  SIB index plus a disp32. The disp32 is an array base.
//   relative      a base register plus a displacement. A struct field.
function operandKind(text) {
	const m = text.match(/\[([^\]]+)\]/);
	if (!m) {
		if (/^mov\s+[a-z0-9]+\s*,\s*0x[0-9a-f]{5,6}$/i.test(text.trim())) return 'absolute';
		return null;
	}
	const inner = m[1];
	// A SCALE IS NOT REQUIRED. `[eax+edx+0x392c8]` is base+index with an implicit
	// scale of 1, and ndisasm prints it with no `*1`. Requiring `/\*\s*[1248]/` made
	// this tool classify it as `relative` and MISS the reference entirely, which is a
	// false negative: 0xe30a0 lost four globals (0x392c8, 0x392cc, 0x392d0, 0x392d4)
	// that objdump reports as indexed-base. Found by cross-checking against
	// tools/globals_od.js, which reads the structure from objdump instead of inferring
	// it from text.
	const regs = [...inner.matchAll(/\b(e?[abcd]x|e?[sd]i|e?[sb]p|e?ip)\b/gi)].map((x) => x[1].toLowerCase());
	const hasScale = /\*\s*[1248]/.test(inner);
	const hasDisp = /\+\s*0x[0-9a-f]+/.test(inner);
	if (hasDisp && (hasScale || regs.length >= 2)) return 'indexed-base';
	if (regs.length >= 1) return 'relative';
	return 'absolute';
}

function classify(mnemonic, text) {
	if (BRANCH.test(mnemonic)) return 'code';
	const k = operandKind(text);
	if (k === 'relative' || k === null) return 'relative';
	return 'data';
}

function scanRoutine(buf, addr) {
	const text = routineText(buf, addr);
	const refs = [];
	let instructions = 0;
	for (const line of text.split('\n')) {
		if (!line.trim()) continue;
		const p = line.split(/\s+/);
		if (p.length < 2) continue;
		const at = parseInt(p[0], 16);
		if (Number.isNaN(at)) continue;
		// Rebuild the instruction text after the hex bytes column.
		const rest = line.replace(/^\S+\s+\S+\s*/, '');
		const mnemonic = (rest.match(/^([a-z]+)/i) || [])[1] || '';
		instructions++;
		for (const m of rest.matchAll(/\b0x([0-9a-f]{5,6})\b/gi)) {
			const v = parseInt(m[1], 16);
			if (v < 0x10000 || v > 0x200000) continue;
			// AN IMMEDIATE IS NOT A REFERENCE, even when its value is an address.
			//
			// `mov dword [0x7b374],0x7b274` accesses 0x7b374 and stores the VALUE
			// 0x7b274 into it. Counting both made 0xe5578 report 7 references when it
			// makes 5, and the phantom addresses were the stored constants.
			//
			// The rule is positional and exact: a reference is a hex literal INSIDE
			// brackets. `mov eax,0x7a7d0` loads an address into a register and is kept
			// separately by operandKind, because there is a real distinction between
			// "touches memory at X" and "computes the address X".
			//
			// A first attempt tested for a comma immediately before the literal, which
			// wrongly dropped [edx+0xcde89] from `add dword [edx+0xcde89],eax` because
			// the bracket closes before the comma. Position in brackets is the property
			// that actually holds.
			const before = rest.slice(0, m.index);
			const inBrackets = before.includes('[') && !before.includes(']');
			const isImmediateMove = /^mov\s+[a-z0-9]+\s*,\s*0x[0-9a-f]+$/i.test(rest.trim());
			if (!inBrackets && !isImmediateMove) continue;
			refs.push({ at, value: v, kind: classify(mnemonic, rest), text: rest.trim() });
		}
		if (/^(ret|retn)\b/.test(rest.trim())) break;
		if (instructions > 2000) break;
	}
	return refs;
}

function baseFoldAddrs() {
	const corpus = JSON.parse(fs.readFileSync(CORPUS, 'utf8'));
	return corpus.filter((r) => r.kind === 'base-fold').map((r) => r.addr);
}

function main() {
	const args = process.argv.slice(2);
	const buf = load();

	// --width-check: a global must be accessed at ONE width across all its users.
	//
	// WHY THIS IS A SUBCOMMAND AND NOT A SCRATCH SCRIPT. It was a scratch script, and
	// its first version reported 0 conflicts across 436 globals while ALSO reporting
	// 0 on deliberately contradictory input, so it was decoration. The bug was that
	// `mov eax,[addr]` carries no size keyword and the width lives in the register
	// name. Teaching it eax=4 and cl=1 makes it able to fail, which is the only
	// reason the 0 it now reports on real data means anything.
	//
	// The register-name table is the whole check. Do not simplify it away.
	const R8 = new Set(['al', 'bl', 'cl', 'dl', 'ah', 'bh', 'ch', 'dh']);
	const R16 = new Set(['ax', 'bx', 'cx', 'dx', 'si', 'di', 'bp', 'sp']);
	const R32 = new Set(['eax', 'ebx', 'ecx', 'edx', 'esi', 'edi', 'ebp', 'esp']);
	function width(text) {
		const sized = text.match(/mov\s+(byte|word|dword)\b/);
		if (sized) return { byte: 1, word: 2, dword: 4 }[sized[1]];
		const m = text.match(/mov\s+([a-z0-9]+)\s*,/);
		if (m) {
			if (R8.has(m[1])) return 1;
			if (R16.has(m[1])) return 2;
			if (R32.has(m[1])) return 4;
		}
		return null;
	}
	if (args.includes('--width-check')) {
		const uses = new Map();
		for (const addr of baseFoldAddrs()) {
			for (const r of scanRoutine(buf, addr)) {
				if (r.kind !== 'data') continue;
				if (!uses.has(r.value)) uses.set(r.value, []);
				uses.get(r.value).push({ routine: addr, width: width(r.text), text: r.text });
			}
		}
		const conflicts = [];
		for (const [value, list] of uses) {
			const widths = new Set(list.map((u) => u.width).filter((w) => w !== null));
			if (widths.size > 1) conflicts.push({ value, widths: [...widths].sort(), uses: list });
		}
		console.log(`globals checked: ${uses.size}`);
		console.log(`conflicting access widths: ${conflicts.length}`);
		for (const c of conflicts) {
			console.log(`  0x${c.value.toString(16)} widths ${c.widths.join('/')}`);
			for (const u of c.uses.slice(0, 4)) console.log(`    ${u.routine}: ${u.text}`);
		}
		return;
	}

	if (args.includes('--scan')) {
		const addrs = baseFoldAddrs();
		const rows = [];
		const byGlobal = new Map();
		for (const addr of addrs) {
			const refs = scanRoutine(buf, addr);
			const data = refs.filter((r) => r.kind === 'data');
			const code = refs.filter((r) => r.kind === 'code');
			rows.push({ addr, dataRefs: data.length, codeRefs: code.length,
				globals: [...new Set(data.map((r) => r.value))] });
			for (const g of data) {
				if (!byGlobal.has(g.value)) byGlobal.set(g.value, new Set());
				byGlobal.get(g.value).add(addr);
			}
		}
		const globals = [...byGlobal.entries()]
			.map(([value, users]) => ({ value, users: users.size, routines: [...users] }))
			.sort((a, b) => b.users - a.users);
		if (args.includes('--json')) {
			console.log(JSON.stringify({ routines: rows, globals }, null, 1));
			return;
		}
		const totalData = rows.reduce((s, r) => s + r.dataRefs, 0);
		const totalCode = rows.reduce((s, r) => s + r.codeRefs, 0);
		console.log(`${addrs.length} base-fold routines scanned.`);
		console.log(`data references: ${totalData}, code references excluded: ${totalCode}`);
		console.log(`distinct data addresses: ${globals.length}  (preflight reported 56, a lower bound)`);
		console.log('\nmost-referenced globals:');
		console.log('address   routines  callers');
		const callers = new Map();
		const corpus = JSON.parse(fs.readFileSync(CORPUS, 'utf8'));
		for (const r of corpus) callers.set(r.addr, r.callers);
		for (const g of globals.slice(0, 15)) {
			const sum = g.routines.reduce((s, a) => s + (callers.get(a) || 0), 0);
			console.log(`0x${g.value.toString(16).padStart(6, '0')}  ${String(g.users).padStart(8)}  ${String(sum).padStart(7)}`);
		}
		return;
	}

	const addrArg = args.find((a) => /^(0x)?[0-9a-f]+$/i.test(a));
	if (!addrArg) {
		console.error('usage: globals.js <addr> | --scan base-fold [--json]');
		process.exit(64);
	}
	const addr = parseInt(addrArg.replace(/^0x/, ''), 16);
	const refs = scanRoutine(buf, addr);
	const data = refs.filter((r) => r.kind === 'data');
	const code = refs.filter((r) => r.kind === 'code');
	console.log(`routine 0x${addr.toString(16)}`);
	console.log(`  data references: ${data.length}`);
	for (const r of data) console.log(`    at 0x${r.at.toString(16)}  -> 0x${r.value.toString(16)}   ${r.text}`);
	console.log(`  code references excluded: ${code.length}`);
	for (const r of code) console.log(`    at 0x${r.at.toString(16)}  -> 0x${r.value.toString(16)}   ${r.text}`);
}

main();
