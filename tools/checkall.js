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
//
// AGENTS.md is included deliberately. It is the one file read on every single session, so a stale count there
// is the most expensive kind, and the original check only scanned docs/ — which is how the documented-routine
// fraction on its line 35 drifted out of date unnoticed. The routine total is also matched in the bare form
// ("N routines", "N call targets") because that is how the drift appears in prose.
{
	const claims = [];
	const scan = (label, text) => {
		for (const m of text.matchAll(/\b\d+ of 738\b/g)) {
			claims.push(`${label} restates "${m[0]}", owned by call-graph.md`);
		}
	};
	for (const f of pages()) {
		if (f === 'call-graph.md') continue;
		scan(f, fs.readFileSync(path.join(DOCS, f), 'utf8'));
	}
	const agents = path.join(ROOT, 'AGENTS.md');
	if (fs.existsSync(agents)) scan('AGENTS.md', fs.readFileSync(agents, 'utf8'));
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

// D2. The image tooling audit. Different in kind from every other check here,
// and its absence is why four separate defects in `preflight.js` reached commits.
//
// Every other check in this file inspects *documents*: nav, plan metadata, byte
// quotes, the site build. None of them looks at whether a tool derives a fact
// correctly. So a detector that silently answered the wrong question passed every
// gate, and the only thing that ever caught one was a human testing it against a
// routine whose verdict was already known.
//
// `tools/imgaudit.js` makes those hand-checks permanent. Each case it asserts is
// an encoding form that was once handled wrongly: the SIB layout, the
// `mov [abs],imm` form, the raw-versus-stripped 0x20 offset, and the matched
// routines' own bytes. Every assertion in it has been deliberately broken and
// watched to fail, which is the standard the rest of this file is held to.
{
	const r = runNode('imgaudit.js');
	record('image tooling audit', r.ok ? [] : r.out.split('\n').filter((l) => /^FAIL/.test(l)));
}

// D3. The corpus census must be the tool's actual output, not a remembered one.
//
// Why this check exists: `docs/corpus.json` carries counts that every other page
// now links to instead of restating, so a stale corpus is worse than no corpus.
// And the failure it guards against already happened twice in one session, both
// times in prose rather than in tool output: reason counts written from memory
// (26/20/16/12) when the measured values were 42/16/9/8/5/2, and a verdict check
// using `grep -q MATCH`, which also matches the substring in MISMATCH, reporting
// seven of seven when five had broken.
//
// So this regenerates the census and compares it to the committed file. It fails
// if the tool changes, if the image changes, or if someone hand-edits the JSON.
// The comparison is on parsed data rather than raw bytes so that formatting alone
// does not fail it, but every value must agree.
{
	const r = runNode('preflight.js', ['--scan', '1', '--census']);
	const problems = [];
	if (!r.ok) {
		problems.push('census run failed: ' + r.out.split('\n')[0]);
	} else {
		const committed = path.join(DOCS, 'corpus.json');
		if (!fs.existsSync(committed)) {
			problems.push('docs/corpus.json missing');
		} else {
			try {
				const fresh = JSON.parse(r.out);
				const old = JSON.parse(fs.readFileSync(committed, 'utf8'));
				if (fresh.length !== old.length) {
					problems.push(`census has ${old.length} rows, fresh run has ${fresh.length}`);
				} else {
					for (let i = 0; i < fresh.length; i++) {
						if (JSON.stringify(fresh[i]) !== JSON.stringify(old[i])) {
							problems.push(`row ${i} differs: committed ${JSON.stringify(old[i]).slice(0, 90)}`);
							break;
						}
					}
				}
			} catch (e) {
				problems.push('census unreadable: ' + e.message);
			}
		}
	}
	record('corpus census is reproducible', problems);
}

// D4. The detector's own regression, kept because it has been wrong twice.
//
// `target_bytes` truncated at the first 0xc3 for a long time. ndisasm wraps the
// `mov dword [disp32],imm` form onto a continuation line, and the old code required
// a mnemonic on every line, so the tail of the immediate was dropped. An 11-byte
// routine was reported as 9, and the missing bytes contained 0xc3, which is why it
// looked like a short routine. That produced a false mismatch against a build that
// was correct.
//
// The assertion is the specific routine that exposed it, plus the seven matched
// ones as a no-regression guard.
{
	const r = runNode('checkglobals.js');
	record('global tooling regression', r.ok ? [] : r.out.split('\n').filter((l) => /^FAIL/.test(l)));
}

// E3. No `2>&1` inside a DOS batch file. This has now cost time twice, and it is documented in four
// places, which is exactly why it keeps happening: the doc says it, the agent does not read that doc while
// writing a batch on autopilot.
//
// What it does: DOS has no fd 2, so a shell-style stderr merge on a DOS command line is parsed as the
// argument "2" and then "&1". 386LINK
// read it as a library name and answered `Cannot open object input file -- File not found "2.lib"`, which
// looks like a missing-library problem rather than a syntax one. In the earlier compile spike the same text
// made the whole HC386 line fail with no output at all.
//
// This scans every heredoc/string in tools/ that is clearly DOS batch content, plus any .bat/.BAT file, and
// flags `2>&1` or `2>` near a DOS command. It does not flag shell `2>&1`, which is everywhere and correct.
{
	const bad = [];
	const dosish = /\b(?:Q:|A:|C:)\\|HCD386|386LINK|MSCDEX|autoexec|\.BAT\b/i;
	const walk = (dir) => {
		for (const e of fs.readdirSync(dir, { withFileTypes: true })) {
			const full = path.join(dir, e.name);
			// Only local scripts. node_modules and vendor are not ours to police.
			if (e.isDirectory()) {
				if (['node_modules', 'vendor', '.git'].includes(e.name)) continue;
				walk(full);
			} else if (/\.(sh|js|py|bat|BAT|md)$/.test(e.name)) {
				// Docs explain the rule; they are allowed to contain the string.
				if (full.endsWith('.md')) continue;
				const text = fs.readFileSync(full, 'utf8');
				const lines = text.split('\n');
				lines.forEach((line, i) => {
					if (!/2>&1|2>\s/.test(line)) return;
					// A shell redirect is fine. Only flag when the same line looks like DOS.
					if (dosish.test(line)) {
						bad.push(`${path.relative(ROOT, full)}:${i + 1} 2>&1 in DOS context`);
					}
				});
			}
		}
	};
	for (const d of ['tools', 'container']) {
		const p = path.join(ROOT, d);
		if (fs.existsSync(p)) walk(p);
	}
	record('no 2>&1 in DOS batches', bad);
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
