#!/usr/bin/env node
'use strict';
// tools/cserve.js - HTTP API to compile C with the FM Towns High C kit and get the bytes back.
//
// WHY THIS EXISTS. The calibration loop is "write a .c, compile it, diff the
// bytes against the game". Doing that by hand took about 40 seconds per cycle
// because it rebooted the emulator. Measurement showed the transport is the
// floppy image itself, which the container mounts read-write at /data:
//
//   host writes a file into the image   -> guest CANNOT see it (emulator holds
//                                          the image in memory)
//   customer writes, host reads         -> visible immediately, no reload
//   host writes, then FD0EJECT + FD0LOAD -> guest sees it, in about 2 seconds
//
// So one reload replaces one reboot. Measured end to end: 11.1 seconds from
// source to a parsed object file. That is what makes byte-diffing practical.
//
// TWO APIS.
//
//   /api/fs/*       create, read, list and delete files on the mounted floppy.
//                   Writes are invisible to the guest until a reload, which is
//                   why PUT reloads by default: a write the guest cannot see is
//                   the trap this whole page exists to avoid.
//
//   /api/compile    put source, reload, run the generator, parse the OMF, and
//                   return the emitted code bytes. The bytes are the point; the
//                   .obj is an implementation detail.
//
// Concurrency is 1. One emulator, one floppy. Requests are serialised by a
// mutex and a second concurrent compile gets 429 rather than interleaving.
//
// Usage:
//   node tools/cserve.js [--port 8097] [--api http://127.0.0.1:8096]
//                        [--image /data/dos62v6.hdm] [--container dosboot]
//
// Every host-side floppy operation is mtools against the image on the host, so
// the path given is the HOST path; the guest-side path used in emulator console
// commands is derived by replacing the saves/ prefix with /data/.

const http = require('http');
const fs = require('fs');
const path = require('path');
const { execFileSync } = require('child_process');

const ROOT = path.join(__dirname, '..');
const args = process.argv.slice(2);
const opt = (name, dflt) => {
	const i = args.indexOf('--' + name);
	return i >= 0 && args[i + 1] ? args[i + 1] : dflt;
};

const PORT = Number(opt('port', 8097));
const TSUGARU = opt('api', 'http://127.0.0.1:8096');
const IMAGE_HOST = path.resolve(ROOT, opt('image', 'saves/dos62v6.hdm'));
const CONTAINER = opt('container', 'dosboot');
const DISPLAY = opt('display', ':99');
const COMPILE_TIMEOUT_MS = Number(opt('timeout', 90000));
// The image a reset restores from. Never written to by the API, so it stays
// pristine no matter what happens to the working copy.
const PRISTINE = path.resolve(ROOT, opt('pristine', 'saves/dos62v6.pristine.hdm'));

// The guest sees the image at /data because the container mounts saves/ there.
function guestImagePath() {
	const m = IMAGE_HOST.match(/[\\/]saves[\\/](.+)$/);
	if (!m) throw new Error(`image must live under saves/ so the container can see it: ${IMAGE_HOST}`);
	return '/data/' + m[1];
}

// --- DOS 8.3, enforced here rather than trusted to DOS ----------------------
//
// Every name this server creates is validated before use, because DOS silently
// truncates rather than complaining. `.DONE` became `.DON` on the image, so a
// poll for `.DONE` never matched and every compile reported "did not finish"
// while the compiler had actually succeeded. That failure cost an hour, and
// these functions exist so it cannot happen again.
//
// Name:      1-8 chars, A-Z 0-9, first char a letter. Underscore is legal in
//            8.3 but this kit's tools have not been tested with it, so it is
//            rejected rather than half-supported.
// Extension: 1-3 chars, A-Z 0-9. Never assume a longer extension survives.
const NAME_RE = /^[A-Z][A-Z0-9]{0,7}$/;
const EXT_RE = /^[A-Z0-9]{1,3}$/;

