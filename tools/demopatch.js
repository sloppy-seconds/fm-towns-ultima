#!/usr/bin/env node
// tools/demopatch.js - one locale file per language per demo, and a patcher that fits each line into the byte span
// the game reserved for it.
//
// WHY THIS SHAPE. The demos' narration is Shift-JIS in the executable rather than artwork (docs/port-demos.md), so an
// English version is a rewrite of those strings. A string cannot be longer than the span it sits in: each is followed
// by a 2-byte terminator and the next begins a couple of bytes later, and the draw routine reads to the NUL, so there is
// no length field to adjust. Paul's decision of 2026-11-12 is that translations may live in this repository, and that
// the scheme must be proper i18n: a language is a directory of tables, adding one costs no code.
//
// WHAT IS COMMITTED AND WHAT IS NOT. The translation is this project's own work and is committed. The **original
// Japanese is not**, so a table never carries it: each row is keyed by the string's index and offset, and carries a
// short hash of the bytes it replaces. The hash is what detects a table being applied to a different rip, and it is
// enough without storing the dialogue.
//
// THE FILES. locale/<lang>/<demo-id>.tsv, tab separated, with a header row:
//
//   idx  file_offset  runtime_addr  room  sha8  text
//
// `room` and `sha8` and the two addresses are written by --template from the reader's own executable, and the translator
// fills in `text`. A row whose text is empty keeps the original. The patcher refuses a line that is too long, a row
// whose hash does not match, and a table that names an index the executable does not have.
//
// USAGE
//   node tools/demopatch.js --demo u1demo --template --locale en      write locale/en/u1demo.tsv for this disc
//   node tools/demopatch.js --demo u1demo --locale en --check         validate only, print what would change
//   node tools/demopatch.js --demo u1demo --locale en                 write build/i18n/en/UT1DEMO.EXP
//   node tools/demopatch.js --demo u1demo --locale en --src OTHER.EXP --out DIR
//
// The executable is the reader's: --src, else <repo>/UT1DEMO.EXP, else <repo>/game/UT1DEMO.EXP.
'use strict';

const fs = require('fs');
const path = require('path');
const crypto = require('crypto');
const { runs } = require(path.join(__dirname, 'demotext.js'));

const ROOT = path.join(__dirname, '..');
const DEMOS = ['u1demo', 'u2demo', 'u3demo'];
const EXP_OF = { u1demo: 'UT1DEMO.EXP', u2demo: 'UT2DEMO.EXP', u3demo: 'UT3DEMO.EXP' };
const MP_HEADER = 0x200;
const TERMINATOR = 2; // every string in this pool ends with 00 00
// THE PANEL IS 72 COLUMNS, measured 2026-11-13 from where two independent long lines break: both first lines are exactly
// 72 characters. The renderer wraps on the column count and has no idea what a word is, because it was written for
// Japanese, so a line over 72 breaks mid-word. That is not a refusal: a wrapped line still draws correctly and the
// meaning survives. It is reported so that "make it fit the screen" is a decision somebody can make rather than a
// surprise on screen.
const PANEL_COLUMNS = 72;

// A row is one string the game draws. `room` is what a translation may occupy, which is the distance to the next string
// less the terminator, measured from the executable rather than copied from a doc.
function rowsOf(buf) {
	const r = runs(buf);
	return r.map((x, i) => {
		const end = i + 1 < r.length ? r[i + 1].file : x.file + x.bytes + TERMINATOR;
		return {
			idx: i,
			file: x.file,
			runtime: x.file - MP_HEADER,
			room: end - x.file - TERMINATOR,
			sha8: crypto.createHash('sha256').update(buf.subarray(x.file, x.file + x.bytes)).digest('hex').slice(0, 8),
			originalBytes: x.bytes,
		};
	});
}

function hex(n) {
	return '0x' + n.toString(16).padStart(6, '0');
}

