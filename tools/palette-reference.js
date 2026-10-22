#!/usr/bin/env node
// tools/palette-reference.js - derive U2's real palette from screenshots.
//
// Why screenshots: the palette is not stored in any asset file and is not a
// static table in ENCHANT.EXP (`docs/save-disk.md` 6.2 to 6.6). But the running game shows
// the colours, so a handful of emulator screenshots give ground truth.
//
// Method: quantise each screenshot to exactly 16 colours with dithering off,
// convert every colour to RGB555 (the FM Towns CRTC format), then rank by how
// much screen area and how many independent screens each entry appears in.
// A genuine palette entry shows up on most screens. JPEG artefacts do not.
//
// Usage:
//   node tools/palette-reference.js --dir /path/to/screenshots
//   node tools/palette-reference.js --dir /path/to/screenshots --rgb555
//
// Screenshots are NOT committed. See the copyright section of AGENTS.md.
// Reference set used: the U2 FM Towns screenshots from
// pixsoriginadventures.co.uk/ultima-2-fm-towns-part-1 and part-2.

'use strict';

// Proper palette recovery: quantise each screenshot to exactly 16 colours with
// Floyd-Steinberg disabled (so palette entries are not invented), then count how
// often each 5-bit RGB triple appears across all screenshots.
const { execSync } = require('child_process');
const fs = require('fs');
const path = require('path');

const argv = process.argv.slice(2);
const dirIdx = argv.indexOf('--dir');
const dir = dirIdx >= 0 ? argv[dirIdx + 1] : '/var/tmp/u2ref';
const WANT_RGB555 = argv.includes('--rgb555');
if (!fs.existsSync(dir)) {
	console.error('screenshot directory not found: ' + dir);
	console.error('Download a few 640x480 FM Towns U2 screenshots and pass --dir');
	process.exit(1);
}
const files = fs.readdirSync(dir).filter((f) => f.endsWith('.jpg')).sort();

// Global vote table keyed by RGB555 value.
const votes = new Map();
const perScreen = [];

for (const f of files) {
	// -colors 16 -dither None gives the 16 most representative colours without
	// dithering noise, which is what an actual 16-colour framebuffer looks like.
	const txt = execSync(
		`convert "${path.join(dir, f)}" -dither None -colors 16 -depth 8 txt:- 2>/dev/null`,
		{ encoding: 'utf8', maxBuffer: 1 << 28 }
	);
	const counts = new Map();
	for (const line of txt.split('\n')) {
		const m = line.match(/#([0-9A-F]{6})/);
		if (m) counts.set(m[1], (counts.get(m[1]) || 0) + 1);
	}
	const total = [...counts.values()].reduce((a, b) => a + b, 0);
	const screenCols = [];
	for (const [hex, n] of counts) {
		const r = parseInt(hex.slice(0, 2), 16);
		const g = parseInt(hex.slice(2, 4), 16);
		const b = parseInt(hex.slice(4, 6), 16);
		// Quantise to RGB555, the CRTC format.
		const r5 = Math.round((r / 255) * 31);
		const g5 = Math.round((g / 255) * 31);
		const b5 = Math.round((b / 255) * 31);
		const key = (r5 << 10) | (g5 << 5) | b5;
		const frac = n / total;
		votes.set(key, (votes.get(key) || 0) + frac);
		screenCols.push({ key, hex, frac, rgb: [r, g, b] });
	}
	perScreen.push({ file: f, cols: screenCols.sort((a, b) => b.frac - a.frac) });
}

console.log('screens analysed: ' + files.length);
console.log('\nper-screen 16 colours (hex -> RGB555 word):');
for (const s of perScreen) {
	console.log('\n' + s.file);
	console.log(
		'  ' +
			s.cols
				.slice(0, 16)
				.map((c) => c.hex + ':0x' + c.key.toString(16).padStart(4, '0'))
				.join(' ')
	);
}

// Cross-screen consensus: a real palette entry appears in several screens with
// meaningful area. Rank by vote count (sum of screen area fractions).
const ranked = [...votes.entries()].sort((a, b) => b[1] - a[1]);
console.log('\n\nconsensus ranking across all screens:');
console.log('rank  RGB555  rgb           votes  screens');
const toRGB = (k) => [
	((k >> 10) & 31) * 8,
	((k >> 5) & 31) * 8,
	(k & 31) * 8,
];
const screenCount = (k) =>
	perScreen.filter((s) => s.cols.some((c) => c.key === k)).length;
ranked.slice(0, 24).forEach(([k, v], i) => {
	const [r, g, b] = toRGB(k);
	console.log(
		String(i).padStart(4) +
			'  0x' + k.toString(16).padStart(4, '0') +
			'  (' + [r, g, b].map((x) => String(x).padStart(3)).join(',') + ')' +
			'  ' + v.toFixed(2).padStart(5) +
			'  ' + screenCount(k) + '/' + files.length
	);
});
