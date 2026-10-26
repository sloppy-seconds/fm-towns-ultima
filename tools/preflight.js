#!/usr/bin/env node
'use strict';
// tools/preflight.js - decide whether a routine is worth attempting a Level-1
// byte match on, BEFORE spending any time on it.
//
// WHY THIS EXISTS. The decompilation loop has a characteristic failure: spend
// twenty minutes writing C for a routine that could never have matched, because
// the object is not self-contained or because it calls something unverified.
// Both are detectable from the binary in under a second.
//
// The three questions, in the order that eliminates the most work first:
//
//   1. Is the address a real instruction boundary?  `cfgwalk --check` answers it.
//      A "routine" that starts mid-instruction cannot be reconstructed at all.
//
//   2. Is it a leaf?  A routine containing no E8 call and no indirect call has
//      no external references, so its LEDATA bytes ARE the final instructions.
//      This is the single most useful property: only leaves can match byte for
//      byte. The measured case is plot at 0xf3e24 - six instructions, no calls,
//      and its OBJ carries no EXTDEF and no FIXUPP, so nothing to relocate.
//
//   3. Does it touch absolute addresses?  A store to a fixed disp32 (the tile
//      grid at 0x77e90) is fine and matches. But a routine that reads a global
//      through a relocated reference will carry a FIXUPP and is a Trigger 1
//      candidate, not a Level-1 attempt.
//
// What it deliberately does NOT do: judge whether the C is knowable. That is
// the reading work, and no static check replaces it.
//
// Usage:
//   node tools/preflight.js 0xf3e24
//   node tools/preflight.js --scan 40               40 leaves, highest callers first
//   node tools/preflight.js --scan 40 --by size     smallest first, for a toolchain check
//   node tools/preflight.js --scan 40 --json

const fs = require('fs');
const path = require('path');
const { execFileSync } = require('child_process');

const ROOT = path.join(__dirname, '..');
const IMAGE = path.join(ROOT, 'ENCHANT.EXP');
// ADDRESS BASE. Every address here is a RAW FILE OFFSET, which is what docs/ quote
// and what the pixel-writer correction established (0xf3e24 in the file). funcs.js
// works internally on the 0x20-byte-stripped image but now reports raw offsets, so
// the two agree. Before that fix they disagreed by 0x20 and the call counts this
// tool printed were attached to the wrong routines.

// Opcodes that mean "this routine depends on something outside itself".
const CALL_REL32 = 0xe8;
const CALL_REL16 = 0x9a;
const CALL_INDIRECT_FF = 0xff;   // ff /2 and /3 are call far/near indirect

function load() {
	if (!fs.existsSync(IMAGE)) {
		console.error('ENCHANT.EXP not present; it is gitignored, see README section 1.');
		process.exit(2);
	}
	return fs.readFileSync(IMAGE);
}

// Walk from an entry until the first C3/ret, following only fall-through and
// short/near jumps within the routine. Crude by design: this classifies leaves,
// it does not reconstruct control flow. cfgwalk.js is the authority on
// boundaries and this tool defers to it for that question.
//
// THIS USES NDISASM, NOT A BYTE-WISE SCAN. A byte-wise scan that stops at the
// first 0xc3 is wrong twice over, and both were measured:
//
//   - it counts any 0xe8 byte as a call, including bytes inside operands. It
//     reported 0xe44d0 as calling out when the routine contains no call at all,
//     which disqualified the one routine that had already matched byte for byte.
//   - 0xe30a0's tenth byte is 0xc3 but it is the middle of `83 c3 04`.
//
// ndisasm is correct from a known entry because the entry supplies alignment.
// decompile-run.js was fixed the same way for the same reasons.
function scanRoutine(buf, entry) {
	const chunk = buf.slice(entry, Math.min(entry + 4096, buf.length));
	// Bytes go to ndisasm on STDIN. No temp file: a fixed path is the hazard that
	// produced a fabricated disassembly in tools/trycands.py, and tools/imgaudit.js
	// asserts that no tool hands a disassembler a shared path.
	const text = execFileSync('ndisasm', ['-b32', '-o', '0x' + entry.toString(16), '-'], {
		input: chunk, encoding: 'utf8', stdio: ['pipe', 'pipe', 'pipe'],
	});
	const bytes = [];
	const mnemonics = [];
	let calls = 0, indirectCall = 0, rets = 0;
	for (const line of text.split('\n')) {
		if (!line.trim()) continue;
		const m = line.match(/^[0-9A-F]+\s+([0-9A-F]+)\s+(.*)$/);
		if (!m) continue;
		for (let i = 0; i < m[1].length; i += 2) bytes.push(parseInt(m[1].slice(i, i + 2), 16));
		const asm = m[2].trim();
		mnemonics.push(asm);
		if (/^call\b/.test(asm)) calls++;
		if (/^ret/.test(asm)) { rets++; break; }
		if (bytes.length > 4096) break;
	}
	return { bytes, calls, indirectCall, rets, length: bytes.length, mnemonics: mnemonics.join('\n') };
}

