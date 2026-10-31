#!/usr/bin/env node
// tools/getfile.js - write one named file out of the disc image and nothing else.
//
// WHY THIS EXISTS. Several tools need a single disc file on disk before they can run: the port needs
// ENCHANT.EXP, the emulator harness needs the CMOS, a probe sometimes wants TBIOS.BIN. Until now each of those
// was done by an ad-hoc `node -e` one-liner over tools/cd.js, quoted into a doc page, which is the pattern
// AGENTS.md forbids and the pattern that makes a quickstart depend on the author's disk. This is that one-liner,
// made a tool: it is generic over the disc and over the filename, so it is the same tool for any of the three
// games on this disc.
//
// WHAT IT DOES NOT DO. It does not convert, patch or interpret the file. It writes the bytes the disc holds, and
// prints what it wrote and where. A caller that needs the MP header stripped says so itself, because the strip
// is a claim about the file's frame and belongs with the caller.
//
// USAGE
//   node tools/getfile.js ENCHANT.EXP                 writes ./ENCHANT.EXP
//   node tools/getfile.js ENCHANT.EXP --out build/x   writes build/x/ENCHANT.EXP
//   node tools/getfile.js ENCHANT.EXP --disc IMG      read that image rather than the .img beside the tools,
//                                                     which is how play.sh reaches a game directory
//   node tools/getfile.js --list 'ENCHANT'            lists matching names and writes nothing
//
// Matching is case-insensitive on the basename, and more than one match is an error rather than a guess.
'use strict';
const fs = require('fs');
const path = require('path');
const { Disc, defaultDisc } = require('./cd.js');

const ROOT = path.resolve(__dirname, '..');
const args = process.argv.slice(2);
const outFlag = args.indexOf('--out');
const discFlag = args.indexOf('--disc');
const listFlag = args.indexOf('--list');
if (outFlag >= 0) args.splice(outFlag, 1);
const outDir = outFlag >= 0 ? args.splice(outFlag, 1)[0] : null;
if (discFlag >= 0) args.splice(discFlag, 1);
const discPath = discFlag >= 0 ? args.splice(discFlag, 1)[0] : null;
let pattern = null;
if (listFlag >= 0) {
	args.splice(listFlag, 1);
	pattern = args.shift() || '';
}
const want = args.shift();
if (!pattern && !want) {
	console.error('usage: node tools/getfile.js <NAME> [--out DIR]   or   --list [SUBSTRING]');
	process.exit(2);
}

const disc = new Disc(discPath || defaultDisc(ROOT));
const cat = disc.catalogue();
const up = (s) => s.toUpperCase();
const matches = [...cat.keys()].filter((k) => up(path.basename(k)).includes(up(want || pattern)));

if (pattern !== null) {
	if (!matches.length) {
		console.log(`no disc file name contains ${JSON.stringify(pattern)}`);
		disc.close();
		process.exit(1);
	}
	for (const m of matches) console.log(`${String(cat.get(m).size).padStart(9)} B  ${m}`);
	disc.close();
	process.exit(0);
}

if (!matches.length) {
	console.error(`${want} is not on the disc. Try --list ${want.split('.')[0]}`);
	disc.close();
	process.exit(1);
}
if (matches.length > 1) {
	console.error(`${want} matches ${matches.length} entries, which is ambiguous:`);
	for (const m of matches) console.error('  ' + m);
	disc.close();
	process.exit(1);
}

const name = matches[0];
const buf = disc.get(cat, name);
const dest = path.join(outDir || ROOT, path.basename(name));
if (outDir) fs.mkdirSync(outDir, { recursive: true });
fs.writeFileSync(dest, buf);
disc.close();
console.log(`wrote ${dest} (${buf.length} bytes) from ${name}`);
