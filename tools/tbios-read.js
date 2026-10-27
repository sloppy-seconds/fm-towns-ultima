#!/usr/bin/env node
'use strict';
// tools/tbios-read.js - read a game routine together with the TBIOS handlers it calls.
//
// WHY THIS EXISTS. Naming a function that does its work through TBIOS means reading two
// binaries at once: the call site in ENCHANT.EXP pins which AH value is requested, and the
// handler in TBIOS.BIN says what that request actually does. Doing it by hand means
// holding a thunk address, an AH number, a table offset and a handler address in your head
// across two disassemblies, and it is exactly how "AH 0x46 -> 0x2d78" ends up quoted from
// a previous session instead of re-derived.
//
// So this prints the chain in one pass and marks every link with the command that
// produced it:
//
//   call 0x2a3          -> TBIOS thunk stub at 0x2a3
//   stub: b4 46          -> AH = 0x46
//   TBIOS.BIN table     -> handler 0x2d78
//   handler disassembly
//
// The thunk is identified by its signature, not by a position in a list, so a stub the
// 70-entry scan missed (as 0xc7d was, being a continuation with no preceding `ret`) is
// reported as unknown rather than silently misattributed.
//
// USAGE
//   node tools/tbios-read.js --at 0xe5d90            the routine and its handlers
//   node tools/tbios-read.js --at 0xe5d90 --depth 2  follow calls into game routines too
//   node tools/tbios-read.js --handler 0x2d78        one handler, by AH-derived address
//   node tools/tbios-read.js --ah 0x46               one handler, by AH value
//
// --at takes a hex address in ENCHANT.EXP. --handler takes an offset in TBIOS.BIN.

const fs = require('fs');
const path = require('path');
const { decode } = require('./decode.js');
const { table, loadTbios, TBL } = require('./tbios.js');

const ROOT = path.join(__dirname, '..');
const EXE = path.join(ROOT, 'ENCHANT.EXP');

// The stub signature measured in docs/tbios-thunks.md: b4 <AH> 0f a0 68 10 01 00 00.
//
// THE CALL TARGET IS NOT THE SIGNATURE. This tool first looked for `b4` at the call target
// and found nothing, so every TBIOS call was reported as a game routine. The real shape is
// a wrapper: the game calls the wrapper's first instruction, the wrapper sets up its
// arguments, and the `b4 <AH>` follows 9 to 14 bytes in. `xxd -s 0x2c8 -l 32 ENCHANT.EXP`
// shows `57 8b 7c 24 08 8b 4c 24 0c | b4 00 0f a0 68 10 01 00 00`, so the nine bytes
// before the signature are `push edi; mov edi,[esp+8]; mov ecx,[esp+0xc]`.
//
// So the search runs FORWARD from the call target over a bounded window. The window is 32,
// well under the 0x27 gap to the next signature hit (0x2d1 to 0x2f8), so a call cannot pick
// up its neighbour's AH value.
const AH_WINDOW = 32;

function stubAh(exe, addr) {
	for (let i = addr; i < addr + AH_WINDOW && i + 9 <= exe.length; i++) {
		if (exe[i] === 0xb4 && exe[i + 2] === 0x0f && exe[i + 3] === 0xa0 &&
			exe[i + 4] === 0x68 && exe[i + 5] === 0x10 && exe[i + 6] === 0x01) {
			return { ah: exe[i + 1], sigAt: i, delta: i - addr };
		}
	}
	return null;
}

function hex(n, w = 0) {
	return '0x' + n.toString(16).padStart(w, '0');
}

// A call operand is kind 'j' in Capstone's detailed form, not 'i' or 'm'. Getting this
// wrong silently drops every direct call, which is the bug refindex.py had: it looked for
// 'i' and reported 0 calls. So accept 'j' and fall back to scanning for an immediate.
function callTarget(ins) {
	if (!/^call$/i.test(ins.mnemonic)) return null;
	const j = ins.operands.find((o) => o.type === 'imm');
	return j ? j.value : null;
}

