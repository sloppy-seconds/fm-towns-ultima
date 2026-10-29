#!/usr/bin/env node
'use strict';
// tools/queue.js - the decompilation queue: what has been attempted, what is parked, and what is workable now.
//
// WHY THIS EXISTS. docs/routines.json is the register of what has been *concluded*. The grind is bigger than the
// conclusions: 738 routine starts, of which 103 have a verdict, and the rest sit at `unattempted` where nothing can
// see them. Without a ledger, "did the unlock rule fire" is unanswerable and the queue cannot be worked to empty,
// because there is no empty to see.
//
// WHAT IS DERIVED AND WHAT IS STORED. The rule from item 4k: derive everything that can be derived, and store only
// what only the ledger knows. So:
//
//   derived from ENCHANT.EXP      the 738 starts (every E8 rel32 target, the same rule docs/call-graph.md counts
//                                with) and each one's caller count
//   stored in docs/queue.json    status, the cause when parked, the differing bytes under the disp32 standard, the
//                                levers tried, and what unlocked it
//
// A routine with no row in the ledger is `unattempted` by definition, so the file holds only deviations and the
// counts cannot disagree with the image.
//
// USAGE
//   node tools/queue.js                 what can be worked now, then the counts
//   node tools/queue.js --counts        the status totals and the sum check
//   node tools/queue.js --parked        every parked routine with its cause and dependencies
//   node tools/queue.js --rebuild       rewrite docs/queue.json from docs/routines.json, keeping existing rows
//   node tools/queue.js --json          the merged rows, machine readable
//
// Exit code 1 when the ledger is inconsistent: an address that is not a function start, a status outside the
// vocabulary, a parked row with no cause, or a row whose dependencies cannot be resolved.
const fs = require('fs');
const path = require('path');

const ROOT = path.resolve(__dirname, '..');
const EXP = path.join(ROOT, 'ENCHANT.EXP');
const LEDGER = path.join(ROOT, 'docs/queue.json');
const REGISTER = path.join(ROOT, 'docs/routines.json');
const SEEDS = path.join(ROOT, 'tools/runtime-seeds.txt');

