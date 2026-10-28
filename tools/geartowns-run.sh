#!/usr/bin/env bash
# tools/geartowns-run.sh - run Geartowns with the trilogy disc.
#
# WHAT THIS IS FOR, and what it is not. It is NOT a replacement for Tsugaru. The whole
# compile pipeline (cserve.js, the CMOS behaviour, the -HD0 UNZ images) is proven on
# Tsugaru and stays there. This exists because Geartowns exposes an MCP server, which
# turns "set a breakpoint, inspect memory, read a register" into structured tool calls
# instead of keystrokes into a VNC session and a PNG round trip.
#
# HEADLESS IS THE PRIMARY MODE. `start` runs `geartowns --headless --mcp-stdio`, which is
# the reliable path: it draws to the emulated framebuffer (read with get_screenshot) and
# needs no X server. Drive it with tools/mcp-geartowns.py, which boots the disc and can
# launch a game:
#
#     python3 tools/mcp-geartowns.py --launch 2      # boot disc, launch Ultima II
#
# A headless instance starts with the CPU paused and exits when stdin closes, so this
# script holds stdin open with a FIFO and the container stays alive for `logs`/`status`.
# The actual tool calls go through mcp-geartowns.py, which runs its own short-lived
# container per command.
#
# `--vnc` runs the windowed build under Xvfb + x11vnc + noVNC instead, for a live browser
# view of the same boot. It is secondary: it needs the GL path and shows the Towns OS CD
# browser, but the debugger and pointer are awkward to drive through VNC.
#
# THE MODEL MUST BE hr (or hg). The disc IPL waits on the free-running timer at port 0x26,
# which model1_2 does not decode, so the default model hangs. See docs/geartowns.md.
#
# Usage:
#   ./tools/geartowns-run.sh start          headless (primary)
#   ./tools/geartowns-run.sh start --vnc    windowed, live at the noVNC URL
#   ./tools/geartowns-run.sh logs           follow the running container
#   ./tools/geartowns-run.sh stop
#   ./tools/geartowns-run.sh status
#
# Env:
#   GEARTOWNS_MODEL   machine model (default hr)
#   GEARTOWNS_VNC_PORT / GEARTOWNS_RFB_PORT   host ports for --vnc (6082 / 5902)
#   GEARTOWNS_BIND    bind address for --vnc ports (default 0.0.0.0)
#   PODMAN            container runner (default podman)

set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
CONTAINER="${GEARTOWNS_CONTAINER:-geartowns}"
IMAGE="${GEARTOWNS_IMAGE:-geartowns}"
MODEL="${GEARTOWNS_MODEL:-hr}"
BINDADDR="${GEARTOWNS_BIND:-0.0.0.0}"
VNCPORT="${GEARTOWNS_VNC_PORT:-6082}"
RFBPORT="${GEARTOWNS_RFB_PORT:-5902}"

DISC_CUE="Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).cue"
DISC_IMG="Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).img"
DISC_FD="Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[UserDisk].hdm"
ROMDIR="$ROOT/vendor/roms"

# Scratch dirs so the container never bind-mounts the whole repo. Mounting the repo root
# makes podman relabel every file under it, which fails on any root-owned path. The .cue
# references the .img by relative name, so the three disc files must sit together.
DISCDIR="${GEARTOWNS_DISC_DIR:-/var/tmp/geartowns-disc}"
CFGDIR="${GEARTOWNS_CONFIG_DIR:-/var/tmp/geartowns-config}"

PODMAN="${PODMAN:-podman}"

die() { echo "$*" >&2; exit 1; }

need() { [ -f "$1" ] || die "missing: $1"; }

prepare_disc() {
	mkdir -p "$DISCDIR"
	for name in "$DISC_CUE" "$DISC_IMG" "$DISC_FD"; do
		local src="$ROOT/$name" dst="$DISCDIR/$name"
		need "$src"
		[ -e "$dst" ] && continue
		ln "$src" "$dst" 2>/dev/null || cp "$src" "$dst"
	done
}