function check83(name, ext) {
	if (!NAME_RE.test(name)) {
		throw new Error(`8.3 violation: name "${name}" must be 1-8 chars, A-Z and 0-9, starting with a letter`);
	}
	if (!EXT_RE.test(ext)) {
		throw new Error(`8.3 violation: extension "${ext}" must be 1-3 chars, A-Z and 0-9`);
	}
	return ext ? `${name}.${ext}` : name;
}

// Validates a DOS path as the guest would see it: optional leading slash, then
// optional DIR(S)\, then NAME[.EXT]. Rejects anything DOS would truncate or
// reject, so the caller learns now rather than from a silent mismatch.
function checkDosPath(p) {
	if (typeof p !== 'string' || !p.length) {
		throw new Error('path required');
	}
	// The HTTP surface always sends a leading slash. Internal callers use bare
	// names. Accept both, but reject .. so a crafted path cannot escape the image.
	if (p.includes('..')) {
		throw new Error('path must not contain ".."');
	}
	const trimmed = p.replace(/^\/+/, '');
	if (!trimmed) throw new Error('path must name a file');
	const parts = trimmed.split('/');
	const base = parts.pop();
	const dirs = parts;
	for (const d of dirs) {
		if (!NAME_RE.test(d.toUpperCase())) {
			throw new Error(`8.3 violation: directory "${d}" must be 1-8 chars, A-Z and 0-9`);
		}
	}
	const dot = base.lastIndexOf('.');
	const nm = (dot > 0 ? base.slice(0, dot) : base).toUpperCase();
	const ex = dot > 0 ? base.slice(dot + 1).toUpperCase() : '';
	check83(nm, ex);
	return dirs.length ? dirs.join('/') + '/' + (ex ? nm + '.' + ex : nm) : (ex ? nm + '.' + ex : nm);
}

// --- mtools: the whole host-side filesystem API ----------------------------

function mrun(cmd, mtArgs, input) {
	return execFileSync(cmd, mtArgs, {
		encoding: 'buffer',
		input,
		stdio: [input ? 'pipe' : 'ignore', 'pipe', 'pipe'],
	});
}

function listImage(dir = '/') {
	const out = mrun('mdir', ['-i', IMAGE_HOST, '-b', `::${dir}`]).toString('latin1');
	return out.split('\n').map((l) => l.trim()).filter(Boolean)
		.filter((l) => !/^::.*[\\/]$/.test(l))   // mdir -b lists directories with a trailing slash
		.map((l) => l.replace(/^::/, ''));   // mdir -b prefixes entries with ::
}

function readImageFile(p) {
	checkDosPath(p);
	const out = mrun('mtype', ['-i', IMAGE_HOST, `::${p}`]);
	return out;
}

function writeImageFile(p, buf) {
	checkDosPath(p);
	// mcopy -o overwrites; the destination is an absolute DOS path inside the image.
	const tmp = '/var/tmp/cserve-put-' + process.pid;
	fs.writeFileSync(tmp, buf);
	try {
		execFileSync('mcopy', ['-o', tmp, '-i', IMAGE_HOST, `::${p}`], { stdio: 'pipe' });
	} finally {
		fs.unlinkSync(tmp);
	}
}

function deleteImageFile(p) {
	checkDosPath(p);
	execFileSync('mdel', ['-i', IMAGE_HOST, `::${p}`], { stdio: 'pipe' });
}

function fileSize(p) {
	try {
		checkDosPath(p);
		const out = mrun('mdir', ['-i', IMAGE_HOST, `::${p}`]).toString('latin1');
		// "NAME     EXT      1234 2026-10-25  11:23"
		const m = out.match(/\s(\d+)\s+\d{2,4}-\d{2}-\d{2}/);
		return m ? Number(m[1]) : null;
	} catch { return null; }
}

// --- the emulator console ---------------------------------------------------

