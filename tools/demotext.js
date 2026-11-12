#!/usr/bin/env node
// tools/demotext.js - the demos' narration, as a table, because it is text and not artwork.
//
// WHY THIS EXISTS. The three UT*DEMO.EXP slideshows scroll Japanese narration faster than a person can read it, and the
// question that follows is always "can it be English". It can be translated only because the narration is **data**: it
// is Shift-JIS in the executable, drawn with the kanji font TownsOS places at 0x3b7e1, not pixels baked into the
// artwork. Measured 2026-11-12: UT1DEMO.EXP holds 21 decodable two-byte runs between 0x00152c and 0x001a30, and the
// strings there are the sentences that appear on screen. The pictures it loads are HEADTTL.TIF and UT1_1..UT1_4.TIF
// and they hold no narration.
//
// WHAT IT DOES NOT DO. It does not patch anything and it does not translate anything. It prints the offsets and the
// byte lengths, which is what a translation has to fit into, and the text at those offsets.
//
// THE TEXT IS THE GAME'S. Dialogue is copyrighted and this repository never hosts it, so `--out` writes under
// extracted/, which is gitignored, and the only committed artefact is this tool. Nothing from here goes into docs/.
//
// ADDRESSES. Two frames, and both are printed because this project has paid for confusing them. A file offset F in the
// .EXP is the runtime address F - 0x200, because the runtime frame starts after the 512-byte MP header and a module is
// keyed by that frame. The code that draws these strings holds the runtime address.
//
// USAGE
//   node tools/demotext.js UT1DEMO.EXP                     the table, to the terminal
//   node tools/demotext.js UT1DEMO.EXP --out FILE          and to a file, for a translation pass
//   node tools/demotext.js --compare                       the three demos, counts and ranges, no text
//   node tools/demotext.js --compare --text                the same with the text
//
// `--compare` reports the three demos' counts and ranges side by side. What it shows is that they are **not** one text:
// measured 2026-11-12, the runs begin at the same file offset in all three, `0x0014b4`, and there are 21, 20 and 24 of
// them in Ultima I's, II's and III's demo. So the shell is shared and the narration is not, and an English version is a
// translation per episode rather than one table used three times.
'use strict';

const fs = require('fs');
const path = require('path');

const ROOT = path.join(__dirname, '..');
const DEMOS = ['UT1DEMO.EXP', 'UT2DEMO.EXP', 'UT3DEMO.EXP'];
const MIN_CHARS = 4; // four characters, eight bytes, which is what separates a sentence from incidental bytes
const MP_HEADER = 0x200; // the container header; the runtime frame begins after it

// A Shift-JIS lead byte and trail byte, as the encoding defines them.
const isLead = (b) => (b >= 0x81 && b <= 0x9f) || (b >= 0xe0 && b <= 0xef);
const isTrail = (b) => (b >= 0x40 && b <= 0x7e) || (b >= 0x80 && b <= 0xfc);

// Every maximal run of two-byte characters that decodes cleanly and is long enough to be a sentence. Runs are maximal
// by construction, which is why the offsets are where a translation table has to start.
function runs(buf) {
	const out = [];
	let i = 0;
	const n = buf.length;
	while (i < n - 1) {
		const start = i;
		const raw = [];
		while (i < n - 1 && isLead(buf[i]) && isTrail(buf[i + 1])) {
			raw.push(buf[i], buf[i + 1]);
			i += 2;
		}
		if (raw.length >= MIN_CHARS * 2) {
			const bytes = Buffer.from(raw);
			let text = null;
			try {
				text = new TextDecoder('shift_jis', { fatal: true }).decode(bytes);
			} catch (e) {
				text = null;
			}
			if (text !== null) out.push({ file: start, bytes: raw.length, chars: raw.length / 2, text });
		}
		i = Math.max(i, start) + 1;
	}
	return out;
}

function load(name) {
	const p = path.join(ROOT, name);
	try {
		return fs.readFileSync(p);
	} catch (e) {
		return null;
	}
}

function hex(n, w) {
	return '0x' + n.toString(16).padStart(w, '0');
}

function main(argv) {
	const compare = argv.includes('--compare');
	const withText = !compare || argv.includes('--text');
	const outAt = argv.indexOf('--out');
	const outFile = outAt >= 0 ? argv[outAt + 1] : null;
	const files = compare ? DEMOS : argv.filter((a) => !a.startsWith('--') && a !== outFile);

	if (!files.length) {
		console.error('usage: node tools/demotext.js <FILE.EXP> [--out FILE] | --compare [--text]');
		return 2;
	}

	if (compare) {
		// THE THREE DEMOS ARE ONE PROGRAM with a 44 KB content region that differs, so the table should be the same shape
		// in all three and the per-demo files differ by the size of the insertion in front of the entry. This reports the
		// count, the range and the total bytes, and leaves the judgement to the reader when the numbers disagree.
		let firstCount = null;
		for (const name of DEMOS) {
			const buf = load(name);
			if (!buf) {
				console.log(`${name.padEnd(12)} absent`);
				continue;
			}
			const r = runs(buf);
			const lo = r.length ? r[0].file : 0;
			const hi = r.length ? r[r.length - 1].file + r[r.length - 1].bytes : 0;
			const total = r.reduce((a, x) => a + x.bytes, 0);
			const same = firstCount === null ? '' : r.length === firstCount ? 'same count' : 'COUNT DIFFERS';
			if (firstCount === null) firstCount = r.length;
			console.log(`${name.padEnd(12)} ${String(r.length).padStart(3)} runs  ${String(total).padStart(5)} bytes  ${hex(lo, 6)}..${hex(hi, 6)}  ${same}`);
			if (withText) for (const [i, x] of r.entries()) console.log(`  ${String(i).padStart(2)}  ${hex(x.file, 6)}  ${String(x.bytes).padStart(4)} B  ${x.text}`);
		}
		return 0;
	}

	let wrote = 0;
	for (const name of files) {
		const buf = load(name);
		if (!buf) {
			console.error(`no ${name} in ${ROOT}. It comes off the disc: node tools/getfile.js ${name} --disc <image>`);
			return 2;
		}
		const r = runs(buf);
		const lines = ['idx\tfile_offset\truntime_addr\tbytes\tchars\ttext'];
		for (const [i, x] of r.entries())
			lines.push([i, hex(x.file, 6), hex(x.file - MP_HEADER, 6), x.bytes, x.chars, x.text].join('\t'));
		const body = lines.join('\n') + '\n';
		if (outFile) {
			// Under extracted/ by default when the caller names a bare file, because the text is the game's.
			const dest = path.isAbsolute(outFile) || outFile.includes(path.sep) ? outFile : path.join(ROOT, 'extracted', outFile);
			fs.mkdirSync(path.dirname(dest), { recursive: true });
			fs.writeFileSync(dest, body);
			console.log(`${name}: ${r.length} runs, wrote ${dest}`);
			wrote++;
		} else {
			process.stdout.write(body);
		}
	}
	return wrote || outFile ? 0 : 0;
}

if (require.main === module) process.exit(main(process.argv.slice(2)));
module.exports = { runs, MIN_CHARS, MP_HEADER };
