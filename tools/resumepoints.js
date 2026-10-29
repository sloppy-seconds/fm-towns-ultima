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
// THE RESIDUE, named rather than tolerated. These three are the states this project has decided not to seed, and the
// check fails if the set changes, so it cannot quietly grow. Two are this project's walk over-extending into strings
// (`66 74 65 6c 6c` and `5f 65 78 69` spell text), which is our defect and not the recompiler's, and seeding them made
// it refuse at 0x101a1c with 59 conflicts. The third is inside the same conflicted neighbourhood.
const EXPECTED_RESIDUE = [0x100107, 0x101602, 0x1019f6];

if (argsCheck()) {
	const missing = resume.filter((x) => !recorded.has(x.r)).map((x) => x.r).sort((a, b) => a - b);
	const want = EXPECTED_RESIDUE.slice().sort((a, b) => a - b);
	if (missing.join(',') !== want.join(',')) {
		console.log(`  FAIL  the unseeded resume points are ` + (missing.map(hx).join(' ') || 'none') + `, expected ${want.map(hx).join(' ')}`);
		for (const x of resume.filter((r) => !recorded.has(r.r))) console.log(`        ${hx(x.r)} after ${hx(x.last)}, ${x.bytes}`);
		process.exit(1);
	}
	console.log(`  ok    the only unseeded resume points are the three named in EXPECTED_RESIDUE: ${want.map(hx).join(' ')}`);
	process.exit(0);
}

for (const x of resume) {
	console.log(`  ${hx(x.r).padEnd(10)} after ${hx(x.last).padEnd(10)} ${x.bytes}  ${x.prologue ? 'prologue' : 'no standard prologue'}${recorded.has(x.r) ? '' : '   NOT RECORDED'}`);
}

function argsCheck() {
	return process.argv.slice(2).includes('--check');
}
