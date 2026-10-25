#!/usr/bin/env node
'use strict';
// tools/checkquoted.js - every byte sequence quoted in docs/ must be findable in
// the binary it claims to come from, or be declared as a paraphrase.
//
// WHY THIS EXISTS. Twice in this project a hand-written byte sequence was
// quoted into docs/ as "ground truth", twice a compiler was calibrated against
// it, and the sequence did not exist in the image. The pixel writer was cited
// at 0xf3e04 when it is at 0xf3e24, and the "expected 29 bytes" were a
// paraphrase with the base folded into an add rather than kept as a store
// displacement. Because both sides of those comparisons were the same
// paraphrase, the results were meaningless and were reported as findings.
//
// The rule this enforces is in AGENTS.md, "Never quote bytes, addresses or
// counts from memory". A sequence with no command beside it is
// indistinguishable from an invented one, so this check makes the distinction
// mechanical.
//
// HOW IT DECIDES. For each fenced block in docs/*.md that looks like a hex byte
// run (8+ space-separated byte pairs on one line, or lines of them), the bytes
// are assembled and searched for in every binary present in the repo root.
// A hit is a pass. A miss is a failure unless the enclosing text marks the
// block as a paraphrase, using one of the marker words below within a short
// window before the block.
//
// It cannot check instruction text, and it does not try. It checks bytes, which
// is the thing that was fabricated.
//
// Deliberately NOT scanned: blocks that clearly show an object file's own
// structure (they quote OMF records, which are in an .OBJ not the game), and
// anything inside the exempted process page that quotes the rule itself.

const fs = require('fs');
const path = require('path');

const ROOT = path.join(__dirname, '..');
const DOCS = path.join(ROOT, 'docs');

// Marker words that mean "this block is explicitly an illustration, not data".
const PARAPHRASE_MARKERS = [
	'paraphrase', 'not exist', 'does not exist', 'doesn\u2019t exist',
	'hand-written', 'handwritten', 'illustrative', 'equivalent to',
	'not the image', 'reconstruction',
];

// Marker words that mean "this block is a compiler's OUTPUT, so it is correctly
// absent from the game binary and must not be searched for there".
const COMPILED_MARKERS = [
	'high c 1.7', 'high c 1.73', 'high c 2.31', 'measured', 'compiled',
	'emitted', 'produced', 'output', 'what .* produces', 'the compiler',
	'→', 'transcript', 'banner',
];

// Pages whose quoted bytes are by nature not from a game binary: symbol tables,
// encoding tables, tool output and synthetic examples. Exempted by name so the
// exemption is visible and arguable, rather than hidden in a heuristic.
const EXEMPT_PAGES = new Set([
	'plan-process.md',      // quotes the rule itself
	'cell-fields.md',       // synthetic field-pattern examples
	'eb-encoding.md',       // glyph/tile encoding samples
	'palette.md',           // SYM1 record framing from TMENU.EXP, verified separately
	'randmod-groups.md',    // disassembly of instruction sequences compared by pattern
	'shrine-function.md',   // disassembly fragments quoted from analysis
	'live-fieldmap.md',     // decimal live-memory dumps read from the paused VM, not file bytes
]);

// Files a quoted sequence could plausibly come from.
const BINARIES = ['ENCHANT.EXP', 'DARKNESS.EXP', 'EXODUS.EXP', 'TMENU.EXP'];

function binaries() {
	const out = [];
	for (const name of BINARIES) {
		const p = path.join(ROOT, name);
		if (fs.existsSync(p)) out.push({ name, buf: fs.readFileSync(p) });
	}
	return out;
}

// A hex run. Three shapes appear in these docs:
//   "8b 44 24 0c  c1 e0 07"          spaced pairs
//   "8B44240C  mov eax,[esp+0x4]"     ndisasm: contiguous hex, then mnemonic
//   "0x0F3E24  8B44240C  mov ..."     ndisasm with an address column
//
// The address column is the subtle one: `0x0F3E24` is 8 hex digits and can be
// mistaken for four single-byte values. It is anchored and stripped first.
const ADDR_PREFIX = /^\s*0x[0-9a-fA-F]+\s+/;
const HEX_SPACED = /^((?:[0-9a-fA-F]{2}[ \t]+){3,}[0-9a-fA-F]{2})\b/;
const HEX_CONCAT = /^([0-9a-fA-F]{4,})\s+(?:mov|shl|add|sub|sar|shr|push|pop|ret|leave|idiv|imul|cdq|lea|call|jmp|nop|int|esi|edi|ebp|esp|and|or|xor|cmp|test|inc|dec|neg|not|les|enter)\b/;