function apiCmd(line, timeoutMs = 15000) {
	const body = JSON.stringify({ line });
	return new Promise((resolve, reject) => {
		const req = http.request(TSUGARU + '/api/cmd', {
			method: 'POST',
			headers: { 'content-type': 'application/json', 'content-length': Buffer.byteLength(body) },
			timeout: timeoutMs,
		}, (res) => {
			let d = '';
			res.on('data', (c) => (d += c));
			res.on('end', () => {
				try { resolve(JSON.parse(d)); } catch (e) { reject(new Error('bad console reply: ' + d.slice(0, 200))); }
			});
		});
		req.on('timeout', () => { req.destroy(new Error('console timeout: ' + line)); });
		req.on('error', reject);
		req.end(body);
	});
}

function xdoType(text) {
	execFileSync('podman', ['exec', '-e', 'DISPLAY=' + DISPLAY, CONTAINER, 'xdotool', 'type', '--delay', '45', text], { stdio: 'pipe' });
}

function xdoKey(key) {
	execFileSync('podman', ['exec', '-e', 'DISPLAY=' + DISPLAY, CONTAINER, 'xdotool', 'key', key], { stdio: 'pipe' });
}

const sleep = (ms) => new Promise((r) => setTimeout(r, ms));

// The one non-obvious primitive. FD0LOAD alone does NOT re-read the host file;
// the eject is what forces the emulator to drop its in-memory copy. Measured:
// host writes are invisible to the guest until an eject, and visible after.
async function ejectFloppy() {
	await apiCmd('FD0EJECT');
	await sleep(300);
}

async function attachFloppy() {
	// FD0LOAD re-arms write protection on this build. Without FD0UP every guest
	// write silently does nothing, and the failure looks like a compiler bug.
	await apiCmd('FD0UP');
	await sleep(100);
	await apiCmd(`FD0LOAD ${guestImagePath()}`);
	await sleep(800);
	await apiCmd('FD0UP');
	await sleep(200);
}

// Eject, then attach. Exposed for callers that only need the guest to see files
// the host already wrote.
async function reloadFloppy() {
	await ejectFloppy();
	await attachFloppy();
}

// --- free space, and the refusal that prevents corruption -------------------
//
// A full FAT12 volume does not fail cleanly. Measured: 155 leaked files left
// 41,984 bytes free, and after that `mdel` itself started writing back a zeroed
// media byte, so the image read as "Bad media types 00/fe, probably non-MSDOS
// disk" and mtools could not open it at all. Retrying did not help; it needed a
// byte-level repair of the FAT.
//
// So the API refuses to write when space is low, rather than discovering the
// problem after the filesystem is already damaged.
const MIN_FREE_BYTES = 24 * 1024;   // a compile needs about 1 KB; this is headroom

function freeBytes() {
	try {
		const out = mrun('mdir', ['-a', '-i', IMAGE_HOST]).toString('latin1');
		const m = out.match(/([\d\s,]+)\s*bytes free/i);
		if (!m) return null;
		return Number(m[1].replace(/[^0-9]/g, ''));
	} catch {
		return null;
	}
}

// Is the image readable at all? A corrupt FAT makes every mtools call fail.
function imageHealthy() {
	let out;
	try {
		out = execFileSync('mdir', ['-a', '-i', IMAGE_HOST], { stdio: 'pipe', encoding: 'latin1' });
	} catch (e) {
		out = String(e.stderr || e.message || '');
	}
	return !/Bad media types|Cannot initialize|Error reading FAT/i.test(out);
}

// needBytes is the size of the write being attempted. A write bigger than the
// free space fails inside mtools with "Disk full" after it has already started,
// which is exactly the half-written state that damages a FAT12 volume.
function assertWritable(needBytes = 0) {
	if (!imageHealthy()) {
		const err = new Error('floppy image is unreadable (corrupt FAT). POST /api/reset to restore it.');
		err.status = 503;
		throw err;
	}
	const free = freeBytes();
	if (free === null) return;
	// FAT12 allocates in 1 KB clusters, so round the need up.
	const need = Math.ceil(needBytes / 1024) * 1024;
	if (free - need < MIN_FREE_BYTES) {
		const err = new Error(
			`need ${need} bytes for this write and only ${free} are free; refusing, ` +
			`because running out mid-write corrupts a FAT12 volume. ` +
			`POST /api/reset to restore the floppy.`);
		err.status = 507;
		throw err;
	}
}

