#!/usr/bin/env node
'use strict';
// tools/decode.js - the shared instruction decoder.
//
// WHY THIS EXISTS. `ndisasm` was invoked from thirteen places in eleven files, with four
// different conventions mixed: stdin against temp files, `-o0x180000` against `-o` in
// decimal, shell strings against argv arrays. That mixture is exactly how the `-w`
// continuation-line bug survived in eight of them at once, and how two operand
// classification bugs reached commits. The convention was a variable when it should not
// be.
//
// This module is the single entry point. Every caller gets instruction objects, not
// text, so nobody parses a column again.
//
// WHY A PYTHON SUBPROCESS AND NOT A NODE BINDING. The reason for the change is operand
// TYPE: whether a hex literal is a memory reference or an immediate. The Node binding
// (`capstone-wasm`) exposes only `mnemonic` and `opStr` with no operand types, so it
// cannot answer that. The Python binding can, the C library is already installed as an
// rpm, and detailed decode of the whole code region takes 0.20s, so one subprocess per
// region is cheap.
//
// DECODE FROM A KNOWN ENTRY, NEVER LINEARLY. `docs/capstone-gate.md` measures this:
// Capstone and ndisasm agree on every real instruction in 0xe0000-0xf0000, and disagree
// on 122,199 addresses when both are swept over the whole image. Neither is decoding
// instructions there; they are walking through data and losing sync differently. So a
// caller must supply a region they know is code.

const fs = require('fs');
const path = require('path');
const { execFileSync } = require('child_process');

// Resolve the interpreter once. The venv is REPO-LOCAL and gitignored, created by
// tools/decode-setup.sh from tools/decode-requirements.txt. An earlier version pointed at
// /var/tmp/csvenv, which is scratch space and would be gone after a reboot, so the
// decoder would stop working for no visible reason. CS_PYTHON overrides.
function pythonBin() {
	if (process.env.CS_PYTHON) return process.env.CS_PYTHON;
	const local = path.join(__dirname, '.venv', 'bin', 'python3');
	if (fs.existsSync(local)) return local;
	return 'python3';
}

function pythonAvailable() {
	try {
		execFileSync(pythonBin(), ['-c', 'import capstone'], { stdio: 'pipe' });
		return true;
	} catch {
		return false;
	}
}

// A clear failure, because the alternative is a stack trace about JSON or spawn that says
// nothing about the actual problem.
function requirePython() {
	if (pythonAvailable()) return;
	throw new Error(
		'capstone is not importable from ' + pythonBin() + '\n' +
		'The shared decoder needs it: run ./tools/decode-setup.sh\n' +
		'(capstone cannot be the Node binding, because capstone-wasm exposes no operand types)');
}

// Decode [lo, hi). Returns { insns, skips } where each instruction is
//   { addr, size, mnemonic, operands }
// and operands are
//   { type: 'mem', base, index, scale, disp }
//   { type: 'imm', value }
//   { type: 'reg', name }
// `skips` are byte addresses Capstone could not decode, which in a region containing
// data is normal and is reported rather than hidden.
// Turn one worker record into an instruction object, or null for a skip/marker.
// Shared by decode() and decodeMany() so the operand-shape rules cannot drift
// between the single and batch paths.
function recordToInsn(r) {
	const operands = (r.o || []).map((o) => {
		if (Array.isArray(o)) {
			if (o[0] === 'mem') {
				// ABSENT REGISTERS BECOME null, NOT EMPTY STRING. The Python worker emits ''
				// for a missing base or index, and '' is falsy in JavaScript, so
				// `op.base && op.index` silently produced 'absolute' for `[edx*4+disp]`,
				// which has an index and NO base. That misfiled every jump table as a
				// global and made globals.js disagree with globals_od.js on 7 routines.
				// The shape of the bug is the same as every other one this session: a
				// detector answering a slightly different question than the one asked.
				return {
					type: 'mem',
					base: o[1] || null,
					index: o[2] || null,
					scale: o[3],
					disp: o[4],
				};
			}
			if (o[0] === 'imm') return { type: 'imm', value: o[1] };
			if (o[0] === 'reg') return { type: 'reg', name: o[1] };
		}
		return { type: 'str', text: String(o) };
	});
	return { addr: r.a, size: r.s, mnemonic: r.m, operands };
}

