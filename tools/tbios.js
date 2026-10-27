#!/usr/bin/env node
'use strict';
// tools/tbios.js - the TBIOS function table: what each AH value the game uses actually calls.
//
// WHY THIS EXISTS. ENCHANT.EXP carries 70 small stubs, one per TBIOS function it uses, laid out in
// AH order from 0x2d1 (docs/tbios-thunks.md). Each ends `mov ah,<n>; ...; call fs:[0x20]`. Until
// now the AH values were numbers: a function could be seen to call "TBIOS 0x46" and nothing more.
//
// THE CHAIN, each step read from a file rather than assumed:
//
//   the game's thunk        mov ah,0x46 ... call fs:[0x20]
//   fs:[0x20]               selector 0x110, offset 0x280 - the header's u32 at 0x20, the table's
//                           slot 4
//   the dispatcher at 0x280 movzx edi,ah
//                           call dword ptr cs:[edi*4 + 0x2b4]
//   the table at 0x2b4      u32 per AH value, the handler's offset in TBIOS.BIN
//
// So the mapping is reachable without running anything, from TBIOS.BIN alone.
//
// WHAT IT DOES NOT GIVE. A name. The table says AH 0x46 calls code at some offset; it does not say
// that offset draws a rectangle. Names come from reading the handler, or from Fujitsu's own
// documentation, and neither is in this file.
//
// Usage:
//   node tools/tbios.js                      the table, AH and handler offset
//   node tools/tbios.js --game               only the AH values ENCHANT.EXP uses
//   node tools/tbios.js --json               machine readable
//   node tools/tbios.js --check              assert the chain above against the bytes
//
// Exit status 1 if --check fails, because a broken chain would make every AH value meaningless.

const fs = require('fs');
const path = require('path');

const ROOT = path.join(__dirname, '..');
const TBL = 0x2b4;             // the dispatcher's `call cs:[edi*4 + 0x2b4]`
const DISPATCH = 0x280;        // the header's u32 at 0x20
const MAX_AH = 0xff;

function loadTbios() {
	const local = path.join(ROOT, 'TBIOS.BIN');
	if (fs.existsSync(local)) return fs.readFileSync(local);
	const { Disc, defaultDisc } = require('./cd.js');
	const img = defaultDisc(ROOT);
	if (!img) throw new Error('no TBIOS.BIN locally and no disc .img found');
	const d = new Disc(img);
	const cat = d.catalogue();
	const key = [...cat.keys()].find((k) => /TBIOS\.BIN$/i.test(k));
	if (!key) throw new Error('TBIOS.BIN not found on the disc');
	const buf = d.get(cat, key);
	d.close();
	return buf;
}

// Every AH value the game's own stubs use, by the signature b4 <AH> 0f a0 68 10 01.
function gameAhValues(exe) {
	const out = new Set();
	for (let i = 0; i + 8 <= exe.length; i++) {
		if (exe[i] === 0xb4 && exe[i + 2] === 0x0f && exe[i + 3] === 0xa0
			&& exe[i + 4] === 0x68 && exe[i + 5] === 0x10 && exe[i + 6] === 0x01) {
			out.add(exe[i + 1]);
		}
	}
	return out;
}

function table(tbios) {
	const rows = [];
	for (let ah = 0; ah <= MAX_AH; ah++) {
		const o = TBL + ah * 4;
		if (o + 4 > tbios.length) break;
		const off = tbios.readUInt32LE(o);
		if (off) rows.push({ ah, off });
	}
	return rows;
}

