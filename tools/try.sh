#!/usr/bin/env bash
# try.sh - start the emulator with a chosen floppy, on FIXED ports.
#
# The point of this script is that the ports never change. Every run tears down
# the previous container first, so there is never a collision and never a reason
# to increment a port number. If a port is genuinely busy, this script says so
# and stops rather than quietly using a different one.
#
# Ports, always:
#   6080  browser (noVNC)    http://<host>:6080/vnc.html
#   6080  character editor   http://<host>:6080/editor
#   8080  HTTP API           http://<host>:8080/api/status
#
# Usage:
#   ./tools/try.sh <floppy-image>   start with that image in drive A
#   ./tools/try.sh                  start with the stock [UserDisk]
#   ./tools/try.sh stop             tear down
#
# Set FREQ to match real hardware. Tsugaru defaults to 25 MHz, but every FM Towns
# of this generation is a 386DX at 16 MHz, so animations run about 1.5x too fast.
#   FREQ=16 ./tools/try.sh saves/mydisk.hdm
#
# The image is mounted read-write. Take a copy first if it matters.
set -euo pipefail

HERE="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
ROOT="$(cd -- "$HERE/.." && pwd)"

NAME=fmt
PORT_WEB=6080
PORT_API=8080
RESOLUTION="${RESOLUTION:-1024x800x24}"

PODMAN() { sudo podman "$@"; }
die() { printf 'error: %s\n' "$*" >&2; exit 1; }
note() { printf '%s\n' "$*"; }

if [ "${1:-}" = "stop" ]; then
	PODMAN rm -f "$NAME" >/dev/null 2>&1 || true
	note "stopped $NAME"
	exit 0
fi

FLOPPY="${1:-$ROOT/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[UserDisk].hdm}"
[ -f "$FLOPPY" ] || die "floppy image not found: $FLOPPY"

# The container only sees /data, so the image has to live under saves/.
base="$(basename -- "$FLOPPY")"
case "$(cd -- "$(dirname -- "$FLOPPY")" && pwd)/$base" in
	"$ROOT/saves/"*) ;;
	*) cp -f "$FLOPPY" "$ROOT/saves/$base" ;;
esac

# Always tear down first. This is what makes fixed ports safe.
PODMAN rm -f "$NAME" >/dev/null 2>&1 || true

# Fail clearly if something else holds a port, rather than shifting to another.
for p in "$PORT_WEB" "$PORT_API"; do
	if ss -lnt 2>/dev/null | awk '{print $4}' | grep -qE "[:.]${p}\$"; then
		die "port $p is already in use.
  See what holds it with:  ss -lntp | grep :$p
  This script deliberately does not pick another port, because that is how
  ports end up changing between runs."
	fi
done

PODMAN run -d --name "$NAME" \
	-p "$PORT_WEB:6080" -p "$PORT_API:8080" \
	-v "$ROOT/vendor/emulator:/emulator:ro,z" \
	-v "$ROOT/vendor/roms:/roms:ro,z" \
	-v "$ROOT/saves:/data:z" \
	-v "$ROOT/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).ccd:/disc/game.ccd:ro,z" \
	-v "$ROOT/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).img:/disc/game.img:ro,z" \
	-e ROM_DIR=/roms \
	-e "RESOLUTION=$RESOLUTION" \
	-e "TSUGARU_ARGS=-CD /disc/game.ccd -FD0 /data/$base -FD0UP${FREQ:+ -FREQ $FREQ}" \
	localhost/fmtowns >/dev/null

note ""
note "floppy drive 0 : saves/$base"
note "browser        : http://<host>:$PORT_WEB/vnc.html"
note "character edit : http://<host>:$PORT_WEB/editor"
note "API            : http://<host>:$PORT_API/api/status"
note ""
note "U2 prints A WRONG DISK twice at startup. Press space through both."
