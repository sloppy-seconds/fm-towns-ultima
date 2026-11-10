#!/usr/bin/env node
// tools/glibcfloor.js - what glibc a binary demands, and whether that is acceptable to ship.
//
// WHY THIS EXISTS. A GNU/Linux binary records, per symbol it imports, the glibc version that symbol was introduced in.
// The loader refuses to start the program when any of those is newer than the libc on the machine, and the message names
// the missing version, not the program, so it reads as "this machine is broken". The floor is a property of the BUILD HOST
// and not of the source: the same C++ compiled on glibc 2.43 asks for 2.43, because the five float-math calls that bind
// to new versions there bind to GLIBC_2.2.5 on an older host. Measured on this repository's port, 2026-11-10:
//
//   GLIBC_2.43   acosf, asinf, atan2f, log10f, sqrtf
//   GLIBC_2.38   __isoc23_strtol and friends, strlcpy, strlcat, fmod
//
// The release built in Debian trixie (glibc 2.41) was therefore unshippable to Ubuntu 22.04, RHEL 9 or Debian 11, and
// nothing noticed because nobody had written the floor down. This tool is that floor, in one place, as a check.
//
// THE FLOOR IS A MAXIMUM, NOT A TARGET. A binary asking for less is better and passes. Paul set it at 2.34 on
// 2026-11-10, which covers RHEL 9 and its rebuilds, Debian 12 and later, Ubuntu 22.04 and later.
//
// WHAT IT DOES NOT CHECK. C++ runtime symbols (GLIBCXX_*, CXXABI_*) come from libstdc++, not libc, and are reported for
// information only: the port links libstdc++ statically, so they should be absent, and their absence is the reason the
// floor is the only thing that matters here.
//
// USAGE
//   node tools/glibcfloor.js <binary>        check, print the table, exit 1 if above the floor
//   node tools/glibcfloor.js --table <bin>   the same and always exit 0, for a report
'use strict';

const { execFileSync } = require('child_process');
const fs = require('fs');

// One place. Changing this changes what the release refuses, so it is documented in docs/port-structure.md and asserted
// by tools/checkall.js to be the value there.
const FLOOR = [2, 34];

function versionOf(text) {
	const m = /^GLIBC_(\d+(?:\.\d+)*)$/.exec(text);
	if (!m) return null;
	const parts = m[1].split('.').map(Number);
	// GLIBC_2.2.5 is 2.2.5 and older than 2.34. Compare numerically, not as strings, or 2.2.5 sorts after 2.34.
	while (parts.length < 3) parts.push(0);
	return parts;
}

function cmp(a, b) {
	const n = Math.max(a.length, b.length);
	for (let i = 0; i < n; i++) {
		const x = a[i] || 0;
		const y = b[i] || 0;
		if (x !== y) return x - y;
	}
	return 0;
}

function requiredBy(binary) {
	// readelf's version-info block is the loader's own list. objdump -T lists the same strings per symbol, which is how the
	// five 2.43 names were identified, but this tool only needs the set of versions required.
	let out;
	try {
		out = execFileSync('readelf', ['--version-info', binary], { encoding: 'utf8', stdio: ['ignore', 'pipe', 'pipe'] });
	} catch (e) {
		throw new Error('readelf failed on ' + binary + ': ' + (e.stderr || e.message));
	}
	const versions = new Set();
	const cxx = new Set();
	for (const line of out.split('\n')) {
		const m = /Name:\s+(\S+)/.exec(line);
		if (!m) continue;
		if (m[1].startsWith('GLIBC_')) versions.add(m[1]);
		else if (/^(GLIBCXX|CXXABI)_/.test(m[1])) cxx.add(m[1]);
	}
	return { versions: [...versions].sort((a, b) => cmp(versionOf(a), versionOf(b))), cxx: [...cxx].sort() };
}

function symbolsWanting(binary, version) {
	try {
		const out = execFileSync('objdump', ['-T', binary], { encoding: 'utf8', stdio: ['ignore', 'pipe', 'pipe'] });
		return [...new Set(out.split('\n').filter((l) => l.includes(version)).map((l) => l.trim().split(/\s+/).pop()))].sort();
	} catch {
		return [];
	}
}

function main(argv) {
	const tableOnly = argv.includes('--table');
	const binary = argv.find((a) => !a.startsWith('--'));
	if (!binary) {
		console.error('usage: node tools/glibcfloor.js [--table] <binary>');
		return 2;
	}
	if (!fs.existsSync(binary)) {
		console.error('no such file: ' + binary);
		return 2;
	}
	let req;
	try {
		req = requiredBy(binary);
	} catch (e) {
		console.error(String(e.message));
		return 2;
	}
	if (!req.versions.length) {
		console.error(binary + ' requires no GLIBC_ symbol versions at all. That is either a fully static binary or not an ELF.');
		return tableOnly ? 0 : 1;
	}
	const highest = req.versions[req.versions.length - 1];
	const above = req.versions.filter((v) => cmp(versionOf(v), FLOOR) > 0);

	console.log('binary    ' + binary);
	console.log('floor     GLIBC_' + FLOOR.join('.') + '  (a maximum: asking for less is fine)');
	console.log('requires  ' + req.versions.join(' '));
	console.log('highest   ' + highest + (above.length ? '  ABOVE THE FLOOR' : '  within the floor'));
	if (req.cxx.length) console.log('libstdc++ ' + req.cxx.join(' ') + '   (dynamic; the release links it statically)');
	else console.log('libstdc++ none: linked statically, so libc is the only floor');
	for (const v of above) {
		const syms = symbolsWanting(binary, v);
		console.log('above     ' + v + ' from ' + (syms.length ? syms.join(', ') : '(symbols not listed)'));
	}
	if (tableOnly) return 0;
	if (above.length) {
		console.error('\nrefusing: this binary needs a glibc newer than the floor this project ships against.\n' +
			'Build it on a host whose libc is at or below the floor: the version a symbol carries is decided by the\n' +
			'build host, so the same source on an older base fixes it and editing the source does not.');
		return 1;
	}
	return 0;
}

if (require.main === module) process.exit(main(process.argv.slice(2)));
module.exports = { FLOOR };
