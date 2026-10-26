#!/usr/bin/env node
'use strict';
// tools/decompile-run.js - run the Level-1 reconstruction loop over a queue of
// leaf routines and record what happens to each.
//
// This is plan item 4f made executable. The purpose is not to reconstruct the
// game: it is to MEASURE whether this High C build reproduces the game's code
// across a population of routines, not just one or two. A mismatch on one
// routine has four possible causes. A mismatch on most of twenty-five has one:
// the toolchain is not the original.
//
// The loop, per candidate:
//   1. read the target bytes from the image
//   2. ask the compile API to build a candidate source
//   3. compare the emitted LEDATA
//   4. on mismatch, try the known source-shape levers before giving up
//   5. record match, or pull the cord with a diagnosis
//
// The levers are the measured ones from docs/decompilation-experiment.md:
//   - pointer type: char* folds a displacement into the operand, int* adds first
//   - operand order in &&: decides which branch is tested first
//   - return p+1 versus p++; return p: changes the epilogue
//
// IT DOES NOT GENERATE C. Writing C from a disassembly is the reading work and
// is not automatable from bytes alone. This tool takes candidate C from a
// supplied file of attempts and scores them, which is the part that CAN be
// automated and is where the 20-minute timebox used to go.
//
// Usage:
//   node tools/decompile-run.js --scan 25 --out analysis/run.json
//   node tools/decompile-run.js --only 0xf3e24,0xe9e2c
//   node tools/decompile-run.js --scan 25 --attempts analysis/attempts.json
//
// attempts.json maps an address to a list of {label, source}. Without it, the
// run records the target bytes and leaves each routine at state "needs-source",
// which is still useful: it produces the queue with real metadata.

const fs = require('fs');
const path = require('path');
const http = require('http');
const { execFileSync } = require('child_process');
const { classifyMismatch, CLASSES } = require('./cordclass.js');

const ROOT = path.join(__dirname, '..');
const IMAGE = path.join(ROOT, 'ENCHANT.EXP');
const API = process.env.CSERVE || 'http://127.0.0.1:8097';

const args = process.argv.slice(2);
const opt = (name, dflt) => {
	const i = args.indexOf('--' + name);
	return i >= 0 && args[i + 1] ? args[i + 1] : dflt;
};
const flag = (name) => args.includes('--' + name);

function loadImage() {
	if (!fs.existsSync(IMAGE)) {
		console.error('ENCHANT.EXP missing. It is gitignored; see README section 1.');
		process.exit(2);
	}
	return fs.readFileSync(IMAGE);
}

// Same test as preflight.js. Duplicated deliberately rather than imported: these
// are two small independent checks and a shared module would need its own tests.
function cleanEntry(buf, addr, width = 8) {
	const tail = buf.slice(Math.max(0, addr - width), addr);
	let i = tail.length;
	while (i >= 2 && tail[i - 2] === 0x8b && tail[i - 1] === 0xc0) i -= 2;
	while (i >= 1 && (tail[i - 1] === 0x90 || tail[i - 1] === 0xcc)) i -= 1;
	if (i === 0) return false;
	return tail[i - 1] === 0xc3 || tail[i - 1] === 0xc2;
}

