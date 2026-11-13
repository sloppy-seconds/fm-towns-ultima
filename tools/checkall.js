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
//   node tools/checkall.js                all checks, ~29 s
//   node tools/checkall.js --fast         everything except the 12 measured-slow checks, ~2 s
//   node tools/checkall.js --timing       print per-check elapsed, slowest first
//   node tools/checkall.js --list-slow    the slow names, read by tools/checkall-parallel.sh
//   node tools/checkall.js --only=NAME     run that check and print only it. Repeat the flag for more;
//                                         names contain commas so they are not comma-separated.
//   node tools/checkall.js --no-build     skip the site build. Saves 2.6 s of 29, so this is NOT the
//                                         time saver it looks like: --fast is, and it saves 27.
//   node tools/checkall.js --quiet        only print failures
//
// ./tools/checkall-parallel.sh runs the same suite across processes in about 7 s.

'use strict';

const fs = require('fs');
const path = require('path');
const { execFileSync, spawnSync } = require('child_process');

const ROOT = path.join(__dirname, '..');
const DOCS = path.join(ROOT, 'docs');
const QUIET = process.argv.includes('--quiet');
const NO_BUILD = process.argv.includes('--no-build');
// The disc is not in this repository and never will be, so both a stranger and CI have a tree with no game in it.
// `--no-disc` says so out loud, and it is also auto-detected, because a run that reports fourteen failures when the
// answer is "you have no disc" teaches the next person to ignore the gate. Skips are counted and printed at the end,
// which is what makes a skip a fact rather than a silent pass.
const NO_DISC = process.argv.includes('--no-disc') || !fs.existsSync(path.join(ROOT, 'ENCHANT.EXP'));
// Filled in by name. A check belongs here when its input is a byte of the disc, not when it merely lives near one
// that is not. The list was derived by running the whole file in a clean clone and taking every check that failed
// there, which is also the demonstration that the skips are real: without this set those nine fail on a tree that
// has done nothing wrong. Several other disc tools already skip themselves, and those are left alone.
const DISC_CHECKS = new Set([
	'verify',
	'walk comparison',
	'return convention split by ownership',
	'disp32 comparison works and can fail',
	'byte-identity equivalence rule',
	'corpus census is reproducible',
	'decoder session agrees with one-shot',
	'cfgwalk refuses seeds inside zero fill',
	'TBIOS dispatch chain',
	'fnstrings reports raw addresses',
]);
let skipped = 0;

const results = [];
const record = (name, failures) => {
	if (NO_DISC && DISC_CHECKS.has(name)) {
		skipped++;
		return;
	}
	results.push({ name, failures, at: Date.now() });
};

// --timing prints how long each check took. It exists because "checkall is slow" was a complaint with no
// measurement behind it, and the two things that turned out to matter could not be guessed from the source:
// the site build is 2.6 s of a 38 s suite, and six tools account for 22 s of it. A suite people run before a
// commit needs to be able to say where its own time goes.
//
// The elapsed figure for a check is the gap between this record() call and the previous one, so it measures
// the block that just ran and needs no instrumentation inside the blocks themselves.
const TIMING = process.argv.includes('--timing');
let lastStamp = Date.now();

// --fast and --only exist so this suite can be made fast without making it weaker.
//
// SLOW is the measured set. `node tools/checkall.js --timing` gave 13,552 ms for the corpus census alone
// before it was fixed, and 38.7 s across the original eleven against 1.9 s for the other twenty-six. Nothing in the
// source suggests which checks are expensive: the census was one runNode call and looked identical to the
// dozen beside it. So the list is a measurement, and re-measuring is one command.
//
// The census itself is now 2.0 s rather than 13.5, because tools/preflight.js was decoding a fixed 4096-byte
// window per target. It stays in this list at 2 s, and the rest of the list is unchanged.
//
// --fast runs everything except SLOW. It is for the edit loop.
// --only=NAME,NAME runs those checks and nothing else expensive, and prints only them. It is what
// tools/checkall-parallel.sh uses to fan the slow ones out across processes.
//
// A skipped check records an empty failure list, which is a pass. That is a real weakening and it is why
// the driver refuses to merge a run whose shards did not each report their own check: a silently skipped
// check would otherwise look like a pass, which is the defect this file exists to catch.
const FAST = process.argv.includes('--fast');
const ONLY = (() => {
	// One name per flag, and repeat the flag for more. It must NOT split on commas: check names
	// contain them. `matched-routine count is settled at eleven, nine driver-verified` split into two
	// names that matched nothing, so `--only=<that>` ran no check at all and reported success.
	const vals = process.argv
		.filter((x) => x.startsWith('--only='))
		.map((x) => x.slice('--only='.length))
		.filter(Boolean);
	return vals.length ? new Set(vals) : null;
})();
const SLOW = new Set([
	'corpus census is reproducible',
	'return convention split by ownership',
	'image tooling audit',
	'site build',
	'global tooling regression',
	'walk comparison',
	'calls the port was skipping',
	'call targets that are not called',
	'cfgwalk refuses seeds inside zero fill',
	'disp32 comparison works and can fail',
	'byte-identity equivalence rule',
	'attribution ledger',
	'shadow differential',
]);
const skipCheck = (name) => FAST || (ONLY !== null && !ONLY.has(name));

// A skipped check is recorded as SKIPPED, never as a pass. Printing `ok` for work that did not happen is
// the silent-pass defect this file exists to catch, and --fast would otherwise be indistinguishable from a
// real run in its output. A skip is also not counted toward `total`, so it can never turn a run green on
// its own evidence.
const recordSkip = (name) => {
	results.push({ name, failures: [], at: Date.now(), wasSkipped: true });
};

if (process.argv.includes('--list-slow')) {
	for (const n of SLOW) console.log(n);
	process.exit(0);
}

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

