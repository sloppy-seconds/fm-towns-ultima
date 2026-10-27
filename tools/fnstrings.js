#!/usr/bin/env node
// tools/fnstrings.js - print the strings a function references, to name it.
//
// WHY. Naming routines is the bottleneck for a reimplementation skeleton, and the fastest signal is
// the text a routine prints. 0xf6ebc was identified as the location dispatcher in two minutes
// because it references ト・ボニフィス, ピタ－・ビレッジ, スタ－ and ・キャンプ, which are Port
// Boniface, Pita Village, Star and Camp.
//
// METHOD. Within a function body, scan for `push imm32` (0x68) and `mov r32,imm32`
// (0xb8..0xbf) whose operand points at printable data inside the image. The bound is the next
// function start from the call graph, so a scan cannot run into a neighbour and attribute its
// strings to the wrong routine.
//
// A false positive is possible: any immediate that happens to point at text. The output prints the
// offset of the reference so a suspicious hit can be checked against the boundary oracle
// (`tools/sweep.js --check`), and it prints the raw bytes of short hits so garbage is visible.
//
// Usage:
//   node tools/fnstrings.js 0xf6ebc            strings in one function
//   node tools/fnstrings.js 0xf6ebc 0xebefc    several
//   node tools/fnstrings.js --top 20           the 20 routines with the most strings
//   node tools/fnstrings.js --scan 0xADDR      one function, with the byte of every hit shown

'use strict';

const fs = require('fs');
const path = require('path');
const { Disc, defaultDisc } = require('./cd.js');

const ROOT = path.join(__dirname, '..');
const HEADER = 0x20;

function loadImage() {
	// DO NOT SLICE THE HEADER. This function used to return `fs.readFileSync(...).slice(HEADER)`, which
	// made every address it reported wrong by 0x20: it computed call targets in stripped coordinates
	// but printed them as if they were raw, so `--top` named 0xebb70 as the routine holding the ROSTER
	// strings when the real function start is 0xebb90, and 0xe5d90 (display_init, a function this
	// project reads by hand) was reported as "not a known function start".
	//
	// This is the two-frames bug docs/two-frames-of-reference.md documents, still live here. For an MP
	// the image is the WHOLE FILE and file offset == virtual address, so there is nothing to strip.
	// A caller that needs a different frame must say so, rather than have one silently applied.
	const local = path.join(ROOT, 'ENCHANT.EXP');
	if (fs.existsSync(local)) return fs.readFileSync(local);
	const disc = defaultDisc(ROOT);
	if (!disc) throw new Error('no ENCHANT.EXP and no disc image found');
	const d = new Disc(disc);
	const cat = d.catalogue();
	const name = [...cat.keys()].find((k) => /ENCHANT\.EXP$/i.test(k));
	if (!name) throw new Error('ENCHANT.EXP not on the disc');
	const buf = d.get(cat, name).slice(HEADER);
	d.close();
	return buf;
}

// Reuse the call graph's own notion of a function start so this tool and callgraph.js agree.
function starts(img) {
	const out = new Set();
	for (let i = 0; i + 5 <= img.length; i++) {
		if (img[i] !== 0xe8) continue;
		const t = i + 5 + img.readInt32LE(i + 1);
		if (t >= 0 && t < img.length) out.add(t);
	}
	return [...out].sort((a, b) => a - b);
}

// Printable means: no NUL, at least one byte >= 0x20, and no control bytes other than newline.
function printableAt(img, v, max = 96) {
	if (v < 0x100 || v >= img.length - 4) return null;
	let e = v;
	while (e < img.length && img[e] !== 0 && e - v < max) {
		const b = img[e];
		if (b < 0x20 && b !== 0x0a && b !== 0x0d) return null;
		e++;
	}
	const len = e - v;
	if (len < 4) return null;
	// A reference can point into the MIDDLE of a string, not only at its start.
	// `push 0x2950` gave "UAL=%d\n" when the real string began at 0x294c as
	// "LINGUAL=%d\n". A truncated left edge is actively misleading when naming a
	// routine, because "UAL=" reads as a different field from "LINGUAL=". So walk
	// back to the preceding NUL and report the string the reference is inside of.
	//
	// Measured cost of not doing this: 0x2950, 0x2990 and 0x2a18 all looked like
	// separate truncated fields when two of them were whole strings already.
	let s = v;
	while (s > 0 && img[s - 1] !== 0 && v - s < max) s--;
	if (s !== v) {
		// Only extend backwards if the whole run still looks like text.
		const whole = img.subarray(s, v);
		let bad = false;
		for (const b of whole) {
			if (b < 0x20 && b !== 0x0a && b !== 0x0d) { bad = true; break; }
		}
		if (!bad) return img.subarray(s, e);
	}
	return img.subarray(v, e);
}

