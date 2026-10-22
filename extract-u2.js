#!/usr/bin/env node
// extract-u2.js - pull the Ultima II assets out of the FM Towns Trilogy CD.
//
// Writes to ./extracted/u2/:
//   map/      MAP2_1/2/3 decoded as 320x104 4bpp terrain (PNG)
//   sprites/  PLAYER, ENEMY2, EXTRA, CHEST, DUNG1/2 (PNG)
//   title/    U2TITLE1-4, U2END1-5, GAI, DUNMON1-3 (PNG)
//   sfx/      the 15 .SND effects the game loads (WAV)
//   manifest.txt  what decoded and what did not
//
// Usage: node extract-u2.js [--disc path/to/file.img] [--out dir]

'use strict';

const fs = require('fs');
const path = require('path');
const zlib = require('zlib');

const SECTOR = 2352;
const USER = 2048;

// ---------------------------------------------------------------------------
// CD / ISO9660
// ---------------------------------------------------------------------------

class Disc {
	constructor(file) {
		this.fd = fs.openSync(file, 'r');
	}
	sector(n) {
		const b = Buffer.alloc(SECTOR);
		fs.readSync(this.fd, b, 0, SECTOR, n * SECTOR);
		return b.subarray(16, 16 + USER);
	}
	read(lba, size) {
		const parts = [];
		let got = 0;
		let p = lba;
		while (got < size) {
			const s = this.sector(p++);
			parts.push(s);
			got += USER;
		}
		return Buffer.concat(parts).subarray(0, size);
	}
	walk(lba, size, prefix, out) {
		const data = this.read(lba, size);
		let i = 0;
		while (i < data.length) {
			const len = data[i];
			if (len === 0) {
				i = (Math.floor(i / USER) + 1) * USER;
				continue;
			}
			const rec = data.subarray(i, i + len);
			if (rec.length < 34) break;
			const clba = rec.readUInt32LE(2);
			const csize = rec.readUInt32LE(10);
			const flags = rec[25];
			const nlen = rec[32];
			const raw = rec.subarray(33, 33 + nlen);
			const isDot = raw.length === 1 && (raw[0] === 0 || raw[0] === 1);
			if (!isDot) {
				const name = raw.toString('ascii').split(';')[0];
				if (flags & 2) this.walk(clba, csize, prefix + name + '/', out);
				else out.set(prefix + name, { lba: clba, size: csize });
			}
			i += len;
		}
		return out;
	}
	catalogue() {
		const root = this.sector(16).subarray(156, 190);
		return this.walk(root.readUInt32LE(2), root.readUInt32LE(10), '', new Map());
	}
	close() {
		fs.closeSync(this.fd);
	}
}

// ---------------------------------------------------------------------------
// PNG writer (grayscale, 8 bit)
// ---------------------------------------------------------------------------

const CRC = (() => {
	const t = new Uint32Array(256);
	for (let n = 0; n < 256; n++) {
		let c = n;
		for (let k = 0; k < 8; k++) c = c & 1 ? 0xedb88320 ^ (c >>> 1) : c >>> 1;
		t[n] = c >>> 0;
	}
	return (buf) => {
		let c = 0xffffffff;
		for (const x of buf) c = t[(c ^ x) & 255] ^ (c >>> 8);
		return (c ^ 0xffffffff) >>> 0;
	};
})();

function chunk(type, data) {
	const len = Buffer.alloc(4);
	len.writeUInt32BE(data.length);
	const tb = Buffer.from(type, 'ascii');
	const crc = Buffer.alloc(4);
	crc.writeUInt32BE(CRC(Buffer.concat([tb, data])));
	return Buffer.concat([len, tb, data, crc]);
}