// Is this address the START of a function, rather than an interior address that
// happens to be a call target?
//
// This is the check that makes the whole loop viable, and getting it wrong is
// expensive in both directions. Measured: 738 distinct E8 targets exist, but
// many are interior addresses. 0xe6b1c is called 240 times and its "first
// instruction" at a fresh disassembly is `55 2C 89` - push ebp followed by
// garbage - because the real instruction containing it is
// `89 94 08 41 07 00 00 | 8b 55 2c` and 8b 55 2c is a mid-function
// mov edx,[ebp+0x2c]. Writing C for that address is impossible.
//
// The test: work backwards from the target, strip alignment padding
// (`8b c0` = mov eax,eax, `90` nop, `cc` int3), and require the byte before it
// to be a ret. A real entry follows the previous function's ret.
//
// Measured: 454 of 738 targets pass, and plot at 0xf3e24 passes while the two
// interior addresses above fail. cfgwalk --check alone is NOT sufficient: it
// reports those interior addresses as boundaries, so this test is separate and
// both are asked.
function cleanEntry(buf, addr, width = 8) {
	const tail = buf.slice(Math.max(0, addr - width), addr);
	let i = tail.length;
	while (i >= 2 && tail[i - 2] === 0x8b && tail[i - 1] === 0xc0) i -= 2;
	while (i >= 1 && (tail[i - 1] === 0x90 || tail[i - 1] === 0xcc)) i -= 1;
	if (i === 0) return false;
	return tail[i - 1] === 0xc3 || tail[i - 1] === 0xc2;
}

// cfgwalk.js works on the 0x20-byte-stripped image, so it must be asked about
// the stripped address. This tool reports raw file offsets. Passing a raw address
// straight through makes every routine look like a non-boundary, which silently
// disqualified the entire queue before this was found.
//
// The conversion lives in tools/imgbase.js and is asserted in tools/imgaudit.js,
// because this is the fourth tool to get the 0x20 relationship wrong.
const { rawToStripped } = require('./imgbase.js');

function boundaryOk(rawAddr) {
	try {
		const stripped = rawToStripped(rawAddr);
		const out = execFileSync('node', [path.join(__dirname, 'cfgwalk.js'), '--check', '0x' + stripped.toString(16)], {
			encoding: 'utf8', stdio: 'pipe',
		});
		return /is 0x[0-9a-f]+ a boundary:\s+true/i.test(out);
	} catch {
		return null;
	}
}

function callCounts() {
	// --list is required: the summary output only prints the top 25 and formats them
	// differently, so call counts for most targets would be missing.
	const out = execFileSync('node', [path.join(__dirname, 'funcs.js'), '--list'], { encoding: 'utf8', stdio: 'pipe' });
	const counts = new Map();
	for (const line of out.split('\n')) {
		const m = line.match(/^(0x[0-9a-f]+)\t(\d+)/);
		if (m) counts.set(parseInt(m[1], 16), Number(m[2]));
	}
	return counts;
}

// What KIND of code is this: game C, or the library layer beneath it?
//
// WHY THIS IS NEEDED. The candidate gate selected on three properties: real
// function start, makes no calls, references no absolute address. A BIOS stub
// satisfies all three. It is a leaf, it is reached by a call, and its I/O ports
// are immediates rather than addresses. So eleven of twenty-four candidates were
// hardware and library code that no C can ever reproduce, and every attempt on
// them was wasted.
//
// Three signals, each measured on the real image rather than assumed:
//
//   address   Every non-C routine found so far sits above 0xff000. The image is
//             0x105d0e bytes and the region above 0xff000 holds cli/sti, segment
//             loads and rep movsb: 16-bit real-mode support code, the Fujitsu
//             and Phar Lap layer, not Origins' C. The address is the cheapest
//             and most reliable signal.
//
//   mnemonic  High C has no source construct for pusha/popa/loop, for x87
//             status instructions, or for `ret n` (callee-pops is the Pascal
//             convention; High C emits plain `ret`). A routine containing any of
//             these is not C from this toolchain.
//
//   in/out    Port I/O. A compiler can emit these only through an intrinsic or an
//             asm block, and this toolchain has neither as plain C.
//
// The signal is reported, not enforced, because there is one routine whose
// calling convention is unexplained (0xfe95d takes its argument in al and
// returns in ax/dx with no prologue) and calling it "not C" would be a claim
// stronger than the evidence. See docs/decompilation-experiment.md result 20.
const LIBRARY_FLOOR = 0xff000;

