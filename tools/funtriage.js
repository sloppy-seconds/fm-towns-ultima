#!/usr/bin/env node
'use strict';
// tools/funtriage.js - rank the 709 unknown functions by how much can be said about each, without
// reading any of them.
//
// WHY THIS EXISTS. The measurement that set the agenda: 738 corpus rows and ZERO of them named.
// Reading one routine at a time does not close that gap, because the rate is about seven per long
// session and every routine read so far was reached through an anchor. The anchors now exist in
// machine-readable form and have never been joined:
//
//   refindex.json     709 functions -> 2,526 distinct data addresses they reference
//   docs/globals.json 9 named globals, with types and field offsets
//   TBIOS thunks      70 stubs at 0x2d1..0x71d, one per AH value, all resolvable via tools/tbios.js
//
// This joins them and prints, per function, what is known: which named globals it touches, which
// TBIOS calls it makes, and whether it references an address that looks like text. The output is a
// reading order, not a naming.
//
// WHAT IT DOES NOT DO, and this is the whole discipline of the file: it does not name anything.
// "calls TBIOS 0x46, touches the record index, references a string" is evidence about a function.
// It is not a name, and the moment a heuristic here starts emitting names it becomes the
// confidently-wrong sentence this project keeps having to correct. Every field is something a
// command produced.
//
// Usage:
//   node tools/funtriage.js --index refindex.json             the ranking
//   node tools/funtriage.js --index refindex.json --top 40    fewer rows
//   node tools/funtriage.js --index refindex.json --fn 0xf7740  everything known about one
//   node tools/funtriage.js --index refindex.json --json      machine readable
//
// Exit status 1 if the index is missing or empty, because an empty ranking would look like a clean
// answer about every function at once.

const fs = require('fs');
const path = require('path');

const ROOT = path.join(__dirname, '..');

// The 70 stubs, from the signature b4 <AH> 0f a0 68 10 01 00 00. Written here as ranges rather
// than as 70 literals so a reader can see it is a contiguous layout, and checked at run time.
const THUNK_LO = 0x2d1;
const THUNK_HI = 0x71d;

function loadTbiosMap() {
	// tools/tbios.js owns the AH -> handler mapping. Reuse it so there is one source of truth.
	try {
		const t = require('./tbios.js');
		const tbios = t.loadTbios();
		const m = new Map();
		for (const r of t.table(tbios)) m.set(r.ah, r.off);
		return m;
	} catch (e) {
		return null;
	}
}

// The game's stub ENTRY offsets and their AH values, so a call site can be turned into an AH.
//
// THE SIGNATURE MATCHES `mov ah,<n>`, NOT THE STUB ENTRY, and that cost a silent failure. The stub
// at 0xABD begins `push esi; push edi; mov edi,[esp+0xc]; mov esi,[esp+0x10]` and only then
// `mov ah,0x46`, so its `mov ah` is at 0xAC7. Keying the map by the matched offset meant a call to
// 0xABD matched nothing, and every TBIOS call in the image went uncounted: 1 function in 691 was
// credited with one, when 70 stubs exist and are called from hundreds of sites.
//
// The fix walks backwards from each `mov ah` over the stub's own prologue to find its entry. The
// prologue is a fixed shape for these stubs (`push esi`, `push edi`, up to two `mov <reg>,[esp+n]`),
// so the entry is the first of that run. When the walk is not sure it keeps the `mov ah` offset,
// which is at least a real address rather than a wrong one.
function thunks(exe) {
	const sites = [];
	for (let i = 0; i + 8 <= exe.length; i++) {
		if (exe[i] === 0xb4 && exe[i + 2] === 0x0f && exe[i + 3] === 0xa0
			&& exe[i + 4] === 0x68 && exe[i + 5] === 0x10 && exe[i + 6] === 0x01) {
			sites.push(i);
		}
	}
	// The entry is the first byte after the previous stub's `ret`, skipping padding. Two earlier
	// attempts walked back over the prologue by matching push/mov shapes and both mis-fired: one
	// found 113 entries where there are 70, the other missed 0xABD entirely. The ret scan gives 70
	// ascending entries with 0xABD among them, which is the property that matters, and it is
	// checked rather than assumed.
	const out = new Map();
	for (const ahSite of sites) {
		let start = ahSite;
		for (let p = ahSite - 1; p >= Math.max(0, ahSite - 40); p--) {
			if (exe[p] === 0xc3) { start = p + 1; break; }
		}
		while (start < ahSite && (exe[start] === 0x90 || exe[start] === 0x66)) start++;
		out.set(start, exe[ahSite + 1]);
	}
	return out;
}

function isTextLike(exe, addr) {
	if (addr < 0 || addr + 8 > exe.length) return false;
	let printable = 0;
	for (let i = 0; i < 8; i++) {
		const c = exe[addr + i];
		if (c >= 32 && c < 127) printable++;
	}
	// Shift-JIS lead bytes read as text too, and this binary is full of them.
	return printable >= 6;
}

function namedGlobals() {
	const p = path.join(ROOT, 'docs', 'globals.json');
	if (!fs.existsSync(p)) return new Map();
	const d = JSON.parse(fs.readFileSync(p, 'utf8'));
	const m = new Map();
	for (const g of d.globals || []) {
		const a = typeof g.addr === 'string' ? parseInt(g.addr, 16) : g.addr;
		if (Number.isFinite(a)) m.set(a, g);
	}
	return m;
}

