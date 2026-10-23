#!/usr/bin/env node
// tools/extractstrings.js - extract every string reachable from a renderer call site.
//
// The plan's A3 established that 123 calls to the text renderer pass a literal string
// address. Those addresses are in the image and the strings are there.
//
// The strings are stored in THREE encodings in the same pool:
//   - plain ASCII
//   - Shift-JIS (Japanese), which is what the renderer parses
//   - 0xEB glyph runs, which are NOT understood (see font-encoding.md)
//
// This tool extracts them and labels which encoding each one is, without pretending to
// decode the EB runs.
//
// Output goes to extracted/ which is gitignored, because the strings are the game's
// copyrighted content. Only the tool is committed.

'use strict';

const fs = require('fs');
const path = require('path');
const { execFileSync } = require('child_process');

const ROOT = path.join(__dirname, '..');
const IMG = path.join(ROOT, 'ENCHANT.EXP');
const OUT = path.join(ROOT, 'extracted', 'strings.json');

const buf = fs.readFileSync(IMG).slice(0x20);
const RENDER = 0xe6e90;

// Read a string at addr. Crucially, walk BACK to the start of the containing string
// first: many call sites point into the middle of a longer string (a suffix, or a
// single character of a message built by concatenation). Decoding from a mid-string
// offset produces mojibake that looks like a decoder bug and is not one.
function readStringAt(addr, max = 400) {
	if (addr < 0x20 || addr >= buf.length) return null;

	// A genuine string start is preceded by a NUL, or by the end of the previous
	// string. Walk back at most 200 bytes to find it.
	let start = addr;
	let back = 0;
	while (start > 0x20 && buf[start - 1] !== 0 && back < 200) {
		start--;
		back++;
	}

	let end = start;
	while (end < buf.length && end - start < max && buf[end] !== 0) end++;
	if (end === start) return null;
	return { raw: buf.subarray(start, end), start, offsetInString: addr - start };
}

// Classify a raw string. The three cases are distinguishable:
//   eb-run   : every other byte is 0xEB from the start, or 0xEB appears paired
//   sjis     : contains bytes >= 0x81 in Shift-JIS lead/trail positions
//   ascii    : all printable ASCII
function classify(raw) {
	let ebPairs = 0;
	for (let i = 0; i + 1 < raw.length; i += 2) {
		if (raw[i] === 0xeb) ebPairs++;
		else break;
	}
	const ebFraction = (ebPairs * 2) / raw.length;

	const high = [...raw].filter((b) => b >= 0x81).length;
	const printableAscii = [...raw].filter((b) => b >= 0x20 && b < 0x7f).length;

	if (ebFraction >= 0.5) return 'eb-run';
	if (high > 0 && printableAscii / raw.length < 0.9) return 'sjis';
	if (printableAscii === raw.length) return 'ascii';
	return 'mixed';
}

function decodeSjis(raw) {
	// Node's TextDecoder handles shift_jis natively.
	try {
		return new TextDecoder('shift_jis', { fatal: false }).decode(raw);
	} catch {
		return null;
	}
}

function ebGlyphs(raw) {
	const g = [];
	let i = 0;
	while (i + 1 < raw.length && raw[i] === 0xeb) {
		g.push(raw[i + 1]);
		i += 2;
	}
	return { glyphs: g, leftover: raw.subarray(i) };
}

// Collect call sites and their literal argument, reusing the logic in msgcallers.js.
function collectSites() {
	const sites = [];
	for (let i = 0; i < buf.length - 5; i++) {
		if (buf[i] !== 0xe8) continue;
		if (((i + 5 + buf.readInt32LE(i + 1)) >>> 0) !== RENDER) continue;

		// Walk back for two pushes. pushes[1] is argument 2.
		const pushes = [];
		for (let p = i - 1; p > i - 48 && pushes.length < 2 && p >= 0; p--) {
			if (buf[p] === 0x68) {
				pushes.push({ kind: 'imm', value: buf.readUInt32LE(p + 1) });
				continue;
			}
			if (buf[p] === 0xff && buf[p + 1] === 0x35) {
				pushes.push({ kind: 'mem', value: buf.readUInt32LE(p + 2) });
				continue;
			}
			if (buf[p] === 0xff && buf[p + 1] === 0x75) {
				pushes.push({ kind: 'arg', value: buf[p + 2] });
				continue;
			}
			if (buf[p] >= 0x50 && buf[p] <= 0x57) {
				pushes.push({ kind: 'reg', value: buf[p] - 0x50 });
				continue;
			}
			if (buf[p] === 0x6a) {
				pushes.push({ kind: 'imm8', value: buf[p + 1] });
				continue;
			}
		}
		const arg2 = pushes[1] ?? pushes[0];
		if (arg2 && arg2.kind === 'imm') sites.push({ site: i, addr: arg2.value });
	}
	return sites;
}

const sites = collectSites();
console.log(`literal string call sites: ${sites.length}`);

const out = [];
const counts = {};
for (const { site, addr } of sites) {
	const got = readStringAt(addr);
	if (!got) continue;
	const raw = got.raw;
	const kind = classify(raw);
	counts[kind] = (counts[kind] || 0) + 1;

	const entry = {
		callSite: '0x' + site.toString(16),
		address: '0x' + addr.toString(16),
		stringStart: '0x' + got.start.toString(16),
		offsetInString: got.offsetInString,
		encoding: kind,
		bytes: raw.length,
	};

	if (kind === 'ascii') {
		entry.text = raw.toString('latin1');
	} else if (kind === 'sjis') {
		entry.text = decodeSjis(raw);
	} else if (kind === 'eb-run') {
		const { glyphs, leftover } = ebGlyphs(raw);
		entry.glyphs = glyphs;
		entry.leftoverHex = leftover.toString('hex');
		entry.note = 'glyph indices not decoded, see docs/font-encoding.md';
	} else {
		entry.hex = raw.toString('hex');
		entry.sjisAttempt = decodeSjis(raw);
	}
	out.push(entry);
}

console.log('\nby encoding:');
for (const [k, n] of Object.entries(counts).sort((a, b) => b[1] - a[1])) {
	console.log(`  ${k.padEnd(10)} ${n}`);
}

console.log('\nreadable strings found in ASCII:');
for (const e of out.filter((x) => x.encoding === 'ascii')) {
	console.log(`  ${e.address}  ${JSON.stringify(e.text)}`);
}

console.log('\nreadable strings found in Shift-JIS:');
for (const e of out.filter((x) => x.encoding === 'sjis')) {
	console.log(`  ${e.address}  ${JSON.stringify(e.text)}`);
}

fs.mkdirSync(path.dirname(OUT), { recursive: true });
fs.writeFileSync(OUT, JSON.stringify(out, null, 2));
console.log(`\nwrote ${OUT} (${out.length} entries)`);