function decode(lo, hi, opts = {}) {
	const args = [
		path.join(__dirname, 'decode_worker.py'),
		'--lo', '0x' + lo.toString(16),
		'--hi', '0x' + hi.toString(16),
	];
	if (opts.detail !== false) args.push('--detail');
	if (opts.image) args.push('--image', opts.image);

	requirePython();
	const out = execFileSync(pythonBin(), args, {
		encoding: 'utf8',
		stdio: 'pipe',
		maxBuffer: 512 * 1024 * 1024,
	});

	const insns = [];
	const skips = [];
	for (const line of out.split('\n')) {
		if (!line) continue;
		const r = JSON.parse(line);
		if (r.skip !== undefined) {
			skips.push(r.skip);
			continue;
		}
		insns.push(recordToInsn(r));
	}
	return { insns, skips };
}

// Decode MANY ranges in ONE worker process.
//
// WHY THIS EXISTS. Each decode() call spawns a Python interpreter and imports
// Capstone, which costs about 120ms of pure startup. The base-fold scans ask for one
// short window per routine, 76 of them, and paid that 76 times: `globals.js
// --width-check` alone took 11s, almost all of it interpreter startup rather than
// decoding. Batching the ranges into one process removes all but one import.
//
// Returns an array parallel to `ranges`, each entry { insns, skips }, so a caller can
// drop it in where it previously looped decode() per address.
function decodeMany(ranges, opts = {}) {
	if (!ranges.length) return [];
	const spec = ranges.map(([lo, hi]) =>
		'0x' + lo.toString(16) + ':0x' + hi.toString(16)).join(',');
	const args = [
		path.join(__dirname, 'decode_worker.py'),
		'--ranges', spec,
	];
	if (opts.detail !== false) args.push('--detail');
	if (opts.image) args.push('--image', opts.image);

	requirePython();
	const out = execFileSync(pythonBin(), args, {
		encoding: 'utf8',
		stdio: 'pipe',
		maxBuffer: 512 * 1024 * 1024,
	});

	const results = [];
	let cur = null;
	for (const line of out.split('\n')) {
		if (!line) continue;
		const r = JSON.parse(line);
		if (r.range !== undefined) {
			cur = { insns: [], skips: [] };
			results.push(cur);
			continue;
		}
		if (!cur) throw new Error('decodeMany: record before first range marker');
		if (r.skip !== undefined) {
			cur.skips.push(r.skip);
			continue;
		}
		cur.insns.push(recordToInsn(r));
	}
	if (results.length !== ranges.length) {
		throw new Error(`decodeMany: ${ranges.length} ranges requested, ${results.length} returned`);
	}
	return results;
}

