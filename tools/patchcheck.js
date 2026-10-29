#!/usr/bin/env node
// The kit submodule's patch series, checked rather than described.
//
// Why. `fmtownskit` is a git submodule pinned to a commit on the upstream repository, the same shape the other
// games in that org use (`pc-4ddriving`, `pc-abelsmt` and `pc-thequeenofduellist` each carry
// `[submodule "fmtownskit"] path = fmtownskit`). The pin is a PUBLISHED commit and the project's own MP support
// is a patch series on top of it, because the branch that work was developed on was never pushed. So the pin
// plus `patches/fmtownskit-mp-support.patch` is the whole truth about which kit this project runs.
//
// A record nobody tests drifts: the doc says one thing, the submodule another, and neither says so. This clones
// the submodule, checks that its pin is reachable from the upstream branch, applies the committed patch there,
// and compares the result byte for byte with the submodule's working tree.
//
// It also fails if the working tree has changed in a way the patch does not describe, which is the case that
// matters when somebody edits the kit and forgets to regenerate the patch.
//
// Absent submodule: it prints why and passes. A stranger with only the zip has not run
// `git submodule update --init`, and telling them the check failed would be wrong. What it must not do is pass
// silently, so the skip says so on its own line.
'use strict';
const fs = require('fs');
const os = require('os');
const path = require('path');
const { execFileSync } = require('child_process');

const ROOT = path.resolve(__dirname, '..');
const KIT = path.join(ROOT, 'fmtownskit');
const PATCH = path.join(ROOT, 'patches/fmtownskit-mp-support.patch');

const run = (cmd, args, opts = {}) =>
	execFileSync(cmd, args, { encoding: 'utf8', stdio: 'pipe', ...opts });

const filesIn = (patchText) =>
	[...patchText.matchAll(/^diff --git a\/(\S+) b\/(\S+)$/gm)].map((m) => m[2]);

console.log('patchcheck: the fmtownskit patch set');

if (!fs.existsSync(KIT)) {
	console.log('  skip  no kit submodule at fmtownskit, so there is nothing to check against');
	console.log('        (the patch file is still committed, and docs/fmtownskit-patches.md says how to apply it)');
	process.exit(0);
}
if (!fs.existsSync(PATCH)) {
	console.log('  FAIL  patches/fmtownskit-mp-support.patch is missing');
	process.exit(1);
}

const patchText = fs.readFileSync(PATCH, 'utf8');
const files = filesIn(patchText);
console.log(`  ok    the patch names ${files.length} files and ${(patchText.match(/^@@/gm) || []).length} hunks`);

// 1. The patch must describe the clone. Anything the clone changed that the patch does not mention is drift.
{
	// `git status --porcelain` is two status columns, a space, then the path: " M README.md". Trimming the line
	// first eats the leading space and turns every path into a mangled one ("EADME.md"), which is what the first
	// version of this did. Parse the columns instead of slicing a trimmed string.
	const dirty = run('git', ['-C', KIT, 'status', '--porcelain'])
		.split('\n')
		.map((l) => /^..\s(.+)$/.exec(l))
		.filter(Boolean)
		.map((m) => m[1].trim());
	// README.md is the kit's own in-progress documentation in that clone, not this repository's work. It is
	// named here rather than silently ignored, so the exception is visible and deliberate.
	const ours = dirty.filter((f) => f !== 'README.md' && !f.endsWith('/'));
	const missing = ours.filter((f) => !files.includes(f));
	if (missing.length) console.log(`  FAIL  the clone has changes the patch does not describe: ${missing.join(', ')}`);
	else console.log(`  ok    every change in the clone is in the patch (${ours.length} files, README.md excepted)`);
	if (missing.length) process.exitCode = 1;
}

// 2. The pin must be a published commit, and the patch must apply to it and reproduce the working tree exactly.
// The first half is the point of using a submodule rather than a clone: a pin to a local commit cannot be
// fetched by anyone else, and it would look exactly like a pin until a stranger tried to run this.
const tmp = fs.mkdtempSync(path.join(os.tmpdir(), 'patchcheck-'));
try {
	const pin = run('git', ['-C', KIT, 'rev-parse', 'HEAD']).trim();
	let published = false;
	try {
		run('git', ['-C', KIT, 'merge-base', '--is-ancestor', pin, 'origin/main']);
		published = true;
	} catch (e) {
		published = false;
	}
	if (!published) {
		console.log(`  FAIL  the pin ${pin.slice(0, 7)} is not reachable from origin/main, so nobody else can fetch it`);
		process.exitCode = 1;
	}
	run('git', ['clone', '-q', KIT, tmp]);
	const head = run('git', ['-C', tmp, 'rev-parse', '--short', 'HEAD']).trim();
	run('git', ['-C', tmp, 'apply', '--check', PATCH]);
	run('git', ['-C', tmp, 'apply', PATCH]);
	const differ = [];
	for (const f of files) {
		const a = fs.readFileSync(path.join(tmp, f));
		const b = fs.readFileSync(path.join(KIT, f));
		if (!a.equals(b)) differ.push(f);
	}
	if (differ.length) {
		console.log(`  FAIL  applying the patch at ${head} did not reproduce the clone: ${differ.join(', ')}`);
		process.exitCode = 1;
	} else {
		console.log(`  ok    applies to a clean clone at ${head} and reproduces all ${files.length} files exactly`);
	}
} catch (e) {
	const why = String((e.stdout || '') + (e.stderr || e.message)).trim().split('\n')[0];
	console.log(`  FAIL  ${why}`);
	process.exitCode = 1;
} finally {
	fs.rmSync(tmp, { recursive: true, force: true });
}

console.log(process.exitCode ? 'patchcheck: failed' : 'patchcheck: passed');
