#!/usr/bin/env node
// tools/checkall.js - every documentation check, with an exit code that means something.
//
// WHY THIS REPLACED THE OLD LIST. docs/plan-process.md Part 7 used to give six shell one-liners. Measured,
// only two of them could gate anything:
//
//   A  for/grep || echo     always exits 0          cannot fail
//   B  grep || true         always exits 0          cannot fail
//   C  grep -rno            exits 1 when NO matches  INVERTED: reports failure when clean
//   D  node plancheck.js    real exit code          works
//   E  mkdocs | grep        exits 1 when clean      INVERTED
//   F  node verify.js       real exit code          works
//
// So the summary table drifted for four commits while check C, the one closest to catching it, was selected
// to notice something it cannot see and would have reported success either way.
//
// Every check below is written so that FAILURE gives a non-zero exit, and each one is tested by breaking
// something it should catch before being trusted. See Part 7 of the process page for that rule.
//
// Usage:
//   node tools/checkall.js                all checks
//   node tools/checkall.js --no-build     skip the site build (slowest, and needs mkdocs)
//   node tools/checkall.js --quiet        only print failures

'use strict';

const fs = require('fs');
const path = require('path');
const { execFileSync } = require('child_process');

const ROOT = path.join(__dirname, '..');
const DOCS = path.join(ROOT, 'docs');
const QUIET = process.argv.includes('--quiet');
const NO_BUILD = process.argv.includes('--no-build');

const results = [];
const record = (name, failures) => results.push({ name, failures });

const pages = () => fs.readdirSync(DOCS).filter((f) => f.endsWith('.md'));

// A. Every page must be reachable from the nav. mkdocs --strict does not catch this: a page can exist
// without being in nav and the build passes.
{
	const nav = fs.readFileSync(path.join(ROOT, 'mkdocs.yml'), 'utf8');
	const missing = pages().filter((p) => !nav.includes(p));
	record('nav coverage', missing.map((m) => `not in nav: docs/${m}`));
}

// B. Style. Two exemptions carry provenance rather than being oversights: the process page quotes the rule,
// and the imported research document is not ours to restyle.
{
	const exempt = new Set(['plan-process.md', 'u2-game-meta-analysis.md']);
	const bad = [];
	for (const f of pages()) {
		if (exempt.has(f)) continue;
		fs.readFileSync(path.join(DOCS, f), 'utf8')
			.split('\n')
			.forEach((line, i) => {
				// A semicolon inside a fenced block is code, not prose.
				if (line.includes('\u2014')) bad.push(`${f}:${i + 1} em-dash`);
			});
	}
	// The old check was `grep || true`, which cannot fail. This one counts and reports.
	record('no em-dashes outside code', bad);
}

// C. A count must live in one place. call-graph.md owns the named-routine count; no other page may restate
// it. This is the specific drift that happened three times, and the old check selected for the wrong thing.
{
	const claims = [];
	for (const f of pages()) {
		if (f === 'call-graph.md') continue;
		const text = fs.readFileSync(path.join(DOCS, f), 'utf8');
		for (const m of text.matchAll(/\b\d+ of 738\b/g)) {
			claims.push(`${f} restates "${m[0]}", owned by call-graph.md`);
		}
	}
	record('counts have one owner', claims);
}

// C2. The new one, because the drift that actually happened was a summary table contradicting the sections
// beneath it and no check looked at both.
{
	const plan = fs.readFileSync(path.join(DOCS, 'plan.md'), 'utf8');
	const rows = [...plan.matchAll(/^\|\s*([0-9][a-z])\s+([^|]+)\|([^|]+)\|/gm)].map((m) => ({
		id: m[1],
		autonomy: m[3].trim(),
	}));
	const stale = [];
	for (const r of rows) {
		const i = plan.indexOf('### ' + r.id + '.');
		if (i < 0) continue;
		const j = plan.indexOf('\n### ', i + 1);
		const body = plan.slice(i, j < 0 ? plan.length : j);
		const section = /\*\*Autonomy:\*\*\s*([A-Z][A-Z ]*)/.exec(body)?.[1]?.trim();
		if (section && r.autonomy !== section) {
			stale.push(`${r.id}: summary says "${r.autonomy}", section says "${section}"`);
		}
	}
	record('summary table matches sections', stale);
}

// D. Plan metadata. plancheck.js owns this, so it is invoked rather than reimplemented.
const runNode = (script, args = []) => {
	try {
		return { ok: true, out: execFileSync(process.execPath, [path.join(__dirname, script), ...args], { cwd: ROOT, encoding: 'utf8', stdio: 'pipe' }) };
	} catch (e) {
		return { ok: false, out: (e.stdout ?? '') + (e.stderr ?? '') };
	}
};
{
	const r = runNode('plancheck.js');
	record('plan items', r.ok ? [] : r.out.split('\n').filter((l) => l.trim() && !/^items:|^  [A-Z]/.test(l)));
}
{
	const r = runNode('planmigrate.js');
	record('plan format', r.ok ? [] : r.out.split('\n').filter((l) => /needing conversion/.test(l)));
}

// E. Established facts. verify.js reads the disc, so it is the reproducibility gate.
{
	const r = runNode('verify.js');
	record('verify', r.ok ? [] : r.out.split('\n').filter((l) => /^  [a-z0-9]/i.test(l)));
}

// E2. Quoted bytes must be findable. This is the check for the defect that cost two wrong verdicts and
// nearly ruled out the right compiler: a hand-written byte sequence quoted into docs/ as ground truth, which
// did not exist in the image, and which two compilers were then calibrated against. A sequence with no
// command beside it is indistinguishable from an invented one, so this makes the distinction mechanical.
{
	const r = runNode('checkquoted.js');
	record('quoted bytes are real', r.ok ? [] : r.out.split('\n').filter((l) => /not found in any binary/.test(l)));
}

// F. The site builds strict. Needs mkdocs, which is not always installed, so it reports skipped rather than
// passing silently.
if (NO_BUILD) {
	record('site build', []);
} else {
	const mkdocs = '/var/tmp/mkvenv/bin/mkdocs';
	if (!fs.existsSync(mkdocs)) {
		record('site build (skipped, no mkdocs)', []);
	} else {
		let ok = true;
		let out = '';
		try {
			out = execFileSync(mkdocs, ['build', '--strict'], { cwd: ROOT, encoding: 'utf8', stdio: 'pipe' });
		} catch (e) {
			ok = false;
			out = (e.stdout ?? '') + (e.stderr ?? '');
		}
		const bad = ok ? [] : out.split('\n').filter((l) => /WARNING|ERROR/.test(l));
		if (!ok && !bad.length) bad.push('build failed with no WARNING or ERROR line');
		record('site build', bad);
	}
}

// ---------------------------------------------------------------------------

let total = 0;
for (const r of results) {
	total += r.failures.length;
	if (!QUIET || r.failures.length) {
		console.log(`${r.failures.length ? 'FAIL' : 'ok  '} ${r.name}` + (r.failures.length ? `  (${r.failures.length})` : ''));
		for (const f of r.failures.slice(0, 6)) console.log('       ' + f);
	}
}
if (total) {
	console.log(`\n${total} problem(s). This exits non-zero, so it can gate a commit.`);
	process.exit(1);
}
console.log('\nall checks pass.');