function writePNG(file, w, h, gray) {
	const raw = Buffer.alloc((w + 1) * h);
	for (let y = 0; y < h; y++) {
		raw[y * (w + 1)] = 0;
		gray.copy(raw, y * (w + 1) + 1, y * w, (y + 1) * w);
	}
	const ihdr = Buffer.alloc(13);
	ihdr.writeUInt32BE(w, 0);
	ihdr.writeUInt32BE(h, 4);
	ihdr[8] = 8; // bit depth
	ihdr[9] = 0; // grayscale
	fs.writeFileSync(
		file,
		Buffer.concat([
			Buffer.from([137, 80, 78, 71, 13, 10, 26, 10]),
			chunk('IHDR', ihdr),
			chunk('IDAT', zlib.deflateSync(raw)),
			chunk('IEND', Buffer.alloc(0)),
		])
	);
}

// ---------------------------------------------------------------------------
// WAV writer (8-bit unsigned mono, which is how .SND payloads look)
// ---------------------------------------------------------------------------

function writeWAV(file, samples, rate) {
	const data = Buffer.from(samples);
	const hdr = Buffer.alloc(44);
	hdr.write('RIFF', 0, 'ascii');
	hdr.writeUInt32LE(36 + data.length, 4);
	hdr.write('WAVE', 8, 'ascii');
	hdr.write('fmt ', 12, 'ascii');
	hdr.writeUInt32LE(16, 16);
	hdr.writeUInt16LE(1, 20); // PCM
	hdr.writeUInt16LE(1, 22); // mono
	hdr.writeUInt32LE(rate, 24);
	hdr.writeUInt32LE(rate, 28);
	hdr.writeUInt16LE(1, 32);
	hdr.writeUInt16LE(8, 34);
	hdr.write('data', 36, 'ascii');
	hdr.writeUInt32LE(data.length, 40);
	fs.writeFileSync(file, Buffer.concat([hdr, data]));
}

// ---------------------------------------------------------------------------
// .SND
// ---------------------------------------------------------------------------
// Layout verified against all 15 files on this disc. Every one satisfies
//   filesize == 32 + u32@12
// exactly, so the payload is the tail of the file with no trailer:
//
//   0  char[8]  name, NUL padded
//   8  u32      flag, 1 for most files, junk in FIRE and WHAT
//  12  u32      payload length (authoritative)
//  16  u32      payload length - 1 for BUMP/FIRE/WHAT, 0 otherwise
//  20  u32      same as 12 for BUMP/FIRE/WHAT, 0 otherwise
//  24  u32      nominal sample rate, unreliable
//  28  u16      always 60
//  30  u16      always 0
//  32  bytes    payload, runs to EOF
//
// Field 24 reads 1960 Hz for 13 of 15 files. BUMP and FIRE contain garbage
// (2426302, 4292870291), WHAT reads 1568. The payloads are 8-bit sampled data
// at a playback rate the EUPHONY driver chooses, so 1960 Hz is written to the
// WAV header as the best-supported value and the raw rate field is reported so
// the mismatch stays visible instead of being silently trusted.
const SND_HDR = 32;
const SND_RATE_DEFAULT = 1960;

function decodeSND(buf) {
	if (buf.length <= SND_HDR) return null;
	const declared = buf.readUInt32LE(12);
	const payload = buf.subarray(SND_HDR);
	let rate = buf.readUInt32LE(24);
	let rateSrc = 'field24';
	if (!Number.isFinite(rate) || rate < 1000 || rate > 200000) {
		rate = SND_RATE_DEFAULT;
		rateSrc = 'fallback-implausible-field';
	}
	return { rate, rateSrc, payload, declared, exact: declared === payload.length };
}

// ---------------------------------------------------------------------------
// Graphics
// ---------------------------------------------------------------------------

// Layouts found on this disc, in the order they are tried. Each is validated
// by exact body size, because the TIFF headers are not trustworthy.
//
//  packed4     2 pixels per byte, high nibble leftmost. body = W*H/2
//  planar4     4 bitplanes of W*H/8. body = W*H/2 as well, different order
//  bytePixel   1 pixel per byte, high nibble only (maps and sprite sheets)

