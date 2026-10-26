'use strict';
// tools/imgbase.js - one place that knows what an address means.
//
// WHY THIS EXISTS. `ENCHANT.EXP` is a Phar Lap `MP` image with a 32-byte header.
// Two address spaces therefore exist and both are in constant use:
//
//   RAW       an offset into the file on disk, including the 0x20 header
//   STRIPPED  an offset into the image with the header removed, base 0
//
// Four separate defects in this repository were the same bug: a tool mixed the
// two and produced a confident wrong answer instead of an error.
//
//   1. `funcs.js` labelled every routine 0x20 high, because it works on stripped
//      bytes and was given a raw address.
//   2. `preflight.js` passed a raw address to `cfgwalk.js`, which works on
//      stripped bytes, so every routine reported "not an instruction boundary"
//      and the whole candidate queue was silently disqualified.
//   3. `trycands.py` disassembled a stale temp file and reported another
//      routine's bytes as the target.
//   4. The absolute-address detector had four separate blind spots, each found
//      only by testing it against a routine whose verdict was known.
//
// The fix is not another comment. It is to make the two spaces distinct types
// that cannot be confused by accident: this module is the only place that does
// the arithmetic, every reader returns an object tagged with which space it is
// in, and the assertions in `tools/verify.js` pin the known cases.
//
// Conventions, stated once:
//   - The public interface of every tool speaks RAW offsets, because those are
//     what a person reading a hexdump sees.
//   - `cfgwalk.js` speaks STRIPPED, because it predates this and changing it
//     would break its own tests.
//   - Conversion happens here and nowhere else.

const fs = require('fs');
const path = require('path');

const ROOT = path.dirname(__dirname);
const IMAGE = path.join(ROOT, 'ENCHANT.EXP');

// The MP header size. Verified: `lastPage` and `pages` at offsets 2 and 4
// reproduce the exact file size for all three game binaries, and the code begins
// immediately after these 32 bytes.
const HEADER = 0x20;

/** raw file offset -> stripped image offset */
function rawToStripped(raw) {
	if (!Number.isInteger(raw) || raw < HEADER) {
		throw new Error('raw offset must be an integer >= 0x20, got ' + raw);
	}
	return raw - HEADER;
}

/** stripped image offset -> raw file offset */
function strippedToRaw(stripped) {
	if (!Number.isInteger(stripped) || stripped < 0) {
		throw new Error('stripped offset must be a non-negative integer, got ' + stripped);
	}
	return stripped + HEADER;
}

/**
 * Read the image, optionally from disk rather than from the CD extraction, and
 * optionally with the header stripped.
 *
 * Returns the buffer plus the facts needed to audit the read. Callers that
 * report bytes should print `source`, `offset` and the first 16 bytes, so a
 * stale or misaligned read is visible in the output rather than looking normal.
 */
function loadImage({ stripped = false } = {}) {
	if (!fs.existsSync(IMAGE)) {
		throw new Error(`image not found: ${IMAGE}. Run the extraction first. See README.`);
	}
	const file = fs.readFileSync(IMAGE);
	return {
		buf: stripped ? file.subarray(HEADER) : file,
		source: path.relative(ROOT, IMAGE),
		offset: stripped ? HEADER : 0,
		fileSize: file.length,
		header: HEADER,
	};
}

/**
 * Read a routine's bytes by RAW address, with provenance attached.
 *
 * This is what a tool should use when it wants to disassemble a routine: the
 * returned object carries where the bytes came from, so printing it is enough
 * to notice a misalignment.
 */
function readRoutine(rawAddr, len) {
	const img = loadImage();
	if (rawAddr < 0 || rawAddr + 1 > img.buf.length) {
		throw new Error(`address 0x${rawAddr.toString(16)} is outside the image (${img.buf.length} bytes)`);
	}
	const end = Math.min(rawAddr + len, img.buf.length);
	return {
		bytes: img.buf.subarray(rawAddr, end),
		rawAddr,
		strippedAddr: rawToStripped(rawAddr),
		source: img.source,
		offset: rawAddr,
		truncated: end < rawAddr + len,
	};
}

/** A one-line provenance string for a read, to print alongside any derivation. */
function provenance(read) {
	const hex = Array.from(read.bytes.subarray(0, 16))
		.map((b) => b.toString(16).padStart(2, '0'))
		.join(' ');
	return `${read.source} raw 0x${read.rawAddr.toString(16)}`
		+ ` (stripped 0x${read.strippedAddr.toString(16)}): ${hex}`;
}

module.exports = {
	HEADER,
	IMAGE,
	ROOT,
	rawToStripped,
	strippedToRaw,
	loadImage,
	readRoutine,
	provenance,
};