// A persistent worker for callers that decode MANY windows over their life,
// one request per step, with the interpreter start and the Capstone import
// paid once instead of once per window.
//
// WHY THIS EXISTS. cfgwalk refills about 1,028 windows on a full walk, and
// decode() costs 117ms per call, almost all of it process startup. One spawn
// per window would turn a 1.3s walk into a 2-minute walk. The session speaks
// the worker's `--serve` line protocol over synchronous fd reads.
//
// Returns { decode(lo, hi), close() }. A session that is never closed still
// dies with the parent because the worker exits on stdin EOF.
function decodeSession(opts = {}) {
	requirePython();
	const { spawn, execFileSync } = require('child_process');
	const C = fs.constants;
	const args = ['-u', path.join(__dirname, 'decode_worker.py'), '--serve'];
	if (opts.detail !== false) args.push('--detail');
	if (opts.image) args.push('--image', opts.image);
	// Node 22 has no os.pipe(), and spawn's own pipe streams are libuv-owned
	// sockets with no usable descriptor for fs.readSync. Two FIFOs give plain
	// blocking descriptors the child inherits through a shell redirect.
	// Open order matters: the response read end is opened NONBLOCK first so
	// the child's stdout open cannot stall, then the request write end blocks
	// until the child's stdin open lands.
	const dir = fs.mkdtempSync('/var/tmp/dec-');
	const reqPath = path.join(dir, 'req');
	const resPath = path.join(dir, 'res');
	execFileSync('mkfifo', [reqPath, resPath]);
	// O_RDWR on both FIFOs: a NONBLOCK read of a FIFO with no writer returns 0
	// (EOF) instead of EAGAIN, which would look like a dead worker during the
	// child's startup window. Holding the read end open with O_RDWR keeps
	// reads honest: data or EAGAIN, never a false EOF.
	const rFd = fs.openSync(resPath, C.O_RDWR | C.O_NONBLOCK);
	const child = spawn('/bin/sh', ['-c', `exec ${[pythonBin(), ...args].map((a) => JSON.stringify(a)).join(' ')} < "${reqPath}" > "${resPath}"`],
		{ stdio: ['ignore', 'ignore', 'inherit'] });
	// Unref at once: every session use is synchronous, so the child must never
	// be the reason the event loop stays alive. A caller that finishes without
	// close() still exits; the child sees EOF on the request FIFO and leaves.
	child.unref();
	// O_RDWR never blocks on a FIFO and cannot ENXIO, so a dead child fails at
	// the first read instead of hanging the opener.
	const wFd = fs.openSync(reqPath, C.O_RDWR | C.O_NONBLOCK);
	let pending = '';
	let closed = false;
	let fifoNames = true;
	const readLine = () => {
		for (;;) {
			const nl = pending.indexOf('\n');
			if (nl >= 0) {
				const line = pending.slice(0, nl);
				pending = pending.slice(nl + 1);
				return line;
			}
			const chunk = Buffer.alloc(65536);
			let n;
			try {
				n = fs.readSync(rFd, chunk, 0, chunk.length, null);
			} catch (e) {
				if (e.code === 'EAGAIN') continue;
				throw e;
			}
			if (n <= 0) throw new Error('decode worker closed');
			pending += chunk.toString('utf8', 0, n);
		}
	};
	return {
		decode(lo, hi) {
			if (closed) throw new Error('decodeSession used after close');
			fs.writeSync(wFd, lo + ':' + hi + '\n');
			const insns = [];
			const skips = [];
			for (;;) {
				const line = readLine();
				if (!line) continue;
				const r = JSON.parse(line);
				if (r.end !== undefined) break;
				if (r.range !== undefined) continue;
				if (r.skip !== undefined) { skips.push(r.skip); continue; }
				insns.push(recordToInsn(r));
			}
			if (fifoNames) {
				// The child has both ends open once the first response has come
				// back; unlinking earlier races its shell redirect and the open
				// fails with ENOENT.
				fifoNames = false;
				try { fs.unlinkSync(reqPath); fs.unlinkSync(resPath); } catch (e) { /* gone */ }
			}
			return { insns, skips };
		},
		close() {
			if (closed) return;
			closed = true;
			try { fs.writeSync(wFd, 'quit\n'); } catch (e) { /* child exits on EOF anyway */ }
			try { fs.closeSync(wFd); fs.closeSync(rFd); } catch (e) { /* already gone */ }
			try { fs.unlinkSync(reqPath); fs.unlinkSync(resPath); } catch (e) { /* already gone */ }
			try { fs.rmdirSync(dir); } catch (e) { /* not empty yet */ }
			child.unref();
		},
	};
}

// --- the questions the old text parsers were asking -----------------------
//
// Each of these exists because a tool was inferring it from a string and got it wrong.