function codeKind(buf, addr, insnText) {
	const reasons = [];
	if (addr >= LIBRARY_FLOOR) reasons.push(`above 0x${LIBRARY_FLOOR.toString(16)} (library layer)`);

	// Anything High C cannot emit from source.
	const noSource = [
		[/\b(pusha|popa|pushad|popad)\b/, 'pusha/popa'],
		[/\bloop\b/, 'loop'],
		[/\b(fld|fst|fstp|fild|fist|fistp|fnstsw|fnstcw|fldcw|fxch|fadd|fsub|fmul|fdiv|fcom)\w*/, 'x87'],
		[/\bret\s+0x[0-9a-f]+/, 'ret n (callee pops)'],
		[/\brep\s+movs/, 'rep movs'],
	];
	for (const [re, name] of noSource) {
		if (re.test(insnText)) reasons.push(name);
	}
	// Port I/O. Match the mnemonic, not the hex: 'ee' appears inside any operand.
	if (/\b(in|out)\b/.test(insnText)) reasons.push('port I/O');

	if (reasons.length === 0) return { kind: 'c', reasons: [] };
	return { kind: 'not-c', reasons };
}

// Does this routine load or store through an absolute address?
//
// This is the question that was missing, and its absence produced two cord pulls
// that looked like compiler disagreements and were not. A constant address in a
// memory operand is a relocation: the OBJ carries FIXUPP and the displacement is
// 00000000 until the linker fills it. Measured by probe: an `extern` buffer folds
// to `0f b6 80 00000000` at compile time and `0f b6 80 b0 44 00 00` after linking,
// and the game's own routine has the same folded shape with a real address.
//
// Heuristic: look for a 4-byte little-endian value in a plausible data range
// (0x10000..0x200000) immediately after an instruction that can carry a disp32.
function referencesAbsolute(buf, addr, len) {
	const end = addr + len;
	for (let i = addr; i + 4 <= end; i++) {
		const v = buf.readUInt32LE(i);
		// Data addresses in this image live around 0x70000 to 0x110000. A floor of
		// 0x10000 excludes plausible immediates and small constants.
		if (v < 0x10000 || v > 0x200000) continue;

		// The byte immediately before a disp32 is the ModRM **unless** the ModRM
		// selected a SIB, in which case the SIB comes between them. Checking only
		// buf[i-1] missed `66 89 8c 50 90 7e 07 00`: ModRM 0x8c (mod=10, rm=100 =
		// SIB), SIB 0x50, then the displacement. That is the pixel writer, and
		// missing it made the gate offer a routine that can never match.
		// mod=10 means a 32-bit displacement. mod=00 with rm=101 is ALSO a
		// 32-bit displacement, just with no base register (the "disp32 absolute"
		// form the compiler uses for `mov dword [0xABCDE], imm`). Missing that
		// second case meant 0xef548, whose body is
		// `c7 05 60 6e 0d 00 30 00 00 00` (mov [0xd6e60],0x30), was reported as
		// referencing no absolute address when it obviously does.
		const prev = buf[i - 1];
		if (prev !== undefined && (prev >> 6) === 2) return v;      // mod=10, disp32
		if (prev !== undefined && (prev >> 6) === 0 && (prev & 7) === 5) return v; // mod=00 rm=101
		// With a SIB, the layout is [ModRM][SIB][disp32]. Only the ModRM carries the
		// mod bits; the SIB's top two bits are the scale, which is why requiring
		// both to look like mod=10 rejected the pixel writer.
		const modrm = buf[i - 2];
		if (prev !== undefined && modrm !== undefined
			&& (modrm >> 6) === 2 && (modrm & 7) === 4) return v;
		// a1/a3 moffs form: opcode then a full 32-bit address, no ModRM.
		const op = buf[i - 5];
		if (op === 0xa1 || op === 0xa3) return v;
	}
	return null;
}

function classify(buf, addr, counts) {
	const r = scanRoutine(buf, addr);
	const isLeaf = r.calls === 0 && r.indirectCall === 0;
	const realEntry = cleanEntry(buf, addr);
	const absRef = referencesAbsolute(buf, addr, r.bytes.length);
	const kind = codeKind(buf, addr, r.mnemonics);
	let verdict;
	if (!realEntry) {
		verdict = 'NOT ATTEMPTABLE: interior address, not a function start. It follows other instructions, so no C can produce it.';
	} else if (kind.kind === 'not-c') {
		verdict = `NOT C CODE: ${kind.reasons.join(', ')}. No source form produces these instructions, `
			+ 'so byte matching C cannot apply. Document the behaviour instead.';
	} else if (absRef !== null) {
		verdict = `NOT ATTEMPTABLE AT LEVEL 1: references absolute address 0x${absRef.toString(16)}. `
			+ 'The disp32 is a relocation, so LEDATA is 00000000 until linked.';
	} else if (isLeaf) {
		verdict = 'LEVEL-1 CANDIDATE: real entry, leaf, no external refs, no absolute address';
	} else {
		verdict = 'TRIGGER 1 RISK: calls out, so the OBJ carries EXTDEF and its LEDATA is not final';
	}
	return {
		addr: '0x' + addr.toString(16),
		callsInRoutine: r.calls + r.indirectCall,
		bytes: r.length,
		callers: counts.get(addr) ?? 0,
		realEntry,
		codeKind: kind.kind,
		codeKindReasons: kind.reasons,
		absRef: absRef === null ? null : '0x' + absRef.toString(16),
		leaf: isLeaf,
		verdict,
	};
}

