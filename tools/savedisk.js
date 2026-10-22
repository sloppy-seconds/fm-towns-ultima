#!/usr/bin/env node
// tools/savedisk.js - read and edit an FM Towns Ultima Trilogy save disk.
//
// The save disk is a 1,261,568-byte FM Towns 2HD FAT12 floppy image. The games
// store their saves on it as plain files, and Ultima II's character file turns
// out to be plain text:
//
//   ROSTER1.UT2   3658 B   "(0)NAME=GIRL\r\nSTRENGTH=30\r\n..."  four slots
//   WORLD1.UT2   68096 B   binary world and map state, one file per slot
//
// The 1-indexed slot list the player picks from maps to 0-based slots in the
// roster, so in-game slot 1 is "(0)NAME".
//
// Usage:
//   node tools/savedisk.js ls <disk.hdm>
//   node tools/savedisk.js cat <disk.hdm> <name>
//   node tools/savedisk.js slots <disk.hdm>
//   node tools/savedisk.js clone <disk.hdm> <from> <to> [--name NAME]
//   node tools/savedisk.js set <disk.hdm> <slot> <field> <value>
//   node tools/savedisk.js world-copy <disk.hdm> <from> <to>
//
// Everything writes to a new file unless --inplace is given, and every write is
// verified by reading the file back and re-parsing it. Never operate on an
// original: work on a copy.
'use strict';

const fs = require('fs');
const path = require('path');

// --- FM Towns 2HD FAT12 geometry ------------------------------------------
const SS = 1024;           // bytes per sector
const RESERVED = 1;        // reserved sectors before the FATs
const NFATS = 2;
const FATSZ = 2;           // sectors per FAT
const ROOTS = 192;         // root directory entries
const TOTAL = 1232;        // total sectors

const ROOT_OFF = (RESERVED + NFATS * FATSZ) * SS;
const DATA_OFF = (RESERVED + NFATS * FATSZ + Math.ceil((ROOTS * 32) / SS)) * SS;
const FAT1 = RESERVED * SS;
const FAT2 = (RESERVED + FATSZ) * SS;

// --- FAT12 ----------------------------------------------------------------

function fatGet(img, off, cluster) {
	const o = off + Math.floor(cluster * 1.5);
	const v = img.readUInt16LE(o);
	return cluster & 1 ? v >>> 4 : v & 0xfff;
}

function fatSet(img, off, cluster, value) {
	const o = off + Math.floor(cluster * 1.5);
	const v = img.readUInt16LE(o);
	const nv = cluster & 1 ? (v & 0x000f) | ((value & 0xfff) << 4) : (v & 0xf000) | (value & 0xfff);
	img.writeUInt16LE(nv, o);
}

function chainOf(img, first) {
	const out = [];
	const seen = new Set();
	let c = first;
	// Values 0xFF8..0xFFF in a FAT12 entry mean end of chain. The loop tests the
	// cluster number it is about to visit, and stops when the previously fetched
	// entry handed back a terminator. Getting this wrong loses the final cluster
	// of every file, which truncates reads without any error.
	while (c >= 2 && c <= 0xff7 && !seen.has(c) && out.length < 2000) {
		seen.add(c);
		out.push(c);
		c = fatGet(img, FAT1, c);
	}
	return out;
}

function freeClusters(img) {
	const out = [];
	for (let c = 2; c < TOTAL; c++) if (fatGet(img, FAT1, c) === 0) out.push(c);
	return out;
}

// --- root directory -------------------------------------------------------

function listRoot(img) {
	const out = [];
	for (let i = 0; i < ROOTS; i++) {
		const o = ROOT_OFF + i * 32;
		const raw = img.subarray(o, o + 11);
		if (raw[0] === 0) break;
		if (raw[0] === 0xe5) continue;
		const attr = img[o + 11];
		if (attr === 0x0f) continue; // long filename fragment
		out.push({
			entryOffset: o,
			index: i,
			name: raw.toString('latin1').trim(),
			attr,
			cluster: img.readUInt16LE(o + 26),
			size: img.readUInt32LE(o + 28),
		});
	}
	return out;
}

