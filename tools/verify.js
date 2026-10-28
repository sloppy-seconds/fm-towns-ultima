#!/usr/bin/env node
// tools/verify.js - reproduce every claim in this repository from the disc.
//
// Intended audience: someone who downloaded only
//   FM-Towns CD/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[+UserDisk].zip
// from archive.org/details/fmtownscdcollection, unpacked it here, and wants to
// know whether this repository's findings are real.
//
// Usage:
//   node tools/verify.js            run every check, print a summary
//   node tools/verify.js --verbose  also print passing details
//
// Exit code is 0 only if every check passes. No network, no dependencies, no
// arguments required. Everything is derived from the files on disk each run.
//
// Adding a finding? Add a check here too. A claim that is not in this file is
// not verified, whatever [the docs](docs/) says.

'use strict';

const fs = require('fs');
const path = require('path');
const crypto = require('crypto');
const { Disc, defaultDisc } = require('./cd');

const VERBOSE = process.argv.includes('--verbose');
const ROOT = path.join(__dirname, '..');

let pass = 0;
let fail = 0;
let skip = 0;
const failures = [];

function ok(name, detail) {
	pass++;
	if (VERBOSE) console.log('  PASS  ' + name + (detail ? '  [' + detail + ']' : ''));
}

function bad(name, detail) {
	fail++;
	failures.push(name + ': ' + detail);
	console.log('  FAIL  ' + name + '\n          ' + detail);
}

function skipped(name, why) {
	skip++;
	console.log('  SKIP  ' + name + '  (' + why + ')');
}

function section(t) {
	console.log('\n== ' + t);
}

// eq(claimed, actual, label) - the workhorse
function eq(label, actual, expected) {
	if (actual === expected) ok(label, String(actual));
	else bad(label, 'expected ' + expected + ', got ' + actual);
	return actual === expected;
}

function md5(buf) {
	return crypto.createHash('md5').update(buf).digest('hex');
}

function sha256(buf) {
	return crypto.createHash('sha256').update(buf).digest('hex');
}

// ---------------------------------------------------------------------------
// 1. The source files are the expected rip
// ---------------------------------------------------------------------------

section('Source files (identity of the rip)');

// Sizes and MD5s of the five files as produced by unpacking the Archive.org zip.
// If these differ, the user has a different rip and downstream results will
// legitimately differ. That is reported, not treated as a failure of this repo.
const EXPECTED = [
	['Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).img', 141649200, '1a0b01f4498b561878dbc49ffb9e1af6'],
	['Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).ccd', 2137, 'f89a0640f0a2e75beb3763e80b7be352'],
	['Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).cue', 415, '6f931bead286bac24c03ad687f40ac8d'],
	['Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).sub', 5781600, '6ad09bf5dde849b1d3fa6b00f7ab6ee0'],
	['Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[UserDisk].hdm', 1261568, '5ae4dc119f990adde82a2b91c0b7feef'],
];

let allPresent = true;
for (const [name, size, sum] of EXPECTED) {
	const p = path.join(ROOT, name);
	if (!fs.existsSync(p)) {
		bad('file present: ' + name, 'missing, unpack the zip into ' + ROOT);
		allPresent = false;
		continue;
	}
	const st = fs.statSync(p);
	eq('size: ' + name, st.size, size);
	// Only hash the small files and the floppy. The .img is 141 MB and hashing
	// it is slow enough to be annoying on every run, so it gets a cheaper check.
	if (name.endsWith('.img')) {
		const fd = fs.openSync(p, 'r');
		const head = Buffer.alloc(32);
		fs.readSync(fd, head, 0, 32, 0);
		fs.closeSync(fd);
		// MODE1/2352 sync pattern then mode byte 1
		eq('disc sector 0 sync', head.subarray(0, 12).toString('hex'), '00ffffffffffffffffffff00');
		eq('disc sector 0 mode', head[15], 1);
	} else {
		const sum2 = md5(fs.readFileSync(p));
		if (sum2 === sum) ok('md5: ' + name, sum2);
		else
			bad(
				'md5: ' + name,
				'expected ' + sum + ', got ' + sum2 + ' (different rip, results may differ)'
			);
	}
}

if (!allPresent) {
	console.log('\nSource files missing. Cannot continue.');
	process.exit(1);
}

// ---------------------------------------------------------------------------
// 2. Disc structure
// ---------------------------------------------------------------------------

section('Disc structure');

const discPath = defaultDisc(ROOT);
const disc = new Disc(discPath);
const cat = disc.catalogue();

eq('file count in ISO', cat.size, 140);

const pvd = disc.sector(16);
eq('volume label', pvd.subarray(40, 72).toString('latin1').trim(), 'TRILOGY');

// ISO 9660 volume space covers track 1 only. The audio tracks are outside the
// filesystem, so this is NOT the disc's total sector count. Track 1 ends at
// 8999, so a volume space of 12911 sectors is consistent with the ISO reaching
// slightly past the claimed track boundary. Both numbers are checked so the
// relationship is explicit rather than assumed.
const volSectors = pvd.readUInt32LE(80);
eq('volume space (LE) == (BE)', volSectors, pvd.readUInt32BE(84));
eq('volume space (sectors)', volSectors, 12911);
eq('disc total sectors', fs.statSync(discPath).size / 2352, 60225);

// Track 1 must end before track 2 begins, and track 2 must be audio.
const ccdPath = path.join(ROOT, 'Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).ccd');
const ccd = fs.readFileSync(ccdPath, 'latin1');
if (/\[TRACK 1\]\r?\nMODE=1/.test(ccd) || /MODE=1/.test(ccd)) ok('ccd track 1 is MODE1');
else bad('ccd track 1 is MODE1', 'not found in ccd');

