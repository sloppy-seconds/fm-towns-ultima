#!/usr/bin/env node
// tools/games.js - the seven titles this project ports, as data.
//
// WHY THIS FILE EXISTS. Until now each title was a set of facts copied into whichever script needed them: the
// executable's name in three places, its code selector in two, its measured seeds in a file whose name only
// sometimes said which game it belonged to. Two titles could be done that way and a third could not, and the
// next three would each have invented their own spelling. So the facts live here once and the tools ask.
//
// WHAT IS IN IT, AND WHAT IS NOT. Only what varies between titles and is measured from the disc. The container
// arithmetic, the strip, the frame shift, the recompiler invocation and the machine are platform-wide and stay
// in the tools. A field that is the same for all seven does not belong here, because a table of constants that
// never differ is a table nobody reads.
//
// THE ARITHMETIC IS THE PROOF THAT A TITLE BELONGS HERE. Every one of the seven is an `MP` image whose
// `(pages - 1) * 512 + lastPage` reproduces its file size exactly, whose entry field at 0x14 is a runtime
// address, and whose bytes at `entry + 0x200` are the same `eb 56` High C start-up stub. Measured 2026-11-10
// with the disc in place; `tools/verify.js` asserts the same facts for EXODUS and ENCHANT.
//
// TMENU.EXP IS NOT IN THE LIST and that is deliberate: it is `P3`, not `MP`, its header does not reproduce its
// size, and its entry field is 0x200. It is the TownsOS launcher rather than a title, it is out of scope by
// Paul's decision on 2026-11-10, and listing it here would mean one descriptor that the shared arithmetic
// cannot serve.
//
// The demos are a static slideshow shell, 91.8 percent identical to each other (docs/three-games-compared.md),
// which is why they are grouped: one binary can run all three, and the difference between them is a 44 KB
// region. They are in scope by the same decision, as smoke tests of the machine rather than as games.
//
// USAGE
//   node tools/games.js --list            one line per title
//   node tools/games.js --ids             the ids alone, in disc order, for a script that loops
//   node tools/games.js --table           a markdown table, for a doc
//   node tools/games.js --get u3 exp      one field, for a shell script
//   node tools/games.js --get u3          the whole descriptor, as JSON
'use strict';

