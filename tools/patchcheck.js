#!/usr/bin/env node
// The kit submodule, its pin, and the mirror patch - checked rather than described.
//
// THE SHAPE. `fmtownskit` is a git submodule of the fork `paulczar/fmtownskit` on branch `mp-support`, with
// `vs-sr-dev/fmtownskit` recorded as the `upstream` remote inside it. That is the shape the other games in the
// upstream organisation use (`pc-4ddriving`, `pc-abelsmt` and `pc-thequeenofduellist` each carry
// `[submodule "fmtownskit"] path = fmtownskit`), with one difference: the URL is ours, so the pin is a commit
// somebody else can fetch and this project can commit to the kit instead of holding it as uncommitted edits.
//
// WHY A MIRROR PATCH STILL EXISTS. `patches/fmtownskit-mp-support.patch` is not the transport any more - git is -
// but a reader of this repository wants the answer to "what did this project change in the kit, and why", and a
// 15-file diff against a named upstream commit answers that where a branch pointer does not. So the patch is
// regenerated from the branch with `git -C fmtownskit diff <base>` and this check asserts it is exact.
//
// WHAT IS ASSERTED, in order:
//
//   1. the working tree is clean, so the branch is the whole truth and nothing is hiding in it
//   2. `patches/fmtownskit-base.txt` names a commit that is an ancestor of the pin, so the base is real
//   3. `git diff <base>` equals the mirror patch, byte for byte
//   4. the pin is reachable from `origin/mp-support`, so a fresh clone can fetch the commit it is told to check out
//
// Absent submodule: prints why and passes. A stranger with only the zip has not run `git submodule update --init`
// and telling them the check failed would be wrong. What it must not do is pass silently, so the skip says so.
'use strict';
const fs = require('fs');
const path = require('path');
const { execFileSync } = require('child_process');

const ROOT = path.resolve(__dirname, '..');
const KIT = path.join(ROOT, 'fmtownskit');
const PATCH = path.join(ROOT, 'patches/fmtownskit-mp-support.patch');
const BASE = path.join(ROOT, 'patches/fmtownskit-base.txt');
const BRANCH = 'mp-support';

const run = (cmd, args, opts = {}) =>
	execFileSync(cmd, args, { encoding: 'utf8', stdio: 'pipe', ...opts });

const git = (args, opts) => run('git', ['-C', KIT, ...args], opts);

const fails = [];
const fail = (msg) => {
	console.log('  FAIL  ' + msg);
	fails.push(msg);
};

console.log('patchcheck: the fmtownskit submodule');

if (!fs.existsSync(path.join(KIT, '.git'))) {
	console.log('  skip  no kit submodule at fmtownskit, so there is nothing to check against');
	console.log('        (the mirror patch and its base commit are still committed, and docs/fmtownskit-patches.md says how to set it up)');
	process.exit(0);
}
for (const f of [PATCH, BASE]) {
	if (!fs.existsSync(f)) {
		console.log(`  FAIL  ${path.relative(ROOT, f)} is missing`);
		process.exit(1);
	}
}

// 1. The working tree must be clean. A dirty tree means the branch does not describe what is on disk, and this
// check would then be asserting a patch against something nobody can fetch. `.agents/` is the kit's own untracked
// work in progress and is named here rather than silently ignored.
{
	const dirty = git(['status', '--porcelain'])
		.split('\n')
		.filter(Boolean)
		// `git status --porcelain` is two status columns, a space, then the path. Trimming the line first eats the
		// leading space and mangles every path ("EADME.md"), which is what the first version of this did.
		.map((l) => /^..\s(.+)$/.exec(l))
		.filter(Boolean)
		.map((m) => m[1].trim())
		.filter((f) => f !== '.agents/' && !f.startsWith('.agents/'));
	if (dirty.length) {
		fail(`the working tree is dirty (${dirty.slice(0, 5).join(', ')}${dirty.length > 5 ? ', ...' : ''}), so the branch does not describe what is on disk`);
	} else {
		console.log('  ok    the working tree is clean, so the branch is the whole truth (.agents/ excepted)');
	}
}

// 2. The base must be a real ancestor of the pin, or the mirror patch is a diff against nothing.
const base = fs.readFileSync(BASE, 'utf8').trim();
const pin = git(['rev-parse', 'HEAD']).trim();
{
	let ancestor = false;
	try {
		git(['merge-base', '--is-ancestor', base, pin]);
		ancestor = true;
	} catch (e) {
		ancestor = false;
	}
	if (ancestor) console.log(`  ok    patches/fmtownskit-base.txt (${base.slice(0, 7)}) is an ancestor of the pin (${pin.slice(0, 7)})`);
	else fail(`the base commit ${base.slice(0, 7)} is not an ancestor of the pin ${pin.slice(0, 7)}, so the mirror patch describes nothing`);
}

// 3. The mirror patch must be exactly the branch's difference from the base.
{
	const want = fs.readFileSync(PATCH, 'utf8');
	const got = git(['diff', base]);
	if (got === want) {
		const files = (want.match(/^diff --git /gm) || []).length;
		const hunks = (want.match(/^@@/gm) || []).length;
		console.log(`  ok    the mirror patch is exactly git diff ${base.slice(0, 7)}, ${files} files and ${hunks} hunks`);
	} else {
		const where = want.split('\n').findIndex((l, i) => l !== got.split('\n')[i]);
		fail(`the mirror patch is not the branch's difference from the base (first difference at line ${where + 1}). Regenerate with: git -C fmtownskit diff ${base} > patches/fmtownskit-mp-support.patch`);
	}
}

// 4. The pin must be fetchable. A commit that exists only on this machine looks exactly like a pin until somebody
// else clones, and that was the state of the first version of this submodule.
{
	let onBranch = false;
	try {
		git(['merge-base', '--is-ancestor', pin, `origin/${BRANCH}`]);
		onBranch = true;
	} catch (e) {
		onBranch = false;
	}
	if (onBranch) console.log(`  ok    the pin is on origin/${BRANCH}, so a fresh clone can fetch it`);
	else fail(`the pin ${pin.slice(0, 7)} is not on origin/${BRANCH}. Push it, or this submodule cannot be cloned by anyone else.`);
}

console.log(fails.length ? 'patchcheck: failed' : 'patchcheck: passed');
process.exit(fails.length ? 1 : 0);
