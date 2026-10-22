#!/usr/bin/env node
// supervisor.js - own the emulator's tty and expose it over HTTP.
//
// Problem this solves: Tsugaru_CUI reads console commands from stdin, but a
// detached container has no stdin. Binding it to a pipe means nothing can type
// into it after start. This supervisor holds both ends:
//
//   supervisor  ->  child Tsugaru_CUI (stdin/stdout piped)
//   supervisor  <-  HTTP API on :8080 from anywhere
//
// so keystrokes, screenshot requests, debugger commands and PALETTE dumps are
// all reachable over the network while the game runs.
//
// Endpoints (all under /api):
//   GET  /api/status            process state, uptime, command count
//   POST /api/keys   {text}     type characters into the VM (TYPE per char)
//   POST /api/type   {text}     same as keys, alias
//   POST /api/cmd    {line}     send one raw console command
//   POST /api/palette           PRI PALETTE, returns parsed palette
//   POST /api/crtc              PRI CRTC, returns raw text
//   POST /api/state             STA, returns raw text
//   POST /api/run               RUN, resume the VM
//   POST /api/pause             PAU
//   POST /api/shot   {name}     capture the X window to analysis/, returns path
//   GET  /api/log?since=N       console output from line N
//   WS   /api/stream            live console output
//
// Everything is line-oriented: the child's stdout is buffered into lines and
// mirrored to the API. Requests that expect output (palette, crtc, state) wait
// for a sentinel rather than sleeping a fixed time.

'use strict';

const http = require('http');
const fs = require('fs');
const path = require('path');
const crypto = require('crypto');
const { spawn, execFileSync } = require('child_process');
const screen = require('./screen');

const PORT = Number(process.env.API_PORT || 8080);
const OUT_DIR = process.env.OUT_DIR || '/data/analysis';
const EMU = process.env.EMU_BIN || '/emulator/Tsugaru_CUI';
const DISPLAY = process.env.DISPLAY || ':99';

// Save disk editor. SAVE_DISK points at the floppy image currently mounted in
// drive 0, and the editor reads and writes that file directly. It is safe to
// edit while the VM is paused or stopped, but not while it is running, because
// Tsugaru keeps the mounted image open and rewrites it on write-back.
const SAVE_DISK = process.env.SAVE_DISK || '/data/save.hdm';
const EDITOR = path.join(__dirname, 'savedisk.js');
const EDITOR_HTML = (() => {
	try { return fs.readFileSync(path.join(__dirname, 'editor.html'), 'utf8'); }
	catch { return '<h1>editor.html missing</h1>'; }
})();
let savedisk = null;
try {
	savedisk = require(EDITOR);
} catch (e) {
	// The editor is optional. Everything else in the supervisor still works.
	console.error('[supervisor] save editor unavailable: ' + e.message);
}

fs.mkdirSync(OUT_DIR, { recursive: true });

// ---------------------------------------------------------------------------
// Console: one child, one stdin, line-buffered stdout
// ---------------------------------------------------------------------------

class Console {
	constructor(bin, args) {
		this.bin = bin;
		this.args = args;
		this.lines = [];
		this.buf = '';
		this.waiters = [];
		this.subscribers = new Set();
		this.startedAt = Date.now();
		this.sent = 0;
		this.queue = [];
		this.busy = false;
	}

	start() {
		this.proc = spawn(this.bin, this.args, {
			stdio: ['pipe', 'pipe', 'pipe'],
			env: { ...process.env, DISPLAY },
		});
		this.proc.stdout.setEncoding('utf8');
		this.proc.stderr.setEncoding('utf8');
		const onData = (chunk) => this._feed(chunk);
		this.proc.stdout.on('data', onData);
		this.proc.stderr.on('data', onData);
		this.proc.on('exit', (code) => {
			this.exitCode = code;
			this._feed('\n[supervisor] emulator exited with code ' + code + '\n');
		});
		this.proc.on('error', (e) => {
			this._feed('[supervisor] spawn error: ' + e.message + '\n');
		});
	}

