#!/usr/bin/env bash
# tools/calibrate.sh - compile a C file with MetaWare High C 2.31 and disassemble the object.
#
# WHY THIS EXISTS. The image emits a frame pointer for 43 percent of routines and the rule was derived
# statistically. A compiled object confirms or refutes it directly rather than by inference.
#
# THE PIPELINE IS DELIBERATELY SHORT: compile to .OBJ, disassemble the bytes, stop. Linking is a separate problem,
# because the target is an MP-format flat image and a link step would add a failure mode without answering the
# question. The question is what code the compiler writes.
#
# THREE FLATPAK TRAPS, each of which silently produced nothing before being found:
#
#   1. The working directory is /var/home/paul, NOT where you invoked it. A relative -conf path fails with
#      "Can't open specified config file" and DOSBox-X then loads the DEFAULT config, which has no autoexec.
#      So every path here is absolute, and the first thing this script checks is that its own log appears.
#   2. The sandbox cannot see /var/home by default. It needs --filesystem=home, and without it the C: mount
#      silently fails so every DOS command writes nowhere.
#   3. It needs a DISPLAY even with -nogui, because SDL still initialises video. Over SSH that means borrowing
#      Xwayland's socket and auth file, the same trick tools/debug-session.sh uses for the emulator.
#
# Usage:
#   tools/calibrate.sh                  compile tools/calibration/plot.c
#   tools/calibrate.sh -f FILE          compile another file
#   tools/calibrate.sh --keep-running   leave DOSBox-X running so the screen can be viewed

set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
HC="$ROOT/build/hc386_v231"
WORK="$ROOT/build/calib"
SOURCE="$ROOT/tools/calibration/plot.c"
KEEP_RUNNING=0

while [ $# -gt 0 ]; do
	case "$1" in
	-f) SOURCE="$2"; shift 2 ;;
	--keep-running) KEEP_RUNNING=1; shift ;;
	*) echo "unknown option $1" >&2; exit 2 ;;
	esac
done

[ -x "$HC/BIN/HC386.EXE" ] || { echo "compiler not extracted at $HC" >&2; exit 1; }
[ -f "$SOURCE" ] || { echo "no source at $SOURCE" >&2; exit 1; }

BASE="$(basename "$SOURCE" .c | tr 'a-z' 'A-Z')"
rm -rf "$WORK"
mkdir -p "$WORK"
cp "$SOURCE" "$WORK/$BASE.C"
cp -r "$HC" "$WORK/HC"

# Borrow the desktop's Xwayland, because SDL needs video even headless. Same approach as debug-session.sh.
if [ -z "${DISPLAY:-}" ] || [ -z "${XAUTHORITY:-}" ]; then
	auth=$(ps -eo cmd 2>/dev/null | grep -oE '\-auth [^ ]+' | head -1 | cut -d' ' -f2 || true)
	sock=$(ls /tmp/.X11-unix/ 2>/dev/null | head -1 || true)
	if [ -n "$auth" ] && [ -r "$auth" ] && [ -n "$sock" ]; then
		export XAUTHORITY="$auth"
		export DISPLAY=":${sock#X}"
	fi
fi
[ -n "${DISPLAY:-}" ] || { echo "no display available, and DOSBox-X needs one" >&2; exit 1; }

cat > "$WORK/dosbox.conf" <<CONF
[dosbox]
machine=svga_s3
memsize=32
[sdl]
fullscreen=false
[autoexec]
@echo off
mount c $WORK > MOUNT.LOG
c:
echo MOUNTED > STARTED.TXT
set HCDIR=C:\\HC
set PATH=C:\\HC\\BIN
set INCLUDE=C:\\HC\\INC
HC386 $BASE.C > BUILD.LOG
echo DONE > FINISHED.TXT
exit
CONF

echo "display   : $DISPLAY"
echo "work dir  : $WORK"
echo "compiling : $BASE.C with High C 2.31"

rm -f /var/tmp/dbx-calib.log
nohup flatpak run --filesystem=home com.dosbox_x.DOSBox-X \
	-conf "$WORK/dosbox.conf" -nogui > /var/tmp/dbx-calib.log 2>&1 &

# Wait for the marker rather than a fixed sleep: the compiler takes as long as it takes.
for i in $(seq 1 120); do
	[ -f "$WORK/FINISHED.TXT" ] && break
	sleep 1
done
sleep 1
pkill -f DOSBox-X >/dev/null 2>&1 || true

echo
echo "--- did the mount run"
if [ -f "$WORK/STARTED.TXT" ]; then echo "yes"; else echo "no. MOUNT.LOG:"; cat "$WORK/MOUNT.LOG" 2>/dev/null || echo "(none)"; fi
echo
echo "--- compiler output"
cat "$WORK/BUILD.LOG" 2>/dev/null || echo "(no BUILD.LOG)"
echo
OBJ="$WORK/$BASE.OBJ"
if [ -f "$OBJ" ]; then
	echo "--- object: $(stat -c%s "$OBJ") bytes"
	echo "--- disassembly"
	ndisasm -b32 "$OBJ" | head -40
else
	echo "--- no .OBJ produced. Files in the work directory:"
	ls -1 "$WORK"
fi
