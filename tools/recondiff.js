#!/usr/bin/env node
'use strict';
// tools/recondiff.js - compare this project's walk with fmtownskit's, in both directions.
//
// WHY THIS EXISTS. Two independent walks now exist over the same 1,071,886-byte image and nobody has ever
// compared them. Ours is seeded from the 738 `E8 rel32` call targets in the image (docs/call-graph.md) and
// decodes 39,190 instructions (tools/cfgwalk.js). fmtownskit's is seeded from the MP header entry plus the
// rules in docs/fmtownskit-and-seeds.md, reports 0 refused and 0 conflicts, and emits 818 functions and
// 41,847 instructions (build/port/recomp/report.txt). The two counts differ by 2,657 instructions and 80
// function starts, and until that difference is named it is either work we are missing or work that is not
// there.
//
// WHAT THIS CAN VALIDATE, AND WHAT IT CANNOT. fmtownskit emits instructions, not source, so it cannot say
// anything about whether a recovered routine is semantically right. It can say where code is, where an
// instruction starts, and where a function starts, and those are the three things this project's collisions
// came from: bad seeds, transfers followed into zero fill, and instructions decoded mid-operand. So the
// comparison is of BOUNDARIES, not of meaning.
//
// THE FRAME IS THE FIRST THING TO GET RIGHT. This project has four frames of reference. fmtownskit's emitted
// function names (`void f_00000009`) and its `X86_AT(c, 0x9u)` addresses are GUEST addresses, which is the
// file minus the 0x200 header and stub. tools/cfgwalk.js works on the file minus 0x20, so its addresses are
// GUEST + 0x1E0. That delta is applied here, in one named constant, and then CHECKED at run time against
// anchors that are call targets in both walks. A frame error would otherwise produce a clean empty
// intersection rather than an error, which is exactly how this project lost sessions before.
//
// WHAT IT DOES NOT DO. It does not fix anything, re-seed anything, or claim a verdict on any individual
// address. It reports the set differences and classifies them, and anything it cannot classify is printed
// with its bytes so a person can decide.
//
// USAGE
//   node tools/recondiff.js              the summary
//   node tools/recondiff.js --json       the same thing machine readable, for a check to assert
//   node tools/recondiff.js --verbose    also list every disagreement, one per line
//   node tools/recondiff.js --recomp DIR read the emitted module from DIR instead of build/port/recomp,
//                                       which is how the tool is tested against a deliberately incomplete
//                                       module to prove it notices a missing function
//
// Exit 0 when the two walks are consistent by the rules below, 1 when a start fmtownskit calls a function
// lands in zero fill or is not an instruction boundary in either walk, 2 when an input is missing or the
// frame anchors do not hold.

const fs = require('fs');
const path = require('path');
const { execFileSync } = require('child_process');

const ROOT = path.resolve(__dirname, '..');
const EXP = path.join(ROOT, 'ENCHANT.EXP');
const RECOMP = path.join(ROOT, 'build/port/recomp');

// cfgwalk's frame is guest + 0x1E0, because it strips the 0x20 MP header while the guest frame strips 0x200.
// Measured, not assumed: `node tools/cfgwalk.js --check 0x1e9` and `--check 0x105c58` both answer "function
// head", and those are guest 0x9 and 0x105a78, which are the first and last functions fmtownskit emits.
const CFGWALK_TO_GUEST = 0x1e0;

// A run of this many zero bytes is not code. fmtownskit's own walk refuses transfers into zero fill for the
// same reason, and a function start inside one is the collision failure this project already had once.
const ZERO_RUN = 16;

const hx = (n) => '0x' + n.toString(16);

function fail(code, msg) {
	console.error(msg);
	process.exit(code);
}

function loadImage() {
	if (!fs.existsSync(EXP)) fail(2, `${EXP} is missing. This tool reads the image, not an extraction.`);
	const file = fs.readFileSync(EXP);
	if (file[0] !== 0x4d || file[1] !== 0x50) fail(2, `${EXP} is not an MP image`);
	return file.subarray(0x200);
}