function hexFromLine(rawLine) {
	// ndisasm with an address column: take the hex field immediately after it.
	const addr = rawLine.match(/^\s*0x[0-9a-fA-F]+\s+([0-9a-fA-F]+)\b/);
	if (addr && addr[1].length % 2 === 0 && addr[1].length >= 2) {
		const h = addr[1];
		const bytes = [];
		for (let i = 0; i < h.length; i += 2) bytes.push(h.slice(i, i + 2));
		return bytes;
	}
	const line = rawLine.replace(ADDR_PREFIX, '');
	const concat = line.match(HEX_CONCAT);
	if (concat) {
		const h = concat[1];
		if (h.length % 2 === 0) {
			const bytes = [];
			for (let i = 0; i < h.length; i += 2) bytes.push(h.slice(i, i + 2));
			return bytes;
		}
	}
	const spaced = line.match(HEX_SPACED);
	if (spaced) {
		const bytes = spaced[1].trim().split(/\s+/);
		if (bytes.length >= 4) return bytes;
	}
	return null;
}

function sequenceFrom(blockLines) {
	const flat = [];
	for (const line of blockLines) {
		const bytes = hexFromLine(line);
		if (!bytes) continue;
		for (const b of bytes) flat.push(b);
	}
	// Needs to be long enough to be a real quotation, not a stray pair or two.
	if (flat.length < 8) return null;
	return flat;
}

function hexToBuf(bytes) {
	return Buffer.from(bytes.map((h) => parseInt(h, 16)));
}

function main() {
	const bins = binaries();
	if (!bins.length) {
		console.log('SKIP hex quotations: no binaries present (they are gitignored)');
		return [];
	}

	const failures = [];
	const stats = { blocks: 0, checked: 0, found: 0, excused: 0, compiled: 0, skippedShort: 0 };

	for (const page of fs.readdirSync(DOCS).filter((f) => f.endsWith('.md'))) {
		if (EXEMPT_PAGES.has(page)) continue;
		const text = fs.readFileSync(path.join(DOCS, page), 'utf8');
		const lines = text.split('\n');

		let inBlock = false, blockStart = 0, buf = [];
		const blocks = [];
		for (let i = 0; i < lines.length; i++) {
			const l = lines[i];
			if (/^```/.test(l.trim())) {
				if (!inBlock) { inBlock = true; blockStart = i; buf = []; }
				else { inBlock = false; blocks.push({ start: blockStart, end: i, lines: buf }); }
				continue;
			}
			if (inBlock) buf.push(l);
		}
		if (inBlock) blocks.push({ start: blockStart, end: lines.length - 1, lines: buf });

		for (const b of blocks) {
			stats.blocks++;
			const seq = sequenceFrom(b.lines);
			if (!seq) continue;

			// Context window before the block decides what kind of quotation it is.
			const before = lines.slice(Math.max(0, b.start - 10), b.start).join(' ').toLowerCase();
			const after = lines.slice(b.end + 1, Math.min(lines.length, b.end + 4)).join(' ').toLowerCase();
			const context = before + ' ' + after;

			// 1. Declared paraphrase: explicitly not data.
			if (PARAPHRASE_MARKERS.some((m) => context.includes(m))) { stats.excused++; continue; }
			// 2. Compiler output: correctly absent from the game binary.
			if (COMPILED_MARKERS.some((m) => (m.startsWith('what ')
				? new RegExp(m).test(context)
				: context.includes(m)))) { stats.compiled++; continue; }

			stats.checked++;
			const want = hexToBuf(seq);
			let hit = null;
			for (const bin of bins) {
				const at = bin.buf.indexOf(want);
				if (at >= 0) { hit = { name: bin.name, at }; break; }
			}
			if (hit) { stats.found++; continue; }
			failures.push(
				`${page}:${b.start + 1} quoted ${seq.length} bytes not found in any binary: ` +
				seq.slice(0, 8).join(' ') + (seq.length > 8 ? ' ...' : '')
			);
		}
	}

	console.log(
		`${stats.checked} quoted sequences checked, ${stats.found} found in a binary, ` +
		`${stats.excused} marked as paraphrase, ${stats.compiled} identified as compiler output, ` +
		`${failures.length} unaccounted`
	);
	return failures;
}

if (require.main === module) {
	const failures = main();
	for (const f of failures) console.log('  ' + f);
	process.exit(failures.length ? 1 : 0);
}

module.exports = { main };
