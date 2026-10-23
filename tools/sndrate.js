#!/usr/bin/env node
// tools/sndrate.js - work out what the .SND "nominal rate" field really is.
//
// open question: sound.md records that field 24 of the .SND header reads 1960 for 13
// files but 2,426,302 for BUMP and 4,292,870,291 for FIRE, and that whether 1960 is
// the true playback rate is unverified.
//
// A first probe found NO 1960 constant anywhere in ENCHANT.EXP. That is evidence in
// itself: the code does not set this number, it reads it from the file.
//
// This tool tests what 1960 could be by looking at the data:
//   - if it is a rate in Hz, the payload is a stream of 8-bit samples at that rate
//   - if it is a period in microseconds, 1/1960 s = 510us
//   - if it is a count of something, it may relate to file size
//
// FM Towns PCM is generated from a timer, so a programmed value is usually a divisor
// of a master clock, not a frequency.

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

	console.log(`SND files: ${names.length}\n`);
	console.log('name            size  rate@24      header bytes 0..31');

	const rows = [];
	for (const n of names) {
		const b = d.get(cat, n);
		const rate = b.readUInt32LE(24);
		const short = n.split(/[\\/]/).pop();
		rows.push({ short, size: b.length, rate, buf: b });
	}

	for (const r of rows) {
		console.log(
			`${r.short.padEnd(14)} ${String(r.size).padStart(6)}  ${String(r.rate).padStart(10)}  ${r.buf.subarray(0, 32).toString('hex')}`
		);
	}

	// Which values are plausible as a rate?
	console.log('\n=== testing 1960 as a frequency ===');
	const sane = rows.filter((r) => r.rate > 0 && r.rate < 100000);
	console.log(`files with a plausible rate: ${sane.length} of ${rows.length}`);
	const rates = new Set(sane.map((r) => r.rate));
	console.log(`distinct plausible rates: ${[...rates].join(', ')}`);

	console.log('\n=== testing 1960 as a PERIOD in microseconds ===');
	console.log(`  1/1960 s = ${(1e6 / 1960).toFixed(1)} us`);
	console.log(`  1/1960 s in Hz is 1960, so a period reading gives the same number`);
	console.log('  FM Towns PCM: the timer is driven from a clock. If the code programs a');
	console.log('  divisor, the value 1960 would be a divisor, not a rate.');

	// The decisive test: if 1960 is the sample rate, the payload is that many
	// samples per second of audio. Compute the duration for each file.
	console.log('\n=== if 1960 Hz, how long is each sound? ===');
	for (const r of rows) {
		if (r.rate <= 0 || r.rate > 100000) continue;
		const payload = r.size - 32;
		const seconds = payload / r.rate;
		console.log(
			`  ${r.short.padEnd(14)} ${String(payload).padStart(6)} bytes -> ${seconds.toFixed(2)} s`
		);
	}

	console.log('\n  Sound effects in a 1990 RPG are usually 0.1 to 2 seconds.');
	console.log('  Durations far outside that range mean the rate is wrong.');

	// Look at the anomalous files.
	console.log('\n=== the anomalous files ===');
	for (const r of rows) {
		if (r.rate > 100000) {
			const b = r.buf;
			console.log(`  ${r.short}: rate field = ${r.rate} (0x${r.rate.toString(16)})`);
			console.log(`    raw bytes at 24..40: ${b.subarray(24, 40).toString('hex')}`);
			// Is it text?
			const asText = b.subarray(24, 32).toString('latin1');
			console.log(`    as text: ${JSON.stringify(asText)}`);
		}
	}

	d.close();
}

if (require.main === module) main();
