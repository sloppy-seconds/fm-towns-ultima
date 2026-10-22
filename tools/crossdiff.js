// tools/crossdiff.js - find code shared between the Trilogy executables.
//
// Purpose: the palette setter is inside a statically linked Fujitsu graphics
// library, not inline in any game (see `docs/save-disk.md` 6.3). If the same routine is
// present in TMENU.EXP (243 KB, Fujitsu's own menu) and all three games, then
// anchoring on TMENU gives a much smaller haystack.
//
// Method: rolling-hash (Rabin-Karp) shared-substring search. Build a hash index
// of fixed-size k-grams from the reference binary, then stream every other
// binary and record consecutive matching runs as shared blocks.
//
// Usage: node tools/crossdiff.js [--ref TMENU.EXP] [--k 32] [--min 256]

'use strict';

const fs = require('fs');
const path = require('path');
const { Disc, defaultDisc } = require('./cd');

const args = process.argv.slice(2);
function arg(flag, dflt) {
	const i = args.indexOf(flag);
	return i >= 0 && args[i + 1] ? args[i + 1] : dflt;
}

const K = Number(arg('--k', 32));
const MIN = Number(arg('--min', 256));
const REFNAME = arg('--ref', 'TMENU.EXP');

const discPath = defaultDisc(path.join(__dirname, '..'));
if (!discPath || !fs.existsSync(discPath)) {
	console.error('disc image not found');
	process.exit(1);
}

const disc = new Disc(discPath);
const cat = disc.catalogue();

// The game payloads start at 0x75f. Diffing from there avoids the loader stub,
// which is identical in every file anyway and would mask real signal.
const PAYLOAD = 0x75f;

function load(name) {
	const buf = disc.get(cat, name);
	if (!buf) throw new Error('missing ' + name);
	return buf;
}

const REF = load(REFNAME);
const others = ['DARKNESS.EXP', 'ENCHANT.EXP', 'EXODUS.EXP', 'UT1DEMO.EXP', 'UT2DEMO.EXP', 'UT3DEMO.EXP'].filter(
	(n) => cat.has(n) && n !== REFNAME
);

console.log('reference: ' + REFNAME + ' (' + REF.length + ' bytes)');
console.log('k-gram: ' + K + '  min block: ' + MIN);
console.log('');

// --- index the reference ---------------------------------------------------

const refBody = REF.subarray(PAYLOAD);
const index = new Map();

function hashAt(buf, i) {
	// FNV-1a over K bytes. Cheap and good enough for a first pass; every
	// candidate is verified byte-for-byte before being reported.
	let h = 0x811c9dc5;
	for (let j = 0; j < K; j++) {
		h ^= buf[i + j];
		h = Math.imul(h, 0x01000193);
	}
	return h >>> 0;
}

for (let i = 0; i + K <= refBody.length; i++) {
	const h = hashAt(refBody, i);
	const prev = index.get(h);
	if (prev === undefined) index.set(h, i);
	else if (Array.isArray(prev)) prev.push(i);
	else index.set(h, [prev, i]);
}
console.log('reference k-grams indexed: ' + (refBody.length - K + 1) + ' (' + index.size + ' distinct)');

// --- stream each other binary ---------------------------------------------

function matchesAt(buf, i, refOff) {
	for (let j = 0; j < K; j++) if (buf[i + j] !== refBody[refOff + j]) return false;
	return true;
}

const shared = new Map();

for (const name of others) {
	const buf = load(name);
	const body = buf.subarray(PAYLOAD);
	const blocks = [];
	let i = 0;
	while (i + K <= body.length) {
		const h = hashAt(body, i);
		const cand = index.get(h);
		let matched = null;
		if (cand !== undefined) {
			const list = Array.isArray(cand) ? cand : [cand];
			for (const refOff of list) {
				if (matchesAt(body, i, refOff)) {
					matched = refOff;
					break;
				}
			}
		}
		if (matched === null) {
			i++;
			continue;
		}
		// extend forward
		let len = K;
		while (
			i + len < body.length &&
			matched + len < refBody.length &&
			body[i + len] === refBody[matched + len]
		)
			len++;
		if (len >= MIN) blocks.push({ other: i + PAYLOAD, ref: matched + PAYLOAD, len });
		i += Math.max(1, len - K + 1);
	}
	shared.set(name, blocks);
	console.log('');
	console.log(name + ' (' + buf.length + ' bytes): ' + blocks.length + ' shared blocks >= ' + MIN);
	blocks
		.slice()
		.sort((a, b) => b.len - a.len)
		.slice(0, 10)
		.forEach((b) =>
			console.log(
				'   ref 0x' +
					b.ref.toString(16) +
					'  other 0x' +
					b.other.toString(16) +
					'  len ' +
					b.len
			)
		);
}

// --- blocks present in ALL game binaries ----------------------------------
// A library routine shared by the three games and the menu is the strongest
// candidate for the Fujitsu graphics/sound layer.

const games = ['DARKNESS.EXP', 'ENCHANT.EXP', 'EXODUS.EXP'];
const present = games.every((g) => (shared.get(g) || []).length > 0);

console.log('');
console.log('=== candidates shared by all three games ===');
if (!present) {
	console.log('not every game shares blocks with ' + REFNAME);
} else {
	// intersect on reference offsets, with a tolerance of +/-16 bytes since
	// block boundaries drift with alignment.
	const refOffsets = new Map();
	for (const g of games) {
		for (const b of shared.get(g) || []) {
			const key = Math.round(b.ref / 16);
			if (!refOffsets.has(key)) refOffsets.set(key, []);
			refOffsets.get(key).push({ game: g, ...b });
		}
	}
	const all = [...refOffsets.entries()].filter(([, v]) => new Set(v.map((x) => x.game)).size === 3);
	console.log('reference regions matched by all 3 games: ' + all.length);
	all
		.sort((a, b) => Math.max(...b[1].map((x) => x.len)) - Math.max(...a[1].map((x) => x.len)))
		.slice(0, 20)
		.forEach(([k, v]) => {
			const biggest = v.reduce((m, x) => (x.len > m.len ? x : m), v[0]);
			console.log('   ' + REFNAME + ' 0x' + biggest.ref.toString(16) + '  len ' + biggest.len);
		});
}

// --- write a report -------------------------------------------------------

const outDir = path.join(__dirname, '..', 'analysis');
fs.mkdirSync(outDir, { recursive: true });
const report = path.join(outDir, 'crossdiff.txt');
const lines = [];
lines.push('reference: ' + REFNAME);
lines.push('');
for (const [name, blocks] of shared) {
	lines.push('== ' + name + '  (' + blocks.length + ' blocks)');
	for (const b of blocks.sort((a, b) => a.ref - b.ref)) {
		lines.push(
			'ref 0x' + b.ref.toString(16) + '\tother 0x' + b.other.toString(16) + '\tlen ' + b.len
		);
	}
	lines.push('');
}
fs.writeFileSync(report, lines.join('\n'));
console.log('');
console.log('wrote ' + report);
disc.close();
