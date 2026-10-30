#!/usr/bin/env node
// tools/frameanalysis.js - what decides whether High C emits a frame pointer?
//
// WHY THIS EXISTS. The image contains 366 standard prologues (push ebp; mov ebp,esp) against 738 routines
// reached by a CALL. So the compiler emits a frame for half the functions and not the other half, and the
// question is what the discriminator is.
//
// Getting the rule would do two things. It would let tools predict where a function starts without needing a
// prologue, which matters because a prologue scan has a 50 percent false-negative rate. And it would tell a
// compiler experiment exactly what to vary, which is cheaper than trying switches until something matches.
//
// THE HYPOTHESES, each of which produces a different signature:
//
//   locals      a frame is emitted only when the function has negative-offset locals, so the tell is any
//               [ebp-N] reference. A function with no locals reads arguments at [ebp+8] or not at all.
//   calls       a frame is emitted only when the function makes a call, since a call needs a saved context.
//   size        a frame is emitted only above some instruction count, as padding or a heuristic.
//   none        there is no static rule and the choice depends on the source, which is what a compiler
//               experiment would then have to reproduce rather than predict.
//
// WHAT COUNTS AS A ROUTINE HERE. Every CALL target the walk found is a routine entry. Its body is the
// instructions the walk decoded from that entry until a return, which is why the walk is used rather than a
// linear sweep: a sweep would run past a return into whatever follows.
//
// Usage:
//   node tools/frameanalysis.js             the report
//   node tools/frameanalysis.js --csv       one row per routine, for eyeballing
//   node tools/frameanalysis.js --at 0xf25b4  detail for one routine

'use strict';

const fs = require('fs');
const path = require('path');
const { Disc, defaultDisc } = require('./cd.js');
const { decode, format } = require('./decode.js');

const ROOT = path.join(__dirname, '..');
const HEADER = 0x20;

const args = process.argv.slice(2);

function loadImage() {
	const local = path.join(ROOT, 'ENCHANT.EXP');
	if (fs.existsSync(local)) return fs.readFileSync(local).slice(HEADER);
	const disc = defaultDisc();
	const buf = disc.readFile('ENCHANT.EXP');
	return buf.slice(HEADER);
}

