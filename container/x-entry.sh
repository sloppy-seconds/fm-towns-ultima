#!/bin/sh
# The virtual display, its two viewers, and then the command this container was started with.
#
# Three processes, in this order: Xvfb on :99, x11vnc attached to it, websockify serving noVNC on 6080. Then the
# command. If the command exits the container does NOT, because the point of the thing is to be watched from
# another machine: the last frame would otherwise vanish at exactly the moment somebody tried to look at it, and
# the log line saying why is the only useful thing left.
set -e

: "${DISPLAY:=:99}"
: "${RESOLUTION:=1024x768x24}"

Xvfb "$DISPLAY" -screen 0 "$RESOLUTION" -nolisten tcp >/tmp/xvfb.log 2>&1 &
xvfb_pid=$!

# Wait for the socket rather than sleeping a guessed interval: a display that is not up yet is the failure that
# looks like "the window opened and nothing is in it".
i=0
while [ ! -S "/tmp/.X11-unix/X${DISPLAY#:}" ]; do
	i=$((i + 1))
	if [ "$i" -gt 100 ]; then
		echo "x-entry: Xvfb never created ${DISPLAY} in 10s; its log follows" >&2
		cat /tmp/xvfb.log >&2 || true
		exit 1
	fi
	sleep 0.1
done
echo "x-entry: ${DISPLAY} up at ${RESOLUTION}"

# -nopw because this is a build machine on a LAN and a password nobody can read is worse than none. -forever and
# -shared so a browser can reconnect and a second browser can watch at the same time.
x11vnc -display "$DISPLAY" -forever -shared -nopw -rfbport 5900 -quiet >/tmp/x11vnc.log 2>&1 &

if [ -d /usr/share/novnc ]; then
	websockify --web=/usr/share/novnc 6080 localhost:5900 >/tmp/websockify.log 2>&1 &
else
	echo "x-entry: no noVNC in /usr/share/novnc, so only raw VNC on 5900 is available" >&2
fi

if [ "$#" -eq 0 ]; then
	echo "x-entry: no command given; the display is up and nothing else will happen"
else
	echo "x-entry: running: $*"
	set +e
	"$@"
	status=$?
	set -e
	echo "x-entry: the command exited with ${status}. The display stays up so the last frame can be looked at,"
	echo "x-entry: and the container idles. Run another command with: podman exec -it <name> $*"
fi

wait "$xvfb_pid"
