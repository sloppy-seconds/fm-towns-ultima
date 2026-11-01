#!/usr/bin/env node
'use strict';
// tools/byteid.js - the byte-identity equivalence rule, as code.
//
// WHY THIS EXISTS. Plan item 12a (docs/plan-recomp.md) says the rules for what
// "matched" means have to exist as code before any function is declared matched,
// and it names the two failure modes this file exists to make impossible:
//
//   1. An exemption that cannot be justified is tolerance, not a rule. So every
//      exempt byte here carries a per-site demonstration that is checked at
//      comparison time, not a blanket class mask applied because the class sounds
//      plausible. A field is only exempt if the game's own bytes at that field
//      pass the test that says a linker could have supplied them.
//   2. A boundary taken from a scan is an inferred boundary. docs/
//      ndisasm-continuation.md records 0xe6a58 being analysed as 222 bytes when
//      it is 228, and an analysis on a truncated function is a wrong analysis
//      with confidence attached. So the extent comes from docs/corpus.json,
//      which is the committed derivation, and a function that is not in it gets
//      no verdict at all rather than a guessed one.
//
// It also refuses, explicitly and by name, to file an unexplained prologue
// mismatch as verified. A difference in the first instruction is called out as
// what it is.
//
// WHAT THIS DOES NOT DO. It does not patch the game's bytes onto our output,
// which would forge the evidence. It masks symmetrically and requires the rest
// to be equal.
//
// Usage:
//   node tools/byteid.js --addr 0xe9e2c --code "8a 01 c3"
//   node tools/byteid.js --addr 0xe9e2c --code "..." --json
//   node tools/byteid.js --list-exemptions
//
// Exit: 0 byte-identical or identical-except-link, 1 differs, 2 no asserted
// extent, bad usage, or missing image.

const fs = require('fs');
const path = require('path');

const ROOT = path.join(__dirname, '..');
const IMAGE = path.join(ROOT, 'ENCHANT.EXP');
const CORPUS = path.join(ROOT, 'docs', 'corpus.json');

const D = require('./decode.js');
const C = require('./cmpdisp.js');

// The closed set of exempt classes. Nothing outside this list is ever masked, and
// each entry states the demonstration that earns it. An exemption whose
// demonstration cannot be re-run is tolerance, and the point of this table is
// that the demonstration is a predicate rather than a paragraph.
const EXEMPTIONS = [
	{
		id: 'L1',
		name: 'disp32 holding a link-time absolute address',
		// Demonstrated by: the compiler emits a placeholder here and the linker
		// fills it. Measured in this session from the kit itself, atlas probe A24
		// compiles `g = g + a` to `add dword ptr [0], eax` in a standalone link,
		// where 0 is the placeholder, and atlas probe A05 links to [0x10]. The
		// game carries the real address at the same field.
		demonstration: 'the game value is an address inside the loaded image',
		check: (gameVal, ctx) => gameVal >= 0 && gameVal < ctx.imageSize,
	},
	{
		id: 'L2',
		name: 'rel32 of a direct call or jump',
		// Demonstrated by: atlas probe A06 emits `call 0` and A27 emits
		// `call 0x11` for a call to a function in another module, so the field is
		// the linker's. The check below is stronger than the class name: the
		// displacement must resolve to somewhere inside the image, which an
		// authored constant of the same width would not reliably do.
		demonstration: 'the displacement resolves to a target inside the loaded image',
		check: (gameVal, ctx) => {
			const target = ctx.insAddr + ctx.insSize + gameVal;
			return target >= 0 && target < ctx.imageSize;
		},
	},
	{
		id: 'P1',
		name: 'inter-function alignment padding',
		// Demonstrated by: every atlas probe's image ends in zero bytes that
		// disassemble as `add byte ptr [eax], al`, which is fill the assembler
		// inserts to align the next function, not code anyone wrote. The check is
		// that the bytes are actually zero in the game, so a real instruction
		// cannot hide behind this class.
		demonstration: 'the game bytes in the range are all zero',
		check: (gameBytes) => gameBytes.every((b) => b === 0),
	},
];

function fmtBytes(arr) {
	return arr.map((x) => x.toString(16).padStart(2, '0')).join(' ');
}

function extents() {
	if (!fs.existsSync(CORPUS)) {
		throw new Error(`no ${CORPUS}; the asserted extents are missing`);
	}
	const list = JSON.parse(fs.readFileSync(CORPUS, 'utf8'));
	const m = new Map();
	for (const r of list) if (Number.isInteger(r.addr) && Number.isInteger(r.size)) m.set(r.addr, r.size);
	return m;
}

