// tools/findpal.js - hunt the palette routine.
//
// Builds on crossdiff: instead of "what is shared", ask "what contains a
// reference to the CRTC palette ports, or a call to something that does".
//
// Two independent strategies, both reported:
//
//   A. Port-constant search over raw bytes AND over properly aligned
//      disassembly. Raw-byte search alone produced false positives before
//      because data interleaves with code, so this walks candidate 32-bit
//      instruction boundaries and only accepts a match that decodes cleanly.
//
//   B. Indirect-call search. If the palette write lives in a library reached
//      through a function pointer table, the nearest anchor is a `call
//      [reg+disp]` or `call [addr]` whose target slot holds the routine. This
//      lists indirect call sites with a nearby large constant, which is what a
//      palette table load looks like.
//
// Usage: node tools/findpal.js [--file ENCHANT.EXP]

'use strict';

const fs = require('fs');
const path = require('path');
const { execSync } = require('child_process');
const { Disc, defaultDisc } = require('./cd');

const args = process.argv.slice(2);
function arg(flag, dflt) {
	const i = args.indexOf(flag);
	return i >= 0 && args[i + 1] ? args[i + 1] : dflt;
}

const TARGET = arg('--file', 'ENCHANT.EXP');
const PAYLOAD = 0x75f;

const discPath = defaultDisc(path.join(__dirname, '..'));
if (!discPath || !fs.existsSync(discPath)) {
	console.error('disc image not found');
	process.exit(1);
}
const disc = new Disc(discPath);
const cat = disc.catalogue();
const buf = disc.get(cat, TARGET);
if (!buf) {
	console.error('missing ' + TARGET);
	process.exit(1);
}

const outDir = path.join(__dirname, '..', 'analysis');
fs.mkdirSync(outDir, { recursive: true });
const report = [];
const say = (s) => {
	console.log(s);
	report.push(s);
};

say('target: ' + TARGET + ' (' + buf.length + ' bytes)');
say('');

// ---------------------------------------------------------------------------
// A. port constants, in raw bytes and in aligned disassembly
// ---------------------------------------------------------------------------

// FM Towns CRTC: 0x1A0 base. Palette index/data typically 0x1A0/0x1A2.
// Also check the 0x0A0 low-byte form used when only the low 8 bits matter.
const PORTS = new Map();
for (let p = 0x1a0; p <= 0x1ae; p++) PORTS.set(p, 'CRTC 0x' + p.toString(16));

say('== A1. raw byte scan for port immediates ==');
let rawHits = 0;
for (const [port] of PORTS) {
	// mov dx, imm16  = BA lo hi
	const pat = Buffer.from([0xba, port & 0xff, (port >> 8) & 0xff]);
	let i = -1;
	const hits = [];
	while ((i = buf.indexOf(pat, i + 1)) !== -1) {
		hits.push(i);
		if (hits.length > 8) break;
	}
	if (hits.length) {
		rawHits += hits.length;
		say('  mov dx,0x' + port.toString(16) + '  x' + hits.length + '  at ' + hits.map((h) => '0x' + h.toString(16)).join(' '));
	}
}
if (!rawHits) say('  none');

say('');
say('== A2. aligned disassembly scan for in/out against any port ==');
// Disassemble from PAYLOAD, then reject matches whose instruction bytes do not
// re-encode to the same length (a cheap sanity filter against data regions).
const tmp = path.join(require('os').tmpdir(), 'findpal_code.bin');
fs.writeFileSync(tmp, buf.subarray(PAYLOAD));
let dis = '';
try {
	dis = execSync('ndisasm -b32 -w -o0x' + PAYLOAD.toString(16) + ' "' + tmp + '" 2>/dev/null', {
		encoding: 'utf8',
		maxBuffer: 1 << 29,
	});
} catch (e) {
	say('  ndisasm failed: ' + e.message);
}
const lines = dis.split('\n').filter(Boolean);
const ioLines = [];
for (let i = 0; i < lines.length; i++) {
	const l = lines[i];
	if (/\bout\s+dx\b|\bin\s+(al|ax|eax),\s*dx|\boutsb\b|\binsb\b/.test(l)) ioLines.push(i);
}
say('  total in/out via dx: ' + ioLines.length);

