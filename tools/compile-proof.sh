#!/usr/bin/env bash
# tools/compile-proof.sh - prove a real High C compile inside Tsugaru, end to end,
# with no interactive typing at all.
#
# Compiles HELLO.C to HELLO.OBJ with the High C SDK CD's own DOS-native code
# generator (Q:\HC386\BIN\HCD386.EXE) running under MS-DOS 6.2 on the floppy,
# then proves the object file twice: once with a DIR executed INSIDE the guest
# (captured to a file on the floppy), and once host-side with mtools, printing
# size, sha256 and the first bytes.
#
# No TownsMENU and no RUN386 are involved. The kit ships two code generators:
# HCD386P.EXP (a P3 image that needs the Towns window system) and HCD386.EXE
# (plain DOS). The CD's own DEMO.BAT calls the .EXE directly when no driver is
# installed. This script uses that path. See docs/highc-compile-success.md.
#
# The compile is appended to AUTOEXEC.BAT so it runs unconditionally during
# boot. Typing into the emulated console races the boot and loses characters,
# which is exactly how an earlier revision of this script failed.
#
# Prerequisites (all measured, see the doc):
#   - the dosboot container is running with -CD hc.ccd seated at power-on,
#     so MSCDEX in the floppy's AUTOEXEC mounts Q: successfully
#   - the supervisor API answers on 127.0.0.1 (not ::1)
#   - mtools, podman, curl on the host
#
# Usage:
#   ./tools/compile-proof.sh [floppy.hdm] [api-port]
# Defaults: saves/dos62v6.hdm, port 8096.

set -euo pipefail

API="http://127.0.0.1:${2:-8096}"
CONTAINER="${CONTAINER:-dosboot}"
DISPLAY_IN="${DISPLAY_IN:-:99}"
SRC_FLOPPY="${1:-saves/dos62v6.hdm}"
# must live under saves/, which the container mounts at /data
WORK=saves/compile-proof.hdm

command -v mtools >/dev/null; command -v curl >/dev/null; command -v podman >/dev/null

api() { # api <path> [json]
  if [ $# -ge 2 ]; then
    curl -s -m 90 -X POST "$API$1" -H 'content-type: application/json' -d "$2" || { echo "api FAIL: $1 $2" >&2; return 1; }
  else
    curl -s -m 90 "$API$1"
  fi
}

todos() { # convert a file's line endings to CRLF in place
  sed -i 's/\r*$/\r/' "$1"
}

echo "== preparing floppy copy"
cp "$SRC_FLOPPY" "$WORK"
mdel -i "$WORK" ::HELLO.OBJ ::DIROBJ.TXT ::HELLO.C ::COMPILE.BAT 2>/dev/null || true

# A minimal C program (written here, not copied from the disc).
printf 'extern int printf();\n\nvoid main () {\n   printf("Hello, world.\\n");\n   }\n' \
  > /var/tmp/compile-proof-hello.c
todos /var/tmp/compile-proof-hello.c
mcopy /var/tmp/compile-proof-hello.c -i "$WORK" ::HELLO.C

# The batch does the compiling. Redirection lives in this file because the
# guest keyboard cannot type '>' (it arrives as a backslash); see the doc.
cat > /var/tmp/compile-proof-batch.bat <<'BAT'
@ECHO OFF
CD \
SET HCDIR=Q:\HC386
SET TOOLSDIR=Q:\HC386
SET INCLUDE=Q:\HC386\INC
SET LIB=Q:\HC386\SMALL
Q:\HC386\BIN\HCD386.EXE A:\HELLO.C -obj A:\HELLO.OBJ -dir Q:\HC386\INC
DIR A:\*.OBJ > A:\DIROBJ.TXT
BAT
# This DOS needs CRLF batch files; the heredoc produced LF.
todos /var/tmp/compile-proof-batch.bat
mcopy /var/tmp/compile-proof-batch.bat -i "$WORK" ::COMPILE.BAT

# Append the compile to AUTOEXEC so boot runs it with no typing.
mtype -i "$WORK" ::AUTOEXEC.BAT > /var/tmp/compile-proof-aue.bat
printf 'COMPILE.BAT\r\n' >> /var/tmp/compile-proof-aue.bat
mdel -i "$WORK" ::AUTOEXEC.BAT
mcopy /var/tmp/compile-proof-aue.bat -i "$WORK" ::AUTOEXEC.BAT

echo "== loading floppy (files are in the image BEFORE FD0LOAD; the guest"
echo "   does not see mtools writes into an already-loaded image)"
api /api/cmd "{\"line\":\"FD0LOAD /data/$(basename "$WORK")\"}" >/dev/null
sleep 0.5
# FD0LOAD re-arms floppy write protection on this build.
api /api/cmd '{"line":"FD0UP"}' >/dev/null
sleep 0.5
api /api/cmd '{"line":"RESET F0"}' >/dev/null

echo "== waiting for boot + compile (polling for the guest-side dir file)"
ok=0
for _ in $(seq 1 30); do
  sleep 5
  if mdir -i "$WORK" ::DIROBJ.TXT >/dev/null 2>&1; then ok=1; break; fi
done
[ "$ok" = 1 ] || { echo "FAIL: guest never wrote DIROBJ.TXT"; exit 1; }
sleep 2

echo
echo "== proof 1: DIR executed inside the guest (A:\\DIROBJ.TXT)"
mtype -i "$WORK" ::DIROBJ.TXT

echo
echo "== proof 2: host-side extraction with mtools"
mcopy -i "$WORK" ::HELLO.OBJ /var/tmp/compile-proof.obj
ls -la /var/tmp/compile-proof.obj
sha256sum /var/tmp/compile-proof.obj
xxd /var/tmp/compile-proof.obj | head -4

size=$(stat -c %s /var/tmp/compile-proof.obj)
magic=$(xxd -p -l 1 /var/tmp/compile-proof.obj)
if [ "$size" -gt 0 ] && [ "$magic" = "80" ]; then
  echo
  echo "PASS: HELLO.OBJ is a $size-byte OMF object (first record 0x80 THEADR)."
else
  echo
  echo "FAIL: unexpected size $size or magic $magic"
  exit 1
fi
