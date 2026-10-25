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
//   node tools/preflight.js --scan 40        first 40 leaves by call count
//   node tools/preflight.js --scan 40 --json

const fs = require('fs');
const path = require('path');
const { execFileSync } = require('child_process');

const ROOT = path.join(__dirname, '..');
const IMAGE = path.join(ROOT, 'ENCHANT.EXP');
const BASE = 0;

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
function scanRoutine(buf, entry) {
	const bytes = [];
	let i = entry;
	let calls = 0;
	let indirectCall = 0;
	let rets = 0;
	// Generous cap: the longest routine measured is a few hundred instructions.
	while (i < buf.length && bytes.length < 4096) {
		const b = buf[i];
		bytes.push(b);
		if (b === CALL_REL32 || b === CALL_REL16) calls++;
		if (b === 0xff) {
			const modrm = buf[i + 1];
			const reg = (modrm >> 3) & 7;
			if (reg === 2 || reg === 3) indirectCall++;
		}
		if (b === 0xc3 || b === 0xc2) {
			rets++;
			break;
		}
		i++;
	}
	return { bytes, calls, indirectCall, rets, length: bytes.length };
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

function boundaryOk(addr) {
	try {
		const out = execFileSync('node', [path.join(__dirname, 'cfgwalk.js'), '--check', '0x' + addr.toString(16)], {
			encoding: 'utf8', stdio: 'pipe',
		});
		return /is 0x[0-9a-f]+ a boundary:\s+true/i.test(out);
	} catch {
		return null;
	}
}

function callCounts() {
	const out = execFileSync('node', [path.join(__dirname, 'funcs.js')], { encoding: 'utf8', stdio: 'pipe' });
	const counts = new Map();
	for (const line of out.split('\n')) {
		const m = line.match(/^\s+(0x[0-9a-f]+)\t(\d+) calls/);
		if (m) counts.set(parseInt(m[1], 16), Number(m[2]));
	}
	return counts;
}

function classify(buf, addr, counts) {
	const r = scanRoutine(buf, addr);
	const isLeaf = r.calls === 0 && r.indirectCall === 0;
	const realEntry = cleanEntry(buf, addr);
	let verdict;
	if (!realEntry) {
		verdict = 'NOT ATTEMPTABLE: interior address, not a function start. It follows other instructions, so no C can produce it.';
	} else if (isLeaf) {
		verdict = 'LEVEL-1 CANDIDATE: real entry, leaf, no external refs, OBJ will have no EXTDEF';
	} else {
		verdict = 'TRIGGER 1 RISK: calls out, so the OBJ carries EXTDEF and its LEDATA is not final';
	}
	return {
		addr: '0x' + addr.toString(16),
		callsInRoutine: r.calls + r.indirectCall,
		bytes: r.length,
		callers: counts.get(addr) ?? 0,
		realEntry,
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
		const targets = [...counts.entries()].sort((a, b) => b[1] - a[1]);
		const leaves = [];
		for (const [addr, callers] of targets) {
			if (!cleanEntry(buf, addr)) continue;
			const r = scanRoutine(buf, addr);
			if (r.calls === 0 && r.indirectCall === 0) {
				leaves.push({ addr, callers, size: r.length });
			}
			if (leaves.length >= n) break;
		}
		if (args.includes('--json')) {
			console.log(JSON.stringify(leaves, null, 2));
			return;
		}
		console.log(`${leaves.length} leaf routines among the most-called targets, by callers:\n`);
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
	console.log(`  bytes to first ret:   ${c.bytes}`);
	console.log(`  calls out:            ${c.callsInRoutine}`);
	console.log(`  callers:              ${c.callers}`);
	console.log(`  ${c.verdict}`);
}

main();