function findSource(demo, explicit) {
	const name = EXP_OF[demo];
	const tried = explicit ? [explicit] : [path.join(ROOT, name), path.join(ROOT, 'game', name)];
	for (const p of tried) if (fs.existsSync(p)) return p;
	return null;
}

// A locale is a directory name under locale/, or a path when the caller needs one that is not committed. The second
// form is what a test uses: a fixture table has no business in the repository, and --locale /var/tmp/x keeps it out.
function localeDir(locale) {
	return path.isAbsolute(locale) || locale.includes(path.sep) ? locale : path.join(ROOT, 'locale', locale);
}

function template(demo, locale, srcPath) {
	const buf = fs.readFileSync(srcPath);
	const rows = rowsOf(buf);
	const lines = ['idx\tfile_offset\truntime_addr\troom\tsha8\ttext'];
	for (const r of rows)
		lines.push([r.idx, hex(r.file), hex(r.runtime), r.room, r.sha8, ''].join('\t'));
	const dir = localeDir(locale);
	fs.mkdirSync(dir, { recursive: true });
	const dest = path.join(dir, demo + '.tsv');
	if (fs.existsSync(dest)) {
		// Never overwrite a table somebody has translated into. That is the one file in this scheme whose loss is
		// irreplaceable, and a template is regenerable in a second.
		console.error(`${dest} already exists. Move it aside first, or pick another --locale.`);
		return 2;
	}
	fs.writeFileSync(dest, lines.join('\n') + '\n');
	console.log(`${demo}: ${rows.length} rows written to ${path.relative(ROOT, dest)} (text column empty)`);
	return 0;
}

function readTable(demo, locale) {
	const p = path.join(localeDir(locale), demo + '.tsv');
	if (!fs.existsSync(p)) return null;
	const text = fs.readFileSync(p, 'utf8');
	const lines = text.split('\n').filter((l) => l.trim() !== '');
	const head = lines.shift().split('\t');
	const col = (n) => head.indexOf(n);
	for (const need of ['idx', 'room', 'sha8', 'text'])
		if (col(need) < 0) throw new Error(`${p} has no "${need}" column. Columns are: ${head.join(', ')}`);
	const rows = new Map();
	for (const l of lines) {
		const f = l.split('\t');
		rows.set(Number(f[col('idx')]), {
			room: Number(f[col('room')]),
			sha8: f[col('sha8')],
			text: f[col('text')] ?? '',
		});
	}
	return rows;
}

// The renderer walks the string byte by byte and stops at 00, and it understands two encodings: ASCII below 0x80 and
// Shift-JIS pairs. A translation is checked as single-byte printable ASCII, because that is what has been demonstrated
// to draw (docs/port-demos.md); a language outside ASCII would need Shift-JIS encoding, which has not been tested here.
function checkText(text) {
	for (const ch of text) {
		const c = ch.codePointAt(0);
		if (c < 0x20 || c > 0x7e) return `"${ch}" is outside printable ASCII (0x20-0x7e)`;
	}
	return null;
}