// --- OMF: High C 1.73 80386 OMF, record size is 3 + length ----------------
// Measured on HELLO.OBJ: this walk consumes the file exactly and every type is
// a valid OMF id. LEDATA in this dialect is index u16, offset u16, group u8,
// then data. Getting the field widths wrong here is how the earlier parser
// mis-read a 32768-byte record off the second byte.

function parseOmf(buf) {
	const records = [];
	let data = [];
	const segs = {};
	let i = 0;
	while (i + 3 <= buf.length) {
		const type = buf[i];
		const len = buf[i + 1] | (buf[i + 2] << 8);
		const body = buf.slice(i + 3, i + 3 + len - 1);
		records.push({ type, len });
		if (type === 0xa0) {
			const idx = body[0] | (body[1] << 8);
			const off = body[2] | (body[3] << 8);
			const chunk = body.slice(5);
			(segs[idx] = segs[idx] || []).push({ off, chunk });
			data = data.concat([...chunk]);
		}
		i += 3 + len;
	}
	// Concatenate per-segment chunks in offset order; segment 1 is CODE for a
	// single-function translation unit.
	const code = Object.keys(segs)
		.map(Number).sort((a, b) => a - b)
		.flatMap((k) => segs[k].sort((a, b) => a.off - b.off).flatMap((e) => [...e.chunk]));
	return { records, segments: Object.keys(segs).length, code };
}

// --- the compile pipeline ---------------------------------------------------

let busy = false;
let gen = 0;