	_feed(chunk) {
		this.buf += chunk;
		let idx;
		while ((idx = this.buf.indexOf('\n')) >= 0) {
			const line = this.buf.slice(0, idx).replace(/\r$/, '');
			this.buf = this.buf.slice(idx + 1);
			this._line(line);
		}
	}

	_line(line) {
		const entry = { n: this.lines.length, t: Date.now(), line };
		this.lines.push(entry);
		// Cap retained output so a long session cannot grow unbounded.
		if (this.lines.length > 20000) this.lines.splice(0, 5000);
		for (const sub of this.subscribers) {
			try { sub(entry); } catch { /* subscriber gone */ }
		}
		for (let i = this.waiters.length - 1; i >= 0; i--) {
			const w = this.waiters[i];
			if (w.predicate(line)) {
				w.results.push(line);
				if (w.results.length >= w.want) {
					this.waiters.splice(i, 1);
					clearTimeout(w.timer);
					w.resolve(w.results);
				}
			}
		}
	}

	write(line) {
		if (!this.proc || this.exitCode !== undefined) throw new Error('emulator not running');
		this.proc.stdin.write(line + '\n');
		this.sent++;
		// Everything goes through one queue so commands cannot interleave.
		return this.enqueue(async () => {
			await new Promise((r) => setTimeout(r, 80));
		});
	}

	// Serialised command execution.
	enqueue(fn) {
		return new Promise((resolve, reject) => {
			this.queue.push({ fn, resolve, reject });
			this._drain();
		});
	}

	async _drain() {
		if (this.busy) return;
		this.busy = true;
		while (this.queue.length) {
			const { fn, resolve, reject } = this.queue.shift();
			try { resolve(await fn()); } catch (e) { reject(e); }
		}
		this.busy = false;
	}

	// Wait for N lines matching a predicate, with a timeout.
	await(predicate, want = 1, timeoutMs = 8000) {
		return new Promise((resolve) => {
			const w = { predicate, want, results: [], resolve };
			w.timer = setTimeout(() => {
				const i = this.waiters.indexOf(w);
				if (i >= 0) this.waiters.splice(i, 1);
				resolve(w.results);
			}, timeoutMs);
			this.waiters.push(w);
		});
	}

	// Send a command and collect output until the prompt returns or a sentinel
	// appears. Tsugaru echoes ">" before reading the next command.
	async command(line, opts = {}) {
		const { predicate = null, want = 1, timeoutMs = 8000 } = opts;
		const startN = this.lines.length;
		this.write(line);
		if (predicate) {
			await this.await(predicate, want, timeoutMs);
		} else {
			await new Promise((r) => setTimeout(r, 250));
		}
		return this.lines.slice(startN).map((l) => l.line);
	}

	// Send keystrokes into the VM.
	//
	// The console's TYPE command is unreliable here: it is accepted without
	// error but does not move the game, verified by identical screenshots
	// before and after. xdotool against the Tsugaru window does work, so that
	// is the default. TYPE remains available via /api/cmd for anyone who wants
	// the raw console route.
	async type(text, perCharMs = 120) {
		const sent = [];
		for (const ch of text) {
			xkey(ch);
			sent.push(ch);
			await new Promise((r) => setTimeout(r, perCharMs));
		}
		return sent;
	}

	log(since = 0, limit = 500) {
		return this.lines.slice(since, since + limit);
	}

	status() {
		return {
			running: this.exitCode === undefined,
			exitCode: this.exitCode ?? null,
			pid: this.proc ? this.proc.pid : null,
			uptimeMs: Date.now() - this.startedAt,
			lines: this.lines.length,
			commandsSent: this.sent,
			display: DISPLAY,
		};
	}
}

// ---------------------------------------------------------------------------
// Palette parsing
// ---------------------------------------------------------------------------
// PRI PALETTE prints:
//   16-Color Palette
//   Page0:061C33 ... (16 six-digit RGB values, space separated)
//   Page1:...

