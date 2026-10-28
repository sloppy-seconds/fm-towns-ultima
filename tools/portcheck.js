#!/usr/bin/env node
// Checks the port's known-good numbers without the emulator, the disc or a recompile.
//
// Why this exists. Every wall the port has hit so far was a value it invented, and each was found by
// differential work against the running machine: ESP that was 0x48 low, a heap limit that was not a constant,
// a profile that described the kit's ports instead of this program, an A: drive that did not exist. Finding
// them is expensive and replacing one by accident is free, which is the wrong way round. This is the cheap
// half: assert the measured values on the source that carries them, so a later edit that reverts one fails
// `node tools/checkall.js` in a second rather than surviving until the next emulator session.
//
// What it can and cannot see. It reads `port/`, `tools/` and `docs/` and nothing else. It does not need
// ENCHANT.EXP, the TBIOS image, the emulator or a built binary, which is what makes it runnable by a stranger
// who has cloned the repository and downloaded nothing. What it therefore cannot check is the port's runtime
// behaviour: that is `tools/divergence.py` against a capture, and it needs the machine.
//
// The failure case, demonstrated rather than asserted: `node tools/portcheck.js --root <copy>` points every
// read somewhere else, and running it against a copy with STACK put back to 0x11EAC8 fails on that check. A
// check that has never been seen to fail is a comment.
'use strict';
const fs = require('fs');
const path = require('path');

const args = process.argv.slice(2);
const rootFlag = args.indexOf('--root');
const ROOT = rootFlag >= 0 ? path.resolve(args[rootFlag + 1] || '.') : path.resolve(__dirname, '..');

const read = (rel) => {
	const p = path.join(ROOT, rel);
	try {
		return fs.readFileSync(p, 'utf8');
	} catch (e) {
		return null;
	}
};

