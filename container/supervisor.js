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

	// Type text as FM Towns keycodes. TYPE produces no console echo, so this
	// writes and waits a short settle rather than waiting for output that will
	// never arrive. Space is keycode 0x20.
	async type(text, perCharMs = 140) {
		const sent = [];
		for (const ch of text) {
			const code = ch === ' ' ? '20' : ch;
			this.write('TYPE ' + code);
			sent.push(code);
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
	const win = findWindow();
	const target = win || 'root';
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

	// Convenience: capture and render as text in one call, no file handling.
	'GET /api/screen': async (q) => {
		return screenshot(q.name, q.mode || 'all', q);
	},

	// Return the raw PNG bytes for a browser or a human.
	'GET /api/shot.png': async (q) => ({ __raw: recordShot(q.name) }),
};

// Capture a PNG and return its path, for the binary endpoint.
function recordShot(name) {
	const safe = String(name || 'last').replace(/[^A-Za-z0-9._-]/g, '_');
	const file = path.join(OUT_DIR, safe + '.png');
	const win = findWindow();
	execFileSync('import', ['-window', win || 'root', file], {
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
