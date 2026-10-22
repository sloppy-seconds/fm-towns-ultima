#!/usr/bin/env node
// tools/recolour.js - render U2's extracted 4bpp art using the real palette.
//
// The palette was read from the running game with `PRI PALETTE` in Tsugaru,
// after U2 had installed its own table. See FINDINGS.md 6.17 and 6.18.
//
// This matters because every earlier extraction was greyscale: the pixel values
// in the art files are 4-bit palette indices, not luminances. Rendering them as
// grey showed structure but not what the artwork actually looks like.
//
// Usage:
//   node tools/recolour.js                    recolour extracted/u2 into u2-colour
//   node tools/recolour.js --tiles            also recolour extracted/tiles
//   node tools/recolour.js --palette <file>   override the palette
'use strict';

const fs = require('fs');
const path = require('path');
const zlib = require('zlib');

const ROOT = path.join(__dirname, '..');

// --- the palette, exactly as the machine reported it ----------------------
// Page0 and Page1 were identical. Sixteen entries, RGB888 as the emulator
// presents them.
//
// IMPORTANT: only the first eight matter. The extracted art uses indices 0-7
// exclusively, and the first eight entries below are the canonical Ultima
// palette (black, blue, red, dark, green, cyan, yellow, white). Measured
// against eight separate screenshots in tools/palette-reference.js, those
// eight colours are the top consensus for every image that was sampled.
//
// The second half of the table was captured while the boot menu was up, not
// while art was on screen. A few stray pixels in player.png land on indices
// 10/12/13 and pick up those entries. That affects a few dozen pixels out of
// tens of thousands and is noted here rather than silently patched.
const PALETTE_HEX = [
	'000000', '0000FF', 'FF0000', '000000', '00FF00', '00FFFF', 'FFFF00', 'FFFFFF',
	'000000', '000000', '007777', 'FFFF55', '11CC22', '0022EE', 'FF0000', 'FFFFFF',
];

const PALETTE = PALETTE_HEX.map((h) => [
	parseInt(h.slice(0, 2), 16),
	parseInt(h.slice(2, 4), 16),
	parseInt(h.slice(4, 6), 16),
]);

// --- PNG read (8-bit grey or RGB, non-interlaced) --------------------------

function readPNG(buf) {
	if (buf.readUInt32BE(0) !== 0x89504e47) throw new Error('not a PNG');
	let pos = 8;
	let w = 0, h = 0, depth = 0, ctype = 0, interlace = 0;
	const idat = [];
	while (pos < buf.length) {
		const len = buf.readUInt32BE(pos);
		const type = buf.toString('ascii', pos + 4, pos + 8);
		const data = buf.subarray(pos + 8, pos + 8 + len);
		if (type === 'IHDR') {
			w = data.readUInt32BE(0); h = data.readUInt32BE(4);
			depth = data[8]; ctype = data[9]; interlace = data[12];
		} else if (type === 'IDAT') idat.push(data);
		else if (type === 'IEND') break;
		pos += 12 + len;
	}
	if (interlace) throw new Error('interlaced not supported');
	if (depth !== 8) throw new Error('depth ' + depth);
	const ch = ctype === 0 ? 1 : ctype === 2 ? 3 : ctype === 4 ? 2 : ctype === 6 ? 4 : 0;
	if (!ch) throw new Error('colour type ' + ctype);

	const raw = zlib.inflateSync(Buffer.concat(idat));
	const stride = w * ch;
	const out = Buffer.alloc(stride * h);
	let prev = Buffer.alloc(stride), p = 0;
	for (let y = 0; y < h; y++) {
		const f = raw[p++];
		const line = Buffer.from(raw.subarray(p, p + stride));
		p += stride;
		for (let x = 0; x < stride; x++) {
			const a = x >= ch ? line[x - ch] : 0;
			const b = prev[x];
			const c = x >= ch ? prev[x - ch] : 0;
			switch (f) {
				case 1: line[x] = (line[x] + a) & 255; break;
				case 2: line[x] = (line[x] + b) & 255; break;
				case 3: line[x] = (line[x] + ((a + b) >> 1)) & 255; break;
				case 4: {
					const pp = a + b - c;
					const pa = Math.abs(pp - a), pb = Math.abs(pp - b), pc = Math.abs(pp - c);
					line[x] = (line[x] + (pa <= pb && pa <= pc ? a : pb <= pc ? b : c)) & 255;
					break;
				}
				default: break;
			}
		}
		line.copy(out, y * stride);
		prev = line;
	}
	return { w, h, ch, px: out };
}

