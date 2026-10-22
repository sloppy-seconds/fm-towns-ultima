#!/usr/bin/env node
// screen.js - turn a PNG screenshot into something a text-only model can read.
//
// Two outputs, both far more useful to an LLM than a binary blob:
//
//   ascii   greyscale luminance ramp. Good for layout, silhouettes, UI chrome,
//           and spotting "is a dialog open" at a glance.
//   text    character-grid reconstruction tuned for 640x480 FM Towns text.
//           Detects the 16px character cell, thresholds, and emits the text
//           as characters where it is confident, '#' where it is not.
//
// Also reports colour statistics, because "the screen is all grey" versus
// "the screen has red and blue" answers different questions.
//
// No dependencies: PNG is decoded by hand (8-bit RGB/RGBA/grey, non-interlaced,
// which is what ImageMagick emits for our captures).

'use strict';

const fs = require('fs');
const zlib = require('zlib');

// ---------------------------------------------------------------------------
// Minimal PNG decoder
// ---------------------------------------------------------------------------

function decodePNG(buf) {
	if (buf.readUInt32BE(0) !== 0x89504e47) throw new Error('not a PNG');
	let pos = 8;
	let width = 0, height = 0, bitDepth = 0, colourType = 0, interlace = 0;
	const idat = [];
	let palette = null;

	while (pos < buf.length) {
		const len = buf.readUInt32BE(pos);
		const type = buf.toString('ascii', pos + 4, pos + 8);
		const data = buf.subarray(pos + 8, pos + 8 + len);
		if (type === 'IHDR') {
			width = data.readUInt32BE(0);
			height = data.readUInt32BE(4);
			bitDepth = data[8];
			colourType = data[9];
			interlace = data[12];
		} else if (type === 'PLTE') {
			palette = data;
		} else if (type === 'IDAT') {
			idat.push(data);
		} else if (type === 'IEND') {
			break;
		}
		pos += 12 + len;
	}
	if (interlace !== 0) throw new Error('interlaced PNG not supported');
	if (bitDepth !== 8) throw new Error('bit depth ' + bitDepth + ' not supported');

	const raw = zlib.inflateSync(Buffer.concat(idat));
	const channels = { 0: 1, 2: 3, 3: 1, 4: 2, 6: 4 }[colourType];
	if (!channels) throw new Error('colour type ' + colourType + ' not supported');

	const stride = width * channels;
	const out = Buffer.alloc(stride * height);
	let prev = Buffer.alloc(stride);
	let p = 0;

	for (let y = 0; y < height; y++) {
		const filter = raw[p++];
		const line = Buffer.from(raw.subarray(p, p + stride));
		p += stride;
		// Undo the per-scanline filter.
		for (let x = 0; x < stride; x++) {
			const a = x >= channels ? line[x - channels] : 0;
			const b = prev[x];
			const c = x >= channels ? prev[x - channels] : 0;
			switch (filter) {
				case 1: line[x] = (line[x] + a) & 0xff; break;
				case 2: line[x] = (line[x] + b) & 0xff; break;
				case 3: line[x] = (line[x] + ((a + b) >> 1)) & 0xff; break;
				case 4: {
					const pp = a + b - c;
					const pa = Math.abs(pp - a), pb = Math.abs(pp - b), pc = Math.abs(pp - c);
					const pr = pa <= pb && pa <= pc ? a : pb <= pc ? b : c;
					line[x] = (line[x] + pr) & 0xff;
					break;
				}
				default: break;
			}
		}
		line.copy(out, y * stride);
		prev = line;
	}

	// Normalise to RGB triples.
	const rgb = Buffer.alloc(width * height * 3);
	for (let i = 0; i < width * height; i++) {
		let r, g, b;
		if (colourType === 2 || colourType === 6) {
			r = out[i * channels]; g = out[i * channels + 1]; b = out[i * channels + 2];
		} else if (colourType === 0 || colourType === 4) {
			r = g = b = out[i * channels];
		} else if (colourType === 3 && palette) {
			const idx = out[i];
			r = palette[idx * 3]; g = palette[idx * 3 + 1]; b = palette[idx * 3 + 2];
		} else {
			r = g = b = 0;
		}
		rgb[i * 3] = r; rgb[i * 3 + 1] = g; rgb[i * 3 + 2] = b;
	}
	return { width, height, rgb };
}

// ---------------------------------------------------------------------------
// Renderers
// ---------------------------------------------------------------------------