/**
 * Compare a candidate against the game under the equivalence rule.
 * Returns a result object; never throws for a legitimate comparison.
 */
function compare(addr, ours) {
	const buf = fs.readFileSync(IMAGE);
	const ext = extents();
	if (!ext.has(addr)) {
		return {
			addr: '0x' + addr.toString(16),
			verdict: 'extent-unasserted',
			note: 'docs/corpus.json has no asserted size for this address, so no verdict is possible. '
				+ 'An inferred boundary is not a substitute.',
		};
	}
	const size = ext.get(addr);
	const insns = D.decode(addr, addr + size, { image: IMAGE }).insns;

	const theirs = [];
	const exempt = [];   // per-byte: null, or {id, site}
	const sites = [];    // one entry per exempt field, with its demonstration outcome
	for (const ins of insns) {
		const start = theirs.length;
		for (let i = 0; i < ins.size; i++) {
			theirs.push(buf[ins.addr + i]);
			exempt.push(null);
		}
		for (const [a, b] of C.relocFields(ins)) {
			// Only a 4-byte field can be a link-time address. A rel8 short jump is
			// resolved by the assembler inside the function and is authored code, so
			// exempting it would be tolerance wearing the costume of a rule. This is
			// stricter than tools/cmpdisp.js, which masks whatever relocFields returns
			// including the rel8 form, and the strictness is the whole point of 12a.
			if (b - a !== 4) continue;
			const isCall = [0xe8, 0xe9].includes(buf[ins.addr + a - 1]) ||
				(buf[ins.addr] === 0x0f && buf[ins.addr + 1] >= 0x80 && buf[ins.addr + 1] <= 0x8f && a === 2);
			const cls = isCall ? EXEMPTIONS.find((e) => e.id === 'L2') : EXEMPTIONS.find((e) => e.id === 'L1');
			// A rel32 is signed and a disp32 is not. Reading a backward call's
			// displacement as unsigned puts it far outside the image, so the
			// demonstration would refuse every call that goes backwards, which is a
			// large share of them. Same width, different interpretation.
			const gameVal = isCall ? buf.readInt32LE(ins.addr + a) : buf.readUInt32LE(ins.addr + a);
			const ok = cls.check(gameVal, {
				imageSize: buf.length, insAddr: ins.addr, insSize: ins.size,
			});
			sites.push({
				class: cls.id, at: '0x' + (ins.addr + a).toString(16),
				gameValue: gameVal < 0 ? '-0x' + (-gameVal).toString(16) : '0x' + gameVal.toString(16),
				demonstrated: ok, reason: ok ? cls.demonstration : `REFUSED: ${cls.demonstration} does not hold`,
			});
			if (!ok) continue;
			for (let i = a; i < b && start + i < theirs.length; i++) exempt[start + i] = { id: cls.id };
		}
	}

	const result = {
		addr: '0x' + addr.toString(16),
		assertedSize: size,
		decodedBytes: theirs.length,
		ourLen: ours.length,
		target: fmtBytes(theirs),
		ours: fmtBytes(ours),
		exemptSites: sites,
	};

	if (theirs.length !== size) {
		result.verdict = 'extent-incomplete';
		result.note = `the walk decoded ${theirs.length}B of a function asserted at ${size}B, `
			+ 'so the boundary and the decode disagree and neither can be trusted';
		return result;
	}

	// Trailing padding: a candidate may legitimately stop at its own last
	// instruction while the game's extent includes alignment fill.
	let tailExempt = 0;
	if (ours.length < theirs.length) {
		const tail = theirs.slice(ours.length);
		if (!tail.every((b) => b === 0)) {
			result.verdict = 'length-differs';
			result.note = 'the candidate is shorter and the game tail is not zero fill, '
				+ 'so this is a truncated candidate rather than padding';
			return result;
		}
		tailExempt = tail.length;
		for (let i = ours.length; i < theirs.length; i++) exempt[i] = { id: 'P1' };
		result.paddingBytes = tailExempt;
	} else if (ours.length > theirs.length) {
		// The candidate may carry the linker's own trailing alignment padding.
		//
		// THE TWO CONTAINERS ARE DIFFERENT AND THIS EXEMPTION IS ABOUT THE CANDIDATE ONLY.
		// ENCHANT.EXP is an `MP` flat image, and the game's extents here come from
		// docs/corpus.json, which is a walk to the routine's `ret`. A candidate is built by
		// 386LINK.EXE, which emits `P3`, and tools/atlas-build.py reads a candidate's extent
		// from the linker map's segment size. That size is aligned: all 40 atlas probes and
		// all 7 candidate modules report a code segment divisible by 4, so 0xe140c's 43 bytes
		// of code are reported as 0x2C = 44.
		//
		// This is only exempt when every extra byte is zero, and only at the tail. A function
		// ends at its `ret`, so anything all-zero after that is fill rather than code. A
		// candidate that genuinely ran past the function has to contain a real instruction
		// there, which is not all-zero, and that still fails.
		const excess = ours.slice(theirs.length);
		if (!excess.every((b) => b === 0)) {
			result.verdict = 'length-differs';
			result.note = 'the candidate is longer than the asserted extent and the excess is not '
				+ 'zero fill, so it ran past the function';
			return result;
		}
		result.candidatePaddingBytes = excess.length;
		ours = ours.slice(0, theirs.length);
		result.ourLen = ours.length;
		result.ours = fmtBytes(ours);
	}

	const diffs = [];
	const unexplained = [];
	for (let i = 0; i < theirs.length; i++) {
		if (theirs[i] === ours[i]) continue;
		if (exempt[i]) diffs.push({ at: i, cls: exempt[i].id, theirs: theirs[i], ours: ours[i] });
		else unexplained.push({ at: i, theirs: theirs[i], ours: ours[i] });
	}

	// The prologue rule. A difference in the first instruction is the shape that
	// docs/highc-authentic-toolchain.md spent a session on, and an unexplained one
	// must never be filed as verified.
	const firstInsnEnd = insns.length ? insns[0].size : 0;
	const prologueDiffs = unexplained.filter((d) => d.at < firstInsnEnd);

	result.unexplained = unexplained.length;
	result.explainedDiffs = diffs.length;
	if (unexplained.length === 0) {
		result.verdict = diffs.length || tailExempt ? 'identical-except-link' : 'byte-identical';
	} else {
		result.verdict = 'differs';
		if (prologueDiffs.length) {
			result.prologueMismatch = true;
			result.note = 'difference inside the prologue and not a demonstrated exemption. '
				+ 'This must not be filed as verified.';
		}
	}
	result.detail = { unexplained: unexplained.slice(0, 12), explained: diffs.slice(0, 12) };
	return result;
}

