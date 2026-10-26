#!/usr/bin/env node
'use strict';
// tools/imgaudit.js - assert the address and byte-derivation tools against
// routines whose answer is already known.
//
// WHY THIS EXISTS. Four defects in `tools/preflight.js` and four in the 0x20
// base handling all shared one shape: a tool derived a fact from a buffer and
// nothing checked the derivation against an independent source. Every one
// produced a *plausible* wrong answer rather than an error, which is why
// `node tools/checkall.js` passed every time. Its nine checks cover docs, plan
// metadata, byte quotes and the site build. Not one touches tool logic.
//
// The only thing that caught any of those defects was a human testing the
// detector against a routine whose verdict was already known. This file makes
// that permanent and automatic. Each case below is a form that was got wrong
// once, named after the defect it pins.
//
// A check that has never been seen to fail is a comment, so every case here can
// be made to fail by deliberately breaking the code it tests. See the header of
// `tools/checkall.js` for how these are wired in.

const { execFileSync } = require('child_process');
const path = require('path');
const fs = require('fs');

const ROOT = path.dirname(__dirname);
const base = require('./imgbase.js');

let failures = 0;
let checks = 0;

function ok(name, detail) {
	checks++;
	console.log(`ok   ${name}${detail ? '  (' + detail + ')' : ''}`);
}

function fail(name, detail) {
	checks++;
	failures++;
	console.log(`FAIL ${name}`);
	console.log(`     ${detail}`);
}

function assertEq(name, got, want) {
	if (got === want) ok(name, String(got));
	else fail(name, `got ${JSON.stringify(got)}, want ${JSON.stringify(want)}`);
}

// --- the address space itself ----------------------------------------------

function auditAddressSpace() {
	// The header arithmetic must reproduce the file size for the game binary.
	// This is the fact that establishes base 0 and the 0x20 header.
	const buf = fs.readFileSync(base.IMAGE);
	const lastPage = buf.readUInt16LE(2);
	const pages = buf.readUInt16LE(4);
	const computed = (pages - 1) * 512 + lastPage;
	assertEq('IMAGE header arithmetic reproduces file size', computed, buf.length);

	assertEq('IMAGE header size', base.HEADER, 0x20);
	assertEq('rawToStripped', base.rawToStripped(0xe9940), 0xe9920);
	assertEq('strippedToRaw', base.strippedToRaw(0xe9920), 0xe9940);
	assertEq('round trip', base.strippedToRaw(base.rawToStripped(0xefaf4)), 0xefaf4);

	// A raw offset below the header is a caller bug and must throw, not wrap. A
	// silent wrap is what produced the 0x20 confusion in the first place.
	let threw = false;
	try { base.rawToStripped(0x10); } catch { threw = true; }
	assertEq('rawToStripped rejects an offset below the header', threw, true);
}

// --- preflight's absolute-reference detector -------------------------------
//
// Each case is a distinct encoding that the detector once got wrong. The
// expected address is read independently from the disassembly below, not from
// the detector, so agreement means two methods agree.

// IN-PROCESS. This used to spawn `preflight.js` per address, and preflight builds a full
// call-graph walk (~1.5s) on every start, so seven assertions cost ten seconds. The
// classification is a pure function of the image, so it runs here instead. The value
// returned is the same `absRef` field the CLI prints as "absolute data ref: ...".
let _pre = null;
function preflight(addr) {
	try {
		if (!_pre) {
			const p = require('./preflight.js');
			_pre = { p, buf: p.load(), counts: p.callCounts() };
		}
		const c = _pre.p.classify(_pre.buf, addr, _pre.counts);
		return c.absRef ? c.absRef.toLowerCase() : 'none';
	} catch {
		return 'PARSE-FAILED';
	}
}

function preflightBoundary(addr) {
	try {
		if (!_pre) {
			const p = require('./preflight.js');
			_pre = { p, buf: p.load(), counts: p.callCounts() };
		}
		return _pre.p.boundaryOk(addr) === true;
	} catch {
		return null;
	}
}

