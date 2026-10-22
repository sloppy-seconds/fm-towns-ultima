#!/usr/bin/env bash
# mame-run.sh - run MAME's FM Towns driver in a browser-accessible container.
#
# Separate from tools/container-run.sh on purpose. That one drives Tsugaru, which
# has a console the supervisor can talk to. MAME has no such console, so this is
# a plainer wrapper: start it, open the URL, press keys yourself.
#
# Why this exists at all: MAME models the floppy controller at the magnetic
# surface level, so sector headers, CRCs and gaps are real. Tsugaru does not.
# Ultima II refuses every floppy under Tsugaru while Ultima I and III write
# theirs happily, so testing a different FDC is the one way to tell an emulator
# bug from a quirk in the FM Towns port.
#
# Usage:
#   ./tools/mame-run.sh start [floppy-image]   build if needed, start
#   ./tools/mame-run.sh stop                   stop and remove
#   ./tools/mame-run.sh status                 is it running, on what ports
#   ./tools/mame-run.sh logs                   follow the container log
#   ./tools/mame-run.sh shell                  bash inside the container
#   ./tools/mame-run.sh build                  force an image rebuild
#
# Environment:
#   PORT_WEB   noVNC browser port        (default 6096)
#   PORT_VNC   raw VNC port              (default 5906)
#   ROM_ZIP    MAME fmtowns.zip          (default tmp/fmtowns.zip)
#   RESOLUTION Xvfb geometry             (default 1024x800x24)
#
# The ROM zip is copyrighted and gitignored. It is mounted read-only and never
# copied into the image.
set -euo pipefail

HERE="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
ROOT="$(cd -- "$HERE/.." && pwd)"

IMAGE=fmtowns-mame
NAME=fmtowns-mame
PORT_WEB="${PORT_WEB:-6096}"
PORT_VNC="${PORT_VNC:-5906}"
RESOLUTION="${RESOLUTION:-1024x800x24}"
ROM_ZIP="${ROM_ZIP:-$ROOT/tmp/fmtowns.zip}"

DISC_CUE="$ROOT/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).cue"
DISC_CCD="$ROOT/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).ccd"
DISC_IMG="$ROOT/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).img"

PODMAN() { sudo podman "$@"; }
die() { printf 'error: %s\n' "$*" >&2; exit 1; }
note() { printf '%s\n' "$*"; }

do_build() {
	note "building $IMAGE from container/Containerfile.mame"
	PODMAN build -t "$IMAGE" -f "$ROOT/container/Containerfile.mame" "$ROOT"
}

do_start() {
	local floppy="${1:-}"
	[ -f "$ROM_ZIP" ] || die "MAME ROM zip not found: $ROM_ZIP
Put a MAME fmtowns.zip there. It is copyrighted and gitignored on purpose.
Check it with: unzip -l '$ROM_ZIP'"

	PODMAN image exists "$IMAGE" || do_build

	PODMAN rm -f "$NAME" >/dev/null 2>&1 || true

	local mounts=(
		-v "$ROM_ZIP:/roms/fmtowns.zip:ro,z"
		-v "$ROOT/saves:/data:z"
	)
	# Mount the disc directory itself. The .cue names its .img by the original long
	# filename, and MAME resolves that relative to the cue. Mounting the two files
	# separately under short names breaks the reference.
	if [ -f "$DISC_CUE" ]; then
		mounts+=(-v "$ROOT:/disc:ro,z")
		CD_ARG=/disc/$(basename -- "$DISC_CUE")
	elif [ -f "$DISC_IMG" ]; then
		mounts+=(-v "$ROOT:/disc:ro,z")
		CD_ARG=/disc/$(basename -- "$DISC_IMG")
	else
		CD_ARG=""
	fi

	local envs=(-e "RESOLUTION=$RESOLUTION")
	[ -n "$CD_ARG" ] && envs+=(-e "CD=$CD_ARG")
	if [ -n "$floppy" ]; then
		[ -f "$floppy" ] || die "floppy image not found: $floppy"
		local abs
		abs="$(cd -- "$(dirname -- "$floppy")" && pwd)/$(basename -- "$floppy")"
		mounts+=(-v "$abs:/data/boot.hdm:z")
		envs+=(-e FD0=/data/boot.hdm)
		note "floppy drive 0: $abs"
	fi

	PODMAN run -d --name "$NAME" \
		-p "$PORT_WEB:6080" -p "$PORT_VNC:5900" \
		"${mounts[@]}" "${envs[@]}" \
		"$IMAGE" >/dev/null

	note ""
	note "MAME FM Towns running."
	note "  browse: http://127.0.0.1:$PORT_WEB/vnc.html"
	note "  vnc:    localhost:$PORT_VNC"
	note ""
	note "Notes: MAME starts paused and the FM Towns needs booting."
	note "  press a key in the window, then use the UI to insert the CD if needed."
	note "  Escape opens MAME's own menu, where floppy images can be swapped."
}

do_stop() {
	PODMAN rm -f "$NAME" >/dev/null 2>&1 || true
	note "stopped and removed $NAME"
}

do_status() {
	if PODMAN ps --format '{{.Names}}' | grep -qx "$NAME"; then
		note "$NAME is running"
		note "  browse: http://127.0.0.1:$PORT_WEB/vnc.html"
		PODMAN ps --filter "name=$NAME" --format '  {{.Status}}  {{.Ports}}'
	else
		note "$NAME is not running"
	fi
}

case "${1:-start}" in
	start)  shift || true; do_start "${1:-}" ;;
	stop)   do_stop ;;
	status) do_status ;;
	logs)   PODMAN logs -f "$NAME" ;;
	shell)  PODMAN exec -it "$NAME" bash ;;
	build)  do_build ;;
	*)      die "unknown command: $1" ;;
esac