// Decode from the entry to the end of the routine.
//
// THIS USES NDISASM, NOT A HAND-WRITTEN LENGTH TABLE. Two attempts at a private
// decoder both lost sync and both produced wrong routine lengths:
//
//   - `66 89 8c 50 90 7e 07 00` is 8 bytes; recursing on the `89` after the
//     prefix gave 3, desynchronising everything after it.
//   - 0xe30a0's tenth byte is 0xc3, but it is the middle of `83 c3 04`, so a
//     byte-wise scan truncated the routine at 10 bytes and reported a target
//     ending `83 c3` that no C could produce.
//
// ndisasm is correct from a known entry because the entry supplies alignment,
// and it is already a dependency of this project. Shelling out is slower than a
// table and worth it: a wrong routine length silently invalidates the whole run.
function scanRoutine(buf, entry) {
	const chunk = buf.slice(entry, Math.min(entry + 4096, buf.length));
	const tmp = '/var/tmp/dcr-scan-' + process.pid + '.bin';
	fs.writeFileSync(tmp, chunk);
	let text;
	try {
		text = execFileSync('ndisasm', ['-b32', '-w', '-o', '0x' + entry.toString(16), tmp], {
			encoding: 'utf8', stdio: 'pipe',
		});
	} finally {
		fs.unlinkSync(tmp);
	}

	const bytes = [];
	let calls = 0, indirect = 0;
	for (const line of text.split('\n')) {
		if (!line.trim()) continue;
		// ndisasm: "000E9E2C  8B4C2404          mov ecx,[esp+0x4]"
		const m = line.match(/^[0-9A-F]+\s+([0-9A-F]+)\s+(.*)$/);
		if (!m) continue;
		const raw = m[1];
		const asm = m[2].trim();
		for (let i = 0; i < raw.length; i += 2) bytes.push(parseInt(raw.slice(i, i + 2), 16));
		if (/^call\b/.test(asm)) calls++;
		if (/^ret[\s]*(0x|$)/.test(asm) || /^ret$/.test(asm)) break;
		if (bytes.length > 4096) break;
	}
	return { bytes, calls, indirect };
}

// Same test as preflight.js: a disp32 that looks like a data address means the
// object will carry FIXUPP and the LEDATA is not final.
function referencesAbsolute(buf, addr, len) {
	const end = addr + len;
	for (let i = addr; i + 4 <= end; i++) {
		const v = buf.readUInt32LE(i);
		if (v < 0x10000 || v > 0x200000) continue;
		const prev = buf[i - 1];
		if (prev !== undefined && (prev >> 6) === 2) return v;
		const modrm = buf[i - 2];
		if (prev !== undefined && modrm !== undefined && (modrm >> 6) === 2 && (modrm & 7) === 4) return v;
		const op = buf[i - 5];
		if (op === 0xa1 || op === 0xa3) return v;
	}
	return null;
}

function callCounts() {
	const out = execFileSync('node', [path.join(__dirname, 'funcs.js'), '--list'], {
		encoding: 'utf8', stdio: 'pipe',
	});
	const counts = new Map();
	for (const line of out.split('\n')) {
		const m = line.match(/^(0x[0-9a-f]+)\t(\d+)/);
		if (m) counts.set(parseInt(m[1], 16), Number(m[2]));
	}
	return counts;
}

function disasm(buf, addr, len) {
	const tmp = '/var/tmp/dcr-' + process.pid + '.bin';
	fs.writeFileSync(tmp, buf.slice(addr, addr + len));
	try {
		return execFileSync('ndisasm', ['-b32', '-w', '-o', '0x' + addr.toString(16), tmp], {
			encoding: 'utf8', stdio: 'pipe',
		}).trimEnd();
	} finally {
		fs.unlinkSync(tmp);
	}
}

// POST with no body, for control endpoints.
function postJson(pathname, body) {
	const data = JSON.stringify(body || {});
	return new Promise((resolve, reject) => {
		const req = http.request('http://127.0.0.1:8097' + pathname, {
			method: 'POST',
			headers: { 'content-type': 'application/json', 'content-length': Buffer.byteLength(data) },
			timeout: 240000,
		}, (res) => {
			let d = '';
			res.on('data', (c) => (d += c));
			res.on('end', () => resolve(d));
		});
		req.on('timeout', () => req.destroy(new Error('timeout')));
		req.on('error', reject);
		req.end(data);
	});
}

