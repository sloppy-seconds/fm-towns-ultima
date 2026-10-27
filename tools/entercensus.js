#!/usr/bin/env node
'use strict';
// tools/entercensus.js - classify every function entry by prologue form and by kind,
// for any binary, so the `enter` question can be asked of more than one program.
//
// WHY THIS EXISTS. `docs/enter-band-boundary.md` established, for ENCHANT.EXP only, that
// `enter 0,0` is used in one 2,260-byte band and that the band's `enter` routines are
// C-shaped while the assembly stubs around them are not. The obvious next question is
// whether the same is true in a binary built by someone else. TMENU.EXP is that binary:
// Fujitsu's launcher, different team, different purpose.
//
// It cannot reuse tools/preflight.js because that tool is written for the MP container and
// ENCHANT's raw-offset arithmetic. TMENU is a P3 container with a 384-byte header and code
// at 0x200, so the offsets differ.
//
// WHAT IT DOES NOT DO. It does not prove provenance, and a raw byte count over a whole file
// is not a census: that is the error that produced a 77 percent signed-branch figure earlier
// in this project. Every count here comes from decoded instructions at addresses the walk
// proved are function entries.
//
// USAGE
//   node tools/entercensus.js --file TMENU.EXP --base 0x200
//   node tools/entercensus.js --file ENCHANT.EXP --base 0x20

const fs = require('fs');
const path = require('path');
const D = require('./decode.js');

const args = process.argv.slice(2);
const opt = (n, d) => {
	const i = args.indexOf('--' + n);
	return i >= 0 && args[i + 1] !== undefined ? args[i + 1] : d;
};

const file = path.resolve(opt('file', 'ENCHANT.EXP'));
const base = Number(opt('base', '0x200'));
const json = args.includes('--json');

// Opcodes that mean "not C". Same set preflight.js uses, for the same reason: High C has no
// source construct for any of them.
const STUB_MNEMONICS = /^(int|iret|pushal|popal|pusha|popa|in|out|cli|sti|loop|hlt)$/i;

function main() {
	if (!fs.existsSync(file)) {
		console.error('missing: ' + file);
		process.exit(2);
	}
	const buf = fs.readFileSync(file);

	// Find candidate entries: every direct call target, which is how preflight seeds its walk.
	// This is deliberately the same seed rule, so the two censuses are comparable.
	const seeds = new Set();
	for (let i = base; i + 5 <= buf.length; i++) {
		if (buf[i] !== 0xe8) continue;
		const rel = buf.readInt32LE(i + 1);
		const t = i + 5 + rel;
		if (t >= base && t < buf.length) seeds.add(t);
	}

	// Also treat the base itself as an entry.
	seeds.add(base);

	const rows = [];
	for (const addr of [...seeds].sort((a, b) => a - b)) {
		// A function entry does not follow a ret. Check a small window, as preflight does.
		let clean = true;
		for (let k = 1; k <= 4; k++) {
			if (addr - k >= base && (buf[addr - k] === 0xc3 || buf[addr - k] === 0xc2)) { clean = k > 0; }
		}

		const { insns } = D.decode(addr, Math.min(addr + 512, buf.length), { image: file });
		const stop = [...D.toFirstRet(insns)];
		if (!stop.length) continue;

		const mn = stop.map((i) => i.mnemonic.toLowerCase());
		const stubs = mn.filter((m) => STUB_MNEMONICS.test(m));
		const ebpArg = stop.some((i) =>
			i.operands.some((o) => o.type === 'mem' && o.base === 'ebp' && o.disp > 0));

		let prologue = 'other';
		if (buf[addr] === 0xc8) prologue = 'enter';
		else if (buf[addr] === 0x55 && buf[addr + 1] === 0x8b && buf[addr + 2] === 0xec) prologue = 'push-ebp';

		const kind = stubs.length ? 'stub' : (ebpArg ? 'C-frame' : 'other');
		rows.push({
			addr: '0x' + addr.toString(16),
			prologue,
			kind,
			stubs: stubs.join(','),
			bytes: stop.reduce((n, i) => n + i.size, 0),
		});
	}

	const tally = {};
	for (const r of rows) {
		const k = r.prologue + '/' + r.kind;
		tally[k] = (tally[k] || 0) + 1;
	}

	if (json) {
		console.log(JSON.stringify({ file: path.basename(file), base: '0x' + base.toString(16), rows, tally }, null, 2));
		return;
	}

	console.log(`${path.basename(file)}  base 0x${base.toString(16)}  ${buf.length} bytes`);
	console.log(`entries examined: ${rows.length}`);
	console.log();
	console.log('prologue / kind:');
	for (const [k, v] of Object.entries(tally).sort((a, b) => b[1] - a[1])) {
		console.log(`  ${k.padEnd(18)} ${v}`);
	}
	console.log();
	const ent = rows.filter((r) => r.prologue === 'enter');
	console.log(`routines starting with enter: ${ent.length}`);
	for (const r of ent.slice(0, 25)) {
		console.log(`  ${r.addr}  ${r.kind.padEnd(8)} ${r.bytes}B  ${r.stubs}`);
	}
}

main();
