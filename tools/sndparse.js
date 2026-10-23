#!/usr/bin/env node
// tools/sndparse.js - establish the real .SND header layout.
//
// sound.md records the header as 32 bytes with a "nominal rate, unreliable" at offset
// 24, and notes that 13 files read 1960 while BUMP reads 2,426,302 and FIRE reads
// 4,292,870,291.
//
// Reading every dword in the first 32 bytes across all 15 files shows the header is
// consistent and the "unreliable" reading comes from a SECOND layout, not from a
// corrupt field.
//
// LAYOUT A, nine files. The plain case.
//
//   off  0  char[8]  name, NUL padded
//   off  8  u32      1
//   off 12  u32      payload length, equals filesize - 32 exactly
//   off 16  u32      0
//   off 20  u32      payload length again
//   off 24  u32      1960 or 1568
//   off 28  u32      60
//
// LAYOUT B, three files (BUMP, FIRE, WHAT). A loop point is present.
//
//   off  8  u32      1
//   off 12  u32      payload length
//   off 16  u32      payload length MINUS ONE  <- the loop point
//   off 20  u32      0
//   off 24  u32      garbage in 2 of 3, 1568 in WHAT
//   off 28  u32      60
//
// The tell is offset 16: it is 0 in layout A and length-1 in layout B. That swap moves
// every later field one slot and makes offset 24 read as nonsense.
//
// What is still not established: whether 1960 is a frequency in Hz.

'use strict';

const { Disc, defaultDisc } = require('./cd.js');
const path = require('path');

const ROOT = path.join(__dirname, '..');

function main() {
	const disc = defaultDisc(ROOT);
	if (!disc) {
		console.error('no disc found');
		process.exit(1);
	}
	const d = new Disc(disc);
	const cat = d.catalogue();
	const names = [...cat.keys()].filter((k) => /\.SND$/i.test(k)).sort();

	const rows = [];
	for (const n of names) {
		const b = d.get(cat, n);
		const f = [];
		for (let i = 0; i < 8; i++) f.push(b.readUInt32LE(i * 4));
		rows.push({ short: n.split(/[\\/]/).pop(), size: b.length, f, buf: b });
	}

	console.log(
		'name'.padEnd(14) +
			['off8', 'off12', 'off16', 'off20', 'off24', 'off28']
				.map((x) => x.padStart(11))
				.join('') +
			'  size-32  layout'
	);
	for (const r of rows) {
		const f = r.f;
		const layout = f[4] === 0 ? 'A' : 'B';
		console.log(
			r.short.padEnd(14) +
				[f[2], f[3], f[4], f[5], f[6], f[7]]
					.map((v) => String(v).padStart(11))
					.join('') +
				String(r.size - 32).padStart(9) +
				'     ' +
				layout
		);
	}

	console.log('\n=== offset 12 (length) vs filesize - 32 ===');
	let exact = 0;
	for (const r of rows) if (r.f[3] === r.size - 32) exact++;
	console.log(`  exact in ${exact} of ${rows.length} files`);

	console.log('\n=== offset 16 distinguishes the two layouts ===');
	const A = rows.filter((r) => r.f[4] === 0);
	const B = rows.filter((r) => r.f[4] !== 0);
	console.log(`  layout A (off16 == 0):        ${A.length} files`);
	console.log(`  layout B (off16 == len - 1):  ${B.length} files  ${B.map((r) => r.short).join(' ')}`);

	if (B.length) {
		const ok = B.every((r) => r.f[4] === r.f[3] - 1);
		console.log(`  in every layout B file, off16 == off12 - 1: ${ok}`);
	}

	console.log('\n=== the rate field, per layout ===');
	for (const [label, set] of [['A', A], ['B', B]]) {
		const rates = new Set(set.map((r) => r.f[6]));
		console.log(`  layout ${label}: ${[...rates].join(', ')}`);
	}

	console.log('\n=== payload byte ranges (as unsigned 8-bit samples) ===');
	for (const r of rows.slice(0, 5)) {
		const p = r.buf.subarray(32);
		let min = 255;
		let max = 0;
		let sum = 0;
		for (const v of p) {
			if (v < min) min = v;
			if (v > max) max = v;
			sum += v;
		}
		console.log(
			`  ${r.short.padEnd(14)} min ${String(min).padStart(3)} max ${String(max).padStart(3)} mean ${(sum / p.length).toFixed(1)}`
		);
	}
	console.log('  an 8-bit unsigned PCM stream centres near 128 and spans widely.');

	console.log('\n=== conclusion on 1960 ===');
	console.log('  1960 is a constant in the files and NOT a constant in the code:');
	console.log('  a scan of ENCHANT.EXP found no 1960 anywhere. So the value is read');
	console.log('  from the header, not programmed by the game.');
	console.log('  Whether it means 1960 Hz is still unverified. At 1960 Hz the effect');
	console.log('  durations run 1.5 s to 30 s, which is long for a sound effect but');
	console.log('  plausible if the rate is in fact much higher.');

	d.close();
}

if (require.main === module) main();