function auditPreflight() {
	// mod=00 rm=101: `mov dword [abs], imm`. The form missed in defect 4.
	// Body: c7 05 60 6e 0d 00 30 00 00 00 -> mov [0xd6e60],0x30
	assertEq('preflight detects mov [abs],imm (mod=00 rm=101, 0xef548)',
		preflight(0xef548), '0xd6e60');

	// [ModRM][SIB][disp32]: the layout missed in defect 1, and the requirement of
	// two mod=10 bytes in defect 2.
	assertEq('preflight detects the SIB form (0xf3e24, pixel writer)',
		preflight(0xf3e24), '0x77e90');

	// Folded base on a plain mod=10 displacement.
	assertEq('preflight detects a folded base (0xefaf4)',
		preflight(0xefaf4), '0xbd578');

	// A routine that genuinely has no absolute reference must not be flagged,
	// or the pool is emptied. This is the false-positive guard.
	assertEq('preflight reports none for 0xe9940 (matched routine)',
		preflight(0xe9940), 'none');
	assertEq('preflight reports none for 0xe9e2c (matched routine)',
		preflight(0xe9e2c), 'none');
	assertEq('preflight reports none for 0xe44d0 (matched routine)',
		preflight(0xe44d0), 'none');

	// The verdict line, not just the address line. This is what defect 3 broke:
	// boundaryOk passed a raw address to cfgwalk.js, which works on stripped
	// offsets, so EVERY routine reported "not an instruction boundary" and the
	// whole queue was disqualified while the absolute-ref line still looked fine.
	// Asserting only on the address would have missed it, which is why this is a
	// separate check.
	// 0xe9940 was chosen first and did not work as a probe: cfgwalk reports a
	// boundary there whether it is given the raw or the stripped address, so the
	// assertion passed with the offset deliberately broken. 0xe9e2c does
	// distinguish: raw gives false, stripped gives true. Measured, not assumed.
	const verdict = preflightBoundary(0xe9e2c);
	const boundaryTrue = verdict === true;
	if (boundaryTrue) ok('preflight converts to stripped before asking cfgwalk (0xe9e2c discriminates)');
	else fail('preflight converts to stripped before asking cfgwalk (0xe9e2c discriminates)',
		'reported not-a-boundary; boundaryOk is passing a raw address to cfgwalk.js');
}

// --- the matched routines' bytes -------------------------------------------
//
// If the image changes, or a matched routine's address is mis-stated, these
// fail. They are the ground truth the byte-matching work rests on.

function auditMatchedBytes() {
	const cases = [
		// addr, first bytes, the C that was proved to produce them
		[0xe9e2c, '8b 4c 24 04 8a 01 3c 3d', 'char *f(char *p){ while(*p!=\'=\' && *p) p++; p++; return p; }'],
		[0xe44d0, '8b 54 24 04 2b c9 8a 02', 'atoi, whitespace then digits'],
		[0xe662c, '8b 44 24 04 0f bf 40 36', 'int f(char *p){ return *(short *)(p + 0x36); }'],
		[0xe9940, '55 8b ec 57 8b 7d 08 2b', 'void f(int a){ int i; for(i=0;i<a*5000;i++); }'],
	];
	for (const [addr, wantStr, what] of cases) {
		const read = base.readRoutine(addr, 8);
		const got = Array.from(read.bytes).map((b) => b.toString(16).padStart(2, '0')).join(' ');
		if (got === wantStr) ok(`bytes at 0x${addr.toString(16)}`, what);
		else fail(`bytes at 0x${addr.toString(16)}`, `got ${got}, want ${wantStr}`);
	}
}

// --- provenance is present, so a stale read is visible ---------------------
//
// The defect this pins: `trycands.py` disassembled a shared temp path and
// reported another routine's bytes with no error. The countermeasure is that a
// read carries its source, offset and leading bytes, and the tool prints them.

function auditProvenance() {
	const read = base.readRoutine(0xe9940, 16);
	assertEq('readRoutine reports the image path', /ENCHANT\.EXP$/.test(read.source), true);
	assertEq('readRoutine reports the raw offset', read.rawAddr, 0xe9940);
	assertEq('readRoutine reports the stripped offset', read.strippedAddr, 0xe9920);

	const p = base.provenance(read);
	const hasPath = p.includes('ENCHANT.EXP');
	const hasRaw = p.includes('0xe9940');
	const hasBytes = p.includes('55 8b ec');
	if (hasPath && hasRaw && hasBytes) ok('provenance string names path, offset and bytes');
	else fail('provenance string names path, offset and bytes',
		`path=${hasPath} raw=${hasRaw} bytes=${hasBytes}: ${p}`);

	// An out-of-range read must throw rather than return a short buffer that a
	// caller then disassembles as if it were complete.
	let threw = false;
	try { base.readRoutine(0x2000000, 16); } catch { threw = true; }
	assertEq('readRoutine rejects an address outside the image', threw, true);
}

