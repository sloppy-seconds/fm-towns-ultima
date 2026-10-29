#!/usr/bin/env node
'use strict';
// tools/resumepoints.js - the function starts the recompiler never resumes at, because it stops at a `ret`.
//
// WHY THIS EXISTS. The port was skipping real calls. Measured: 138 call instructions decoded by this project's walk
// and not by the recompiler's, and 137 of them sit in a gap rather than inside a misread instruction. Every one is
// the same shape: the recompiler's function ends at its terminating `ret`, then come 2 to 4 bytes of alignment
// padding (`8b c0`, `90`, `00 00`), then a new function begins with a standard prologue. Its walk is seed driven and
// these functions have no caller, so nothing ever resumes there.
//
// WHAT IT DERIVES. For each function of the recompiler's that contains a skipped call, the first instruction start
// of this project's walk after the recompiler's last instruction. That address is where the missing function begins.
//
// WHAT IT DOES NOT DO. It does not decide that the address is a function. It reports the address and whether a
// standard prologue is there, and the prologue count is the evidence: code that begins with `push ebp; mov ebp, esp`
// or `enter` after alignment padding is a function, and what it is not is called directly by anything.
//
// USAGE
//   node tools/resumepoints.js            print the addresses, with the prologue evidence
//   node tools/resumepoints.js --check    verify every derived address is in tools/runtime-seeds.txt, exit 1 on a gap
//
// Needs ENCHANT.EXP and the recompiled module. Absent module: says so and exits 0, because a clone with only the
// disc cannot answer this and should not be told it failed.

const fs = require('fs');
const path = require('path');
const { execFileSync } = require('child_process');

const ROOT = path.resolve(__dirname, '..');
const EXP = path.join(ROOT, 'ENCHANT.EXP');
const RECOMP = path.join(ROOT, 'build/port/recomp');
const SEEDS = path.join(__dirname, 'runtime-seeds.txt');
const hx = (n) => '0x' + n.toString(16);

if (!fs.existsSync(EXP)) {
	console.error(`${EXP} is missing`);
	process.exit(2);
}
const img = fs.readFileSync(EXP).subarray(0x200);

const ours = execFileSync(process.execPath, [path.join(__dirname, 'cfgwalk.js'), '--insns'], { cwd: ROOT, encoding: 'utf8', maxBuffer: 64 << 20 })
	.split('\n')
	.filter(Boolean)
	.map((l) => parseInt(l, 16) - 0x1e0)
	.sort((a, b) => a - b);

const files = fs.existsSync(RECOMP) ? fs.readdirSync(RECOMP).filter((f) => /^p_game_\d+\.cpp$/.test(f)) : [];
if (!files.length) {
	console.log('resumepoints: no recompiled module under build/port/recomp, so there is nothing to compare with.');
	console.log('              Run tools/port-build.sh, or read the list already recorded in tools/runtime-seeds.txt.');
	process.exit(0);
}

const theirInsns = [];
const theirFns = [];
for (const f of files) {
	const t = fs.readFileSync(path.join(RECOMP, f), 'utf8');
	for (const m of t.matchAll(/X86_AT\(c, 0x([0-9a-f]+)u\);/g)) theirInsns.push(parseInt(m[1], 16));
	for (const m of t.matchAll(/^void f_([0-9a-f]{8})\(X86Cpu& c\)/gm)) theirFns.push(parseInt(m[1], 16));
}
const T = theirInsns.sort((a, b) => a - b);
const F = theirFns.sort((a, b) => a - b);
const theirsSet = new Set(T);
const oursSet = new Set(ours);

const atLeast = (arr, v) => {
	let lo = 0;
	let hi = arr.length - 1;
	let best = null;
	while (lo <= hi) {
		const m = (lo + hi) >> 1;
		if (arr[m] >= v) {
			best = arr[m];
			hi = m - 1;
		} else lo = m + 1;
	}
	return best;
};

// Call instructions this project's walk decodes and the recompiler's does not.
const skipped = ours.filter((s) => img[s] === 0xe8 && !theirsSet.has(s));

// Group them by the recompiler's function that contains them.
const byFn = new Map();
for (const s of skipped) {
	let head = null;
	for (const f of F) {
		if (f <= s) head = f;
		else break;
	}
	if (!byFn.has(head)) byFn.set(head, []);
	byFn.get(head).push(s);
}

const resume = [];
for (const head of byFn.keys()) {
	const nextHead = atLeast(F, head + 1);
	let last = null;
	for (const a of T) {
		if (a >= head && (nextHead === null || a < nextHead)) last = a;
		else if (a >= nextHead) break;
	}
	if (last === null) continue;
	const r = atLeast(ours, last + 1);
	if (r === null || oursSet.has(r) === false) continue;
	const bytes = [...img.subarray(r, r + 4)].map((b) => b.toString(16).padStart(2, '0')).join(' ');
	resume.push({ head, last, r, bytes, prologue: /^55 8b ec/.test(bytes) || /^c8 /.test(bytes), skipped: byFn.get(head).length });
}