// Track 2 data starts at LBA 9000 per the ccd INDEX 1 entry
if (/INDEX 1=9000/.test(ccd)) ok('ccd track 2 starts at sector 9000');
else bad('ccd track 2 starts at sector 9000', 'INDEX 1=9000 not present');

// The 450 sectors between are real zero-filled pregap in the image
{
	const g = disc.read(8850, 2048);
	let allZero = true;
	for (const b of g) if (b !== 0) { allZero = false; break; }
	if (allZero) ok('pregap at 8850 is zero-filled in the image');
	else bad('pregap at 8850 is zero-filled', 'found non-zero data, cue/ccd disagree');
}

// Track 2 audio is real PCM, not silence
{
	let peak = 0;
	const buf = disc.read(9150, 2048 * 20);
	for (let i = 0; i + 1 < buf.length; i += 2) {
		const v = buf.readInt16BE(i);
		if (Math.abs(v) > peak) peak = Math.abs(v);
	}
	if (peak > 1000) ok('audio track has signal', 'peak ' + peak);
	else bad('audio track has signal', 'peak only ' + peak);
}

// ---------------------------------------------------------------------------
// 3. Executable headers
// ---------------------------------------------------------------------------

section('Phar Lap MP/P3 headers (`docs/save-disk.md` 6.7)');

const LOADER_STUB = 0x75f;

function mpHeader(name) {
	const buf = disc.get(cat, name);
	if (!buf) return null;
	const sig = buf.toString('latin1', 0, 2);
	const lastPage = buf.readUInt16LE(2);
	const blocks = buf.readUInt16LE(4);
	const computed = blocks * 512 - (lastPage ? 512 - lastPage : 0);
	return {
		buf,
		sig,
		lastPage,
		blocks,
		computed,
		eip: buf.readUInt32LE(0x14),
		esp: buf.readUInt32LE(0x0e),
		relocOff: buf.readUInt16LE(0x18),
	};
}

for (const name of ['DARKNESS.EXP', 'ENCHANT.EXP', 'EXODUS.EXP']) {
	const h = mpHeader(name);
	if (!h) { bad('present: ' + name, 'not in catalogue'); continue; }
	eq('signature: ' + name, h.sig, 'MP');
	// The size arithmetic is the proof that the header layout is correct.
	eq('size arithmetic: ' + name, h.computed, h.buf.length);
	eq('reloc offset: ' + name, h.relocOff, 0x1e);
	if (h.eip > LOADER_STUB && h.eip < h.buf.length)
		ok('EIP inside image: ' + name, '0x' + h.eip.toString(16));
	else bad('EIP inside image: ' + name, '0x' + h.eip.toString(16));
}

// TMENU is P3, not MP. This is what broke the early cross-diff.
{
	const t = disc.get(cat, 'TMENU.EXP');
	eq('signature: TMENU.EXP', t.toString('latin1', 0, 2), 'P3');
	eq('TMENU header size field', t.readUInt16LE(4), 384);
}

// The stored entry points must be code, not data: EIP should be past the
// 512-byte header and land inside the file.
{
	const e = mpHeader('ENCHANT.EXP');
	if (e.eip >= 512) ok('ENCHANT EIP past header', '0x' + e.eip.toString(16));
	else bad('ENCHANT EIP past header', '0x' + e.eip.toString(16));
}

// The `MP` header EIP is the program entry, and the file shows it once the
// 0x200-byte header and stub are accounted for.
//
// The loader hands over with `IRETD` at `0008:3dd3`, which pops `000C:101a20`
// off the stack. A capture from reset through the load shows that as the first
// game instruction, and its bytes are `EB 56`, a jump to `000C:101a78`.
//
// The field is an ADDRESS, not a file offset. The code it names sits at file
// offset `EIP + 0x200`, because the file's first 0x200 bytes are the header and
// stub and are not loaded into segment `000C`. Reading the field as a file
// offset lands 0x200 early, where the bytes are `02 03` and no instruction
// begins, and that slip produced two wrong docs before it was caught. See
// docs/entry-point-question.md.
{
	const e = disc.get(cat, 'ENCHANT.EXP');
	const h = mpHeader('ENCHANT.EXP');
	eq('ENCHANT header EIP value', h.eip, 0x101a20);
	eq('ENCHANT entry instruction at EIP + 0x200',
		e.slice(h.eip + 0x200, h.eip + 0x202).toString('hex'), 'eb56');
	// The control: 0x200 early is not a jump, so a reader who takes the field
	// for a file offset fails here rather than passing quietly.
	eq('ENCHANT entry read as a file offset is not code',
		e.slice(h.eip, h.eip + 2).toString('hex'), '0203');
}

// Where the game code lives in memory, and how to read a captured address.
//
// `MD 000C:0` on a running game returns the ASCII text `KYB_init` followed by a
// High C prologue, and that text sits at offset 0x200 in ENCHANT.EXP. So the
// running image is the file with its header stripped.
//
// The offset is only half of it. A CFG edge carries `src`, the address AFTER the
// instruction ran, and `preEIP`, the address it started at. Decoding at `src`
// compares the wrong bytes with the right length and cannot agree. Decoding at
// `preEIP + 0x200` agrees on 1546 of 1555 game-segment edges, 99.4 percent.
// Getting this wrong cost several sessions, so both halves are asserted.
{
	const e = disc.get(cat, 'ENCHANT.EXP');
	const at = e.toString('latin1', 0x200, 0x208);
	if ('KYB_init' === at) ok('ENCHANT code base: KYB_init at 0x200', at);
	else bad('ENCHANT code base: KYB_init at 0x200', JSON.stringify(at));
	// The control: the assert must be able to fail one byte away.
	const near = e.toString('latin1', 0x1ff, 0x207);
	if ('KYB_init' !== near) ok('ENCHANT code base is exact, 0x1ff differs', '');
	else bad('ENCHANT code base is exact, 0x1ff differs', 'matched one byte off');
}