async function compile({ source, name = 'CAL', flags = '', timeoutMs = COMPILE_TIMEOUT_MS }) {
	if (typeof source !== 'string' || !source.trim()) throw new Error('source is required');

	const srcName = String(name).toUpperCase();
	// Validate everything the pipeline will create, up front, so a bad name fails
	// immediately instead of half way through a reload.
	check83(srcName, 'C');
	check83(srcName, 'OBJ');

	// Derived names must not collide with the source name. Taking name[0..5]+'B'
	// could, for an 8-char name, produce the same 8 chars. A fixed distinct stem
	// is simpler to reason about and there is only ever one compile in flight.
	// Complete 8.3 filenames, extension included. Writing 'CCDON' with no dot
	// produced a file called CCDON with no extension, so the poll for CCDON.DON
	// never matched. Names below are of the form NAME.EXT.
	// A generation counter in every output filename. This is the fix for a race
	// that returned the PREVIOUS compile's object for the current source, which
	// is the worst failure mode here because the answer looks entirely valid.
	//
	// The race: the emulator holds the image in memory and flushes it on eject,
	// so a delete-then-write can be undone by the guest's cached copy arriving a
	// moment later. Waiting is not reliable, because the flush timing varies.
	// Making the name unique per request means a stale file can never be mistaken
	// for this run's output: the batch writes GEN<n>.OBJ and we poll for
	// GEN<n>.DON, and neither can pre-exist.
	gen = (gen + 1) % 1000;
	const g = String(gen).padStart(3, '0');
	const objName = `${srcName}`;                  // keep CAL.OBJ for inspection
	const genObj = `G${g}`;                        // G000.OBJ is this run's output
	const batFile = check83('CCBAT', 'BAT');
	const doneFile = check83(`D${g}`, 'DON');
	const logFile = check83(`L${g}`, 'LOG');
	check83(genObj, 'OBJ');

	// CRLF everywhere. A batch written with LF endings runs as one long garbage
	// line, which is a failure that looks like a compiler problem.
	const crlf = (s) => s.replace(/\r\n/g, '\n').replace(/\r/g, '\n').replace(/\n/g, '\r\n');
	const bat = [
		'@ECHO OFF',
		'CD \\',
		'SET HCDIR=Q:\\HC386',
		'SET TOOLSDIR=Q:\\HC386',
		'SET INCLUDE=Q:\\HC386\\INC',
		'SET LIB=Q:\\HC386\\SMALL',
		`Q:\\HC386\\BIN\\HCD386.EXE A:\\${srcName}.C -obj A:\\${genObj}.OBJ ${flags} -dir Q:\\HC386\\INC > A:\\${logFile}`,
		`COPY A:\\${genObj}.OBJ A:\\${srcName}.OBJ > NUL`,
		`DIR A:\\${genObj}.OBJ > A:\\${doneFile}`,
	].join('\r\n') + '\r\n';

	assertWritable();
	const t0 = Date.now();
	const cleanup = [doneFile, logFile, `${genObj}.OBJ`, `${srcName}.OBJ`, `${srcName}.C`, batFile];
	// Cleanup deletes host-side, so the guest must not be holding the volume when
	// it runs. Without this eject the guest writes its cached FAT back over the
	// host's edit and the table tears: measured as 0x400 flipping from `fe ff`
	// (two FAT reserved entries) to `00 f0` (a media descriptor byte where a FAT
	// entry belongs), after which mtools cannot read the image at all.
	//
	// The failure is reproducible and is not about volume or free space: 12
	// compiles in a burst leave the FAT intact, while one source that the
	// compiler rejects breaks it every time, because the failure path calls rmAll
	// immediately after the guest has been writing. See tools/fateject.py.
	const rmAll = async () => {
		try { await ejectFloppy(); } catch { /* already gone */ }
		await sleep(400);
		for (const f of cleanup) {
			try { deleteImageFile(f); } catch { /* already gone */ }
		}
	};

	// Order matters, and getting it wrong produced a wrong answer rather than an
	// error. The emulator holds the image in memory, so:
	//   1. eject first, so the guest's copy is flushed to disk and discarded
	//   2. only then delete the stale result files host-side
	//   3. then write the new source
	//   4. then load, so the guest starts from exactly the files we wrote
	// Deleting before the eject is undone when the guest writes its cached copy
	// back on eject, which would return the PREVIOUS object for the new source.
	await ejectFloppy();
	// The eject is what flushes the guest's cached copy back to the host file.
	// Wait for that writeback to land before deleting, or the delete is undone a
	// moment later and the next compile reads the PREVIOUS object. Measured: this
	// race silently returned the wrong object for the wrong source, which is the
	// worst failure mode available here because it looks like a valid answer.
	await sleep(700);

	for (const f of [doneFile, `${srcName}.OBJ`, logFile]) {
		try { deleteImageFile(f); } catch { /* not present */ }
	}

	writeImageFile(`${srcName}.C`, Buffer.from(crlf(source), 'latin1'));
	writeImageFile(batFile, Buffer.from(bat, 'latin1'));

	await attachFloppy();

	// Type only the batch name: the guest keyboard cannot produce '>' and
	// mangles ':', so every redirection lives in the batch file itself.
	await xdoKey('Return');
	await sleep(300);
	xdoType(batFile);
	await sleep(200);
	await xdoKey('Return');

	const deadline = Date.now() + timeoutMs;
	let done = false;
	while (Date.now() < deadline) {
		await sleep(700);
		if (fileSize(doneFile) !== null) { done = true; break; }
	}

	// The guest writes the object and the .DON in sequence; the .DON can appear
	// before the object has finished flushing to the host file. Retry the read
	// for a moment rather than reporting a false failure.
	let objWait = 0;
	while (done && fileSize(`${genObj}.OBJ`) === null && objWait < 8000) {
		await sleep(400);
		objWait += 400;
	}

	let log = '';
	try { log = readImageFile(logFile).toString('latin1'); } catch { /* none */ }

	if (!done) {
		await rmAll();
		return { ok: false, error: 'compile did not finish', elapsedMs: Date.now() - t0, log };
	}

	let obj;
	try { obj = readImageFile(`${genObj}.OBJ`); } catch {
		await rmAll();
		return { ok: false, error: 'no object file produced', elapsedMs: Date.now() - t0, log };
	}

	const parsed = parseOmf(obj);
	const sha = require('crypto').createHash('sha256').update(obj).digest('hex');

	// Remove everything this request created. This runs on the success path and
	// the failure paths both, via the finally block below, because a compile that
	// times out still leaves three files behind and enough of those fill the
	// volume. Measured failure: 155 leaked files, 41,984 bytes free, and the FAT
	// then came back with a zeroed media byte so mtools could not read the image
	// at all. The whole response is already in hand, so nothing here is worth
	// keeping on disk.

	await rmAll();
	return {
		ok: true,
		name: srcName,
		size: obj.length,
		objSha256: sha,
		records: parsed.records.length,
		segments: parsed.segments,
		code: parsed.code.map((b) => b.toString(16).padStart(2, '0')).join(' '),
		elapsedMs: Date.now() - t0,
		log: log.trim() || undefined,
	};
}