const recorded = new Set();
for (const line of fs.readFileSync(SEEDS, 'utf8').split('\n')) {
	const t = line.replace(/#.*/, '').trim();
	if (t && /^(0x)?[0-9a-f]+$/i.test(t)) recorded.add(parseInt(t.replace(/^0x/i, ''), 16));
}

const prologues = resume.filter((x) => x.prologue).length;
console.log(`call instructions ours decodes and theirs does not   ${skipped.length}`);
console.log(`functions of theirs containing them                  ${resume.length}`);
console.log(`  resume point begins with a standard prologue       ${prologues}`);
console.log(`  already recorded in tools/runtime-seeds.txt         ${resume.filter((x) => recorded.has(x.r)).length} of ${resume.length}`);
// WHAT IS LEFT IS CLASSIFIED, NOT TOLERATED. Every unseeded resume point must be explained by its own bytes, and the
// check fails if a new one appears. Three classifications, two of them derived mechanically:
//
//   padding   the address begins a padding sequence the walk skips (`90`, `8b c0`, `66 8b c0`), so it is not a start
//   text      the address sits inside a run of four or more printable characters, so it is a string, not code
//   unproven  code that looks real but has no reference of any kind, so it is not seeded and not claimed
//
// The third kind cannot be derived and is named, with its reason, in UNPROVEN below.
const UNPROVEN = [
	{
		addr: 0x10016e,
		why: 'body code with no reference anywhere: mov al,[0xdfa00]; and eax,0xf; mov bl,[eax+0xdfa15]; cmp bl,0xff. Its only E8 site is 0xfff59, which is an instruction in neither walk, so the call is data. No dword reference either, and it is not a function in the recompiler module. Left unseeded rather than guessed at.',
	},
];

// A printable run, used to classify a resume point as text. Four is the threshold from the measurement that made the
// walker rule unsafe: it is enough for `ftell` and `_exit`, and it is also how `53 56 57` (push ebx; push esi; push edi)
// gets misread, which is why this classification is used on candidates and never applied to the walk itself.
const printable = (i) => i >= 0 && i < img.length && img[i] >= 0x20 && img[i] < 0x7f;
const inText = (a, min = 4) => {
	if (!printable(a)) return false;
	let lo = a;
	let hi = a;
	while (printable(lo - 1)) lo--;
	while (printable(hi + 1)) hi++;
	return hi - lo + 1 >= min;
};
const isPadding = (a) => img[a] === 0x90 || (img[a] === 0x8b && img[a + 1] === 0xc0) || (img[a] === 0x66 && img[a + 1] === 0x8b && img[a + 2] === 0xc0);
// THE TAIL OF AN INSTRUCTION. 0x101a0f turned out to be the last byte of `c2 04 00` (ret 4) at 0x101a0d, so this
// project's walk places a boundary INSIDE an instruction it also places. That is a defect in our walk and it is
// recorded rather than hidden: the classification is mechanical, and the check fails if such a point appears
// anywhere the two bytes before are not a `c2`.
const isTail = (a) => img[a - 2] === 0xc2;
const classify = (a) => (isPadding(a) ? 'padding' : isTail(a) ? 'instruction tail' : inText(a) ? 'text' : 'unproven');

if (argsCheck()) {
	const missing = resume.filter((x) => !recorded.has(x.r));
	const problems = [];
	for (const x of missing) {
		const kind = classify(x.r);
		const named = UNPROVEN.find((u) => u.addr === x.r);
		if (kind === 'unproven' && !named) {
			problems.push(`${hx(x.r)} is neither padding nor text and is not explained in UNPROVEN, so it needs a verdict: ${x.bytes}`);
		} else if (kind !== 'unproven' && named) {
			problems.push(`${hx(x.r)} is listed in UNPROVEN but its bytes classify it as ${kind}`);
		}
	}
	for (const u of UNPROVEN) {
		if (!missing.some((x) => x.r === u.addr)) problems.push(`${hx(u.addr)} is in UNPROVEN but is no longer an unseeded resume point`);
	}
	if (problems.length) {
		for (const p of problems) console.log('  FAIL  ' + p);
		process.exit(1);
	}
	const tally = { padding: 0, 'instruction tail': 0, text: 0, unproven: 0 };
	for (const x of missing) tally[classify(x.r)]++;
	console.log(`  ok    every unseeded resume point is classified: ${tally.text} text, ${tally.padding} padding, ${tally['instruction tail']} instruction tail, ${tally.unproven} unproven (each unproven one named with its reason)`);
	process.exit(0);
}

for (const x of resume) {
	console.log(`  ${hx(x.r).padEnd(10)} after ${hx(x.last).padEnd(10)} ${x.bytes}  ${x.prologue ? 'prologue' : 'no standard prologue'}${recorded.has(x.r) ? '' : '   NOT RECORDED'}`);
}

function argsCheck() {
	return process.argv.slice(2).includes('--check');
}