// classify by the nearest preceding `mov dx,imm` within 12 instructions
const byPort = new Map();
for (const i of ioLines) {
	let port = null;
	for (let j = i - 1; j >= Math.max(0, i - 12); j--) {
		const m = lines[j].match(/mov\s+dx,0x([0-9a-f]+)/);
		if (m) {
			port = parseInt(m[1], 16);
			break;
		}
	}
	const key = port === null ? 'indirect' : '0x' + port.toString(16);
	byPort.set(key, (byPort.get(key) || 0) + 1);
}
[...byPort.entries()]
	.sort((a, b) => b[1] - a[1])
	.forEach(([p, c]) => say('  port ' + p.padEnd(10) + ' x' + c));

// show any CRTC hits in full context
const crtcIdx = [];
for (const i of ioLines) {
	for (let j = i - 1; j >= Math.max(0, i - 12); j--) {
		const m = lines[j].match(/mov\s+dx,0x([0-9a-f]+)/);
		if (m) {
			const p = parseInt(m[1], 16);
			if (p >= 0x1a0 && p <= 0x1ae) crtcIdx.push(i);
			break;
		}
	}
}
say('');
if (crtcIdx.length) {
	say('  !! CRTC hits: ' + crtcIdx.length);
	for (const i of crtcIdx.slice(0, 10)) {
		say('  ---');
		lines.slice(Math.max(0, i - 10), i + 3).forEach((l) => say('    ' + l.replace(/\s+/g, ' ')));
	}
} else {
	say('  no in/out against 0x1A0-0x1AE found in aligned disassembly either');
}

// ---------------------------------------------------------------------------
// B. indirect calls near large constants (palette table candidates)
// ---------------------------------------------------------------------------

say('');
say('== B. indirect calls with a nearby table-like constant ==');
// call [reg+disp32]  = FF 90/91/92/93/94/95/96/97
// call [addr32]      = FF 15
const indirect = [];
for (let i = PAYLOAD; i < buf.length - 6; i++) {
	const b = buf[i];
	if (b !== 0xff) continue;
	const m = buf[i + 1];
	if (m === 0x15) indirect.push({ off: i, kind: 'call [abs]' });
	else if (m >= 0x90 && m <= 0x97) indirect.push({ off: i, kind: 'call [reg+disp]' });
}
say('  indirect call sites: ' + indirect.length);

// For each, look back 64 bytes for a 32-bit constant in the DATA range that
// could be a palette pointer or a colour word run.
let flagged = 0;
for (const c of indirect) {
	const lo = Math.max(PAYLOAD, c.off - 64);
	const win = buf.subarray(lo, c.off);
	let best = null;
	for (let k = 0; k + 4 <= win.length; k += 1) {
		const v = win.readUInt32LE(k);
		// a data pointer into the image, plausible and aligned
		if (v > 0x10000 && v < 0x200000 && v % 2 === 0) {
			best = { at: lo + k, v };
		}
	}
	if (best) {
		flagged++;
		if (flagged <= 25) {
			say(
				'  0x' +
					c.off.toString(16) +
					'  ' +
					c.kind +
					'  const 0x' +
					best.v.toString(16) +
					' @0x' +
					best.at.toString(16)
			);
		}
	}
}
say('  sites with a plausible data constant nearby: ' + flagged);

const outFile = path.join(outDir, 'findpal-' + TARGET.replace(/[^A-Za-z0-9]/g, '') + '.txt');
fs.writeFileSync(outFile, report.join('\n') + '\n');
console.log('');
console.log('wrote ' + outFile);
disc.close();
