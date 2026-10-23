#!/usr/bin/env node
// tools/test-coderefs.js - assertions for the string cross-reference tool.
//
// These exist because coderefs.js had three arithmetic bugs in a row, each of
// which produced plausible output: a site address 0x20 low, a call target 0x20
// low, and false positives inside Shift-JIS text. Plausible is the dangerous
// failure mode, so the values are pinned here against hand-decoded ground truth.
//
// Run: node tools/test-coderefs.js

'use strict';

const { execFileSync } = require('child_process');
const fs = require('fs');
const path = require('path');

const ROOT = path.join(__dirname, '..');
let pass = 0;
let fail = 0;

function ok(name, cond, detail) {
	if (cond) { pass++; console.log('  ok   ' + name); }
	else { fail++; console.log('  FAIL ' + name + (detail ? ' -- ' + detail : '')); }
}

const run = (args) => execFileSync(process.execPath, [path.join(__dirname, 'coderefs.js'), ...args],
	{ encoding: 'utf8', cwd: ROOT });

// --- ground truth, decoded by hand from the image -----------------------------
// push "Q:\SOUND\MAGIC2.SND"; push 11; call 0xe5854  sits at 0x0e23d6.
// Bytes there: 68 2c 14 00 00 6a 0b e8 72 34 00 00
// Checking the literal bytes means the tool cannot drift from the binary
// without this failing.
const img = (() => {
	const local = path.join(ROOT, 'ENCHANT.EXP');
	if (fs.existsSync(local)) return fs.readFileSync(local).slice(0x20);
	const { Disc, defaultDisc } = require('./cd.js');
	const d = new Disc(defaultDisc(ROOT));
	const cat = d.catalogue();
	const name = [...cat.keys()].find((k) => /ENCHANT\.EXP$/i.test(k));
	const b = d.get(cat, name);
	d.close();
	return b.slice(0x20);
})();

const MAGIC2_SITE = 0x0e23d6;
const siteBytes = img.slice(MAGIC2_SITE - 0x20, MAGIC2_SITE - 0x20 + 12).toString('hex');

console.log('== image bytes at the ground-truth site ==');
ok('0x0e23d6 is push imm32', siteBytes.startsWith('68'), siteBytes);
ok('the immediate is 0x142c (MAGIC2.SND)', siteBytes.slice(2, 10) === '2c140000', siteBytes);
ok('followed by push imm8', siteBytes.slice(10, 14) === '6a0b', siteBytes);

console.log('\n== the tool agrees with the hand decode ==');
const out = run([]);
ok('reports the site at 0x0e23d6', out.includes('0x0e23d6'), out.split('\n').find((l) => l.includes('MAGIC2')));
ok('reports the callee as 0xe5854', out.includes('call 0xe5854'), out.split('\n').find((l) => l.includes('MAGIC2')));
ok('names the string', out.includes('Q:\\SOUND\\MAGIC2.SND'));

console.log('\n== the counting claims in the docs ==');
ok('71 asset strings on the image', /on the image\s*:\s*71/.test(out), out.match(/on the image.*/)?.[0]);
ok('5 are referenced by code', /referenced by code:\s*5/.test(out), out.match(/referenced by code.*/)?.[0]);
ok('66 are never referenced', /never referenced\s*:\s*66/.test(out), out.match(/never referenced.*/)?.[0]);

console.log('\n== a string that is never referenced ==');
// BUMP.SND is in the sound table but no immediate points at it. Before the
// clean-start check this returned false hits from inside Shift-JIS text.
let threw = false;
try { run(['--string', 'BUMP.SND']); } catch (e) { threw = e.status === 1; }
ok('--string BUMP.SND exits 1 (no direct reference)', threw);

console.log('\n== the single-string query ==');
const one = run(['--string', 'MAGIC2']);
const lines = one.trim().split('\n').filter(Boolean);
ok('returns exactly one line', lines.length === 1, lines.length + ' lines');

console.log('');
if (fail) {
	console.log(fail + ' failed, ' + pass + ' passed');
	process.exit(1);
}
console.log(pass + ' passed');