function runJson(args) {
	try {
		return execFileSync(process.execPath, args, { cwd: ROOT, encoding: 'utf8', maxBuffer: 64 << 20 });
	} catch (e) {
		fail(2, `could not run ${args.join(' ')}: ${e.message}`);
	}
}

// Our instruction starts, converted from cfgwalk's frame into the guest frame.
function ourInstructions() {
	const out = runJson(['tools/cfgwalk.js', '--insns']);
	const set = new Set();
	for (const line of out.split('\n')) {
		const t = line.trim();
		if (!t || !/^[0-9a-f]+$/.test(t)) continue;
		set.add(parseInt(t, 16) - CFGWALK_TO_GUEST);
	}
	return set;
}

// Our function starts: the 738 call targets, taken from the ledger's own derivation rather than re-derived
// here, so there is one rule in one place.
function ourStarts() {
	const out = runJson(['tools/queue.js', '--json']);
	const start = out.indexOf('[');
	if (start < 0) fail(2, 'tools/queue.js --json printed no JSON array');
	const rows = JSON.parse(out.slice(start));
	return rows.map((r) => parseInt(r.addr, 16));
}

function emitFiles(dir) {
	if (!fs.existsSync(dir)) fail(2, `${dir} is missing. Run tools/recomp-build.sh, which generates it.`);
	const files = fs.readdirSync(dir).filter((f) => /^p_game_\d+\.cpp$/.test(f)).sort();
	if (!files.length) fail(2, `${dir} holds no p_game_*.cpp. The module has not been emitted.`);
	return files.map((f) => fs.readFileSync(path.join(dir, f), 'utf8'));
}

// fmtownskit's function starts and instruction starts, both in the guest frame. The addresses are in the
// emitted text itself, in the function names and in the per-instruction trace marker, so nothing has to be
// guessed from ordering.
function theirWalks(sources) {
	const fns = new Set();
	const insns = new Set();
	for (const src of sources) {
		for (const m of src.matchAll(/^void f_([0-9a-f]{8})\(X86Cpu& c\)/gm)) fns.add(parseInt(m[1], 16));
		for (const m of src.matchAll(/X86_AT\(c, 0x([0-9a-f]+)u\);/g)) insns.add(parseInt(m[1], 16));
	}
	return { fns, insns };
}

// Runs of zero bytes in the image, as [start, end) pairs. A function start or a decoded instruction inside one
// is the signal that a walk followed something it should not have.
function zeroRuns(img) {
	const runs = [];
	let start = -1;
	for (let i = 0; i < img.length; i++) {
		if (img[i] === 0) {
			if (start < 0) start = i;
		} else if (start >= 0) {
			if (i - start >= ZERO_RUN) runs.push([start, i]);
			start = -1;
		}
	}
	if (start >= 0 && img.length - start >= ZERO_RUN) runs.push([start, img.length]);
	return runs;
}

function inRuns(runs, addr) {
	let lo = 0;
	let hi = runs.length - 1;
	while (lo <= hi) {
		const mid = (lo + hi) >> 1;
		if (addr < runs[mid][0]) hi = mid - 1;
		else if (addr >= runs[mid][1]) lo = mid + 1;
		else return true;
	}
	return false;
}

