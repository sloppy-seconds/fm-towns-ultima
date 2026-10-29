#!/usr/bin/env node
// tools/cfgwalk.js - control-flow walk from verified entries.
//
// Why this exists. tools/sweep.js builds an instruction-boundary set from a list of CALL
// targets. That covers functions something calls directly and misses any function reached
// only by fall-through or an indirect jump. The concrete survivor: the false-positive site
// 0xe393e sits in the function at 0xe3904, which has one caller and is NOT a call target.
//
// This tool does what sweep.js cannot: it starts from verified entries and FOLLOWS control
// flow, so fall-through-reached code gets swept too.
//
// The algorithm:
//   1. Seed with every CALL rel32 target. These are proven entries, because the instruction
//      that reaches them exists.
//   2. For each work item (an address), decode one instruction at a time.
//   3. After each instruction, add its successors:
//        call rel32        -> target is a new work item; also fall through
//        jmp rel32         -> target only, no fall-through
//        jcc rel8/rel32    -> target AND fall-through
//        ret / jmp reg/mem -> terminator, no successors
//   4. Stop a path when it reaches an address already decoded, or an instruction whose
//      bytes look like data rather than code.
//
// Decoding is done by ndisasm on a window, one window per contiguous run. Calling ndisasm
// per instruction would be far too slow; instead the walk decodes from a start point until
// it hits a terminator, then restarts at the next queued address.
//
// Unresolved edges are counted and reported, never guessed. A jump through a register or a
// table is where the walk stops; this project records direct:indirect at 58:1.
//
// Usage:
//   node tools/cfgwalk.js                 run the walk, report coverage
//   node tools/cfgwalk.js --check 0xef4bb is this an instruction boundary per the walk
//   node tools/cfgwalk.js --at 0xe3904    show the walk from one entry
//   node tools/cfgwalk.js --retmap        who pops arguments: plain ret against ret imm16
//   node tools/cfgwalk.js --insns         every instruction start, one hex address per line
//   node tools/cfgwalk.js --refusals      every transfer the zero guard refused, one per line
//   node tools/cfgwalk.js --no-guard      follow transfers into zero fill anyway

'use strict';

const fs = require('fs');
const path = require('path');
const { execFileSync } = require('child_process');
const { Disc, defaultDisc } = require('./cd.js');
const { zeroRuns, DEFAULT_MIN } = require('./codelimits.js');

const ROOT = path.join(__dirname, '..');
// THIS TOOL'S FRAME IS FILE MINUS 0x20, WHICH IS GUEST + 0x1E0. Two outputs name addresses, and both now say
// which frame they are in, because one of them did not and it cost a session: `--refusals` printed file-0x20
// while tools/recondiff.js printed guest, so three refused seeds and seven bad seeds in zero fill looked like two
// different findings about the same bytes when they were the same three addresses. `--refusals` converts to the
// guest frame because it is parsed by tools/checkall.js and quoted beside other tools. `--check` takes and
// reports its argument in this tool's own frame, which is documented usage, so it states the frame instead.
const FILE_TO_GUEST = 0x1e0;
const hxGuest = (n) => '0x' + n.toString(16);
const HEADER = 0x20;
const LINE = /^([0-9A-Fa-f]{8})\s+([0-9A-Fa-f ]+?)\s{2,}(.*)$/;

// The largest single instruction on x86-32 is 15 bytes. A window of 64 bytes is enough to
// decode at least four instructions, which is what one decode call needs.
const WINDOW = 64;

function loadImage() {
	const local = path.join(ROOT, 'ENCHANT.EXP');
	if (fs.existsSync(local)) return fs.readFileSync(local).slice(HEADER);
	const disc = defaultDisc(ROOT);
	if (!disc) throw new Error('no ENCHANT.EXP and no disc .img found');
	const d = new Disc(disc);
	const cat = d.catalogue();
	const name = [...cat.keys()].find((k) => /ENCHANT\.EXP$/i.test(k));
	if (!name) throw new Error('ENCHANT.EXP not found on the disc');
	const buf = d.get(cat, name).slice(HEADER);
	d.close();
	return buf;
}

