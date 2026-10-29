#!/usr/bin/env node
'use strict';
// tools/calltargets.js - which `E8 rel32` call targets are not really called by anything.
//
// WHY THIS EXISTS. The call-target rule scans every byte of the image, so a byte pair inside a table can point
// anywhere, and the address it points at then decodes as plausible code. Those addresses sit in the decompilation
// queue as routines, and working them is wasted time. Item 4o needed the verdict for 30 such starts and this is the
// measurement that gave it: for each call target, is the *site* of any call pointing at it an instruction start in
// either walk.
//
// WHY BOTH WALKS. Ours alone is not enough and the difference is large: with only this project's walk the rule marks
// 105 targets, against 22 with both. A call site inside a region our seeds never cover is not one of our instruction
// starts even when it is plainly code, so one decoder's silence proves nothing. The rule is "neither decoder calls
// the site an instruction".
//
// WHAT IT NEEDS. ENCHANT.EXP, and the recompiled module under build/port/recomp for the second walk. Absent module:
// it says so and exits 0, because a clone with only the disc cannot answer the question and should not be told it
// failed.
//
// USAGE
//   node tools/calltargets.js            print the list and a summary
//   node tools/calltargets.js --write    rewrite tools/non-call-targets.txt
//   node tools/calltargets.js --check    compare the file with a fresh derivation, exit 1 on drift
//
// Exit 2 on a missing input it cannot do without, 1 on drift in --check mode.

const fs = require('fs');
const path = require('path');
const { execFileSync } = require('child_process');

const ROOT = path.resolve(__dirname, '..');
const EXP = path.join(ROOT, 'ENCHANT.EXP');
const RECOMP = path.join(ROOT, 'build/port/recomp');
const FILE = path.join(__dirname, 'non-call-targets.txt');

const args = process.argv.slice(2);
const hx = (n) => '0x' + n.toString(16);

if (!fs.existsSync(EXP)) {
	console.error(`${EXP} is missing`);
	process.exit(2);
}

const img = fs.readFileSync(EXP).subarray(0x200);

// Our instruction starts, in the guest frame. cfgwalk works on the file minus 0x20, so its addresses are guest + 0x1E0.
const ours = new Set(
	execFileSync(process.execPath, [path.join(__dirname, 'cfgwalk.js'), '--insns'], { cwd: ROOT, encoding: 'utf8', maxBuffer: 64 << 20 })
		.split('\n')
		.filter(Boolean)
		.map((l) => parseInt(l, 16) - 0x1e0),
);

// Their function starts and instruction starts come straight out of the emitted text, because the address is in
// every name and in every trace marker.
const files = fs.existsSync(RECOMP) ? fs.readdirSync(RECOMP).filter((f) => /^p_game_\d+\.cpp$/.test(f)) : [];
if (!files.length) {
	console.log('calltargets: no recompiled module under build/port/recomp, so the second walk is missing.');
	console.log('             The rule needs both walks: with ours alone it marks 105 targets instead of 22.');
	console.log('             Run tools/port-build.sh, or read tools/non-call-targets.txt which records the answer.');
	process.exit(0);
}
const theirs = new Set();
const theirFns = new Set();
for (const f of files) {
	const text = fs.readFileSync(path.join(RECOMP, f), 'utf8');
	for (const m of text.matchAll(/X86_AT\(c, 0x([0-9a-f]+)u\);/g)) theirs.add(parseInt(m[1], 16));
	for (const m of text.matchAll(/^void f_([0-9a-f]{8})\(X86Cpu& c\)/gm)) theirFns.add(parseInt(m[1], 16));
}

// Every call site, grouped by the target it names.
const siteOf = new Map();
for (let a = 0; a + 5 <= img.length; a++) {
	if (img[a] !== 0xe8) continue;
	const t = a + 5 + img.readInt32LE(a + 1);
	if (t < 0 || t >= img.length) continue;
	if (!siteOf.has(t)) siteOf.set(t, []);
	siteOf.get(t).push(a);
}

// THREE CONDITIONS, and the third is the one that stops this over-reaching. A target is not a routine when no call
// site pointing at it is an instruction in either walk AND the other walk does not emit it as a function either. A
// routine reached only through a jump table has no real call site and is still a routine, so silence from the call
// sites is only decisive when the second decoder is silent about the address too.
const real = [];
const unreal = [];
const byPointer = [];
let oursOnlyWouldMark = 0;
for (const [t, sites] of [...siteOf.entries()].sort((x, y) => x[0] - y[0])) {
	const inEither = sites.some((s) => ours.has(s) || theirs.has(s));
	const inOurs = sites.some((s) => ours.has(s));
	if (!inOurs) oursOnlyWouldMark++;
	if (inEither) real.push(t);
	else if (theirFns.has(t)) byPointer.push(t);
	else unreal.push(t);
}

console.log(`call sites           ${[...siteOf.values()].reduce((a, s) => a + s.length, 0)}`);
console.log(`call targets         ${siteOf.size}`);
console.log(`  really called      ${real.length}`);
console.log(`  no call, but a function in their walk (reached by pointer) ${byPointer.length}`);
console.log(`  not called, not a function there either ${unreal.length}`);
console.log(`  ours alone would mark ${oursOnlyWouldMark}, which is why this needs both walks`);

if (args.includes('--write')) {
	const header = fs
		.readFileSync(FILE, 'utf8')
		.split('\n')
		.filter((l) => l.startsWith('#'))
		.join('\n');
	fs.writeFileSync(FILE, header + '\n\n' + unreal.map(hx).join('\n') + '\n');
	console.log(`wrote ${unreal.length} addresses to tools/non-call-targets.txt`);
	process.exit(0);
}

if (args.includes('--check')) {
	const have = fs
		.readFileSync(FILE, 'utf8')
		.split('\n')
		.map((l) => l.replace(/#.*/, '').trim())
		.filter(Boolean)
		.map((a) => parseInt(a, 16))
		.sort((x, y) => x - y);
	const drift = have.join(',') !== unreal.join(',');
	if (drift) {
		console.log(`  FAIL  tools/non-call-targets.txt does not match a fresh derivation (${have.length} recorded, ${unreal.length} derived)`);
		const extra = have.filter((a) => !unreal.includes(a));
		const missing = unreal.filter((a) => !have.includes(a));
		if (missing.length) console.log(`        missing: ${missing.slice(0, 10).map(hx).join(' ')}`);
		if (extra.length) console.log(`        recorded but not derived: ${extra.slice(0, 10).map(hx).join(' ')}`);
		process.exit(1);
	}
	console.log(`  ok    tools/non-call-targets.txt matches a fresh derivation, ${have.length} addresses`);
	process.exit(0);
}

for (const t of unreal) console.log('  ' + hx(t));