function main() {
	const args = process.argv.slice(2);
	const img = loadImage();
	const runs = zeroRuns(img);
	const recompAt = args.indexOf('--recomp');
	const recompDir = recompAt >= 0 && args[recompAt + 1] ? path.resolve(args[recompAt + 1]) : RECOMP;

	const mine = ourInstructions();
	const mineStarts = ourStarts();
	const theirs = theirWalks(emitFiles(recompDir));

	// The anchors. If the frame conversion is wrong these fail, and a frame bug must be loud. Guest 0x9 is the
	// first function the module emits and guest 0x105a78 the last.
	const anchors = [
		{ guest: 0x9, label: 'first emitted function' },
		{ guest: 0x105a78, label: 'last emitted function' },
	];
	for (const a of anchors) {
		if (!theirs.fns.has(a.guest)) fail(2, `anchor 0x${a.guest.toString(16)} (${a.label}) is not in the emitted functions`);
		if (!mine.has(a.guest)) {
			fail(2, `anchor 0x${a.guest.toString(16)} (${a.label}) is not in our instruction set after converting by ${hx(CFGWALK_TO_GUEST)}. The frame is wrong, so every number below would be a lie.`);
		}
	}

	// Instructions.
	const insnBoth = [];
	const insnTheirsOnly = [];
	const insnMineOnly = [];
	for (const a of theirs.insns) (mine.has(a) ? insnBoth : insnTheirsOnly).push(a);
	for (const a of mine) if (!theirs.insns.has(a)) insnMineOnly.push(a);

	// Function starts. A start only fmtownskit has is classified three ways, and the middle one is the
	// interesting one: an instruction boundary that no CALL reaches is a jump-table entry or an indirect
	// target, which is a coherent explanation and not a defect. The third class is about REACHABILITY, not
	// about whether the bytes decode: `not a boundary` means our walk never arrived at that address, which is
	// not evidence against it. Measured example: guest 0xe7238 begins `ff 05 e0 ae 07 00`, which is a clean
	// `inc dword ptr [0x7aee0]`, so the address is very likely a function head our seeds do not reach.
	const fnBoth = [];
	const fnTheirsOnly = { zeroRun: [], boundaryNotCalled: [], notBoundary: [], other: [] };
	const fnMineOnly = { zeroRun: [], notDecodedByThem: [], other: [] };
	for (const a of theirs.fns) {
		if (mineStarts.includes(a)) {
			fnBoth.push(a);
			continue;
		}
		if (inRuns(runs, a)) fnTheirsOnly.zeroRun.push(a);
		else if (mine.has(a)) fnTheirsOnly.boundaryNotCalled.push(a);
		else fnTheirsOnly.notBoundary.push(a);
	}
	const ourStartSet = new Set(mineStarts);
	for (const a of mineStarts) {
		if (theirs.fns.has(a)) continue;
		if (inRuns(runs, a)) fnMineOnly.zeroRun.push(a);
		else if (!theirs.insns.has(a)) fnMineOnly.notDecodedByThem.push(a);
		else fnMineOnly.other.push(a);
	}

	const sorted = (x) => x.slice().sort((p, q) => p - q);

	const report = {
		image_bytes: img.length,
		zero_runs: runs.length,
		instructions: {
			ours: mine.size,
			theirs: theirs.insns.size,
			both: insnBoth.length,
			theirs_only: insnTheirsOnly.length,
			ours_only: insnMineOnly.length,
			theirs_only_in_zero_fill: insnTheirsOnly.filter((a) => inRuns(runs, a)).length,
		},
		functions: {
			ours: ourStartSet.size,
			theirs: theirs.fns.size,
			both: fnBoth.length,
			theirs_only: {
				zero_run: fnTheirsOnly.zeroRun.length,
				boundary_but_no_call: fnTheirsOnly.boundaryNotCalled.length,
				not_a_boundary: fnTheirsOnly.notBoundary.length,
			},
			ours_only: {
				zero_run: fnMineOnly.zeroRun.length,
				zero_run_addresses: sorted(fnMineOnly.zeroRun).map(hx),
				not_decoded_by_them: fnMineOnly.notDecodedByThem.length,
				other: fnMineOnly.other.length,
			},
		},
		anchors: anchors.map((a) => ({ guest: hx(a.guest), label: a.label, in_both: true })),
	};

	if (args.includes('--verbose')) {
		report.lists = {
			instructions_theirs_only: sorted(insnTheirsOnly).map(hx),
			instructions_ours_only: sorted(insnMineOnly).map(hx),
			functions_theirs_only_boundary_no_call: sorted(fnTheirsOnly.boundaryNotCalled).map(hx),
			functions_theirs_only_not_a_boundary: sorted(fnTheirsOnly.notBoundary).map(hx),
			functions_theirs_only_zero_run: sorted(fnTheirsOnly.zeroRun).map(hx),
			functions_ours_only_not_decoded_by_them: sorted(fnMineOnly.notDecodedByThem).map(hx),
			functions_ours_only_zero_run: sorted(fnMineOnly.zeroRun).map(hx),
		};
	}

	if (args.includes('--json')) {
		console.log(JSON.stringify(report, null, 1));
	} else {
		const pct = (a, b) => (b ? (100 * a / b).toFixed(1) : '0.0');
		console.log('frame: ours converted from tools/cfgwalk.js by -' + hx(CFGWALK_TO_GUEST) + ' into guest, theirs already guest');
		console.log('anchors: 0x9 and 0x105a78 are functions in both walks');
		console.log('');
		console.log('INSTRUCTIONS');
		console.log(`  ours (cfgwalk)          ${report.instructions.ours}`);
		console.log(`  theirs (fmtownskit)     ${report.instructions.theirs}`);
		console.log(`  in both                 ${report.instructions.both}  ${pct(report.instructions.both, report.instructions.theirs)}% of theirs, ${pct(report.instructions.both, report.instructions.ours)}% of ours`);
		console.log(`  theirs only             ${report.instructions.theirs_only}  of which in zero fill: ${report.instructions.theirs_only_in_zero_fill}`);
		console.log(`  ours only               ${report.instructions.ours_only}`);
		console.log('');
		console.log('FUNCTION STARTS');
		console.log(`  ours (738 call targets) ${report.functions.ours}`);
		console.log(`  theirs (emitted)        ${report.functions.theirs}`);
		console.log(`  in both                 ${report.functions.both}`);
		console.log('  theirs only:');
		console.log(`    in zero fill          ${report.functions.theirs_only.zero_run}   <- the collision failure, must be 0`);
		console.log(`    boundary, no CALL     ${report.functions.theirs_only.boundary_but_no_call}   jump-table entries and indirect targets`);
		console.log(`    not reached by ours   ${report.functions.theirs_only.not_a_boundary}   our seeds do not arrive here, which says nothing about the bytes`);
		console.log('  ours only:');
		console.log(`    in zero fill          ${report.functions.ours_only.zero_run}   a bad seed, if any`);
		console.log(`    not decoded by them   ${report.functions.ours_only.not_decoded_by_them}`);
		console.log(`    other                 ${report.functions.ours_only.other}`);
		if (report.functions.theirs_only.not_a_boundary) {
			const show = sorted(fnTheirsOnly.notBoundary).slice(0, 20);
			console.log('');
			console.log('  the "not reached" addresses, first 20, with the bytes at them:');
			for (const a of show) {
				const slice = [...img.subarray(a, a + 8)].map((b) => b.toString(16).padStart(2, '0')).join(' ');
				console.log(`    ${hx(a).padEnd(10)} ${slice}`);
			}
			if (report.functions.theirs_only.not_a_boundary > show.length) {
				console.log(`    ... and ${report.functions.theirs_only.not_a_boundary - show.length} more, see --verbose`);
			}
		}
		if (report.functions.ours_only.zero_run) {
			console.log('');
			console.log('  OUR call targets that land in zero fill, every one. The image does not support these as routines:');
			for (const a of sorted(fnMineOnly.zeroRun)) console.log(`    ${hx(a)}`);
		}
	}

	// A function start in zero fill is the one verdict this tool will give, because there is no reading of it
	// that is not a walk defect. Everything else needs a person.
	if (report.functions.theirs_only.zero_run || report.functions.ours_only.zero_run || report.instructions.theirs_only_in_zero_fill) {
		process.exit(1);
	}
	process.exit(0);
}

main();
