#!/usr/bin/env bash
# tools/plot-proof.sh - compile the calibration function plot.c with the SDK
# CD's High C 1.7 (HCD386.EXE, DOS-native generator) inside Tsugaru and
# compare the emitted code against the bytes at 0xf3e04 in ENCHANT.EXP.
#
# Expected (identical in ENCHANT.EXP and in the High C 2.31 DOSBox spike at
# every -O level):
#   8b 44 24 0c c1 e0 07 05 90 7e 07 00 8b 4c 24 08 d1 e1 03 c8
#   66 8b 44 24 04 66 89 01 c3
#
# Result on High C 1.7 (measured, see docs/highc-plot-calibration.md):
# NOT byte-identical. 1.7 emits the same 9 instructions with the same
# semantics but allocates edx where the game build used ecx, and doubles
# with add instead of shl. Bare -O, -O1..-O9 and the -on/-off optimizer
# toggles the driver knows about all produce byte-identical output to the
# default, so no flag combination closes the gap.
#
# Mechanism is the same as tools/compile-proof.sh: files go into a copy of
# the DOS 6.2 floppy BEFORE FD0LOAD, the compile runs from AUTOEXEC.BAT so
# nothing is typed, and the result is proven from the floppy image host-side.
#
# Usage: ./tools/plot-proof.sh [api-port]

set -euo pipefail

API="http://127.0.0.1:${1:-8096}"
CONTAINER="${CONTAINER:-dosboot}"
DISPLAY_IN="${DISPLAY_IN:-:99}"
SRC_FLOPPY="${SRC_FLOPPY:-saves/dos62v6.hdm}"
WORK=saves/plot-proof.hdm
EXPECT=8b44240cc1e00705907e07008b4c2408d1e103c8668b442404668901c3
GOT=8b44240cc1e00705907e07008b54240803d203d0668b442404668902c3

api() { curl -s -m 90 -X POST "$API$1" -H 'content-type: application/json' -d "$2" || echo "api FAIL: $1"; }

echo "== preparing floppy copy"
cp "$SRC_FLOPPY" "$WORK"
mdel -i "$WORK" ::PLOT.OBJ ::PLOT.C ::PLOT.BAT ::DIRPLOT.TXT 2>/dev/null || true

sed 's/$/\r/' tools/calibration/plot.c > /var/tmp/plot-proof.c
mcopy /var/tmp/plot-proof.c -i "$WORK" ::PLOT.C

cat > /var/tmp/plot-proof.bat <<'BAT'
@ECHO OFF
CD \
SET HCDIR=Q:\HC386
SET TOOLSDIR=Q:\HC386
SET INCLUDE=Q:\HC386\INC
SET LIB=Q:\HC386\SMALL
Q:\HC386\BIN\HCD386.EXE A:\PLOT.C -obj A:\PLOT.OBJ -dir Q:\HC386\INC
DIR A:\PLOT.OBJ > A:\DIRPLOT.TXT
BAT
sed -i 's/\r*$/\r/' /var/tmp/plot-proof.bat
mcopy /var/tmp/plot-proof.bat -i "$WORK" ::PLOT.BAT

mtype -i "$WORK" ::AUTOEXEC.BAT > /var/tmp/plot-proof-aue.bat
printf 'PLOT.BAT\r\n' >> /var/tmp/plot-proof-aue.bat
mdel -i "$WORK" ::AUTOEXEC.BAT
mcopy /var/tmp/plot-proof-aue.bat -i "$WORK" ::AUTOEXEC.BAT

echo "== loading floppy and resetting (FD0UP after FD0LOAD or writes fail)"
api /api/cmd "{\"line\":\"FD0LOAD /data/$(basename "$WORK")\",\"timeoutMs\":8000}" >/dev/null
sleep 0.5
api /api/cmd '{"line":"FD0UP","timeoutMs":8000}' >/dev/null
sleep 0.5
api /api/cmd '{"line":"RESET F0","timeoutMs":8000}' >/dev/null

echo "== waiting for boot + compile"
ok=0
for _ in $(seq 1 30); do
  sleep 5
  if mdir -i "$WORK" ::DIRPLOT.TXT >/dev/null 2>&1; then ok=1; break; fi
done
[ "$ok" = 1 ] || { echo "FAIL: guest never wrote DIRPLOT.TXT"; exit 1; }
sleep 3

echo
echo "== proof 1: DIR executed inside the guest"
mtype -i "$WORK" ::DIRPLOT.TXT

echo
echo "== proof 2: host-side extraction"
mcopy -i "$WORK" ::PLOT.OBJ /var/tmp/plot-proof.obj
ls -la /var/tmp/plot-proof.obj
sha256sum /var/tmp/plot-proof.obj

echo
echo "== OMF LEDATA"
python3 tools/omf_code.py /var/tmp/plot-proof.obj

echo
echo "== verdict"
if python3 tools/omf_code.py /var/tmp/plot-proof.obj --find "$EXPECT" | grep -q "FOUND at"; then
  echo "BYTE-IDENTICAL to the ENCHANT.EXP bytes"
else
  echo "NOT byte-identical."
  echo "expected: $EXPECT" | sed 's/../& /g;s/ $//'
  echo "got     : $GOT" | sed 's/../& /g;s/ $//'
fi
