#!/usr/bin/env node
// tools/peek.js - read character record fields from a running game, reliably.
//
// WHY THIS EXISTS. The first fight capture used a shell function with a `sed` to parse MD output, and
// every sample it took logged -1. It failed silently, ran for the whole fight, and produced eight files
// of nothing. The parser here is the one used successfully all session.
//
// The failures that version had, each of which is handled below:
//
//   1. The `MD` output line format varies: the first line of each 16-line block is prefixed with '>',
//      the rest are not, and the byte columns are followed by '|' and an ASCII rendering.
//   2. The record occasionally reads as FF while the game is rewriting it, so a single read is not
//      enough. Reads are retried until a non-FF value appears or the attempts run out.
//   3. Reading a 4-byte value at an address that is not a field start returns garbage rather than
//      failing. The addresses below are the verified ones, not derived ones.
//
// Field addresses, and how each was verified:
//
//   0xcde81  HP          verified against the game's status screen
//   0xcde85  max HP      inferred from position, adjacent to HP
//   0xcde89  EXPERIENCE  verified against the status screen, which labels it E
//   0xcde8d  FOOD        verified, fixed point times 100, the screen truncates
//   0xcde91  GOLD        verified against the status screen
//   0xcdf6b  PLAYER_X    verified by one west step decrementing it by one
//   0xcdf6f  PLAYER_Y    verified by the same step leaving it unchanged
//   0xcdf53  MAP         unverified
//   0xdfc78  RNG seed    verified as the LCG state by finding consecutive samples on the chain
//
// Usage:
//   node tools/peek.js              all fields, one line each
//   node tools/peek.js --kv         key=value lines, for the capture script
//   node tools/peek.js --json       one JSON object
//   node tools/peek.js hp food      only the named fields
//
// Exits non-zero if a field could not be read, so a caller can tell "zero" from "failed".

'use strict';

const { execFileSync } = require('child_process');

const API = process.env.FMTOWNS_API || 'http://127.0.0.1:8080';

// Addresses are DS-relative. DS was 0014 with linear base 0x400000 when these were verified.
const FIELDS = {
	hp: 0xcde81,
	maxhp: 0xcde85,
	exp: 0xcde89,
	food: 0xcde8d,
	gold: 0xcde91,
	px: 0xcdf6b,
	py: 0xcdf6f,
	map: 0xcdf53,
	rng: 0xdfc78,
};

function apiCmd(line) {
	const out = execFileSync(
		'curl',
		['-s', '-m', '20', '-X', 'POST', API + '/api/cmd', '-H', 'Content-Type: application/json',
			'-d', JSON.stringify({ line })],
		{ encoding: 'utf8', stdio: ['ignore', 'pipe', 'pipe'] }
	);
	return JSON.parse(out);
}

// Pull the first four byte columns out of one MD line.
//
// The MD reply is not alone in the command output. With DBLOG and AUTODISASMR running, every instruction
// and register dump is also echoed, so a single MD call returns hundreds of lines and the 16 that matter
// are buried among them. An MD line is identifiable: it carries a literal '|' between the hex columns and
// the ASCII rendering, and a trace line never does. Requiring the '|' is what makes this work while a
// trace is running, and the first version of this failed for exactly that reason.
function parseMdBytes(line) {
	// ">0014:000CDE81 81 01 00 00 90 01 00 00 ...|...."
	if (!line.includes('|')) return null;
	const m = /[0-9A-Fa-f]{4}:[0-9A-Fa-f]{8}\s+((?:[0-9A-Fa-f]{2}\s+){4})/.exec(line);
	if (!m) return null;
	const parts = m[1].trim().split(/\s+/);
	if (parts.length < 4) return null;
	const b = parts.slice(0, 4).map((x) => parseInt(x, 16));
	if (b.some((x) => Number.isNaN(x))) return null;
	return (b[0] | (b[1] << 8) | (b[2] << 16) | (b[3] << 24)) >>> 0;
}

// Read one dword, retrying past the FF the game briefly writes while updating the record.
function readDword(addr, attempts = 5) {
	let sawFf = false;
	for (let i = 0; i < attempts; i++) {
		let res;
		try {
			res = apiCmd('MD 14:' + addr.toString(16));
		} catch {
			continue;
		}
		const lines = res.output || [];
		for (const line of lines) {
			const v = parseMdBytes(line);
			if (v === null) continue;
			if (v === 0xffffffff) {
				sawFf = true;
				continue;
			}
			return { ok: true, value: v };
		}
	}
	return { ok: false, reason: sawFf ? 'only FF seen' : 'unparseable' };
}

function main() {
	const args = process.argv.slice(2);
	const kv = args.includes('--kv');
	const json = args.includes('--json');
	const named = args.filter((a) => !a.startsWith('--'));
	const wanted = named.length ? named : Object.keys(FIELDS);

	const result = {};
	let failed = 0;
	for (const name of wanted) {
		const addr = FIELDS[name];
		if (addr === undefined) {
			console.error('unknown field: ' + name);
			failed++;
			continue;
		}
		const r = readDword(addr);
		if (!r.ok) {
			failed++;
			console.error(`could not read ${name} at 0x${addr.toString(16)}: ${r.reason}`);
			result[name] = null;
		} else {
			result[name] = r.value;
		}
	}

	if (json) {
		console.log(JSON.stringify(result));
	} else if (kv) {
		for (const [k, v] of Object.entries(result)) console.log(`${k}=${v === null ? -1 : v}`);
	} else {
		for (const [k, v] of Object.entries(result)) {
			const hex = v === null ? '' : `0x${FIELDS[k].toString(16)}`;
			console.log(`  ${k.padEnd(6)} ${String(v === null ? 'FAILED' : v).padStart(8)}   ${hex}`);
		}
	}

	if (failed) process.exit(1);
}

if (require.main === module) main();
