#!/usr/bin/env bash
# entrypoint.sh - Xvfb, VNC, noVNC, then run a DOS build under DOSBox.
#
# MODE=shell  start the display and VNC, then idle. This is the useful default: watch the browser, then drive
#             DOSBox by hand to find out what it is doing.
# MODE=build  run the build once, write the object, and stay up so the result can be inspected over VNC.
#
# The display is started even for a headless build, because SDL initialises video regardless of -nogui, and a
# missing DISPLAY is the failure that reads as "DOSBox-X did not run".
set -euo pipefail

RESOLUTION="${RESOLUTION:-1024x768x24}"
MODE="${MODE:-shell}"
DBX="${DBX:-dosbox-x}"
SOURCE="${SOURCE:-PLOT.C}"

log() { printf '[highc] %s\n' "$*"; }

# A LOCK LEFT BY AN UNCLEAN SHUTDOWN BLOCKS EVERY LATER START. /tmp/.X99-lock lives on the container filesystem, so
# "podman restart" reproduces the failure rather than clearing it. Same trap as the emulator container.
rm -f "/tmp/.X${DISPLAY#:}-lock" "/tmp/.X11-unix/X${DISPLAY#:}" 2>/dev/null || true

log "starting Xvfb on ${DISPLAY} at ${RESOLUTION}"
Xvfb "${DISPLAY}" -screen 0 "${RESOLUTION}" -nolisten tcp -ac +extension GLX +render -noreset &
XVFB_PID=$!

for _ in $(seq 1 50); do
	if xdpyinfo -display "${DISPLAY}" >/dev/null 2>&1; then break; fi
	sleep 0.2
done
if ! xdpyinfo -display "${DISPLAY}" >/dev/null 2>&1; then
	log "Xvfb did not come up"
	exit 1
fi
log "X display ready"

if command -v openbox >/dev/null 2>&1; then
	openbox >/dev/null 2>&1 &
	log "openbox started"
fi

log "starting x11vnc on 5900"
x11vnc -display "${DISPLAY}" -forever -shared -nopw -rfbport 5900 -quiet >/dev/null 2>&1 &

if command -v websockify >/dev/null 2>&1 && [ -d /usr/share/novnc ]; then
	log "starting noVNC on 6080"
	websockify --web=/usr/share/novnc 6080 localhost:5900 >/dev/null 2>&1 &
	log "browse to http://<host>:6080/vnc.html"
fi

# A terminal window makes the manual mode usable: watch it over VNC and type into it.
if [ "$MODE" = "shell" ] && command -v xterm >/dev/null 2>&1; then
	xterm -geometry 100x30+0+0 >/dev/null 2>&1 &
fi

case "$MODE" in
build)
	log "running the build under ${DBX}"
	cd /work
	# -nogui is honoured, but SDL still needs DISPLAY, which is set above.
	"${DBX}" -conf /opt/dosbox.conf -nogui > /var/log/dosbox.log 2>&1 || true
	log "dosbox exited; check /work for the object and BUILD.LOG"
	;;
shell)
	log "manual mode. Drive DOSBox from the VNC window, or run:"
	log "  ${DBX} -conf /opt/dosbox.conf"
	;;
*)
	log "unknown MODE=${MODE}"
	exit 2
	;;
esac

# Stay up so the browser keeps working and the screen can be inspected.
log "ready. Ctrl-C or podman stop to finish."
wait "$XVFB_PID"