// THE ZERO GUARD. 75.6 percent of this image is zero fill, and zeros are valid x86: `00 00`
// decodes as `add [eax], al`, two bytes, forever, with no error and no disagreement between
// decoders. A descent that reaches zero fill therefore succeeds silently and endlessly, and
// every instruction it reports is real. docs/fmtownskit-and-seeds.md records the measured
// case: one seed produced a single 152,933-byte extent whose first byte was zero, and all
// 354,904 instructions it reported agreed with Capstone.
//
// The ranges are derived by tools/codelimits.js, which checkall.js asserts against
// docs/code-analysis.md, and they are derived from THIS buffer. That matters: zeroRuns
// returns offsets into whatever buffer it is given, and loadImage() has already removed the
// header, so addresses and ranges here are in the same frame by construction. Converting
// between frames is how this project has now made the same mistake twice.
//
// A transfer into a range is REFUSED AND NAMED, not silently dropped. That is the shape
// fmtownskit's `--no-code` landed in, and the difference matters: a silent skip lowers a
// count without saying so, which is indistinguishable from a smaller program.
function zeroRanges(img) {
	return zeroRuns(img, DEFAULT_MIN);
}

function inRanges(addr, ranges) {
	for (const [lo, hi] of ranges) if (addr >= lo && addr < hi) return true;
	return false;
}

// Per-path instruction decoding.
//
// A shared address-keyed cache was tried and given the WRONG ANSWER: 0xf9e78 decoded
// correctly on its own but the walk stepped from it to nowhere, because the entry had
// been filled from a window whose base was not an instruction boundary, and
// instruction lengths after the first line of such a window are garbage.
//
// The safe form is to decode a window only from an address the walk believes is a
// boundary, and to keep the resulting instructions for that path only. Concatenating
// windows along a path gives most of the speed without the correctness hazard.
const WINDOW_BIG = 512;
let pathCache = new Map();
const stats = { windows: 0 };

function refillPath(img, base) {
	pathCache = new Map();
	const tmp = '/var/tmp/cfgwin.bin';
	const end = Math.min(base + WINDOW_BIG, img.length);
	fs.writeFileSync(tmp, img.subarray(base, end));
	let out;
	try {
		out = execFileSync('ndisasm', ['-b32', '-w', '-o' + base, tmp], {
			encoding: 'utf8',
			maxBuffer: 8 * 1024 * 1024,
		});
	} catch {
		return;
	}
	stats.windows++;
	for (const line of out.split('\n')) {
		const m = LINE.exec(line);
		if (!m) continue;
		const a = parseInt(m[1], 16);
		const bytes = m[2].replace(/\s/g, '');
		pathCache.set(a, { size: bytes.length / 2, text: m[3].trim() });
	}
}

function decodeOne(img, addr) {
	if (addr < 0 || addr + 15 > img.length) return null;
	const hit = pathCache.get(addr);
	if (hit) return { addr, ...hit };
	refillPath(img, addr);
	const got = pathCache.get(addr);
	return got ? { addr, ...got } : null;
}

// Classify a decoded instruction's control-flow effect.
// Returns { kind, target, fallsThrough }.
function classify(ins) {
	const t = ins.text;
	// Unconditional direct jump.
	let m = /^jmp\s+(?:short\s+|near\s+)?0x([0-9a-f]+)$/i.exec(t);
	if (m) return { kind: 'jmp', target: parseInt(m[1], 16), fallsThrough: false };

	// Indirect jump: jmp reg, jmp [mem], jmp dword far [..]
	if (/^jmp\b/.test(t)) return { kind: 'indirect-jmp', target: null, fallsThrough: false };

	// Return and other terminators.
	if (/^ret/.test(t)) return { kind: 'ret', target: null, fallsThrough: false };
	if (/^(hlt|ud2)\b/.test(t)) return { kind: 'halt', target: null, fallsThrough: false };

	// Call: target is a function entry, and execution continues after.
	m = /^call\s+(?:near\s+)?0x([0-9a-f]+)$/i.exec(t);
	if (m) return { kind: 'call', target: parseInt(m[1], 16), fallsThrough: true };
	if (/^call\b/.test(t)) return { kind: 'indirect-call', target: null, fallsThrough: true };

	// Conditional jumps: jcc rel8/rel32. ndisasm prints the resolved target.
	m = /^j[a-z]+\s+(?:short\s+|near\s+)?0x([0-9a-f]+)$/i.exec(t);
	if (m && !/^jmp/.test(t)) {
		return { kind: 'jcc', target: parseInt(m[1], 16), fallsThrough: true };
	}

	return { kind: 'normal', target: null, fallsThrough: true };
}

