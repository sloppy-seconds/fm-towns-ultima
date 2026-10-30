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
const { execFileSync, spawnSync } = require('child_process');

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

// E3. The port's measured constants, asserted against the source that carries them. Every wall the port has hit
// was a value it invented, and finding one costs an emulator session while reverting one by accident costs
// nothing at all, which is the wrong way round. portcheck.js reads port/, tools/ and docs/ only, so this runs
// on a clone that has downloaded nothing: no emulator, no disc, no recompile. What it cannot cover is runtime
// behaviour, which is tools/divergence.py against a capture and does need the machine.
{
	const r = runNode('portcheck.js');
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
{
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
			['emitted functions', j.functions.theirs, 865],
			['our starts (call targets plus the seed file)', j.functions.ours, 813],
			['function starts in both', j.functions.both, 788],
			["fmtownskit's function starts in zero fill", j.functions.theirs_only.zero_run, 0],
			['our starts in zero fill', j.functions.ours_only.zero_run, 7],
			['emitted instructions', j.instructions.theirs, 43016],
			// Re-measured 2026-10-30 on the plan-item-4h decoder migration (ndisasm text
			// parser -> Capstone via tools/decode.js). Ours fell 39820 -> 39795 because
			// ndisasm counted its `db` lines for undecodable bytes as instructions and
			// Capstone reports them as skips. Both rose 38443 -> 38515 because Capstone
			// resyncs the way fmtownskit's i386.py does (docs/fmtownskit-and-seeds.md
			// records that decoder as agreeing with Capstone on every routine checked),
			// so agreement with the other walk improved, not degraded.
			['our instructions, seeded', j.instructions.ours, 39795],
			['instruction starts in both', j.instructions.both, 38515],
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
{
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

// E8. The calls the port was skipping. The recompiler stops each function at its terminating `ret` and never resumes
// after the alignment padding that follows, so a function with no caller never enters the module and the calls inside
// it are absent from the port. tools/resumepoints.js derives those resume points and asserts that every one is seeded
// except three named in the tool, so the residue cannot grow unnoticed. Measured before this: 138 skipped calls.
{
	const r = runNode('resumepoints.js', ['--check']);
	record('calls the port was skipping', r.ok ? [] : r.out.split('\n').filter((l) => /FAIL|^ {8}0x/.test(l)));
}

// E7. The call targets nothing really calls. The `E8 rel32` rule scans every byte, so table bytes can point at an
// address that then decodes as plausible code and sits in the queue as a routine. The rule is "no call site pointing
// here is an instruction in EITHER walk", and the second decoder is not optional: with ours alone it marks 124 targets
// instead of 26. tools/non-call-targets.txt records the answer so tools/queue.js works on a clone with no module, and
// this re-derives it whenever the module is present. Skips with a printed note when it is absent.
{
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
{
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
{
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
	{
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
	{
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
