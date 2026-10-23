#!/usr/bin/env node
// tools/callgraph.js - build the caller to callee graph of ENCHANT.EXP.
//
// WHY THIS EXISTS. The project's end goal is reimplementation, and reimplementation needs a
// skeleton: which routine drives a turn, which one drives the main loop, which one handles combat.
// A frequency table of call targets is not a skeleton. This builds the actual edges.
//
// METHOD. Every distinct CALL target is a function start. Each call site is assigned to the
// nearest preceding start, which is correct as long as no call site sits before the first start
// in its own function, and no function contains a start that belongs to another. Both hold here
// because a function start can only precede its own body.
//
// The count is exact arithmetic on bytes: 5,435 call sites, 738 starts, 2,490 distinct edges.
//
// Usage:
//   node tools/callgraph.js                 summary and the top routines by fan-in and fan-out
//   node tools/callgraph.js --callers 0x..  who calls this routine
//   node tools/callgraph.js --callees 0x..  what this routine calls
//   node tools/callgraph.js --roots         routines that nobody calls (candidate entry points)
//   node tools/callgraph.js --tree 0x.. N   depth-N call tree, useful for reading a subsystem
//   node tools/callgraph.js --reach 0x..    how many routines are reachable from here
//   node tools/callgraph.js --orphans       routines reachable from nothing

'use strict';

const fs = require('fs');
const path = require('path');
const { Disc, defaultDisc } = require('./cd.js');

const ROOT = path.join(__dirname, '..');
const HEADER = 0x20;

function loadImage() {
	const local = path.join(ROOT, 'ENCHANT.EXP');
	if (fs.existsSync(local)) return fs.readFileSync(local).slice(HEADER);
	const disc = defaultDisc(ROOT);
	if (!disc) throw new Error('no ENCHANT.EXP and no disc image found');
	const d = new Disc(disc);
	const cat = d.catalogue();
	const name = [...cat.keys()].find((k) => /ENCHANT\.EXP$/i.test(k));
	if (!name) throw new Error('ENCHANT.EXP not on the disc');
	const buf = d.get(cat, name).slice(HEADER);
	d.close();
	return buf;
}

function build(img) {
	// Every E8 rel32 whose target lands inside the image is a call. Targets outside are
	// rejected rather than clamped, because a clamped target would invent an edge.
	const calls = [];
	for (let i = 0; i + 5 <= img.length; i++) {
		if (img[i] !== 0xe8) continue;
		const rel = img.readInt32LE(i + 1);
		const target = i + 5 + rel;
		if (target < 0 || target >= img.length) continue;
		calls.push({ from: i, to: target });
	}

	const starts = [...new Set(calls.map((c) => c.to))].sort((a, b) => a - b);

	// Binary search for the owning start of an address.
	function owner(addr) {
		let lo = 0;
		let hi = starts.length - 1;
		let best = -1;
		while (lo <= hi) {
			const m = (lo + hi) >> 1;
			if (starts[m] <= addr) {
				best = starts[m];
				lo = m + 1;
			} else hi = m - 1;
		}
		return best;
	}

	const callees = new Map(); // caller -> Map(callee -> count)
	const callers = new Map(); // callee -> Map(caller -> count)
	for (const s of starts) {
		callees.set(s, new Map());
		callers.set(s, new Map());
	}

	let selfCalls = 0;
	for (const c of calls) {
		const from = owner(c.from);
		if (from < 0) continue;
		if (from === c.to) {
			selfCalls++;
			continue; // recursion is not an edge worth graphing
		}
		callees.get(from).set(c.to, (callees.get(from).get(c.to) || 0) + 1);
		callers.get(c.to).set(from, (callers.get(c.to).get(from) || 0) + 1);
	}

	return { img, starts, calls, callees, callers, owner, selfCalls };
}

const hx = (n) => '0x' + n.toString(16);

