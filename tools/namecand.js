#!/usr/bin/env node
'use strict';
// tools/namecand.js - run fnstrings across every routine and report naming candidates.
//
// WHY. `docs/reimplementation-gap.md` measures the distance from a reimplementation as
// "738 distinct functions, 38 named, 5.1%". Routine matching does not move that number:
// ten matched leaves took it from 38 to 38. Naming does. `docs/plan.md` already said what
// remains "is mostly mechanical scaling of tools/fnstrings.js", and that scaling had never
// been done.
//
// WHAT IT REPORTS. For each of the 738 call targets, the strings it references, filtered to
// hits that decode to real text. Glyph runs (the 0xEB-prefixed encoding that `ebcorpus.js`
// handles) are counted separately, because they are genuinely not Shift-JIS and reporting
// them as text would be wrong.
//
// THE FILTER MATTERS. The first attempt at "scale fnstrings" sorted by reference COUNT, and
// that ranks routines which reference many short glyph runs above routines with readable
// prose. 0xeb354 looked like a wall of placeholders and is in fact the roster save routine,
// named by "Roster data:ULTIMA II for FM-TOWNS" and "INTELLIGENCE=%d". Counting references
// is the wrong ordering; counting DECODABLE text is the right one.
//
// Usage:
//   node tools/namecand.js                 summary
//   node tools/namecand.js --top 40        best candidates, ranked by decodable strings
//   node tools/namecand.js --json          full table

const fs = require('fs');
const path = require('path');
const { execFileSync } = require('child_process');

const ROOT = path.join(__dirname, '..');
const CORPUS = path.join(ROOT, 'docs', 'corpus.json');

function targets() {
	const corpus = JSON.parse(fs.readFileSync(CORPUS, 'utf8'));
	return corpus.map((r) => r.addr);
}

// Call fnstrings once per routine. It is fast, and reimplementing its decoder here would
// mean this tool and fnstrings could disagree about what a string is.
function stringsFor(addr) {
	let out = '';
	try {
		out = execFileSync('node', [path.join(__dirname, 'fnstrings.js'), '0x' + addr.toString(16)], {
			cwd: ROOT, encoding: 'utf8', stdio: 'pipe',
		});
	} catch {
		return { text: [], glyph: 0 };
	}
	const text = [];
	let glyph = 0;
	for (const raw of out.split('\n')) {
		const line = raw.replace(/\r$/, '');
		// fnstrings prints: `  0xeb398  push 0x2698  "<string>"`. The trailing CR must be
		// stripped first: requiring the quote to end the line against a CR-stripped copy
		// is what made the first run report 736 of 738 routines as having no strings at
		// all, when 0xeb354 plainly has dozens. A parser that silently matches nothing is
		// the failure this project keeps hitting, so the count of parsed lines is checked
		// against the ref count fnstrings itself prints.
		const m = line.match(/push 0x[0-9a-f]+\s+"(.*)"\s*$/);
		if (m) {
			if (/^\(0xEB run/.test(m[1])) glyph++;
			else text.push(m[1]);
			continue;
		}
		if (/\(0xEB run/.test(line) && !m) glyph++;
	}
	return { text, glyph };
}

function main() {
	const args = process.argv.slice(2);
	const addrs = targets();
	const rows = [];
	for (const addr of addrs) {
		const { text, glyph } = stringsFor(addr);
		if (!text.length && !glyph) continue;
		rows.push({ addr, text, glyph });
	}
	// Rank by decodable strings, not by total references.
	rows.sort((a, b) => b.text.length - a.text.length || a.addr - b.addr);

	const withText = rows.filter((r) => r.text.length > 0);
	const glyphOnly = rows.filter((r) => r.text.length === 0);

	if (args.includes('--json')) {
		console.log(JSON.stringify(rows, null, 1));
		return;
	}
	const n = args.includes('--top') ? Number(args[args.indexOf('--top') + 1] || 30) : 20;
	console.log(`${addrs.length} call targets scanned.`);
	console.log(`${withText.length} reference at least one decodable string.`);
	console.log(`${glyphOnly.length} reference only 0xEB glyph runs.`);
	console.log(`${addrs.length - rows.length} reference no strings at all.\n`);
	console.log(`top ${n} candidates by decodable string count:`);
	for (const r of withText.slice(0, n)) {
		const sample = r.text.slice(0, 3).map((t) => JSON.stringify(t)).join(', ');
		console.log(`  0x${r.addr.toString(16).padStart(6, '0')}  ${String(r.text.length).padStart(2)} strings  ${sample}`);
	}
}

main();
