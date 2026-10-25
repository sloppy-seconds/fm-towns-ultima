#!/usr/bin/env bash
# tools/cc.sh - compile a C file on the FM Towns High C kit and print its code bytes.
#
# The loop this is for: write a small .c, compile it, diff the emitted bytes
# against a routine in the game. Before this existed the loop cost about 40
# seconds because it rebooted the emulator. Now it is about 12, because the
# floppy image is the transport and an eject/load replaces a reboot.
#
# Requires tools/cserve.js running:
#   node tools/cserve.js &
#
# Usage:
#   ./tools/cc.sh file.c                  compile and print the code bytes
#   ./tools/cc.sh -e 'int f(int x){}'     compile an inline snippet
#   ./tools/cc.sh file.c --want '8b 44 …' compare against expected bytes
#   ./tools/cc.sh file.c --json           also print the raw API response
#   ./tools/cc.sh file.c --name PLOT      name stem (1-8 chars, 8.3 safe)
#   ./tools/cc.sh file.c --flags '-O'     extra generator flags
#
# Exit codes: 0 compiled (and matched, if --want), 1 compile failed, 2 mismatch.

set -euo pipefail

API="${CSERVE:-http://127.0.0.1:8097}"
NAME="CAL"
WANT=""
FLAGS=""
JSON_OUT=0
SRC_FILE=""
SRC_INLINE=""
HAVE_INLINE=0

while [ $# -gt 0 ]; do
	case "$1" in
		-e) SRC_INLINE="$2"; HAVE_INLINE=1; shift 2 ;;
		--want)  WANT="$2"; shift 2 ;;
		--json)  JSON_OUT=1; shift ;;
		--name)  NAME="$2"; shift 2 ;;
		--flags) FLAGS="$2"; shift 2 ;;
		-h|--help) sed -n '2,21p' "$0" | sed 's/^# \{0,1\}//'; exit 0 ;;
		-*) echo "unknown option: $1" >&2; exit 64 ;;
		*) SRC_FILE="$1"; shift ;;
	esac
done

if [ "$HAVE_INLINE" = 0 ] && [ -z "$SRC_FILE" ]; then
	echo "usage: cc.sh file.c [-e 'code'] [--want HEX] [--json] [--name N]" >&2
	exit 64
fi
if [ "$HAVE_INLINE" = 0 ] && [ ! -f "$SRC_FILE" ]; then
	echo "no such file: $SRC_FILE" >&2
	exit 64
fi

PAYLOAD=$(mktemp)
trap 'rm -f "$PAYLOAD"' EXIT

# Build the JSON with python3 so quoting and newlines are correct. A hand-rolled
# printf would corrupt any source containing a backslash.
if [ "$HAVE_INLINE" = 1 ]; then
	python3 -c '
import json, sys, pathlib
pathlib.Path(sys.argv[1]).write_text(json.dumps({
    "source": sys.argv[2], "name": sys.argv[3], "flags": sys.argv[4]}))
' "$PAYLOAD" "$SRC_INLINE" "$NAME" "$FLAGS"
else
	python3 -c '
import json, sys, pathlib
pathlib.Path(sys.argv[1]).write_text(json.dumps({
    "source": open(sys.argv[2]).read(), "name": sys.argv[3], "flags": sys.argv[4]}))
' "$PAYLOAD" "$SRC_FILE" "$NAME" "$FLAGS"
fi

RESP=$(curl -sS -m 150 -X POST "$API/api/compile" \
	-H 'content-type: application/json' --data-binary "@$PAYLOAD")

[ "$JSON_OUT" = 1 ] && printf '%s\n' "$RESP" | python3 -m json.tool

# One python pass decides what to print and which exit code to use.
printf '%s' "$RESP" | python3 -c '
import json, sys
want, quiet = sys.argv[1].strip().lower(), sys.argv[2] == "1"
raw = sys.stdin.read()
try:
    d = json.loads(raw)
except Exception:
    print("bad response from server: " + raw[:300], file=sys.stderr); sys.exit(2)

if not d.get("ok"):
    print("compile failed: " + str(d.get("error")), file=sys.stderr)
    log = (d.get("log") or "").strip()
    if log:
        print(log[-800:], file=sys.stderr)
    sys.exit(1)

code = d.get("code", "")
print(code)
if not quiet:
    print("# {} {} bytes, {} records, sha {}, {}ms".format(
        d.get("name"), d.get("size"), d.get("records"),
        (d.get("objSha256") or "")[:16], d.get("elapsedMs")), file=sys.stderr)

if want:
    got = code.strip().lower()
    if got == want:
        print("MATCH", file=sys.stderr); sys.exit(0)
    print("MISMATCH", file=sys.stderr)
    print("  want: " + want, file=sys.stderr)
    print("  got : " + got, file=sys.stderr)
    sys.exit(2)
' "$WANT" "$JSON_OUT"
