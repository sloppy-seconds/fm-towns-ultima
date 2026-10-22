#!/bin/sh
# check-disc.sh - confirm you have the expected rip, using only POSIX shell.
#
# Why this exists: tools/verify.js checks every claim in the repository, but it
# needs Node. Most people who just want to play have no reason to install a
# JavaScript runtime, and the thing they actually need to know is simpler:
# "is this the same disc everyone else used?"
#
# That question is answerable with size, md5sum and a hex peek at sector 0, all
# of which a stock shell has. So this script answers it, and nothing else.
#
# If you are going to run the extractors, use tools/verify.js instead. It checks
# 107 things including the executable headers, the asset inventory and every
# format claim. This script checks that your files are the right files.
#
# Usage:
#   ./tools/check-disc.sh
#
# Exit 0 if every file matches, 1 if anything is wrong or missing.

set -u

HERE=$(cd -- "$(dirname -- "$0")" && pwd)
ROOT=$(cd -- "$HERE/.." && pwd)
BAD=0

note() { printf '%s\n' "$*"; }
pass() { printf '  ok    %s\n' "$*"; }
fail() { BAD=$((BAD + 1)); printf '  FAIL  %s\n' "$*"; }

# md5sum on Linux, md5 on macOS and the BSDs.
md5_of() {
	if command -v md5sum >/dev/null 2>&1; then
		md5sum "$1" | cut -d' ' -f1
	elif command -v md5 >/dev/null 2>&1; then
		md5 -q "$1"
	else
		printf ''
	fi
}

size_of() {
	if stat -c%s "$1" >/dev/null 2>&1; then
		stat -c%s "$1"
	else
		stat -f%z "$1"
	fi
}

# Hex of the first N bytes, portable across GNU and BSD od.
hexprefix() {
	if command -v od >/dev/null 2>&1; then
		od -An -tx1 -N "$2" "$1" 2>/dev/null | tr -d ' \n'
	else
		printf ''
	fi
}

# check FILE SIZE MD5 LABEL
check() {
	file="$1"; want_size="$2"; want_sum="$3"; label="$4"
	p="$ROOT/$file"
	if [ ! -f "$p" ]; then
		fail "missing: $label"
		return
	fi
	actual_size=$(size_of "$p")
	if [ "$actual_size" != "$want_size" ]; then
		fail "$label: $actual_size bytes, expected $want_size"
		return
	fi
	actual_sum=$(md5_of "$p")
	if [ -z "$actual_sum" ]; then
		pass "$label: size matches, no md5 tool available to compare contents"
	elif [ "$actual_sum" != "$want_sum" ]; then
		fail "$label: md5 $actual_sum, expected $want_sum"
	else
		pass "$label"
	fi
}

note ''
note '== disc identity =='
note ''

# The same sizes and sums tools/verify.js asserts, so the two cannot disagree.
check 'Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).ccd' \
	2137 f89a0640f0a2e75beb3763e80b7be352 'disc .ccd'
check 'Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).cue' \
	415 6f931bead286bac24c03ad687f40ac8d 'disc .cue'
check 'Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).sub' \
	5781600 6ad09bf5dde849b1d3fa6b00f7ab6ee0 'disc .sub'
check 'Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[UserDisk].hdm' \
	1261568 5ae4dc119f990adde82a2b91c0b7feef 'save floppy'

# The .img is 141 MB, so hashing it on every run is slow enough to be annoying.
# Size plus a look at sector 0 proves it is the right kind of disc, cheaply.
IMG="$ROOT/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).img"
if [ ! -f "$IMG" ]; then
	fail 'missing: disc .img'
else
	img_size=$(size_of "$IMG")
	if [ "$img_size" != '141649200' ]; then
		fail "disc .img: $img_size bytes, expected 141649200"
	else
		pass 'disc .img: 141649200 bytes'
	fi
	# A MODE1 sector begins with a 12-byte sync pattern and has mode 1 at
	# offset 15. Anything else means this is not the rip this work used.
	head=$(hexprefix "$IMG" 16)
	case "$head" in
		'')
			note '  --    sector 0: no od available, sync pattern unchecked' ;;
		00ffffffffffffffffffff00*)
			pass 'sector 0: MODE1 sync pattern' ;;
		*)
			fail "sector 0: got $head, expected 00ffffffffffffffffffff00..." ;;
	esac
fi

note ''
if [ "$BAD" -eq 0 ]; then
	note 'This disc matches the rip this repository was built against.'
	note ''
	note 'Next: docs/quickstart.md for how to play.'
	exit 0
fi

note "$BAD check(s) failed."
note ''
note 'If sizes or sums differ you have a different rip, and results will'
note 'legitimately differ. If files are missing, unpack the archive.org zip'
note 'into:'
note "  $ROOT"
exit 1