function validPack(body, w, h) {
	return body.length === (w * h) / 2;
}

function decodePacked4(body, w, h) {
	const px = Buffer.alloc(w * h);
	for (let i = 0; i < (w * h) / 2 && i < body.length; i++) {
		px[i * 2] = ((body[i] >> 4) & 0x0f) * 17;
		px[i * 2 + 1] = (body[i] & 0x0f) * 17;
	}
	return px;
}

function decodePlanar4(body, w, h) {
	const plane = (w * h) / 8;
	const px = Buffer.alloc(w * h);
	for (let i = 0; i < w * h; i++) {
		const byteIdx = i >> 3;
		const bit = 7 - (i & 7);
		let v = 0;
		for (let p = 0; p < 4; p++) {
			const off = p * plane + byteIdx;
			if (off < body.length) v |= ((body[off] >> bit) & 1) << p;
		}
		px[i] = v * 17;
	}
	return px;
}

function decodeBytePerPixel(buf, w, h, invert) {
	const px = Buffer.alloc(w * h);
	for (let i = 0; i < w * h && i < buf.length; i++) {
		const v = (buf[i] >> 4) & 0x0f;
		px[i] = (invert ? 15 - v : v) * 17;
	}
	return px;
}

// A packed or planar decode of a bitmap has a skewed value distribution (lots
// of background, a few bright tones). A wrong decode spreads values out.
// Ratio of pixels in the two highest buckets, used only to pick between them.
function edgeiness(px) {
	let hi = 0;
	for (const v of px) if (v >= 0x77) hi++;
	return hi / px.length;
}

// 16bpp RGB555, little endian, packed two planes per pixel.
function decode16bpp(buf, w, h, planar) {
	const rgb = Buffer.alloc(w * h * 3);
	for (let i = 0; i < w * h; i++) {
		const raw = planar ? buf[i] | (buf[w * h + i] << 8) : buf[i * 2] | (buf[i * 2 + 1] << 8);
		rgb[i * 3] = ((raw >> 10) & 0x1f) << 3;
		rgb[i * 3 + 1] = ((raw >> 5) & 0x1f) << 3;
		rgb[i * 3 + 2] = (raw & 0x1f) << 3;
	}
	return rgb;
}

function parseTIFF(buf) {
	if (buf.length < 10 || buf[0] !== 0x49 || buf[1] !== 0x49) return null;
	const n = buf.readUInt16LE(8);
	const tags = {};
	for (let i = 0; i < n && 10 + i * 12 + 12 <= buf.length; i++) {
		const o = 10 + i * 12;
		const tag = buf.readUInt16LE(o);
		const type = buf.readUInt16LE(o + 2);
		const val = type === 3 ? buf.readUInt16LE(o + 8) : buf.readUInt32LE(o + 8);
		tags[tag] = val;
	}
	return { width: tags[256], height: tags[257], bits: tags[258], comp: tags[259], strip: tags[273] };
}

// The 4bpp art on this disc declares twice its real height, and only the high
// nibble of each byte is a pixel (1 byte per pixel). So the usable image is
// body.length rows of width `w`, and the declared height is padding. Trim to
// the last row that actually contains ink.
function trimRows(px, w, h) {
	let last = -1;
	for (let y = 0; y < h; y++) {
		for (let x = 0; x < w; x++) {
			if (px[y * w + x] !== 0) {
				last = y;
				break;
			}
		}
	}
	return last + 1;
}

// ---------------------------------------------------------------------------
// main
// ---------------------------------------------------------------------------

const args = process.argv.slice(2);
function arg(flag, dflt) {
	const i = args.indexOf(flag);
	return i >= 0 && args[i + 1] ? args[i + 1] : dflt;
}