function printRoutine(exe, at, limit) {
	const { insns } = decode(at, Math.min(at + limit, exe.length), { image: EXE });
	const found = [];
	let retSeen = 0;
	for (const ins of insns) {
		console.log('  ' + hex(ins.addr, 6) + '  ' + ins.mnemonic.padEnd(7) +
			ins.operands.map(fmtOp).join(', '));
		const t = callTarget(ins);
		if (t !== null) found.push({ site: ins.addr, target: t });
		if (/^ret/i.test(ins.mnemonic)) {
			// A routine ends at its LAST ret. A ret can be an early exit, so the boundary is
			// found by looking at what follows: a prologue (`push ebp` / `mov ebp,esp`, or the
			// `mov ax,ax` / `mov eax,eax` prelude High C emits) or padding means this ret was
			// the end. Anything else is another exit path and we keep reading.
			const next = insns[insns.indexOf(ins) + 1];
			if (!next || /^int3$/i.test(next.mnemonic) || /^nop$/i.test(next.mnemonic)) break;
			const isPrologue = /^push$/i.test(next.mnemonic) &&
				/^(ebp|ebx|esi|edi)$/i.test((next.operands[0] || {}).name || '');
			const isPrelude = /^mov$/i.test(next.mnemonic) && next.operands.length === 2 &&
				next.operands[0].type === 'reg' && next.operands[1].type === 'reg' &&
				next.operands[0].name === next.operands[1].name;
			if (isPrologue || isPrelude) break;
			// Keep looking, but do not run away into the next routine.
			if (ins.addr > at + 0x200) break;
		}
	}
	return found;
}

function fmtOp(o) {
	if (o.type === 'imm') return hex(o.value);
	if (o.type === 'reg') return o.name;
	if (o.type === 'mem') {
		const inner = [o.base, o.index ? o.index + (o.scale > 1 ? '*' + o.scale : '') : '']
			.filter(Boolean).join('+');
		return '[' + inner + (o.base || o.index ? (o.disp >= 0 ? '+' : '') + hex(o.disp) : hex(o.disp)) + ']';
	}
	return o.text || '';
}

