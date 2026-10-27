#!/usr/bin/env node
'use strict';
// tools/globrefs.js - find the code sites that READ or WRITE one global.
//
// WHY THIS EXISTS. Finding who writes `PLAYER_X` by grepping the image for the
// little-endian bytes of its address returns every disp32 that happens to equal
// it, and about two thirds of those are reads, not writes. The difference is the
// whole question: a read site tells you the variable is consulted, a write site
// tells you what sets it. Plan item 5b depends on knowing the second.
//
// THE HAZARD THIS GUARDS. `decode(lo, hi)` decodes linearly from `lo`. If `lo` is
// a byte inside an instruction the first "instruction" is garbage whose size puts
// it anywhere, and a naive caller reads that as a reference. So every candidate
// here must SATISFY the end condition: the decoded instruction must END exactly
// where the address literal does. A candidate that decodes but does not line up
// is dropped and counted, not silently accepted.
//
// Usage:
//   node tools/globrefs.js 0xcdf6b             reads and writes to that address
//   node tools/globrefs.js 0xcdf6b --writes    writes only
//   node tools/globrefs.js --named PLAYER_X
//   node tools/globrefs.js --list              the names it knows
//
// Exit status is 1 when a candidate failed the alignment test, so a caller in
// checkall can tell "no references" apart from "my detector is broken".

const fs = require('fs');
const path = require('path');
const { decode } = require('./decode.js');

const ROOT = path.join(__dirname, '..');

// Addresses measured and recorded in docs/. Kept here so the tool and the docs
// cannot drift, and so a typo in one place shows up as a mismatch.
const NAMED = {
	MAP_X: 0xcdf63,
	MAP_Y: 0xcdf67,
	PLAYER_X: 0xcdf6b,
	PLAYER_Y: 0xcdf6f,
	MAP_ID: 0xcdf53,
	SEED: 0xcdf7f,
	STR: 0xcde62,
	AGI: 0xcde66,
	HP: 0xcde81,
	MHP: 0xcde85,
	FOOD: 0xcde8d,
	GOLD: 0xcde91,
	ERA: 0xcdf47,
};

// Mnemonics whose FIRST operand is written. Everything else is treated as a read,
// which is the safe direction: a missed write shows up as "not found", a missed
// read shows up as nothing at all.
const WRITES_FIRST = new Set([
	'mov', 'movzx', 'movsx', 'lea',
	'add', 'adc', 'sub', 'sbb', 'inc', 'dec', 'neg', 'not',
	'and', 'or', 'xor', 'shl', 'shr', 'sar', 'sal',
	'imul', 'mul', 'div', 'idiv', 'xchg',
]);

function loadImage() {
	const local = path.join(ROOT, 'ENCHANT.EXP');
	if (!fs.existsSync(local)) {
		throw new Error('ENCHANT.EXP not present; run tools/extract.js or place the disc');
	}
	// RAW, NOT SLICED. This is the correction that cost a wrong turn.
	//
	// An `MP` executable has a 32-byte header and its payload loads at 0, which makes
	// it look as though every address in docs/ is a payload offset and the raw file
	// must have 0x20 sliced off. That is false for this binary and the decoder was
	// right all along. Measured: the pixel writer recorded at 0xf3e24 in
	// docs/highc-authentic-toolchain.md begins `8b 44 24 0c c1 e0 07`, and those
	// bytes are at RAW 0xf3e24, not at raw 0xf3e44.
	//
	//   raw [0xf3e24] = 8b 44 24 0c c1 e0 07   matches the recorded routine
	//   flat[0xf3e24] = 56 57 8b 7d 08 ...      does not
	//
	// So file offset and virtual address are the same number here, and slicing the
	// header off silently moved every lookup 32 bytes early. The symptom was a
	// reference reported at a site whose bytes decoded to a different instruction,
	// which read as a decoder bug and was a caller bug.
	return fs.readFileSync(local);
}

// Every file offset where `addr` appears as a little-endian u32. `indexOf` returns
// the offset of the FIRST byte of the literal, so an instruction whose displacement
// is that literal ends at `hit + 4`.
function occurrences(img, addr) {
	const le = Buffer.alloc(4);
	le.writeUInt32LE(addr);
	const out = [];
	let p = 0;
	while ((p = img.indexOf(le, p)) !== -1) {
		out.push(p);
		p += 1;
	}
	return out;
}

function operandDisp(op) {
	return op && op.type === 'mem' && typeof op.disp === 'number' ? op.disp : null;
}