# Seed [Firmware] (no command line flag exists for it) plus the model and a debugger-off,
# run-on-startup default so a --vnc view shows the game rather than a paused debugger.
#
# This OVERWRITES config.ini every start on purpose. Geartowns rewrites the file on exit
# with whatever the last session left (debugger open, paused), and a stale file then makes
# the next boot look broken. The file holds only UI settings and the firmware path; the
# per-model CMOS lives in separate *.geartowns.cmos files and is not touched.
seed_config() {
	local cfgdir="$CFGDIR/.local/share/Geardome/Geartowns"
	mkdir -p "$cfgdir"
	local ini="$cfgdir/config.ini"
	printf '[General]\nVersion = 7\n\n[Firmware]\nDefault = /roms\nmodel1_2 = /roms\n\n[Machine]\nModel = %s\n\n[Debug]\nDebug = false\n\n[Emulator]\nStartPaused = false\nPowerOnAtStartup = true\nPauseWhenInactive = false\n' "$MODEL" > "$ini"
}

ensure_image() {
	if ! $PODMAN image exists "$IMAGE"; then
		echo "building $IMAGE (this compiles a C++ emulator, expect several minutes)"
		$PODMAN build -t "$IMAGE" -f "$ROOT/container/Containerfile.geartowns" "$ROOT"
	fi
}

start_headless() {
	# A headless instance exits when stdin closes, so hold it open with a FIFO whose write
	# end is kept by a background sleep. The container then stays up for logs/status while
	# the real work goes through tools/mcp-geartowns.py.
	local inner
	inner='mkfifo /tmp/in; ( sleep infinity > /tmp/in & ) ; HOME=/config exec geartowns --headless --mcp-stdio --model '"$MODEL"' --cd "/cdrom/'"$DISC_CUE"'" --fd1 "/cdrom/'"$DISC_FD"'" < /tmp/in'
	$PODMAN run -d --name "$CONTAINER" --rm \
		-v "$CFGDIR:/config:z" \
		-v "$ROMDIR:/roms:ro,z" \
		-v "$DISCDIR:/cdrom:ro,z" \
		--entrypoint /bin/sh "$IMAGE" -c "$inner" >/dev/null
	echo "started headless ($CONTAINER, model $MODEL)."
	echo "  drive it:  python3 tools/mcp-geartowns.py --launch 2"
	echo "  or:        python3 tools/mcp-geartowns.py --call get_palettes"
	echo "  logs:      $0 logs     stop: $0 stop"
}

start_vnc() {
	$PODMAN run -d --name "$CONTAINER" --rm \
		-p "${BINDADDR}:${VNCPORT}:6080" \
		-p "${BINDADDR}:${RFBPORT}:5900" \
		-e RESOLUTION="${GEARTOWNS_RES:-1024x768x24}" \
		-e MODEL="$MODEL" \
		-e MCP_ENABLE=0 \
		-v "$CFGDIR:/config:z" \
		-v "$ROMDIR:/roms:ro,z" \
		-v "$DISCDIR:/cdrom:ro,z" \
		"$IMAGE" >/dev/null
	local host="${GEARTOWNS_HOSTNAME:-$(hostname -f 2>/dev/null || hostname)}"
	[ "$BINDADDR" = "0.0.0.0" ] || host="$BINDADDR"
	echo "started windowed ($CONTAINER, model $MODEL)."
	echo "  browse: http://${host}:${VNCPORT}/vnc.html"
	echo "  vnc:    ${host}:${RFBPORT}"
	echo "  The Towns OS CD browser appears after ~45s. Click a game icon to launch it."
}

start() {
	$PODMAN info >/dev/null 2>&1 || die "podman not reachable (tried: $PODMAN)"
	[ -d "$ROMDIR" ] || die "missing ROM directory: $ROMDIR"
	prepare_disc
	seed_config
	ensure_image
	$PODMAN rm -f "$CONTAINER" >/dev/null 2>&1 || true
	if [ "${VNC_MODE:-0}" = "1" ]; then
		start_vnc
	else
		start_headless
	fi
}

# Parse the mode flag wherever it appears, then dispatch on the first positional.
args=()
VNC_MODE=0
for a in "$@"; do
	case "$a" in
		--vnc) VNC_MODE=1 ;;
		*) args+=("$a") ;;
	esac
done
set -- "${args[@]}"

case "${1:-start}" in
	start) start ;;
	logs) $PODMAN logs -f "$CONTAINER" ;;
	stop) $PODMAN stop "$CONTAINER" >/dev/null 2>&1 || true; echo stopped ;;
	status) $PODMAN ps --filter "name=$CONTAINER" --format '{{.Names}} {{.Status}}' || true ;;
	*) die "usage: $0 [start [--vnc] | logs | stop | status]" ;;
esac