// Does a function start here with the standard frame-pointer prologue?
//
// Only HALF the routines in this image do: 366 occurrences of 55 8b ec against 738 known routines, measured. So
// this returns true when a prologue is present and says nothing when it is absent. It is one positive signal, not
// a test for function heads.
function startsWithPrologue(img, addr) {
	const off = img.base !== undefined ? addr - img.base : addr;
	const code = Buffer.isBuffer(img) ? img : img.code || img.data;
	if (!code || off < 0 || off + 3 > code.length) return false;
	return code[off] === 0x55 && code[off + 1] === 0x8b && code[off + 2] === 0xec;
}

function callTargets(img) {
	const out = new Set();
	for (let i = 0; i < img.length - 5; i++) {
		if (img[i] !== 0xe8) continue;
		const t = (i + 5 + img.readInt32LE(i + 1)) >>> 0;
		if (t < img.length) out.add(t);
	}
	return out;
}

function walk(img, seeds, opts = {}) {
	const boundary = new Set();
	const noCode = opts.noCode || [];
	const refused = [];
	const work = [];
	for (const s of seeds) {
		if (inRanges(s, noCode)) {
			refused.push({ at: null, target: s, why: 'seed in zero fill' });
			continue;
		}
		work.push(s);
	}
	const queue = new Set(work);
	const unresolved = [];
	const visitedStarts = new Set();
	let decoded = 0;

	// Bounded so a runaway loop cannot hang the tool. 400k instructions is comfortably
	// more than the image can hold and still finishes.
	const LIMIT = opts.limit ?? 400000;
	let budget = LIMIT;

	while (work.length && budget > 0) {
		let addr = work.pop();
		queue.delete(addr);

		// Decode linearly from this address until a terminator or an already-seen
		// address. This is a path traversal, not a single instruction.
		let steps = 0;
		while (budget > 0) {
			if (visitedStarts.has(addr)) break;
			visitedStarts.add(addr);

			const ins = decodeOne(img, addr);
			if (!ins || ins.size === 0) break;
			budget--;
			decoded++;
			steps++;
			boundary.add(addr);

			const cf = classify(ins);

			// A call target is a function entry: queue it.
			if (cf.target !== null && (cf.kind === 'call' || cf.kind === 'jcc' || cf.kind === 'jmp')) {
				if (inRanges(cf.target, noCode)) {
					refused.push({ at: addr, target: cf.target, why: cf.kind + ' into zero fill' });
				} else if (cf.target >= 0 && cf.target < img.length && !queue.has(cf.target) && !visitedStarts.has(cf.target)) {
					work.push(cf.target);
					queue.add(cf.target);
				}
			}

			if (cf.kind === 'indirect-jmp' || cf.kind === 'indirect-call') {
				unresolved.push({ at: addr, kind: cf.kind, text: ins.text });
			}

			// Gap recovery. When a path terminates at a ret or an unconditional jmp, the
			// byte immediately after the instruction is very often the start of the next
			// function even though nothing `call`s it directly. Skipping a run of 0x90
			// padding and the 66 8B C0 / 8B C0 no-op pairs the compiler emits for
			// alignment, then treating the following byte as a boundary, recovers those.
			//
			// This is what makes 0xf9cb8 reachable: 0xf9cac is `jmp 0xf9cb0`, which lands
			// on a ret, and the real body starts after a `mov ax,ax` pad. No CALL target
			// points at it, so without this the whole function is lost.
			if (!cf.fallsThrough) {
				if (opts.gapRecover !== false) {
					let next = addr + ins.size;
					let skip = 0;
					// Padding is 0x90, or the two-byte no-ops 66 8B C0 / 8B C0.
					while (next + 2 < img.length && skip < 16) {
						if (img[next] === 0x90) { next++; skip++; continue; }
						if (img[next] === 0x66 && img[next + 1] === 0x8b && img[next + 2] === 0xc0) {
							next += 3; skip += 3; continue;
						}
						if (img[next] === 0x8b && img[next + 1] === 0xc0) { next += 2; skip += 2; continue; }
						break;
					}
					if (skip > 0 && next < img.length && !visitedStarts.has(next) && !queue.has(next)) {
						if (inRanges(next, noCode)) {
							refused.push({ at: addr, target: next, why: 'gap recovery into zero fill' });
						} else {
							work.push(next);
							queue.add(next);
						}
					}
				}
				break;
			}

			addr = addr + ins.size;
			// A path that runs too long is almost certainly a misdecode into data.
			if (steps > 20000) break;
		}
	}

	return { boundary, decoded, unresolved, budget, visitedStarts, refused };
}