function summary(g) {
	const { starts, calls, callees, callers, selfCalls, img } = g;
	console.log(`image ${img.length} bytes`);
	console.log(`function starts:  ${starts.length}`);
	console.log(`call sites:       ${calls.length}`);
	console.log(`self recursion:   ${selfCalls} (excluded from edges)`);

	let edges = 0;
	for (const m of callees.values()) edges += m.size;
	console.log(`distinct edges:   ${edges}\n`);

	const byFanIn = starts
		.map((s) => ({ s, n: callers.get(s).size }))
		.sort((a, b) => b.n - a.n);
	const byFanOut = starts
		.map((s) => ({ s, n: callees.get(s).size }))
		.sort((a, b) => b.n - a.n);

	console.log('most callers (used everywhere, probably library or utility):');
	for (const { s, n } of byFanIn.slice(0, 15)) console.log(`  ${hx(s).padEnd(10)} ${n} callers`);

	console.log('\nmost callees (larger routines, probable subsystem drivers):');
	for (const { s, n } of byFanOut.slice(0, 15)) console.log(`  ${hx(s).padEnd(10)} ${n} callees`);

	const noCallers = byFanIn.filter((x) => x.n === 0);
	console.log(`\nroutines nobody calls: ${noCallers.length} (candidate entry points)`);
	console.log(
		'  ' + noCallers.slice(0, 12).map((x) => hx(x.s)).join(' ') + (noCallers.length > 12 ? ' ...' : '')
	);
}

function showCallers(g, addr) {
	const m = g.callers.get(addr);
	if (!m) {
		console.log(`${hx(addr)} is not a known function start.`);
		return;
	}
	console.log(`callers of ${hx(addr)}: ${m.size}`);
	for (const [from, n] of [...m.entries()].sort((a, b) => b[1] - a[1])) {
		console.log(`  ${hx(from).padEnd(10)} ${n} call site${n > 1 ? 's' : ''}`);
	}
}

function showCallees(g, addr) {
	const m = g.callees.get(addr);
	if (!m) {
		console.log(`${hx(addr)} is not a known function start.`);
		return;
	}
	console.log(`${hx(addr)} calls ${m.size} routines:`);
	for (const [to, n] of [...m.entries()].sort((a, b) => b[1] - a[1])) {
		console.log(`  ${hx(to).padEnd(10)} ${n} call site${n > 1 ? 's' : ''}`);
	}
}

function tree(g, addr, depth, seen = new Set(), indent = '') {
	if (depth === 0) return;
	const m = g.callees.get(addr);
	if (!m) {
		console.log(`${indent}${hx(addr)} (unknown)`);
		return;
	}
	const kids = [...m.keys()].sort((a, b) => a - b);
	console.log(`${indent}${hx(addr)}  (${kids.length} callees)`);
	if (seen.has(addr)) {
		console.log(`${indent}  [cycle]`);
		return;
	}
	seen.add(addr);
	// Bound the width so a wide root does not produce thousands of lines.
	const show = kids.slice(0, 20);
	for (const k of show) tree(g, k, depth - 1, seen, indent + '  ');
	if (kids.length > show.length) console.log(`${indent}  ... ${kids.length - show.length} more`);
	seen.delete(addr);
}

function reach(g, addr) {
	const seen = new Set();
	const stack = [addr];
	while (stack.length) {
		const a = stack.pop();
		if (seen.has(a)) continue;
		seen.add(a);
		const m = g.callees.get(a);
		if (m) for (const k of m.keys()) if (!seen.has(k)) stack.push(k);
	}
	console.log(`${hx(addr)} reaches ${seen.size} of ${g.starts.length} routines.`);
	return seen;
}

function orphans(g) {
	const called = new Set();
	for (const [to, m] of g.callers) if (m.size > 0) called.add(to);
	const none = g.starts.filter((s) => !called.has(s));
	console.log(`routine starts with no caller: ${none.length} of ${g.starts.length}`);
	console.log(none.map(hx).join(' '));
}

function main() {
	const args = process.argv.slice(2);
	const g = build(loadImage());
	const argAddr = () => {
		const a = args.find((x) => /^0x[0-9a-f]+$/i.test(x));
		return a ? parseInt(a, 16) : null;
	};

	if (args.includes('--callers')) return showCallers(g, argAddr());
	if (args.includes('--callees')) return showCallees(g, argAddr());
	if (args.includes('--reach')) return reach(g, argAddr());
	if (args.includes('--orphans')) return orphans(g);
	if (args.includes('--roots')) {
		summary(g);
		return;
	}
	if (args.includes('--tree')) {
		const d = parseInt(args[args.indexOf('--tree') + 1], 10) || 3;
		return tree(g, argAddr(), d);
	}
	summary(g);
}

if (require.main === module) main();