// `id` is the directory and the binary's stem: build/<id>, <id>port, module/<id>.
// `exp` is the name on the disc, not a path.
// `selector` is the code selector the module is registered at. 0x0c is measured on ENCHANT and used for the
// others until each is measured, which is stated per title rather than implied.
// `seeds` is where the addresses no static rule finds live, relative to the repository.
// `tbiosSeeds` is the same thing for the shared TBIOS module: offsets in segment `0110` that a title reaches and the
// live U2 capture in `tools/tbios-seeds.txt` never saw. They are per title because the capture is one game's trace,
// and a routine only another title calls is absent from it. `tools/port-build.sh` appends them to the TBIOS spec.
// `shadows` says whether the port's hand-written replacement table applies to this title. It is true for Ultima II
// only, because every entry in port/native_shadows.cpp names a routine of ENCHANT.EXP; a build for any other title
// compiles that file with an empty manifest, or it would not link. tools/port-build.sh reads this field rather than
// assuming, so the day a second title earns its own table is a one-line change here plus the table itself.
// `saveDisk` is a disk image this project keeps for that title, or null.
const GAMES = [
	{
		id: 'u1',
		title: 'Ultima I (DARKNESS.EXP)',
		exp: 'DARKNESS.EXP',
		bytes: 965986,
		entry: 0xe7a74,
		esp: 0x104b64,
		selector: 0x0c,
		seeds: 'tools/u1-seeds.txt',
		tbiosSeeds: null,
		saveDisk: null,
		shadows: false,
		note: 'playable on jarvis: creation, Journey Onward and play, on two seeds, the second shared with U3',
	},
	{
		id: 'u2',
		title: 'Ultima II (ENCHANT.EXP)',
		exp: 'ENCHANT.EXP',
		bytes: 1072398,
		entry: 0x101a20,
		esp: 0x11eb10,
		selector: 0x0c,
		seeds: 'tools/runtime-seeds.txt',
		tbiosSeeds: null,
		saveDisk: 'saves/userdisk.hdm',
		shadows: true,
		note: 'the only title with live-measured selectors and a played-through route',
	},
	{
		id: 'u3',
		title: 'Ultima III (EXODUS.EXP)',
		exp: 'EXODUS.EXP',
		bytes: 904310,
		entry: 0xd8ab0,
		esp: 0xf5a78,
		selector: 0x0c,
		seeds: 'tools/u3-seeds.txt',
		tbiosSeeds: null,
		saveDisk: 'saves/u3test.hdm',
		shadows: false,
		note: 'reaches the title and the register, stops at a disk validation',
	},
	{
		id: 'british',
		title: 'British (BRITISH.EXP)',
		exp: 'BRITISH.EXP',
		bytes: 360481,
		entry: 0x54094,
		esp: 0x70e24,
		selector: 0x0c,
		seeds: null,
		tbiosSeeds: 'tools/tbios-british-seeds.txt',
		saveDisk: null,
		shadows: false,
		note: 'not a game: a publisher splash, 360 KB, the U2 sound bank plus HEADTTL and BRIBRI artwork',
	},
	{
		id: 'u1demo',
		title: 'Ultima I demo (UT1DEMO.EXP)',
		exp: 'UT1DEMO.EXP',
		bytes: 618433,
		entry: 0x93034,
		esp: 0xafdc4,
		selector: 0x0c,
		seeds: null,
		tbiosSeeds: null,
		saveDisk: null,
		shadows: false,
		note: 'the shared slideshow shell, 91.8 percent identical to the other two demos',
	},
	{
		id: 'u2demo',
		title: 'Ultima II demo (UT2DEMO.EXP)',
		exp: 'UT2DEMO.EXP',
		bytes: 618849,
		entry: 0x931d4,
		esp: 0xaff64,
		selector: 0x0c,
		seeds: null,
		tbiosSeeds: null,
		saveDisk: null,
		shadows: false,
		note: 'same shell as UT1DEMO, different 44 KB content region',
	},
	{
		id: 'u3demo',
		title: 'Ultima III demo (UT3DEMO.EXP)',
		exp: 'UT3DEMO.EXP',
		bytes: 619297,
		entry: 0x93394,
		esp: 0xb0124,
		selector: 0x0c,
		seeds: null,
		tbiosSeeds: null,
		saveDisk: null,
		shadows: false,
		note: 'same shell as the other two demos',
	},
];

const byId = new Map(GAMES.map((g) => [g.id, g]));

function main(argv) {
	if (argv.includes('--list')) {
		for (const g of GAMES) console.log(g.id.padEnd(9) + g.exp.padEnd(14) + String(g.bytes).padStart(8) + '  ' + g.title);
		return 0;
	}
	// Just the ids, in the GAMES order, which is the order a reader meets them on the disc. This is what a script that
	// has to do something to every title iterates: tools/release-package.sh builds and ships one binary per id, and it
	// reads the list from here rather than writing a second copy of it that can fall behind by four titles.
	if (argv.includes('--ids')) {
		for (const g of GAMES) console.log(g.id);
		return 0;
	}
	if (argv.includes('--table')) {
		console.log('| id | title | executable | bytes | entry | esp |');
		console.log('|---|---|---|---|---|---|');
		for (const g of GAMES)
			console.log(`| \`${g.id}\` | ${g.title} | \`${g.exp}\` | ${g.bytes.toLocaleString('en')} | \`0x${g.entry.toString(16)}\` | \`0x${g.esp.toString(16)}\` |`);
		return 0;
	}
	const i = argv.indexOf('--get');
	if (i >= 0) {
		const g = byId.get(argv[i + 1]);
		if (!g) {
			console.error('no title "%s". Known: %s', argv[i + 1], [...byId.keys()].join(', '));
			return 2;
		}
		const field = argv[i + 2];
		if (!field) {
			console.log(JSON.stringify(g, null, 1));
			return 0;
		}
		if (!(field in g)) {
			console.error('%s has no field %s. Known: %s', g.id, field, Object.keys(g).join(', '));
			return 2;
		}
		const v = g[field];
		console.log(v === null ? '' : typeof v === 'number' ? '0x' + v.toString(16) : String(v));
		return 0;
	}
	console.error('usage: node tools/games.js --list | --ids | --table | --get <id> [field]');
	return 2;
}

if (require.main === module) process.exit(main(process.argv.slice(2)));
module.exports = { GAMES, byId };
