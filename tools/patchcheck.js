#!/usr/bin/env node
// The vendored kit's patches, checked rather than described.
//
// Why. `references/` is gitignored, so every edit this repository makes to fmtownskit lives only in a clone that
// is not committed. `patches/fmtownskit-mp-support.patch` is the record, and a record nobody tests drifts: the doc
// says one thing, the clone another, and neither says so. This clones the kit to a temporary directory, applies
// the committed patch there, and compares the result byte for byte with the working clone.
//
// It also fails if the clone has changed in a way the patch does not describe, which is the case that matters when
// somebody edits the kit and forgets to regenerate the patch.
//
// Absent clone: it prints why and passes. A stranger with only the zip has no kit, and telling them the check
// failed would be wrong. What it must not do is pass silently, so the skip says so on its own line.
'use strict';
const fs = require('fs');
const os = require('os');
const path = require('path');
const { execFileSync } = require('child_process');

const ROOT = path.resolve(__dirname, '..');
const KIT = path.join(ROOT, 'references/vs-sr-dev/fmtownskit');
const PATCH = path.join(ROOT, 'patches/fmtownskit-mp-support.patch');

const run = (cmd, args, opts = {}) =>
	execFileSync(cmd, args, { encoding: 'utf8', stdio: 'pipe', ...opts });

const filesIn = (patchText) =>
	[...patchText.matchAll(/^diff --git a\/(\S+) b\/(\S+)$/gm)].map((m) => m[2]);

console.log('patchcheck: the fmtownskit patch set');

if (!fs.existsSync(KIT)) {
	console.log('  skip  no kit clone at references/vs-sr-dev/fmtownskit, so there is nothing to check against');
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

// 2. The patch must apply to a clean clone at the same commit and reproduce the working tree exactly.
const tmp = fs.mkdtempSync(path.join(os.tmpdir(), 'patchcheck-'));
try {
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
