// tools/addfile-fat12.js - add a file to an FM Towns 2HD FAT12 floppy image.
//
// FM Towns 2HD geometry, confirmed from FDIMG.BIN's BPB:
//   1024 bytes/sector, 1 sector/cluster, 1 reserved, 2 FATs of 2 sectors,
//   192 root entries, 1232 total sectors.
//
// Usage: node tools/addfile-fat12.js <in.img> <file> <out.img> [NAME.EXT]
'use strict';
const fs = require('fs');

const [, , inPath, filePath, outPath, nameArg] = process.argv;
if (!inPath || !filePath || !outPath) {
	console.error('usage: node tools/addfile-fat12.js <in.img> <file> <out.img> [NAME.EXT]');
	process.exit(1);
}

const img = Buffer.from(fs.readFileSync(inPath));
const add = fs.readFileSync(filePath);

// --- BPB ---
const SS = 1024;
const SPC = img[0x0d];
const RSVD = img.readUInt16LE(0x0e);
const NFAT = img[0x10];
const ROOTENT = img.readUInt16LE(0x11);
const TOTAL = img.readUInt16LE(0x13) || img.readUInt32LE(0x20);
const SPF = img.readUInt16LE(0x16);

const rootStart = (RSVD + NFAT * SPF) * SS;
const rootSize = ROOTENT * 32;
const rootSectors = Math.ceil(rootSize / SS);
const dataStart = (RSVD + NFAT * SPF + rootSectors) * SS;
const dataSectors = TOTAL - (RSVD + NFAT * SPF + rootSectors);
const nClusters = Math.floor(dataSectors / SPC);
const CS = SS * SPC;

console.log('geometry: ss=%d spc=%d rsvd=%d nfat=%d rootent=%d total=%d spf=%d',
	SS, SPC, RSVD, NFAT, ROOTENT, TOTAL, SPF);
console.log('rootStart=0x%s dataStart=0x%s clusters=%d clusterSize=%d',
	rootStart.toString(16), dataStart.toString(16), nClusters, CS);

// --- FAT12 access ---
const fat1 = RSVD * SS;
function fatGet(n) {
	const o = fat1 + ((n * 3) >> 1);
	const v = img.readUInt16LE(o);
	return (n & 1) ? v >> 4 : v & 0xfff;
}
function fatSet(n, val) {
	const o = fat1 + ((n * 3) >> 1);
	const v = img.readUInt16LE(o);
	img.writeUInt16LE((n & 1) ? (v & 0x000f) | (val << 4) : (v & 0xf000) | (val & 0xfff), o);
}

// --- find a free root slot ---
let slot = -1;
for (let i = 0; i < ROOTENT; i++) {
	const o = rootStart + i * 32;
	if (img[o] === 0x00 || img[o] === 0xe5) { slot = o; break; }
}
if (slot < 0) { console.error('no free root dir entry'); process.exit(1); }
console.log('free root slot at 0x%s (entry %d)', slot.toString(16), (slot - rootStart) / 32);

// --- allocate clusters ---
const need = Math.ceil(add.length / CS);
const chain = [];
for (let c = 2; c < nClusters + 2 && chain.length < need; c++) {
	if (fatGet(c) === 0) chain.push(c);
}
if (chain.length < need) { console.error('not enough free space: need %d got %d', need, chain.length); process.exit(1); }
console.log('allocated %d clusters: %s .. %s', chain.length, chain[0], chain[chain.length - 1]);

// --- write data ---
chain.forEach((c, i) => {
	const off = dataStart + (c - 2) * CS;
	add.copy(img, off, i * CS, Math.min((i + 1) * CS, add.length));
});

// --- link FAT and mirror ---
chain.forEach((c, i) => fatSet(c, i === chain.length - 1 ? 0xfff : chain[i + 1]));
for (let f = 1; f < NFAT; f++) {
	img.copy(img, (RSVD + f * SPF) * SS, fat1, fat1 + SPF * SS);
}

// --- directory entry ---
let base, ext;
if (nameArg) {
	const m = nameArg.match(/^([^.]{1,8})(?:\.(.{1,3}))?$/);
	if (!m) { console.error('bad name: ' + nameArg); process.exit(1); }
	base = m[1].toUpperCase().padEnd(8);
	ext = (m[2] || '').toUpperCase().padEnd(3);
} else {
	base = 'FORMAT  ';
	ext = 'EXE';
}
const e = Buffer.alloc(32, 0);
e.write(base, 0, 'ascii');
e.write(ext, 8, 'ascii');
e[11] = 0x20;
e.writeUInt16LE(0, 22);
e.writeUInt16LE(0x21, 24);
e.writeUInt16LE(chain[0], 26);
e.writeUInt32LE(add.length, 28);
e.copy(img, slot);

fs.writeFileSync(outPath, img);
console.log('wrote %s as %s.%s (%d bytes)', outPath, base.trim(), ext.trim(), add.length);