function parsePalette(lines) {
	const out = { raw: lines, pages: [] };
	for (const l of lines) {
		const m = l.match(/^Page(\d):(.+)$/);
		if (m) {
			const colours = m[2].trim().split(/\s+/).filter(Boolean);
			out.pages.push({ page: Number(m[1]), colours });
		}
	}
	return out;
}

// ---------------------------------------------------------------------------
// Screenshot
// ---------------------------------------------------------------------------

// The Tsugaru window is titled "FM Towns Emulator - TSUGARU". Its geometry is
// 640x496 rather than 640x480 because the window manager adds a title bar, so
// matching on 640x480 exactly fails. Match on the window name first, then fall
// back to any window whose width is 640.
function findWindow() {
	const env = { ...process.env, DISPLAY };
	try {
		const byName = execFileSync('xdotool', ['search', '--name', 'TSUGARU'], { env, encoding: 'utf8' })
			.split('\n')
			.map((s) => s.trim())
			.filter(Boolean);
		if (byName.length) return byName[byName.length - 1];
	} catch { /* no match */ }

	try {
		const ids = execFileSync('xdotool', ['search', '--class', ''], { env, encoding: 'utf8' })
			.split('\n')
			.map((s) => s.trim())
			.filter(Boolean);
		for (const id of ids) {
			try {
				const geo = execFileSync('xdotool', ['getwindowgeometry', id], { env, encoding: 'utf8' });
				if (/Geometry:\s*640x/.test(geo)) return id;
			} catch { /* skip */ }
		}
	} catch { /* none */ }
	return null;
}

// Capture the screen. Returns the PNG path plus, optionally, text renderings so
// a model without vision can read it. `mode` is one of:
//   file   path only
//   ascii  luminance ramp, good for layout
//   text   character grid, good for reading the dialogue and menus
//   stats  colour census, answers "is this screen in colour yet"
//   all    every rendering, the default
function screenshot(name, mode = 'all', opts = {}) {
	const safe = String(name || 'shot-' + Date.now()).replace(/[^A-Za-z0-9._-]/g, '_');
	const file = path.join(OUT_DIR, safe + '.png');
	// Capture the ROOT window, not the emulator's window id.
	//
	// This is counter-intuitive and was learned the hard way. Capturing by
	// window id misses what the emulator actually puts on screen, because the
	// Tsugaru window can be occluded by its own frame or by another client
	// surface. Measured directly: a window-id capture returned an 8-colour
	// text-mode file browser while a simultaneous root capture of the same
	// moment returned a 1104-colour graphics screen. Root is what a person
	// looking at noVNC sees, so root is the only honest source.
	const target = 'root';
	execFileSync('import', ['-window', target, file], {
		env: { ...process.env, DISPLAY },
		stdio: ['ignore', 'ignore', 'pipe'],
	});

	const out = { file, name: path.basename(file), window: target };
	if (mode === 'file') return out;

	const img = screen.decodePNG(fs.readFileSync(file));
	out.size = { width: img.width, height: img.height };

	if (mode === 'ascii' || mode === 'all') {
		out.ascii = screen.toAscii(img, Number(opts.cols) || 100);
	}
	if (mode === 'text' || mode === 'all') {
		out.text = screen.toTextGrid(img, {
			cellW: Number(opts.cellW) || 8,
			cellH: Number(opts.cellH) || 16,
		});
	}
	if (mode === 'stats' || mode === 'all') {
		out.stats = screen.colourStats(img);
	}
	return out;
}

// ---------------------------------------------------------------------------
// HTTP
// ---------------------------------------------------------------------------

function json(res, code, obj) {
	const body = JSON.stringify(obj, null, 2);
	res.writeHead(code, {
		'content-type': 'application/json; charset=utf-8',
		'content-length': Buffer.byteLength(body),
		'access-control-allow-origin': '*',
	});
	res.end(body);
}

