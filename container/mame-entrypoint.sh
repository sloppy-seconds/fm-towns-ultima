#!/usr/bin/env bash
# mame-entrypoint.sh - start Xvfb, VNC, noVNC, then MAME running fmtowns.
#
# Environment:
#   RESOLUTION     Xvfb geometry, default 1024x800x24
#   MAME_ARGS      extra arguments appended to the MAME command
#   FD0            floppy image to place in drive 0, e.g. /data/u2.hdm
#   FD1            floppy image to place in drive 1
#   CD             CD image. Defaults to /disc/game.cue if present.
set -euo pipefail

RESOLUTION="${RESOLUTION:-1024x800x24}"
MODE="${MODE:-game}"

log() { printf '[entrypoint] %s\n' "$*"; }

# --- display ---------------------------------------------------------------
log "starting Xvfb on :99 at ${RESOLUTION}"
Xvfb :99 -screen 0 "${RESOLUTION}" -nolisten tcp &
for _ in $(seq 1 50); do
	xdpyinfo -display :99 >/dev/null 2>&1 && break
	sleep 0.1
done
export DISPLAY=:99
log "X display ready"

# Window manager, so the MAME window gets focus and can be mapped properly.
openbox >/dev/null 2>&1 &

# --- vnc -------------------------------------------------------------------
log "starting x11vnc on 5900"
x11vnc -display :99 -forever -shared -rfbport 5900 -noxdamage -repeat -nopw \
	-quiet >/dev/null 2>&1 &

log "starting noVNC on 6080"
websockify --web /opt/novnc 6080 localhost:5900 >/dev/null 2>&1 &

log "browse to http://<host>:6080/vnc.html"

# --- roms ------------------------------------------------------------------
# Debian installs MAME outside the default PATH for root.
export PATH="/usr/games:${PATH}"
command -v mame >/dev/null || { log "ERROR: mame not found on PATH"; exit 1; }

# There is no sound card in the container. Without this MAME initialises SDL
# audio, floods the log with ALSA errors, and segfaults before drawing anything.
export SDL_AUDIODRIVER=dummy
# Force the X11 backend. Left to itself SDL may pick a driver that renders to the
# root window and only creates a 1x1 stub, which leaves nothing for the window
# manager to focus. Without focus MAME ignores mouse and keyboard entirely, so
# the FM Towns in-game menu appears dead even though the emulator is running.
export SDL_VIDEODRIVER=x11

# MAME wants the ROMs as a zip named after the driver, in a rompath.
mkdir -p /data/roms
if [ -f /roms/fmtowns.zip ]; then
	ln -sfn /roms/fmtowns.zip /data/roms/fmtowns.zip
else
	log "WARNING: /roms/fmtowns.zip not found. Mount it at /roms."
fi

# --- floppy and cd ---------------------------------------------------------
ARGS=(-rompath /data/roms -skip_gameinfo -window -video soft -pad1 martypad -pad2 mouse)

if [ -n "${CD:-}" ] && [ -f "${CD}" ]; then
	ARGS+=(-cdrom "${CD}")
elif [ -f /disc/game.cue ]; then
	ARGS+=(-cdrom /disc/game.cue)
fi
[ -n "${FD0:-}" ] && [ -f "${FD0}" ] && ARGS+=(-flop1 "${FD0}")
[ -n "${FD1:-}" ] && [ -f "${FD1}" ] && ARGS+=(-flop2 "${FD1}")

# shellcheck disable=SC2086
ARGS+=(${MAME_ARGS:-})

log "launching: mame fmtowns ${ARGS[*]}"
mame fmtowns "${ARGS[@]}"

# If MAME exits, keep the container alive so the log stays readable.
if [ "${MODE}" = "shell" ]; then
	exec bash
fi
log "MAME exited"
sleep 3600