// Refusals are reported, not just counted, because a guard that quietly lowers a number
// reads exactly like a smaller program. The first five name themselves.
function reportRefusals(r) {
	const n = r.refused.length;
	console.log(`  zero-region refusals: ${n}` + (n ? '  (transfers into zero fill were not followed)' : ''));
	for (const x of r.refused.slice(0, 5)) {
		const from = x.at === null ? 'seed' : '0x' + x.at.toString(16);
		console.log(`    ${from} -> 0x${x.target.toString(16)}  ${x.why}`);
	}
}

function main() {
	const img = loadImage();
	const args = process.argv.slice(2);
	const noGuard = args.includes('--no-guard');
	const ranges = noGuard ? [] : zeroRanges(img);
	const walkOpts = { noCode: ranges };

	if (args.includes('--check')) {
		const i = args.indexOf('--check');
		const check = Number(args[i + 1]);
		const seeds = callTargets(img);
		const r = walk(img, seeds, walkOpts);
		const isBoundary = r.boundary.has(check);
		const isCallTarget = seeds.has(check);
		const prologueHere = startsWithPrologue(img, check);

		// AN ADDRESS BEING A BOUNDARY IS NOT THE SAME AS BEING A FUNCTION HEAD. That distinction was blurred in
		// this project until it was measured. Of nine published addresses, five have no frame pointer within
		// 160 bytes, and three land inside an instruction's operands rather than on a boundary. Only half of
		// the 738 known routines begin with `push ebp; mov ebp, esp`, so a prologue test cannot prove absence
		// either. See docs/highc-codegen.md for the counts.
		//
		// The answer therefore names which kind of address this is, and says what it cannot tell you.
		console.log(`frame: guest, which is this tool's addresses minus ${hxGuest(FILE_TO_GUEST)} (this tool works on the file minus ${hxGuest(HEADER)})`);
		console.log(`walk from ${seeds.size} CALL targets`);
		console.log(`  instructions decoded: ${r.decoded}`);
		console.log(`  distinct boundaries:  ${r.boundary.size}`);
		console.log(`  unresolved edges:     ${r.unresolved.length}`);
		reportRefusals(r);
		console.log(`  is 0x${check.toString(16)} a boundary:    ${isBoundary}`);
		console.log(`  is 0x${check.toString(16)} a CALL target: ${isCallTarget}`);
		console.log(`  0x${check.toString(16)} starts with a standard prologue: ${prologueHere}`);
		console.log('');
		if (isCallTarget) {
			console.log('  VERDICT: function head. Something CALLs it, which settles it.');
		} else if (isBoundary && prologueHere) {
			console.log('  VERDICT: function head, by prologue and boundary together.');
		} else if (isBoundary) {
			console.log('  VERDICT: instruction boundary, but NOT shown to be a function head.');
			console.log('           Half the routines have no frame pointer, so an absent prologue proves nothing.');
		} else {
			console.log('  VERDICT: NOT an instruction boundary. The address falls inside an instruction.');
			console.log('           A claim that this address names a function must restate as "the instruction');
			console.log('           that identifies it", not "where it starts".');
		}
		return;
	}

	if (args.includes('--refusals')) {
		// One line per refused transfer, in a shape a check can assert. This exists so the
		// guard can be tested by its effect: turning it off makes these lines disappear, and
		// a guard that quietly stopped firing would otherwise only lower a number.
		const seeds = callTargets(img);
		const r = walk(img, seeds, walkOpts);
		console.log(`frame: guest, converted from this tool's own frame by -${hxGuest(FILE_TO_GUEST)}`);
		for (const x of r.refused) {
			const from = x.at === null ? 'seed' : hxGuest(x.at - FILE_TO_GUEST);
			console.log(`${from} ${hxGuest(x.target - FILE_TO_GUEST)} ${x.why}`);
		}
		console.log(`total ${r.refused.length}`);
		return;
	}

	if (args.includes('--insns')) {
		// ONE LINE PER INSTRUCTION START, for tools/recondiff.js. Only addresses, because that is the whole
		// comparison: which bytes this walk calls an instruction and which bytes fmtownskit's walk calls one.
		//
		// THE FRAME IS THIS TOOL'S, which is the file minus 0x20 and therefore GUEST + 0x1E0. The converter is the
		// caller, deliberately, because a silent conversion here is the failure this project has had four times:
		// a mismatched frame yields a clean empty intersection rather than an error. Measured for the record:
		// `--check 0x1e9` and `--check 0x105c58` are call targets here, and those are guest 0x9 and 0x105a78.
		const seeds = callTargets(img);
		const r = walk(img, seeds, walkOpts);
		const bounds = [...r.boundary].sort((a, b) => a - b);
		for (const a of bounds) console.log(a.toString(16));
		return;
	}

	if (args.includes('--retmap')) {
		// WHO POPS THE ARGUMENTS. Two conventions look identical in a byte scan and different in an instruction
		// stream: `c3` returns plainly and the caller cleans, `c2 imm16` returns and pops the arguments itself.
		// A byte count of `c2` overestimates the second, because 0xc2 turns up inside data and inside longer
		// instructions. 341 of 1365 looked like a tidy one-third split, which is exactly why it needed checking
		// rather than quoting.
		//
		// So this counts only where the walk has PROVED an instruction starts, and asks ndisasm what the
		// instruction at that boundary actually is.
		const seeds = callTargets(img);
		const r = walk(img, seeds, walkOpts);
		console.log(`walk from ${seeds.size} CALL targets`);
		console.log(`  instructions decoded: ${r.decoded}`);
		console.log(`  distinct boundaries:  ${r.boundary.size}`);
		reportRefusals(r);

		const bounds = [...r.boundary].sort((a, b) => a - b);
		let plain = 0;
		let pops = 0;
		const popSizes = new Map();
		const popAt = [];
		for (const addr of bounds) {
			const ins = decodeOne(img, addr);
			if (!ins) continue;
			const text = (ins.text || '').trim().toLowerCase();
			if (!/^ret/.test(text)) continue;
			const m = /^ret\s+(?:0x)?([0-9a-f]+)/.exec(text);
			if (m) {
				pops++;
				const n = parseInt(m[1], 16);
				popSizes.set(n, (popSizes.get(n) || 0) + 1);
				popAt.push(addr);
			} else {
				plain++;
			}
		}
		const total = plain + pops;
		console.log('');
		console.log('  ret instructions at proved boundaries: ' + total);
		console.log('    plain ret   (caller cleans): ' + plain + '  ' + (total ? (100 * plain / total).toFixed(1) : '0') + '%');
		console.log('    ret imm16   (callee pops):   ' + pops + '  ' + (total ? (100 * pops / total).toFixed(1) : '0') + '%');
		if (popSizes.size) {
			const sizes = [...popSizes.entries()].sort((a, b) => b[1] - a[1]);
			console.log('    argument bytes popped, commonest first: ' + sizes.slice(0, 10).map(([n, c]) => n + 'x' + c).join(' '));
		}
		// Cluster the callee-pops sites by 64K region, so a split that follows ownership shows up.
		const regions = new Map();
		for (const a of popAt) {
			const k = (a >> 16) << 16;
			regions.set(k, (regions.get(k) || 0) + 1);
		}
		console.log('');
		console.log('  callee-pops sites by 64K region:');
		for (const k of [...regions.keys()].sort((a, b) => a - b)) {
			console.log('    0x' + k.toString(16).padStart(6, '0') + ': ' + regions.get(k));
		}
		console.log('');
		console.log('  A split that follows ownership would cluster in the library regions. One that spreads');
		console.log('  through the game code is a compiler choice, not two codebases.');
		return;
	}

	if (args.includes('--at')) {
		const i = args.indexOf('--at');
		const entry = Number(args[i + 1]);
		const r = walk(img, new Set([entry]), walkOpts);
		console.log(`walk from 0x${entry.toString(16)}`);
		console.log(`  instructions decoded: ${r.decoded}`);
		console.log(`  distinct boundaries:  ${r.boundary.size}`);
		console.log(`  unresolved edges:     ${r.unresolved.length}`);
		reportRefusals(r);
		const sorted = [...r.boundary].sort((a, b) => a - b);
		console.log(`  first: ${sorted.slice(0, 6).map((a) => '0x' + a.toString(16)).join(' ')}`);
		console.log(`  last:  ${sorted.slice(-6).map((a) => '0x' + a.toString(16)).join(' ')}`);
		return;
	}

	const seeds = callTargets(img);
	console.log(`image ${img.length} bytes`);
	console.log(`seeding with ${seeds.size} CALL targets\n`);
	const t0 = Date.now();
	const r = walk(img, seeds, walkOpts);
	const ms = Date.now() - t0;

	console.log(`instructions decoded: ${r.decoded}`);
	console.log(`distinct boundaries:  ${r.boundary.size}`);
	console.log(`unresolved edges:     ${r.unresolved.length}`);
	reportRefusals(r);
	console.log(`budget remaining:     ${r.budget}`);
	console.log(`elapsed:              ${ms} ms`);

	// Coverage of the 85 randMod sites, which is the concrete thing this was built for.
	const TARGET = 0xe1c5c;
	const sites = [];
	for (let i = 0; i < img.length - 5; i++) {
		if (img[i] !== 0xe8) continue;
		if (((i + 5 + img.readInt32LE(i + 1)) >>> 0) === TARGET) sites.push(i);
	}
	const keep = sites.filter((s) => r.boundary.has(s));
	console.log(
		`\nrandMod sites: ${sites.length} raw -> ${keep.length} on real boundaries`
	);
	const dropped = sites.filter((s) => !r.boundary.has(s));
	if (dropped.length) {
		console.log(
			`  rejected: ${dropped.map((s) => '0x' + (s + 0x20).toString(16)).join(' ')}`
		);
	}

	console.log(`\nunresolved indirect branches: ${r.unresolved.length}`);
	for (const u of r.unresolved.slice(0, 12)) {
		console.log(`  0x${(u.at + 0x20).toString(16)}  ${u.kind}  ${u.text}`);
	}
}

// Exported so a caller that asks about many addresses can build the walk once.
// `preflight.js` used to spawn this tool per address to answer "is this a boundary",
// and a full call-graph walk costs ~1.4s, so seven questions cost ten seconds. The
// walk is identical every time, so it is built once and the boundary set is queried
// in memory.
module.exports = { loadImage, callTargets, walk, startsWithPrologue };

if (require.main === module) main();