// The vocabulary, fixed. `disp32` means every byte agrees except the displacement of an absolute reference or a
// call rel32, which is a recovery under the project's second standard and is counted as one.
// `excluded` is DERIVED, never stored. A call target that lands inside a run of zero bytes is an `E8` byte inside
// data pointing at padding, not a routine: seven of the 738 are that, they are named in docs/walk-comparison.md,
// and deriving them here is what stops the queue carrying a denominator the image does not support. The count and
// the correction live in docs/call-graph.md.
const STATUS = ['matched', 'disp32', 'parked', 'not-c', 'unattempted', 'excluded'];
const { zeroRuns, SEED_MIN } = require('./codelimits.js');
// A CALL TARGET IS ONLY REAL IF SOMETHING ACTUALLY CALLS IT. The `E8 rel32` rule scans every byte in the image, so a
// byte pair inside a table can point anywhere, and the address it points at then decodes as plausible code and looks
// like a routine. The test that separates them needs BOTH decoders: is the site of the call an instruction start in
// either walk. Measured on the 30 starts the recompiler never decodes (item 4o), 22 have no call site that is an
// instruction start in either walk, and the other 8 have one in ours but not theirs, so those 8 stay in the queue
// because the walks really do disagree about whether the caller is code.
//
// Using both decoders matters more than it sounds. Applying this rule with only our own walk excludes 105 targets
// instead of 22, because a call site inside a region our seeds never cover is not one of our instruction starts even
// when it is plainly code. The list is therefore derived once by tools/calltargets.js, which has both walks, and read
// from here, so the queue works on a clone that has no recompiled module.
const NON_CALL_TARGETS = new Set();
if (fs.existsSync(path.join(__dirname, 'non-call-targets.txt'))) {
	for (const line of fs.readFileSync(path.join(__dirname, 'non-call-targets.txt'), 'utf8').split('\n')) {
		const t = line.replace(/#.*/, '').trim();
		if (t && /^(0x)?[0-9a-f]+$/i.test(t)) NON_CALL_TARGETS.add(parseInt(t.replace(/^0x/i, ''), 16));
	}
}
const ZERO_RUNS = zeroRuns(fs.readFileSync(EXP).subarray(0x200), SEED_MIN);
const inZeroRun = (a) => ZERO_RUNS.some(([lo, hi]) => a >= lo && a < hi);

const hx = (n) => n.toString(16);

// The queue's universe: every call target, plus the starts measured off the machine and written down in
// tools/runtime-seeds.txt. Same `E8 rel32` rule as docs/call-graph.md and tools/callgraph.js, re-derived rather
// than copied, because a count written in two places drifts.
//
// WHY THE SEED FILE IS INCLUDED. A routine reached through a pointer taken at run time has no call site, so the
// byte rule cannot see it and the queue would never offer it as work. 44 such starts came out of the comparison
// with the recompiler (docs/walk-comparison.md), seeding this project's walk with them lifts it from 39,190 to
// 39,826 instructions, and they are in the same file the recompiler already reads. They carry 0 callers, which is
// what distinguishes them from a call target in the rows below.
function starts() {
	const img = fs.readFileSync(EXP).subarray(0x200);
	const callers = new Map();
	for (let a = 0; a + 5 <= img.length; a++) {
		if (img[a] !== 0xe8) continue;
		const rel = img.readInt32LE(a + 1);
		const t = a + 5 + rel;
		if (t < 0 || t >= img.length) continue;
		callers.set(t, (callers.get(t) || 0) + 1);
	}
	// The seed file is in the guest frame, which is the frame this map uses.
	if (fs.existsSync(SEEDS)) {
		for (const line of fs.readFileSync(SEEDS, 'utf8').split('\n')) {
			const t = line.replace(/#.*/, '').trim();
			if (!t || !/^(0x)?[0-9a-f]+$/i.test(t)) continue;
			const at = parseInt(t.replace(/^0x/i, ''), 16);
			if (at >= img.length) continue;
			if (!callers.has(at)) callers.set(at, 0);
		}
	}
	return callers;
}

function readJson(p, fallback) {
	try {
		return JSON.parse(fs.readFileSync(p, 'utf8'));
	} catch (e) {
		return fallback;
	}
}

const ledger = readJson(LEDGER, { rows: {} });
const register = readJson(REGISTER, { routines: [], globals_ref: [] });

// The register's class doubles as a verdict: `matched` is a recovery, `not-c` is structural, and the rest are causes
// that parked the routine. Mapping is explicit so a new class in the register fails loudly instead of being ignored.
const FROM_REGISTER = {
	matched: { status: 'matched' },
	'not-c': { status: 'not-c' },
	'base-fold': { status: 'parked', cause: 'base-fold' },
	'register-choice': { status: 'parked', cause: 'register-choice' },
	unresolved: { status: 'parked', cause: 'unresolved' },
};

const START_MAP = starts();
const byAddr = new Map();
// THE REGISTER IS IN THE FILE FRAME, NOT THE GUEST FRAME. Measured when this was written: of its 103 rows, 1 matches a
// guest-frame start as written, 3 match at guest-0x20, and **102 match at guest-0x200**. So docs/routines.json stores
// file offsets while ENCHANT.EXP's image, the recompiled module and the running machine all use guest addresses, which
// is one more frame in a codebase already fighting three (docs/two-frames-of-reference.md, item 6a). The conversion is
// done here, once, by asking which candidate is a real start rather than by choosing the first, which is the mistake the
// first version of this made and it silently mapped every row to itself.
const FILE_TO_GUEST = 0x200;
const unresolvedRegister = [];
for (const r of register.routines) {
	const v = parseInt(String(r.addr).replace(/^0x/, ''), 16);
	const found = [v, v - 0x20, v - FILE_TO_GUEST].find((c) => c >= 0 && START_MAP.has(c));
	if (found === undefined) {
		unresolvedRegister.push(String(r.addr));
		continue;
	}
	byAddr.set(hx(found), { ...r, addr_guest: hx(found), addr_file: String(r.addr) });
}

function merged() {
	const s = START_MAP;
	const rows = [];
	for (const [addr, callers] of [...s.entries()].sort((a, b) => a[0] - b[0])) {
		const key = hx(addr);
		const stored = ledger.rows[key] || {};
		const reg = byAddr.get(key);
		// A verdict on an address that sits in zero fill would be a claim about bytes that are not code, which the
		// ledger must not be able to make quietly. It is reported as INVALID rather than overridden.
		if (inZeroRun(addr)) {
			if (stored.status && stored.status !== 'unattempted' && stored.status !== 'excluded') {
				rows.push({ addr: key, callers, status: 'INVALID', cause: 'the ledger gives this address a status, but it lies inside a run of zero bytes' });
			} else {
				rows.push({ addr: key, callers, status: 'excluded', cause: 'call target inside a run of zero bytes, so not a routine' });
			}
			continue;
		}
		// The second derived exclusion: a call target nothing actually calls, because every `E8` pointing at it sits in
		// data. See instructionStarts() above for the measurement that established this rule.
		if (callers > 0 && NON_CALL_TARGETS.has(addr)) {
			if (stored.status && stored.status !== 'unattempted' && stored.status !== 'excluded') {
				rows.push({ addr: key, callers, status: 'INVALID', cause: 'the ledger gives this address a status, but no call site pointing at it is an instruction' });
			} else {
				rows.push({ addr: key, callers, status: 'excluded', cause: 'every E8 pointing here is in data, so not a routine' });
			}
			continue;
		}
		let status = stored.status, cause = stored.cause;
		if (!status && reg) {
			const m = FROM_REGISTER[reg.class];
			if (!m) {
				rows.push({ addr: key, callers, status: 'INVALID', cause: 'unknown register class ' + reg.class });
				continue;
			}
			status = m.status;
			cause = m.cause;
		}
		rows.push({
			addr: key,
			callers,
			status: status || 'unattempted',
			...(callers === 0 ? { via: 'runtime-seeds.txt' } : {}),
			...(cause ? { cause } : {}),
			...(stored.diff ? { diff: stored.diff } : {}),
			...(stored.levers ? { levers: stored.levers } : {}),
			...(stored.needs ? { needs: stored.needs } : {}),
			...(stored.unlocked_by ? { unlocked_by: stored.unlocked_by } : {}),
			...(reg && reg.what ? { what: reg.what } : {}),
		});
	}
	return rows;
}

// A dependency is satisfied when it is a global the register has typed, or a routine the queue has recovered.
function satisfied(dep, rows) {
	const d = String(dep).replace(/^0x/, '').toLowerCase();
	const globals = new Set((register.globals_ref || []).map((g) => String(g.addr || g).replace(/^0x/, '').toLowerCase()));
	if (globals.has(d)) return 'typed global';
	const row = rows.find((r) => r.addr === d);
	if (row && (row.status === 'matched' || row.status === 'disp32')) return 'recovered callee';
	return null;
}

function main(argv) {
	const rows = merged();
	const counts = {};
	for (const r of rows) counts[r.status] = (counts[r.status] || 0) + 1;

	const problems = [];
	const total = rows.length;
	const bad = rows.filter((r) => !STATUS.includes(r.status));
	if (bad.length) problems.push(`${bad.length} rows have a status outside the vocabulary: ${bad.slice(0, 4).map((r) => r.addr + '=' + r.status).join(', ')}`);
	const noCause = rows.filter((r) => r.status === 'parked' && !r.cause);
	if (noCause.length) problems.push(`${noCause.length} parked rows have no cause`);
	// A register row that is not a call target is a COVERAGE gap for 4j, not a broken ledger: the queue is built from
	// `E8 rel32` targets and a routine reached only through a jump table or a stored pointer is invisible to that rule.
	// It is reported on its own line so it cannot be quietly forgotten, and it deliberately does not fail the check,
	// because failing would push the next person to delete the row instead of to widen the rule.
	if (unresolvedRegister.length)
		console.log(`NOTE  ${unresolvedRegister.length} register row(s) are not E8 call targets, so they are outside the queue: ${unresolvedRegister.join(', ')}`);

	if (argv.includes('--json')) {
		console.log(JSON.stringify(rows, null, 1));
		return problems.length ? 1 : 0;
	}

	const parked = rows.filter((r) => r.status === 'parked');
	if (argv.includes('--parked') || (!argv.includes('--counts') && !argv.includes('--rebuild'))) {
		const workable = [];
		const blocked = [];
		for (const r of parked) {
			const deps = (r.needs || []).map((d) => ({ d, why: satisfied(d, rows) }));
			const locked = deps.filter((x) => !x.why);
			(r.needs && r.needs.length && locked.length ? blocked : workable).push({ r, deps });
		}
		console.log(`workable now: ${workable.length} parked routines with nothing unmet`);
		for (const { r, deps } of workable.slice(0, 20))
			console.log(`  ${r.addr.padEnd(8)} ${String(r.callers).padStart(3)} callers  ${r.cause}${deps.length ? '  (' + deps.map((x) => x.d + ': ' + x.why).join(', ') + ')' : ''}`);
		if (workable.length > 20) console.log(`  ... and ${workable.length - 20} more`);
		console.log(`blocked: ${blocked.length} parked routines waiting on something`);
		for (const { r, deps } of blocked.slice(0, 10))
			console.log(`  ${r.addr.padEnd(8)} ${r.cause}  needs ${deps.filter((x) => !x.why).map((x) => x.d).join(', ')}`);
	}

	if (argv.includes('--counts') || (!argv.includes('--parked') && !argv.includes('--rebuild'))) {
		const excluded = counts.excluded || 0;
		const routines = total - excluded;
		const fromSeeds = rows.filter((r) => r.callers === 0 && r.status !== 'excluded').length;
		const fromCalls = routines - fromSeeds;
		console.log(`\nstatuses (${routines} routines: ${fromCalls} from call targets, ${fromSeeds} from the seed file, ${excluded} excluded):`);
		for (const s of STATUS) console.log(`  ${s.padEnd(12)} ${String(counts[s] || 0).padStart(4)}`);
		const recovered = (counts.matched || 0) + (counts.disp32 || 0);
		console.log(`  recovered     ${String(recovered).padStart(4)}  (matched + disp32)`);
		const summed = STATUS.filter((s) => s !== 'excluded').reduce((a, s) => a + (counts[s] || 0), 0);
		if (summed !== routines) console.log(`\nNOTE: the non-excluded statuses sum to ${summed}, not ${routines}`);
		if (total !== 738 + fromSeeds) console.log(`\nNOTE: ${total} starts derived, not ${738 + fromSeeds}. Either the image is not the one the count`);
		if (total !== 738 + fromSeeds) console.log(`      was taken from, or the E8 rule has changed. The count is owned by docs/call-graph.md.`);
	}

	if (problems.length) {
		console.log('');
		for (const p of problems) console.log('FAIL  ' + p);
		return 1;
	}
	if (argv.includes('--rebuild')) {
		const out = { note: 'The decompilation queue. One row per attempted routine; a routine with no row is unattempted. Derived: the address list and caller counts, from ENCHANT.EXP. Stored: status, cause, diff, levers, needs, unlocked_by.', rows: {} };
		for (const r of rows) {
			if (r.status === 'unattempted') continue;
			const row = { status: r.status };
			for (const k of ['cause', 'diff', 'levers', 'needs', 'unlocked_by']) if (r[k]) row[k] = r[k];
			out.rows[r.addr] = row;
		}
		fs.writeFileSync(LEDGER, JSON.stringify(out, null, 1) + '\n');
		console.log(`\nwrote ${path.relative(ROOT, LEDGER)} with ${Object.keys(out.rows).length} rows`);
	}
	return 0;
}

process.exit(main(process.argv.slice(2)));
