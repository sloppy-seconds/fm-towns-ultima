#!/usr/bin/env node
// tools/randgroups.js - group randMod call sites by enclosing function.
//
// A11 step 3 needs this: 85 sites is too many to read individually, but they cluster
// into a much smaller number of functions.
//
// TWO ADDRESS-SPACE BUGS were made writing this the first time, both off-by-0x20:
//
//   1. The image is the file with the 0x20 MP header stripped, so an offset in `img`
//      IS a virtual address under base 0. A scan that indexes `img[a - 0x20]` when `a`
//      is already a virtual address reads 0x20 bytes early, finds no prologue, and
//      reports the site as ungrouped or groups it under a bogus entry.
//
//   2. Mixing the two in one expression: passing a file offset into a function that
//      indexes `img` directly.
//
// The rule this tool follows: every address is a virtual address, and every access to
// `img` is `img[addr]`, never `img[addr - 0x20]`.
//
// Usage:
//   node tools/randgroups.js              table of functions and their site counts
//   node tools/randgroups.js --json       machine-readable

'use strict';

const fs = require('fs');
const path = require('path');
const { Disc, defaultDisc } = require('./cd.js');

const ROOT = path.join(__dirname, '..');
const HEADER = 0x20;
const RANDMOD = 0xe1c5c;
const SEARCH_BACK = 0x1000;

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

// Every virtual address whose CALL rel32 target is randMod.
function randModSites(img) {
	const out = [];
	for (let i = 0; i + 5 <= img.length; i++) {
		if (img[i] !== 0xe8) continue;
		const target = (i + 5 + img.readInt32LE(i + 1)) >>> 0;
		if (target === RANDMOD) out.push(i);
	}
	return out;
}

// The nearest enclosing `push ebp / mov ebp,esp` at or before `addr`.
// Indexes img by virtual address directly. The prologue bytes are at addr itself.
function enclosingEntry(img, addr) {
	for (let a = addr; a > addr - SEARCH_BACK && a >= 0; a--) {
		if (img[a] === 0x55 && img[a + 1] === 0x8b && img[a + 2] === 0xec) return a;
	}
	return null;
}

function main() {
	const img = loadImage();
	const sites = randModSites(img);

	const groups = new Map();
	let ungrouped = 0;
	for (const s of sites) {
		const e = enclosingEntry(img, s);
		if (e === null) {
			ungrouped++;
			continue;
		}
		if (!groups.has(e)) groups.set(e, []);
		groups.get(e).push(s);
	}

	const rows = [...groups.entries()].sort((a, b) => b[1].length - a[1].length);

	if (process.argv.includes('--json')) {
		console.log(
			JSON.stringify(
				rows.map(([entry, list]) => ({ entry, count: list.length, sites: list })),
				null,
				1
			)
		);
		return;
	}

	console.log(`randMod call sites: ${sites.length}`);
	console.log(`distinct enclosing functions: ${groups.size}`);
	console.log(`ungrouped (no prologue within 0x${SEARCH_BACK.toString(16)}): ${ungrouped}\n`);
	console.log('entry       sites');
	console.log('-'.repeat(30));
	for (const [entry, list] of rows) {
		console.log(
			`0x${entry.toString(16).padEnd(9)} ${String(list.length).padStart(3)}`
		);
	}
}

if (require.main === module) main();