// Comments are stripped before any value is judged, because this repository records corrected numbers in prose
// on purpose ("the older 0x11EAC8 was 0x48 low") and a check that forbade the history would forbid the record of
// how the value was found. What must not come back is the value in code.
const stripComments = (src) =>
	(src || '').replace(/\/\*[\s\S]*?\*\//g, ' ').replace(/\/\/[^\n]*/g, ' ');

let failures = 0;
let checks = 0;
const fail = (what, detail) => {
	failures++;
	console.log('  FAIL  ' + what + (detail ? '  (' + detail + ')' : ''));
};
const ok = (what, detail) => {
	checks++;
	console.log('  ok    ' + what + (detail ? '  ' + detail : ''));
};
// A value that must be present, quoted as the code has it.
const requireText = (src, needle, what) => {
	if (src === null) return fail(what, 'file missing');
	if (src.indexOf(needle) >= 0) ok(what, needle);
	else fail(what, 'expected to find ' + JSON.stringify(needle));
};
// A value that must be absent, which is how a corrected number stays corrected.
const forbidText = (src, needle, what) => {
	if (src === null) return fail(what, 'file missing');
	if (src.indexOf(needle) < 0) ok(what, 'absent: ' + needle);
	else fail(what, 'found the superseded value ' + JSON.stringify(needle));
};

console.log('portcheck: the measured values the port runs on');

// ---- port/main.cpp: the machine state the port has to hand over exactly ----
// Judged on the code only, so the comments can keep saying which values were wrong and why.
const main = stripComments(read('port/main.cpp'));

// 0x400000 is where CS 000C and DS 0014 both sit on the live machine (docs/recomp-plan.md).
requireText(main, 'PROGRAM_BASE = 0x400000', 'program linear base is the measured 0x400000');
// ESP at the entry, from STA at 000C:101A20, equal to the heap base the program stores at DS:0xDFD08.
requireText(main, '0x11EB10', 'hand-off ESP is the measured 0x11EB10');
forbidText(main, '0x11EAC8', 'the 0x48-low ESP is gone');
// The program's own heap limit: `lsl eax, ds`, measured 0x00377FFF. It is not a constant it chose.
requireText(main, '0x377FFF', "descriptor limit is the machine's 0x377FFF");
forbidText(main, '0x2000000', 'the fabricated heap limit is gone');
// Phar Lap 250Fh maps a protected-mode address through these, so both have to be this program's.
requireText(main, 'PROGRAM_BASE, 0x76000', "profile prog_phys is the machine's 0x76000");
forbidText(main, '0x49000', "the kit's prog_phys is gone");
// The screen: measured as ES=0120 at linear 0x80000000 on the running game. Without this the program has nowhere to
// draw and nothing faults, which cost a session and looked exactly like a program that would not start.
requireText(main, 'set_desc(0x0120, 0x80000000', 'the screen selector is the measured VRAM window');
// The entry is the MP header's own field, not a literal, which is what let BRITISH.EXP run unedited.
requireText(main, 'ENTRY_FROM_HEADER', 'entry comes from the header');
requireText(main, 'file[0x14]', 'the header field read is dword at 0x14');

// ---- port/floppy.h: the save-disk geometry, which was wrong twice before it was right ----
const floppy = read('port/floppy.h');
requireText(floppy, 'SS = 1024', 'a sector is 1024 bytes');
requireText(floppy, 'TOTAL_SECTORS = 1232', '1232 sectors');
requireText(floppy, 'ROOT_ENTRIES = 192', '192 root entries');
requireText(floppy, 'RESERVED_SECTORS = 1', 'one reserved sector');
{
	// The arithmetic, not the claim: 1232 x 1024 is the 2HD floppy's exact size.
	const secs = /TOTAL_SECTORS\s*=\s*(\d+)/.exec(floppy || '');
	const bytes = /SS\s*=\s*(\d+)/.exec(floppy || '');
	const total = secs && bytes ? Number(secs[1]) * Number(bytes[1]) : 0;
	if (total === 1261568) ok('geometry multiplies to the 1,261,568-byte floppy', '1232 x 1024');
	else fail('geometry multiplies to the 1,261,568-byte floppy', 'got ' + total);
}

// ---- tools/runtime-seeds.txt: the seeds the static rules cannot find ----
const seeds = read('tools/runtime-seeds.txt');
{
	const lines = (seeds || '').split('\n').map((l) => l.trim()).filter((l) => l && !l.startsWith('#'));
	const bad = lines.filter((l) => !/^0x[0-9a-f]{6,8}$/.test(l));
	if (lines.length === 4 && bad.length === 0) ok('the seed list holds its four measured entries', lines.join(' '));
	else fail('the seed list holds its four measured entries', lines.length + ' lines, ' + bad.length + ' malformed');
}

// ---- docs and code agree about the debug switches ----
// Every U2_* the docs offer has to exist in the port, and every one in the port has to be documented. A switch
// documented but absent is a promise the tool cannot keep, and one present but undocumented is a knob nobody
// can find. Both have failed here before.
const doc = read('docs/recomp-plan.md') || '';
const documented = new Set((doc.match(/`(U2_[A-Z_]+)/g) || []).map((s) => s.slice(1)));
const inCode = new Set((main || '').match(/U2_[A-Z_]+/g) || []);
const missing = [...documented].filter((n) => !inCode.has(n)).sort();
const undocumented = [...inCode].filter((n) => !documented.has(n)).sort();
if (!documented.size) fail('debug switches are documented', 'none found in docs/recomp-plan.md');
else if (!missing.length) ok('every documented switch exists in the port', documented.size + ' switches');
else fail('every documented switch exists in the port', 'documented but absent: ' + missing.join(', '));
if (undocumented.length) fail('every switch in the port is documented', undocumented.join(', '));
else ok('every switch in the port is documented', inCode.size + ' switches');

console.log(failures ? 'portcheck: ' + failures + ' failed' : 'portcheck: ' + checks + ' checks pass');
process.exit(failures ? 1 : 0);
