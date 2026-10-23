#!/usr/bin/env node
// tools/maprender.js - render a loaded map buffer as ASCII.
//
// docs/map-geometry.md establishes the geometry: the loaded map is a 32,768-byte buffer,
// which is 256 rows of 128. The file payload is the LAST 31,232 bytes of it, so the first
// 1,536 bytes (12 rows) are generated.
//
// The critical detail that took a long time to find: rendering from the payload start at
// width 128 shifts every row by exactly 12 cells, which destroys horizontal coherence and
// makes the map look like noise. Render from the BUFFER start, not the payload start.
//
// Usage:
//   node tools/maprender.js <state> [firstRow] [rowCount]
//   node tools/maprender.js --file <MAP2_x.TIF> [firstRow] [rowCount]

'use strict';

const fs = require('fs');
const path = require('path');

const W = 128;
const H = 256;
const BUFFER = W * H; // 32768

// Where the map payload sits inside the buffer in a savestate.
const STATE_PAYLOAD = 0xb0ac2;
const PAYLOAD_LEN = 31232;
const BUFFER_START = STATE_PAYLOAD - (BUFFER - PAYLOAD_LEN); // 0xb04c2

function glyph(v) {
	// The low three bits give eight distinguishable terrain classes, which is the
	// vocabulary the earlier analysis found.
	return ' .:-=+*#%@'[v & 7] ?? ' ';
}

function render(buf, firstRow, rows) {
	const out = [];
	for (let y = firstRow; y < Math.min(firstRow + rows, H); y++) {
		let line = '';
		for (let x = 0; x < W; x++) line += glyph(buf[y * W + x]);
		out.push(String(y).padStart(3) + ' ' + line);
	}
	return out.join('\n');
}

function main() {
	const args = process.argv.slice(2);

	if (args[0] === '--file') {
		const raw = fs.readFileSync(args[1]);
		const payload = raw.subarray(0x800, 0x800 + PAYLOAD_LEN);
		// Rebuild the full buffer: 12 generated rows then the payload.
		const buf = Buffer.alloc(BUFFER);
		payload.copy(buf, BUFFER - PAYLOAD_LEN);
		console.log(
			`${args[1]}: ${raw.length} bytes, payload ${payload.length}, buffer ${BUFFER}`
		);
		console.log('NOTE: the first 12 rows are generated at runtime, not in the file.');
		console.log('      They are zero in this view.\n');
		console.log(render(buf, Number(args[2] ?? 0), Number(args[3] ?? 40)));
		return;
	}

	const state = args[0] ?? '/var/tmp/title.state';
	const S = fs.readFileSync(state);
	const payload = S.subarray(STATE_PAYLOAD, STATE_PAYLOAD + PAYLOAD_LEN);
	const buf = S.subarray(BUFFER_START, BUFFER_START + BUFFER);

	console.log(`${state}`);
	console.log(`buffer 0x${BUFFER_START.toString(16)}, ${BUFFER} bytes = ${H} x ${W}`);
	console.log(`payload at buffer offset ${BUFFER - PAYLOAD_LEN} (12 rows generated)\n`);

	// Sanity check that the assumed payload position is right.
	const inside = Buffer.compare(
		buf.subarray(BUFFER - PAYLOAD_LEN),
		payload
	) === 0;
	console.log(`payload position verified: ${inside}\n`);

	console.log(render(buf, Number(args[1] ?? 0), Number(args[2] ?? 40)));
}

if (require.main === module) main();