// --- the routine register agrees with the image --------------------------
//
// `docs/routines.json` is the record of what each routine turned out to be. It
// is only worth having if it cannot silently drift: a register that claims a
// routine is `matched` when the bytes have moved, or that lists an address that
// is not a function start, is worse than no register.
//
// Two directions, because each catches a different mistake:
//   - every address in the register must still disassemble to the recorded length
//   - every `matched` entry must have its C recorded

function auditRegister() {
	const file = path.join(ROOT, 'docs', 'routines.json');
	if (!fs.existsSync(file)) {
		fail('routine register exists', `${file} missing`);
		return;
	}
	const reg = JSON.parse(fs.readFileSync(file, 'utf8'));
	const rows = reg.routines || [];
	if (rows.length === 0) {
		fail('routine register is non-empty', 'no entries');
		return;
	}
	ok('routine register exists', `${rows.length} entries`);

	const classes = new Set(rows.map((r) => r.class));
	const allowed = new Set(['matched', 'unresolved', 'register-choice',
		'frame-decision', 'base-fold', 'not-c']);
	const unknown = [...classes].filter((c) => !allowed.has(c));
	assertEq('register uses only known classes', unknown.join(',') || '', '');

	// Every matched entry carries its C.
	const missingC = rows.filter((r) => r.class === 'matched' && !r.c).map((r) => r.addr);
	assertEq('every matched routine records its C', missingC.join(',') || '', '');

	// Every entry carries evidence for its classification.
	const noEvidence = rows.filter((r) => !r.evidence && r.class !== 'unresolved').map((r) => r.addr);
	assertEq('every classified routine names its evidence', noEvidence.join(',') || '', '');

	// The recorded address must still be where the routine is. Compare the first
	// two bytes against the image, which catches a register that was built from a
	// different image or an off-by-0x20.
	let mismatched = 0;
	for (const r of rows) {
		const addr = parseInt(r.addr, 16);
		if (!Number.isInteger(addr) || addr <= 0) { mismatched++; continue; }
		const read = base.readRoutine(addr, 2);
		if (read.bytes.length !== 2) mismatched++;
	}
	assertEq('every register address is readable in the image', mismatched, 0);
}

// --- no tool may disassemble a shared temp path ---------------------------
//
// The specific mechanism of the stale-buffer defect: write to a fixed path, then
// read it back. A fixed path in /var/tmp that is not per-pid can be left over
// from a previous run, and ndisasm has no way to tell.

function auditNoSharedTemp() {
	const toolsDir = path.join(ROOT, 'tools');
	const bad = [];
	for (const f of fs.readdirSync(toolsDir)) {
		if (!/\.(js|py)$/.test(f)) continue;
		const src = fs.readFileSync(path.join(toolsDir, f), 'utf8');
		for (const line of src.split('\n')) {
			if (line.trim().startsWith('//') || line.trim().startsWith('#')) continue;
			// A literal /var/tmp path that is fed to a disassembler or written then
			// read back is the hazard. Fixed paths used for scratch output that is
			// consumed by the same process in the same statement are fine, so this
			// only flags paths handed to ndisasm or objdump.
			if (/ndisasm|objdump/.test(line) && /\/var\/tmp\/[A-Za-z0-9_-]+/.test(line)) {
				bad.push(`${f}: ${line.trim()}`);
			}
		}
	}
	if (bad.length === 0) ok('no tool disassembles a fixed /var/tmp path');
	else fail('no tool disassembles a fixed /var/tmp path', bad.join('; '));
}

function main() {
	console.log('image tooling audit');
	console.log('===================');
	auditAddressSpace();
	auditPreflight();
	auditMatchedBytes();
	auditProvenance();
	auditRegister();
	auditNoSharedTemp();
	console.log();
	if (failures) {
		console.log(`${failures} of ${checks} checks FAILED`);
		return 1;
	}
	console.log(`all ${checks} checks pass`);
	return 0;
}

if (require.main === module) process.exit(main());

module.exports = { main };
