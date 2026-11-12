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
// What it can and cannot see. It reads `port/`, `tools/` and `docs/`, plus every recompiler source under `module/`,
// which is what lets it scan each title's translated code for game text and check that the shared TBIOS module covers
// every title's measured seeds. `module/` is committed and is itself the recompiler's
// output, so reading it costs nothing: there is still no ENCHANT.EXP, no TBIOS image, no emulator and no built
// binary, which is what makes this runnable by a stranger who has cloned the repository and downloaded nothing. What it therefore cannot check is the port's runtime
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
// Graphics: a window by default for a person, none for a measurement, and no third behaviour.
requireText(main, 'graphics = "sdl"', 'the default graphics backend is sdl');
requireText(main, 'graphics != "sdl" && graphics != "none"', 'an unknown backend is refused rather than ignored');
requireText(read('tools/port-build.sh'), '--graphics=none', 'the build script pins the measurement path to no graphics');
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
	// 96 entries: 4 hook pointers read live off the machine, 41 starts from the cross-seed comparison, 43 resume
	// points derived by tools/resumepoints.js (functions the recompiler never resumes at because it stops at a `ret`),
	// and 8 jump-table handlers added on 2026-11-01. Those eight are the reason this list can never be derived: the
	// only reference to them is a `call dword ptr cs:[ebx]` through a table, so no direct-branch scan sees them.
	// The four original ones must still be there, so the check names them rather than only counting, otherwise a rewrite
	// that dropped the measured evidence would pass.
	const measured = ['0x0ffb72', '0x0e7238', '0x0ffc90', '0x0fdf5f'];
	const missing = measured.filter((a) => !lines.includes(a));
	if (lines.length === 96 && bad.length === 0 && missing.length === 0) ok('the seed list holds 96 entries, including the four measured on the machine');
	else fail('the seed list holds 96 entries, including the four measured on the machine', `${lines.length} lines, ${bad.length} malformed, missing ${missing.join(' ') || 'nothing'}`);
}

// ---- the TownsOS selector table, measured off the running game with `PRI GDT` ----
// Every one of these was a silent base-of-zero before it was defined, and a selector that resolves to the wrong place
// does not fault: it just draws or reads somewhere else, which is why the screen selector 0x0120 cost a session and
// the font selector 0x0138 cost another. They are asserted as source text so a deletion cannot pass quietly.
{
	const want = [
		['0x0120', '0x80000000', '0x7FFFF', 'VRAM, the screen'],
		['0x0128', '0x80100000', '0x7FFFF', 'VRAM, planar-packed view'],
		['0x0130', '0x81000000', '0x1FFFF', 'sprite RAM'],
		['0x0138', '0xC2100000', '0x41FFF', 'the font ROM'],
		['0x0140', '0xC2200000', '0xFFF', 'PCM wave RAM'],
	];
	const absent = want.filter(([sel, base, lim]) => !(main || '').includes(`set_desc(${sel}, ${base}, ${lim})`));
	if (absent.length) fail('the TownsOS selectors are defined as measured', 'missing ' + absent.map(([s]) => s).join(' '));
	else ok('the TownsOS selectors are defined as measured', want.map(([s]) => s).join(' '));
}

// ---- the font ROM is loaded, which is what makes the game's text appear ----
{
	if ((main || '').includes('m.font = std::move(glyphs)')) ok('the font ROM is loaded into the machine', 'U2_FONT or FMT_FNT.ROM');
	else fail('the font ROM is loaded into the machine', 'no assignment to m.font');
}

// ---- the kanji font, which is in no ROM, is loaded and TBIOS is pointed at it ----
// Two-byte characters are fetched through a far pointer at TBIOS:0x1E8, and the ROM's own placeholder there points at a
// blank range of the character ROM. TownsOS replaces it at boot with 0003B7E1:0040; the port has to do the same, and
// the bitmap offset inside UTFONT.FNT's records is 5, which was measured against the machine and not read off the
// layout. Each of the three is asserted separately because losing any one of them brings back the empty menu with no
// message at all.
{
	const code = stripComments(main || '');
	requireText(code, '\\UTFONT.FNT', 'the kanji font is read from the disc');
	requireText(code, 'utf.data() + rec + 5', 'the glyph bitmap offset in UTFONT.FNT is 5');
	requireText(code, 'm.write_block(0x100000 + 0x1E8, ptr, sizeof ptr)', 'TBIOS is pointed at the kanji font');
	requireText((main || ''), 'set_desc(0x0040, 0, 0x3FFFFF)', 'selector 0040 is flat low RAM, as TownsOS defines it');
	if (/rec \+ [678]/.test(code)) fail('the glyph bitmap offset in UTFONT.FNT is 5', 'a different offset is in the code');
	else ok('no other bitmap offset is present', '+5 only');
}