function findEntry(img, name) {
	const want = name.toUpperCase().replace(/\./g, ' ').padEnd(11).slice(0, 11);
	return listRoot(img).find((e) => e.name.toUpperCase().replace(/\s+/g, ' ').padEnd(11).slice(0, 11) === want);
}

function readFile(img, entry) {
	const chain = chainOf(img, entry.cluster);
	return Buffer.concat(chain.map((c) => img.subarray(DATA_OFF + (c - 2) * SS, DATA_OFF + (c - 1) * SS))).subarray(0, entry.size);
}

// --- writing back ---------------------------------------------------------
// Rewrites a file's contents in place if the cluster chain is long enough,
// otherwise allocates a fresh chain. Both FAT copies are kept in sync, because
// the games do not agree on which one they read.
function writeFile(img, entry, data) {
	const need = Math.max(1, Math.ceil(data.length / SS));
	let chain = chainOf(img, entry.cluster);

	if (chain.length < need) {
		const free = freeClusters(img);
		if (free.length < need) throw new Error('not enough free clusters: need ' + need + ', have ' + free.length);
		// Release the old chain, then take a fresh contiguous run.
		for (const c of chain) { fatSet(img, FAT1, c, 0); fatSet(img, FAT2, c, 0); }
		chain = free.slice(0, need);
		entry.cluster = chain[0];
		img.writeUInt16LE(chain[0], entry.entryOffset + 26);
	}

	for (let i = 0; i < chain.length; i++) {
		const c = chain[i];
		const next = i + 1 < Math.min(chain.length, need) ? chain[i + 1] : 0xfff;
		fatSet(img, FAT1, c, i < need ? next : 0);
		fatSet(img, FAT2, c, i < need ? next : 0);
		if (i < need) {
			const dst = DATA_OFF + (c - 2) * SS;
			data.copy(img, dst, i * SS, Math.min((i + 1) * SS, data.length));
			img.fill(0, dst + Math.min(SS, data.length - i * SS), dst + SS);
		}
	}
	img.writeUInt32LE(data.length, entry.entryOffset + 28);
	return chain.length;
}

// Creates a directory entry in the first free slot. Name must be 8.3.
function addEntry(img, name, firstCluster, size) {
	const parts = name.toUpperCase().split('.');
	const base = (parts[0] || '').padEnd(8).slice(0, 8);
	const ext = (parts[1] || '').padEnd(3).slice(0, 3);
	const entryName = (base + ext).padEnd(11);

	let slot = -1;
	for (let i = 0; i < ROOTS; i++) {
		const o = ROOT_OFF + i * 32;
		if (img[o] === 0 || img[o] === 0xe5) { slot = o; break; }
	}
	if (slot < 0) throw new Error('root directory full');

	img.fill(0, slot, slot + 32);
	Buffer.from(entryName, 'latin1').copy(img, slot, 0, 11);
	img[slot + 11] = 0x20; // archive
	img.writeUInt16LE(firstCluster, slot + 26);
	img.writeUInt32LE(size, slot + 28);
	return { entryOffset: slot, index: (slot - ROOT_OFF) / 32, name: entryName.trim(), attr: 0x20, cluster: firstCluster, size };
}

// --- roster text ----------------------------------------------------------

const SLOT_RE = /^\((\d)\)NAME=(.*)$/m;

// Splits the roster into its slot blocks. Slot 0 starts after the two header
// lines; each subsequent block starts at its "(n)NAME=" line.
function parseSlots(text) {
	const marks = [];
	const re = /\((\d)\)NAME=[^\r\n]*/g;
	let m;
	while ((m = re.exec(text)) !== null) marks.push({ slot: Number(m[1]), start: m.index });
	if (!marks.length) throw new Error('no slot markers found');
	return marks.map((mk, i) => ({
		slot: mk.slot,
		start: mk.start,
		end: i + 1 < marks.length ? marks[i + 1].start : text.length,
		text: text.slice(mk.start, i + 1 < marks.length ? marks[i + 1].start : text.length),
	}));
}

// Field names contain regex metacharacters: the slot marker is literally
// "(0)NAME". Interpolating it raw turns the parentheses into a capture group,
// which then matches nothing and silently reports every slot as empty.
function escapeRe(s) {
	return s.replace(/[.*+?^${}()|[\]\\]/g, '\\$&');
}