const here = __dirname;
const discPath = arg('--disc', path.join(here, 'Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).img'));
const outRoot = arg('--out', path.join(here, 'extracted'));
const out = {
	map: path.join(outRoot, 'u2', 'map'),
	sprites: path.join(outRoot, 'u2', 'sprites'),
	title: path.join(outRoot, 'u2', 'title'),
	sfx: path.join(outRoot, 'u2', 'sfx'),
};
for (const d of Object.values(out)) fs.mkdirSync(d, { recursive: true });

if (!fs.existsSync(discPath)) {
	console.error('disc image not found: ' + discPath);
	process.exit(1);
}

const disc = new Disc(discPath);
const cat = disc.catalogue();
const notes = [];
const note = (s) => {
	notes.push(s);
	console.log(s);
};

// Ground truth: the exact files ENCHANT.EXP opens, taken from its embedded
// path strings. Anything not on this list is not used by Ultima II.
const MAPS = ['MAP2_1', 'MAP2_2', 'MAP2_3'];
const SPRITES = ['PLAYER', 'ENEMY2', 'EXTRA', 'CHEST', 'DUNG1', 'DUNG2'];
const TITLES = [
	'HEADTTL',
	'U2TITLE1', 'U2TITLE2', 'U2TITLE3', 'U2TITLE4',
	'U2END1', 'U2END2', 'U2END3', 'U2END4', 'U2END5',
	'GAI', 'DUNMON1', 'DUNMON2', 'DUNMON3',
];
const SFX = [
	'BUMP', 'FIRE', 'WHAT', 'MAGIC3', 'BUL1', 'MAGIC4', 'KATANA1', 'MONSTER1',
	'BOMB5', 'DOOR3', 'BOMB4', 'UZUMAKI1', 'MAGIC2', 'BOMB2',
];

const MAP_W = 320;
const MAP_H = 104;

function get(name) {
	const e = cat.get('GRAPH/' + name + '.TIF');
	if (!e) return null;
	return disc.read(e.lba, e.size);
}

note('disc: ' + path.basename(discPath));

// --- maps -----------------------------------------------------------------
note('');
note('== maps ==');
for (const m of MAPS) {
	const buf = get(m);
	if (!buf) {
		note(m.padEnd(10) + ' MISSING');
		continue;
	}
	const tiff = parseTIFF(buf);
	// 33280 = 320x104 bytes. The declared TIFF geometry is not usable here.
	if (buf.length !== MAP_W * MAP_H) {
		note(m.padEnd(10) + ' unexpected size ' + buf.length);
		continue;
	}
	for (const invert of [false, true]) {
		const px = decodeBytePerPixel(buf, MAP_W, MAP_H, invert);
		const file = path.join(out.map, m.toLowerCase() + (invert ? '_inv' : '') + '.png');
		writePNG(file, MAP_W, MAP_H, px);
	}
	note(
		m.padEnd(10) +
			' -> ' + MAP_W + 'x' + MAP_H + ' 4bpp (hi-nibble, 1 px/byte)' +
			'  tiffHeader=' + (tiff ? 'yes ' + tiff.width + 'x' + tiff.height : 'no')
	);
}