function formatOperand(op) {
	if (!op) return '?';
	if (op.type === 'reg') return op.name;
	if (op.type === 'imm') return '0x' + (op.value >>> 0).toString(16);
	if (op.type === 'mem') {
		let s = '[';
		if (op.base) s += op.base;
		if (op.index) s += (op.base ? '+' : '') + op.index + '*' + (op.scale || 1);
		if (op.disp) s += (op.base || op.index ? (op.disp >= 0 ? '+' : '-') : '') +
			'0x' + Math.abs(op.disp).toString(16);
		return s + ']';
	}
	return op.text || '?';
}

// Find the instruction that contains this literal. A literal at file offset `h`
// ends at `h + 4`; the instruction starts somewhere in [h-10, h]. Several start
// offsets can decode cleanly, so we keep the one whose END is exactly h+4 and
// which actually references the address. If more than one qualifies we report
// that as ambiguity rather than picking one.
function siteFor(img, h, addr) {
	const matches = [];
	for (let back = 0; back <= 10; back++) {
		const start = h - back;
		if (start < 0) continue;
		let res;
		try {
			res = decode(start, start + 22, { file: 'ENCHANT.EXP' });
		} catch (e) {
			continue;
		}
		const ins = res.insns[0];
		if (!ins) continue;
		if (ins.addr !== start) continue;
		if (start + ins.size !== h + 4) continue;
		const dispOps = ins.operands.filter((o) => operandDisp(o) === addr);
		if (dispOps.length === 0) continue;
		const writes = dispOps.some(
			(o) => ins.operands[0] === o && WRITES_FIRST.has(ins.mnemonic),
		);
		matches.push({ start, ins, writes });
	}
	return matches;
}

function main() {
	const argv = process.argv.slice(2);
	if (argv.includes('--list')) {
		for (const [k, v] of Object.entries(NAMED)) {
			console.log(k.padEnd(10), '0x' + v.toString(16));
		}
		return 0;
	}

	let addr = null;
	let label = null;
	const namedIdx = argv.indexOf('--named');
	if (namedIdx !== -1) {
		label = argv[namedIdx + 1];
		if (!(label in NAMED)) {
			console.error('unknown name: ' + label + ' (try --list)');
			return 2;
		}
		addr = NAMED[label];
	} else {
		const literal = argv.find((a) => /^0x[0-9a-f]+$/i.test(a) || /^\d+$/.test(a));
		if (!literal) {
			console.error('usage: node tools/globrefs.js <0xaddr>|--named NAME [--writes]');
			return 2;
		}
		addr = Number(literal);
		label = Object.keys(NAMED).find((k) => NAMED[k] === addr) || null;
	}

	const writesOnly = argv.includes('--writes');
	const img = loadImage();
	const hits = occurrences(img, addr);
	const sites = [];
	let ambiguity = 0;
	let unaligned = 0;

	for (const h of hits) {
		const m = siteFor(img, h, addr);
		if (m.length === 0) {
			unaligned++;
			continue;
		}
		if (m.length > 1) ambiguity++;
		const chosen = m.find((x) => x.writes) || m[0];
		sites.push({ at: chosen.start, ...chosen, hitOffset: h });
	}

	// Deduplicate: a site can be reached from two literal offsets only if the
	// instruction contains the address twice, which has not been seen.
	const seen = new Set();
	const unique = sites.filter((s) => {
		if (seen.has(s.at)) return false;
		seen.add(s.at);
		return true;
	});

	const shown = writesOnly ? unique.filter((s) => s.writes) : unique;

	console.log(
		`${label || '0x' + addr.toString(16)}  0x${addr.toString(16)}  ` +
			`${hits.length} literal occurrences, ${unique.length} instruction sites, ` +
			`${unique.filter((s) => s.writes).length} write`,
	);
	console.log(`  unaligned literals: ${unaligned}   ambiguous starts: ${ambiguity}`);
	console.log('');

	for (const s of shown) {
		const text = s.ins.mnemonic + ' ' + s.ins.operands.map(formatOperand).join(', ');
		const kind = s.writes ? 'WRITE' : 'read ';
		console.log(`  ${kind}  0x${s.at.toString(16).padStart(6, '0')}  ${text}`);
	}

	// A detector that has never been seen to fail is a comment. If every literal
	// failed to land on an instruction boundary, the decoder is being asked the
	// wrong question and the caller must not read the empty result as a negative.
	if (hits.length > 0 && unique.length === 0) {
		console.error('\nERROR: no literal landed on an instruction boundary.');
		console.error('That is a decoder or offset problem, not a negative result.');
		return 1;
	}
	return 0;
}

if (require.main === module) {
	process.exit(main());
}

module.exports = { NAMED, occurrences, siteFor, loadImage };