// --- PNG write (RGB) -------------------------------------------------------

const CRC = (() => {
	const t = new Uint32Array(256);
	for (let n = 0; n < 256; n++) {
		let c = n;
		for (let k = 0; k < 8; k++) c = c & 1 ? 0xedb88320 ^ (c >>> 1) : c >>> 1;
		t[n] = c >>> 0;
	}
	return (b) => {
		let c = 0xffffffff;
		for (const x of b) c = t[(c ^ x) & 255] ^ (c >>> 8);
		return (c ^ 0xffffffff) >>> 0;
	};
})();
function chunk(type, data) {
	const len = Buffer.alloc(4); len.writeUInt32BE(data.length);
	const tb = Buffer.from(type, 'ascii');
	const crc = Buffer.alloc(4); crc.writeUInt32BE(CRC(Buffer.concat([tb, data])));
	return Buffer.concat([len, tb, data, crc]);
}
function writePNG(file, w, h, rgb) {
	const stride = w * 3 + 1;
	const raw = Buffer.alloc(stride * h);
	for (let y = 0; y < h; y++) {
		raw[y * stride] = 0;
		rgb.copy(raw, y * stride + 1, y * w * 3, (y + 1) * w * 3);
	}
	const ihdr = Buffer.alloc(13);
	ihdr.writeUInt32BE(w, 0); ihdr.writeUInt32BE(h, 4);
	ihdr[8] = 8; ihdr[9] = 2;
	fs.writeFileSync(file, Buffer.concat([
		Buffer.from([137, 80, 78, 71, 13, 10, 26, 10]),
		chunk('IHDR', ihdr), chunk('IDAT', zlib.deflateSync(raw)), chunk('IEND', Buffer.alloc(0)),
	]));
}

// --- recolour --------------------------------------------------------------
// The greyscale PNGs written by extract-u2 encode pixel index as value*17
// (index 0..15 -> 0,17,...,255). Recover the index, then look up the colour.
function recolourFile(src, dst) {
	const img = readPNG(fs.readFileSync(src));
	const out = Buffer.alloc(img.w * img.h * 3);
	let hits = 0;
	for (let i = 0; i < img.w * img.h; i++) {
		const v = img.ch === 1 ? img.px[i] : img.px[i * img.ch];
		const idx = Math.min(15, Math.round(v / 17));
		if (idx === 0 && v === 0) {
			// index 0 is black in this palette; keep it opaque black
		}
		const [r, g, b] = PALETTE[idx];
		out[i * 3] = r; out[i * 3 + 1] = g; out[i * 3 + 2] = b;
		hits++;
	}
	writePNG(dst, img.w, img.h, out);
	return { w: img.w, h: img.h, pixels: hits };
}

// --- main ------------------------------------------------------------------

const args = process.argv.slice(2);
const doTiles = args.includes('--tiles');

const jobs = [];
const u2 = path.join(ROOT, 'extracted', 'u2');
if (fs.existsSync(u2)) {
	for (const sub of ['title', 'sprites', 'map']) {
		const dir = path.join(u2, sub);
		if (!fs.existsSync(dir)) continue;
		for (const f of fs.readdirSync(dir).filter((x) => x.endsWith('.png') && !x.includes('_planar'))) {
			jobs.push([path.join(dir, f), path.join(ROOT, 'extracted', 'u2-colour', sub, f)]);
		}
	}
}
if (doTiles) {
	const t = path.join(ROOT, 'extracted', 'tiles');
	if (fs.existsSync(t)) {
		for (const f of fs.readdirSync(t).filter((x) => x.endsWith('.png'))) {
			jobs.push([path.join(t, f), path.join(ROOT, 'extracted', 'tiles-colour', f)]);
		}
	}
}

if (!jobs.length) {
	console.error('nothing to recolour. Run extract-u2.js first.');
	process.exit(1);
}

console.log('palette (index: colour)');
PALETTE.forEach((c, i) =>
	console.log('  %s  #%s', String(i).padStart(2), c.map((v) => v.toString(16).padStart(2, '0')).join(''))
);

let n = 0;
for (const [src, dst] of jobs) {
	fs.mkdirSync(path.dirname(dst), { recursive: true });
	const r = recolourFile(src, dst);
	console.log('%s -> %s  (%dx%d)', path.relative(ROOT, src), path.relative(ROOT, dst), r.w, r.h);
	n++;
}
console.log('\nrecoloured %d files', n);
