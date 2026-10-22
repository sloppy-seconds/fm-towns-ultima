#!/usr/bin/env bash
# tools/container-run.sh - run the FM Towns emulator in a browser-accessible box.
#
# Builds the image if needed, then starts a container with Xvfb, VNC and noVNC.
# Tsugaru and the ROMs are bind-mounted from vendor/, so nothing copyrighted is
# baked into the image.
#
#   ./tools/container-run.sh              build if needed, run, print the URL
#   ./tools/container-run.sh --build      force a rebuild
#   ./tools/container-run.sh --shell      container with a bash prompt instead
#   ./tools/container-run.sh --stop       stop and remove the container
#
# Then open http://<host>:6080/vnc.html in any browser, from anywhere you can
# reach this machine.
#
# Ports:
#   6080  noVNC web UI
#   5900  raw VNC, if you prefer a native client

set -euo pipefail

HERE="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
ROOT="$(cd -- "$HERE/.." && pwd)"

IMAGE=fmtowns
NAME=fmtowns
PORT_WEB="${PORT_WEB:-6080}"
PORT_VNC="${PORT_VNC:-5900}"
RESOLUTION="${RESOLUTION:-640x480x24}"

DISC="$ROOT/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).ccd"
USERDISK="$ROOT/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[UserDisk].hdm"

# Sudo is required for podman on this host, and SELinux is enforcing, so every
# bind mount carries :z to relabel its context. Without it the container sees
# 'Permission denied' on all host directories.
PODMAN() { sudo podman "$@"; }

die() { printf 'error: %s\n' "$*" >&2; exit 1; }
note() { printf '%s\n' "$*"; }

BUILD=0
MODE=game
case "${1:-}" in
	--build) BUILD=1 ;;
	--shell) MODE=shell ;;
	--stop)
		PODMAN rm -f "$NAME" 2>/dev/null || true
		note "stopped $NAME"
		exit 0 ;;
	-h|--help) sed -n '2,20p' "${BASH_SOURCE[0]}" | sed 's/^# \{0,1\}//'; exit 0 ;;
esac

sudo -n true 2>/dev/null || die "sudo required for podman. Run 'sudo -v' first."

[ -x "$ROOT/vendor/emulator/Tsugaru_CUI" ] || die "run ./tools/vendor.sh first"
[ -d "$ROOT/vendor/roms" ] || die "run ./tools/vendor.sh --roms first"
[ -f "$DISC" ] || die "disc image missing: $DISC"

# --- image -------------------------------------------------------------------

if [ "$BUILD" -eq 1 ] || ! PODMAN image exists "$IMAGE" >/dev/null 2>&1; then
	note "building $IMAGE ..."
	PODMAN build -t "$IMAGE" -f "$ROOT/container/Containerfile" "$ROOT"
fi

# --- container ---------------------------------------------------------------

PODMAN rm -f "$NAME" >/dev/null 2>&1 || true
mkdir -p "$ROOT/saves"

RUN_ARGS=(
	--name "$NAME"
	--rm
	-d
	-p "${PORT_WEB}:6080"
	-p "${PORT_VNC}:5900"
	-v "$ROOT/vendor/emulator:/emulator:ro,z"
	-v "$ROOT/vendor/roms:/roms:ro,z"
	-v "$ROOT/saves:/data:z"
	-e "RESOLUTION=$RESOLUTION"
	-e "MODE=$MODE"
	-e "ROM_DIR=/roms"
	-e "CMOS=/data/CMOS.BIN"
)

if [ -f "$DISC" ]; then
	RUN_ARGS+=(-v "$DISC:/disc/game.ccd:ro,z")
	RUN_ARGS+=(-e "CD_IMAGE=/disc/game.ccd")
	# The .img beside the .ccd is needed too.
	IMG="${DISC%.ccd}.img"
	[ -f "$IMG" ] && RUN_ARGS+=(-v "$IMG:/disc/game.img:ro,z")
fi
[ -f "$USERDISK" ] && RUN_ARGS+=(-v "$USERDISK:/disc/userdisk.hdm:ro,z") \
	&& RUN_ARGS+=(-e "FD0_IMAGE=/disc/userdisk.hdm")

# Audio. Tsugaru will run without it but will complain; passthrough is best
# effort and the container stays usable if the host has no Pulse socket.
if [ -S "${XDG_RUNTIME_DIR:-/run/user/$(id -u)}/pulse/native" ]; then
	RUN_ARGS+=(-v "${XDG_RUNTIME_DIR:-/run/user/$(id -u)}/pulse/native:/tmp/pulse:ro")
	RUN_ARGS+=(-e "PULSE_SERVER=unix:/tmp/pulse")
fi

note "starting $NAME ..."
PODMAN run "${RUN_ARGS[@]}" "$IMAGE" >/dev/null

# --- report ------------------------------------------------------------------

HOSTIP=$(hostname -I 2>/dev/null | awk '{print $1}')
sleep 2
note ''
note "container : $NAME  (mode $MODE)"
note "browse    : http://${HOSTIP:-localhost}:${PORT_WEB}/vnc.html"
note "raw VNC   : vnc://${HOSTIP:-localhost}:${PORT_VNC}"
note ''
note "logs      : sudo podman logs -f $NAME"
note "stop      : ./tools/container-run.sh --stop"
note ''
note 'Open the URL, click Connect. The game window is 640x480 at 1:1.'
