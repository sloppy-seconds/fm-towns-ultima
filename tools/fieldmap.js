#!/usr/bin/env node
// tools/fieldmap.js - derive the in-memory character record layout from the format string.
//
// The roster is serialised with a printf format string that names every field and its
// conversion. Reading it in order and assigning %c one byte and %d four bytes gives the
// in-memory layout, PROVIDED the in-memory struct mirrors the serialised order.
//
// That proviso is what the anchors test. Three fields have addresses established from code
// that uses them unambiguously:
//
//   0xcdf57  compared against 3 in 0xf22f0, consistent with MAP (a type, not a coordinate)
//   0xcdf6b  used as  y*64 + x  in 0xf234a's function, so PLAYER_X
//   0xcdf6f  the same expression, so PLAYER_Y
//
// Anchoring on MAP gives base 0xcde54, and PLAYER_X and PLAYER_Y independently give the same
// base. Anchoring on MAP_X instead gives a layout that drifts by exactly one field, which is
// how this was got wrong the first time.
//
// Usage:
//   node tools/fieldmap.js                 the layout table
//   node tools/fieldmap.js --resolve 0x..  name one or more addresses
//   node tools/fieldmap.js --check         verify the three anchors agree

'use strict';

const fs = require('fs');
const path = require('path');
const { Disc, defaultDisc } = require('./cd.js');

const ROOT = path.join(__dirname, '..');
const HEADER = 0x20;

// Established from code, not assumed. Each is a field name and the address it was observed at.
const ANCHORS = [
	{ name: 'MAP', addr: 0xcdf57, why: 'compared against 3 in the 0xf22f0 guard' },
	{ name: 'PLAYER_X', addr: 0xcdf6b, why: 'used as y*64+x, the low term' },
	{ name: 'PLAYER_Y', addr: 0xcdf6f, why: 'used as y*64+x, the shifted term' },
];

function loadImage() {
	const local = path.join(ROOT, 'ENCHANT.EXP');
	if (fs.existsSync(local)) return fs.readFileSync(local).slice(HEADER);
	const disc = defaultDisc(ROOT);
	if (!disc) throw new Error('no ENCHANT.EXP and no disc .img found');
	const d = new Disc(disc);
	const cat = d.catalogue();
	const name = [...cat.keys()].find((k) => /ENCHANT\.EXP$/i.test(k));
	if (!name) throw new Error('ENCHANT.EXP not found on the disc');
	const buf = d.get(cat, name).slice(HEADER);
	d.close();
	return buf;
}

// Read the format string from LINGUAL=%d to GATE_TIME=%d.
//
// NOTE: the strings are newline-terminated, not just NUL-terminated. A regex anchored with $
// on the raw NUL-split fails for every field, which cost a round of debugging.
function parseFields(img) {
	const start = img.indexOf(Buffer.from('LINGUAL='));
	const end = img.indexOf(Buffer.from('GATE_TIME='));
	if (start < 0 || end < 0) throw new Error('format string not found');

	const out = [];
	let i = start;
	const hi = end + 40;
	while (i < hi) {
		while (i < hi && (img[i] === 0 || img[i] < 0x20 || img[i] > 0x7e)) i++;
		if (i >= hi) break;
		let e = i;
		while (e < hi && img[e] !== 0 && img[e] >= 0x20 && img[e] <= 0x7e && e - i < 48) e++;
		const m = /^([A-Z_0-9()]+)=%([a-z])$/.exec(img.toString('latin1', i, e));
		if (m) out.push({ name: m[1], type: m[2] });
		i = e;
	}
	return out;
}

function layout(fields, base) {
	const map = new Map();
	const rev = new Map();
	let off = 0;
	fields.forEach((f, idx) => {
		const addr = base + off;
		if (!map.has(f.name)) map.set(f.name, { addr, idx, type: f.type });
		if (!rev.has(addr)) rev.set(addr, f.name);
		off += f.type === 'c' ? 1 : 4;
	});
	return { map, rev, size: off };
}

function baseFrom(fields, name, addr) {
	let off = 0;
	for (const f of fields) {
		if (f.name === name) return addr - off;
		off += f.type === 'c' ? 1 : 4;
	}
	return null;
}

function main() {
	const img = loadImage();
	const fields = parseFields(img);
	const args = process.argv.slice(2);

	if (args.includes('--check')) {
		console.log(`fields parsed: ${fields.length}\n`);
		console.log('anchors and the base each implies:');
		const bases = new Set();
		for (const a of ANCHORS) {
			const b = baseFrom(fields, a.name, a.addr);
			bases.add(b);
			console.log(
				`  0x${a.addr.toString(16)} ${a.name.padEnd(10)} -> base 0x${b.toString(16)}   (${a.why})`
			);
		}
		const agree = bases.size === 1;
		console.log(
			`\n${agree ? 'ALL ANCHORS AGREE' : 'ANCHORS DISAGREE'}: ${[...bases].map((b) => '0x' + b.toString(16)).join(' ')}`
		);
		if (!agree) {
			console.log('\nA disagreement of exactly one field means the anchor is off by one');
			console.log('field in the format order, not that the model is wrong.');
		}
		return;
	}

	// Use MAP as the anchor; --check exists to justify this choice.
	const base = baseFrom(fields, 'MAP', 0xcdf57);
	const L = layout(fields, base);

	if (args.includes('--resolve')) {
		for (const a of args.filter((x) => x.startsWith('0x'))) {
			const addr = Number(a);
			console.log(`0x${addr.toString(16)} -> ${L.rev.get(addr) ?? 'no field starts here'}`);
		}
		return;
	}

	console.log(`format fields: ${fields.length}`);
	console.log(`record base:   0x${base.toString(16)}`);
	console.log(`record size:   ${L.size} bytes (format order, %c=1 %d=4)\n`);
	console.log('idx  name           type  address');
	console.log('-'.repeat(38));
	fields.forEach((f, idx) => {
		const addr = base + (() => {
			let o = 0;
			for (let k = 0; k < idx; k++) o += fields[k].type === 'c' ? 1 : 4;
			return o;
		})();
		console.log(
			`${String(idx).padStart(3)}  ${f.name.padEnd(14)} %${f.type}    0x${addr.toString(16)}`
		);
	});
}

if (require.main === module) main();
