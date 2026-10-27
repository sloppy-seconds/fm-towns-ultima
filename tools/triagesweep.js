#!/usr/bin/env node
'use strict';
// tools/triagesweep.js - read every ranked routine's TBIOS calls and shared globals in one pass.
//
// WHY THIS EXISTS. Naming routines one at a time through tools/tbios-read.js is bounded work but
// it costs a round trip per routine, and funtriage already knows which forty call at least one
// TBIOS stub. This prints, for every one of them, the set of distinct AH values it reaches
// directly and the data addresses it writes, so a whole batch can be read at once and the
// routines that touch the same handlers group themselves.
//
// The grouping is the point. The rectangle cluster (docs/rectangle-cluster.md) was four
// routines sharing AH 0x46, and reading them together produced a mechanism rather than four
// names. This finds the other such groups.
//
// Usage:
//   node tools/triagesweep.js --index refindex.json
//   node tools/triagesweep.js --index refindex.json --json

const fs = require('fs');
const path = require('path');
const { decode } = require('./decode.js');
const { gameAhValues, table, loadTbios } = require('./tbios.js');

const ROOT = path.join(__dirname, '..');
const EXE = path.join(ROOT, 'ENCHANT.EXP');

const AH_WINDOW = 32;

function stubAh(exe, addr) {
	for (let i = addr; i < addr + AH_WINDOW && i + 9 <= exe.length; i++) {
		if (exe[i] === 0xb4 && exe[i + 2] === 0x0f && exe[i + 3] === 0xa0 &&
			exe[i + 4] === 0x68 && exe[i + 5] === 0x10 && exe[i + 6] === 0x01) {
			return exe[i + 1];
		}
	}
	return null;
}

// Same boundary rule as tbios-read.js: a routine ends at its last ret, detected by what
// follows it. Reading past the boundary made a per-function AH set a count of everything
// downstream, which is how 0xe60d0 was first reported as calling AH 0x46 directly.
function callsOf(exe, at, limit = 0x600) {
	const { insns } = decode(at, Math.min(at + limit, exe.length), { image: EXE });
	const out = [];
	for (const ins of insns) {
		if (/^call$/i.test(ins.mnemonic)) {
			const op = ins.operands.find((o) => o.type === 'imm');
			if (op) out.push(op.value);
		}
		const w = /^mov$/i.test(ins.mnemonic) && ins.operands[0] && ins.operands[0].type === 'mem' &&
			!ins.operands[0].base && !ins.operands[0].index;
		if (w) out.push({ write: ins.operands[0].disp });
		if (/^ret/i.test(ins.mnemonic)) {
			const next = insns[insns.indexOf(ins) + 1];
			if (!next || /^int3$/i.test(next.mnemonic) || /^nop$/i.test(next.mnemonic)) break;
			const isPrologue = /^push$/i.test(next.mnemonic) &&
				/^(ebp|ebx|esi|edi)$/i.test((next.operands[0] || {}).name || '');
			const isPrelude = /^mov$/i.test(next.mnemonic) && next.operands.length === 2 &&
				next.operands[0].type === 'reg' && next.operands[1].type === 'reg' &&
				next.operands[0].name === next.operands[1].name;
			if (isPrologue || isPrelude) break;
			if (ins.addr > at + 0x200) break;
		}
	}
	return out;
}

function main() {
	const argv = process.argv.slice(2);
	const argOf = (k) => {
		const i = argv.indexOf(k);
		return i >= 0 ? argv[i + 1] : null;
	};
	const index = argOf('--index') || 'refindex.json';
	if (!fs.existsSync(index)) {
		console.error('no index at ' + index + ': run ./tools/.venv/bin/python3 tools/refindex.py refindex.json --seeds <file> first');
		return 2;
	}
	const exe = fs.readFileSync(EXE);
	const byAh = new Map(table(loadTbios()).map((r) => [r.ah, r.off]));
	const idx = JSON.parse(fs.readFileSync(index, 'utf8'));
	const fns = idx.functions ? Object.keys(idx.functions) : Object.keys(idx);

	const rows = [];
	for (const f of fns) {
		// refindex.py writes the function address as BARE HEX with no 0x prefix: "102804".
		// Parsing that as decimal gives 102804, a valid-looking address in the header, and the
		// decoder then reads the MP signature as instructions. Read it as hex, always.
		const at = parseInt(f, 16);
		const calls = callsOf(exe, at);
		const ahs = new Set();
		const writes = new Set();
		for (const c of calls) {
			if (typeof c === 'object') {
				if (c.write !== undefined && c.write >= 0x10000) writes.add(c.write);
				continue;
			}
			const ah = stubAh(exe, c);
			if (ah !== null) ahs.add(ah);
		}
		if (!ahs.size) continue;
		rows.push({ at, ahs: [...ahs].sort((a, b) => a - b), writes: [...writes].sort((a, b) => a - b) });
	}

	// Group by the AH signature: routines sharing a set of handlers are candidates for one
	// mechanism, which is how the rectangle cluster was found.
	const groups = new Map();
	for (const r of rows) {
		const key = r.ahs.map((a) => '0x' + a.toString(16)).join(' ');
		if (!groups.has(key)) groups.set(key, []);
		groups.get(key).push(r);
	}

	if (argv.includes('--json')) {
		console.log(JSON.stringify({
			routines: rows.map((r) => ({
				at: '0x' + r.at.toString(16),
				ah: r.ahs.map((a) => '0x' + a.toString(16)),
				writes: r.writes.map((w) => '0x' + w.toString(16)),
			})),
		}, null, 1));
		return 0;
	}

	console.log(rows.length + ' routines call at least one TBIOS stub directly\n');
	console.log('AH signature (shared sets first, >=2 routines are candidate mechanisms)');
	const ordered = [...groups.entries()].sort((a, b) => b[1].length - a[1].length);
	for (const [key, list] of ordered) {
		const handlers = list[0].ahs.map((a) => 'AH0x' + a.toString(16) + '->0x' +
			(byAh.get(a) !== undefined ? byAh.get(a).toString(16) : '?')).join(' ');
		console.log('  [' + list.length + '] ' + key);
		console.log('      ' + handlers);
		for (const r of list) {
			console.log('      0x' + r.at.toString(16) +
				(r.writes.length ? '   writes ' + r.writes.slice(0, 6).map((w) => '0x' + w.toString(16)).join(' ') : ''));
		}
	}
	return 0;
}

if (require.main === module) process.exit(main());
