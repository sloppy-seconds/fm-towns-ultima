#!/usr/bin/env node
'use strict';
// tools/globals_od.js - classify absolute data references using objdump's parsed operands.
//
// WHY THIS EXISTS. `tools/globals.js` classifies an operand by regex on ndisasm TEXT:
// it looks for a base register, a `*N` scale and a `+0xNNN` displacement, and infers
// whether the constant is a global, an array base or a struct field. That worked, but
// it produced a factor-of-three error on its first outing: it counted `[edx+0xcdf57]`
// struct fields as globals because the distinction is not visible in that text form.
//
// `objdump -M intel` prints the same operand with the structure explicit:
//
//     mov  eax,ds:0xceca0                     -> absolute, no base
//     add  DWORD PTR [edx+0xcde89],eax        -> base + displacement
//     mov  [eax+edx*2+0x77e90],cx             -> base + index*scale + displacement
//
// So the three cases the regex was inferring can be read off directly instead. The
// point is not a different disassembler for its own sake: it is to delete a
// hand-written instruction decoder from the critical path.
//
// CROSS-CHECK. This tool is validated against `globals.js` on the whole base-fold set.
// Two independent methods agreeing is worth more than either alone, and where they
// disagree that is a finding rather than a nuisance.
//
// Usage:
//   node tools/globals_od.js 0xef248
//   node tools/globals_od.js --scan base-fold
//   node tools/globals_od.js --compare        agree/disagree against globals.js

const fs = require('fs');
const path = require('path');
const { execFileSync } = require('child_process');

const ROOT = path.join(__dirname, '..');
const IMAGE = path.join(ROOT, 'ENCHANT.EXP');
const CORPUS = path.join(ROOT, 'docs', 'corpus.json');

function imagePath() {
	const args = process.argv.slice(2);
	const i = args.indexOf('--image');
	return i >= 0 && args[i + 1] ? args[i + 1] : IMAGE;
}

// objdump wraps its HEX column onto a continuation line with no text, so the
// instruction text is complete on the first line and a following line that has an
// address and hex but no mnemonic is a continuation to be skipped, not parsed.
function disasm(lo, hi) {
	const out = execFileSync('objdump', [
		'-D', '-b', 'binary', '-m', 'i386', '-M', 'intel',
		`--start-address=${lo}`, `--stop-address=${hi}`, imagePath(),
	], { encoding: 'utf8', stdio: 'pipe', maxBuffer: 64 * 1024 * 1024 });
	const rows = [];
	for (const line of out.split('\n')) {
		const m = line.match(/^\s*([0-9a-f]+):\t([0-9a-f ]+)\t(.*)$/);
		if (!m) continue;
		rows.push({ addr: parseInt(m[1], 16), text: m[3].trim() });
	}
	return rows;
}

// Parse the memory operand, which objdump gives with its parts separated.
// Returns { kind, disp, base, index, scale } where kind is one of:
//   absolute        ds:0xCEXCA0 or [0xCCEC] with no register
//   indexed-base    [reg+reg*scale+disp]  the disp is an array base
//   relative        [reg+disp]            the disp is a struct field
function operand(insn) {
	// Intel syntax puts the memory operand in brackets, or as ds:ADDR for moffs.
	const moffs = insn.match(/\bds:0x([0-9a-f]+)/i);
	if (moffs) return { kind: 'absolute', disp: parseInt(moffs[1], 16), base: null, index: null };
	const br = insn.match(/\[([^\]]+)\]/);
	if (!br) {
		// mov reg,0xNNNNN  loads an address into a register: a data reference.
		const imm = insn.match(/^mov\s+[a-z0-9]+,\s*0x([0-9a-f]{5,6})$/i);
		if (imm) return { kind: 'absolute', disp: parseInt(imm[1], 16), base: null, index: null };
		return null;
	}
	const inner = br[1];
	let base = null;
	let index = null;
	let scale = 1;
	let disp = null;
	for (const part of inner.split('+')) {
		const p = part.trim();
		const scaled = p.match(/^([a-z]{2,3})\*([1248])$/i);
		if (scaled) { index = scaled[1].toLowerCase(); scale = Number(scaled[2]); continue; }
		const d = p.match(/^0x([0-9a-f]+)$/i);
		if (d) { disp = parseInt(d[1], 16); continue; }
		if (/^(e?[abcd]x|e?[sd]i|e?[sb]p|e?ip)$/i.test(p)) { base = p.toLowerCase(); continue; }
	}
	if (index && disp !== null) return { kind: 'indexed-base', disp, base, index, scale };
	if (base) return { kind: 'relative', disp, base, index: null };
	if (disp !== null) return { kind: 'absolute', disp, base: null, index: null };
	return null;
}