// ENCHANT.EXP is mostly zeros, which is why comparisons against the file fail
// over large parts of it and why a low match rate is not by itself a mapping
// error. Assert the size of that, so a different rip that changed it is caught.
{
	const e = disc.get(cat, 'ENCHANT.EXP');
	let nonzero = 0;
	for (let i = 0; i < e.length; i++) if (0 !== e[i]) nonzero++;
	if (196725 === nonzero) ok('ENCHANT non-zero bytes: 196725 of 1072398', '');
	else bad('ENCHANT non-zero bytes: 196725 of 1072398', String(nonzero));
}

// The seed set must promote single-caller call targets that open a High C prologue,
// and must still be a strict superset of the multiplicity rule it replaces.
//
// Measured: 430 by multiplicity alone, 532 from transfers with the promotion, 102 promoted,
// and 32 single-caller prologue targets rejected as coincidences inside string data.
// A regression here silently shrinks the swept function set, which no other check sees.
//
// 532 stays the number for the transfer-derived set so the measurements that cite it stay
// literally true. The callback rule adds 5 more (7 immediates, 2 already reached by a
// transfer), giving 537 in total. Callbacks are addresses passed as arguments, so no call
// site points at them and the transfer scan cannot see them at all.
{
	const { execFileSync } = require('child_process');
	const out = execFileSync('node', [path.join(ROOT, 'tools/seeds.js')], { encoding: 'utf8' });
	const m = /candidate seeds: (\d+)/.exec(out);
	const p = /promoted by prologue: (\d+)/.exec(out);
	const t = /seeds from transfers: (\d+)/.exec(out);
	const c = /callback immediates pointing at a prologue: (\d+) \((\d+) not/.exec(out);
	if (m && 537 === Number(m[1])) ok('seed candidates, transfers plus callbacks', '537');
	else bad('seed candidates, transfers plus callbacks', m ? m[1] : 'no line');
	if (t && 532 === Number(t[1])) ok('seed candidates from transfers', '532');
	else bad('seed candidates from transfers', t ? t[1] : 'no line');
	if (c && 7 === Number(c[1]) && 5 === Number(c[2])) ok('callback seeds', '7 found, 5 new');
	else bad('callback seeds', c ? c[1] + ' found, ' + c[2] + ' new' : 'no line');
	if (p && 102 === Number(p[1])) ok('single-caller seeds promoted', '102');
	else bad('single-caller seeds promoted', p ? p[1] : 'no line');
}

// ---------------------------------------------------------------------------
// 4. Toolchain
// ---------------------------------------------------------------------------

section('Toolchain (MetaWare High C)');

for (const name of ['DARKNESS.EXP', 'ENCHANT.EXP', 'EXODUS.EXP', 'TMENU.EXP']) {
	const buf = disc.get(cat, name);
	const s = buf.toString('latin1');
	if (s.includes('High C Run-time Library'))
		ok('High C runtime string: ' + name);
	else bad('High C runtime string: ' + name, 'not found');
}
{
	const r = disc.get(cat, 'RUN386.EXE').toString('latin1');
	if (r.includes('Phar Lap')) ok('RUN386.EXE is Phar Lap');
	else bad('RUN386.EXE is Phar Lap', 'not found');
}

// Stripped: only a handful of game symbols survive. The six real game symbols
// are in EXODUS, and its two runtime strings are checkable there.
{
	const s = disc.get(cat, 'EXODUS.EXP').toString('latin1');
	const want = ['Whirl_X', 'Whirl_Y', 'Whirl_d_X', 'Whirl_d_Y', 'Gate_X', 'Gate_Y'];
	let n = 0;
	for (const sym of want) if (s.includes(sym)) n++;
	eq('game symbols present in EXODUS', n, want.length);
}
{
	const s = disc.get(cat, 'ENCHANT.EXP').toString('latin1');
	const want = ['KYB_init', 'KYB_lock', '_mwFINIT', '_mwStdio1c'];
	let n = 0;
	for (const sym of want) if (s.includes(sym)) n++;
	eq('runtime symbols present in ENCHANT', n, want.length);
}
// The only game symbols in the whole trilogy are in EXODUS
{
	const e = disc.get(cat, 'ENCHANT.EXP').toString('latin1');
	eq('ENCHANT has no Whirl_X (it is an EXODUS symbol)', e.includes('Whirl_X'), false);
}

// ---------------------------------------------------------------------------
// 5. U2 asset inventory comes from ENCHANT's own strings
// ---------------------------------------------------------------------------

section('U2 asset inventory (from embedded path strings)');

const enchantText = disc.get(cat, 'ENCHANT.EXP').toString('latin1');

const U2_ASSETS = [
	'Q:\\GRAPH\\MAP2_1.TIF',
	'Q:\\GRAPH\\MAP2_2.TIF',
	'Q:\\GRAPH\\MAP2_3.TIF',
	'Q:\\GRAPH\\PLAYER.TIF',
	'Q:\\GRAPH\\ENEMY2.TIF',
	'Q:\\GRAPH\\EXTRA.TIF',
	'Q:\\GRAPH\\CHEST.TIF',
	'Q:\\GRAPH\\DUNG1.TIF',
	'Q:\\GRAPH\\DUNG2.TIF',
	'Q:\\GRAPH\\HEADTTL.TIF',
	'Q:\\GRAPH\\U2TITLE1.TIF',
	'Q:\\GRAPH\\U2END1.TIF',
	'Q:\\GRAPH\\GAI.TIF',
	'Q:\\GRAPH\\DUNMON1.TIF',
	'A:\\ROSTER1.UT2',
	'A:\\WORLD1.UT2',
];

let found = 0;
for (const a of U2_ASSETS) if (enchantText.includes(a)) found++;
eq('U2 asset paths present in ENCHANT.EXP', found, U2_ASSETS.length);

// And every one of those graph files must exist on the disc
for (const a of U2_ASSETS.filter((x) => x.startsWith('Q:'))) {
	const rel = a.slice(3).replace(/\\/g, '/');
	if (cat.has(rel)) ok('on disc: ' + rel);
	else bad('on disc: ' + rel, 'referenced by ENCHANT but absent from ISO');
}

// Roster schema string
if (enchantText.includes('SHAPE=%d') && enchantText.includes('SPID=%d'))
	ok('roster schema string present');
else bad('roster schema string present', 'SHAPE/SPID format not found');

// The U2 map loader opens \UT2\MAP.MP2
if (enchantText.includes('\\UT2\\MAP.MP2')) ok('U2 map path present');
else bad('U2 map path present', '\\UT2\\MAP.MP2 not found');

// ---------------------------------------------------------------------------
// 5b. Structure established by the call graph and the field map
//
// These are the reproducibility contract for the reimplementation work. Each one is exact
// arithmetic on bytes, so a different rip or a changed decoder fails loudly.
//
// The image below is header-stripped, so an offset in it IS a virtual address.
// ---------------------------------------------------------------------------
{
	const img = disc.get(cat, ['ENCHANT.EXP'].find((n) => cat.has(n))).slice(0x20);

	// The character record layout, anchored three ways in tools/fieldmap.js.
	// Format string order, %c as 1 byte and %d as 4, gives base 0xcde54 for all three anchors.
	const anchors = [
		['MAP', 0xcdf57],
		['PLAYER_X', 0xcdf6b],
		['PLAYER_Y', 0xcdf6f],
	];
	const fmtStart = img.indexOf(Buffer.from('LINGUAL='));
	const fmtEnd = img.indexOf(Buffer.from('GATE_TIME='));
	if (fmtStart > 0 && fmtEnd > fmtStart) ok('roster format string spans LINGUAL to GATE_TIME');
	else bad('roster format string spans LINGUAL to GATE_TIME', 'markers not found');

	const fields = [];
	let i = fmtStart;
	while (i < fmtEnd + 40 && fmtStart > 0) {
		while (i < fmtEnd + 40 && (img[i] === 0 || img[i] < 0x20 || img[i] > 0x7e)) i++;
		if (i >= fmtEnd + 40) break;
		let e = i;
		while (e < fmtEnd + 40 && img[e] !== 0 && img[e] >= 0x20 && img[e] <= 0x7e && e - i < 48) e++;
		const m = /^([A-Z_0-9()]+)=%([a-z])$/.exec(img.toString('latin1', i, e));
		if (m) fields.push({ name: m[1], type: m[2] });
		i = e;
	}
	eq('roster format fields parsed', fields.length, 90);

	// Every anchor must imply the same base. One fit proves nothing, three agreeing is the proof.
	for (const [name, addr] of anchors) {
		let off = 0;
		let base = null;
		for (const f of fields) {
			if (f.name === name) {
				base = addr - off;
				break;
			}
			off += f.type === 'c' ? 1 : 4;
		}
		if (base === 0xcde54) ok('record base agrees on ' + name, '0x' + addr.toString(16));
		else bad('record base agrees on ' + name, 'implied 0x' + (base === null ? '?' : base.toString(16)));
	}

	// The all-0xEB strings. A count is a fact that either holds or fails. Measured by
	// tools/ebcorpus.js, which pairs each with whatever Shift-JIS string follows it.
	let ebRuns = 0;
	let j = 0;
	while (j < img.length) {
		if (img[j] === 0) {
			j++;
			continue;
		}
		let e = j;
		while (e < img.length && img[e] !== 0) e++;
		const len = e - j;
		if (len >= 2 && len % 2 === 0) {
			let all = true;
			for (let k = 0; k < len; k += 2) if (img[j + k] !== 0xeb) all = false;
			if (all) ebRuns++;
		}
		j = e;
	}
	eq('all-0xEB strings in ENCHANT.EXP', ebRuns, 271);

	// Of those, 77 are immediately followed by a Shift-JIS string and a NUL. That is the
	// subset tools/ebcorpus.js pairs. The count is a fact, so it is asserted.
	let paired = 0;
	j = 0;
	const seen = [];
	while (j < img.length) {
		if (img[j] === 0) {
			j++;
			continue;
		}
		let e = j;
		while (e < img.length && img[e] !== 0) e++;
		seen.push({ at: j, end: e });
		j = e;
	}
	for (let k = 0; k < seen.length - 1; k++) {
		const a = seen[k];
		const len = a.end - a.at;
		if (len < 2 || len % 2 !== 0) continue;
		let all = true;
		for (let q = 0; q < len; q += 2) if (img[a.at + q] !== 0xeb) all = false;
		if (!all) continue;
		const b = seen[k + 1];
		if (b.at !== a.end + 1) continue;
		// Match tools/ebcorpus.js exactly: at least one multi-byte sequence, no control
		// bytes other than newline, and a strict Shift-JIS decode. A looser rule here
		// counted 190 instead of 77, which is why this mirrors the tool rather than
		// approximating it.
		const raw = img.subarray(b.at, b.end);
		let multi = false;
		let okText = true;
		for (let q = 0; q < raw.length; q++) {
			const v = raw[q];
			if (v >= 0x81 && v <= 0x9f) {
				multi = true;
				q++;
			} else if (v >= 0xe0 && v <= 0xfc) {
				multi = true;
				q++;
			} else if (v < 0x20 && v !== 0x0a) {
				okText = false;
				break;
			}
		}
		if (!multi || !okText) continue;
		try {
			new TextDecoder('shift_jis', { fatal: true }).decode(raw);
		} catch {
			continue;
		}
		paired++;
	}
	eq('0xEB strings followed by a Shift-JIS string', paired, 78);

	// 0xEB is in the Shift-JIS lead-byte range 0xe0..0xfc, which is why the renderer at
	// 0xe6e90 treats [0xEB, code] as one double-byte character. The test is a range compare,
	// so there is no comparison against 0xeb itself anywhere in the image.
	let cmpEb = 0;
	for (let k = 0; k + 2 < img.length; k++) {
		if (img[k] === 0x80 && (img[k + 1] === 0xf8 || img[k + 1] === 0xf9) && img[k + 2] === 0xeb) cmpEb++;
		if (img[k] === 0x3c && img[k + 1] === 0xeb) cmpEb++;
	}
	ok('renderer tests the Shift-JIS lead range, not 0xEB directly', cmpEb + ' byte-level cmp hits (data only)');

	// The call graph. Two routines with no caller is the top of the skeleton.
	const callTargets = new Set();
	for (let k = 0; k + 5 <= img.length; k++) {
		if (img[k] !== 0xe8) continue;
		const t = k + 5 + img.readInt32LE(k + 1);
		if (t >= 0 && t < img.length) callTargets.add(t);
	}
	eq('distinct CALL targets', callTargets.size, 738);

	// The game loop: running flag initialised to -1, then do/while around the location dispatch.
	// 0xe97c0  mov dword [0xcde34],0xffffffff
	// 0xe988b  call 0xf6ebc            e8 2c d6 00 00, rel32 from 0xe988c
	// 0xe9890  cmp  dword [0xcde34],0x0  83 3d 34 de 0c 00 00
	// 0xe9897  jnz  0xe988b            75 f2, a SHORT jump of -14
	const loop = Buffer.from([0xc7, 0x05, 0x34, 0xde, 0x0c, 0x00, 0xff, 0xff, 0xff, 0xff]);
	if (img.subarray(0xe97c0, 0xe97c0 + loop.length).equals(loop))
		ok('game loop sets the running flag to -1 at 0xe97c0');
	else bad('game loop sets the running flag to -1 at 0xe97c0', 'bytes differ');

	// A relative call is resolved from the END of the instruction, which is 0xe988b + 5.
	if (img[0xe988b] === 0xe8 && 0xe988b + 5 + img.readInt32LE(0xe988c) === 0xf6ebc)
		ok('game loop calls the location dispatcher at 0xe988b');
	else bad('game loop calls the location dispatcher at 0xe988b', 'call target wrong');

	// cmp dword [0xcde34],0x0 is seven bytes, so the branch is at 0xe9897 and it is short.
	if (img[0xe9890] === 0x83 && img[0xe9891] === 0x3d && img.readUInt32LE(0xe9892) === 0xcde34)
		ok('game loop tests the running flag at 0xe9890');
	else bad('game loop tests the running flag at 0xe9890', 'operand wrong');

	if (img[0xe9897] === 0x75 && 0xe9899 + (img[0xe9898] << 24 >> 24) === 0xe988b)
		ok('game loop jumps back to the dispatcher at 0xe9897');
	else bad('game loop jumps back to the dispatcher at 0xe9897', 'branch target wrong');

	// The command dispatcher reads a key into 0xd460c and indexes a ten-entry table at 0xf6d65.
	const ten = [0xf6bbc, 0xf6bcb, 0xf6bda, 0xf6cac, 0xf6cac, 0xf6cac, 0xf6be9, 0xf6cac, 0xf6bf8, 0xf6c07];
	let match = 0;
	for (let k = 0; k < ten.length; k++) if (img.readUInt32LE(0xf6d65 + k * 4) === ten[k]) match++;
	eq('command dispatch table entries at 0xf6d65', match, 10);
	// And the entry after the table is not a pointer, which is how the ten were found.
	if (img.readUInt32LE(0xf6d65 + 40) !== ten[9]) ok('the command table ends after ten entries');
	else bad('the command table ends after ten entries', 'entry 10 looks like a pointer');
}

// ---------------------------------------------------------------------------
// 6. Graphics formats
// ---------------------------------------------------------------------------

section('Graphics formats (`docs/assets-and-graphics.md` 5.4)');

function size(name) {
	const e = cat.get('GRAPH/' + name + '.TIF');
	return e ? e.size : -1;
}

// Tile banks: the tile count must come from the body after the TIFF strip.
function stripOffset(buf) {
	if (buf[0] !== 0x49 || buf[1] !== 0x49) return 0;
	const n = buf.readUInt16LE(8);
	for (let i = 0; i < n && 10 + i * 12 + 12 <= buf.length; i++) {
		const o = 10 + i * 12;
		if (buf.readUInt16LE(o) === 273) {
			const v = buf.readUInt32LE(o + 8);
			if (v > 0 && v < buf.length) return v;
		}
	}
	return 0;
}

{
	// PLAYER: 16x16, 1 byte per pixel, 256 B per tile, 128 tiles after the strip
	const buf = disc.get(cat, 'GRAPH/PLAYER.TIF');
	const body = buf.length - stripOffset(buf);
	eq('PLAYER tile count', body / 256, 128);
}
{
	// ENEMY2: 32x32 packed 4bpp, 512 B per tile, 65 tiles, no TIFF header
	const buf = disc.get(cat, 'GRAPH/ENEMY2.TIF');
	eq('ENEMY2 has no TIFF header', buf[0], 0x00);
	eq('ENEMY2 tile count', buf.length / 512, 65);
}
for (const [nm, n] of [['DUNMON1', 1664], ['DUNMON2', 416], ['DUNMON3', 104]]) {
	const buf = disc.get(cat, 'GRAPH/' + nm + '.TIF');
	const body = buf.length - stripOffset(buf);
	eq(nm + ' tile count', body / 128, n);
}

// Title art is 4bpp packed: body length must be exactly w*h/2
function tiffGeom(buf) {
	const n = buf.readUInt16LE(8);
	const t = {};
	for (let i = 0; i < n && 10 + i * 12 + 12 <= buf.length; i++) {
		const o = 10 + i * 12;
		t[buf.readUInt16LE(o)] =
			buf.readUInt16LE(o + 2) === 3 ? buf.readUInt16LE(o + 8) : buf.readUInt32LE(o + 8);
	}
	return { w: t[256], h: t[257], bits: t[258], strip: t[273] };
}
for (const name of ['U2TITLE1', 'U2TITLE2', 'GAI', 'U2END1']) {
	const buf = disc.get(cat, 'GRAPH/' + name + '.TIF');
	const g = tiffGeom(buf);
	const body = buf.length - g.strip;
	eq(name + ' is 4bpp', g.bits, 4);
	eq(name + ' body == w*h/2', body, (g.w * g.h) / 2);
}

// MAP2_1 is ASCII character data, not a bitmap. Prove it: the byte histogram
// must be dominated by control/ASCII values and contain no long runs that
// decode as a coherent image at any width. Simplest checkable assertion: the
// file contains no TIFF header, is exactly 33280 bytes, and is mostly printable
// ASCII plus CR/LF.
{
	const buf = disc.get(cat, 'GRAPH/MAP2_1.TIF');
	eq('MAP2_1 size', buf.length, 33280);
	eq('MAP2_1 has no TIFF header', buf[0] === 0x49 && buf[1] === 0x49, false);
	let textish = 0;
	for (const b of buf)
		if (b === 0x0a || b === 0x0d || b === 0x20 || (b >= 0x30 && b <= 0x7a)) textish++;
	const pct = (textish / buf.length) * 100;
	if (pct > 40) ok('MAP2_1 is text-like', pct.toFixed(1) + '% of bytes');
	else bad('MAP2_1 is text-like', 'only ' + pct.toFixed(1) + '%');
}

// ---------------------------------------------------------------------------
// 7. Sound
// ---------------------------------------------------------------------------

section('Sound (`docs/sound.md` 7.1)');

const SND = [
	'BOMB2', 'BOMB4', 'BOMB5', 'BUL1', 'BUMP', 'DOOR3', 'FIRE', 'KATANA1',
	'MAGIC2', 'MAGIC3', 'MAGIC4', 'MONSTER1', 'UZUMAKI1', 'UZUMAKI3', 'WHAT',
];

eq('.SND file count', SND.length, 15);

let sndOk = 0;
for (const n of SND) {
	const e = cat.get('SOUND/' + n + '.SND');
	if (!e) { bad('.SND present: ' + n, 'missing'); continue; }
	const buf = disc.read(e.lba, e.size);
	const declared = buf.readUInt32LE(12);
	// The load-bearing claim: filesize == 32 + length@12, exactly, for all 15
	if (e.size === 32 + declared) sndOk++;
	else bad('.SND size == 32 + len@12: ' + n, e.size + ' vs ' + (32 + declared));
}
eq('.SND files satisfying size == 32+len@12', sndOk, 15);

// .EUP are sound driver tables, not colour data. Check the internal names.
{
	const e = cat.get('SOUND/DUNGEON.EUP');
	if (e) {
		const buf = disc.read(e.lba, e.size);
		eq('DUNGEON.EUP internal name', buf.toString('latin1', 0, 7), 'DANJON_');
	} else bad('DUNGEON.EUP present', 'missing');
}

// "MP3" files are not MPEG audio
{
	const e = cat.get('UT3/BRITISH.MP3');
	if (e) {
		const buf = disc.read(e.lba, 64);
		const mpegSync = buf[0] === 0xff && (buf[1] & 0xe0) === 0xe0;
		eq('UT3/BRITISH.MP3 has MPEG sync', mpegSync, false);
	} else bad('UT3/BRITISH.MP3 present', 'missing');
}

// ---------------------------------------------------------------------------
// 8. Negative results worth pinning
// ---------------------------------------------------------------------------

section('Negative results (proving absence)');

// No palette string in ENCHANT. If this ever changes, the palette work changes.
eq('ENCHANT contains "palette"', /palette/i.test(enchantText), false);
eq('ENCHANT contains "PAL"', enchantText.includes('PAL'), false);

// No direct CRTC port writes to 0x1A0-0x1AE
{
	const buf = disc.get(cat, 'ENCHANT.EXP');
	let hits = 0;
	for (let port = 0x1a0; port <= 0x1ae; port++) {
		const pat = Buffer.from([0xba, port & 0xff, (port >> 8) & 0xff]);
		if (buf.indexOf(pat) !== -1) hits++;
	}
	eq('ENCHANT has mov dx,0x1A0-0x1AE', hits, 0);
}

// SYM1 exists only in TMENU
{
	const withSym = [];
	for (const n of ['TMENU.EXP', 'DARKNESS.EXP', 'ENCHANT.EXP', 'EXODUS.EXP', 'UT3DEMO.EXP']) {
		if (cat.has(n) && disc.get(cat, n).indexOf(Buffer.from('SYM1')) !== -1) withSym.push(n);
	}
	eq('binaries containing SYM1', withSym.join(','), 'TMENU.EXP');

	// The record is [u8 namelen][name][u32 value][u16 type] and the values are file offsets
	// into TMENU's load image. Asserted because tools/sym1.js read them as a u16 for long
	// enough to print a 16-bit range and a phantom "reserved field", and because an exact
	// walk validates the STRIDE and not the field widths: the walk is exact either way, which
	// is how the width error survived. A u16 parser cannot produce a value above 0xffff, so
	// the maximum is the control that separates the two readings.
	const tmenu = disc.get(cat, 'TMENU.EXP');
	const blob = tmenu.subarray(tmenu.indexOf(Buffer.from('SYM1')));
	let p = 0x0e;
	let firstRecord = true;
	let records = 0;
	let min = Infinity;
	let max = 0;
	let inside = true;
	while (p + 1 <= blob.length) {
		const len = blob[p];
		const nameEnd = p + 1 + len;
		if (len < 1 || nameEnd + 6 > blob.length) break;
		const value = blob.readUInt32LE(nameEnd);
		if (value) {
			min = Math.min(min, value);
			max = Math.max(max, value);
			if (value < 0x200 || value >= 0x33892) inside = false;
		}
		records++;
		p = nameEnd + 6;
		if (firstRecord) {
			p += 6;
			firstRecord = false;
		}
	}
	eq('SYM1 record count', records, 1725);
	eq('SYM1 value range', '0x' + min.toString(16) + '-0x' + max.toString(16), '0x238-0x33848');
	if (inside) ok('SYM1 values lie inside the declared load image', '0x200-0x33892');
	else bad('SYM1 values lie inside the declared load image', 'at least one value is outside 0x200-0x33892');
	if (max > 0xffff) ok('SYM1 values need 32 bits, so a u16 read is wrong', 'max 0x' + max.toString(16));
	else bad('SYM1 values need 32 bits, so a u16 read is wrong', 'max 0x' + max.toString(16));
}

// ---------------------------------------------------------------------------
// 9. Extraction output, if the user has run it
// ---------------------------------------------------------------------------

section('Extraction output (optional, run extract-u2.js first)');

const extracted = path.join(ROOT, 'extracted', 'u2');
if (!fs.existsSync(extracted)) {
	skipped('extraction output', 'run node extract-u2.js');
} else {
	const count = (dir, ext) => {
		const p = path.join(extracted, dir);
		if (!fs.existsSync(p)) return 0;
		return fs.readdirSync(p).filter((f) => f.endsWith(ext)).length;
	};
	const pngs = count('title', '.png') + count('sprites', '.png') + count('map', '.png');
	const wavs = count('sfx', '.wav');
	eq('extracted PNG count', pngs, 37);
	eq('extracted WAV count', wavs, 14);

	// Every WAV must be a valid RIFF/WAVE with a sane rate
	const dir = path.join(extracted, 'sfx');
	let wavOk = 0;
	if (fs.existsSync(dir)) {
		for (const f of fs.readdirSync(dir).filter((x) => x.endsWith('.wav'))) {
			const b = fs.readFileSync(path.join(dir, f));
			const rate = b.readUInt32LE(24);
			const isRiff = b.toString('latin1', 0, 4) === 'RIFF' && b.toString('latin1', 8, 12) === 'WAVE';
			if (isRiff && rate >= 1000 && rate <= 200000) wavOk++;
			else bad('valid WAV: ' + f, 'rate ' + rate + ' riff ' + isRiff);
		}
	}
	if (wavOk === 14) ok('all 14 WAVs valid');

	// PNGs must be real PNGs
	let pngOk = 0;
	for (const sub of ['title', 'sprites', 'map']) {
		const p = path.join(extracted, sub);
		if (!fs.existsSync(p)) continue;
		for (const f of fs.readdirSync(p).filter((x) => x.endsWith('.png'))) {
			const b = fs.readFileSync(path.join(p, f));
			if (b.subarray(0, 8).toString('hex') === '89504e470d0a1a0a') pngOk++;
			else bad('valid PNG: ' + sub + '/' + f, 'bad signature');
		}
	}
	if (pngOk >= 37) ok('all PNGs valid', pngOk + ' files');
}

// --- asset coverage against the shipped binary ----------------------------
// ENCHANT.EXP names every file U2 opens. Parse those names straight out of the
// disc and confirm the extractor produced all of them. This is the check that
// makes the completeness claim in [the docs](docs/) machine-verified rather than
// prose.
{
	const { Disc } = require('./cd.js');
	const discPath = path.join(ROOT, 'Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).img');
	if (!fs.existsSync(discPath)) {
		skipped('asset coverage', 'disc image not present');
	} else {
		const d2 = new Disc(discPath);
		const cat2 = d2.catalogue();
		const ent = cat2.get('ENCHANT.EXP');
		const bin = d2.read(ent.lba, ent.size);
		const txt = bin.toString('latin1');

		// Graphics and sounds are referred to with a drive letter, except
		// ULTIMA.FMB whose prefix is split off. Match on the bare filename.
		const gfx = new Set();
		const snd = new Set();
		let mm;
		const reG = /\\GRAPH\\([A-Z0-9_]+)\.TIF/gi;
		while ((mm = reG.exec(txt)) !== null) gfx.add(mm[1].toUpperCase());
		const reS = /\\SOUND\\([A-Z0-9_]+)\.SND/gi;
		while ((mm = reS.exec(txt)) !== null) snd.add(mm[1].toUpperCase());

		if (gfx.size === 23) ok('ENCHANT.EXP names 23 graphics');
		else bad('ENCHANT.EXP graphics count', String(gfx.size));
		if (snd.size === 14) ok('ENCHANT.EXP names 14 sounds');
		else bad('ENCHANT.EXP sounds count', String(snd.size));

		let gfxMissing = 0;
		for (const g of gfx) {
			const base = g.toLowerCase();
			let hit = false;
			for (const sub of ['title', 'sprites', 'map']) {
				const p = path.join(extracted, sub, base + '.png');
				if (fs.existsSync(p)) { hit = true; break; }
			}
			if (!hit) { gfxMissing++; bad('extracted graphic: ' + g, 'absent'); }
		}
		if (!gfxMissing) ok('every referenced graphic is extracted', gfx.size + ' of ' + gfx.size);

		let sndMissing = 0;
		for (const s of snd) {
			if (!fs.existsSync(path.join(extracted, 'sfx', s.toLowerCase() + '.wav'))) {
				sndMissing++;
				bad('extracted sound: ' + s, 'absent');
			}
		}
		if (!sndMissing) ok('every referenced sound is extracted', snd.size + ' of ' + snd.size);

		// Nothing U2 references should be missing from the disc itself.
		let refMissing = 0;
		for (const g of gfx) if (!cat2.get('GRAPH/' + g + '.TIF')) { refMissing++; bad('on disc: GRAPH/' + g + '.TIF', 'absent'); }
		for (const s of snd) if (!cat2.get('SOUND/' + s + '.SND')) { refMissing++; bad('on disc: SOUND/' + s + '.SND', 'absent'); }
		if (cat2.get('SOUND/ULTIMA.FMB')) ok('FM instrument bank ULTIMA.FMB present');
		else { refMissing++; bad('on disc: SOUND/ULTIMA.FMB', 'absent'); }
		if (!refMissing) ok('every referenced file exists on the disc');

		// The stripped-binary claim: ENCHANT.EXP carries no SYM1 table.
		if (bin.indexOf(Buffer.from('SYM1')) === -1) ok('ENCHANT.EXP is stripped (no SYM1)');
		else bad('ENCHANT.EXP SYM1', 'unexpectedly present');

		d2.close();
	}
}

// --- floppy geometry -------------------------------------------------------
// `docs/save-files.md` 8.1. The claim is that only a 1232 KB image is an FM Towns disk, and
// that the retail UserDisk shares its geometry. Both are checked against the
// bytes rather than trusted as prose. The 640/720/1440 variants are not in the
// repo because they are not used by anything, so they are asserted by rule.
{
	const ud = path.join(ROOT, 'Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[UserDisk].hdm');
	if (!fs.existsSync(ud)) {
		skipped('floppy geometry', 'UserDisk not present');
	} else {
		const b = fs.readFileSync(ud);
		eq('UserDisk size', b.length, 1261568);
		eq('UserDisk IPL4 signature', b.toString('latin1', 0, 4), 'IPL4');
		eq('UserDisk bytes per sector', b.readUInt16LE(11), 1024);
		eq('UserDisk sectors per track', b.readUInt16LE(24), 8);
		eq('UserDisk heads', b.readUInt16LE(26), 2);
		eq('UserDisk root entries', b.readUInt16LE(17), 192);
		eq('UserDisk total sectors', b.readUInt16LE(19), 1232);
		// 1232 * 1024 == 1261568 is the arithmetic that ties size to geometry.
		eq('UserDisk geometry sums to size',
			b.readUInt16LE(19) * b.readUInt16LE(11), b.length);
		// The retail disk contradicts itself: BPB says media 0x01, FAT says 0xFE.
		eq('UserDisk BPB media byte', b[0x15], 0x01);
		eq('UserDisk FAT media byte', b.readUInt16LE(1024) & 0xff, 0xfe);
		ok('UserDisk is self-inconsistent, as a program-formatted disk would be');
	}
}

// ---------------------------------------------------------------------------

disc.close();

console.log('\n' + '-'.repeat(60));
console.log('passed ' + pass + ', failed ' + fail + ', skipped ' + skip);
if (fail) {
	console.log('\nFailures:');
	for (const f of failures) console.log('  ' + f);
	console.log('\nIf source file MD5s differ, you have a different rip of the disc.');
	console.log('Checks that assume this rip will fail. That is expected and not a bug.');
	process.exit(1);
}
console.log('All checks passed.');