// A memory operand inside a plausible data range. This is the question `globals.js` was
// answering with a regex over `[eax+ecx+0x749]`-shaped text.
function dataReferences(insns, { minDisp = 0x10000, maxDisp = 0x200000 } = {}) {
	const out = [];
	for (const ins of insns) {
		for (const op of ins.operands) {
			if (op.type !== 'mem') continue;
			if (op.disp < minDisp || op.disp > maxDisp) continue;
			// Classification from the operand, not from its spelling.
			let kind;
			if (op.base !== null && op.index !== null) kind = 'indexed-base';
			else if (op.base !== null) kind = 'relative';
			else kind = 'absolute';
			out.push({ addr: ins.addr, mnemonic: ins.mnemonic, kind, disp: op.disp,
				base: op.base, index: op.index, scale: op.scale });
		}
	}
	return out;
}

// An immediate whose value falls in the data range is an address being COMPUTED, not
// accessed. `mov eax,0x7a7d0` is one; `mov [0x7b374],0x7b274` has both an address and an
// immediate address, and only the first is a reference.
function immediateAddresses(insns, { minDisp = 0x10000, maxDisp = 0x200000 } = {}) {
	const out = [];
	for (const ins of insns) {
		for (const op of ins.operands) {
			if (op.type !== 'imm') continue;
			if (op.value < minDisp || op.value > maxDisp) continue;
			out.push({ addr: ins.addr, mnemonic: ins.mnemonic, value: op.value });
		}
	}
	return out;
}

// Mnemonics that transfer control. Used where a tool needs "does this routine make a
// call" without decoding operand text.
const BRANCH = /^(j[a-z]+|call|loop[a-z]*|ret[nf]?)$/i;
const CALL = /^call/i;

function branches(insns) {
	return insns.filter((i) => BRANCH.test(i.mnemonic));
}
function calls(insns) {
	return insns.filter((i) => CALL.test(i.mnemonic));
}

// Instructions up to and including the first ret. Every routine-bounded tool wants this
// and three of them were computing it slightly differently.
function toFirstRet(insns) {
	const out = [];
	for (const i of insns) {
		out.push(i);
		if (/^ret[nf]?$/i.test(i.mnemonic)) break;
	}
	return out;
}

// The target of a direct call or jump, from the immediate operand. Returns null for
// indirect transfers, which are a real category and must not be confused with 0.
function directTarget(ins) {
	if (!BRANCH.test(ins.mnemonic)) return null;
	const imm = ins.operands.find((o) => o.type === 'imm');
	return imm ? imm.value : null;
}

// Render one instruction object back to text for display. Tools that migrated off
// ndisasm still print listings, and each writing its own renderer is how four
// conventions appeared in the first place.
function formatOp(o) {
	if (o.type === 'imm') return '0x' + (o.value >>> 0).toString(16);
	if (o.type === 'reg') return o.name;
	if (o.type === 'mem') {
		const parts = [];
		if (o.base) parts.push(o.base);
		if (o.index) parts.push(o.index + (o.scale > 1 ? '*' + o.scale : ''));
		if (o.disp !== undefined && o.disp !== null) parts.push('0x' + (o.disp >>> 0).toString(16));
		return '[' + (parts.join('+') || '0') + ']';
	}
	return String(o.text !== undefined ? o.text : o);
}
function format(ins) {
	return '0x' + ins.addr.toString(16) + '  ' + ins.mnemonic +
		(ins.operands.length ? ' ' + ins.operands.map(formatOp).join(', ') : '');
}

module.exports = {
	decode,
	decodeMany,
	decodeSession,
	pythonAvailable,
	pythonBin,
	requirePython,
	dataReferences,
	immediateAddresses,
	branches,
	calls,
	toFirstRet,
	directTarget,
	format,
	formatOp,
	BRANCH,
	CALL,
};
