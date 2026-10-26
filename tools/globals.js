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

// The classification above is retained only for the --width-check subcommand, which
// reads text to compare access WIDTHS. The reference scan itself now goes through
// tools/decode.js and reads operand TYPES, because inferring them from text produced
// two bugs in one session and both are unexpressible with a typed operand model.
function scanRoutine(buf, addr) {
	const { insns } = require('./decode.js').decode(addr, nextBoundary(addr));
	const stop = require('./decode.js').toFirstRet(insns);
	const refs = [];
	for (const ins of stop) {
		const mnemonic = ins.mnemonic;
		for (const op of ins.operands) {
			// A MEMORY OPERAND IS A REFERENCE. An IMMEDIATE is not, even when its value
			// happens to be an address: `mov [0x7b374],0x7b274` accesses the first and
			// stores the value of the second. That distinction is operand TYPE here, so
			// the over-count that made 0xe5578 report 7 references instead of 5 cannot
			// occur.
			if (op.type !== 'mem') continue;
			if (op.disp < 0x10000 || op.disp > 0x200000) continue;
			// AN INDEX IS ENOUGH. `[edx*4+0xe2d29]` has an index and NO base, and the first
			// version of this test required both, so it fell through to 'absolute'. That is
			// the base-less indexed form the compiler emits for a jump table and for a flat
			// array, and misclassifying it as absolute made every jump table look like a
			// global: seven phantom globals, and a disagreement with globals_od.js on seven
			// routines.
			//
			// Three genuine shapes, and the condition must cover all three:
			//   base+index+disp  struct field through a variable pointer
			//   index+disp       jump table or flat array, no base register
			//   base+disp        struct field through a fixed pointer
			const kind = (op.index !== null) ? 'indexed-base'
				: (op.base !== null) ? 'relative' : 'absolute';
			// A JUMP TABLE IS NOT A GLOBAL. `jmp [edx*4+0xe2d29]` indexes a table of
			// CODE addresses, and with no base register it has the same operand shape as
			// an indexed array of data. The distinguishing fact is the mnemonic: a
			// transfer of control to a computed address reaches code, while a data read
			// reaches a structure. Counting jump tables added seven phantom globals and
			// made globals.js disagree with globals_od.js on seven routines.
			//
			// This is a genuine ambiguity in the operand model, unlike the earlier bugs:
			// base/index/scale cannot tell a jump table from an array, so the mnemonic
			// has to be consulted. Recorded rather than hidden.
			if (kind === 'indexed-base' && /^(j[a-z]+|call)$/i.test(mnemonic)) continue;
			refs.push({
				at: ins.addr,
				value: op.disp,
				kind: kind === 'relative' ? 'relative' : 'data',
				text: describe(ins),
			});
		}
		// `mov reg,imm` computes an address without touching memory. It is a reference
		// to a global but not an access, and it is kept because the distinction was a
		// real one in the text parser too.
		if (/^mov$/i.test(mnemonic) && ins.operands.length === 2
			&& ins.operands[0].type === 'reg' && ins.operands[1].type === 'imm') {
			const v = ins.operands[1].value;
			if (v >= 0x10000 && v <= 0x200000) {
				refs.push({ at: ins.addr, value: v, kind: 'data', text: describe(ins) });
			}
		}
	}
	return refs;
}

// Round-trip an instruction to a readable string for the CLI output. Not used for any
// decision, only for display, which is why it can be lossy.
function describe(ins) {
	const parts = ins.operands.map((op) => {
		if (op.type === 'mem') {
			const inner = [op.base, op.index ? op.index + (op.scale > 1 ? '*' + op.scale : '') : '',
				op.disp ? '0x' + op.disp.toString(16) : ''].filter(Boolean).join('+');
			return '[' + inner + ']';
		}
		if (op.type === 'imm') return '0x' + op.value.toString(16);
		if (op.type === 'reg') return op.name;
		return String(op.text || '');
	});
	return ins.mnemonic + (parts.length ? ' ' + parts.join(',') : '');
}

// The decode bound. A routine ends at its first ret, but Capstone needs a region to
// decode, and the next corpus entry is not a safe bound: 0xfdecc is 6 bytes while the
// next call target is 28 bytes later, so scanning to it walked into neighbours. A
// modest window plus toFirstRet is correct and cheap.
function nextBoundary(addr) {
	return addr + 1024;
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
		// WIDTH NOW COMES FROM THE OPERAND, NOT THE TEXT.
		//
		// This check used to parse `mov byte [..]` / `mov cl,[..]` out of a string, because
		// ndisasm prints the size either as a keyword or in the register name. After the
		// migration to tools/decode.js the reference text is the module's `describe()`
		// output, which is a DISPLAY form and does not carry the size prefix, so every
		// width came back null and the check silently found nothing. It reported 0
		// conflicts on a deliberately corrupted image, which is the exact failure this
		// check exists to catch, caught by itself.
		//
		// The register name is the authority: `mov eax,[x]` is 4 bytes and `mov al,[x]` is
		// 1. That is available from the operand list without parsing anything.
		const R8 = new Set(['al', 'bl', 'cl', 'dl', 'ah', 'bh', 'ch', 'dh']);
		const R16 = new Set(['ax', 'bx', 'cx', 'dx', 'si', 'di', 'bp', 'sp']);
		const R32 = new Set(['eax', 'ebx', 'ecx', 'edx', 'esi', 'edi', 'ebp', 'esp']);
		function widthOfReg(name) {
			if (!name) return null;
			const n = name.toLowerCase();
			if (R8.has(n)) return 1;
			if (R16.has(n)) return 2;
			if (R32.has(n)) return 4;
			return null;
		}
		const uses = new Map();
		for (const addr of baseFoldAddrs()) {
			const { insns } = require('./decode.js').decode(addr, nextBoundary(addr), { image: imagePath() });
			const stop = require('./decode.js').toFirstRet(insns);
			for (const ins of stop) {
				if (!/^mov$/i.test(ins.mnemonic)) continue;
				const mem = ins.operands.find((o) => o.type === 'mem');
				if (!mem || mem.disp < 0x10000 || mem.disp > 0x200000) continue;
				// THE SIZE IS THE REGISTER PAIRED WITH THE MEMORY OPERAND, not any register in
				// the instruction. `mov [eax+edx*2+0x77e90],cx` stores a WORD, and taking the
				// first register found in the operand list picked an unrelated one and produced
				// a false conflict against a byte read of the same cell.
				//
				// So: if the register is the SOURCE (operands[1]) and memory is the
				// destination (operands[0]), the register's width is the store width. If
				// memory is the source, the same holds. Anything else, such as a register
				// pair like `mov [x],eax` with an architectural width, is not measurable this
				// way and is skipped rather than guessed.
				let reg = null;
				const other = ins.operands.find((o) => o !== mem);
				if (other && other.type === 'reg') reg = other;
				const w = reg ? widthOfReg(reg.name) : null;
				if (!uses.has(mem.disp)) uses.set(mem.disp, []);
				uses.get(mem.disp).push({ routine: addr, width: w, text: describe(ins) });
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