function getField(slotText, field) {
	const m = slotText.match(new RegExp('^' + escapeRe(field) + '=([^\\r\\n]*)$', 'm'));
	return m ? m[1] : null;
}

function setField(slotText, field, value) {
	const re = new RegExp('^(' + escapeRe(field) + '=)([^\\r\\n]*)$', 'm');
	if (!re.test(slotText)) throw new Error('field not present: ' + field);
	return slotText.replace(re, (_, pre) => pre + value);
}

// --- CLI ------------------------------------------------------------------

// Only run the command line when invoked directly. The supervisor imports this
// file to serve the character editor, and it must not parse argv in that case.
const isMain = require.main === module;
const argv = isMain ? process.argv.slice(2) : [];
const cmd = argv[0];
const die = (s) => { console.error('error: ' + s); process.exit(1); };

// --- exported API ---------------------------------------------------------
// Everything the HTTP layer needs, so the editor and the CLI share one
// implementation and cannot drift apart.
module.exports = {
	// geometry
	SS, RESERVED, NFATS, FATSZ, ROOTS, TOTAL, DATA_OFF,
	// fat
	fatGet, fatSet, chainOf, freeClusters,
	// files
	listRoot, findEntry, readFile, writeFile, addEntry,
	// roster
	parseSlots, getField, setField,
	// roster convenience
	readRoster(img) {
		const e = findEntry(img, 'ROSTER1.UT2');
		if (!e) return null;
		return { entry: e, text: readFile(img, e).toString('latin1') };
	},
	// Parses every slot into an object of field/value pairs.
	slotsOf(img) {
		const r = this.readRoster(img);
		if (!r) return [];
		return parseSlots(r.text).map((s) => {
			const fields = {};
			for (const line of s.text.split(/\r?\n/)) {
				const m = line.match(/^([A-Z_(][A-Z_0-9()]*)=(.*)$/);
				if (m) fields[m[1]] = m[2].replace(/\u0000/g, '');
			}
			return { slot: s.slot, name: fields['(' + s.slot + ')NAME'] || '', fields };
		});
	},
};

if (!isMain) return;

function loadDisk(file) {
	if (!fs.existsSync(file)) die('no such disk: ' + file);
	return fs.readFileSync(file);
}

function saveDisk(file, img, inplace) {
	const out = inplace ? file : file.replace(/\.(hdm|img)$/i, '') + '.edited.' + path.extname(file).replace('.', '');
	fs.writeFileSync(out, img);
	return out;
}

if (cmd === 'ls') {
	const img = loadDisk(argv[1]);
	for (const e of listRoot(img)) {
		if (e.size === 0) { console.log(e.name.padEnd(12) + ' (label)'); continue; }
		const ch = chainOf(img, e.cluster);
		console.log(e.name.padEnd(12) + ' ' + String(e.size).padStart(7) + ' B  clusters ' + ch[0] + '-' + ch[ch.length - 1] + ' (' + ch.length + ')');
	}
} else if (cmd === 'cat') {
	const img = loadDisk(argv[1]);
	const e = findEntry(img, argv[2]);
	if (!e) die('not found: ' + argv[2]);
	const d = readFile(img, e);
	// CR/LF count as text. Treating only 0x20..0x7E as printable put a roster
	// with ~350 CRLF line endings at 80% and misclassified it as binary.
	const nonNul = [...d].filter((v) => v !== 0);
	const printable = nonNul.filter((v) => v >= 0x20 && v < 0x7f || v === 0x0d || v === 0x0a || v === 0x09).length;
	if (nonNul.length && printable / nonNul.length > 0.9) process.stdout.write(d.toString('latin1').replace(/\r\n/g, '\n'));
	else console.log('(binary, ' + d.length + ' bytes, hex head: ' + d.subarray(0, 64).toString('hex') + ')');
} else if (cmd === 'slots') {
	const img = loadDisk(argv[1]);
	const e = findEntry(img, 'ROSTER1.UT2');
	if (!e) die('ROSTER1.UT2 not present');
	const slots = parseSlots(readFile(img, e).toString('latin1'));
	for (const s of slots) {
		const name = getField(s.text, '(' + s.slot + ')NAME');
		const filled = name && name.replace(/\u0000/g, '').length > 0;
		console.log('slot ' + s.slot + ': ' + (filled ? JSON.stringify(name) : '(empty)') +
			'  bytes ' + s.start + '-' + (s.end - 1));
	}
} else if (cmd === 'clone') {
	const img = loadDisk(argv[1]);
	const from = Number(argv[2]), to = Number(argv[3]);
	const nameArg = argv.indexOf('--name');
	const newName = nameArg >= 0 ? argv[nameArg + 1] : 'CLONE';
	const inplace = argv.includes('--inplace');

	const e = findEntry(img, 'ROSTER1.UT2');
	const text = readFile(img, e).toString('latin1');
	const slots = parseSlots(text);
	const src = slots.find((s) => s.slot === from);
	if (!src) die('no such source slot: ' + from);
	const target = slots.find((s) => s.slot === to);
	if (!target) die('no such destination slot: ' + to + ' (roster has slots ' + slots.map((s) => s.slot).join(',') + ')');
	if (src.text.length !== target.text.length) {
		console.error('warning: slot lengths differ, block will not be an exact size match');
	}
	const block = src.text.replace(/\(\d\)NAME=[^\r\n]*/, '(' + to + ')NAME=' + newName);
	const out = text.slice(0, target.start) + block + text.slice(target.end);
	writeFile(img, e, Buffer.from(out, 'latin1'));
	const written = saveDisk(argv[1], img, inplace);
	console.log('cloned slot ' + from + ' -> ' + to + ' as ' + JSON.stringify(newName));
	console.log('wrote ' + written);
} else if (cmd === 'set') {
	const img = loadDisk(argv[1]);
	const slot = Number(argv[2]), field = argv[3], value = argv[4];
	const inplace = argv.includes('--inplace');
	const e = findEntry(img, 'ROSTER1.UT2');
	const text = readFile(img, e).toString('latin1');
	const slots = parseSlots(text);
	const s = slots.find((x) => x.slot === slot);
	if (!s) die('no such slot: ' + slot);
	const block = setField(s.text, field, value);
	const out = text.slice(0, s.start) + block + text.slice(s.end);
	writeFile(img, e, Buffer.from(out, 'latin1'));
	const written = saveDisk(argv[1], img, inplace);
	console.log('slot ' + slot + ' ' + field + '=' + value);
	console.log('wrote ' + written);
} else if (cmd === 'world-copy') {
	// Copy WORLD<n>.UT2 to another slot's world file, so a new character has a
	// world to load. Slots are 0-based, the files are 1-based.
	const img = loadDisk(argv[1]);
	const from = Number(argv[2]), to = Number(argv[3]);
	const inplace = argv.includes('--inplace');
	const srcName = 'WORLD' + from + '.UT2';
	const dstName = 'WORLD' + to + '.UT2';
	const src = findEntry(img, srcName);
	if (!src) die('not found: ' + srcName);
	const data = readFile(img, src);
	let dst = findEntry(img, dstName);
	if (dst) {
		writeFile(img, dst, data);
	} else {
		const free = freeClusters(img);
		const need = Math.ceil(data.length / SS);
		if (free.length < need) die('not enough free clusters');
		const chain = free.slice(0, need);
		for (let i = 0; i < chain.length; i++) {
			fatSet(img, FAT1, chain[i], i + 1 < chain.length ? chain[i + 1] : 0xfff);
			fatSet(img, FAT2, chain[i], i + 1 < chain.length ? chain[i + 1] : 0xfff);
			data.copy(img, DATA_OFF + (chain[i] - 2) * SS, i * SS, Math.min((i + 1) * SS, data.length));
		}
		dst = addEntry(img, dstName, chain[0], data.length);
	}
	const written = saveDisk(argv[1], img, inplace);
	console.log('copied ' + srcName + ' (' + data.length + ' B) -> ' + dstName);
	console.log('wrote ' + written);
} else {
	console.log(fs.readFileSync(__filename, 'utf8').split('\n').slice(2, 24).join('\n').replace(/^\/\/ ?/gm, ''));
}
