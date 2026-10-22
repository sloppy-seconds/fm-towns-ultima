// tools/tilesheet.js - render a tile bank as a labelled PNG grid.
//
// The sprite files on this disc are banks of fixed-size tiles, not single
// images (see FINDINGS.md 5.4). This lays them out with gutters so individual
// frames can be inspected by eye.
//
// Usage:
//   node tools/tilesheet.js --file ENEMY2.TIF --tw 32 --th 32 --packed4
//   node tools/tilesheet.js --file PLAYER.TIF --tw 16 --th 16 --bytepx
//
// --packed4  2 pixels per byte, high nibble leftmost
// --bytepx   1 pixel per byte, high nibble only
// --cols N   columns in the output grid (default 8)

'use strict';

const fs = require('fs');
const path = require('path');
const { Disc, defaultDisc, writePNG } = require('./cd');

const args = process.argv.slice(2);
function arg(flag, dflt) {
	const i = args.indexOf(flag);
	return i >= 0 && args[i + 1] ? args[i + 1] : dflt;
}
const has = (f) => args.includes(f);

const FILE = arg('--file', 'ENEMY2.TIF');
const TW = Number(arg('--tw', 32));
const TH = Number(arg('--th', 32));
const COLS = Number(arg('--cols', 8));
const PACKED4 = has('--packed4');
const BYTEPX = has('--bytepx');
const GUT = 1;
const MARK = 40; // gutter grey, distinguishable from black background

if (!PACKED4 && !BYTEPX) {
	console.error('need --packed4 or --bytepx');
	process.exit(1);
}

const discPath = defaultDisc(path.join(__dirname, '..'));
const disc = new Disc(discPath);
const cat = disc.catalogue();

const entry = cat.get('GRAPH/' + FILE) || cat.get(FILE);
if (!entry) {
	console.error('not found in catalogue: ' + FILE);
	process.exit(1);
}
const buf = disc.read(entry.lba, entry.size);

// Skip a TIFF header if one is present, using the strip offset when valid.
let body = buf;
let bodyOff = 0;
if (buf[0] === 0x49 && buf[1] === 0x49) {
	const n = buf.readUInt16LE(8);
	for (let i = 0; i < n && 10 + i * 12 + 12 <= buf.length; i++) {
		const o = 10 + i * 12;
		if (buf.readUInt16LE(o) === 273) {
			const strip = buf.readUInt32LE(o + 8);
			if (strip > 0 && strip < buf.length) {
				body = buf.subarray(strip);
				bodyOff = strip;
			}
		}
	}
}

const bytesPerTile = PACKED4 ? (TW * TH) / 2 : TW * TH;
const nTiles = Math.floor(body.length / bytesPerTile);
const rows = Math.ceil(nTiles / COLS);
const W = COLS * (TW + GUT) + GUT;
const H = rows * (TH + GUT) + GUT;
const sheet = Buffer.alloc(W * H);

// gutters
for (let t = 0; t < nTiles; t++) {
	const cx = (t % COLS) * (TW + GUT);
	const cy = Math.floor(t / COLS) * (TH + GUT);
	for (let x = 0; x <= TW; x++) {
		sheet[cy * W + cx + x] = MARK;
		sheet[(cy + TH) * W + cx + x] = MARK;
	}
	for (let y = 0; y <= TH; y++) {
		sheet[(cy + y) * W + cx] = MARK;
		sheet[(cy + y) * W + cx + TW] = MARK;
	}
}

// pixels
for (let t = 0; t < nTiles; t++) {
	const cx = (t % COLS) * (TW + GUT) + GUT;
	const cy = Math.floor(t / COLS) * (TH + GUT) + GUT;
	const base = t * bytesPerTile;
	if (PACKED4) {
		for (let i = 0; i < bytesPerTile; i++) {
			const b = body[base + i];
			const p = i * 2;
			const px = p % TW;
			const py = Math.floor(p / TW);
			if (py >= TH) break;
			sheet[(cy + py) * W + cx + px] = ((b >> 4) & 0x0f) * 17;
			if (px + 1 < TW) sheet[(cy + py) * W + cx + px + 1] = (b & 0x0f) * 17;
		}
	} else {
		for (let i = 0; i < bytesPerTile; i++) {
			const px = i % TW;
			const py = Math.floor(i / TW);
			sheet[(cy + py) * W + cx + px] = ((body[base + i] >> 4) & 0x0f) * 17;
		}
	}
}

const outDir = path.join(__dirname, '..', 'extracted', 'tiles');
fs.mkdirSync(outDir, { recursive: true });
const outName = path.basename(FILE, path.extname(FILE)).toLowerCase() + '_tiles.png';
const outFile = path.join(outDir, outName);
writePNG(outFile, W, H, sheet);

// count non-empty tiles
let nonEmpty = 0;
for (let t = 0; t < nTiles; t++) {
	let lit = 0;
	const base = t * bytesPerTile;
	for (let i = 0; i < bytesPerTile; i++) if (body[base + i]) lit++;
	if (lit > 8) nonEmpty++;
}

console.log('file      : ' + FILE + ' (' + entry.size + ' bytes, body from 0x' + bodyOff.toString(16) + ')');
console.log('tile      : ' + TW + 'x' + TH + ' ' + (PACKED4 ? 'packed4' : 'byte-per-pixel') + ', ' + bytesPerTile + ' B');
console.log('tiles     : ' + nTiles + ' (' + nonEmpty + ' non-empty)');
console.log('grid      : ' + COLS + ' cols x ' + rows + ' rows, ' + W + 'x' + H + ' px');
console.log('wrote     : ' + outFile);

disc.close();
