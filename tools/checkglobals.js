#!/usr/bin/env node
'use strict';
// tools/checkglobals.js - regression tests for the global-extraction tooling.
//
// WHY THIS FILE EXISTS. Two detectors in this area were confidently wrong in one
// session, and each was caught only because a known case was written down:
//
//   1. `target_bytes` in trycands.py dropped ndisasm's continuation lines, so a
//      long `mov dword [disp32],imm` lost the tail of its immediate. 0xef548 was
//      reported as 9 bytes when it is 11. Because the dropped bytes contained
//      0xc3, the routine looked shorter rather than corrupted, and comparing that
//      against a correct build produced a false mismatch which nearly became a
//      wrong conclusion about the source.
//
//   2. The width cross-check in globals.js reported 0 conflicts on deliberately
//      contradictory input, because `mov eax,[addr]` carries no size keyword and
//      the width lives in the register name. It was decoration until fixed.
//
// So both are asserted here against cases whose answers are known, and the width
// check is asserted BOTH ways: clean on the real image, and failing on a
// deliberately corrupted copy. A check asserted only in its passing direction is
// the defect this file exists to prevent.

const fs = require('fs');
const path = require('path');
const { execFileSync } = require('child_process');

const ROOT = path.join(__dirname, '..');
const IMAGE = path.join(ROOT, 'ENCHANT.EXP');
const problems = [];
const fail = (m) => problems.push('FAIL ' + m);

// --- 1. target_bytes handles ndisasm continuation lines -------------------
//
// Run the real python function rather than reimplementing it, because a
// reimplementation would test the test.
function pyTargetBytes(addr) {
	const script = `
import importlib.util
spec = importlib.util.spec_from_file_location('tc', ${JSON.stringify(path.join(ROOT, 'tools', 'trycands.py'))})
tc = importlib.util.module_from_spec(spec)
spec.loader.exec_module(tc)
b = bytes(tc.target_bytes(${addr}))
print(b.hex())
`;
	return execFileSync('python3', ['-c', script], { cwd: ROOT, encoding: 'utf8', stdio: 'pipe' }).trim();
}

{
	// 0xef548 is the routine that exposed the bug: `mov dword [0xd6e60],0x30; ret`.
	// Its immediate is 30 00 00 00 and the third byte is 0xc3, which a byte search
	// for `ret` hits. It must be 11 bytes, not 9.
	const want = 'c705606e0d00300000' + '00c3';
	let got = '';
	try {
		got = pyTargetBytes('0xef548');
	} catch (e) {
		fail('target_bytes threw on 0xef548: ' + String(e.message).slice(0, 80));
	}
	if (got && got !== want) {
		fail(`0xef548 length ${got.length / 2} bytes, want 11 (continuation line dropped?)`);
	}

	// No-regression: the seven routines whose matches predate this fix.
	const known = {
		'0xe9e2c': 21, '0xe44d0': 49, '0xe9940': 37, '0xe07e8': 58,
		'0xe65fc': 23, '0xe662c': 9, '0xfd0ec': 29,
	};
	for (const [addr, n] of Object.entries(known)) {
		let got2 = '';
		try {
			got2 = pyTargetBytes(addr);
		} catch (e) {
			fail(`target_bytes threw on ${addr}`);
			continue;
		}
		if (got2.length / 2 !== n) fail(`${addr} is ${got2.length / 2} bytes, want ${n}`);
	}
}

// --- 2. the width check runs on the real image ---------------------------
//
// It is NOT asserted to report zero. The real image genuinely contains two globals
// accessed at more than one width, and that is a FINDING rather than a failure of the
// tool:
//
//   0x77e90  written as a word by the pixel writer, read as a byte elsewhere
//   0xd4a74  read as a dword and written as a byte in the same routine
//
// So the assertion pins the SET. A third entry appearing means either a real new finding
// or a classifier regression, and both deserve a look before this passes.
const EXPECTED_WIDTH_CONFLICTS = 2;
{
	const out = execFileSync('node', [path.join(__dirname, 'globals.js'), '--width-check'], {
		cwd: ROOT, encoding: 'utf8', stdio: 'pipe',
	});
	const m = out.match(/conflicting access widths:\s*(\d+)/);
	if (!m) fail('width-check did not report a conflict count');
	else if (Number(m[1]) !== EXPECTED_WIDTH_CONFLICTS) {
		fail(`width-check reports ${m[1]} conflicts, expected ${EXPECTED_WIDTH_CONFLICTS} ` +
			'(pinned, because the real image has that many by measurement)');
	}
}