function readBody(req) {
	return new Promise((resolve, reject) => {
		let data = '';
		req.on('data', (c) => {
			data += c;
			if (data.length > 1e6) { reject(new Error('body too large')); req.destroy(); }
		});
		req.on('end', () => {
			if (!data) return resolve({});
			try { resolve(JSON.parse(data)); } catch { resolve({ text: data }); }
		});
		req.on('error', reject);
	});
}

// Guard for the save-editor routes, so a missing module gives a clear message
// rather than "is not a function".
function editor() {
	if (!savedisk) throw new Error('save editor not available: ' + EDITOR + ' did not load');
}

const ROUTES = {
	'GET /api/status': async () => con.status(),

	'GET /api/log': async (q) => con.log(Number(q.since || 0), Number(q.limit || 500)),

	'POST /api/cmd': async (_q, body) => {
		if (!body.line) throw new Error('missing "line"');
		const out = await con.command(body.line, {
			predicate: body.until ? (l) => l.includes(body.until) : null,
			want: body.want ? Number(body.want) : 1,
			timeoutMs: body.timeoutMs ? Number(body.timeoutMs) : 5000,
		});
		return { sent: body.line, output: out };
	},

	'POST /api/keys': async (_q, body) => {
		const text = body.text ?? body.keys;
		if (text === undefined) throw new Error('missing "text"');
		const sent = await con.type(String(text));
		return { typed: String(text), keycodes: sent, lines: con.lines.length };
	},

	'POST /api/type': async (_q, body) => ROUTES['POST /api/keys'](_q, body),

	// Named keys: Return, Up, Down, Left, Right, space, Escape, F1..F12.
	// Faster and more reliable than typing printable text for navigation.
	'POST /api/key': async (_q, body) => {
		const names = body.keys ?? body.key;
		if (names === undefined) throw new Error('missing "keys"');
		const list = Array.isArray(names) ? names : String(names).split(/[,\s]+/).filter(Boolean);
		for (const k of list) {
			xkeyNamed(k);
			await new Promise((r) => setTimeout(r, Number(body.delay) || 150));
		}
		return { sent: list };
	},

	'POST /api/run': async () => ({ output: await con.command('RUN') }),
	'POST /api/pause': async () => ({ output: await con.command('PAU') }),
	'POST /api/state': async () => ({ output: await con.command('STA') }),

	'POST /api/palette': async () => {
		// Palette prints a header plus two Page rows.
		const out = await con.command('PRI PALETTE', {
			predicate: (l) => /^Page[01]:/.test(l),
			want: 2,
			timeoutMs: 5000,
		});
		return parsePalette(out);
	},

	'POST /api/crtc': async () => {
		const out = await con.command('PRI CRTC', { timeoutMs: 4000 });
		return { output: out };
	},

	'POST /api/shot': async (q, body) => {
		return screenshot(body.name, body.mode || q.mode || 'file', body);
	},

	// Mouse. The Tsugaru OS menu needs clicking, not typing.
	//   {"x":320,"y":240}            move only
	//   {"x":320,"y":240,"click":1}  left click
	'POST /api/mouse': async (_q, body) => {
		const x = Number(body.x);
		const y = Number(body.y);
		if (!Number.isFinite(x) || !Number.isFinite(y)) throw new Error('need numeric x and y');
		const r = xmouse(findWindow(), x, y, body.click === undefined ? 0 : Number(body.click));
		return { x, y, click: body.click || 0, ...r };
	},

	// Click a fraction of the window: {"fx":0.5,"fy":0.5}. Handy when the
	// exact pixel is not known but the on-screen position roughly is.
	'POST /api/clickat': async (_q, body) => {
		const img = null;
		const win = findWindow() || 'root';
		const env = { ...process.env, DISPLAY };
		let w = 640, h = 480;
		try {
			const geo = execFileSync('xdotool', ['getwindowgeometry', win], { env, encoding: 'utf8' });
			const m = geo.match(/Geometry:\s*(\d+)x(\d+)/);
			if (m) { w = Number(m[1]); h = Number(m[2]); }
		} catch { /* defaults */ }
		const x = Math.round(Number(body.fx || 0.5) * w);
		const y = Math.round(Number(body.fy || 0.5) * h);
		const ok = xmouse(win, x, y, body.click === undefined ? 1 : Number(body.click));
		return { fx: body.fx, fy: body.fy, x, y, window: { w, h }, ok };
	},

	// Convenience: capture and render as text in one call, no file handling.
	'GET /api/screen': async (q) => {
		return screenshot(q.name, q.mode || 'all', q);
	},

	// Return the raw PNG bytes for a browser or a human.
	'GET /api/shot.png': async (q) => ({ __raw: recordShot(q.name) }),

	// --- save disk editor ---------------------------------------------------
	// Reads and writes the floppy image mounted in drive 0. The roster format is
	// plain text, so the editor is a structured view over a text file inside a
	// FAT12 image. See FINDINGS.md 8.7.
	//
	// Editing while the VM is running is unsafe: Tsugaru holds the image open and
	// flushes its own view back over ours. Callers should pause first.

	'GET /api/save/info': async () => {
		editor();
		if (!fs.existsSync(SAVE_DISK)) return { disk: SAVE_DISK, present: false, files: [], slots: [] };
		const img = fs.readFileSync(SAVE_DISK);
		const files = savedisk.listRoot(img).map((e) => ({
			name: e.name, size: e.size, cluster: e.cluster, directory: e.attr & 0x10 ? true : false,
		}));
		return { disk: SAVE_DISK, present: true, size: img.length, files, slots: savedisk.slotsOf(img) };
	},

	// Create or overwrite one slot from a description. Everything is optional
	// and falls back to a safe default, so a caller can send just { slot, name }.
	'POST /api/save/slot': async (_q, body) => {
		editor();
		const slot = Number(body.slot);
		if (!Number.isInteger(slot) || slot < 0 || slot > 3) throw new Error('slot must be 0..3');
		if (!fs.existsSync(SAVE_DISK)) throw new Error('no save disk at ' + SAVE_DISK);

		const img = fs.readFileSync(SAVE_DISK);
		const roster = savedisk.readRoster(img);
		if (!roster) throw new Error('ROSTER1.UT2 not present on the disk');

		const slots = savedisk.slotsOf(img);
		// Choose a template: an existing filled slot, else any slot block.
		const donors = slots.filter((s) => s.name && s.slot !== slot);
		const donor = (donors.find((s) => s.fields.PROFESSION === body.profession) || donors[0]) || null;

		const PROF = { F: { spid: 2 }, C: { spid: 6 }, W: { spid: 10 }, T: { spid: 14 } };
		const profession = String(body.profession || 'F').toUpperCase().slice(0, 1);
		if (!PROF[profession]) throw new Error('profession must be one of F, C, W, T');

		let text = roster.text;
		const parsed = savedisk.parseSlots(text);
		const target = parsed.find((s) => s.slot === slot);
		if (!target) throw new Error('no slot ' + slot + ' block in the roster');

		// Rebuild the slot block as a clean template rather than inheriting a
		// donor's leftovers, so the result is predictable.
		const defaults = {
			MODE: '', LANGAGE: 'E', SHAPE: 0, SPID: PROF[profession].spid, TORCHES: 0,
			STRENGTH: 10, AGILITY: 10, STAMINA: 10, CHARISMA: 10, WISDOM: 10, INTELLIGENCE: 10,
			RACE: 'H', PROFESSION: profession, SEX: 'M', MAGIC: 65,
			HP: 400, MHP: 400, EXPERIENCE: 0, FOOD: 40000, GOLD: 400, KEY: 0, ERA: 2, TOOLS: 0,
			R_ARMOUR: 'A', R_WEAPON: 'A', SKIN: 1, CLOTH: 1, LEATHER: 0, CHAIN: 0, PLATE: 0,
			REFLECT: 0, POWER: 0, HAND: 1, DAGGER: 1, MACE: 0, AXE: 0, BOW: 0, SWORD: 0,
			GREAT_SWORD: 0, LIGHT_SWORD: 0, PHASER: 0, QUICK_SWORD: 0, RING: 0, WAND: 0,
			STAFF: 0, BOOTS: 0, CLOAK: 0, HELM: 0, GEM: 0, ANKH: 0, RED_GEM: 0, SKULL_KEY: 0,
			GREEN_GEM: 0, BRASS_BUTTON: 0, BLUE_TASSLE: 0, STRANGE_COIN: 0, GREEN_IDOL: 0,
			TRI_LITHIUM: 0, NONE: 0, LIGHT: 0, DOWN: 0, UP: 0, PASSWALL: 0, SURFACE: 0,
			PRAYER: 0, MISSILE: 0, BLINK: 0, KILL: 0, SCORE: 0, MAP: 0, MAP_X: 0, MAP_Y: 0,
			DUNG_X: 0, DUNG_Y: 0, PLAYER_X: 20, PLAYER_Y: 20, TORCH: 0, SPELL: 0,
			VEHICLE: 0, SEED: 80, FUEL: 0, FOUND: 0, WORLD: 0, ARM: 0, FOOT: 0, SLEEP: 0,
			GATE_X: 0, GATE_Y: 0, GATE_TIME: 0,
		};

		const overrides = {};
		for (const k of Object.keys(defaults)) if (body[k] !== undefined) overrides[k] = body[k];
		for (const k of Object.keys(body)) if (k in defaults) overrides[k] = body[k];

		const name = String(body.name || 'HERO').toUpperCase().slice(0, 15);
		// Start from the donor block so fields this template does not know about
		// survive, then override everything we do know.
		const lines = [];
		const seen = new Set();
		const donorText = donor ? parsed.find((s) => s.slot === donor.slot).text : '';
		for (const line of donorText.split(/\r?\n/)) {
			const m = line.match(/^([A-Z_(][A-Z_0-9()]*)=(.*)$/);
			if (!m) continue;
			const key = m[1];
			if (key === '(' + donor.slot + ')NAME') { lines.push('(' + slot + ')NAME=' + name); seen.add('NAME'); continue; }
			if (seen.has(key)) continue;
			seen.add(key);
			const v = overrides[key] !== undefined ? overrides[key] : defaults[key] !== undefined ? defaults[key] : m[2];
			lines.push(key + '=' + v);
		}
		// Append any default field the donor did not carry.
		for (const [key, v] of Object.entries(defaults)) {
			if (key === 'NAME' || seen.has(key)) continue;
			lines.push(key + '=' + (overrides[key] !== undefined ? overrides[key] : v));
		}
		const block = lines.join('\r\n') + '\r\n';
		text = text.slice(0, target.start) + block + text.slice(target.end);

		savedisk.writeFile(img, roster.entry, Buffer.from(text, 'latin1'));

		// World file so the slot can load. Slots are 0-based, world files 1-based.
		const worldName = 'WORLD' + (slot + 1) + '.UT2';
		if (!savedisk.findEntry(img, worldName)) {
			const src = savedisk.findEntry(img, 'WORLD1.UT2');
			if (src) {
				const data = savedisk.readFile(img, src);
				const free = savedisk.freeClusters(img);
				const need = Math.ceil(data.length / savedisk.SS);
				if (free.length >= need) {
					const chain = free.slice(0, need);
					for (let i = 0; i < chain.length; i++) {
						const next = i + 1 < chain.length ? chain[i + 1] : 0xfff;
						savedisk.fatSet(img, 1024, chain[i], next);
						savedisk.fatSet(img, 1024 + savedisk.FATSZ * savedisk.SS, chain[i], next);
						data.copy(img, savedisk.DATA_OFF + (chain[i] - 2) * savedisk.SS, i * savedisk.SS, Math.min((i + 1) * savedisk.SS, data.length));
					}
					savedisk.addEntry(img, worldName, chain[0], data.length);
				}
			}
		}

		fs.writeFileSync(SAVE_DISK, img);
		// Read back and re-parse, so a write that silently failed is caught here.
		const verify = savedisk.slotsOf(fs.readFileSync(SAVE_DISK));
		const wrote = verify.find((s) => s.slot === slot);
		if (!wrote || wrote.name !== name) throw new Error('write did not land: expected ' + name + ', read ' + (wrote && wrote.name));
		return { ok: true, slot, name, profession, fields: wrote.fields, slots: verify };
	},

	// Delete a slot by blanking its name and stats back to the empty template.
	'POST /api/save/delete': async (_q, body) => {
		editor();
		const slot = Number(body.slot);
		if (!Number.isInteger(slot) || slot < 0 || slot > 3) throw new Error('slot must be 0..3');
		const img = fs.readFileSync(SAVE_DISK);
		const roster = savedisk.readRoster(img);
		if (!roster) throw new Error('ROSTER1.UT2 not present');
		const parsed = savedisk.parseSlots(roster.text);
		const target = parsed.find((s) => s.slot === slot);
		if (!target) throw new Error('no slot ' + slot);
		const blank = target.text
			.replace(/^\(\d\)NAME=[^\r\n]*/m, '(' + slot + ')NAME=\u0000')
			.replace(/=([0-9]+)(?=\r?$)/gm, '=0');
		savedisk.writeFile(img, roster.entry, Buffer.from(roster.text.slice(0, target.start) + blank + roster.text.slice(target.end), 'latin1'));
		fs.writeFileSync(SAVE_DISK, img);
		return { ok: true, slot, slots: savedisk.slotsOf(fs.readFileSync(SAVE_DISK)) };
	},

	// The editor page. Served from the same origin as the API so there is no
	// CORS dance and no second port to remember.
	'GET /editor': async () => ({ __html: EDITOR_HTML }),
};

// Send a single key to the Tsugaru window via xdotool. Named keys are passed
// through, printable characters go through `xdotool type`.
function xkey(ch) {
	const env = { ...process.env, DISPLAY };
	const win = findWindow();
	const named = {
		' ': 'space', '\n': 'Return', '\r': 'Return', '\t': 'Tab',
		'\x1b': 'Escape', '\x08': 'BackSpace',
	};
	try {
		if (named[ch]) {
			execFileSync('xdotool', ['key', '--window', win || 'root', named[ch]], { env });
		} else {
			execFileSync('xdotool', ['type', '--window', win || 'root', '--delay', '60', ch], { env });
		}
	} catch { /* window may have gone */ }
}

// Send a named key such as Return, Up, Down, space, Escape.
function xkeyNamed(name) {
	const env = { ...process.env, DISPLAY };
	const win = findWindow();
	try {
		execFileSync('xdotool', ['key', '--window', win || 'root', name], { env });
	} catch { /* gone */ }
}

// Move the pointer to window-relative coordinates and optionally click.
// The Tsugaru OS menu is mouse-driven, so keystrokes alone cannot navigate it.
function xmouse(win, x, y, button) {
	const env = { ...process.env, DISPLAY };
	const target = win || findWindow() || 'root';
	try {
		// Coordinates are relative to the 640x480 game area. Add the window
		// origin to get screen coordinates. Verified working: a raw
		// `mousemove 205 190` then `click 1` reaches the VM, so the offset
		// arithmetic here must match that exactly.
		let ox = 0, oy = 0;
		const geo = execFileSync('xdotool', ['getwindowgeometry', target], { env, encoding: 'utf8' });
		const m = geo.match(/Position:\s*(-?\d+),(-?\d+)/);
		if (m) { ox = Number(m[1]); oy = Number(m[2]); }
		const sx = ox + x;
		const sy = oy + y;
		execFileSync('xdotool', ['mousemove', String(sx), String(sy)], { env });
		if (button && button > 0) {
			execFileSync('xdotool', ['click', String(button)], { env });
		}
		return { ok: true, screenX: sx, screenY: sy };
	} catch (e) {
		return { ok: false, error: e.message };
	}
}

// Capture a PNG and return its path, for the binary endpoint.
function recordShot(name) {
	const safe = String(name || 'last').replace(/[^A-Za-z0-9._-]/g, '_');
	const file = path.join(OUT_DIR, safe + '.png');
	execFileSync('import', ['-window', 'root', file], {
		env: { ...process.env, DISPLAY },
		stdio: ['ignore', 'ignore', 'pipe'],
	});
	return file;
}

const con = new Console(EMU, process.argv.slice(2));
con.start();

const server = http.createServer(async (req, res) => {
	const url = new URL(req.url, 'http://x');
	const key = req.method + ' ' + url.pathname;

	if (url.pathname === '/' || url.pathname === '/api') {
		const list = Object.keys(ROUTES).map((r) => '  ' + r);
		res.writeHead(200, { 'content-type': 'text/plain' });
		return res.end('FM Towns supervisor\n\n' + list.join('\n') + '\n\nWS /api/stream for live console\n');
	}

	if (req.method === 'OPTIONS') {
		res.writeHead(204, {
			'access-control-allow-origin': '*',
			'access-control-allow-methods': 'GET,POST,OPTIONS',
			'access-control-allow-headers': 'content-type',
		});
		return res.end();
	}

	const handler = ROUTES[key];
	if (!handler) return json(res, 404, { error: 'no route: ' + key });

	try {
		const q = Object.fromEntries(url.searchParams);
		const body = req.method === 'POST' ? await readBody(req) : {};
		const result = await handler(q, body);
		if (result && result.__html) {
			const data = Buffer.from(result.__html, 'utf8');
			res.writeHead(200, {
				'content-type': 'text/html; charset=utf-8',
				'content-length': data.length,
			});
			return res.end(data);
		}
		if (result && result.__raw) {
			const data = fs.readFileSync(result.__raw);
			res.writeHead(200, {
				'content-type': 'image/png',
				'content-length': data.length,
				'access-control-allow-origin': '*',
			});
			return res.end(data);
		}
		json(res, 200, result);
	} catch (e) {
		json(res, 500, { error: e.message });
	}
});

// WebSocket for live console output, implemented by hand to stay dependency free.
server.on('upgrade', (req, socket) => {
	if (!req.url.startsWith('/api/stream')) {
		socket.destroy();
		return;
	}
	const accept = crypto
		.createHash('sha1')
		.update(req.headers['sec-websocket-key'] + '258EAFA5-E914-47DA-95CA-C5AB0DC85B11')
		.digest('base64');
	socket.write(
		'HTTP/1.1 101 Switching Protocols\r\n' +
			'Upgrade: websocket\r\n' +
			'Connection: Upgrade\r\n' +
			'Sec-WebSocket-Accept: ' + accept + '\r\n\r\n'
	);

	const send = (obj) => {
		const payload = Buffer.from(JSON.stringify(obj));
		const len = payload.length;
		let header;
		if (len < 126) header = Buffer.from([0x81, len]);
		else if (len < 65536) {
			header = Buffer.alloc(4);
			header[0] = 0x81; header[1] = 126; header.writeUInt16BE(len, 2);
		} else {
			header = Buffer.alloc(10);
			header[0] = 0x81; header[1] = 127; header.writeBigUInt64BE(BigInt(len), 2);
		}
		try { socket.write(Buffer.concat([header, payload])); } catch { /* closed */ }
	};

	// Backfill recent lines so a late subscriber sees context.
	for (const e of con.log(Math.max(0, con.lines.length - 100))) send(e);
	const sub = (e) => send(e);
	con.subscribers.add(sub);
	socket.on('close', () => con.subscribers.delete(sub));
	socket.on('error', () => con.subscribers.delete(sub));
});

server.listen(PORT, '0.0.0.0', () => {
	console.log('[supervisor] API on :' + PORT);
	console.log('[supervisor] emulator: ' + EMU);
	console.log('[supervisor] display : ' + DISPLAY);
});

const shutdown = () => {
	try { con.proc.kill('SIGTERM'); } catch { /* gone */ }
	process.exit(0);
};
process.on('SIGTERM', shutdown);
process.on('SIGINT', shutdown);