function main() {
	const argv = process.argv.slice(2);
	const argOf = (k) => {
		const i = argv.indexOf(k);
		return i >= 0 ? argv[i + 1] : null;
	};
	const exe = fs.readFileSync(EXE);
	const tbios = loadTbios();
	// --image takes a PATH, not a buffer: the Python worker reads it itself. Passing the
	// buffer stringified the whole 1 MB executable into the command line, which is how the
	// first run of this tool produced one enormous argv instead of a disassembly.
	// The decoder takes a PATH and reads it itself, so a buffer cannot be passed. Write the
	// cached copy OUTSIDE the repository: TBIOS.BIN is Fujitsu's copyrighted firmware, and the
	// first version of this tool put it in the repo root, where it sat untracked and
	// unignored. An ignore rule now covers it, but writing it to scratch space removes the
	// hazard rather than guarding it. /var/tmp is disk-backed, per the working-directory rule.
	const TBIOS_PATH = path.join('/var/tmp/mpwork', 'TBIOS.BIN');
	if (!fs.existsSync(TBIOS_PATH)) {
		fs.mkdirSync(path.dirname(TBIOS_PATH), { recursive: true });
		fs.writeFileSync(TBIOS_PATH, tbios);
	}
	const rows = table(tbios);
	const byAh = new Map(rows.map((r) => [r.ah, r.off]));

	// --check asserts the claims docs/display-context.md makes about 0xe5d90. Every one is
	// a measured value, so a change in the binary or a regression in the decoder fails
	// here rather than in prose nobody re-reads.
	if (argv.includes('--check')) {
		const want = [
			// site, wrapper, AH, handler
			[0xe5d9a, 0x2c8, 0x00, 0x19b8],
			[0xe5dc6, 0x2ea, 0x01, 0x450],
			[0xe5de2, 0x2ea, 0x01, 0x450],
			[0xe5e11, 0x4c5, 0x0c, 0x1e04],
			[0xe5e45, 0x61c, 0x15, 0x1f1c],
			[0xe5e54, 0x63e, 0x16, 0x1f30],
			[0xe5e60, 0x660, 0x17, 0x1f44],
		];
		let bad = 0;
		for (const [site, wrapper, ah, handler] of want) {
			const st = stubAh(exe, wrapper);
			const got = st ? byAh.get(st.ah) : undefined;
			const okRow = st && st.ah === ah && got === handler;
			if (!okRow) {
				bad++;
				console.log('FAIL site 0x' + site.toString(16) + ': expected AH 0x' +
					ah.toString(16) + ' -> 0x' + handler.toString(16) + ', got ' +
					(st ? 'AH 0x' + st.ah.toString(16) + ' -> ' + (got === undefined ? 'none' : '0x' + got.toString(16)) : 'no signature'));
			}
		}
		console.log(bad === 0
			? 'display-context: 7 of 7 TBIOS calls in 0xe5d90 reach the recorded handler'
			: 'display-context: ' + bad + ' of 7 disagree');
		return bad === 0 ? 0 : 1;
	}

	const showHandler = (ah, handler) => {
		console.log('');
		console.log('  AH ' + hex(ah, 2) + ' -> TBIOS.BIN ' + hex(handler));
		console.log('  handler in file:', handler < tbios.length ? 'yes' : 'NO - not a file offset');
		if (handler >= tbios.length) return;
		const { insns } = decode(handler, Math.min(handler + 200, tbios.length), { image: TBIOS_PATH });
		let n = 0;
		for (const ins of insns) {
			console.log('    ' + hex(ins.addr, 6) + '  ' + ins.mnemonic.padEnd(7) +
				ins.operands.map(fmtOp).join(', '));
			if (/^ret/i.test(ins.mnemonic)) break;
			if (++n > 60) break;
		}
	};

	const handlerArg = argOf('--handler');
	const ahArg = argOf('--ah');
	if (handlerArg) {
		const off = parseInt(handlerArg, 16);
		const ah = [...byAh].find(([, v]) => v === off);
		showHandler(ah ? ah[0] : -1, off);
		return;
	}
	if (ahArg) {
		const ah = parseInt(ahArg, 16);
		if (!byAh.has(ah)) {
			console.log('AH ' + hex(ah, 2) + ' has no entry in the table at ' + hex(TBL));
			return;
		}
		showHandler(ah, byAh.get(ah));
		return;
	}

	const atArg = argOf('--at');
	if (!atArg) {
		console.log('usage: node tools/tbios-read.js --at 0xe5d90 [--depth N]');
		console.log('       node tools/tbios-read.js --ah 0x46');
		console.log('       node tools/tbios-read.js --handler 0x2d78');
		return;
	}
	const at = parseInt(atArg, 16);
	console.log('== ' + hex(at) + ' in ENCHANT.EXP ==');
	const calls = printRoutine(exe, at, 400);

	console.log('');
	console.log('calls made: ' + calls.length);
	const thunked = [];
	for (const c of calls) {
		const st = stubAh(exe, c.target);
		const handler = st ? byAh.get(st.ah) : undefined;
		if (st) thunked.push({ ...c, ah: st.ah, delta: st.delta, handler });
		console.log('  ' + hex(c.site, 6) + ' -> ' + hex(c.target, 6) +
			(st ? '  wrapper, sig +' + st.delta + ', TBIOS AH ' + hex(st.ah, 2) + '  handler ' +
				(handler !== undefined ? hex(handler) : 'NOT IN TABLE')
				: '  (game routine)'));
	}

	for (const t of thunked) {
		if (t.handler === undefined) continue;
		showHandler(t.ah, t.handler);
	}
}

// process.exit(main()) and not bare main(). A bare call DISCARDS the return value, so
// --check printed "1 of 7 disagree" and still exited 0, which would have let the gate in
// checkall.js pass on a broken claim. This is the same class of defect as a detector that
// answers a different question than the one asked: the check computed the right answer and
// then did not report it where the caller looks.
if (require.main === module) process.exit(main());