// Decode a window with the shared decoder (plan item 4h). One call per run
// rather than per instruction, and the window is written to a pid-scoped temp
// file so the decoder reads exactly these bytes at exactly this address.
function decodeWindow(img, addr, len) {
	const end = Math.min(addr + len, img.length);
	const slice = img.subarray(addr, end);
	const tmp = path.join('/var/tmp', 'fa-' + process.pid + '.bin');
	fs.writeFileSync(tmp, slice);
	let ins = [];
	try {
		({ insns: ins } = decode(0, slice.length, { image: tmp }));
		ins = ins.map((i) => ({ ...i, addr: i.addr + addr }));
	} finally {
		fs.unlinkSync(tmp);
	}
	return ins;
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

// The body of one routine: decode from its entry and stop at the first return or an unconditional jmp.
// This is an approximation and is labelled one. A routine with branches has code after a jmp that belongs to
// it, so sizes here are LOWER bounds. That is the safe direction for a size hypothesis, since a lower bound
// cannot manufacture a correlation out of padding.
function routineBody(img, entry, maxLen = 4096) {
	const ins = decodeWindow(img, entry, maxLen);
	const body = [];
	for (const i of ins) {
		body.push(i);
		if (/^ret/.test(i.mnemonic)) break;
		if (i.mnemonic === 'jmp' && i.operands.some((o) => o.type === 'imm')) break;
		if (body.length > 400) break;
	}
	return body;
}

const isReg = (op, name) => op && op.type === 'reg' && op.name === name;
// index===null keeps the old regex semantics: `[ebp+8]` is an argument slot,
// `[ebp+ecx*4+8]` is an array through a base pointer and was never counted.
const ebpDisp = (routine, test) => routine.some((i) => i.operands.some(
	(o) => o.type === 'mem' && o.base === 'ebp' && o.index === null && o.disp !== null && test(o.disp)));

function classify(routine) {
	const t0 = routine[0], t1 = routine[1];
	return {
		framed: routine.length > 1 && t0.mnemonic === 'push' && isReg(t0.operands[0], 'ebp') &&
			t1.mnemonic === 'mov' && isReg(t1.operands[0], 'ebp') && isReg(t1.operands[1], 'esp'),
		// A local is a negative-displacement read or write off ebp. Arguments are positive.
		locals: ebpDisp(routine, (d) => d < 0),
		args: ebpDisp(routine, (d) => d > 0),
		espArgs: routine.some((i) => i.operands.some(
			(o) => o.type === 'mem' && o.base === 'esp' && o.disp !== null && o.disp > 0)),
		calls: routine.some((i) => i.mnemonic === 'call'),
		size: routine.length,
		prologueBytes: routine.slice(0, 3).reduce((n, i) => n + i.size, 0),
	};
}

function main() {
	const img = loadImage();
	const seeds = [...callTargets(img)].sort((a, b) => a - b);

	const rows = [];
	for (const entry of seeds) {
		const body = routineBody(img, entry);
		if (!body.length) continue;
		const c = classify(body);
		rows.push({ entry, ...c });
	}

	if (args.includes('--at')) {
		const want = Number(args[args.indexOf('--at') + 1]);
		const body = routineBody(img, want);
		console.log('routine at 0x' + want.toString(16) + ': ' + body.length + ' instructions');
		for (const i of body) console.log('  ' + format(i));
		return;
	}

	if (args.includes('--csv')) {
		console.log('entry,framed,locals,args,espArgs,calls,size');
		for (const r of rows) {
			console.log([r.entry.toString(16), r.framed, r.locals, r.args, r.espArgs, r.calls, r.size].join(','));
		}
		return;
	}

	const n = rows.length;
	const framed = rows.filter((r) => r.framed);
	const unframed = rows.filter((r) => !r.framed);
	console.log(`routines examined: ${n}`);
	console.log(`  framed:   ${framed.length}  (${(100 * framed.length / n).toFixed(1)}%)`);
	console.log(`  unframed: ${unframed.length}  (${(100 * unframed.length / n).toFixed(1)}%)`);
	console.log('');

	// Each hypothesis is scored by how cleanly it separates framed from unframed.
	function table(name, pred) {
		const yes = rows.filter(pred);
		const no = rows.filter((r) => !pred(r));
		const yf = yes.filter((r) => r.framed).length;
		const nf = no.filter((r) => r.framed).length;
		const py = yes.length ? yf / yes.length : 0;
		const pn = no.length ? nf / no.length : 0;
		console.log(`${name}`);
		console.log(`  has it:  ${String(yes.length).padStart(4)} routines, ${(100 * py).toFixed(1).padStart(5)}% framed`);
		console.log(`  lacks it:${String(no.length).padStart(4)} routines, ${(100 * pn).toFixed(1).padStart(5)}% framed`);
		console.log(`  separation: ${(Math.abs(py - pn) * 100).toFixed(1)} points`);
		console.log('');
		return Math.abs(py - pn);
	}

	const sLocals = table('HYPOTHESIS: has negative-offset locals', (r) => r.locals);
	const sCalls = table('HYPOTHESIS: makes a call', (r) => r.calls);
	const sArgs = table('HYPOTHESIS: reads arguments at [ebp+N]', (r) => r.args);

	// Size: compare the distributions rather than threshold-hunting, so there is no cherry-picking.
	const sizes = (list) => {
		const s = list.map((r) => r.size).sort((a, b) => a - b);
		if (!s.length) return { n: 0 };
		return {
			n: s.length,
			min: s[0],
			q1: s[Math.floor(s.length * 0.25)],
			median: s[Math.floor(s.length * 0.5)],
			q3: s[Math.floor(s.length * 0.75)],
			max: s[s.length - 1],
			mean: s.reduce((a, b) => a + b, 0) / s.length,
		};
	};
	const fz = sizes(framed);
	const uz = sizes(unframed);
	console.log('HYPOTHESIS: instruction count (lower bound, stops at first return)');
	console.log(`  framed:   n=${fz.n} min=${fz.min} q1=${fz.q1} median=${fz.median} q3=${fz.q3} max=${fz.max} mean=${fz.mean.toFixed(1)}`);
	console.log(`  unframed: n=${uz.n} min=${uz.min} q1=${uz.q1} median=${uz.median} q3=${uz.q3} max=${uz.max} mean=${uz.mean.toFixed(1)}`);
	console.log('');

	console.log('WHICH HYPOTHESIS WINS');
	console.log(`  locals      ${sLocals.toFixed(2)}`);
	console.log(`  calls       ${sCalls.toFixed(2)}`);
	console.log(`  ebp args    ${sArgs.toFixed(2)}`);
	console.log('  A separation near 1.00 means the property almost perfectly predicts the frame.');
	console.log('  A separation near 0.00 means the two are unrelated and the choice is not static.');
}

main();
