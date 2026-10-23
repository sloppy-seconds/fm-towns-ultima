#!/usr/bin/env node
// tools/planmigrate.js - report plan docs that do not match the item format.
//
// WHY. plan.md, open-questions.md and overnight.md were written at different times in different shapes.
// Converting them by hand risks the failure this project keeps repeating: a partial edit that leaves the
// file half in one format and half in another, with nothing to detect it.
//
// This tool does not rewrite anything. It reports what each document has and what is missing, so the
// conversion is a checklist rather than a guess. Rewriting prose is a judgement call and belongs to a
// human or an agent reading the output, not to a regex.
//
// Usage:
//   node tools/planmigrate.js             all planning docs
//   node tools/planmigrate.js <file.md>   one file
//
// Exits non-zero if any planning doc is unconverted, so it can gate a commit during migration only.
// Once migration is done, remove it from the pre-commit checks and delete this tool.

'use strict';

const fs = require('fs');
const path = require('path');

const DOCS = path.join(__dirname, '..', 'docs');
const PLANNING = ['plan.md', 'open-questions.md', 'overnight.md'];

const STATES = ['OPEN', 'DONE', 'CUT', 'NEEDS A DECISION'];
const AUTONOMY = [
	'AUTONOMOUS',
	'PARTLY AUTONOMOUS',
	'NEEDS A DECISION',
	'BLOCKED ON HUMAN',
	'BLOCKED ON INPUT',
];

// An item is a heading that names a unit of work. H3 is the convention in plan.md. The other two
// documents use H2 and a numbered list respectively, which is exactly what this tool is for.
function findItems(text) {
	const items = [];
	const lines = text.split('\n');
	// Which sections are rules rather than work. A numbered list under one of these is not an item.
	let inRules = false;
	for (let i = 0; i < lines.length; i++) {
		if (/^##\s/.test(lines[i])) {
			inRules = /rules for |how to |what this process|method rules/i.test(lines[i]);
		}
		const h = /^###\s+([0-9][a-z])\.\s*(.+)$/.exec(lines[i]);
		const h2 = /^##\s+Item\s+([0-9]+):\s*(.+)$/.exec(lines[i]);
		// The item format also allows "## 3. Title", which is how open-questions.md is written.
		const h2num = /^##\s+([0-9]+)\.\s*(.+)$/.exec(lines[i]);
		// A numbered list is only an item if it sits under a heading and is not a rules list.
		// overnight.md opens with "1. Commit and push..." which is a constraint, not work.
		const num = inRules ? null : /^([0-9]+)\.\s*\*\*(.+?)\*\*/.exec(lines[i]);
		const m = h || h2 || h2num || num;
		if (!m) continue;
		const id = h ? m[1] : h2 ? 'I' + m[1] : m[1];
		const title = m[2];
		// Body runs to the next heading of the same or higher level.
		let end = i + 1;
		while (end < lines.length) {
			if (/^#{2,3}\s/.test(lines[end])) break;
			if (num && /^[0-9]+\.\s*\*\*/.test(lines[end])) break;
			end++;
		}
		items.push({ id, title: title.slice(0, 46), body: lines.slice(i, end).join('\n') });
		i = end - 1;
	}
	return items;
}

function inspect(file) {
	const full = path.join(DOCS, file);
	if (!fs.existsSync(full)) return null;
	const text = fs.readFileSync(full, 'utf8');
	const items = findItems(text);

	const rows = items.map((it) => {
		const state =
			/\*\*State:\*\*\s*([A-Z][A-Z ]*)/.exec(it.body)?.[1]?.trim() ??
			(/\*\*(DONE|CUT)/.test(it.body) ? RegExp.$1 : null);
		const autonomy = /\*\*Autonomy:\*\*\s*([A-Z][A-Z ]*[A-Z])/.exec(it.body)?.[1]?.trim() ?? null;
		const doneWhen =
			/\|\s*done when\s*\|/i.test(it.body) ||
			/\*\*Done when\*\*/i.test(it.body) ||
			/\bSOLVED\b/i.test(it.body);
		const blockedBy = /\|\s*blocked by\s*\|/i.test(it.body);
		return {
			id: it.id,
			title: it.title,
			state,
			stateOk: state ? STATES.includes(state) : false,
			autonomy,
			autonomyOk: autonomy ? AUTONOMY.includes(autonomy) : false,
			doneWhen,
			blockedBy,
		};
	});

	return { file, items: rows };
}

function report(r) {
	const need = r.items.filter(
		(i) => !i.stateOk || !i.autonomyOk || !i.doneWhen || !i.blockedBy
	);
	console.log(`\n${r.file}  ${r.items.length} item(s), ${need.length} needing conversion`);
	if (!need.length) {
		console.log('  converted');
		return 0;
	}
	console.log('  id    state           autonomy          when  blocked  title');
	for (const i of r.items) {
		const flag = !i.stateOk || !i.autonomyOk || !i.doneWhen || !i.blockedBy ? ' ' : '*';
		console.log(
			`  ${String(i.id).padEnd(5)} ${(i.state ?? 'MISSING').padEnd(15)} ` +
				`${(i.autonomy ?? 'MISSING').padEnd(17)} ${i.doneWhen ? 'y' : 'n'}     ` +
				`${i.blockedBy ? 'y' : 'n'}       ${flag} ${i.title}`
		);
	}
	return need.length;
}

function main() {
	const arg = process.argv[2];
	const files = arg ? [arg] : PLANNING;
	let total = 0;
	for (const f of files) {
		const r = inspect(f);
		if (!r) {
			console.log(`\n${f}  not found`);
			continue;
		}
		total += report(r);
	}
	if (!total) {
		console.log('\nall planning documents are in the item format.');
		return;
	}
	console.log(
		`\n${total} item(s) need conversion. Add State, Autonomy, a done-when row and a blocked-by row.`
	);
	console.log('See docs/plan-process.md Part 3 for the vocabulary.');
	process.exit(1);
}

if (require.main === module) main();
