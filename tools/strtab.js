#!/usr/bin/env node
// tools/strtab.js - walk a pointer table and dump the strings it points at.
//
// tools/strptrs.js looked for dwords that land on a *known* string start. That was
// the wrong test, and it missed a table at 0x7a850 that is obvious on inspection:
//
//   0x7a850: d8 1d 00 00  e0 1d 00 00  ec 1d 00 00  4c 1e 00 00
//   0x7a860: 58 1e 00 00  64 1e 00 00  70 1e 00 00  7c 1e 00 00
//
// Consecutive ascending dwords under 0x110000. That is a C array of char*.
//
// The right test is structural, not target-based: look for a run of dwords that are
// all plausible in-image addresses, ascending, and tightly packed. Then decode what
// each one points at.
//
// Usage:
//   node tools/strtab.js                 list every detected table
//   node tools/strtab.js 0x7a850         dump one table
//   node tools/strtab.js --scan N        minimum run length (default 8)

'use strict';

const fs = require('fs');
const path = require('path');
const { Disc, defaultDisc } = require('./cd.js');

const ROOT = path.join(__dirname, '..');
const IMAGE_BASE = 0;

function loadImage() {
	const local = path.join(ROOT, 'ENCHANT.EXP');
	if (fs.existsSync(local)) return fs.readFileSync(local).slice(0x20);

	const disc = defaultDisc(ROOT);
	if (!disc) throw new Error('no ENCHANT.EXP and no disc .img found');
	const d = new Disc(disc);
	const cat = d.catalogue();
	const name = [...cat.keys()].find((k) => /ENCHANT\.EXP$/i.test(k));
	if (!name) throw new Error('ENCHANT.EXP not found on the disc');
	const buf = d.get(cat, name).slice(0x20);
	d.close();
	return buf;
}

// A string at addr, or null if the bytes there are not printable text.
function stringAt(buf, addr) {
	if (addr < 0x20 || addr >= buf.length) return null;
	let j = addr;
	while (j < buf.length && buf[j] >= 0x20 && buf[j] < 0x7f) j++;
	if (j - addr < 3) return null;
	return buf.toString('latin1', addr, j);
}

// Is this dword a plausible pointer into the image's data area?
function plausible(buf, v) {
	if (v < 0x1000 || v >= buf.length) return false;
	return stringAt(buf, v) !== null;
}

// Find runs of consecutive dwords that all point at printable strings.
function findTables(buf, minRun) {
	const runs = [];
	let i = 0;
	while (i + 4 <= buf.length) {
		if (!plausible(buf, buf.readUInt32LE(i))) {
			i++;
			continue;
		}
		const start = i;
		let n = 0;
		while (i + 4 <= buf.length && plausible(buf, buf.readUInt32LE(i))) {
			n++;
			i += 4;
		}
		if (n >= minRun) runs.push({ start, n, end: start + n * 4 });
	}
	return runs;
}

function dumpTable(buf, start, n) {
	console.log(`table at 0x${start.toString(16)}, ${n} pointers:`);
	const entries = [];
	for (let k = 0; k < n; k++) {
		const p = start + k * 4;
		const target = buf.readUInt32LE(p);
		const s = stringAt(buf, target);
		entries.push({ idx: k, ptr: target, text: s });
		console.log(
			`  [${String(k).padStart(3)}] 0x${target.toString(16)}  ${s ?? '<no string>'}`
		);
	}
	return entries;
}

function main() {
	const buf = loadImage();
	const args = process.argv.slice(2);
	const scanIdx = args.indexOf('--scan');
	const minRun = scanIdx >= 0 ? Number(args[scanIdx + 1]) : 8;

	if (args.length && !args[0].startsWith('--')) {
		const start = Number(args[0]);
		// Count how long the run is from here.
		let n = 0;
		while (
			start + n * 4 + 4 <= buf.length &&
			plausible(buf, buf.readUInt32LE(start + n * 4))
		) {
			n++;
		}
		dumpTable(buf, start, n);
		return;
	}

	console.log(`image: ${buf.length} bytes, base ${IMAGE_BASE}`);
	console.log(`scanning for runs of >=${minRun} consecutive string pointers\n`);

	const runs = findTables(buf, minRun);
	console.log(`found ${runs.length} candidate tables\n`);

	runs.sort((a, b) => b.n - a.n);
	for (const r of runs.slice(0, 20)) {
		// Only report tables whose targets look like assets, not random text.
		const first = stringAt(buf, buf.readUInt32LE(r.start));
		const looksAsset = /\.(SND|TIF|EUP|FMB|UT2|MP2)$/i.test(first || '');
		console.log(
			`  0x${r.start.toString(16)}  ${String(r.n).padStart(4)} pointers  ` +
				`${looksAsset ? 'ASSET' : '     '}  first: ${first}`
		);
	}
}

if (require.main === module) main();