// --- reset ------------------------------------------------------------------
//
// Restores the working image from the pristine master and re-attaches it, so the
// guest boots from a known-good floppy. This is the recovery path for the two
// failure modes above: a full volume, and a corrupt FAT.
//
// It does NOT restart the emulator process. Measured: FD0EJECT + FD0LOAD is
// enough for the guest to pick up a completely replaced image, because the eject
// is what makes the emulator drop its in-memory copy. A full container restart
// costs about a minute and is only needed if the guest itself has wedged.
async function resetFloppy() {
	if (!fs.existsSync(PRISTINE)) {
		throw new Error(`pristine master missing: ${PRISTINE}. It is not regenerable; see docs/compiling-on-fm-towns.md.`);
	}
	const t0 = Date.now();
	// Eject FIRST: otherwise the guest writes its in-memory copy back over the
	// file we are about to replace.
	try { await apiCmd('FD0EJECT'); } catch { /* may already be ejected */ }
	await sleep(400);

	const master = fs.readFileSync(PRISTINE);
	fs.writeFileSync(IMAGE_HOST, master);

	await apiCmd('FD0UP');
	await sleep(100);
	await apiCmd(`FD0LOAD ${guestImagePath()}`);
	await sleep(800);
	await apiCmd('FD0UP');
	await sleep(200);
	// Reboot. Re-attaching alone leaves the guest holding its previous in-memory
	// state: measured, compiles kept failing with "did not finish" until a
	// RESET F0 made it boot from the restored image.
	await apiCmd('RESET F0');
	// Give DOS time to reach a prompt. 45 seconds is the measured boot time; the
	// caller can poll /api/health or simply retry.
	await sleep(Number(opt('bootwait', 45000)));

	return {
		ok: true,
		restoredFrom: PRISTINE,
		bytes: master.length,
		sha256: require('crypto').createHash('sha256').update(master).digest('hex'),
		free: freeBytes(),
		healthy: imageHealthy(),
		rebooted: true,
		elapsedMs: Date.now() - t0,
	};
}

// --- HTTP -------------------------------------------------------------------

function json(res, code, body) {
	const d = Buffer.from(JSON.stringify(body, null, 2));
	res.writeHead(code, { 'content-type': 'application/json', 'content-length': d.length });
	res.end(d);
}

function readBody(req) {
	return new Promise((resolve, reject) => {
		let d = '';
		req.on('data', (c) => { d += c; if (d.length > 4e6) req.destroy(); });
		req.on('end', () => resolve(d));
		req.on('error', reject);
	});
}

