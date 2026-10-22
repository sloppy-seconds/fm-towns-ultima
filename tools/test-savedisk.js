#!/usr/bin/env node
// tools/test-savedisk.js - exercise savedisk.js against an in-memory image.
//
// These are the checks that would have caught the three bugs found while
// building the tool: a FAT chain walk that dropped the final cluster, an
// unescaped field name becoming a regex group, and CRLF text misread as binary.
//
// Runs entirely on a synthetic disk built here, so it needs no game data and no
// copyrighted files. Usage: node tools/test-savedisk.js
'use strict';

const fs = require('fs');
const os = require('os');
const path = require('path');
const { execFileSync } = require('child_process');

const TOOL = path.join(__dirname, 'savedisk.js');

let pass = 0, fail = 0;
const failures = [];
function ok(name) { pass++; console.log('  ok   ' + name); }
function bad(name, detail) { fail++; failures.push(name + (detail ? ': ' + detail : '')); console.log('  FAIL ' + name + (detail ? '  (' + detail + ')' : '')); }
function eq(name, got, want) { got === want ? ok(name) : bad(name, 'got ' + JSON.stringify(got) + ', want ' + JSON.stringify(want)); }

// --- build a synthetic FM Towns 2HD disk ----------------------------------
// Matches the geometry savedisk.js assumes: 1024 B sectors, 1 reserved, 2 FATs
// of 2 sectors, 192 root entries, 1232 total sectors.
const SS = 1024, RESERVED = 1, NFATS = 2, FATSZ = 2, ROOTS = 192, TOTAL = 1232;
const ROOT_OFF = (RESERVED + NFATS * FATSZ) * SS;
const DATA_OFF = (RESERVED + NFATS * FATSZ + Math.ceil((ROOTS * 32) / SS)) * SS;

const img = Buffer.alloc(TOTAL * SS);

function fatSet(buf, off, cluster, value) {
	const o = off + Math.floor(cluster * 1.5);
	const v = buf.readUInt16LE(o);
	buf.writeUInt16LE(cluster & 1 ? (v & 0x000f) | ((value & 0xfff) << 4) : (v & 0xf000) | (value & 0xfff), o);
}

function makeEntry(buf, index, name83, cluster, size) {
	const o = ROOT_OFF + index * 32;
	Buffer.from(name83.padEnd(11).slice(0, 11), 'latin1').copy(buf, o);
	buf[o + 11] = 0x20;
	buf.writeUInt16LE(cluster, o + 26);
	buf.writeUInt32LE(size, o + 28);
}

// A 4-sector file whose chain spans clusters 2..5 and ends with 0xFF8, the
// terminator this system's disks actually use. The payload must genuinely fill
// all four clusters or the final-cluster bug is not exercised: an earlier
// version of this fixture was 209 bytes, everything landed in the first
// cluster, and reintroducing the chain bug changed nothing.
function padTo(s, n) {
	const b = Buffer.alloc(n - Buffer.byteLength(s, 'latin1'), 0x20);
	return Buffer.concat([Buffer.from(s, 'latin1'), b]);
}

const ROSTER = Buffer.concat([
	padTo('Roster data:ULTIMA II for FM-TOWNS\r\nLINGUAL=0\r\n', SS),
	padTo('(0)NAME=AAAA\r\nMODE=\u0000\r\nSTRENGTH=11\r\nHP=1111\r\n', SS),
	padTo('(1)NAME=BBBB\r\nMODE=\u0000\r\nSTRENGTH=22\r\nHP=2222\r\n', SS),
	padTo('(2)NAME=\u0000\r\nMODE=\u0000\r\nSTRENGTH=0\r\nHP=0\r\n', SS),
	// Slot 3 goes in the FOURTH and final cluster, so losing cluster 5 loses it.
	padTo('(3)NAME=CCCC\r\nMODE=\u0000\r\nSTRENGTH=33\r\nHP=3333\r\n', SS),
]);

const ROSTER_PADDED = ROSTER;
const ROSTER_LEN = ROSTER.length;

const FAT1 = RESERVED * SS;
const FAT2 = (RESERVED + FATSZ) * SS;
for (const fat of [FAT1, FAT2]) {
	fatSet(img, fat, 0, 0xffe);
	fatSet(img, fat, 1, 0xfff);
	fatSet(img, fat, 2, 3);
	fatSet(img, fat, 3, 4);
	fatSet(img, fat, 4, 5);
	fatSet(img, fat, 5, 6);
	// Real disks on this system end the chain at 0xFF8, not 0xFFF. That is the
	// value that broke the first version of the walk: treating 0xFF8 as a
	// cluster number rather than an end-of-chain marker. A 0xFFF terminator
	// here would not exercise the bug at all.
	fatSet(img, fat, 6, 0xff8);
}
ROSTER_PADDED.copy(img, DATA_OFF + 0 * SS, 0, 5 * SS);

makeEntry(img, 0, 'USERDISK', 0, 0);
makeEntry(img, 1, 'ROSTER1 UT2', 2, ROSTER_LEN);

const tmp = path.join(os.tmpdir(), 'savedisk-test-' + process.pid + '.hdm');
fs.writeFileSync(tmp, img);