function main() {
	const args = process.argv.slice(2);
	if (args.includes('--list-exemptions')) {
		for (const e of EXEMPTIONS) console.log(`${e.id}  ${e.name}\n     demonstrated by: ${e.demonstration}`);
		return;
	}
	const opt = (n, d) => {
		const i = args.indexOf('--' + n);
		return i >= 0 && args[i + 1] !== undefined ? args[i + 1] : d;
	};
	const addrStr = opt('addr', null);
	if (!addrStr) {
		console.error('usage: byteid.js --addr 0xADDR --code "aa bb .." [--json] | --list-exemptions');
		process.exit(2);
	}
	const addr = parseInt(String(addrStr).replace(/^0x/, ''), 16);
	if (!Number.isInteger(addr)) { console.error('bad --addr'); process.exit(2); }
	const code = opt('code', '').trim();
	if (!code) { console.error('need --code "aa bb .."'); process.exit(2); }
	if (!fs.existsSync(IMAGE)) { console.error('ENCHANT.EXP missing; see README section 1'); process.exit(2); }
	const ours = code.split(/\s+/).filter(Boolean).map((h) => parseInt(h, 16));

	const r = compare(addr, ours);
	if (args.includes('--json')) { console.log(JSON.stringify(r, null, 1)); } else {
		console.log(`${r.addr}  ${r.verdict.toUpperCase()}`);
		if (r.assertedSize) console.log(`  asserted ${r.assertedSize}B, candidate ${r.ourLen}B`);
		if (r.note) console.log(`  note: ${r.note}`);
		for (const s of r.exemptSites || []) {
			console.log(`  ${s.class} @${s.at} game=${s.gameValue} ${s.demonstrated ? 'exempt' : s.reason}`);
		}
		if (r.detail && r.detail.unexplained.length) {
			for (const d of r.detail.unexplained) {
				console.log(`  UNEXPLAINED byte ${d.at.toString(16)}: game ${d.theirs.toString(16)} ours ${d.ours.toString(16)}`);
			}
		}
	}
	const good = r.verdict === 'byte-identical' || r.verdict === 'identical-except-link';
	process.exit(good ? 0 : (r.verdict === 'extent-unasserted' || r.verdict === 'extent-incomplete' ? 2 : 1));
}

if (require.main === module) main();

module.exports = { compare, EXEMPTIONS, extents };
