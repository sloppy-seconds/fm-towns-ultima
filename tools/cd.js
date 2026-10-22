// tools/cd.js - shared helpers: FM Towns CD image reader, ISO9660 walk,
// PNG and WAV writers. No dependencies.
'use strict';

const fs = require('fs');
const path = require('path');
const zlib = require('zlib');

const SECTOR = 2352;
const USER = 2048;

// ---------------------------------------------------------------------------
// Disc
// ---------------------------------------------------------------------------

class Disc {
	constructor(file) {
		this.file = file;
		this.fd = fs.openSync(file, 'r');
	}
	sector(n) {
		const b = Buffer.alloc(SECTOR);
		fs.readSync(this.fd, b, 0, SECTOR, n * SECTOR);
		return b.subarray(16, 16 + USER);
	}
	read(lba, size) {
		if (size === 0) return Buffer.alloc(0);
		const parts = [];
		let got = 0;
		let p = lba;
		while (got < size) {
			parts.push(this.sector(p++));
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
	get(cat, name) {
		const e = cat.get(name);
		return e ? this.read(e.lba, e.size) : null;
	}
	close() {
		fs.closeSync(this.fd);
	}
}

// Convenience: find the disc .img next to a project root.
function defaultDisc(root) {
	const dir = root || path.join(__dirname, '..');
	const f = fs.readdirSync(dir).find((x) => x.endsWith('.img'));
	return f ? path.join(dir, f) : null;
}

// ---------------------------------------------------------------------------
// PNG (8-bit greyscale)
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
	const stride = w + 1;
	const raw = Buffer.alloc(stride * h);
	for (let y = 0; y < h; y++) {
		raw[y * stride] = 0;
		gray.copy(raw, y * stride + 1, y * w, Math.min((y + 1) * w, gray.length));
	}
	const ihdr = Buffer.alloc(13);
	ihdr.writeUInt32BE(w, 0);
	ihdr.writeUInt32BE(h, 4);
	ihdr[8] = 8;
	ihdr[9] = 0;
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
// WAV (8-bit unsigned mono)
// ---------------------------------------------------------------------------

function writeWAV(file, samples, rate) {
	const data = Buffer.from(samples);
	const hdr = Buffer.alloc(44);
	hdr.write('RIFF', 0, 'ascii');
	hdr.writeUInt32LE(36 + data.length, 4);
	hdr.write('WAVE', 8, 'ascii');
	hdr.write('fmt ', 12, 'ascii');
	hdr.writeUInt32LE(16, 16);
	hdr.writeUInt16LE(1, 20);
	hdr.writeUInt16LE(1, 22);
	hdr.writeUInt32LE(rate, 24);
	hdr.writeUInt32LE(rate, 28);
	hdr.writeUInt16LE(1, 32);
	hdr.writeUInt16LE(8, 34);
	hdr.write('data', 36, 'ascii');
	hdr.writeUInt32LE(data.length, 40);
	fs.writeFileSync(file, Buffer.concat([hdr, data]));
}

// ---------------------------------------------------------------------------
// Decoders
// ---------------------------------------------------------------------------

// One pixel per byte, high nibble only. Used by 320x104 map/sheet files.
function decodeBytePerPixel(buf, w, h, invert) {
	const px = Buffer.alloc(w * h);
	for (let i = 0; i < w * h && i < buf.length; i++) {
		const v = (buf[i] >> 4) & 0x0f;
		px[i] = (invert ? 15 - v : v) * 17;
	}
	return px;
}

// 4bpp packed: 2 pixels per byte, high nibble leftmost.
function decodePacked4(body, w, h) {
	const px = Buffer.alloc(w * h);
	for (let i = 0; i < (w * h) / 2 && i < body.length; i++) {
		px[i * 2] = ((body[i] >> 4) & 0x0f) * 17;
		px[i * 2 + 1] = (body[i] & 0x0f) * 17;
	}
	return px;
}

// 4bpp planar: 4 planes of w*h/8, MSB first, plane p supplies bit p.
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

// TIFF directory (little-endian only). Tags on this disc are unreliable for
// geometry, so treat the result as a hint, not a contract.
function parseTIFF(buf) {
	if (buf.length < 10 || buf[0] !== 0x49 || buf[1] !== 0x49) return null;
	const n = buf.readUInt16LE(8);
	const tags = {};
	for (let i = 0; i < n && 10 + i * 12 + 12 <= buf.length; i++) {
		const o = 10 + i * 12;
		const tag = buf.readUInt16LE(o);
		const type = buf.readUInt16LE(o + 2);
		tags[tag] = type === 3 ? buf.readUInt16LE(o + 8) : buf.readUInt32LE(o + 8);
	}
	return {
		width: tags[256],
		height: tags[257],
		bits: tags[258],
		comp: tags[259],
		strip: tags[273],
	};
}

// .SND: 32-byte header, then payload to EOF. See FINDINGS.md section 7.1.
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
		rateSrc = 'fallback';
	}
	return { rate, rateSrc, payload, declared, exact: declared === payload.length };
}

module.exports = {
	Disc,
	defaultDisc,
	writePNG,
	writeWAV,
	decodeBytePerPixel,
	decodePacked4,
	decodePlanar4,
	parseTIFF,
	decodeSND,
	SND_HDR,
};
