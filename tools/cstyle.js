#!/usr/bin/env node
/*
 * tools/cstyle.js - run clang-format and clang-tidy over port/ if they are installed.
 *
 * WHY IT SKIPS RATHER THAN FAILS. This repository's promise is that a stranger who has downloaded only the zip can run
 * every check, so no check may depend on a package that is not part of the tree. The C++ tools are on no machine this
 * project has been built on. So when they are absent this prints what it could not do and exits 0, and the check that
 * calls it reports a skip rather than a pass, because a skipped check that reads as a pass is the defect this
 * repository keeps paying for.
 *
 * WHAT IT DOES WHEN THEY EXIST. clang-format runs in --dry-run --Werror mode, so a formatting difference is a failure
 * rather than a silent rewrite: nothing here should ever edit a file. clang-tidy needs a compile_commands.json, which
 * means configuring the port with -DCMAKE_EXPORT_COMPILE_COMMANDS=ON; without that file tidy is skipped too, and says
 * so.
 *
 * SCOPE. port/ only. module/ is the recompiler's output and the preservation track compares it byte for byte, so a
 * formatter must never touch it.
 *
 * Usage: node tools/cstyle.js [--json]
 * Exit: 0 when everything ran clean or the tools are absent, 1 when a tool reported a problem.
 */

'use strict';

const fs = require('fs');
const path = require('path');
const { spawnSync } = require('child_process');

const ROOT = path.resolve(__dirname, '..');
const PORT = path.join(ROOT, 'port');
const json = process.argv.includes('--json');

const sources = fs
	.readdirSync(PORT)
	.filter((f) => /\.(cpp|h)$/.test(f))
	.sort()
	.map((f) => path.join('port', f));

function have(tool) {
	const r = spawnSync(tool, ['--version'], { encoding: 'utf8' });
	return r.status === 0;
}

const problems = [];
const skipped = [];

if (have('clang-format')) {
	// --Werror turns a formatting difference into a non-zero exit, so this can never rewrite a file.
	const r = spawnSync('clang-format', ['--dry-run', '--Werror', ...sources], { cwd: ROOT, encoding: 'utf8' });
	if (r.status !== 0) {
		for (const line of `${r.stderr || ''}${r.stdout || ''}`.split('\n').filter((l) => /error|warning/.test(l)).slice(0, 12))
			problems.push(`clang-format: ${line.trim()}`);
	}
} else {
	skipped.push('clang-format not installed');
}

const cc = path.join(ROOT, 'build', 'u2', 'b', 'compile_commands.json');
if (!have('clang-tidy')) skipped.push('clang-tidy not installed');
else if (!fs.existsSync(cc)) skipped.push('clang-tidy needs build/u2/b/compile_commands.json (-DCMAKE_EXPORT_COMPILE_COMMANDS=ON)');
else {
	const r = spawnSync('clang-tidy', ['-p', path.dirname(cc), '--quiet', ...sources], { cwd: ROOT, encoding: 'utf8' });
	if (r.status !== 0) {
		for (const line of `${r.stdout || ''}`.split('\n').filter((l) => /warning:|error:/.test(l)).slice(0, 12))
			problems.push(`clang-tidy: ${line.trim()}`);
	}
}

if (json) {
	console.log(JSON.stringify({ sources: sources.length, problems, skipped }, null, 2));
} else {
	console.log(`cstyle: ${sources.length} files in port/`);
	for (const s of skipped) console.log(`  skipped  ${s}`);
	for (const p of problems) console.log(`  FAIL     ${p}`);
	if (!problems.length) console.log(skipped.length ? '  nothing to check: no C++ tool installed' : '  clean');
}
process.exit(problems.length ? 1 : 0);