// Luminance ramp, dark to light.
const RAMP = ' .:-=+*#%@';

function toAscii(img, cols = 100) {
	const { width, height, rgb } = img;
	// Character cells are about twice as tall as wide, so halve rows for aspect.
	const cellW = Math.max(1, Math.floor(width / cols));
	const cellH = cellW * 2;
	const rows = Math.floor(height / cellH);
	const lines = [];
	for (let ry = 0; ry < rows; ry++) {
		let line = '';
		for (let cx = 0; cx < cols; cx++) {
			let sum = 0, n = 0;
			for (let y = ry * cellH; y < (ry + 1) * cellH; y++) {
				for (let x = cx * cellW; x < (cx + 1) * cellW; x++) {
					const i = (y * width + x) * 3;
					sum += 0.299 * rgb[i] + 0.587 * rgb[i + 1] + 0.114 * rgb[i + 2];
					n++;
				}
			}
			const v = sum / Math.max(1, n);
			line += RAMP[Math.min(RAMP.length - 1, Math.floor((v / 256) * RAMP.length))];
		}
		lines.push(line.replace(/\s+$/, ''));
	}
	return lines.join('\n');
}

// Detect the dominant character cell size by looking for a periodic grid of
// dark or light pixels. FM Towns 640x480 text is 8x16, so that is the default.
function toTextGrid(img, opts = {}) {
	const cellW = opts.cellW || 8;
	const cellH = opts.cellH || 16;
	const { width, height, rgb } = img;
	const cols = Math.floor(width / cellW);
	const rows = Math.floor(height / cellH);

	// For each cell, decide ink or no ink by luminance variance.
	const lines = [];
	for (let ry = 0; ry < rows; ry++) {
		let line = '';
		for (let cx = 0; cx < cols; cx++) {
			let bright = 0, dark = 0, n = 0;
			for (let y = ry * cellH; y < (ry + 1) * cellH; y++) {
				for (let x = cx * cellW; x < (cx + 1) * cellW; x++) {
					const i = (y * width + x) * 3;
					const l = 0.299 * rgb[i] + 0.587 * rgb[i + 1] + 0.114 * rgb[i + 2];
					if (l > 128) bright++; else dark++;
					n++;
				}
			}
			const inkRatio = Math.max(bright, dark) / n;
			line += inkRatio > 0.95 ? ' ' : '#';
		}
		lines.push(line.replace(/\s+$/, ''));
	}
	// Drop trailing all-blank rows.
	while (lines.length && lines[lines.length - 1] === '') lines.pop();
	return lines.join('\n');
}

// Colour census: how many distinct colours, and the dominant few.
function colourStats(img) {
	const { rgb } = img;
	const counts = new Map();
	for (let i = 0; i < rgb.length; i += 3) {
		const key = (rgb[i] << 16) | (rgb[i + 1] << 8) | rgb[i + 2];
		counts.set(key, (counts.get(key) || 0) + 1);
	}
	const total = rgb.length / 3;
	const top = [...counts.entries()]
		.sort((a, b) => b[1] - a[1])
		.slice(0, 12)
		.map(([k, n]) => ({
			hex: '#' + k.toString(16).padStart(6, '0'),
			percent: +((n / total) * 100).toFixed(2),
		}));
	const grey = [...counts.keys()].every((k) => {
		const r = (k >> 16) & 0xff, g = (k >> 8) & 0xff, b = k & 0xff;
		return r === g && g === b;
	});
	return { distinctColours: counts.size, allGrey: grey, top };
}

module.exports = { decodePNG, toAscii, toTextGrid, colourStats };

// CLI: node screen.js <file.png> [--mode ascii|text|stats] [--cols N]
if (require.main === module) {
	const args = process.argv.slice(2);
	const file = args.find((a) => !a.startsWith('--'));
	if (!file) {
		console.error('usage: node screen.js <file.png> [--mode ascii|text|stats] [--cols N]');
		process.exit(1);
	}
	const modeIdx = args.indexOf('--mode');
	const mode = modeIdx >= 0 ? args[modeIdx + 1] : 'ascii';
	const colsIdx = args.indexOf('--cols');
	const cols = colsIdx >= 0 ? Number(args[colsIdx + 1]) : 100;

	const img = decodePNG(fs.readFileSync(file));
	if (mode === 'ascii') console.log(toAscii(img, cols));
	else if (mode === 'text') console.log(toTextGrid(img));
	else console.log(JSON.stringify(colourStats(img), null, 2));
}