const run = (...args) => execFileSync('node', [TOOL, ...args], { encoding: 'utf8' });

console.log('savedisk.js');

// --- FAT chain walk -------------------------------------------------------
// The roster lives in clusters 2-5. If the walk stops at 0xFF8 instead of
// including the final cluster, the read truncates and the text is lost.
{
	const out = run('cat', tmp, 'ROSTER1.UT2');
	eq('reads whole file, not a truncated prefix', out.includes('(1)NAME=BBBB'), true);
	eq('reads the last slot, which sits in the final cluster', out.includes('(3)NAME=CCCC'), true);
}

// --- slot listing and regex escaping --------------------------------------
// "(0)NAME" interpolated raw into a RegExp becomes a capture group and matches
// nothing, so every slot reports empty.
{
	const out = run('slots', tmp);
	eq('slot 0 name is read', out.includes('"AAAA"'), true);
	eq('slot 1 name is read', out.includes('"BBBB"'), true);
	eq('slot 3 name is read', out.includes('"CCCC"'), true);
}

// --- ls ------------------------------------------------------------------
{
	const out = run('ls', tmp);
	eq('ls lists the roster with its size', out.includes('ROSTER1') && out.includes(String(ROSTER_LEN)), true);
	eq('ls marks the volume label', out.includes('(label)'), true);
}

// --- clone ---------------------------------------------------------------
// Cloning must preserve every field of the source and change only the slot
// number and name.
{
	const dst = tmp.replace('.hdm', '-clone.hdm');
	fs.copyFileSync(tmp, dst);
	run('clone', dst, '0', '2', '--name', 'ZZZZ', '--inplace');
	const out = run('cat', dst, 'ROSTER1.UT2');
	eq('clone writes the new name', out.includes('(2)NAME=ZZZZ'), true);
	eq('clone preserves the source stats', out.includes('STRENGTH=11'), true);
	eq('clone leaves the source slot alone', out.includes('(0)NAME=AAAA'), true);
	// Its own stats must come through and not be replaced by slot 2's old zeros.
	const block = out.slice(out.indexOf('(2)NAME'), out.indexOf('(3)NAME'));
	eq('clone copied HP into the new slot', block.includes('HP=1111'), true);
	fs.unlinkSync(dst);
}

// --- set -----------------------------------------------------------------
{
	const dst = tmp.replace('.hdm', '-set.hdm');
	fs.copyFileSync(tmp, dst);
	run('set', dst, '0', 'STRENGTH', '99', '--inplace');
	const out = run('cat', dst, 'ROSTER1.UT2');
	eq('set changes the requested field', out.includes('STRENGTH=99'), true);
	eq('set does not disturb another slot', out.includes('STRENGTH=22'), true);
	fs.unlinkSync(dst);
}

// --- both FAT copies stay in sync ----------------------------------------
// The games do not agree on which FAT they read, so a write that updates only
// one produces a disk that works in one game and not the other.
{
	const dst = tmp.replace('.hdm', '-fat.hdm');
	fs.copyFileSync(tmp, dst);
	run('set', dst, '0', 'STRENGTH', '42', '--inplace');
	const b = fs.readFileSync(dst);
	eq('FAT1 and FAT2 identical after a write', b.subarray(FAT1, FAT1 + FATSZ * SS).equals(b.subarray(FAT2, FAT2 + FATSZ * SS)), true);
	fs.unlinkSync(dst);
}

// --- world-copy ----------------------------------------------------------
// Needs a WORLD1 to copy from, so build one first using the same free-cluster
// allocation path the tool uses when the destination does not exist.
{
	const dst = tmp.replace('.hdm', '-world.hdm');
	fs.copyFileSync(tmp, dst);
	// Free clusters start at 6. Writing WORLD1 there gives world-copy something
	// to read. Use the roster as the payload, size does not matter here.
	const w = fs.readFileSync(dst);
	const payload = Buffer.alloc(2 * SS, 0x5a);
	for (const fat of [FAT1, FAT2]) { fatSet(w, fat, 6, 7); fatSet(w, fat, 7, 0xfff); }
	payload.copy(w, DATA_OFF + (6 - 2) * SS, 0, 2 * SS);
	makeEntry(w, 2, 'WORLD1  UT2', 6, payload.length);
	fs.writeFileSync(dst, w);

	const out = run('world-copy', dst, '1', '2', '--inplace');
	eq('world-copy reports success', out.includes('WORLD2'), true);
	const ls = run('ls', dst);
	eq('WORLD2 appears on the disk', ls.includes('WORLD2'), true);
	// The copy must be the same size as the original.
	const m = ls.match(/WORLD1\s+UT2\s+(\d+)/);
	const m2 = ls.match(/WORLD2\s+UT2\s+(\d+)/);
	eq('WORLD2 is the same size as WORLD1', m2 && m && m2[1] === m[1], true);
	fs.unlinkSync(dst);
}

fs.unlinkSync(tmp);

console.log('\n' + '-'.repeat(50));
console.log('passed ' + pass + ', failed ' + fail);
if (fail) {
	console.log('\nFailures:');
	for (const f of failures) console.log('  ' + f);
	process.exit(1);
}
console.log('All savedisk checks passed.');