const BRANCH = /^(j[a-z]+|call|loop[a-z]*)$/i;

// The bound must be the NEXT FUNCTION START, not a fixed window. A fixed window runs
// past the end of the routine and attributes a neighbour's references to it, which is
// how the first run of this tool reported 0xef248 as containing references to
// 0xd6e68 and 0xbd578 from routines that follow it.
let STARTS_CACHE = null;
function starts() {
	if (STARTS_CACHE) return STARTS_CACHE;
	const corpus = JSON.parse(fs.readFileSync(CORPUS, 'utf8'));
	STARTS_CACHE = corpus.map((r) => r.addr).sort((a, b) => a - b);
	return STARTS_CACHE;
}

function nextStart(addr) {
	for (const s of starts()) if (s > addr) return s;
	return addr + 1024;
}

// ONE OBJDUMP FOR THE WHOLE CODE REGION.
//
// disasm() is called once per routine by --compare, and each call spawned objdump for a
// ~50-byte window. Measured: 76 spawns of a short window took ~24s, while one objdump
// over the whole 0xe0000-0x105000 region takes ~35ms and contains every window. So the
// full region is disassembled once, indexed by address, and each routine slices its rows
// out of it. The rows are identical: objdump is deterministic over a fixed byte range and
// the later rows do not depend on where the start-address fell.
let _rowCache = null;
let _rowAddrs = null;
function allRows() {
	if (_rowCache) return _rowCache;
	// Cover exactly the image. Asking objdump to disassemble a range larger than the file
	// makes it pad or complain, and 0x200000 was twice the file size, which doubled the
	// cost of building this cache. The image length is the true upper bound.
	const hiBound = fs.statSync(imagePath()).size;
	const rows = disasm(0x0, hiBound);
	_rowCache = rows;
	_rowAddrs = rows.map((r) => r.addr);
	return _rowCache;
}

// The rows in [lo, hi), taken from the single cached disassembly.
function rowsIn(lo, hi) {
	const all = allRows();
	// Lower bound: first row with addr >= lo. Rows are in ascending address order.
	let a = 0, b = _rowAddrs.length;
	while (a < b) {
		const mid = (a + b) >> 1;
		if (_rowAddrs[mid] < lo) a = mid + 1; else b = mid;
	}
	const out = [];
	for (let i = a; i < all.length && all[i].addr < hi; i++) out.push(all[i]);
	return out;
}

function refs(addr) {
	// BOUND BY THE FIRST RET, not by the next corpus entry.
	//
	// `nextStart` was derived from docs/corpus.json, which holds CALL targets only. A
	// routine can end well before the next call target exists: 0xfdecc is `mov
	// eax,[0xdea44]; ret` at 6 bytes, and the next corpus entry is 0xfdee8, 28 bytes
	// later. Scanning to 0xfdee8 walked into two neighbouring routines and attributed
	// their globals to 0xfdecc, producing a disagreement that was entirely this tool's
	// fault. `shouldStop` now ends the scan at the first ret, which is what the routine
	// boundary actually is here.
	const hi = Math.min(nextStart(addr), addr + 4096);
	const rows = rowsIn(addr, hi);
	const out = [];
	for (const r of rows) {
		// THE RET TEST MUST COME FIRST. Every other branch in this loop is a `continue`,
		// so testing for ret at the BOTTOM meant a ret instruction, which has no operand,
		// hit `if (!op) continue` and never reached the break. The scan then ran to the
		// end of the disassembly window and attributed neighbouring routines' globals to
		// this one: 0xfdecc reported 0xdea48 from the routine that starts 28 bytes later.
		//
		// It must also cover `retf` and `retn`. `retf 0xf30` is a far return with an
		// immediate, and an earlier /^ret\b/ matched it but a plain `ret` test did not, so
		// 0xf329c ran past its own terminator into the next routine and reported a global
		// it does not touch.
		if (/^ret[nf]?\b/i.test(r.text)) break;
		const mnemonic = (r.text.match(/^([a-z]+)/i) || [])[1] || '';
		if (BRANCH.test(mnemonic)) continue;
		const op = operand(r.text);
		if (!op) continue;
		if (op.disp === null || op.disp < 0x10000 || op.disp > 0x200000) continue;
		out.push({ at: r.addr, ...op, text: r.text });
	}
	return out;
}

