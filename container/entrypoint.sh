#!/usr/bin/env bash
# entrypoint.sh - start Xvfb, VNC, noVNC, then Tsugaru.
#
# Environment:
#   RESOLUTION   Xvfb geometry, default 640x480x24
#   VNC_PASSWORD if set, x11vnc requires it
#   TSUGARU_ARGS extra arguments for Tsugaru_CUI
#   MODE         "game" (default) or "shell"
set -euo pipefail

RESOLUTION="${RESOLUTION:-640x480x24}"
MODE="${MODE:-game}"

log() { printf '[entrypoint] %s\n' "$*"; }

# --- virtual display ---------------------------------------------------------

log "starting Xvfb on ${DISPLAY} at ${RESOLUTION}"
Xvfb "${DISPLAY}" -screen 0 "${RESOLUTION}" -nolisten tcp -ac +extension GLX +render -noreset &
XVFB_PID=$!

# Wait for the X socket rather than sleeping a fixed time.
for _ in $(seq 1 50); do
	if xdpyinfo -display "${DISPLAY}" >/dev/null 2>&1; then break; fi
	sleep 0.2
done
if ! xdpyinfo -display "${DISPLAY}" >/dev/null 2>&1; then
	log "Xvfb did not come up"
	exit 1
fi
log "X display ready"

# Tsugaru wants a window manager for focus and for the window to be mapped
# sensibly. A minimal one saves a lot of grief; fall back gracefully.
if command -v openbox >/dev/null 2>&1; then
	openbox --sm-disable &
elif command -v fluxbox >/dev/null 2>&1; then
	fluxbox &
else
	log "no window manager, continuing without one"
fi

# --- VNC ---------------------------------------------------------------------

VNC_ARGS=(-display "${DISPLAY}" -forever -shared -rfbport 5900 -noxdamage -repeat)
if [ -n "${VNC_PASSWORD:-}" ]; then
	mkdir -p /root/.vnc
	x11vnc -storepasswd "${VNC_PASSWORD}" /root/.vnc/passwd >/dev/null
	VNC_ARGS+=(-rfbauth /root/.vnc/passwd)
else
	VNC_ARGS+=(-nopw)
fi

log "starting x11vnc on 5900"
x11vnc "${VNC_ARGS[@]}" >/tmp/x11vnc.log 2>&1 &
sleep 0.5

# --- noVNC -------------------------------------------------------------------

NOVNC_WEB=/usr/share/novnc
if [ -d "${NOVNC_WEB}" ]; then
	log "starting noVNC on 6080"
	websockify --web "${NOVNC_WEB}" 6080 localhost:5900 >/tmp/novnc.log 2>&1 &
else
	log "noVNC web root missing, VNC still available on 5900"
fi

# Kill any orphaned 640x480 windows left on the display by an earlier run.
# These are viewable but owned by no process, and they draw over the live
# emulator, so a person watching noVNC sees a stale screen while anything
# capturing by window id sees the real one. That divergence produced a false
# "we are in the game" conclusion once already.
if command -v xdotool >/dev/null 2>&1; then
	for w in $(xdotool search --class '' 2>/dev/null); do
		geo=$(xdotool getwindowgeometry "$w" 2>/dev/null | grep -oE '[0-9]+x[0-9]+' | head -1 || true)
		name=$(xdotool getwindowname "$w" 2>/dev/null || true)
		# No name and 640-wide means a leftover framebuffer window.
		if [ "${geo%%x*}" = "640" ] && [ -z "$name" ]; then
			log "killing stale window $w ($geo)"
			xdotool windowkill "$w" 2>/dev/null || true
		fi
	done
fi

log "browse to http://<host>:6080/vnc.html"

# --- Tsugaru -----------------------------------------------------------------

if [ "${MODE}" = "shell" ]; then
	log "shell mode"
	exec /bin/bash
fi

ROM_DIR="${ROM_DIR:-/roms}"
CD_IMAGE="${CD_IMAGE:-}"
CMOS="${CMOS:-/data/CMOS.BIN}"

mkdir -p /data

if [ ! -x /emulator/Tsugaru_CUI ]; then
	log "ERROR: /emulator/Tsugaru_CUI not mounted. Run tools/container-run.sh"
	exit 1
fi
if [ ! -d "${ROM_DIR}" ]; then
	log "ERROR: ROM directory ${ROM_DIR} not mounted"
	exit 1
fi

ARGS=("${ROM_DIR}")
[ -n "${CD_IMAGE}" ] && ARGS+=(-CD "${CD_IMAGE}")
ARGS+=(-CMOS "${CMOS}")

# UserDisk save floppy, if present alongside the CD.
if [ -n "${FD0_IMAGE:-}" ] && [ -f "${FD0_IMAGE}" ]; then
	ARGS+=(-FD0 "${FD0_IMAGE}")
	# Tsugaru write-protects floppies by default. U2 needs to write its save
	# files (ROSTER1.UT2, WORLD1-4.UT2) at character creation, and with the
	# disk protected it reports "A WRONG DISK" instead of creating them.
	ARGS+=(-FD0UP)
fi

# Some options must come before the ROM directory to take effect, and the
# supervisor passes everything through verbatim, so splice them in here.
# shellcheck disable=SC2206
[ -n "${TSUGARU_ARGS:-}" ] && ARGS+=(${TSUGARU_ARGS})
# shellcheck disable=SC2206
[ -n "${TSUGARU_EXTRA:-}" ] && ARGS+=(${TSUGARU_EXTRA})

# The supervisor owns the emulator's stdin/stdout and exposes an HTTP API for
# keystrokes, debugger commands and screenshot-as-text. Running Tsugaru directly
# here would leave no way to type into it once detached.
log "launching supervisor: Tsugaru_CUI ${ARGS[*]}"
export API_PORT="${API_PORT:-8080}"
export OUT_DIR="${OUT_DIR:-/data/analysis}"
export EMU_BIN=/emulator/Tsugaru_CUI
export DISPLAY
exec node /usr/local/bin/supervisor.js "${ARGS[@]}"
