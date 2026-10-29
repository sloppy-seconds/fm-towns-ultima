#!/usr/bin/env node
'use strict';
// tools/recompcompare.js - compare two emitted modules, function set against function set.
//
// WHY THIS EXISTS. tools/recomp-cross.sh asks whether the recompiler can be taught the function starts this
// project's own walk holds: it recompiles with those addresses added as seeds, into a separate directory, and then
// something has to compare the result with the module that is already there. That comparison is this file, kept as
// a tool rather than embedded in the shell script so it can be syntax-checked and run on its own.
//
// WHAT IT ASSERTS. Adding seeds must never remove a function, must not introduce a refusal or a conflict, and
// should cause the seeds to appear. Lost functions are a hard failure because they mean the cross list is not a
// superset of the real one, which would make the whole experiment meaningless.
//
// USAGE
//   node tools/recompcompare.js <baseline-dir> <cross-dir> <seed-file>
//
// Exit 0 when the cross module is a superset with no refusal and no conflict, 1 when it is not, 2 on bad input.

const fs = require('fs');
const path = require('path');

const [baseDir, crossDir, seedFile] = process.argv.slice(2);
if (!baseDir || !crossDir || !seedFile) {
	console.error('usage: node tools/recompcompare.js <baseline-dir> <cross-dir> <seed-file>');
	process.exit(2);
}

// A function is emitted as `void f_XXXXXXXX(X86Cpu& c)` and the address is in the name, so the sets come from the
// text with nothing inferred.
const fns = (dir) => {
	if (!fs.existsSync(dir)) {
		console.error(`${dir} does not exist`);
		process.exit(2);
	}
	const out = new Set();
	for (const f of fs.readdirSync(dir).filter((x) => /^p_game_\d+\.cpp$/.test(x))) {
		for (const m of fs.readFileSync(path.join(dir, f), 'utf8').matchAll(/^void f_([0-9a-f]{8})\(X86Cpu& c\)/gm)) {
			out.add(m[1]);
		}
	}
	return out;
};

const reportLine = (dir) => {
	const f = path.join(dir, 'report.txt');
	if (!fs.existsSync(f)) return 'no report.txt';
	const line = /game:.*$/m.exec(fs.readFileSync(f, 'utf8'));
	return line ? line[0] : 'no game line in report.txt';
};

const base = fns(baseDir);
const cross = fns(crossDir);
const seeds = fs
	.readFileSync(seedFile, 'utf8')
	.split('\n')
	.map((l) => l.replace(/#.*/, '').trim())
	.filter(Boolean)
	.map((a) => parseInt(a, 16).toString(16).padStart(8, '0'));

const added = [...cross].filter((a) => !base.has(a));
const lost = [...base].filter((a) => !cross.has(a));
const taught = seeds.filter((s) => cross.has(s) && !base.has(s));
const ignored = seeds.filter((s) => !cross.has(s));

console.log('comparison');
console.log(`  baseline module      ${base.size} functions`);
console.log(`  cross module         ${cross.size} functions`);
console.log(`  added                ${added.length}`);
console.log(`  lost                 ${lost.length}   (must be 0: adding seeds must not remove anything)`);
console.log(`  of the ${seeds.length} seeds, ${taught.length} are now emitted and ${ignored.length} are not`);
if (ignored.length) console.log(`  still ignored        ${ignored.map((s) => '0x' + s).join(' ')}`);
console.log('');
console.log(`  baseline report      ${reportLine(baseDir)}`);
console.log(`  cross report         ${reportLine(crossDir)}`);

const crossReport = reportLine(crossDir);
const baseReport = reportLine(baseDir);

// THE COUNTS COME BEFORE THE WORDS: "2 refused, 32 conflicts", not "refused 0". The first version of this tested
// `/refused (?!0\b)/`, which cannot match that format at all, so it reported PASS on a run with 32 conflicts. A
// check that cannot fail is a comment, and this one was.
const countOf = (line, word) => {
	const m = new RegExp(`(\\d+) ${word}\\b`).exec(line);
	return m ? Number(m[1]) : null;
};

const bad = [];
if (lost.length) bad.push(`${lost.length} functions disappeared, so the cross seed list is not a superset: ${lost.slice(0, 5).join(', ')}`);
if (ignored.length) bad.push(`${ignored.length} of our seeds were not emitted`);
for (const [label, line] of [['baseline', baseReport], ['cross', crossReport]]) {
	for (const word of ['refused', 'conflicts']) {
		const n = countOf(line, word);
		if (n === null) bad.push(`the ${label} report does not state a ${word} count, so nothing was compared`);
		else if (n !== 0) bad.push(`the ${label} run reports ${n} ${word}`);
	}
}

console.log('');
if (bad.length) {
	for (const b of bad) console.log('  FAIL  ' + b);
	process.exit(1);
}
console.log(`  PASS  ${taught.length} of ${seeds.length} seeds accepted, nothing lost, 0 refused and 0 conflicts from either module`);
process.exit(0);
