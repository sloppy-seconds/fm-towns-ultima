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
	// 88 entries: 4 hook pointers read live off the machine, 41 starts from the cross-seed comparison, and 43 resume
	// points derived by tools/resumepoints.js (functions the recompiler never resumes at because it stops at a `ret`).
	// The four original ones must still be there, so the check names them rather than only counting, otherwise a rewrite
	// that dropped the measured evidence would pass.
	const measured = ['0x0ffb72', '0x0e7238', '0x0ffc90', '0x0fdf5f'];
	const missing = measured.filter((a) => !lines.includes(a));
	if (lines.length === 88 && bad.length === 0 && missing.length === 0) ok('the seed list holds 88 entries, including the four measured on the machine');
	else fail('the seed list holds 88 entries, including the four measured on the machine', `${lines.length} lines, ${bad.length} malformed, missing ${missing.join(' ') || 'nothing'}`);
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
const doc = read('docs/recomp-plan.md') || '';
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

if (!documented.size) fail('debug switches are documented', 'none found in docs/recomp-plan.md');
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
			if (/Generate [Cc]haracter/.test(seg) && !/dead end/.test(seg)) bad.push('offers Generate Character without naming it a dead end');
			if (bad.length) fail(file + ' gives the tested port route', bad.join(', '));
			else ok(file + ' gives the tested port route', 'Journey Onward, the defect page, creation named a dead end');
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
		names = fs.readdirSync(path.join(ROOT, 'module'));
	} catch (e) {
		fail('the committed module is present', 'module/ missing');
	}
	if (names) {
		const game = names.filter((f) => /^p_game_(\d+|table)\.cpp$/.test(f));
		const tbios = names.filter((f) => /^p_tbios_(\d+|table)\.cpp$/.test(f));
		const mods = read('module/modules.cpp') || '';
		const registered = /g_mod_p_game/.test(mods) && /g_mod_p_tbios/.test(mods);
		if (game.length === 28 && tbios.length === 303 && registered)
			ok('the committed module holds both modules', game.length + ' game and ' + tbios.length + ' tbios sources, both registered in modules.cpp');
		else
			fail('the committed module holds both modules', game.length + ' game, ' + tbios.length + ' tbios, both registered: ' + registered + ' (a deliberate recompile changes these counts, and module/README.md with them)');

		const allowed = new Set(['p_game_funcs.h', 'p_tbios_funcs.h', 'ran off the end of a function']);
		const found = new Set();
		const extra = [];
		for (const f of game.concat(tbios)) {
			const src = read('module/' + f) || '';
			for (const m of src.matchAll(/"([^"\\]{6,})"/g)) {
				if (allowed.has(m[1])) found.add(m[1]);
				else if (extra.length < 5) extra.push(f + ': ' + JSON.stringify(m[1]));
			}
		}
		if (extra.length) fail('the module holds translated code and no game text', extra.join(' | '));
		else ok('the module holds translated code and no game text', found.size + ' literals, all the recompiler\'s own');
	}
}

console.log(failures ? 'portcheck: ' + failures + ' failed' : 'portcheck: ' + checks + ' checks pass');
process.exit(failures ? 1 : 0);
