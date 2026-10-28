#!/usr/bin/env bash
# entrypoint-geartowns.sh - start Xvfb, VNC, noVNC, then Geartowns.
#
# WHY THIS EXISTS ALONGSIDE THE HEADLESS MODE. Geartowns' `--headless` runs no GUI and
# requires MCP, which is right for scripted debugging but gives nothing to look at. Two
# things went wrong with headless-only: `tools/mcp-geartowns.py` completed the handshake
# and `tools/list` but never got a `tools/call` response, and there was no independent way
# to see whether the game had booted. A VNC view answers "did it boot" directly, with no
# client in between.
#
# So this container runs Geartowns WINDOWED under Xvfb, which is what the Tsugaru
# container does. MCP is still available over HTTP in this mode.
#
# The Xvfb, x11vnc and websockify handling is deliberately the same shape as
# container/entrypoint.sh, including the stale-lock removal and the socket wait, because
# both of those were learned from real failures and cost hours.
#
# Environment:
#   RESOLUTION    Xvfb geometry, default 640x480x24
#   VNC_PASSWORD  if set, x11vnc requires it
#   GEARTOWNS_ARGS  extra arguments for geartowns
#   MEDIA         CD image path inside the container; defaults to the trilogy .cue
#   MCP_ENABLE    "1" to also start the MCP HTTP server
set -euo pipefail

RESOLUTION="${RESOLUTION:-1024x768x24}"
MEDIA="${MEDIA:-/cdrom/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).cue}"
MCP_ENABLE="${MCP_ENABLE:-1}"
# MODEL is the single most important setting for booting the Ultima Trilogy disc.
# The disc's IPL4 boot sector runs a timed delay loop that reads the free-running
# timer at I/O port 0x26. Geartowns only decodes that port when the machine profile
# carries GT_MACHINE_FEATURE_FREE_RUN_TIMER, which model1_2 (and 1f/10f/cx/ux) do
# NOT. On those models the timer reads a constant, the delay loop never expires, and
# the Towns BIOS hangs at "システムが遅いです" with the CD head stuck at LBA 59.
# The profiles that DO carry the timer are ug, hg, hr and marty; of those the
# computer models hg and hr boot the Towns OS CD browser cleanly. Default hr.
MODEL="${MODEL:-hr}"
export DISPLAY="${DISPLAY:-:99}"

log() { printf '[entrypoint] %s\n' "$*"; }

# --- virtual display ---------------------------------------------------------
#
# A LOCK LEFT BY AN UNCLEAN SHUTDOWN BLOCKS EVERY LATER START, and it lives on the
# container's own filesystem so a restart reproduces the failure rather than clearing it.
rm -f "/tmp/.X${DISPLAY#:}-lock" "/tmp/.X11-unix/X${DISPLAY#:}" 2>/dev/null || true
log "starting Xvfb on ${DISPLAY} at ${RESOLUTION}"
Xvfb "${DISPLAY}" -screen 0 "${RESOLUTION}" -nolisten tcp -ac +extension GLX +render -noreset &
XVFB_PID=$!

# Wait for the socket rather than sleeping a fixed time.
for _ in $(seq 1 50); do
	if xdpyinfo -display "${DISPLAY}" >/dev/null 2>&1; then break; fi
	sleep 0.2
done
if ! xdpyinfo -display "${DISPLAY}" >/dev/null 2>&1; then
	log "Xvfb did not come up"
	exit 1
fi

# A window manager gives the Geartowns window keyboard focus and maps it sensibly.
# Without one, noVNC keystrokes reach Xvfb but not the SDL window, so arrow keys and
# typing do nothing in the game. Fall back gracefully if none is installed.
if command -v openbox >/dev/null 2>&1; then
	log "starting openbox (window manager, for keyboard focus)"
	openbox --sm-disable &
elif command -v fluxbox >/dev/null 2>&1; then
	fluxbox &
fi

# --- VNC ---------------------------------------------------------------------
VNC_ARGS=(-display "${DISPLAY}" -forever -shared -rfbport 5900 -noxdamage -repeat)
if [ -n "${VNC_PASSWORD:-}" ]; then
	mkdir -p /root/.vnc
	x11vnc -storepasswd "${VNC_PASSWORD}" /root/.vnc/passwd >/dev/null
	VNC_ARGS+=(-rfbauth /root/.vnc/passwd)
fi
log "starting x11vnc on 5900"
x11vnc "${VNC_ARGS[@]}" >/tmp/x11vnc.log 2>&1 &

# --- noVNC -------------------------------------------------------------------
NOVNC_WEB=""
for d in /usr/share/novnc /usr/share/webapps/novnc /opt/novnc; do
	[ -d "$d" ] && NOVNC_WEB="$d" && break
done
if [ -n "$NOVNC_WEB" ]; then
	log "starting noVNC on 6080"
	websockify --web "${NOVNC_WEB}" 6080 localhost:5900 >/tmp/novnc.log 2>&1 &
else
	log "noVNC web root missing, VNC still available on 5900"
fi

# --- MCP ---------------------------------------------------------------------
#
# HTTP rather than stdio in this mode, because stdio would consume the process's stdin
# and windowed mode has no `--headless` requirement to satisfy. A bearer token is needed
# for a non-loopback bind.
MCP_ARGS=()
if [ "${MCP_ENABLE}" = "1" ]; then
	export GEARTOWNS_MCP_HTTP_TOKEN="${GEARTOWNS_MCP_HTTP_TOKEN:-geartowns-local}"
	# MCP_BIND defaults to 0.0.0.0. The HTTP transport rejects any Host header that is not
	# the address the socket was accepted on, so over a podman port-forward it always 403s.
	# Run the container with --network host and MCP_BIND=127.0.0.1 to drive it over loopback.
	MCP_ARGS=(--mcp-http --mcp-http-address "${MCP_BIND:-0.0.0.0}" --mcp-http-port 7777)
	log "MCP HTTP on ${MCP_BIND:-0.0.0.0}:7777 (bearer token set)"
fi

# --- the emulator ------------------------------------------------------------
#
# --windowed, not --headless, so there is a framebuffer for Xvfb to capture.
log "starting geartowns (model ${MODEL}) with media: ${MEDIA}"
# shellcheck disable=SC2086
exec geartowns --windowed --model "${MODEL}" ${MCP_ARGS[*]:-} ${GEARTOWNS_ARGS:-} --cd "${MEDIA}"