function main() {
	const args = process.argv.slice(2);
	const buf = load();
	const counts = callCounts();

	if (args.includes('--scan')) {
		const n = Number(args[args.indexOf('--scan') + 1] || 20);

		// ORDERING MATTERS, and both directions have a use.
		//
		// --by callers (default): highest call count first. These are the routines
		// on a player-visible path, so reconstructing one is worth more than
		// reconstructing ten 5-byte accessors. They are also harder, which is why
		// the size ordering exists.
		//
		// --by size: smallest first. The original plan said this, and it is the
		// right choice for a first run whose purpose is to measure whether the
		// toolchain matches at all, because a 5-byte routine has the fewest
		// degrees of freedom. Use it for a toolchain check, not for the corpus.
		const order = args.includes('--by') ? args[args.indexOf('--by') + 1] : 'callers';
		const targets = [...counts.entries()].sort((a, b) => b[1] - a[1]);

		// Walk every target, not just the first n, so the totals are honest.
		const allLeaves = [];
		const notC = [];
		for (const [addr, callers] of targets) {
			if (!cleanEntry(buf, addr)) continue;
			const r = scanRoutine(buf, addr);
			if (r.calls !== 0 || r.indirectCall !== 0) continue;
			// Skip routines that touch an absolute address: their LEDATA is not
			// final, so a Level-1 comparison can never succeed.
			if (referencesAbsolute(buf, addr, r.bytes.length) !== null) continue;
			// Skip code no C compiler can produce. Without this the queue contained
			// eleven BIOS stubs and x87 helpers, every attempt on which was wasted.
			const kind = codeKind(buf, addr, r.mnemonics);
			if (kind.kind === 'not-c') { notC.push({ addr, callers, reasons: kind.reasons }); continue; }
			allLeaves.push({ addr, callers, size: r.length });
		}
		const leaves = order === 'size'
			? allLeaves.slice().sort((a, b) => a.size - b.size || b.callers - a.callers).slice(0, n)
			: allLeaves.slice(0, n);

		if (args.includes('--json')) {
			console.log(JSON.stringify(leaves, null, 2));
			return;
		}
		console.log(`${allLeaves.length} C leaves among real function starts.`);
		if (notC.length) {
			console.log(`${notC.length} excluded as not-C (library, BIOS, x87, hand-written asm).`);
			console.log('  ' + notC.slice(0, 12).map((x) => '0x' + x.addr.toString(16)).join(' '));
		}
		console.log(`showing ${leaves.length}, ordered by ${order}.\n`);
		console.log('addr        callers  bytes');
		for (const l of leaves) {
			console.log(`0x${l.addr.toString(16).padEnd(9)} ${String(l.callers).padStart(6)}  ${String(l.size).padStart(5)}`);
		}
		return;
	}

	const addrArg = args.find((a) => /^(0x)?[0-9a-f]+$/i.test(a));
	if (!addrArg) {
		console.error('usage: preflight.js <addr> | --scan N [--json]');
		process.exit(64);
	}
	const addr = parseInt(addrArg.replace(/^0x/, ''), 16);
	const boundary = boundaryOk(addr);
	const c = classify(buf, addr, counts);
	c.boundary = boundary;
	if (boundary === false) {
		c.verdict = 'NOT ATTEMPTABLE: not an instruction boundary. Use cfgwalk --check to find the real entry.';
	}
	if (args.includes('--json')) {
		console.log(JSON.stringify(c, null, 2));
		return;
	}
	console.log(`routine ${c.addr}`);
	console.log(`  instruction boundary: ${boundary === null ? 'unknown' : boundary}`);
	console.log(`  real function start:  ${c.realEntry}`);
	console.log(`  code kind:            ${c.codeKind}${c.codeKindReasons.length ? ' (' + c.codeKindReasons.join(', ') + ')' : ''}`);
	console.log(`  absolute data ref:    ${c.absRef ?? 'none'}`);
	console.log(`  bytes to first ret:   ${c.bytes}`);
	console.log(`  calls out:            ${c.callsInRoutine}`);
	console.log(`  callers:              ${c.callers}`);
	console.log(`  ${c.verdict}`);
}

main();