function compile(source) {
	const body = JSON.stringify({ source, name: 'CAL' });
	return new Promise((resolve, reject) => {
		const req = http.request(API + '/api/compile', {
			method: 'POST',
			headers: { 'content-type': 'application/json', 'content-length': Buffer.byteLength(body) },
			timeout: 180000,
		}, (res) => {
			let d = '';
			res.on('data', (c) => (d += c));
			res.on('end', () => {
				try { resolve(JSON.parse(d)); } catch { reject(new Error('bad reply: ' + d.slice(0, 200))); }
			});
		});
		req.on('timeout', () => req.destroy(new Error('compile timeout')));
		req.on('error', reject);
		req.end(body);
	});
}

const hex = (bytes) => bytes.map((b) => b.toString(16).padStart(2, '0')).join(' ');

async function main() {
	const buf = loadImage();
	const counts = callCounts();

	let addrs;
	if (opt('only')) {
		addrs = opt('only').split(',').map((a) => parseInt(a.trim().replace(/^0x/, ''), 16));
	} else {
		const n = Number(opt('scan', 25));
		const order = opt('by', 'callers');
		const leaves = [];
		for (const [addr, callers] of [...counts.entries()].sort((a, b) => b[1] - a[1])) {
			if (!cleanEntry(buf, addr)) continue;
			const r = scanRoutine(buf, addr);
			if (r.calls === 0 && r.indirect === 0) leaves.push({ addr, callers, size: r.bytes.length });
		}
		leaves.sort(order === 'size'
			? (a, b) => a.size - b.size || b.callers - a.callers
			: (a, b) => b.callers - a.callers);
		addrs = leaves.slice(0, n).map((l) => l.addr);
	}

	let attempts = {};
	if (opt('attempts')) attempts = JSON.parse(fs.readFileSync(opt('attempts'), 'utf8'));

	const results = [];
	let matched = 0, cord = 0, needsSource = 0;

	for (const addr of addrs) {
		const key = '0x' + addr.toString(16);
		const r = scanRoutine(buf, addr);
		const target = hex(r.bytes);
		const rec = {
			addr: key,
			callers: counts.get(addr) ?? 0,
			length: r.bytes.length,
			target,
			state: 'pending',
			absRef: referencesAbsolute(buf, addr, r.bytes.length),
		};

		rec.attempts = [];
		const tries = attempts[key] || [];
		if (!tries.length) {
			rec.state = 'needs-source';
			needsSource++;
			results.push(rec);
			if (!flag('quiet')) console.log(`${key}  ${String(rec.length).padStart(3)}B  ${String(rec.callers).padStart(4)} callers  needs-source`);
			continue;
		}

		for (const t of tries) {
			// Up to three attempts: a "compile did not finish" from the API is
			// usually the guest being slow after a reload, not a bad source.
			let out = null;
			for (let attempt = 0; attempt < 5; attempt++) {
				out = await compile(t.source);
				if (out.ok) break;
				// Both failure modes are transient: the API reporting "did not
				// finish", and the guest producing no object. Measured: the same
				// source compiles cleanly when run alone and fails with "no object
				// file produced" after several compiles in a row, which is the
				// emulator's compile pipeline losing state, not the C being wrong.
				if (!/did not finish|timeout|no object file/i.test(out.error || '')) break;
				if (attempt < 4) await new Promise((r) => setTimeout(r, 5000));
			}
			if (!out || !out.ok) {
				rec.lastError = out ? out.error : 'no reply';
				if (process.env.DCR_DEBUG) {
					console.error('  DEBUG', key, t.label, '->', JSON.stringify(out).slice(0, 300));
				}
				// A corrupt image poisons every later routine, so recover once and
				// retry rather than recording a false "transient" for everything.
				if (/corrupt FAT|unreadable/i.test(rec.lastError)) {
					console.error('  image corrupt, resetting');
					await postJson('/api/reset', {});
					await new Promise((r) => setTimeout(r, Number(process.env.DCR_BOOTWAIT || 50000)));
					out = await compile(t.source);
					if (!out || !out.ok) { rec.attempts.push({ label: t.label, error: rec.lastError }); continue; }
				} else {
					rec.attempts.push({ label: t.label, error: rec.lastError });
					continue;
				}
			}
			if (out.code === target) {
				rec.state = 'matched';
				rec.matchedSource = t.source;
				rec.matchLabel = t.label;
				break;
			}
			rec.closest = { label: t.label, code: out.code };
		}

		if (rec.state === 'matched') {
			matched++;
		} else {
			// Every cord pull gets a class, so failures can be correlated later
			// rather than re-read one at a time. See tools/cordclass.js.
			const got = rec.closest ? rec.closest.code : (rec.lastError || '');
			if (!rec.closest && rec.lastError) {
				rec.cordClass = 'transient';
			} else if (rec.absRef) {
				rec.cordClass = 'base-fold';
			} else {
				rec.cordClass = classifyMismatch(target, got);
			}
			rec.state = 'cord';
			rec.diagnosis = (CLASSES[rec.cordClass] || {}).summary || rec.cordClass;
			rec.cordRemedy = (CLASSES[rec.cordClass] || {}).remedy;
			cord++;
		}

		results.push(rec);
		// Let the guest settle between routines. Measured: back-to-back compiles
		// start failing with "no object file produced" after about four, and a few
		// seconds of idle recovers it.
		await new Promise((r) => setTimeout(r, 3000));
		if (!flag('quiet')) {
			console.log(`${key}  ${String(rec.length).padStart(3)}B  ${String(rec.callers).padStart(4)} callers  ${rec.state}`);
		}
	}

	const attempted = matched + cord;
	const summary = {
		generated: new Date().toISOString(),
		attempted,
		matched,
		cord,
		needsSource,
		matchRate: attempted ? matched / attempted : null,
		results,
	};

	const outPath = opt('out', 'analysis/decompilation-run.json');
	fs.mkdirSync(path.dirname(path.join(ROOT, outPath)), { recursive: true });
	fs.writeFileSync(path.join(ROOT, outPath), JSON.stringify(summary, null, 2));

	console.log();
	console.log(`attempted ${attempted}, matched ${matched}, cord ${cord}, needs-source ${needsSource}`);
	if (attempted) {
		const pct = (matched / attempted * 100).toFixed(0);
		console.log(`match rate: ${pct}%`);
		console.log(matched / attempted < 0.3
			? 'BELOW THRESHOLD: plan item 4f says the toolchain is not the original. Record as a negative.'
			: 'At or above threshold: the loop is measuring the queue, not a broken toolchain.');
	}
	// Failure classes, so a run is correlatable without reading every record.
	const byClass = {};
	for (const r of results) {
		if (r.state !== 'cord') continue;
		(byClass[r.cordClass] = byClass[r.cordClass] || []).push(r.addr);
	}
	if (Object.keys(byClass).length) {
		console.log();
		console.log('cord pulls by class:');
		for (const [k, v] of Object.entries(byClass).sort((a, b) => b[1].length - a[1].length)) {
			const sev = (CLASSES[k] || {}).severity || '-';
			console.log(`  ${String(v.length).padStart(2)}  ${k.padEnd(24)} ${sev.padEnd(12)} ${v.slice(0, 5).join(' ')}${v.length > 5 ? ' ...' : ''}`);
		}
	}
	console.log(`written to ${outPath}`);

	// Disassembly for every unattempted routine, so the next step is source
	// writing rather than more discovery.
	if (flag('disasm')) {
		for (const rec of results) {
			if (rec.state !== 'needs-source') continue;
			console.log(`\n=== ${rec.addr} (${rec.length} bytes, ${rec.callers} callers)`);
			console.log(disasm(buf, parseInt(rec.addr, 16), rec.length));
		}
	}
}

main().catch((e) => { console.error(e.message); process.exit(1); });