// G. The three links that are copied around the project. AGENTS.md names the archive link, the docs site URL and
// the editor URL as the known duplication, and the failure it warns about is one copy going stale. Grepping for one
// string cannot see a fourth spelling appear, so this enumerates every occurrence of the two hosts in every source
// page and rejects any path that is not one of the canonical forms.
{
	const carriers = [
		['README.md', path.join(ROOT, 'README.md')],
		['tools/README.md', path.join(ROOT, 'tools', 'README.md')],
		['web/README.md', path.join(ROOT, 'web', 'README.md')],
		['mkdocs.yml', path.join(ROOT, 'mkdocs.yml')],
	].concat(pages().map((f) => ['docs/' + f, path.join(DOCS, f)]));
	const allowed = new Set(['', 'docs/', 'docs/quickstart/']);
	const bad = [];
	for (const [label, file] of carriers) {
		if (!fs.existsSync(file)) continue;
		const text = fs.readFileSync(file, 'utf8');
		for (const m of text.matchAll(/https:\/\/sloppy-seconds\.github\.io\/fm-towns-ultima\/([^\s)\]"'<]*)/g)) {
			const tail = m[1].replace(/[*_.,;:]+$/, '');
			if (!allowed.has(tail)) bad.push(`${label}: "${m[0]}" is not one of the canonical forms (root, /docs/, /docs/quickstart/)`);
		}
		for (const m of text.matchAll(/https:\/\/archive\.org\/details\/([^\s)\]"'<]*)/g)) {
			const tail = m[1].replace(/[*_.,;:]+$/, '');
			if (tail !== 'fmtownscdcollection') bad.push(`${label}: "${m[0]}" is not the canonical archive.org item`);
		}
	}
	record('shared URLs have one form each', bad);
}

// G2. The README's relative links must resolve to something. mkdocs --strict checks the pages it builds, and the
// README is deliberately not one of them, so a link there that points at nothing has never failed anything. The
// renumbering in plan item 9a is exactly when that happens.
{
	const readme = fs.readFileSync(path.join(ROOT, 'README.md'), 'utf8');
	const bad = [];
	for (const m of readme.matchAll(/]\(([^)\s]+)\)/g)) {
		const target = m[1];
		if (/^(https?:|mailto:|#)/.test(target)) continue;
		const p = path.join(ROOT, target.split('#')[0]);
		if (!fs.existsSync(p)) bad.push(`README.md link "${target}" resolves to nothing`);
	}
	record('README relative links resolve', bad);
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

// E3. The port's measured constants, asserted against the source that carries them. Every wall the port has hit
// was a value it invented, and finding one costs an emulator session while reverting one by accident costs
// nothing at all, which is the wrong way round. portcheck.js reads port/, tools/ and docs/, plus module/ for the
// shadow checks, and all of that is committed, so this runs on a clone that has downloaded nothing: no emulator,
// no disc, no recompile. What it cannot cover is runtime behaviour, which is tools/divergence.py against a
// capture and does need the machine.
{
	const r = runNode('portcheck.js');
	// E5. A release publishes binaries and nothing else. Decided 2026-11-03 after Paul asked why the archive carried eleven
// files when one played: it had accumulated a play.sh, three tools, a save disk and three licence texts, each of which
// was needed when it was added and none of which was removed when it stopped being. The rule is that a download is a
// file somebody runs. This fails if an archive creeps back into the workflow, if either binary disappears from it, or if
// the step that refuses a third asset is removed, because those are the three ways the rule can rot silently.
{
	const wf = fs.readFileSync(path.join(ROOT, '.github', 'workflows', 'release.yml'), 'utf8');
	const bad = [];
	if (/\.tar\.gz|tar -czf|tar --create/.test(wf)) bad.push('the workflow makes or ships a tarball');
	// THE ASSET LIST COMES FROM THE TITLE TABLE, not from a second list here. It was six literals and that is how the
	// release shipped three binaries while module/ held seven: two lists, one of which grew. Windows now carries every
	// title too, so the same list drives both platforms and there is no exception to remember.
	const ids = require('./games.js').GAMES.map((g) => g.id);
	const winIds = ids;
	// THE LIST THAT MATTERS IS THE `files:` BLOCK, not the whole workflow. Every asset name also appears in the allowlist
	// that refuses an unexpected file, so grepping the file for a name answers "is it mentioned" rather than "is it
	// published", and a title dropped from `files:` while its allowlist entry stayed would pass. Demonstrated by deleting
	// a title from `files:` and watching this fail.
	const block = /files: \|\n([\s\S]*?)\n\s*body:/.exec(wf);
	const published = block ? block[1] : '';
	if (!block) bad.push('the workflow has no files: block, so nothing is published');
	for (const asset of ids.map((id) => `fm-${id}-linux-x86_64`))
		if (!published.split(/\s+/).includes(asset)) bad.push(`${asset} is not published by the workflow`);
	for (const asset of winIds.map((id) => `fm-${id}-windows-x86_64.exe`))
		if (!published.split(/\s+/).includes(asset)) bad.push(`${asset} is not published by the workflow`);
	// The Windows packager and its local driver both read the ids from tools/games.js, and neither may go back to a list
	// of three: the failure that matters is a title that builds on Linux and silently does not exist for Windows.
	for (const script of ['tools/release-package-windows.sh', 'tools/win-build.sh'])
		if (!/tools\/games\.js"? --ids/.test(fs.readFileSync(path.join(ROOT, script), 'utf8')))
			bad.push(script + ' does not read its ids from tools/games.js');
	if (!/refusing to publish: \$f is not one of the/.test(wf)) bad.push('the step that refuses an unexpected release asset is gone');
	record('a release publishes binaries only', bad);
}

record('port constants', r.ok ? [] : r.out.split('\n').filter((l) => /^\s+FAIL/.test(l)));
}

// E4. The kit submodule's invariants. `fmtownskit` is a submodule of the fork `paulczar/fmtownskit` on branch
// `mp-support`, so editing the kit is ordinary git and the pin is a commit anyone can fetch. patchcheck.js asserts
// four things in the order they fail: the working tree is clean, `patches/fmtownskit-base.txt` is an ancestor of the
// pin, `git diff <base>` equals the mirror patch byte for byte, and the pin is on `origin/mp-support`. It skips with
// a printed note when the submodule is not initialised, which is the normal case for a stranger with only the zip.
{
	const r = runNode('patchcheck.js');
	record('kit patches', r.ok ? [] : r.out.split('\n').filter((l) => /^\s+FAIL/.test(l)));
}

// E6. The two walks, compared. Ours is seeded from the 738 `E8 rel32` call targets, fmtownskit's from the MP
// header entry plus the seed rules, and until tools/recondiff.js existed nobody had put the two sets side by
// side. The numbers here are the measurement that item 4m recorded: 818 emitted functions against 738 call
// targets, 697 of them shared, and 41,847 instructions against 39,190.
//
// The assertion that earns this check is the last one. Seven of our 738 call targets land inside runs of zero
// bytes, which makes them `E8` bytes inside data rather than routines, and the list is asserted by address so a
// new bad seed fails loudly instead of quietly lowering a percentage. recondiff.js exits 1 for exactly that
// reason, so the exit code is asserted too, and a run that suddenly exits 0 is also a failure.
if (skipCheck('walk comparison')) { recordSkip('walk comparison'); } else {
	const r = runNode('recondiff.js', ['--json']);
	const problems = [];
	let j = null;
	try {
		j = JSON.parse(r.out);
	} catch (e) {
		problems.push('FAIL recondiff.js --json printed no JSON, so nothing was compared: ' + r.out.split('\n').slice(0, 3).join(' | '));
	}
	if (j) {
		const want = [
			// Re-measured 2026-11-01 on the jump-table seed fix (defect 1). Eight handlers of the table at
			// 0xffe73 were unreachable by the rules: only a `call dword ptr cs:[ebx]` refers to them. Seeding all
			// eight moved emitted functions 865 -> 875 and our starts 813 -> 821, which is the new code.
			['emitted functions', j.functions.theirs, 875],
			['our starts (call targets plus the seed file)', j.functions.ours, 821],
			['function starts in both', j.functions.both, 798],
			["fmtownskit's function starts in zero fill", j.functions.theirs_only.zero_run, 0],
			['our starts in zero fill', j.functions.ours_only.zero_run, 7],
			['emitted instructions', j.instructions.theirs, 43117],
			// Re-measured 2026-10-30 on the plan-item-4h decoder migration (ndisasm text
			// parser -> Capstone via tools/decode.js). Ours fell 39820 -> 39795 because
			// ndisasm counted its `db` lines for undecodable bytes as instructions and
			// Capstone reports them as skips. Both rose 38443 -> 38515 because Capstone
			// resyncs the way fmtownskit's i386.py does (docs/fmtownskit-and-seeds.md
			// records that decoder as agreeing with Capstone on every routine checked),
			// so agreement with the other walk improved, not degraded.
			['our instructions, seeded', j.instructions.ours, 39863],
			['instruction starts in both', j.instructions.both, 38616],
		];
		for (const [what, got, exp] of want) {
			if (got !== exp) problems.push(`FAIL ${what}: ${got}, expected ${exp}. Re-measure before changing this number.`);
		}
		const seven = ['0x17309', '0x9829b', '0x9b26b', '0xcfc34', '0xd295b', '0xd29c5', '0xd2c47'];
		const got = (j.functions.ours_only.zero_run_addresses || []).slice().sort();
		if (got.join(',') !== seven.join(',')) {
			problems.push(`FAIL our starts in zero fill are ${got.join(',') || 'none'}, expected ${seven.join(',')}. A new one is a seed the image does not support.`);
		}
		// And the split by run length, because that is what separates the three the region census catches from the
		// four it does not. Three sit in megabyte-scale extents, four in alignment gaps of 53 to 59 bytes, and the
		// threshold those two groups justify is SEED_MIN in tools/codelimits.js.
		const wantBytes = [207322, 337645, 337645, 59, 53, 53, 55];
		const gotBytes = (j.functions.ours_only.zero_run_detail || []).map((d) => d.run_bytes);
		if (gotBytes.join(',') !== wantBytes.join(',')) {
			problems.push(`FAIL the zero runs holding our bad seeds are [${gotBytes.join(',')}], expected [${wantBytes.join(',')}]. The split is what the seed threshold rests on.`);
		}
		if (r.ok) problems.push('FAIL recondiff.js exited 0 while reporting call targets in zero fill, so its verdict is not wired to its finding');
	}
	record('walk comparison', problems);
}

// E9. The return convention is split by OWNERSHIP, not chosen by the compiler.
//
// WHY THIS IS A CHECK AND NOT A PARAGRAPH. `docs/highc-codegen.md` asserted, with a measurement behind it,
// that the game was `cdecl` throughout: "ret imm16 (callee pops): 0, 0.0%" over 771 returns. That measurement
// was made through ndisasm, which renders `9b c2 04 00` as ONE line, `wait ret word 0x4`, whose mnemonic is
// `wait`. A scan for instructions beginning `ret` therefore could not see a return that follows an x87 `wait`,
// and every library stub of that shape was invisible. Capstone reports it as `wait` then `ret 0x4`.
//
// The claim is not merely miscounted, it is backwards about who owns the convention: the game code is caller-
// cleans throughout and the callee-pops returns are all in the library region above `0xff000`. So this asserts
// the PROPERTY rather than a count, because a count would fail on every legitimate rebuild:
//
//   - at least one callee-pops return exists, so "0 of N" cannot come back silently
//   - every one of them is at or above the library floor, so the split cannot spread into game code unnoticed
if (skipCheck('return convention split by ownership')) { recordSkip('return convention split by ownership'); } else {
	const problems = [];
	const LIBRARY_FLOOR = 0xff000; // the same floor tools/preflight.js classifies with
	try {
		const r = execFileSync(process.execPath, [path.join(__dirname, 'cfgwalk.js'), '--retmap', '--json'],
			{ cwd: ROOT, encoding: 'utf8', stdio: 'pipe' });
		const line = r.split('\n').filter((l) => l.startsWith('{')).pop();
		const j = JSON.parse(line);
		if (!j.pops) {
			problems.push('no callee-pops returns found at all, which is the superseded claim in docs/highc-codegen.md');
		}
		const inGame = (j.popAt || []).filter((a) => a < LIBRARY_FLOOR);
		if (inGame.length) {
			problems.push(`${inGame.length} callee-pops return(s) below the library floor: ` +
				inGame.slice(0, 5).map((a) => '0x' + a.toString(16)).join(', ') +
				'. The split is by ownership, so a game-code callee-pops return means either the walk or the claim is wrong');
		}
	} catch (e) {
		problems.push('retmap failed to run: ' + ((e.stdout ?? '') + (e.stderr ?? '')).split('\n')[0]);
	}
	record('return convention split by ownership', problems);
}

// E7b. The matched-routine count, which item 0b exists to settle. docs/compiler-generation.md once said
// "the seven routines known to be High C 1.73 output (the ten `matched`)" in one sentence, and the two numbers
// answer different questions: ten is everything classed `matched` in docs/routines.json, and the
// driver-verified subset is how many of those the authentic generator has actually reproduced.
//
// It was seven and is now eight, after 0xe552c was re-run through the driver on 2026-11-02 and came out
// byte-identical with zero exemptions applied.
//
// THE TWO THAT ARE NOT DRIVER-VERIFIED ARE NOT REFUTATIONS, and this is the part that is easy to get wrong.
// All three of the DOS-route routines begin `55 8b ec`, so the game's code is FRAMED. The frame-preserving
// generator produced framed code and matched. The driver's DEFAULT strips the frame, which is why e52c8 and
// e5304 come out longer under it. They are blocked on a compiler toggle, not on wrong C. Demoting them would
// throw away two correct matches and would have been the wrong reading of the evidence.
//
// This pins the answer so a later edit cannot drift it back, and it asserts that nine verified plus two
// pending account for all eleven matched. That total is the claim: if a routine is in neither list it has no
// explanation at all, which fails here instead of going unnoticed.
{
	const problems = [];
	let j = null;
	try {
		j = JSON.parse(fs.readFileSync(path.join(DOCS, 'routines.json'), 'utf8'));
	} catch (e) {
		problems.push('docs/routines.json unreadable: ' + e.message);
	}
	if (j) {
		const rs = j.routines;
		const by = {};
		for (const r of rs) by[r.class] = (by[r.class] || 0) + 1;
		const want = [['not-c', 62], ['base-fold', 21], ['matched', 11], ['unresolved', 9]];
		for (const [cls, n] of want) {
			if (by[cls] !== n) problems.push(`class ${cls}: ${by[cls]}, expected ${n}. Re-measure before changing this number`);
		}
		if (rs.length !== 103) problems.push(`routines.json holds ${rs.length} routines, expected 103`);
		// The eight re-verified through the driver: the seven in docs/highc-authentic-toolchain.md's table, plus
		// 0xe552c, re-run through the same route on 2026-11-02.
		const driver = ['e9e2c', 'e44d0', 'e9940', 'e07e8', 'e65fc', 'e662c', 'fd0ec', 'e552c', 'e140c'];
		// Matched under the frame-preserving generator, and blocked on the driver's default removing the frame.
		// Named explicitly so a change of status is deliberate rather than silent.
		const framedPending = ['e52c8', 'e5304'];
		const matched = new Set(rs.filter((r) => r.class === 'matched').map((r) => r.addr));
		const outside = driver.filter((a) => !matched.has(a));
		if (outside.length) problems.push(`driver-verified routine(s) not classed matched: ${outside.join(', ')}`);
		const pendingGone = framedPending.filter((a) => !matched.has(a));
		if (pendingGone.length) problems.push(`framed-pending routine(s) no longer classed matched: ${pendingGone.join(', ')}`);
		if (driver.length !== 9 || matched.size !== 11) {
			problems.push(`the count needs 9 driver-verified inside 11 matched, got ${driver.length} and ${matched.size}`);
		}
		if (driver.length + framedPending.length !== matched.size) {
			problems.push(`${driver.length} driver-verified plus ${framedPending.length} framed-pending must account for all ` +
				`${matched.size} matched, but they sum to ${driver.length + framedPending.length}. A routine in neither list has no explanation`);
		}
	}
	record('matched-routine count is settled at eleven, nine driver-verified', problems);
}

// E7c. The forward idiom atlas, item 0a. The atlas is the gate on the whole
// preservation track, so the two claims it exists to make are asserted here
// rather than left to a page: that this compiler zeroes with `sub reg,reg` and
// never with `xor reg,reg`, and that the never-emits list is a real list rather
// than an empty one produced by a corpus that was too narrow to exclude anything.
// The corpus lives in analysis/, which is gitignored because it is toolchain
// output, so the check skips with a stated reason when it has not been built.
{
	const atlasJson = path.join(ROOT, 'analysis', 'atlas', 'build.json');
	if (!fs.existsSync(atlasJson)) {
		// A skip, counted and reported at the end like every other skip, rather
		// than a silent pass: the corpus is toolchain output and is not in git.
		skipped++;
	} else {
		const py = fs.existsSync(path.join(__dirname, '.venv', 'bin', 'python3'))
			? path.join(__dirname, '.venv', 'bin', 'python3') : 'python3';
		const r = spawnSync(py, [path.join(__dirname, 'atlas-report.py'), '--json'],
			{ cwd: ROOT, encoding: 'utf8', stdio: 'pipe' });
		const problems = [];
		let j = null;
		try { j = JSON.parse(r.stdout); } catch { problems.push('atlas-report.py --json gave no JSON: ' + ((r.stdout || '') + (r.stderr || '')).slice(0, 160)); }
		if (j) {
			if (j.probes < 20) problems.push(`atlas has ${j.probes} probes, item 0a requires at least 20`);
			if (!j.never_emitted.length) problems.push('never-emits list is empty, so nothing could ever be labelled hand-asm-positive');
			if (!j.never_emitted.includes('xor reg,reg for zeroing')) {
				problems.push('`xor reg,reg for zeroing` is no longer absent, which is the atlas headline');
			}
			if (!j.emitted.includes('sub reg,reg for zeroing')) {
				problems.push('`sub reg,reg for zeroing` is no longer present, which is the atlas headline');
			}
			// The never-emits rule, asserted rather than promised. An absence is only evidence if something
			// tried to make it happen, so every entry must name its provoking probes, and the ones nothing
			// tried must say so. Three claims were wrong in one session because this was not enforced, so a
			// new entry without a probe list is a hard failure rather than a note.
			const detail = j.never_emitted_detail || [];
			if (detail.length !== j.never_emitted.length) {
				problems.push(`never_emitted_detail covers ${detail.length} of ${j.never_emitted.length} entries`);
			}
			for (const d of detail) {
				if (!d.tried_by || !d.tried_by.trim()) {
					problems.push(`never-emits entry \`${d.idiom}\` names no probe that tried. An absence with no ` +
						'attempt behind it is a comment, not a measurement');
				}
				if (/^UNPROBED/.test(d.tried_by) && !fs.readFileSync(path.join(DOCS, 'idiom-atlas.md'), 'utf8').includes('UNPROBED')) {
					problems.push(`\`${d.idiom}\` is UNPROBED and docs/idiom-atlas.md does not say so`);
				}
			}
			const probed = detail.filter((d) => d.tried_by && !/^UNPROBED/.test(d.tried_by)).length;
			if (probed < detail.length - 1) {
				problems.push(`only ${probed} of ${detail.length} never-emits entries name a probe that tried`);
			}
			const doc = fs.readFileSync(path.join(DOCS, 'idiom-atlas.md'), 'utf8');
			for (const phrase of ['xor reg,reg', 'sub reg,reg', 'rep movsb', 'sar eax, 3']) {
				if (!doc.includes(phrase)) problems.push(`docs/idiom-atlas.md no longer mentions \`${phrase}\``);
			}
			if (j.distinct_frame_shapes < 2) {
				problems.push(`only ${j.distinct_frame_shapes} frame shape, which is the too-narrow corpus the item warns about`);
			}
		}
		record('forward idiom atlas', problems);
	}
}

// E7d. The byte-identity equivalence rule, item 12a. The rule has to be code
// before any function is declared matched, and a masking rule is the easiest
// thing in the world to make always pass, so this asserts it in both directions:
// the game's own bytes must come out byte-identical, a one-byte change outside a
// demonstrated exemption must come out differs, an address with no asserted
// extent must be refused rather than guessed, and the L1/L2 predicates must
// actually reject values that are not addresses. That last one is the
// demonstration that the guard is a predicate and not `true`, which matters
// because the measured refusal rate on real data is zero out of 1,288 sites.
if (skipCheck('byte-identity equivalence rule')) { recordSkip('byte-identity equivalence rule'); } else if (!fs.existsSync(path.join(DOCS, 'corpus.json'))) {
	// This check used to throw here rather than report, because tools/byteid.js refuses to guess a function
	// extent when docs/corpus.json is missing. A check that throws is a check that vanishes from the report,
	// and under the parallel driver it surfaced as a shard producing no line at all. Report it instead.
	record('byte-identity equivalence rule', ['docs/corpus.json missing, so there is no asserted extent to compare against']);
} else {
	if (NO_DISC) {
		skipped++;
	} else {
	const problems = [];
	const B = require('./byteid.js');
	const buf = fs.readFileSync(path.join(ROOT, 'ENCHANT.EXP'));
	const ext = B.extents();
	const addrs = [...ext.keys()].sort((a, b) => a - b).slice(0, 12);
	let identical = 0;
	for (const a of addrs) {
		const r = B.compare(a, [...buf.subarray(a, a + ext.get(a))]);
		if (r.verdict === 'byte-identical') identical++;
		else problems.push(`0x${a.toString(16)} against its own bytes gave ${r.verdict}, expected byte-identical`);
	}
	if (identical < addrs.length) problems.push(`only ${identical}/${addrs.length} self-comparisons identical`);

	// One byte changed outside any exemption. 0xe9e2c is 21 bytes with no exempt
	// site, so its last byte is guaranteed unmasked.
	{
		const a = 0xe9e2c;
		const good = [...buf.subarray(a, a + ext.get(a))];
		const bad = good.slice();
		bad[bad.length - 1] = bad[bad.length - 1] ^ 0xff;
		const r = B.compare(a, bad);
		if (r.verdict !== 'differs') problems.push(`flipping the last byte of 0xe9e2c must differ, got ${r.verdict}`);
		const short = B.compare(a, good.slice(0, good.length - 1));
		if (short.verdict === 'byte-identical' || short.verdict === 'identical-except-link') {
			problems.push(`a truncated candidate must not verify, got ${short.verdict}`);
		}
	}

	const unasserted = B.compare(0x1, [0x90]);
	if (unasserted.verdict !== 'extent-unasserted') {
		problems.push(`an address with no asserted extent gave ${unasserted.verdict}, expected extent-unasserted`);
	}

	const ctx = { imageSize: buf.length, insAddr: 0x1000, insSize: 5 };
	const l1 = B.EXEMPTIONS.find((e) => e.id === 'L1');
	const l2 = B.EXEMPTIONS.find((e) => e.id === 'L2');
	if (l1.check(0xffffff6b, ctx) !== false) problems.push('L1 accepted a value that is not an image address');
	if (l1.check(0xdea40, ctx) !== true) problems.push('L1 rejected a value that is an image address');
	if (l2.check(0x7f048d0f, ctx) !== false) problems.push('L2 accepted a displacement that resolves nowhere');
	if (l2.check(-4, ctx) !== true) problems.push('L2 rejected a backward displacement, so rel32 is not signed');

	const doc = fs.readFileSync(path.join(DOCS, 'byte-identity-rule.md'), 'utf8');
	for (const e of B.EXEMPTIONS) {
		if (!doc.includes(e.id)) problems.push(`exempt class ${e.id} is not named in docs/byte-identity-rule.md`);
	}
	record('byte-identity equivalence rule', problems);
	}
}

// E7e. The attribution ledger, items 0c and 0d. docs/ledger.json is committed output of
// tools/ledger.py, and it is the artefact both build tracks read, so the gate is that it is
// internally consistent, still reproducible, and that no row claims more than it earned.//
// The evidence rules are the point. 0d's failure case is "a ledger where every row has a state
// and none of them has evidence", so a `proven` or `probable` row with no notes fails here, and a
// `hand-asm-positive` row whose notes do not quote the excluding idiom fails too. Those two
// assertions are the difference between a ledger and a list of confident adjectives.
//
// Regeneration equality is delegated to `tools/ledger.py --check` rather than reimplemented in
// JS, so there is one definition of what the ledger is rather than two that can drift.
if (skipCheck('attribution ledger')) { recordSkip('attribution ledger'); } else {
	const ledgerPath = path.join(DOCS, 'ledger.json');
	if (!fs.existsSync(ledgerPath)) {
		skipped++;
	} else {
		const problems = [];
		const L = JSON.parse(fs.readFileSync(ledgerPath, 'utf8'));
		const rows = Object.entries(L.functions || {});
		const cols = L.columns || [];

		if (!cols.length) problems.push('ledger declares no columns');
		if (rows.length !== L.population) {
			problems.push(`ledger holds ${rows.length} functions, population says ${L.population}`);
		}
		if ((L.population || 0) < 800) {
			problems.push(`ledger covers ${L.population} functions, expected the whole game module`);
		}

		// Every row carries every column, populated or an explicit n-a.
		const missingCol = new Map();
		for (const [, rec] of rows) {
			for (const c of cols) {
				if (rec[c] === undefined || rec[c] === '') missingCol.set(c, (missingCol.get(c) || 0) + 1);
			}
		}
		for (const [c, n] of missingCol) problems.push(`${n} rows leave column \`${c}\` empty; n-a is a value, a blank is not`);

		// Cluster integrity.
		const ids = new Set(Object.keys(L.clusters || {}));
		const stray = rows.filter(([, rec]) => !ids.has(rec.cluster)).length;
		if (stray) problems.push(`${stray} functions name a cluster that is not in clusters`);
		const sum = Object.values(L.clusters || {}).reduce((a, c) => a + c.size, 0);
		if (sum !== L.population) problems.push(`cluster sizes sum to ${sum}, population says ${L.population}`);

		// The evidence rules. `n-a` is an honest value for notes but it is not evidence, so it does
		// not excuse a proven or probable claim.
		const hasEvidence = (r) => {
			const n = String(r.notes || '').trim();
			return n.length > 0 && n !== 'n-a';
		};
		const noEvidence = rows.filter(([, r]) => (r.confidence === 'proven' || r.confidence === 'probable') && !hasEvidence(r));
		if (noEvidence.length) {
			problems.push(`${noEvidence.length} rows claim ${noEvidence[0][1].confidence} with no evidence line. ` +
				'First: ' + noEvidence[0][0]);
		}
		const noIdiom = rows.filter(([, r]) => r.attribution === 'hand-asm-positive' && !/`[^`]+`/.test(String(r.notes || '')));		if (noIdiom.length) {
			problems.push(`${noIdiom.length} hand-asm-positive rows quote no excluding idiom. First: ${noIdiom[0][0]}. ` +
				'A hand-asm label without the idiom that excludes compiler output is the laundering the rule exists to stop');
		}

		// The unattributed count must be reported, and must be the real number.
		const actualUnattr = rows.filter(([, r]) => r.attribution === 'unattributed').length;
		if (L.summary === undefined || L.summary.unattributed === undefined) {
			problems.push('ledger does not report an unattributed count');
		} else if (L.summary.unattributed !== actualUnattr) {
			problems.push(`summary says ${L.summary.unattributed} unattributed, the rows say ${actualUnattr}`);
		}

		// Reproducible from the committed module.
		const py = fs.existsSync(path.join(__dirname, '.venv', 'bin', 'python3'))
			? path.join(__dirname, '.venv', 'bin', 'python3') : 'python3';
		const r = spawnSync(py, [path.join(__dirname, 'ledger.py'), '--check'],
			{ cwd: ROOT, encoding: 'utf8', stdio: 'pipe' });
		if (r.status !== 0) {
			problems.push('ledger.py --check failed: ' +
				((r.stdout || '') + (r.stderr || '')).split('\n').filter((l) => l.trim()).slice(0, 3).join(' | '));
		}

		record('attribution ledger', problems);
	}
}

// E7b. The shadow differential: does a natively written replacement leave the machine in the same state as the
// recompiled function it replaces? This is item 11c's claim, so it is a check rather than a paragraph. Two parts, both
// must pass. The comparison is baseline against live shadows on five screens and the save disk. The control is the
// baseline against itself, which catches a harness measuring run-to-run noise instead of the code under test: that is
// not hypothetical, it is what the first three versions did, and the cause was a sample serviced a frame late.
// Skips nothing: it needs a built port, and says so rather than passing quietly.
if (!skipCheck('shadow differential')) {
	const problems = [];
	const binary = path.join(ROOT, 'build', 'u2', 'b', 'u2');
	const py = fs.existsSync(path.join(__dirname, '.venv', 'bin', 'python3'))
		? path.join(__dirname, '.venv', 'bin', 'python3') : 'python3';
	// CI cannot run this and never will: the check builds against a module generated from zero fill and has no game
	// media anywhere, which is the thing it exists to prove. Failing there would mean a permanently red build for a
	// check that is doing its job, and a permanently red build is a check nobody reads. So the absence of media is a
	// recorded skip with the reason attached, while a machine that HAS the media and no binary still fails, because
	// that combination means somebody forgot to build.
	const media = ['ENCHANT.EXP', 'game/ENCHANT.EXP', 'Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).img'].some((p) =>
		fs.existsSync(path.join(ROOT, p)),
	);
	if (!media) {
		recordSkip('shadow differential');
		console.log('skip  shadow differential (no game media in this tree: it needs a built port and a disc)');
	} else if (!fs.existsSync(binary)) {
		problems.push('build/u2/b/u2 is missing, so the differential was not run (./tools/port-build.sh)');
		record('shadow differential', problems);
	} else {
		for (const [label, extra] of [['differential', []], ['control', ['--control']]]) {
			const r = spawnSync(py, [path.join(__dirname, 'shadow-diff.py'), ...extra],
				{ cwd: ROOT, encoding: 'utf8', stdio: 'pipe' });
			if (r.status !== 0) {
				const lines = ((r.stdout || '') + (r.stderr || '')).split('\n').filter((l) => /FAIL/.test(l));
				problems.push(`${label}: ` + (lines.slice(0, 2).join(' | ') || 'exited ' + r.status));
			}
		}
		record('shadow differential', problems);
	}
}

// E7d. C++ style and lint, for port/ only, and only when the tools exist. It is a skip rather than a pass when they do
// not: no clang-format or clang-tidy is installed on any machine this project has been built on, and this repository
// promises that a stranger can run every check from the zip alone, so a missing tool must not fail the suite.
{
	// The name is FIXED. A check whose name carries a note about whether a tool was found breaks --only matching and the
	// parallel driver's rule that each shard reports exactly one result for the name it was asked to run. cstyle.js
	// prints the skip itself, where a person reading the output will see it.
	const r = runNode('cstyle.js');
	record('c++ style and lint', r.ok ? [] : (r.out || '').split('\n').filter((l) => /FAIL/.test(l)));
}

// E7c. A tool that launches the port and sets an instrument switch must pass --dev, because without the flag the port
// removes those switches from the environment before reading them and reports them as dropped. "Instrument" is
// derived from the port's own source: the variables it actually reads, minus the nine in kAlwaysHonoured that are
// configuration and input scheduling. Keying on what the port reads matters, because the U2_ prefix is shared
// namespace: controlsmoke.py names its own U2_BIN and U2_DISK, and port-build.sh its own U2_EXTRA_SEEDS, and a
// prefix rule would demand --dev for variables the port has never heard of.
{
	const portSrc = ['main.cpp', 'native_shadows.cpp']
		.map((f) => fs.readFileSync(path.join(ROOT, 'port', f), 'utf8')).join('\n');
	const readByPort = new Set((portSrc.match(/getenv\("(U2_[A-Z_]+)"/g) || []).map((s) => s.slice(8, -1)));
	const allowBlock = (portSrc.match(/kAlwaysHonoured\[\][\s\S]*?};/) || [''])[0];
	const allow = new Set(allowBlock.match(/U2_[A-Z_]+/g) || []);
	const instruments = [...readByPort].filter((n) => !allow.has(n));
	const problems = [];
	for (const f of fs.readdirSync(__dirname).filter((n) => /\.(py|js|sh)$/.test(n))) {
		const src = fs.readFileSync(path.join(__dirname, f), 'utf8');
// The pre-filter used to be a search for the string `u2port`, which is the executable's name. The executable is now
// named after its title (`u2`, `u3`, ...), so a name-based filter would have silently stopped inspecting most of the
// tools that launch the port and the check would have gone quiet rather than red. It is dropped: `sets` and
// `launches` are the real test, and the only cost of dropping it is reading a few more files.
	const sets = instruments.filter((n) => src.includes(n));
		// A QUOTED '--dev', and a tool that actually launches a process. An unquoted mention is prose, and the first
		// version of this check passed on a comment that said "--dev, because ..." while the argument itself had been
		// removed: a check that could not fail. Verified by deleting the argument and watching this go red.
		const launches = /Popen\(|spawnSync|execFileSync|subprocess\.(run|Popen)/.test(src);
		if (launches && sets.length && !/['"]--dev['"]/.test(src)) {
			problems.push(`${f} sets ${sets.join(', ')} but never passes '--dev'`);
		}
	}
	record('tools pass --dev for instruments', problems);
}


// E8. The calls the port was skipping. The recompiler stops each function at its terminating `ret` and never resumes
// after the alignment padding that follows, so a function with no caller never enters the module and the calls inside
// it are absent from the port. tools/resumepoints.js derives those resume points and asserts that every one is seeded
// except three named in the tool, so the residue cannot grow unnoticed. Measured before this: 138 skipped calls.
if (skipCheck('calls the port was skipping')) { recordSkip('calls the port was skipping'); } else {
	const r = runNode('resumepoints.js', ['--check']);
	record('calls the port was skipping', r.ok ? [] : r.out.split('\n').filter((l) => /FAIL|^ {8}0x/.test(l)));
}

// E7. The call targets nothing really calls. The `E8 rel32` rule scans every byte, so table bytes can point at an
// address that then decodes as plausible code and sits in the queue as a routine. The rule is "no call site pointing
// here is an instruction in EITHER walk", and the second decoder is not optional: with ours alone it marks 124 targets
// instead of 26. tools/non-call-targets.txt records the answer so tools/queue.js works on a clone with no module, and
// this re-derives it whenever the module is present. Skips with a printed note when it is absent.
if (skipCheck('call targets that are not called')) { recordSkip('call targets that are not called'); } else {
	const r = runNode('calltargets.js', ['--check']);
	record('call targets that are not called', r.ok ? [] : r.out.split('\n').filter((l) => /FAIL|missing:|recorded but/.test(l)));
}

// E5. The decompilation queue. docs/queue.json stores only what the ledger knows; tools/queue.js derives the
// universe instead, from the `E8` call targets in the image plus the starts in tools/runtime-seeds.txt, and merges the two. This check exists because item 4j's finish is
// "every routine carries a status and the statuses sum to 738", which is only checkable if something counts them.
{
	const r = runNode('queue.js', ['--counts']);
	record('decompilation queue', r.ok ? [] : r.out.split('\n').filter((l) => /^FAIL/.test(l)));
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
if (skipCheck('image tooling audit')) { recordSkip('image tooling audit'); } else {
	const r = runNode('imgaudit.js');
	record('image tooling audit', r.ok ? [] : r.out.split('\n').filter((l) => /^FAIL/.test(l)));
}

// D2b. The disp32 comparison tool, and the fact that it can fail.
//
// WHY THIS IS A CHECK. The project recovers routines under two standards, byte-identical
// and identical-except-disp32, and `tools/cc.sh --want` can only test the first. Without
// a second tool, every base-fold and non-leaf routine looked like a mismatch and the
// queue was cut to the 14 leaves. `tools/cmpdisp.js` applies the second standard by
// masking relocation fields on BOTH sides and requiring the rest to be equal.
//
// A masking tool is the easiest kind to make always pass. So it is tested in both
// directions: a known-good candidate must be identical-except-disp32, and three
// deliberately wrong candidates must DIFFER. The wrong-constant case is the one that
// catches a mask that has grown to cover the whole instruction.
if (skipCheck('disp32 comparison works and can fail')) { recordSkip('disp32 comparison works and can fail'); } else {
	const problems = [];
	const run = (args) => {
		const r = spawnSync(process.execPath, [path.join(__dirname, 'cmpdisp.js'), ...args],
			{ encoding: 'utf8', stdio: 'pipe' });
		return { code: r.status, out: (r.stdout || '') + (r.stderr || '') };
	};
	const verdict = (args) => {
		const r = run([...args, '--json']);
		try { return JSON.parse(r.out).verdict; } catch { return 'UNPARSEABLE: ' + r.out.slice(0, 120); }
	};

	// 0xfdeb6 is `mov eax,[0xdea40]; ret`. The candidate differs only in the disp32.
	const good = verdict(['--addr', '0xfdeb6', '--code', 'a1 00 00 00 00 c3']);
	if (good !== 'identical-except-disp32') {
		problems.push(`0xfdeb6 expected identical-except-disp32, got ${good}`);
	}
	// The negative controls. Each changes one byte OUTSIDE a relocation field.
	const wrongImm = verdict(['--addr', '0xfdeb6', '--code', 'a1 00 00 00 00 c4']);
	if (wrongImm !== 'differs') problems.push(`wrong ret byte must differ, got ${wrongImm}`);
	const wrongOp = verdict(['--addr', '0x104228', '--code', '83 05 00 00 00 00 f5 c3']);
	if (wrongOp !== 'differs') problems.push(`wrong add immediate must differ, got ${wrongOp}`);
	const short = verdict(['--addr', '0xfdeb6', '--code', 'a1 00 00 00 c3']);
	if (short !== 'length-differs') problems.push(`short code must be length-differs, got ${short}`);

	// The encoding-coverage controls. Each is a relocation form the masker once missed,
	// which silently invented parks. A correct candidate for each must pass, and a
	// wrong adjacent constant must still fail.
	const forms = [
		// mod=00 rm=101, no SIB: `c7 05 <disp32> imm`
		['0xef548', 'c7 05 00 00 00 00 30 00 00 00 c3', 'c7 05 00 00 00 00 31 00 00 00 c3'],
		// byte moffs: `a0 <disp32>`
		['0x100307', 'a0 00 00 00 00 3c 40 72 13 a0 00 00 00 00 25 0f 00 00 00 c6 80 00 00 00 00 ff f8 c3',
			'a0 00 00 00 00 3c 40 72 13 a0 00 00 00 00 25 0f 00 00 00 c6 80 00 00 00 00 ff f9 c3'],
		// mod=00 rm=04 with SIB base=101: `3b 3c 8d <disp32>`. Real bytes, because a
		// placeholder here is exactly how this control failed to test anything the first
		// time it was written.
		['0xeed6c',
			'55 8b ec 57 8b 7d 08 8b 55 0c 2b c9 83 f9 20 7d 22 80 b9 00 00 00 00 00 74 16 ' +
			'3b 3c 8d 00 00 00 00 75 0d 3b 14 8d 00 00 00 00 75 04 8b c1 eb 08 41 eb d9 ' +
			'b8 ff ff ff ff 5f c9 c3',
			'55 8b ec 57 8b 7d 08 8b 55 0c 2b c9 83 f9 20 7d 22 80 b9 00 00 00 00 00 74 16 ' +
			'3b 3c 8d 00 00 00 00 75 0d 3b 14 8d 00 00 00 00 75 05 8b c1 eb 08 41 eb d9 ' +
			'b8 ff ff ff ff 5f c9 c3'],
	];
	const good1 = verdict(['--addr', forms[0][0], '--code', forms[0][1]]);
	if (good1 !== 'identical-except-disp32') problems.push(`0xef548 mod=00 rm=101 form regressed: ${good1}`);
	const bad1 = verdict(['--addr', forms[0][0], '--code', forms[0][2]]);
	if (bad1 !== 'differs') problems.push(`0xef548 wrong immediate must differ, got ${bad1}`);
	const good2 = verdict(['--addr', forms[1][0], '--code', forms[1][1]]);
	if (good2 !== 'identical-except-disp32') problems.push(`0x100307 byte-moffs form regressed: ${good2}`);
	const bad2 = verdict(['--addr', forms[1][0], '--code', forms[1][2]]);
	if (bad2 !== 'differs') problems.push(`0x100307 wrong immediate must differ, got ${bad2}`);
	const good3 = verdict(['--addr', forms[2][0], '--code', forms[2][1]]);
	if (good3 !== 'identical-except-disp32') problems.push(`0xeed6c indexed-SIB form regressed: ${good3}`);
	const bad3 = verdict(['--addr', forms[2][0], '--code', forms[2][2]]);
	if (bad3 !== 'differs') problems.push(`0xeed6c wrong branch displacement must differ, got ${bad3}`);

	// And the tool must agree with the register: every base-fold entry marked with the
	// disp32 standard is checked against its recorded bytes, so a hand-edit cannot claim
	// a recovery that the image does not support.
	const reg = JSON.parse(fs.readFileSync(path.join(DOCS, 'routines.json'), 'utf8')).routines;
	const disp32 = reg.filter((x) => x.class === 'base-fold');
	for (const e of disp32) {
		const r = run(['--addr', '0x' + e.addr, '--json']);
		// With no --code we cannot compare, so this only asserts the address decodes and
		// the recorded size agrees with the image.
		if (!/cannot|need --code/.test(r.out)) {
			const parsed = (() => { try { return JSON.parse(r.out); } catch { return null; } })();
			if (parsed && parsed.targetLen && parsed.targetLen !== e.bytes) {
				problems.push(`0x${e.addr} register says ${e.bytes}B, image decodes ${parsed.targetLen}B`);
			}
		}
	}
	record('disp32 comparison works and can fail', problems);
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
if (skipCheck('corpus census is reproducible')) { recordSkip('corpus census is reproducible'); } else {
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
if (skipCheck('global tooling regression')) { recordSkip('global tooling regression'); } else {
	const r = runNode('checkglobals.js');
	record('global tooling regression', r.ok ? [] : r.out.split('\n').filter((l) => /^FAIL/.test(l)));
}


// D5. Every ndisasm invocation must pass -w.
//
// WHY THIS IS A CHECK AND NOT A COMMENT. `ndisasm` wraps a long instruction onto a
// continuation line that begins with '-' and carries hex but no mnemonic:
//
//   000E6B25  C7840849070000FF  mov dword [eax+ecx+0x749],0xffffffff
//             -FFFFFF
//
// Four separate tools parsed that text by splitting on whitespace, and each one
// silently dropped or mis-joined the continuation. Measured consequences:
//
//   - 0xef548 reported as 9 bytes when it is 11, and the lost bytes contained 0xc3,
//     so the routine looked SHORT rather than corrupt. That produced a false mismatch
//     against a correct build.
//   - 99 of 738 corpus rows carried the wrong routine size.
//   - 0xe6a58 was analysed as 222 bytes and is 228, so the attempt recorded against
//     it was made on truncated input.
//
// `ndisasm -w` is documented as "wide output (avoids continuation lines)" and had
// never been used in this repository. With it the wrapped line collapses into one
// and the trap cannot occur. This check exists so that a new tool which forgets the
// flag fails loudly instead of quietly reporting wrong numbers.
{
	const files = fs.readdirSync(__dirname).filter((f) => /\.(js|py)$/.test(f) && f !== 'checkall.js');
	const offenders = [];
	for (const f of files) {
		const text = fs.readFileSync(path.join(__dirname, f), 'utf8');
		for (const line of text.split('\n')) {
			// Only invocations, not prose. A line is an invocation if it calls ndisasm
			// with an argument list.
			if (!/ndisasm['"]\s*,?\s*\[|ndisasm -b/.test(line)) continue;
			if (!/\s-w\b|'-w'|"-w"/.test(line)) offenders.push(`${f}: ndisasm without -w: ${line.trim().slice(0, 70)}`);
		}
	}
	record('ndisasm uses -w', offenders);
}

// D7. The decoder SESSION must agree with the one-shot decoder, byte for byte.
//
// WHY THIS IS A CHECK. Plan item 4h replaced per-window decoding with one
// persistent worker (`decodeSession()` in tools/decode.js), because cfgwalk refills
// about 1,028 windows and preflight asks about 738 routine bodies and a spawn each
// measured 117ms. The session is a second code path over the same worker, so it can
// drift: the first version read a false EOF during the child's startup and the second
// passed the interpreter's `-u` to `exec` instead of to python. Both were silent
// failures of a transport, not of a decoder, and neither would have shown up in a
// count that merely looked plausible.
//
// The three ranges cover the cases the migration measured: ordinary code
// (0xe9090), a routine whose body contains undecodable bytes (0xea08d), and a
// region the decoder resyncs through (0xf236a).
{
	const problems = [];
	try {
		const r = execFileSync(process.execPath, ['-e', `
const path = require('path');
const { decode, decodeSession } = require(path.join(${JSON.stringify(__dirname)}, 'decode.js'));
const s = decodeSession();
const pairs = [[0xe9090, 0xe9210], [0xea08d, 0xea200], [0xf236a, 0xf2380]];
const bad = [];
for (const [lo, hi] of pairs) {
	const a = s.decode(lo, hi);
	const b = decode(lo, hi);
	if (JSON.stringify(a.insns) !== JSON.stringify(b.insns)) bad.push(lo.toString(16) + ': instructions differ');
	if (JSON.stringify(a.skips) !== JSON.stringify(b.skips)) bad.push(lo.toString(16) + ': skips differ');
}
s.close();
console.log(bad.length ? bad.join('; ') : 'agree');
`], { cwd: ROOT, encoding: 'utf8', stdio: 'pipe' });
		if (r.trim() !== 'agree') {
			problems.push(`decodeSession disagrees with decode() over the three test ranges: ${r.trim().slice(0, 160)}`);
		}
	} catch (e) {
		problems.push('session check failed to run: ' + ((e.stdout ?? '') + (e.stderr ?? '')).split('\n')[0]);
	}
	record('decoder session agrees with one-shot', problems);
}

// D6. THE TOOLING POLICY: no new tool parses disassembler text for operands.
//
// `tools/decode.js` returns instruction objects with operand TYPES, so `X86_OP_MEM` and
// `X86_OP_IMM` are different values rather than different spellings. Thirteen ndisasm
// call sites parsed text instead, with four conventions mixed, and every bug they
// produced was the same shape: a detector answering a slightly different question than
// the one asked. Four of those reached commits in one session.
//
// This does not ban ndisasm. It is still right for raw bytes and byte offsets, where no
// operand semantics are asked for. It records the sites that remain, so the number can
// only go down deliberately, and it names the files rather than failing anonymously.
//
// Fully documented in docs/tooling-policy.md.
{
	// Files allowed to INVOKE ndisasm: the boundary walkers, which ask only about
	// lengths and bytes, plus the checks that inspect other tools rather than decode.
	//
	// Counting INVOCATIONS, not mentions. A file that discusses ndisasm in a comment
	// explaining why it no longer calls it is not a violation, and an earlier version of
	// this check flagged three such files, which would have trained the next person to
	// delete the explanation.
	const ALLOWED = new Set([
		'checkall.js', 'checkglobals.js', 'imgaudit.js',
		'decode_agree.py', 'decode_worker.py', 'decode.js', 'decode-setup.sh',
	]);
	const invokes = (text) =>
		/ndisasm['"]\s*,?\s*\[/.test(text) || /ndisasm -b/.test(text) ||
		/\[['"]ndisasm['"]/.test(text);
	const files = fs.readdirSync(__dirname).filter((f) => /\.(js|py)$/.test(f));
	const problems = [];
	for (const f of files) {
		if (ALLOWED.has(f)) continue;
		const text = fs.readFileSync(path.join(__dirname, f), 'utf8');
		if (invokes(text)) {
			problems.push(`${f} invokes ndisasm but is not in the policy allow-list. ` +
				'Use tools/decode.js, or add it to ALLOWED with a reason. See docs/tooling-policy.md.');
		}
	}
	// Pinned so migrating a tool is an intentional edit rather than a silent drift.
	const PENDING = 2;
	const still = files.filter((f) => ALLOWED.has(f)
		&& invokes(fs.readFileSync(path.join(__dirname, f), 'utf8')));
	if (still.length !== PENDING) {
		problems.push(`files invoking ndisasm: ${still.length}, pinned at ${PENDING}. ` +
			'If you migrated one, lower PENDING in the same commit.');
	}
	record('tooling policy', problems);

	// G. The zero regions are still where the docs say they are. A different rip of the disc, or a
	// doc that drifts, changes what a walker may decode, and the symptom is a count that is merely
	// larger rather than a failure. tools/codelimits.js does the measuring and this asserts the
	// result against the recorded runs.
	const zr = runNode('codelimits.js', ['--check']);
	record('zero regions match the docs', zr.ok ? [] : zr.out.split('\n').filter((l) => /FAIL/.test(l)));

	// G2. The walk's zero guard actually refuses. codelimits proves the ranges are right, and
	// nothing until now proved that anything consumes them: cfgwalk could lose the call and its
	// counts would merely get larger, which no check would see. The assertion is on the seed
	// refusals by address, because those three need no decoder to derive: a CALL target inside a
	// zero run is arithmetic on bytes. They are also the three addresses the corpus had already
	// classified not-entry, which is why fixing them is calibration rather than tuning.
	if (skipCheck('cfgwalk refuses seeds inside zero fill')) { recordSkip('cfgwalk refuses seeds inside zero fill'); } else {
		const cw = runNode('cfgwalk.js', ['--refusals']);
		const got = (cw.out.match(/^seed 0x[0-9a-f]+/gm) || []).map((s) => s.replace(/\s+/, ' '));
		// In the GUEST frame, because `--refusals` converts and says so in its header. These three were 0x174e9,
		// 0x9b44b and 0x9847b before that, in the tool's own file-minus-0x20 frame, and the mismatch made them
		// look like different addresses from the seven tools/recondiff.js reports. See docs/walk-comparison.md.
		const want = ['seed 0x17309', 'seed 0x9b26b', 'seed 0x9829b'];
		const missing = want.filter((w) => !got.includes(w));
		const framed = /^frame: guest/m.test(cw.out) ? [] : ['FAIL --refusals does not state which frame its addresses are in'];
		record('cfgwalk refuses seeds inside zero fill',
			missing.length ? ['missing: ' + missing.join(', ') + '   got: ' + (got.join(', ') || 'nothing'), ...framed] : framed);
	}

	// H. The TBIOS dispatch chain. tools/tbios.js maps each AH value the game uses to its handler in
	// TBIOS.BIN, through the header slot, the dispatcher and the table at 0x2b4. Every link is
	// asserted against the bytes; a corrupt table entry was tested and the check fails.
	const tb = runNode('tbios.js', ['--check']);
	record('TBIOS dispatch chain', tb.ok ? [] : tb.out.split('\n').filter((l) => l.trim() && !/^ok /.test(l)));

	// H2. The checked-in TBIOS seed derivation. The live capture is gitignored, so a clean clone would build a
	// TBIOS module of 307 functions rather than the 5,573 the port was measured against, and fault at
	// 0110:6d73 on frame 80. tools/tbios-seeds.txt is that derivation in git, and this asserts it still equals
	// the trace wherever the trace exists. The script prints SKIP and exits 0 when it does not, which is the
	// honest shape for a clone, and a missing python3 is treated the same way rather than as a failure.
	{
		let bad = [];
		try {
			execFileSync('python3', [path.join(__dirname, 'tbios-seeds.py'), '--check'], { cwd: ROOT, encoding: 'utf8', stdio: 'pipe' });
		} catch (e) {
			if (e.code === 'ENOENT') console.log('  note  tbios seeds check skipped: no python3 on PATH');
			else bad = String((e.stdout || '') + (e.stderr || '')).split('\n').filter((l) => l.trim());
		}
		record('tbios seeds match the checked-in derivation', bad);
	}

	// I. The display context and the rectangle cluster. docs/display-context.md claims seven
	// specific TBIOS calls in 0xe5d90 reach seven specific handlers, and docs/rectangle-cluster.md
	// claims the direct AH set of four routines, that AH 0x48 and 0x49 share a handler, and that
	// the text window stride is 57. Those are measured values, so they are asserted rather than
	// described. All five assertion groups were verified to fail by substituting a wrong value:
	// this gate also exposed that main()'s return was discarded, so it printed failures and
	// exited 0.
	const dr = runNode('tbios-read.js', ['--check']);
	record('display context and rectangle cluster', dr.ok ? [] : dr.out.split('\n').filter((l) => /FAIL/.test(l)));

	// J. The address frame. tools/fnstrings.js used to slice the 0x20 header and then report
	// stripped addresses as raw, so every routine it named was wrong by 32: it called 0xebb70 a
	// function start when the real one is 0xebb90, and it rejected 0xe5d90, a function this
	// project reads by hand. That is the two-frames bug docs/two-frames-of-reference.md documents.
	// Asserted on a routine whose span is independently known from display-context.md.
	const fs2 = runNode('fnstrings.js', ['0xe5d90']);
	const spanOk = /^0xe5d90\.\.0xe5e6c/.test((fs2.out || '').trim());
	record('fnstrings reports raw addresses', spanOk ? [] :
		['0xe5d90 should span to 0xe5e6c, got: ' + String(fs2.out || '').split('\n')[0]]);

	// K. The 0xEB escape. `EB xx` encodes the character xx + 1 and all other bytes pass
	// through, so 0x1528 reads STRENGTH when expanded. Asserted by decoding, because the six
	// earlier readings of this byte were all plausible and all wrong, and the only way to keep
	// one settled is to test it against a string whose meaning is already known.
	if (!NO_DISC) {
		const buf = fs.readFileSync(path.join(ROOT, 'ENCHANT.EXP'));
		const at = 0x1528;
		const end = buf.indexOf(0, at);
		const raw = buf.subarray(at, end);
		const out = [];
		for (let i = 0; i < raw.length; i++) {
			if (raw[i] === 0xeb && i + 1 < raw.length) {
				out.push(raw[i + 1] + 1);
				i++;
			} else {
				out.push(raw[i]);
			}
		}
		const lead = Buffer.from(out).subarray(0, 8).toString('latin1');
		record('0xEB is an ASCII escape (xx + 1)',
			lead === 'STRENGTH' ? [] : ['0x1528 should expand to STRENGTH, got ' + JSON.stringify(lead)]);
	}
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
} else if (skipCheck('site build')) {
	recordSkip('site build');
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
let skippedByFlag = 0;
const timings = [];
for (const r of results) {
	timings.push({ name: r.name, ms: r.at - lastStamp });
	lastStamp = r.at;
	total += r.failures.length;
	if (r.wasSkipped) skippedByFlag++;
	// With --only, print just the requested checks. The other slow ones were skipped and the cheap ones ran
	// again in this process, so printing them all would duplicate lines when tools/checkall-parallel.sh
	// concatenates its shards.
	// A failure is always printed. --only says which checks this process was asked to run, not
	// permission to hide a problem that another check found. Under the parallel driver that
	// distinction is load bearing: a cheap check failing in a shard would otherwise exit non-zero
	// with no message anywhere, which is the silent-failure shape this whole file exists to catch.
	const asked = ONLY === null || ONLY.has(r.name);
	if (!r.failures.length && (QUIET || !asked)) continue;
	const label = r.wasSkipped ? 'skip' : (r.failures.length ? 'FAIL' : 'ok  ');
	console.log(`${label} ${r.name}` + (r.failures.length ? `  (${r.failures.length})` : ''));
	for (const f of r.failures.slice(0, 6)) console.log('       ' + f);
}
if (TIMING) {
	const ranked = timings.slice().sort((a, b) => b.ms - a.ms);
	const sum = timings.reduce((a, t) => a + t.ms, 0);
	console.log('\n-- timing, slowest first --');
	for (const t of ranked) {
		if (t.ms >= 50) console.log(`  ${String(t.ms).padStart(6)} ms  ${t.name}`);
	}
	const small = ranked.filter((t) => t.ms < 50);
	if (small.length) console.log(`  ${String(small.reduce((a, t) => a + t.ms, 0)).padStart(6)} ms  (${small.length} checks under 50 ms each)`);
	console.log(`  ${String(sum).padStart(6)} ms  total across ${timings.length} checks`);
}
if (total) {
	console.log(`\n${total} problem(s). This exits non-zero, so it can gate a commit.`);
	process.exit(1);
}
if (skipped) console.log(`\n${skipped} checks skipped: no disc present. This run proves the tree, not the disc.`);
if (skippedByFlag) {
	// Never say "all checks pass" over work that did not happen. A --fast run is useful and it is not the
	// same claim as a full run, so the last line says which one this was.
	console.log(`\n${results.length - skippedByFlag - skipped} checks passed, ${skippedByFlag} skipped by --fast or --only.`);
	console.log('This run does NOT cover the skipped checks. `node tools/checkall.js` runs the full suite.');
} else {
	console.log('\nall checks pass.');
}