const server = http.createServer(async (req, res) => {
	const url = new URL(req.url, 'http://x');
	const p = url.pathname;
	try {
		if (p === '/' || p === '/api') {
			return json(res, 200, {
				service: 'fm-towns C compiler API',
				image: IMAGE_HOST,
				guestImage: guestImagePath(),
				tsugaru: TSUGARU,
				endpoints: [
					'GET    /api/fs/list?path=/',
					'GET    /api/fs/file?path=/X.C',
					'PUT    /api/fs/file?path=/X.C&reload=1   body: raw file bytes',
					'DELETE /api/fs/file?path=/X.C',
					'POST   /api/fs/reload',
					'GET    /api/health                      space, health, canWrite',
					'POST   /api/reset                       restore floppy from pristine master',
					'POST   /api/compile                     {"source":"...","name":"CAL","flags":"-O"}',
				],
			});
		}

		if (p === '/api/fs/list' && req.method === 'GET') {
			return json(res, 200, { path: url.searchParams.get('path') || '/', files: listImage(url.searchParams.get('path') || '/') });
		}

		if (p === '/api/fs/file' && req.method === 'GET') {
			const f = url.searchParams.get('path');
			if (!f) return json(res, 400, { error: 'path required' });
			const buf = readImageFile(f);
			res.writeHead(200, { 'content-type': 'application/octet-stream', 'content-length': buf.length });
			return res.end(buf);
		}

		if (p === '/api/fs/file' && req.method === 'PUT') {
			const f = url.searchParams.get('path');
			if (!f) return json(res, 400, { error: 'path required' });
			const buf = await readBody(req);
			if (!buf.length) return json(res, 400, { error: 'empty body; PUT needs raw file bytes' });
			assertWritable(buf.length);
			writeImageFile(f, Buffer.from(buf, 'latin1'));
			// Default reload:1, because a write the guest cannot see is a trap.
			const doReload = url.searchParams.get('reload') !== '0';
			if (doReload) await reloadFloppy();
			return json(res, 200, { ok: true, path: f, bytes: buf.length, reloaded: doReload });
		}

		if (p === '/api/fs/file' && req.method === 'DELETE') {
			const f = url.searchParams.get('path');
			if (!f) return json(res, 400, { error: 'path required' });
			if (fileSize(f) === null) return json(res, 404, { error: 'not found', path: f });
			deleteImageFile(f);
			return json(res, 200, { ok: true, deleted: f });
		}

		if (p === '/api/health' && req.method === 'GET') {
			return json(res, 200, {
				image: IMAGE_HOST,
				healthy: imageHealthy(),
				freeBytes: freeBytes(),
				minFreeBytes: MIN_FREE_BYTES,
				canWrite: imageHealthy() && (freeBytes() ?? 0) >= MIN_FREE_BYTES,
				pristine: fs.existsSync(PRISTINE),
			});
		}

		if (p === '/api/reset' && req.method === 'POST') {
			return json(res, 200, await resetFloppy());
		}

		if (p === '/api/fs/reload' && req.method === 'POST') {
			await reloadFloppy();
			return json(res, 200, { ok: true, reloaded: guestImagePath() });
		}

		if (p === '/api/compile' && req.method === 'POST') {
			const body = JSON.parse(await readBody(req) || '{}');
			if (busy) return json(res, 429, { error: 'one compile at a time; retry shortly' });
			busy = true;
			try {
				return json(res, 200, await compile(body));
			} finally {
				busy = false;
			}
		}

		json(res, 404, { error: 'no route: ' + req.method + ' ' + p });
	} catch (e) {
		// mtools reports "Command failed: mdel ..." with the real reason on stderr.
		// Surface that reason, because "Command failed" alone tells the caller nothing.
		const err = String(e.stderr || '').trim() || e.message;
		const notFound = /not found|no such file|File .* not found/i.test(err);
		// 4xx for caller error, 5xx for anything else.
		const callerError = /8\.3 violation|path must|required|invalid/i.test(err);
		// `e.status` from execFileSync is a process exit code (1), not an HTTP
		// status. Only our own errors set a deliberate HTTP code.
		const httpStatus = Number.isInteger(e.status) && e.status >= 400 && e.status <= 599
			? e.status
			: (notFound ? 404 : callerError ? 400 : 500);
		json(res, httpStatus, {
			error: notFound ? 'not found' : err.slice(0, 400),
			stderr: e.stderr ? String(e.stderr).trim().slice(0, 800) : undefined,
		});
	}
});

server.listen(PORT, '127.0.0.1', () => {
	console.log(`[cserve] http://127.0.0.1:${PORT}`);
	console.log(`[cserve] image  ${IMAGE_HOST}`);
	console.log(`[cserve] guest  ${guestImagePath()}`);
	console.log(`[cserve] tsugaru ${TSUGARU}`);
});