function baseFoldAddrs() {
	return JSON.parse(fs.readFileSync(CORPUS, 'utf8'))
		.filter((r) => r.kind === 'base-fold').map((r) => r.addr);
}

function main() {
	const args = process.argv.slice(2);

	if (args.includes('--compare')) {
		// Agreement test: objdump says 'absolute' or 'indexed-base' where globals.js
		// says 'data'. Any disagreement is a finding about one of the two.
		const addrs = baseFoldAddrs();
		let agree = 0;
		const disagree = [];
		// IN-PROCESS, ONE DECODE. This loop used to shell out to `node globals.js <addr>`
		// per routine, which is ~140ms of Node startup each and made --compare take 25s.
		// The comparison is the same either way: globals.js exports scanRoutine, so the
		// identical code runs here with no subprocess. The reference set is built from the
		// same 'data' classification the CLI prints.
		const gj = require('./globals.js');
		const buf = fs.readFileSync(imagePath());
		const decoded = require('./decode.js').decodeMany(
			addrs.map((a) => [a, gj.nextBoundary(a)]), { image: imagePath() });
		for (let i = 0; i < addrs.length; i++) {
			const a = addrs[i];
			const mine = refs(a);
			const mineGlobals = new Set(mine.filter((r) => r.kind !== 'relative').map((r) => r.disp));
			// The 'data' references globals.js would print, taken from the same routine
			// scan rather than from parsing its stdout. This is the section the old code
			// extracted with `split('code references excluded')[0]`, kept equivalent.
			let theirsGlobals;
			try {
				const theirs = gj.scanRoutine(buf, a, decoded[i].insns);
				theirsGlobals = new Set(theirs.filter((r) => r.kind === 'data').map((r) => r.value));
			} catch {
				theirsGlobals = new Set();
			}
			const same = mineGlobals.size === theirsGlobals.size
				&& [...mineGlobals].every((v) => theirsGlobals.has(v));
			if (same) agree++;
			else disagree.push({ addr: a, od: [...mineGlobals], old: [...theirsGlobals] });
		}
		console.log(`compared ${addrs.length} base-fold routines`);
		console.log(`agree: ${agree}`);
		console.log(`disagree: ${disagree.length}`);
		for (const d of disagree.slice(0, 10)) {
			console.log(`  0x${d.addr.toString(16)}  objdump=${d.od.map((x) => '0x' + x.toString(16)).join(',')}` +
				`  globals.js=${d.old.map((x) => '0x' + x.toString(16)).join(',')}`);
		}
		return;
	}

	if (args.includes('--scan')) {
		const addrs = baseFoldAddrs();
		const byGlobal = new Map();
		for (const a of addrs) {
			for (const r of refs(a)) {
				if (r.kind === 'relative') continue;
				if (!byGlobal.has(r.disp)) byGlobal.set(r.disp, new Set());
				byGlobal.get(r.disp).add(a);
			}
		}
		const globals = [...byGlobal.entries()]
			.map(([v, u]) => ({ value: v, users: u.size }))
			.sort((x, y) => y.users - x.users);
		console.log(`${addrs.length} base-fold routines scanned with objdump.`);
		console.log(`distinct absolute/array-base addresses: ${globals.length}`);
		for (const g of globals.slice(0, 10)) {
			console.log(`  0x${g.value.toString(16).padStart(6, '0')}  ${g.users} routines`);
		}
		return;
	}

	const addrArg = args.find((a) => /^(0x)?[0-9a-f]+$/i.test(a));
	if (!addrArg) {
		console.error('usage: globals_od.js <addr> | --scan base-fold | --compare');
		process.exit(64);
	}
	const addr = parseInt(addrArg.replace(/^0x/, ''), 16);
	for (const r of refs(addr)) {
		console.log(`  ${r.kind.padEnd(13)} 0x${r.disp.toString(16)}  ${r.text}`);
	}
}

main();