function render(b) {
	// 0xEB IS AN ASCII ESCAPE, and this used to report every run as a token count. `EB xx`
	// encodes the character `xx + 1`, and all other bytes pass through, so the transform is
	// applied first and the result decoded as Shift-JIS. docs/text-encoding.md records how it
	// was established: the character-sheet labels appear as Shift-JIS at 0x153d and as EB text
	// at 0x1528, and the second decodes to STRENGTH which the first says in Japanese.
	let hasEb = false;
	for (const x of b) if (x === 0xeb) { hasEb = true; break; }
	let raw = b;
	if (hasEb) {
		const out = [];
		for (let i = 0; i < b.length; i++) {
			if (b[i] === 0xeb && i + 1 < b.length) {
				out.push((b[i + 1] + 1) & 0xff);
				i++;
			} else {
				out.push(b[i]);
			}
		}
		raw = Buffer.from(out);
	}
	try {
		return new TextDecoder('shift_jis', { fatal: true }).decode(raw);
	} catch {
		// A string can mix the two forms and still not decode; say so rather than pretending.
		if (hasEb) return '(undecodable after 0xEB expansion) ' + raw.toString('latin1').replace(/[^\x20-\x7e]/g, '.');
		return b.toString('latin1').replace(/[^\x20-\x7e]/g, '.');
	}
}

function refs(img, lo, hi, verbose) {
	const found = [];
	for (let i = lo; i + 5 <= hi && i + 5 <= img.length; i++) {
		const op = img[i];
		if (op !== 0x68 && !(op >= 0xb8 && op <= 0xbf)) continue;
		const v = img.readUInt32LE(i + 1);
		const b = printableAt(img, v);
		if (!b) continue;
		found.push({ at: i, op, target: v, text: render(b), raw: b });
	}
	return found;
}

function one(img, st, addr, verbose) {
	const idx = st.indexOf(addr);
	if (idx < 0) {
		console.log(`0x${addr.toString(16)} is not a known function start.`);
		return 0;
	}
	const hi = idx + 1 < st.length ? st[idx + 1] : img.length;

	// Walk forward from the start until the first ret in the first few hundred bytes, so a
	// function that is followed by padding does not inherit the next one's strings.
	const f = refs(img, addr, hi, verbose);
	console.log(`0x${addr.toString(16)}..0x${hi.toString(16)}  ${f.length} string refs`);
	for (const r of f) {
		const op = r.op === 0x68 ? 'push' : 'mov ';
		console.log(`  0x${r.at.toString(16)}  ${op} 0x${r.target.toString(16)}  ${JSON.stringify(r.text)}`);
		if (verbose) console.log(`      raw: ${r.raw.toString('hex')}`);
	}
	return f.length;
}

function main() {
	const args = process.argv.slice(2);
	const img = loadImage();
	const st = starts(img);
	const addrs = args.filter((a) => /^0x[0-9a-f]+$/i.test(a)).map((a) => parseInt(a, 16));

	if (args.includes('--top')) {
		const limit = parseInt(args[args.indexOf('--top') + 1], 10) || 20;
		// Cap the scan per function so a large body does not take forever.
		const scored = st.map((s, k) => {
			const hi = Math.min(k + 1 < st.length ? st[k + 1] : img.length, s + 0x4000);
			return { s, n: refs(img, s, hi).length, hi };
		});
		scored.sort((a, b) => b.n - a.n);
		console.log('routines with the most string references (best naming candidates):\n');
		for (const { s, n: refCount, hi } of scored.slice(0, limit)) {
			if (refCount === 0) continue;
			const f = refs(img, s, hi);
			const sample = f.slice(0, 3).map((r) => JSON.stringify(r.text)).join(', ');
			console.log(`  0x${s.toString(16).padEnd(9)} ${String(refCount).padStart(3)} refs   ${sample}`);
		}
		return;
	}

	if (addrs.length === 0) {
		console.log('give at least one function start address, or --top N');
		process.exit(1);
	}
	const verbose = args.includes('--scan');
	for (const a of addrs) {
		one(img, st, a, verbose);
		console.log('');
	}
}

if (require.main === module) main();
