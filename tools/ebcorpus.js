#!/usr/bin/env node
// tools/ebcorpus.js - pair every 0xEB glyph run with the Shift-JIS string that follows it.
//
// WHY. The 0xEB runs resisted eleven statistical probes. They were settled instead by noticing
// that each one is immediately followed by the same message in plain Shift-JIS. Six such pairs
// exist in the 0xAB00 block. The two comparisons that matter:
//
//   0xab44  0xEB tail 4d 68 6d 61 5e 6b 5e 74  ->  えっ…扉がない
//   0xaba8  0xEB tail 4d 68 6d 61 5e 6b 5e 74  ->  ここでは出来ない
//
// Identical glyphs, different text. So the glyphs are not a transcription of the characters on
// screen, and every approach that matched them by length was measuring noise.
//
// This tool exists to test whether that holds across the whole image or whether those six were
// coincidence. It does not decode anything. It reports counts and prints the pairs.
//
// Usage:
//   node tools/ebcorpus.js               summary and the first 40 pairs
//   node tools/ebcorpus.js --all         every pair
//   node tools/ebcorpus.js --dupes       glyph tails that appear under different Shift-JIS text
//   node tools/ebcorpus.js --region A B  restrict to a hex offset range

'use strict';

const fs = require('fs');
const path = require('path');
const { Disc, defaultDisc } = require('./cd.js');

const ROOT = path.join(__dirname, '..');
const HEADER = 0x20;

function loadImage() {
	const local = path.join(ROOT, 'ENCHANT.EXP');
	if (fs.existsSync(local)) return fs.readFileSync(local).slice(HEADER);
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

// Split the image into NUL-delimited strings. A string is any run with at least one byte set.
function strings(img) {
	const out = [];
	let i = 0;
	while (i < img.length) {
		if (img[i] === 0) {
			i++;
			continue;
		}
		let e = i;
		while (e < img.length && img[e] !== 0) e++;
		out.push({ addr: i, bytes: img.subarray(i, e) });
		i = e;
	}
	return out;
}

// A 0xEB run is a sequence of [0xEB, code] pairs, possibly with no other content.
function isEbRun(b) {
	if (b.length < 2 || b.length % 2 !== 0) return false;
	for (let i = 0; i < b.length; i += 2) if (b[i] !== 0xeb) return false;
	return true;
}

function ebCodes(b) {
	const codes = [];
	for (let i = 0; i + 1 < b.length; i += 2) if (b[i] === 0xeb) codes.push(b[i + 1]);
	return codes;
}

// A string is usable Shift-JIS if the decoder produces no replacement characters and it
// contains at least one multi-byte sequence, which distinguishes it from the 0xEB runs.
//
// The first check rejects an all-0xEB run by requiring the FIRST byte not to be 0xeb and the
// string not to consist solely of 0xEB pairs. It must NOT reject 0xeb appearing as a TRAIL
// byte inside a valid Shift-JIS character, which is what 0x95 0xeb is: 0x95 is a lead byte and
// 0xeb its trail. An earlier version rejected any 0xeb anywhere, which dropped exactly one
// valid pair at 0x32c5 and made the documented count 77 instead of 78.
function sjisText(b) {
	if (b.length >= 2 && b.length % 2 === 0) {
		let allEb = true;
		for (let i = 0; i < b.length; i += 2) if (b[i] !== 0xeb) allEb = false;
		if (allEb) return null;
	}
	let multi = false;
	for (let i = 0; i < b.length; i++) {
		const v = b[i];
		if (v >= 0x81 && v <= 0x9f) {
			multi = true;
			i++;
		} else if (v >= 0xe0 && v <= 0xfc) {
			multi = true;
			i++;
		} else if (v < 0x20 && v !== 0x0a) {
			return null;
		}
	}
	if (!multi) return null;
	let text;
	try {
		text = new TextDecoder('shift_jis', { fatal: true }).decode(b);
	} catch {
		return null;
	}
	return text;
}

function main() {
	const args = process.argv.slice(2);
	const img = loadImage();

	let lo = 0;
	let hi = img.length;
	const ri = args.indexOf('--region');
	if (ri >= 0) {
		lo = parseInt(args[ri + 1], 16);
		hi = parseInt(args[ri + 2], 16);
	}

	const strs = strings(img).filter((s) => s.addr >= lo && s.addr < hi);

	// Pair each all-0xEB string with the next string, if that next one is Shift-JIS text.
	const pairs = [];
	for (let k = 0; k < strs.length - 1; k++) {
		const a = strs[k];
		const b = strs[k + 1];
		if (!isEbRun(a.bytes)) continue;
		if (b.addr !== a.addr + a.bytes.length + 1) continue; // must be adjacent
		const text = sjisText(b.bytes);
		if (!text) continue;
		pairs.push({ addr: a.addr, codes: ebCodes(a.bytes), text, textAddr: b.addr });
	}

	console.log(`image ${img.length} bytes, ${strs.length} strings in range`);
	console.log(`all-0xEB runs followed by Shift-JIS: ${pairs.length}\n`);

	if (args.includes('--dupes')) {
		// Group by glyph run and report any run that appears under more than one text.
		const byTail = new Map();
		for (const p of pairs) {
			const key = p.codes.join(',');
			if (!byTail.has(key)) byTail.set(key, []);
			byTail.get(key).push(p);
		}
		let found = 0;
		for (const [key, group] of byTail) {
			const texts = new Set(group.map((g) => g.text));
			if (texts.size < 2) continue;
			found++;
			console.log(`glyph run ${key}`);
			for (const g of group) console.log(`   0x${g.addr.toString(16)}  ->  ${g.text}`);
		}
		console.log(
			found === 0
				? '\nnone. The six-pair block was coincidence, or the runs are text-specific.'
				: `\n${found} glyph runs carry more than one text. The glyphs are not a transcription.`
		);
		return;
	}

	const show = args.includes('--all') ? pairs : pairs.slice(0, 40);
	for (const p of show) {
		const g = p.codes.map((c) => c.toString(16).padStart(2, '0')).join(' ');
		console.log(`0x${p.addr.toString(16)}  [${g}]`.padEnd(46) + `  ${p.text}`);
	}
	if (show.length < pairs.length) console.log(`\n... ${pairs.length - show.length} more, use --all`);
}

if (require.main === module) main();
