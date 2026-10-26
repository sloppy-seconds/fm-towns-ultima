#!/usr/bin/env node
'use strict';
// tools/routines.js - the register of every routine we have looked at, and what
// it turned out to be.
//
// WHY THIS IS A COMMITTED FILE AND NOT A SCRATCH ONE. Before this, what was known
// about a routine lived in `analysis/*.json`, which is gitignored, plus whatever
// the last conversation remembered. Three consequences, all of them real:
//
//   - the same routine was attempted twice from scratch in different sessions
//   - a routine classified `frame-decision` was re-attempted as if new
//   - the count of "matched" changed between reports because nothing owned it
//
// So the register is committed, it carries the classification, and it is checked
// by `tools/checkall.js` so it cannot drift from the image.
//
// THE CLASSIFICATIONS, and what each one means for future work:
//
//   matched          The C has been found that reproduces the bytes exactly. The
//                    source is recorded. Nothing to do.
//   register-choice  Right instruction count and shapes; the allocator put the
//                    values in the other registers. Twelve candidates were tried
//                    on 0xe140c without cracking it. Low prior, but not zero.
//   frame-decision   The logic is provably right and the prologue differs: the
//                    target is framed, the compile is frameless. Structural with
//                    this invocation. See result 10 and result 16.
//   base-fold        References an absolute address, so the displacement is a
//                    relocation and is 00000000 before linking. Structural.
//   not-c            No source form produces these instructions. Document the
//                    behaviour; do not attempt a byte match.
//   unresolved       A C routine nothing has cracked yet. These are the real
//                    queue.
//
// Every entry records how it was decided, so a later reader can check the claim
// rather than inherit it.

const fs = require('fs');
const path = require('path');

const ROOT = path.dirname(__dirname);
// In `docs/` and tracked, NOT in `analysis/`. That directory is gitignored to keep
// extracted game data out of the repository, and a register of our own findings in
// there would be silently lost. It contains no bytes from the game, only addresses
// and our conclusions, so it is safe to commit under the copyright rule.
const REGISTER = path.join(ROOT, 'docs', 'routines.json');

function load() {
	if (!fs.existsSync(REGISTER)) return { routines: [] };
	return JSON.parse(fs.readFileSync(REGISTER, 'utf8'));
}

function main() {
	const args = process.argv.slice(2);
	const reg = load();
	const rows = reg.routines || [];

	if (args.includes('--json')) {
		console.log(JSON.stringify(reg, null, 2));
		return 0;
	}

	const byClass = {};
	for (const r of rows) (byClass[r.class] = byClass[r.class] || []).push(r);

	if (args.includes('--todo')) {
		const todo = rows.filter((r) => r.class === 'unresolved');
		console.log(`${todo.length} unresolved C routines:`);
		for (const r of todo) {
			console.log(`  0x${r.addr}  ${String(r.bytes).padStart(3)}B  ${r.callers} callers`);
		}
		return 0;
	}

	console.log(`${rows.length} routines in the register\n`);
	for (const cls of Object.keys(byClass).sort()) {
		const list = byClass[cls];
		console.log(`${cls}: ${list.length}`);
		for (const r of list) {
			console.log(`  0x${r.addr}  ${String(r.bytes).padStart(3)}B  ${String(r.callers).padStart(3)} callers  ${r.what}`);
		}
		console.log();
	}
	return 0;
}

if (require.main === module) process.exit(main());

module.exports = { REGISTER, load };