function main() {
	const argv = process.argv.slice(2);
	const idxPath = (() => {
		const i = argv.indexOf('--index');
		return i >= 0 ? argv[i + 1] : null;
	})();
	if (!idxPath) {
		console.error('usage: node tools/funtriage.js --index refindex.json [--top N] [--fn ADDR] [--json]');
		return 1;
	}
	let index;
	try {
		index = JSON.parse(fs.readFileSync(idxPath, 'utf8'));
	} catch (e) {
		console.error('cannot read ' + idxPath + ': ' + e.message);
		return 1;
	}
	const fns = index.functions || {};
	if (Object.keys(fns).length === 0) {
		console.error('the index has no functions: refusing to rank nothing');
		return 1;
	}

	const exePath = path.join(ROOT, index.binary || 'ENCHANT.EXP');
	const exe = fs.existsSync(exePath) ? fs.readFileSync(exePath) : Buffer.alloc(0);
	const ahByStub = exe.length ? thunks(exe) : new Map();
	const ahToHandler = loadTbiosMap();
	const globals = namedGlobals();

	const rows = [];
	for (const [fnHex, refs] of Object.entries(fns)) {
		const fn = parseInt(fnHex, 16);
		const calls = [];
		const named = [];
		let text = 0;
		const addrs = new Set();
		for (const r of refs) {
			// a call into a stub is the interesting instruction, and the index records it as an
			// immediate at the call site
			if (ahByStub.has(r.disp)) {
				const ah = ahByStub.get(r.disp);
				if (!calls.includes(ah)) calls.push(ah);
			}
			if (globals.has(r.disp) && !named.some((n) => n.addr === r.disp)) {
				named.push({ addr: r.disp, g: globals.get(r.disp) });
			}
			if (r.disp >= 0x1000 && r.disp < exe.length && !addrs.has(r.disp)) {
				addrs.add(r.disp);
				if (isTextLike(exe, r.disp)) text++;
			}
		}
		// score: a function is easier to read the more independently-known things it touches.
		// Calls weigh most because each is a named system function; a named global next; strings
		// least, because "some text" says the function handles a message without saying which.
		const score = calls.length * 10 + named.length * 4 + Math.min(text, 10);
		rows.push({ fn, calls, named, text, addrs: addrs.size, score });
	}
	rows.sort((a, b) => b.score - a.score || a.fn - b.fn);

	const only = argv.indexOf('--fn') >= 0 ? parseInt(argv[argv.indexOf('--fn') + 1], 16) : null;
	if (only !== null) {
		const r = rows.find((x) => x.fn === only);
		if (!r) {
			console.log('function 0x' + only.toString(16) + ' is not in the index');
			return 0;
		}
		report(r, ahToHandler);
		return 0;
	}

	if (argv.includes('--json')) {
		console.log(JSON.stringify(rows.map((r) => ({
			fn: '0x' + r.fn.toString(16),
			score: r.score,
			tbios: r.calls.map((a) => '0x' + a.toString(16)),
			namedGlobals: r.named.map((n) => '0x' + n.addr.toString(16)),
			textRefs: r.text,
			dataAddrs: r.addrs,
		})), null, 1));
		return 0;
	}

	const topIdx = argv.indexOf('--top');
	const top = topIdx >= 0 ? Number(argv[topIdx + 1]) : 25;
	console.log('functions ranked by how much is already known about them');
	console.log('(score = TBIOS calls x10 + named globals x4 + text refs, capped at 10)\n');
	console.log('function    score  tbios                          named globals   text  data');
	for (const r of rows.slice(0, top)) {
		const ahs = r.calls.map((a) => '0x' + a.toString(16)).join(' ');
		const gl = r.named.map((n) => '0x' + n.addr.toString(16)).join(' ');
		console.log('0x' + r.fn.toString(16).padEnd(8) + String(r.score).padStart(5) + '  ' +
			ahs.padEnd(30) + ' ' + gl.padEnd(15) + ' ' + String(r.text).padStart(4) + '  ' + r.addrs);
	}
	const withCalls = rows.filter((r) => r.calls.length).length;
	const withNamed = rows.filter((r) => r.named.length).length;
	console.log('\n%d functions; %d call at least one TBIOS stub, %d touch a named global, %d reference text',
		rows.length, withCalls, withNamed, rows.filter((r) => r.text).length);
	return 0;
}

function report(r, ahToHandler) {
	console.log('function 0x' + r.fn.toString(16));
	console.log('  tbios calls:    ' + (r.calls.length
		? r.calls.map((a) => 'AH 0x' + a.toString(16) +
			(ahToHandler && ahToHandler.has(a) ? ' -> TBIOS.BIN 0x' + ahToHandler.get(a).toString(16) : '')).join(', ')
		: 'none'));
	console.log('  named globals:  ' + (r.named.length
		? r.named.map((n) => '0x' + n.addr.toString(16) + ' (' + n.g.kind + ')').join(', ')
		: 'none'));
	console.log('  text refs:      ' + r.text);
	console.log('  data addresses: ' + r.addrs);
}

if (require.main === module) process.exit(main());

module.exports = { thunks, isTextLike, namedGlobals };
