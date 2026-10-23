#!/usr/bin/env node
// tools/msgcallers.js - find where the text renderer is called from, and what it is given.
//
// tools/funcs.js established that 0xe6e90 is the string drawer: argument 1 is an index
// into the 57-byte text-window array, argument 2 is a pointer to the string. The pointer
// is supplied by the caller.
//
// That makes every call site a place where a message can be located. Walk back from each
// CALL to the two pushes that set up its arguments and classify where the pointer comes
// from:
//
//   push imm32         -> a literal string address
//   push [imm32]       -> a pointer loaded from a table
//   push [ebp+n]       -> a caller-supplied argument (not resolvable here)
//   push reg           -> computed (not resolvable here)
//
// The literal and table cases are the useful ones. This is the tool that turns "the text
// is somewhere in RAM" into a list of addresses.
//
// Usage:
//   node tools/msgcallers.js                summary by kind
//   node tools/msgcallers.js --literals     list every literal string found
//   node tools/msgcallers.js --target 0xe5834

'use strict';

const fs = require('fs');
const path = require('path');
const { Disc, defaultDisc } = require('./cd.js');

const ROOT = path.join(__dirname, '..');
const HEADER = 0x20;
const RENDER = 0xe6e90;

function loadImage() {
	const local = path.join(ROOT, 'ENCHANT.EXP');
	if (fs.existsSync(local)) return fs.readFileSync(local).slice(HEADER);
	const disc = defaultDisc(ROOT);
	if (!disc) throw new Error('no ENCHANT.EXP and no disc .img found');
	const d = new Disc(disc);
	const cat = d.catalogue();
	const name = [...cat.keys()].find((k) => /ENCHANT\.EXP$/i.test(k));
	if (!name) throw new Error('ENCHANT.EXP not found on the disc');
	const buf = d.get(cat, name).slice(HEADER);
	d.close();
	return buf;
}

// Read a printable or Shift-JIS string at addr, up to a NUL.
function stringAt(buf, addr, max = 200) {
	if (addr < 0x20 || addr >= buf.length) return null;
	let end = addr;
	while (end < buf.length && end - addr < max && buf[end] !== 0) end++;
	if (end === addr) return null;
	const raw = buf.subarray(addr, end);
	// Accept if it decodes as Shift-JIS with no replacement characters.
	try {
		const text = raw.toString('binary');
		const dec = Buffer.from(raw).toString('utf8');
		// Cheap validity test: Shift-JIS lead bytes should not appear as stray bytes
		// in ASCII text. Just check the printable ratio.
		let printable = 0;
		for (const b of raw) if (b >= 0x20 || b >= 0x81) printable++;
		if (printable / raw.length < 0.9) return null;
		return { addr, len: raw.length, raw, latin: text, utf8: dec };
	} catch {
		return null;
	}
}

function main() {
	const buf = loadImage();
	const args = process.argv.slice(2);
	const targetArg = args.indexOf('--target');
	const target = targetArg >= 0 ? Number(args[targetArg + 1]) : RENDER;

	// Every call to the target.
	const sites = [];
	for (let i = 0; i < buf.length - 5; i++) {
		if (buf[i] !== 0xe8) continue;
		if (((i + 5 + buf.readInt32LE(i + 1)) >>> 0) !== target) continue;
		sites.push(i);
	}
	console.log(`image: ${buf.length} bytes`);
	console.log(`calls to 0x${target.toString(16)}: ${sites.length}\n`);

	// For each call site, look back for the two pushes. x86 push encodings used here:
	//   68 imm32        push imm32
	//   ff 35 imm32     push dword [imm32]
	//   ff 75 nn        push dword [ebp+disp8]
	//   50..57          push reg
	//   6a nn           push imm8
	const kinds = new Map();
	const literals = [];
	const tables = [];

	for (const site of sites) {
		// Walk back up to 40 bytes collecting pushes, newest first.
		const pushes = [];
		for (let p = site - 1; p > site - 48 && pushes.length < 2; p--) {
			const b = buf[p];
			if (b === 0x68 && p + 5 <= site) {
				pushes.push({ kind: 'imm', value: buf.readUInt32LE(p + 1), at: p });
				p -= 0; // keep scanning earlier bytes for the other push
				continue;
			}
			if (b === 0xff && buf[p + 1] === 0x35) {
				pushes.push({ kind: 'mem', value: buf.readUInt32LE(p + 2), at: p });
				continue;
			}
			if (b === 0xff && buf[p + 1] === 0x75) {
				pushes.push({ kind: 'arg', value: buf[p + 2], at: p });
				continue;
			}
			if (b >= 0x50 && b <= 0x57) {
				pushes.push({ kind: 'reg', value: b - 0x50, at: p });
				continue;
			}
			if (b === 0x6a) {
				pushes.push({ kind: 'imm8', value: buf[p + 1], at: p });
				continue;
			}
		}

		// Pushes are collected walking backwards, so pushes[0] is the LAST push before
		// the call, which is the FIRST argument. Argument 2 is pushes[1].
		// Getting this the wrong way round made every call report its window index
		// as a string pointer, which showed up as 216 unlikely `imm8` hits.
		const arg2 = pushes[1] ?? pushes[0];
		if (!arg2) {
			kinds.set('no-push-found', (kinds.get('no-push-found') || 0) + 1);
			continue;
		}
		if (arg2.kind === 'imm') {
			const s = stringAt(buf, arg2.value);
			if (s) {
				literals.push({ site, addr: arg2.value, ...s });
				kinds.set('literal', (kinds.get('literal') || 0) + 1);
			} else {
				kinds.set('imm-not-string', (kinds.get('imm-not-string') || 0) + 1);
			}
			continue;
		}
		if (arg2.kind === 'mem') {
			const ptr = buf.readUInt32LE(arg2.value);
			const s = stringAt(buf, ptr);
			if (s) {
				tables.push({ site, slot: arg2.value, ptr, ...s });
				kinds.set('table', (kinds.get('table') || 0) + 1);
			} else {
				kinds.set('mem-not-string', (kinds.get('mem-not-string') || 0) + 1);
			}
			continue;
		}
		kinds.set(arg2.kind, (kinds.get(arg2.kind) || 0) + 1);
	}

	console.log('argument 2 by kind:');
	for (const [k, n] of [...kinds.entries()].sort((a, b) => b[1] - a[1])) {
		console.log(`  ${k.padEnd(18)} ${n}`);
	}

	if (args.includes('--literals') || args.length === 0) {
		console.log(`\nliteral strings: ${literals.length}`);
		const lim = args.includes('--all') ? literals.length : 40;
		for (const s of literals.slice(0, lim)) {
			console.log(
				`  call 0x${s.site.toString(16)}  string 0x${s.addr.toString(16)}  ${JSON.stringify(s.latin)}`
			);
		}
	}
	if (args.includes('--tables')) {
		console.log(`\ntable-supplied strings: ${tables.length}`);
		for (const s of tables.slice(0, 40)) {
			console.log(
				`  call 0x${s.site.toString(16)}  slot 0x${s.slot.toString(16)} -> 0x${s.ptr.toString(16)}  ${JSON.stringify(s.latin)}`
			);
		}
	}
}

if (require.main === module) main();
