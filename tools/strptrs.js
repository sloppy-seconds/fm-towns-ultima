#!/usr/bin/env node
// tools/strptrs.js - find the pointer table that references the asset-path strings.
//
// tools/coderefs.js found only 5 of 71 asset paths referenced as immediates, and
// concluded the loader builds or indexes them at runtime. That conclusion was never
// tested. The obvious alternative is a table of pointers in the data segment, which
// is how a C array of strings is laid out.
//
// With IMAGE_BASE == 0 an offset in the stripped image equals a virtual address, so
// a string at 0x0e034b appears in a pointer table as the dword 0x000e034b.
//
// Two traps this tool has already fallen into once:
//   1. A dword matching a string address by coincidence. 0x1400 is both the address
//      of Q:\SOUND\BOMB4.SND and a very common byte pattern, so it produced 54
//      "hits" that were noise. Only pointers whose target is reached rarely are
//      trustworthy, and a pointer must also be inside a run to count.
//   2. Reporting a pointer site without checking the run around it. A lone match in
//      the middle of random data is not a table entry.
//
// Usage:
//   node tools/strptrs.js
//   node tools/strptrs.js --all     include every string, not just asset paths

'use strict';

const fs = require('fs');
const path = require('path');
const { Disc, defaultDisc } = require('./cd.js');

const ROOT = path.join(__dirname, '..');
const IMAGE_BASE = 0;

// Same loader as tools/coderefs.js: the 0x20-byte MP header is stripped, so an
// offset in the returned buffer equals a virtual address under base 0.
function loadImage() {
	const local = path.join(ROOT, 'ENCHANT.EXP');
	if (fs.existsSync(local)) {
		return { buf: fs.readFileSync(local).slice(0x20), source: 'local ENCHANT.EXP' };
	}

	const disc = defaultDisc(ROOT);
	if (!disc) throw new Error('no ENCHANT.EXP and no disc .img found');
	const d = new Disc(disc);
	const cat = d.catalogue();
	const name = [...cat.keys()].find((k) => /ENCHANT\.EXP$/i.test(k));
	if (!name) throw new Error('ENCHANT.EXP not found on the disc');
	const buf = d.get(cat, name).slice(0x20);
	d.close();
	return { buf, source: 'disc' };
}

function findStrings(buf, minLen = 8) {
	const out = [];
	let i = 0x20;
	while (i < buf.length) {
		let j = i;
		while (j < buf.length && buf[j] >= 0x20 && buf[j] < 0x7f) j++;
		if (j - i >= minLen) {
			out.push({ off: i, len: j - i, text: buf.toString('latin1', i, j) });
			i = j;
		} else {
			i = j + 1;
		}
	}
	return out;
}

function main() {
	const all = process.argv.includes('--all');
	const { buf, source } = loadImage();
	console.log(`image: ${source} (${buf.length} bytes), base ${IMAGE_BASE}`);

	const strings = findStrings(buf, 8);
	const assets = strings.filter((s) => /\.(SND|TIF|EUP|FMB|UT2|MP2)$/i.test(s.text));
	const targets = all ? strings : assets;
	console.log(`strings >=8 chars: ${strings.length}, asset paths: ${assets.length}`);

	const byAddr = new Map();
	for (const s of targets) byAddr.set(s.off + IMAGE_BASE, s);

	// Every byte offset whose dword lands on a string start.
	const sites = new Map();
	for (let i = 0; i + 4 <= buf.length; i++) {
		const hit = byAddr.get(buf.readUInt32LE(i));
		if (hit) sites.set(i, hit);
	}

	// A pointer is only believable if the same address is not hit by thousands of
	// chance matches elsewhere. 0x1400 collides constantly because it is a common
	// value. Keep addresses whose match sites form a run, which is what a real
	// table looks like.
	const byTarget = new Map();
	for (const [site, s] of sites) {
		if (!byTarget.has(s.off)) byTarget.set(s.off, []);
		byTarget.get(s.off).push(site);
	}

	console.log(`\ndistinct strings pointed at: ${byTarget.size}`);
	console.log('\nper-string pointer sites:');
	for (const [off, list] of [...byTarget.entries()].sort(
		(a, b) => b[1].length - a[1].length
	)) {
		const s = targets.find((t) => t.off === off);
		console.log(
			`  ${String(list.length).padStart(3)}x  0x${off.toString(16)}  ${s.text}`
		);
		if (list.length <= 6) {
			console.log(
				`         sites: ${list.map((p) => '0x' + p.toString(16)).join(' ')}`
			);
		}
	}

	// Look for a real table: a contiguous block where several consecutive dwords
	// each point at a DIFFERENT string. That is a string array, and it is the thing
	// the code indexes.
	console.log('\nsearching for runs of pointers to distinct strings:');
	let best = null;
	const offs = [...sites.keys()].sort((a, b) => a - b);
	let i = 0;
	while (i < offs.length) {
		let j = i;
		const seen = new Set();
		while (
			j + 4 <= offs.length &&
			(j === i || offs[j] === offs[j - 1] + 4)
		) {
			seen.add(sites.get(offs[j]).off);
			j++;
		}
		const n = j - i;
		if (n >= 3 && seen.size >= 3) {
			if (!best || n > best.n) best = { start: offs[i], n, seen: [...seen] };
			console.log(
				`  0x${offs[i].toString(16)}  ${n} pointers, ${seen.size} distinct strings`
			);
			for (const o of [...seen].slice(0, 8)) {
				const s = targets.find((t) => t.off === o);
				console.log(`      0x${o.toString(16)}  ${s.text}`);
			}
		}
		i = Math.max(j, i + 1);
	}
	if (!best) {
		console.log('  none found');
	}
}

if (require.main === module) main();