function main() {
	const argv = process.argv.slice(2);
	const tbios = loadTbios();

	if (argv.includes('--check')) {
		// A check that cannot fail is a comment. Each link is asserted against the bytes, including
		// the two that are easiest to get wrong: the header slot and the dispatcher's displacement.
		const problems = [];
		const ok = (name, cond, detail) => {
			if (cond) console.log('ok    ' + name);
			else problems.push(name + (detail ? ': ' + detail : ''));
		};

		ok('signature is V31L', /^V31L/.test(tbios.slice(0, 8).toString('latin1')),
			JSON.stringify(tbios.slice(0, 8).toString('latin1')));
		const slotOff = tbios.readUInt32LE(0x20);
		ok('header u32 at 0x20 is the dispatcher', slotOff === DISPATCH, '0x' + slotOff.toString(16));
		ok('header u16 at 0x24 is selector 0x110', tbios.readUInt16LE(0x24) === 0x110,
			'0x' + tbios.readUInt16LE(0x24).toString(16));
		ok('dispatcher begins push fs', tbios[DISPATCH] === 0x0f && tbios[DISPATCH + 1] === 0xa0,
			tbios.slice(DISPATCH, DISPATCH + 2).toString('hex'));
		// movzx edi, ah = 0f b6 fc at +0x21, then call cs:[edi*4+0x2b4].
		// The opcode is `2e ff 14 bd` - FF /2 is `call`, /4 would be `jmp`, and the SIB byte is 0xbd
		// (index edi, scale 4, no base). Reading it as ff 24 would be a jmp and the pattern would not
		// match; that mistake was made once while writing this check.
		const mz = tbios.indexOf(Buffer.from([0x0f, 0xb6, 0xfc]), DISPATCH);
		ok('dispatcher loads AH into edi', mz === DISPATCH + 0x21, '0x' + (mz - DISPATCH).toString(16));
		const callAt = DISPATCH + 0x24;
		ok('dispatcher calls through the table',
			tbios[callAt] === 0x2e && tbios[callAt + 1] === 0xff && tbios[callAt + 2] === 0x14
			&& tbios[callAt + 3] === 0xbd && tbios.readUInt32LE(callAt + 4) === TBL,
			tbios.slice(callAt, callAt + 8).toString('hex'));

		const rows = table(tbios);
		ok('table has entries', rows.length > 0, rows.length + ' rows');
		// The handlers must be code offsets inside the file, not arbitrary dwords. Without this the
		// check passes on a table whose first entry has been overwritten, which was measured: an
		// earlier version did exactly that and reported success.
		//
		// ONLY THE RANGE THE GAME USES IS ASSERTED. Above AH 0x66 the table holds values such as
		// 0xFF212444, far outside an 81,920-byte file, so it is not purely offsets up there and
		// asserting over the whole 256 would be a claim about something unmeasured.
		const used = rows.filter((r) => r.ah <= 0x66);
		const outOfRange = used.filter((r) => r.off >= tbios.length);
		ok('every handler up to AH 0x66 is an offset inside TBIOS.BIN', outOfRange.length === 0,
			outOfRange.slice(0, 4).map((r) => 'ah 0x' + r.ah.toString(16) + ' -> 0x' + r.off.toString(16)).join(' '));
		ok('the table is dense enough to be a dispatch table', used.length > 50, used.length + ' entries up to 0x66');

		if (fs.existsSync(path.join(ROOT, 'ENCHANT.EXP'))) {
			const ahs = gameAhValues(fs.readFileSync(path.join(ROOT, 'ENCHANT.EXP')));
			const have = new Set(rows.map((r) => r.ah));
			const missing = [...ahs].filter((a) => !have.has(a));
			ok('every AH the game uses resolves', missing.length === 0,
				missing.map((a) => '0x' + a.toString(16)).join(' '));
			ok('the game uses a plausible number of them', ahs.size > 50 && ahs.size < 120, ahs.size + ' values');
		}
		if (problems.length) {
			console.error('\n' + problems.length + ' problem(s)');
			return 1;
		}
		console.log('\nthe chain holds: thunk AH -> fs:[0x20] -> dispatcher -> table at 0x' + TBL.toString(16));
		return 0;
	}

	let rows = table(tbios);
	if (argv.includes('--game')) {
		const exe = fs.readFileSync(path.join(ROOT, 'ENCHANT.EXP'));
		const ahs = gameAhValues(exe);
		rows = rows.filter((r) => ahs.has(r.ah));
	}
	if (argv.includes('--json')) {
		console.log(JSON.stringify(rows.map((r) => ({ ah: '0x' + r.ah.toString(16), handler: '0x' + r.off.toString(16) })), null, 1));
		return 0;
	}
	console.log('AH    handler in TBIOS.BIN');
	for (const r of rows) {
		console.log('0x' + r.ah.toString(16).padStart(2, '0') + '  0x' + r.off.toString(16));
	}
	console.log('\n' + rows.length + ' entries; the table is at 0x' + TBL.toString(16) + ' in TBIOS.BIN');
	return 0;
}

if (require.main === module) process.exit(main());

module.exports = { gameAhValues, table, loadTbios, TBL, DISPATCH };