// ---- docs and code agree about the debug switches ----
// Every U2_* the docs offer has to exist in the port, and every one in the port has to be documented. A switch
// documented but absent is a promise the tool cannot keep, and one present but undocumented is a knob nobody
// can find. Both have failed here before.
// The switches were documented in docs/recomp-plan.md until the plan split of 2026-11-01 moved that record
// into docs/plan-recomp.md. Both are read so the check survives the move and survives someone reverting it.
const doc = [read('docs/plan-recomp.md'), read('docs/recomp-plan.md')].filter(Boolean).join('\n');
const documented = new Set((doc.match(/`(U2_[A-Z_]+)/g) || []).map((s) => s.slice(1)));
const inCode = new Set((main || '').match(/U2_[A-Z_]+/g) || []);
const missing = [...documented].filter((n) => !inCode.has(n)).sort();
const undocumented = [...inCode].filter((n) => !documented.has(n)).sort();
// THE 16-COLOUR PALETTE'S NIBBLE EXPANSION. The emulator's TownsCrtcBase::AnalogPalette::Set16 does
// `v &= 0xF0; v |= v >> 4;` and Set256 a plain store. The kit used to store the game's raw byte for both, which
// drew every 16-colour entry slightly wrong: `PRI PALETTE` on the running game reports 007777, FFFF55, 11CC22,
// 0022EE for the four entries the game sets, and the port reported 0A7878, FFFF50, 14C828, 0028E6. A palette a
// few units out on every channel is not visible in a screenshot, which is why it survived; the table is the
// measurement that catches it.
{
	const io = read('fmtownskit/runtime/towns_io.cpp');
	if (io === null) ok('the 16-colour palette expands the high nibble', 'fmtownskit not initialised, skipped');
	else requireText(io, 'x | (x >> 4)', 'the 16-colour palette expands the high nibble, as the emulator does');
}

// THE KEYBOARD SPEAKS THE JIS KEYBOARD'S CODES, NOT PC/AT SET 1. ENCHANT indexes a 114-entry table with (BX>>8)-1,
// so a code from the wrong set is a wrong entry and a dead key: measured on the port, space, return and up did nothing
// while 'a' and down worked, and those are the two codes the two sets share. Return 0x1D against 0x1C, space 0x35
// against 0x39, up 0x4D against 0x48. A wrong scan code fails silently, so it is asserted rather than trusted.
{
	const sdl = read('fmtownskit/runtime/towns_sdl.cpp');
	if (sdl === null) ok('the front-end uses the Towns keyboard codes', 'fmtownskit not initialised, skipped');
	else {
		requireText(sdl, 'kPcToTowns[scan & 0x7F]', 'the front-end translates PC/AT codes to the Towns keyboard');
		requireText(sdl, '0x19, 0x1A, 0x1C, 0x29, 0x1D, 0x52, 0x1E, 0x1F', 'P, brackets, return 0x1D, ctrl 0x52, A, S');
		requireText(sdl, '0,    0x35, 0x55, 0x5D', 'space is 0x35 and caps 0x55');
		requireText(sdl, '0x4D, 0x6E, 0,    0x4F, 0,    0x51, 0,    0x70', 'up 0x4D, left 0x4F, right 0x51');
	}
}

if (!documented.size) fail('debug switches are documented', 'none found in docs/plan-recomp.md or docs/recomp-plan.md');
else if (!missing.length) ok('every documented switch exists in the port', documented.size + ' switches');
else fail('every documented switch exists in the port', 'documented but absent: ' + missing.join(', '));
if (undocumented.length) fail('every switch in the port is documented', undocumented.join(', '));
else ok('every switch in the port is documented', inCode.size + ' switches');

// ---- the one tracked save disk, and the ignore rule that has to stay narrow ----
// assets/save-disk/userdisk.hdm.zip is the only disk image in git. The port's tested route is Journey Onward with a
// character that already exists, so a quickstart that says "pick slot 1" is only true while this file is the one it
// was written against. The check reads the zip's central directory and asserts the entry's name, uncompressed size and
// CRC-32, which is a check on the disk rather than on the container bytes: the same disk packed again gives the same
// numbers, and a different disk cannot pass.
//
// The second half matters as much as the first: the exception must not have been implemented by weakening the general
// rules, because every other *.hdm here is disc-derived and every *.zip is a disc rip.
{
	const crypto = require('crypto');
	const zipPath = path.join(ROOT, 'assets', 'save-disk', 'userdisk.hdm.zip');
	let entry = null;
	const want = { name: 'userdisk.hdm', size: 1261568, crc32: 0xf4d2c1ea };
	let buf = null;
	try {
		const z = fs.readFileSync(zipPath);
		// End of central directory: 0x06054B50, scanned back from the end because a zip comment may follow it.
		let eocd = -1;
		for (let i = z.length - 22; i >= 0 && i > z.length - 65558; i--) {
			if (z.readUInt32LE(i) === 0x06054b50) {
				eocd = i;
				break;
			}
		}
		if (eocd < 0) throw new Error('no end-of-central-directory record');
		const cd = z.readUInt32LE(eocd + 16);
		if (z.readUInt32LE(cd) !== 0x02014b50) throw new Error('no central directory header');
		const nameLen = z.readUInt16LE(cd + 28);
		entry = {
			crc32: z.readUInt32LE(cd + 16),
			size: z.readUInt32LE(cd + 24),
			name: z.toString('latin1', cd + 46, cd + 46 + nameLen),
		};
	} catch (e) {
		fail('the tracked save disk is present and readable', e.message);
	}
	if (entry) {
		const okNow = entry.name === want.name && entry.size === want.size && entry.crc32 === want.crc32;
		if (okNow)
			ok('the tracked save disk is the one the quickstart names', entry.name + ' ' + entry.size + ' bytes crc32 ' + entry.crc32.toString(16));
		else
			fail(
				'the tracked save disk is the one the quickstart names',
				`got ${entry.name} ${entry.size} bytes crc32 ${entry.crc32.toString(16)}, expected ${want.name} ` +
					`${want.size} bytes crc32 ${want.crc32.toString(16)} ` +
					'(update the numbers here, the table in assets/save-disk/README.md and any quickstart slot number together)'
			);
	}
	const ignore = read('.gitignore') || '';
	const keepsGeneralRule = /^\*\.[hH]\[dD\]\[mM\]/m.test(ignore) || /^\*\.hdm$/m.test(ignore);
	const keepsZipRule = /^\*\.[zZ]\[iI]\[pP\]/m.test(ignore) || /^\*\.zip$/m.test(ignore);
	const namesException = /^!assets\/save-disk\/userdisk\.hdm\.zip$/m.test(ignore);
	if (keepsGeneralRule && keepsZipRule && namesException)
		ok('the *.hdm and *.zip rules still apply generally, with one named exception', '!assets/save-disk/userdisk.hdm.zip');
	else
		fail(
			'the *.hdm and *.zip rules still apply generally, with one named exception',
			(keepsGeneralRule ? '' : 'the *.hdm rule is gone ') +
				(keepsZipRule ? '' : 'the *.zip rule is gone ') +
				(namesException ? '' : 'no named exception')
		);
}

// ---- the one tracked ROM, pinned by hash ----
// assets/font-rom/FMT_FNT.ROM is the second and last named exception, added 2026-11-02. The port renders no text without
// it, and it is not Fujitsu code: pinterior's 16dot.py generates it from Shinonome, a public-domain BDF font, which the
// FreeTOWNS set's own licence states. What is NOT established is written in assets/font-rom/README.md: neither upstream
// attaches an explicit grant to the generated file.
//
// The hash is the point. An exception by name that does not pin the bytes lets the file be swapped for any other 256 KB
// of ROM, which is exactly what the deny-by-extension rule exists to stop. Size and sha256 together mean a different ROM
// cannot pass, and a repacked or regenerated one is a deliberate edit to this line.
{
	const crypto = require('crypto');
	const want = { size: 262144, sha256: 'b62399cd7ad504229baa17ebe7260e683da0fb515d6162564e889f705ab07431' };
	const romPath = path.join(ROOT, 'assets', 'font-rom', 'FMT_FNT.ROM');
	let got = null;
	try {
		const b = fs.readFileSync(romPath);
		got = { size: b.length, sha256: crypto.createHash('sha256').update(b).digest('hex') };
	} catch (e) {
		fail('the tracked font ROM is present', e.message);
	}
	if (got) {
		if (got.size === want.size && got.sha256 === want.sha256)
			ok('the tracked font ROM is the FreeTOWNS generated font', got.size + ' bytes ' + got.sha256.slice(0, 16));
		else
			fail(
				'the tracked font ROM is the FreeTOWNS generated font',
				`got ${got.size} bytes ${got.sha256.slice(0, 16)}, expected ${want.size} bytes ${want.sha256.slice(0, 16)}` +
					' (a different ROM is exactly what the deny-by-extension rule is for: update the numbers here, assets/font-rom/README.md and tools/precommit-guard.sh together, or do not commit it)'
			);
	}
	const ignore = read('.gitignore') || '';
	const keepsRomRules = /^\*\.[rR][oO][mM]$/m.test(ignore);
	const namesRomException = /^!assets\/font-rom\/FMT_FNT\.ROM$/m.test(ignore);
	if (keepsRomRules && namesRomException)
		ok('the *.ROM rules still apply generally, with one named exception', '!assets/font-rom/FMT_FNT.ROM');
	else
		fail(
			'the *.ROM rules still apply generally, with one named exception',
			(keepsRomRules ? '' : 'the *.ROM rule is gone ') + (namesRomException ? '' : 'no named exception')
		);
	const guard = read('tools/precommit-guard.sh') || '';
	if (/assets\/font-rom\/FMT_FNT\\\.ROM/.test(guard)) ok('the commit guard allows that one path by name', 'ALLOW_RE');
	else fail('the commit guard allows that one path by name', 'assets/font-rom/FMT_FNT.ROM is not in ALLOW_RE, so the ROM cannot be committed');
}

// ---- the disc is a source and a cache, and the A: drive can be a directory ----
// Two behaviours a player depends on, neither visible in a build, and each one line away from silently reverting to
// "extract it yourself first" and "you must own a floppy image". Asserted rather than trusted: the whole point of the
// 2026-11-02 change is that the setup is one file, and a refactor that dropped the fallback would still compile.
{
	const main = read('port/main.cpp') || '';
	const store = read('port/savestore.h');
	const checks = [
		[main.includes('disc_or_cache'), 'the port reads its own disc files through one cache-first helper'],
		[main.includes('on_disc_cached'), "the program's asset opens can be served from the cache"],
		[store !== null && store.includes('class Dir'), 'a directory can answer the A: drive hooks'],
		[store !== null && store.includes('kSeed'), 'a fresh save directory is seeded from the disk that ships'],
		[main.includes('g_saves_dir'), 'the port can switch the A: drive from the image to that directory'],
		[main.includes('g_embedded_font_rom'), 'the port can take the glyph ROM from its own binary'],
		[main.includes('.u2port.cue'), 'the cue it writes cannot collide with the one the download ships'],
	];
	for (const [pass, what] of checks) {
		if (pass) ok(what);
		else fail(what, 'missing from port/main.cpp or port/savestore.h, so that behaviour has been lost');
	}
}

// ---- the port's defect page, and the route the quickstarts give ----
// docs/port-defects.md exists to stop a bug list filling up with plausible bugs nobody saw, and its rule is
// structural: an entry needs the observation that produced it, so a row with an empty observation cell is exactly
// the padded entry the page forbids. The second half is the other failure case, a quickstart that offers Generate
// Character because the menu has it, caught by requiring the tested route and the link wherever the port is documented.
{
	const page = read('docs/port-defects.md');
	if (page === null) fail('the port defect page exists', 'docs/port-defects.md missing');
	else {
		const rows = page.split('\n').filter((l) => /^\|\s*\d+\s*\|/.test(l));
		const thin = rows.filter((l) => (l.split('|')[3] || '').trim().length < 20);
		if (!rows.length) fail('the defect table has rows', 'none found');
		else if (thin.length)
			fail('every defect row carries the observation that found it', thin.length + ' of ' + rows.length + ' rows have a thin observation cell');
		else ok('every defect row carries the observation that found it', rows.length + ' rows');
	}
	const portSection = (src, anchor) => {
		const i = src.indexOf(anchor);
		if (i < 0) return null;
		const rest = src.slice(i + anchor.length);
		const m = rest.match(/\n#{2,3} /);
		return m ? rest.slice(0, m.index) : rest;
	};
	for (const [file, anchor] of [
		['README.md', '### Play the recompiled port instead'],
		['docs/quickstart.md', '### The port, natively'],
	]) {
		const seg = portSection(read(file) || '', anchor);
		if (seg === null) fail(file + ' has a port section', 'anchor not found');
		else {
			const bad = [];
			if (!/Journey Onward/i.test(seg)) bad.push('no Journey Onward route');
			if (!/port-defects\.md/.test(seg)) bad.push('no link to the defect page');
			// This asserted the opposite until 2026-11-01: "offers Generate Character without naming it a dead end".
			// That was correct when it was written and stopped being true when defect 3 was closed (the digit row
			// was the blocker, kit 4028a76) and the save disk became writable. A gate that keeps asserting a
			// fixed bug trains people to read past it. What it checks now is that the route it names is one that
			// has been run: creation is offered together with the fact that it persists, and the quit key it names
			// is Ctrl-Q, which is what the kit actually does since 0b3ab59. Naming Esc or Q here is the failure,
			// because neither quits any more.
			if (/Generate [Cc]haracter/.test(seg) && !/persist/i.test(seg)) bad.push('offers Generate Character without saying the character persists');
			if (/`?Esc`? or `?Q`? ends the run/i.test(seg)) bad.push('still says Esc or Q ends the run');
			if (bad.length) fail(file + ' gives the tested port route', bad.join(', '));
			else ok(file + ' gives the tested port route', 'Journey Onward, the defect page, creation with persistence');
		}
	}
}

// ---- the committed module ----
// module/ is the recompiled C++, in git by decision rather than by accident (docs/licensing.md, plan item 9f).
// Two claims are worth a gate. The first is that it is whole: an empty or half module builds and then faults far
// away from its cause, which is this project's usual way of losing an afternoon. The second is the claim that makes
// the policy defensible at all, which is that this is translated code and not the game's media smuggled in. That
// is measured by counting string literals long enough to be text: the recompiler emits exactly three, and if a
// future recompile starts embedding the game's strings the count moves and the gate fails.
{
	let names = null;
	try {
		// TWO DIRECTORIES SINCE 2026-11-12: each title's game module under module/<id>, and the one shared TBIOS module.
		// The counts below are Ultima II's, because that is the title whose module this gate was written against.
		names = fs.readdirSync(path.join(ROOT, 'module', 'u2'))
			.concat(fs.readdirSync(path.join(ROOT, 'module', 'tbios')));
	} catch (e) {
		fail('the committed module is present', 'module/u2 or module/tbios missing');
	}
	if (names) {
		const game = names.filter((f) => /^p_game_(\d+|table)\.cpp$/.test(f));
		const tbios = names.filter((f) => /^p_tbios_(\d+|table)\.cpp$/.test(f));
		const mods = read('module/u2/modules.cpp') || '';
		const registered = /g_mod_p_game/.test(mods) && /g_mod_p_tbios/.test(mods);
		if (game.length === 28 && tbios.length === 303 && registered)
			ok('the committed module holds both modules', game.length + ' game and ' + tbios.length + ' tbios sources, both registered in modules.cpp');
		else
			fail('the committed module holds both modules', game.length + ' game, ' + tbios.length + ' tbios, both registered: ' + registered + ' (a deliberate recompile changes these counts, and module/README.md with them)');

		const allowed = new Set(['p_game_funcs.h', 'p_tbios_funcs.h', 'ran off the end of a function']);
		const found = new Set();
		const extra = [];
		// EVERY committed module directory, not only Ultima II's. What is being gated is that no recompiled module
		// carries the game's text, and a title committed without this scan is a title nobody checked. The directory
		// list is read rather than written out, so the next one is covered the day it lands.
		let scanned = 0;
		for (const dir of fs.readdirSync(path.join(ROOT, 'module'), { withFileTypes: true }).filter((d) => d.isDirectory())) {
			for (const f of fs.readdirSync(path.join(ROOT, 'module', dir.name))) {
				if (!/^p_(game|tbios)_(\d+|table)\.cpp$/.test(f)) continue;
				scanned++;
				const src = read('module/' + dir.name + '/' + f) || '';
				for (const m of src.matchAll(/"([^"\\]{6,})"/g)) {
					if (allowed.has(m[1])) found.add(m[1]);
					else if (extra.length < 5) extra.push(dir.name + '/' + f + ': ' + JSON.stringify(m[1]));
				}
			}
		}
		if (extra.length) fail('the module holds translated code and no game text', extra.join(' | '));
		else ok('the module holds translated code and no game text', found.size + ' literals across ' + scanned + ' sources, all the recompiler\'s own');
	}
}

// ---- the shared TBIOS module covers every title's measured extra seeds ----
// module/tbios is regenerated on purpose and it is shared, so a regeneration that was run before somebody added a
// title's seed silently drops a function and every title keeps building, because a missing function is a runtime
// fault rather than a link error. That is exactly how BRITISH.EXP stopped at frame 1297 with
// `no recompiled function at 0110:00006864`, while Ultima II, III and the demos ran fine. The addresses are read
// from the files tools/games.js names, so this needs no list of its own and covers the next title for free.
{
	const games = require('./games.js').GAMES;
	const funcs = read('module/tbios/p_tbios_funcs.h');
	if (funcs === null) fail('the shared TBIOS module covers every title\'s extra seeds', 'module/tbios/p_tbios_funcs.h missing');
	else {
		const missing = [];
		let wanted = 0;
		for (const g of games) {
			if (!g.tbiosSeeds) continue;
			const list = read(g.tbiosSeeds);
			if (list === null) {
				fail('the shared TBIOS module covers every title\'s extra seeds', g.id + ' names ' + g.tbiosSeeds + ' and it is missing');
				continue;
			}
			for (const line of list.split('\n')) {
				const hex = line.replace(/#.*/, '').trim();
				if (!hex) continue;
				wanted++;
				const addr = parseInt(hex, 16);
				if (!Number.isFinite(addr)) {
					missing.push(g.id + ': ' + JSON.stringify(hex) + ' is not an address');
					continue;
				}
				// The recompiler names a function after its runtime address, eight lower-case hex digits.
				const name = 'f_' + addr.toString(16).padStart(8, '0');
				if (!new RegExp('\\b' + name + '\\b').test(funcs)) missing.push(g.id + ' needs ' + name);
			}
		}
		if (missing.length) fail('the shared TBIOS module covers every title\'s extra seeds', missing.join(' | ') + ' (regenerate module/tbios with the union of the seeds)');
		else ok('the shared TBIOS module covers every title\'s extra seeds', wanted + ' addresses from the titles that name one, all present in p_tbios_funcs.h');
	}
}

// The release binary's portability rests on SDL being linked static, and the real proof is `ldd` on a built
// binary, which release-package.sh does and refuses on. What lives here is the silent-failure version: a pin that
// lost its hash, a script that stopped asserting, a CMake that stopped preferring the static target. Each of these
// was seen to fail by breaking the thing it watches, per the rule that a check nobody has seen fail is a comment.
{
	const pin = read('tools/sdl-pin.txt');
	if (pin === null) fail('the SDL pin is a real pin', 'tools/sdl-pin.txt missing');
	else {
		const rows = pin.trim().split('\n').slice(1).filter((l) => l.trim());
		const good = rows.filter((l) => {
			const [v, sha, bytes] = l.split('\t');
			return /^\d+\.\d+\.\d+$/.test(v) && /^[0-9a-f]{64}$/.test(sha) && /^\d+$/.test(bytes);
		});
		if (rows.length === 1 && good.length === 1) ok('the SDL pin is one well-formed row', rows[0].split('\t')[0]);
		else fail('the SDL pin is one well-formed row', rows.length + ' data rows, ' + good.length + ' well formed');
	}

	const sdl = read('tools/sdl-from-source.sh');
	if (sdl === null) fail('SDL is built static from the pinned release', 'tools/sdl-from-source.sh missing');
	else {
		const wants = ['-DSDL_SHARED=OFF', '-DSDL_STATIC=ON', 'sha256sum', 'LICENSE.SDL3'];
		const gone = wants.filter((w) => !sdl.includes(w));
		if (gone.length) fail('SDL is built static from the pinned release', 'missing ' + gone.join(' '));
		else ok('SDL is built static from the pinned release', wants.join(', '));
	}

	const pkg = read('tools/release-package.sh');
	if (pkg === null) fail('the release refuses a binary that needs libSDL3', 'tools/release-package.sh missing');
	else {
		const wants = ['sdl-from-source.sh', 'libsdl3', 'LICENSE.SDL3'];
		const gone = wants.filter((w) => !pkg.includes(w));
		if (gone.length) fail('the release refuses a binary that needs libSDL3', 'missing ' + gone.join(' '));
		else ok('the release refuses a binary that needs libSDL3', 'calls the source build, asserts on ldd, ships the licence');
	}

	// THE GLIBC FLOOR. Two things can rot here and both are silent: the release stops asking the question, or the
	// number in the tool and the number in the doc drift apart, which is the count-in-two-places defect this project
	// keeps finding. The floor is a maximum (Paul set 2.34 on 2026-11-10) and tools/glibcfloor.js owns it.
	{
		const floorDoc = read('docs/port-structure.md') || '';
		const m = /GLIBC_(\d+\.\d+) \(the floor/.exec(floorDoc) || /floor is \*\*GLIBC_(\d+\.\d+)\*\*/.exec(floorDoc);
		const inTool = read('tools/glibcfloor.js') || '';
		const toolFloor = /const FLOOR = \[(\d+), (\d+)\];/.exec(inTool);
		if (!m) fail('the glibc floor is stated once and checked', 'no floor found in docs/port-structure.md');
		else if (!toolFloor) fail('the glibc floor is stated once and checked', 'no FLOOR constant in tools/glibcfloor.js');
		else if (m[1] !== toolFloor[1] + '.' + toolFloor[2])
			fail('the glibc floor is stated once and checked', `docs say ${m[1]}, the tool says ${toolFloor[1]}.${toolFloor[2]}`);
		else if (!pkg || !pkg.includes('glibcfloor.js'))
			fail('the glibc floor is stated once and checked', 'tools/release-package.sh does not call tools/glibcfloor.js');
		else ok('the glibc floor is stated once and checked', 'GLIBC_' + m[1] + ', and the release refuses above it');
	}

	const cmake = read('port/CMakeLists.txt');
	if (cmake === null) fail('the port asks for a relative rpath', 'port/CMakeLists.txt missing');
	else if (cmake.includes('SDL3::SDL3-static') && cmake.includes('$ORIGIN'))
		ok('the port asks for a relative rpath', 'static target named, $ORIGIN on the rpath');
	else fail('the port asks for a relative rpath', 'no SDL3::SDL3-static status or no $ORIGIN');
}

// ---- the strangler's shadow manifest ---------------------------------------------------------------
//
// A shadow is a hand-written native function registered for a guest address the recompiler also emits. It works
// only because x86_lookup_cs() walks g_x86_modules in order and takes the FIRST module with a function at the
// address. So the two things that can silently kill every shadow are the module order and an address that stops
// being a function start after a recompile. Both are checked here, and both are text in committed files, so this
// runs without the disc, the emulator or a build.
//
// There is deliberately NO count assertion. Removing a shadow is a visible one-line deletion in a committed file,
// and a second place recording the number is the drift this repository keeps paying for.
{
	const shim = stripComments(read('port/native_shadows.cpp'));
	const order = stripComments(read('port/modules.cpp'));
	const generated = stripComments(read('module/u2/modules.cpp'));
	const funcsHdr = read('module/u2/p_game_funcs.h');

	// Parse `{ 0xADDR, symbol }` entries from the table.
	const entries = [];
	for (const m of (shim || '').matchAll(/\{\s*(0x[0-9a-fA-F]+)\s*,\s*([A-Za-z_]\w*)\s*\}/g)) {
		entries.push({ addr: parseInt(m[1], 16), symbol: m[2] });
	}

	// Parse the module order out of `g_x86_modules[] = { &a, &b, ... }`.
	const moduleOrder = (src) => {
		const m = /g_x86_modules\s*\[\s*\]\s*=\s*\{([^}]*)\}/.exec(src || '');
		return m ? [...m[1].matchAll(/&\s*(\w+)/g)].map((x) => x[1]) : null;
	};

	const portOrder = moduleOrder(order);
	const genOrder = moduleOrder(generated);

	// 1. The native module must be FIRST, because first hit wins and appending it is a silent revert.
	if (!portOrder) fail('the native module is listed first', 'no g_x86_modules[] initialiser in port/modules.cpp');
	else if (portOrder[0] !== 'g_mod_native')
		fail('the native module is listed first', 'order is ' + portOrder.join(', ') + ', so every shadow is dead');
	else ok('the native module is listed first', portOrder.join(', '));

	// 2. Every module the recompiler generated must still be in the port's list. A recompile that adds a module
	//    would otherwise drop it from the build with nothing to say so.
	if (!genOrder) fail('the port list covers every generated module', 'no g_x86_modules[] in module/u2/modules.cpp');
	else {
		const missing = genOrder.filter((m) => !(portOrder || []).includes(m));
		if (missing.length) fail('the port list covers every generated module', 'missing ' + missing.join(' '));
		else ok('the port list covers every generated module', genOrder.join(', '));
	}

	// 3. Every shadow address must still be a declared function start. A recompile can move starts, and a shadow
	//    for an address that is no longer a start is silently inert.
	const notStart = entries.filter((e) => !(funcsHdr || '').includes('void f_' + e.addr.toString(16).padStart(8, '0') + '('));
	if (notStart.length)
		fail('every shadow address is a function start', 'no f_ declaration for ' +
			notStart.map((e) => '0x' + e.addr.toString(16)).join(' '));
	else ok('every shadow address is a function start', entries.length + ' shadow(s)');

	// 4. Every shadow symbol must be defined in the same file, or the table will not link.
	const undefined = entries.filter((e) => !new RegExp('void\\s+' + e.symbol + '\\s*\\(').test(shim || ''));
	if (undefined.length) fail('every shadow symbol is defined', 'not defined: ' + undefined.map((e) => e.symbol).join(' '));
	else ok('every shadow symbol is defined', entries.length + ' shadow(s)');

	// 5. Ascending, because x86_lookup() binary-searches and an unsorted entry is simply never found.
	const outOfOrder = entries.filter((e, i) => i > 0 && e.addr < entries[i - 1].addr);
	if (outOfOrder.length)
		fail('the shadow table is ascending', 'out of order at 0x' + outOfOrder[0].addr.toString(16));
	else ok('the shadow table is ascending', entries.length + ' shadow(s)');
}

// THE CD CONTRACT, resolved 2026-11-09 (docs/audio-playback.md 9.15). Two things must stay true. The 2511h real-mode window must be
// mapped back onto the program before any service touches the buffer, because without that every reply went to a copy the program never
// read: the table of contents landed at 0x76BA4 while the program's own 0x400BA4 stayed zero. And the position substitution that used to
// answer for the program must not come back, because it was proven dead by removing it and re-running the create route to identical ranges.
{
	const dos = stripComments(read('fmtownskit/runtime/towns_dos.cpp'));
	requireText(dos, 'buf = pr.prog_base + (buf - pr.prog_phys)', 'the 2511h buffer is mapped onto the program');
	forbidText(dos, 'U2_CD_NOFALLBACK', 'the position substitution stays removed');
	forbidText(dos, 'to_msf_bcd', 'the table of contents stays binary, which is what the program copies');
}

// THE SOUND-EFFECT RETRIGGER, measured 2026-11-09 (docs/audio-playback.md 10, plan item 5q). The original re-triggers every sound effect
// with a start write to channel 7 rather than looping in hardware, and a start write resets the channel address whether or not the channel
// is enabled. Guarding that reset on the channel being off dropped every retrigger that arrived during playback, which is why a moongate
// played once where the original plays it several times.
{
	const snd = stripComments(read('fmtownskit/runtime/towns_sound.cpp'));
	forbidText(snd, 'if (!c.on) c.addr', 'a start write resets the address even while the channel is on');
}

console.log(failures ? 'portcheck: ' + failures + ' failed' : 'portcheck: ' + checks + ' checks pass');
process.exit(failures ? 1 : 0);
