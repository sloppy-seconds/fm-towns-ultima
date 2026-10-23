#!/usr/bin/env node
// tools/plancheck.js - verify every item in docs/plan.md is workable.
//
// WHY. plan.md carries nine items and each needs three things to be actionable: a state, an autonomy
// value saying whether an agent can do it alone, and acceptance criteria. All three were added by hand,
// and hand-maintained structure rots: this project's named-routine count drifted three times in one
// session. A check is the difference between a convention and a fact.
//
// The autonomy vocabulary is closed. A new value is a change to the process, not to one item, so an
// unrecognised value fails rather than passing quietly.
//
// Usage:
//   node tools/plancheck.js            check and report
//   node tools/plancheck.js --list     print the item table
//   node tools/plancheck.js --todo     only items an agent could start now
//
// Exits non-zero if any item is incomplete, so it can gate a commit.

'use strict';

const fs = require('fs');
const path = require('path');

const PLAN = path.join(__dirname, '..', 'docs', 'plan.md');

// Closed vocabulary. Adding to this list is a deliberate act.
const STATES = ['OPEN', 'DONE', 'CUT', 'NEEDS A DECISION'];
const AUTONOMY = [
	'AUTONOMOUS',
	'NEEDS A DECISION',
	'BLOCKED ON HUMAN',
	'BLOCKED ON INPUT',
	'PARTLY AUTONOMOUS',
];

function load() {
	if (!fs.existsSync(PLAN)) {
		console.error('no docs/plan.md');
		process.exit(1);
	}
	const text = fs.readFileSync(PLAN, 'utf8');
	// Items are "### 1a. Title" level-three headings beginning with a digit.
	const chunks = text.split(/^### (?=[0-9])/m).slice(1);
	return chunks.map((c) => {
		const id = /^([0-9][a-z])\./.exec(c)?.[1] ?? '?';
		const title = /^[0-9][a-z]\.\s*(.+)$/m.exec(c)?.[1] ?? '(untitled)';
		const state = /\*\*State:\*\*\s*([A-Z][A-Z ]*)/.exec(c)?.[1]?.trim();
		const autonomy = /\*\*Autonomy:\*\*\s*([A-Z][A-Z ]*[A-Z])/.exec(c)?.[1]?.trim();
		const doneWhen = /\|\s*done when\s*\|\s*(.+?)\s*\|/i.exec(c)?.[1];
		const blockedBy = /\|\s*blocked by\s*\|\s*(.+?)\s*\|/i.exec(c)?.[1];
		// An item can be AUTONOMOUS and still not startable now if it waits on another item.
		// Detect this from the metadata rather than by reading prose: a dependency shows up as
		// either "once Phase N lands" in the State line, or a done-when/autonomy cell naming a
		// sibling item id such as "depends on 1a".
		const waitsOnItem =
			/\*\*Autonomy:\*\*[^\n]*\bonce\b/i.test(c) ||
			/\|\s*autonomy\s*\|[^\n]*\bdepends on\s+[0-9][a-z]/i.test(c) ||
			/\|\s*blocked by\s*\|[^\n]*\b[0-9][a-z]\b[^\n]*first/i.test(c);
		return { id, title, state, autonomy, doneWhen, blockedBy, waitsOnItem };
	});
}

function main() {
	const args = process.argv.slice(2);
	const items = load();

	if (args.includes('--list') || args.includes('--todo')) {
		// "Now" means autonomous AND not waiting on a sibling item. Reporting an item that
		// cannot begin without 1a as startable would repeat the error this tool exists to catch.
		const rows = args.includes('--todo')
			? items.filter((i) => /^(AUTONOMOUS|PARTLY)/.test(i.autonomy ?? '') && !i.waitsOnItem)
			: items;
		console.log('id   autonomy            state       title');
		console.log('-'.repeat(78));
		for (const i of rows) {
			console.log(
				i.id.padEnd(5) +
					(i.autonomy ?? 'MISSING').padEnd(20) +
					(i.state ?? 'MISSING').padEnd(12) +
					i.title.slice(0, 34)
			);
		}
		if (args.includes('--todo')) {
			const held = items.filter((i) => i.waitsOnItem).map((i) => i.id);
			console.log(`\n${rows.length} of ${items.length} items can be started right now without a human.`);
			if (held.length) console.log(`held back by item order: ${held.join(', ')}`);
		}
		return;
	}

	let bad = 0;
	const problems = [];

	for (const i of items) {
		const errs = [];
		if (!i.state) errs.push('no State');
		else if (!STATES.includes(i.state)) errs.push(`unknown state "${i.state}"`);

		if (!i.autonomy) errs.push('no Autonomy');
		else if (!AUTONOMY.includes(i.autonomy)) errs.push(`unknown autonomy "${i.autonomy}"`);

		// Acceptance criteria must name an artefact and allow a negative. Length is a weak proxy
		// but "understand X" never reaches this length and always reads short.
		if (!i.doneWhen) errs.push('no done-when row');
		else if (i.doneWhen.length < 20) errs.push(`done-when too vague: "${i.doneWhen}"`);

		if (!i.blockedBy) errs.push('no blocked-by row');

		// "nothing" is only legitimate when the item is autonomous.
		if (i.blockedBy && /^nothing$/i.test(i.blockedBy) && i.autonomy && !/^AUTONOMOUS/.test(i.autonomy)) {
			errs.push(`says blocked by nothing but autonomy is "${i.autonomy}"`);
		}

		if (errs.length) {
			bad++;
			problems.push(`${i.id} ${i.title.slice(0, 40)}: ${errs.join(', ')}`);
		}
	}

	console.log(`items: ${items.length}`);
	const byAuto = {};
	for (const i of items) byAuto[i.autonomy ?? 'MISSING'] = (byAuto[i.autonomy ?? 'MISSING'] || 0) + 1;
	for (const [k, v] of Object.entries(byAuto).sort()) console.log(`  ${k.padEnd(20)} ${v}`);

	if (bad) {
		console.log(`\nincomplete items: ${bad}`);
		for (const p of problems) console.log('  ' + p);
		process.exit(1);
	}
	console.log('\nevery item is workable.');
}

if (require.main === module) main();