// --- sprites and title art ------------------------------------------------
function dump(name, dir) {
	const buf = get(name);
	if (!buf) {
		note(name.padEnd(10) + ' MISSING');
		return;
	}
	const tiff = parseTIFF(buf);
	// The game reads these as 320x104 4bpp sheets regardless of the TIFF header.
	if (buf.length === MAP_W * MAP_H) {
		const px = decodeBytePerPixel(buf, MAP_W, MAP_H, false);
		writePNG(path.join(dir, name.toLowerCase() + '.png'), MAP_W, MAP_H, px);
		note(
			name.padEnd(10) + ' -> 320x104 4bpp' +
				(tiff ? '  (TIFF claims ' + tiff.width + 'x' + tiff.height + ' ' + tiff.bits + 'bpp, ignored)' : '  (no TIFF header)')
		);
		return;
	}
	if (tiff && tiff.width && tiff.height && buf.length >= tiff.strip) {
		const body = buf.subarray(tiff.strip);
		if (tiff.bits === 4) {
			if (validPack(body, tiff.width, tiff.height)) {
				const packed = decodePacked4(body, tiff.width, tiff.height);
				const planar = decodePlanar4(body, tiff.width, tiff.height);
				// All 4bpp art on this disc is packed. Planar is kept as a
				// separate file so the choice stays inspectable rather than
				// silently baked in.
				writePNG(path.join(dir, name.toLowerCase() + '.png'), tiff.width, tiff.height, packed);
				writePNG(
					path.join(dir, name.toLowerCase() + '_planar.png'),
					tiff.width,
					tiff.height,
					planar
				);
				note(
					name.padEnd(10) + ' -> ' + tiff.width + 'x' + tiff.height + ' 4bpp packed' +
						'  (+ _planar.png as alternate decode)'
				);
				return;
			}
			const realH = Math.min(tiff.height, Math.floor(body.length / tiff.width));
			const px = decodeBytePerPixel(body, tiff.width, realH, false);
			const ink = trimRows(px, tiff.width, realH);
			const finalH = ink > 0 ? ink : realH;
			writePNG(path.join(dir, name.toLowerCase() + '.png'), tiff.width, finalH, px.subarray(0, tiff.width * finalH));
			note(
				name.padEnd(10) + ' -> ' + tiff.width + 'x' + finalH + ' 4bpp byte-per-pixel' +
					'  [body ' + body.length + ' vs packed ' + (tiff.width * tiff.height) / 2 + ']'
			);
			return;
		}
		if (tiff.bits === 16) {
			const rgb = decode16bpp(body, tiff.width, tiff.height, true);
			const g = Buffer.alloc(tiff.width * tiff.height);
			for (let i = 0; i < g.length; i++) g[i] = rgb[i * 3 + 1];
			writePNG(path.join(dir, name.toLowerCase() + '.png'), tiff.width, tiff.height, g);
			note(name.padEnd(10) + ' -> ' + tiff.width + 'x' + tiff.height + ' 16bpp (red channel only)');
			return;
		}
	}
	note(name.padEnd(10) + ' SKIPPED  size=' + buf.length + ' tiff=' + JSON.stringify(tiff));
}

note('');
note('== sprites ==');
for (const s of SPRITES) dump(s, out.sprites);

note('');
note('== title and ending art ==');
for (const t of TITLES) dump(t, out.title);

// --- sound effects --------------------------------------------------------
note('');
note('== sound effects ==');
for (const s of SFX) {
	const e = cat.get('SOUND/' + s + '.SND');
	if (!e) {
		note(s.padEnd(10) + ' MISSING');
		continue;
	}
	const buf = disc.read(e.lba, e.size);
	const d = decodeSND(buf);
	if (!d) {
		note(s.padEnd(10) + ' could not parse');
		continue;
	}
	writeWAV(path.join(out.sfx, s.toLowerCase() + '.wav'), d.payload, d.rate);
	note(
		s.padEnd(10) + ' -> ' + String(d.payload.length).padStart(6) + ' bytes @ ' + d.rate + ' Hz' +
			(d.exact ? '' : '  [LENGTH MISMATCH]') +
			(d.rateSrc === 'field24' ? '' : '  [rate field implausible, ' + buf.readUInt32LE(24) + ', using default]')
	);
}

// --- what U2 does not use -------------------------------------------------
note('');
note('== notes ==');
note('ENCHANT.EXP also references Q:\\SOUND\\ULTIMA.FMB (FM instrument bank),');
note('the .EUP files (EUPHONY driver preset tables, not audio), and');
note('A:\\ROSTER1.UT2 / WORLD1-4.UT2 save files, which live on the UserDisk');
note('floppy and do not exist until you create a character in-game.');

// --- manifest -------------------------------------------------------------
const man = path.join(outRoot, 'u2', 'manifest.txt');
fs.writeFileSync(man, notes.join('\n') + '\n');
disc.close();
console.log('\nwrote ' + man);