function main(argv) {
	const arg = (name) => {
		const i = argv.indexOf(name);
		return i >= 0 ? argv[i + 1] : null;
	};
	const demo = arg('--demo');
	const locale = arg('--locale');
	const explicit = arg('--src');
	if (!demo || !DEMOS.includes(demo)) {
		console.error(`--demo takes one of: ${DEMOS.join(', ')}`);
		return 2;
	}
	const srcPath = findSource(demo, explicit);
	if (!srcPath) {
		console.error(`no ${EXP_OF[demo]}. Pass --src, or put it in the tree: node tools/getfile.js ${EXP_OF[demo]} --disc <image>`);
		return 2;
	}
	if (argv.includes('--template')) {
		if (!locale) {
			console.error('--template needs --locale, e.g. --locale en');
			return 2;
		}
		return template(demo, locale, srcPath);
	}
	if (!locale) {
		console.error('--locale is required, e.g. --locale en');
		return 2;
	}

	const buf = fs.readFileSync(srcPath);
	const rows = rowsOf(buf);
	let table;
	try {
		table = readTable(demo, locale);
	} catch (e) {
		console.error(String(e.message || e));
		return 2;
	}
	if (!table) {
		console.error(`no ${path.join(localeDir(locale), demo + '.tsv')}. Write one with --template --locale ${locale}`);
		return 2;
	}

	// VALIDATION FIRST, and nothing is written unless all of it passes. A half-patched executable is worse than an
	// unpatched one: it plays, and some of its narration is in the wrong language with nothing saying which.
	const problems = [];
	const unknown = [...table.keys()].filter((i) => !rows.some((r) => r.idx === i));
	for (const i of unknown) problems.push(`row ${i} does not exist in ${EXP_OF[demo]}, which has ${rows.length} strings`);
	let filled = 0;
	const patches = [];
	for (const r of rows) {
		const t = table.get(r.idx);
		if (!t) continue;
		if (t.sha8 && t.sha8 !== r.sha8)
			problems.push(`row ${r.idx}: sha ${t.sha8} is not this string's ${r.sha8}, so the table was built from a different copy`);
		if (t.room && t.room !== r.room)
			problems.push(`row ${r.idx}: table says room ${t.room}, the executable has ${r.room}`);
		if (!t.text) continue; // empty means "keep the original", which is how a partial translation is expressed
		const bad = checkText(t.text);
		if (bad) {
			problems.push(`row ${r.idx}: ${bad}`);
			continue;
		}
		if (t.text.length > r.room) {
			problems.push(`row ${r.idx}: ${t.text.length} characters into a room of ${r.room}`);
			continue;
		}
		patches.push({ ...r, text: t.text });
		filled++;
	}

	if (problems.length) {
		console.error(`${demo} / ${locale}: ${problems.length} problem(s), nothing written`);
		for (const p of problems) console.error('  ' + p);
		return 1;
	}

	if (argv.includes('--check')) {
		const wrapping = patches.filter((p) => p.text.length > PANEL_COLUMNS);
		console.log(`${demo} / ${locale}: ${filled} of ${rows.length} strings translated, all fit, nothing written`);
		if (wrapping.length)
			console.log(`  ${wrapping.length} of ${filled} exceed the panel's ${PANEL_COLUMNS} columns and will wrap mid-word: rows ${wrapping.map((p) => p.idx).join(', ')}`);
		for (const p of patches)
			console.log(`  row ${String(p.idx).padStart(2)}  ${String(p.text.length).padStart(3)}/${String(p.room).padStart(3)}${p.text.length > PANEL_COLUMNS ? ' wraps' : '      '}  ${p.text}`);
		return 0;
	}

	for (const p of patches) {
		const bytes = Buffer.from(p.text, 'ascii');
		bytes.copy(buf, p.file);
		for (let i = p.file + bytes.length; i < p.file + p.room + TERMINATOR; i++) buf[i] = 0;
	}
	const outDir = arg('--out') || path.join(ROOT, 'build', 'i18n', locale);
	fs.mkdirSync(outDir, { recursive: true });
	const dest = path.join(outDir, EXP_OF[demo]);
	fs.writeFileSync(dest, buf);
	console.log(`${demo} / ${locale}: ${filled} of ${rows.length} strings translated, wrote ${dest}`);
	const wrapped = patches.filter((p) => p.text.length > PANEL_COLUMNS).length;
	if (wrapped) console.log(`  ${wrapped} line(s) are longer than the panel's ${PANEL_COLUMNS} columns and wrap mid-word, which is legal and is what the renderer does with Japanese-less text`);
	console.log(`  run it with: <port> ${path.relative(ROOT, dest)} <TBIOS.BIN> <disc.cue>`);
	return 0;
}

if (require.main === module) process.exit(main(process.argv.slice(2)));
module.exports = { rowsOf, EXP_OF, DEMOS };