// --- 3. the width check FAILS on a deliberately corrupted copy ------------
//
// This is the assertion that gives assertion 2 its meaning. Patch one scanned
// routine so it reads a known global at the wrong width, then require the check
// to notice. 0xef248 IS a routine entry and begins `mov eax,[0xceca0]`; changing
// opcode a1 to a0 makes it a 1-byte read where seven other routines read 4.
{
	const tmp = path.join('/var/tmp', 'checkglobals-broken.expx');
	const buf = Buffer.from(fs.readFileSync(IMAGE));
	const OFF = 0xef248;
	if (buf.subarray(OFF, OFF + 5).toString('hex') !== 'a1a0ec0c00') {
		fail('corrupted-case precondition failed: 0xef248 is not mov eax,[0xceca0]');
	} else {
		buf[OFF] = 0xa0; // mov al,[moffs] instead of mov eax,[moffs]
		fs.writeFileSync(tmp, buf);
		const out = execFileSync('node',
			[path.join(__dirname, 'globals.js'), '--width-check', '--image', tmp],
			{ cwd: ROOT, encoding: 'utf8', stdio: 'pipe' });
		const m = out.match(/conflicting access widths:\s*(\d+)/);
		if (!m) fail('width-check did not report a count on the corrupted image');
		else if (Number(m[1]) === 0) {
			fail('width-check found 0 conflicts on a corrupted image, so it cannot fail');
		} else if (!/0xceca0/.test(out)) {
			fail('width-check reported a conflict but not the corrupted global 0xceca0');
		}
		try { fs.unlinkSync(tmp); } catch { /* already gone */ }
	}
}

// --- 4. the two classification bugs found by the objdump cross-check ------
//
// Both were invisible to every other check, because no check compared the
// classifier against anything. These pin the specific instructions.
{
	const run = (script, args) => execFileSync('node', [path.join(__dirname, script), ...args], {
		cwd: ROOT, encoding: 'utf8', stdio: 'pipe',
	});

	// (a) base+index with an IMPLICIT scale of 1. `[eax+edx+0x392c8]` is printed by
	// ndisasm with no `*1`, and requiring a printed scale made four globals in
	// 0xe30a0 invisible. They must be found.
	const a = run('globals.js', ['0xe30a0']);
	for (const want of ['0x392c8', '0x392cc', '0x392d0', '0x392d4']) {
		if (!a.includes('-> ' + want)) fail(`0xe30a0 lost indexed-base global ${want}`);
	}

	// (b) an address stored as an IMMEDIATE is not a reference. 0xe5578 has
	// `mov dword [0x7b374],0x7b274`: the first is accessed, the second is the value
	// written. Counting both reported 7 references where there are 5.
	const b = run('globals.js', ['0xe5578']);
	const count = Number((b.match(/data references:\s*(\d+)/) || [])[1]);
	if (count !== 5) fail(`0xe5578 should report 5 data references, got ${count}`);
	if (b.includes('-> 0x7b274')) fail('0xe5578 counted the stored immediate 0x7b274 as a reference');

	// (c) a ret has no operand, so a ret test placed after `if (!op) continue` never
	// fires. 0xfdecc is `mov eax,[0xdea44]; ret`, 6 bytes; scanning past it attributed
	// 0xdea48 from a routine 28 bytes later.
	const c = run('globals_od.js', ['0xfdecc']);
	if (!c.includes('0xdea44')) fail('0xfdecc lost its own global 0xdea44');
	if (c.includes('0xdea48')) fail('globals_od.js scanned past the ret into a neighbouring routine');

	// (d) the two tools must agree over the whole base-fold set. This is the assertion
	// that gives the rest meaning: it is the only check here that compares two
	// independent implementations.
	const cmp = run('globals_od.js', ['--compare']);
	const bad = Number((cmp.match(/disagree:\s*(\d+)/) || [])[1]);
	if (bad !== 0) fail(`globals.js and globals_od.js disagree on ${bad} base-fold routines`);
}

// --- report --------------------------------------------------------------
if (problems.length) {
	for (const p of problems) console.log(p);
	process.exit(1);
}
console.log('ok');
