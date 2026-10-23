#!/usr/bin/env node
// tools/worldfmt.js - inspect a WORLD*.UT2 save file.
//
// ESTABLISHED SO FAR. From saves/maxed_four.hdm, all four world files are 68,096 bytes and
// share this shape:
//
//   - a row pitch of 128 bytes, found from zero-run boundaries at 0x5d, 0xdd, 0x15d, 0x1dd
//   - 6 rows carry data, that is 768 bytes
//   - everything from 0x2dd to EOF is zero, 67,363 bytes of it
//   - 16 distinct byte values in the whole file
//
// Rows 0 and 1 hold small grouped values in 30..34. Row 2 holds values that look like
// bitmasks (255, 224, 192, 64, 32). No row looks like terrain.
//
// This tool does not decode anything. It reports the shape so the open questions in
// docs/overnight.md item 1 can be attacked with numbers rather than impressions.
//
// Usage:
//   node tools/worldfmt.js [disk.hdm] [WORLD1.UT2]   rows, values, zero runs
//   node tools/worldfmt.js --bits                    per-bit occupancy of each row
//   node tools/worldfmt.js --compare                 WORLD1..4 side by side
//   node tools/worldfmt.js --size                    what 68096 factors into

'use strict';

const fs = require('fs');
const path = require('path');
const sd = require('./savedisk.js');

const ROOT = path.join(__dirname, '..');
const ROW = 128;

function load(file, name) {
	const img = fs.readFileSync(file);
	const e = sd.findEntry(img, name);
	if (!e) throw new Error(`${name} not found in ${file}`);
	return sd.readFile(img, e);
}

// The last row index that contains a non-zero byte, searching only below the fill point.
function lastDataRow(buf) {
	let last = -1;
	for (let r = 0; r * ROW < Math.min(buf.length, sd.WORLD_FILL_FROM); r++) {
		const row = buf.subarray(r * ROW, r * ROW + ROW);
		if (row.some((v) => v !== 0)) last = r;
	}
	return last;
}

function dumpRows(buf) {
	const last = lastDataRow(buf);
	console.log(`size ${buf.length}, row pitch ${ROW}, ${buf.length / ROW} rows total`);
	console.log(`last row with data: ${last} (through byte ${(last + 1) * ROW})\n`);

	for (let r = 0; r <= last; r++) {
		const row = buf.subarray(r * ROW, r * ROW + ROW);
		// Trim the trailing zeros so the interesting part stays readable.
		let end = ROW;
		while (end > 0 && row[end - 1] === 0) end--;
		const vals = [];
		for (let i = 0; i < end; i++) vals.push(row[i]);
		const distinct = [...new Set(vals)].sort((a, b) => a - b);
		console.log(`row ${r} @0x${(r * ROW).toString(16)}  ${end} nonzero bytes`);
		console.log(`  values: ${vals.join(' ')}`);
		console.log(`  distinct: ${distinct.join(', ')}`);
		// Rows 0 and 1 look like small-value arrays rather than dwords, so print both readings.
		if (end % 4 === 0 && end > 0) {
			const dw = [];
			for (let i = 0; i < end; i += 4) dw.push(row.readUInt32LE(i));
			console.log(`  as dwords: ${dw.join(' ')}`);
		}
		console.log('');
	}
}

// A row of bitmask-shaped values is only a bitfield if the same bits recur. Per-bit
// occupancy distinguishes "each byte is a mask" from "these are just small numbers".
function bitOccupancy(buf) {
	const last = lastDataRow(buf);
	for (let r = 0; r <= last; r++) {
		const row = buf.subarray(r * ROW, r * ROW + ROW);
		let end = ROW;
		while (end > 0 && row[end - 1] === 0) end--;
		const counts = new Array(8).fill(0);
		for (let i = 0; i < end; i++) {
			for (let b = 0; b < 8; b++) if (row[i] & (1 << b)) counts[b]++;
		}
		// A bit present in every byte of the row, or in exactly half, is structured.
		console.log(
			`row ${r}: ` + counts.map((c, b) => `bit${b}=${c}/${end}`).join(' ')
		);
	}
	console.log('\nA bit at 0 or end for the whole row means that bit is constant across the row.');
}

function compare(file) {
	const names = ['WORLD1.UT2', 'WORLD2.UT2', 'WORLD3.UT2', 'WORLD4.UT2'];
	const bufs = names.map((n) => load(file, n));
	console.log('file        size    lastRow  distinct  firstDiffFromWorld1');
	for (let k = 0; k < names.length; k++) {
		const b = bufs[k];
		let first = -1;
		if (k > 0) {
			for (let i = 0; i < b.length; i++) {
				if (b[i] !== bufs[0][i]) {
					first = i;
					break;
				}
			}
		}
		console.log(
			`${names[k]}  ${String(b.length).padEnd(7)} ${String(lastDataRow(b)).padEnd(8)} ` +
				`${String(new Set(b).size).padEnd(9)} ${k === 0 ? '(reference)' : first < 0 ? 'identical' : '0x' + first.toString(16)}`
		);
	}
	// If the four are byte-identical the format carries no per-slot state, which is itself
	// an important negative.
	const identical = bufs.every((b) => b.equals(bufs[0]));
	console.log(
		identical
			? '\nALL FOUR IDENTICAL. The world file carries no per-slot state, or this save never wrote one.'
			: '\nThe four differ, so the file does hold per-slot state.'
	);
}

function sizeArithmetic() {
	const n = sd.WORLD_SIZE;
	console.log(`WORLD_SIZE = ${n}\n`);
	console.log('divisors and what they would mean:');
	const guesses = [
		[2, 'bytes per cell'],
		[4, 'bytes per cell, dword'],
		[128, 'cells per row at 1 byte each'],
		[256, 'cells per row at 2 bytes each'],
		[512, 'cells per row at 4 bytes each'],
	];
	for (const [d, what] of guesses) {
		if (n % d === 0) console.log(`  ${n} / ${d} = ${n / d}   (${what})`);
	}
	console.log(`\n  ${n} - 32768  = ${n - 32768}   (a 128x256 map of bytes, remainder)`);
	console.log(`  ${n} - 65536  = ${n - 65536}   (a 256x256 map of bytes, remainder)`);
	console.log(`  ${n} - 61952  = ${n - 61952}  (WORLD_FILL_FROM)`);
	console.log(`  68096 / 128  = ${68096 / 128} rows of 128`);
	console.log(`\nNo divisor makes ${n} a clean 128x256 or 256x256 map. Whatever the layout is,`);
	console.log('there is a header or a second region.');
}

function main() {
	const args = process.argv.slice(2);
	const positional = args.filter((a) => !a.startsWith('--'));
	const file = positional[0] || path.join(ROOT, 'saves', 'maxed_four.hdm');
	const name = positional[1] || 'WORLD1.UT2';

	if (!fs.existsSync(file)) {
		console.error(`no such file: ${file}`);
		process.exit(1);
	}

	if (args.includes('--size')) return sizeArithmetic();
	if (args.includes('--compare')) return compare(file);
	const buf = load(file, name);
	if (args.includes('--bits')) return bitOccupancy(buf);
	dumpRows(buf);
}

if (require.main === module) main();
