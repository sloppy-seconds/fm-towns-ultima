#!/usr/bin/env node
// tools/sessionreport.js - what actually changed, so a report can be checked rather than remembered.
//
// WHY THIS EXISTS. Three failures kept recurring and none of them was caught by a check:
//
//   1. A claim made without running the check that would disprove it. Example: "four of seven checks print
//      text, three return exit codes" when there are six and two.
//   2. Work done but the plan not updated, or the summary table left contradicting the sections.
//   3. A verification that cannot fail. Twice a tool printed success unconditionally, and four checks in
//      docs/plan-process.md are shell one-liners that always exit 0 or exit 1 when clean.
//
// Asking a human to notice these is not a workflow. This prints the raw material for an honest report so
// the reporting step is reading facts rather than recalling intentions.
//
// Usage:
//   node tools/sessionreport.js              changes since the last pushed commit
//   node tools/sessionreport.js --since abc  since a specific commit
//   node tools/sessionreport.js --range N    last N commits

'use strict';

const { execFileSync } = require('child_process');
const fs = require('fs');
const path = require('path');

const ROOT = path.join(__dirname, '..');

function git(args) {
	try {
		return execFileSync('git', args, { cwd: ROOT, encoding: 'utf8', stdio: 'pipe' }).trim();
	} catch {
		return '';
	}
}

const argv = process.argv.slice(2);
let range;
if (argv.includes('--since')) range = argv[argv.indexOf('--since') + 1] + '..HEAD';
else if (argv.includes('--range')) range = '-' + argv[argv.indexOf('--range') + 1];
else {
	// Default: everything not yet pushed. Falls back to the last commit if there is no upstream.
	const unpushed = git(['log', '--oneline', '@{u}..HEAD']);
	range = unpushed ? '@{u}..HEAD' : '-1';
}

const log = git(['log', '--format=%h|%s', range]);
if (!log) {
	console.log('nothing to report for ' + range);
	process.exit(0);
}

const commits = log.split('\n').map((l) => {
	const [hash, ...rest] = l.split('|');
	return { hash, subject: rest.join('|') };
});

console.log(`session report for ${range}\n`);

// Files touched, so "did the plan move with the work" is a fact.
const files = git(['diff', '--name-only', range.replace('..HEAD', '~1..HEAD')]).split('\n').filter(Boolean);
const allFiles = new Set();
for (const c of commits) {
	for (const f of git(['show', '--stat', '--format=', '--name-only', c.hash]).split('\n')) {
		if (f) allFiles.add(f);
	}
}

const touchedPlan = [...allFiles].some((f) => /^docs\/(plan|open-questions|overnight)\.md$/.test(f));
const touchedDocs = [...allFiles].filter((f) => f.startsWith('docs/')).length;
const touchedCode = [...allFiles].filter((f) => f.startsWith('tools/') || f.startsWith('web/')).length;
const touchedAgents = [...allFiles].includes('AGENTS.md');

console.log('what changed');
console.log(`  commits          ${commits.length}`);
console.log(`  docs pages       ${touchedDocs}`);
console.log(`  tools or web     ${touchedCode}`);
console.log(`  plan documents   ${touchedPlan ? 'yes' : 'NO'}`);
console.log(`  AGENTS.md        ${touchedAgents ? 'yes' : 'no'}`);

if (touchedDocs > 0 && !touchedPlan) {
	console.log('\n  ATTENTION: docs changed but no plan document did. Either nothing plans changed, or');
	console.log('  work happened without the plan being updated. Part 5 of plan-process.md.');
}

// Claims in commit subjects that could be checked but perhaps were not.
const claims = commits.filter((c) => /\b(all|every|fixed|verified|confirmed|proven|complete)\b/i.test(c.subject));
if (claims.length) {
	console.log('\ncommits asserting completeness:');
	for (const c of claims) console.log(`  ${c.hash}  ${c.subject.slice(0, 72)}`);
	console.log('  For each, the check that would disprove it should have been run. Say which.');
}

// Corrections, which are the honest signal of how much of the session was rework.
const corrections = commits.filter((c) => /correct|stale|wrong|retract|drift|fix|false|supersed/i.test(c.subject));
console.log(`\ncorrection commits: ${corrections.length} of ${commits.length}`);
if (corrections.length) {
	for (const c of corrections) console.log(`  ${c.hash}  ${c.subject.slice(0, 72)}`);
}

// Plan items, so the report can say what is outstanding without recalling it.
const planPath = path.join(ROOT, 'docs', 'plan.md');
if (fs.existsSync(planPath)) {
	const plan = fs.readFileSync(planPath, 'utf8');
	const items = [...plan.matchAll(/^### ([0-9][a-z])\. (.+)$/gm)];
	console.log(`\nplan items: ${items.length}`);
	const rows = [];
	for (const m of items) {
		const id = m[1];
		const i = plan.indexOf('### ' + id + '.');
		const j = plan.indexOf('\n### ', i + 1);
		const body = plan.slice(i, j < 0 ? plan.length : j);
		const state = /\*\*State:\*\*\s*([A-Z][A-Z ]*)/.exec(body)?.[1]?.trim() ?? '?';
		const autonomy = /\*\*Autonomy:\*\*\s*([A-Z][A-Z ]*)/.exec(body)?.[1]?.trim() ?? '?';
		rows.push({ id, title: m[2], state, autonomy });
	}
	const count = {};
	for (const r of rows) count[r.autonomy] = (count[r.autonomy] ?? 0) + 1;
	for (const [k, v] of Object.entries(count).sort()) console.log(`  ${k.padEnd(20)} ${v}`);
	// An AUTONOMOUS item can still be held back by another item. plancheck.js owns that distinction, so
	// ask it rather than guessing, otherwise two tools give two answers and the summary is wrong again.
	let todo = '';
	try {
		todo = execFileSync(process.execPath, [path.join(__dirname, 'plancheck.js'), '--todo'], {
			cwd: ROOT,
			encoding: 'utf8',
			stdio: 'pipe',
		});
	} catch {
		todo = '';
	}
	const startable = [...todo.matchAll(/^([0-9][a-z])\s/gm)].map((m) => m[1]);
	const held = /held back by item order: (.+)/.exec(todo)?.[1] ?? '';
	console.log(`  startable now: ${startable.join(', ') || 'none'}`);
	if (held) console.log(`  held back by order: ${held}`);
}

console.log(`
report these five things, in this order:
  1. what was asked, in the user's words
  2. what was done, by file or commit
  3. what was claimed, and which check disproved or confirmed each claim
  4. what is still outstanding, by plan item id
  5. what this made stale or false elsewhere`);
