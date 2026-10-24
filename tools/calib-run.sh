#!/usr/bin/env bash
# tools/calib-run.sh - run the High C calibration container.
#
# WHY A CONTAINER RATHER THAN THE HOST. Three Flatpak traps each failed silently and each is removed by this:
# the sandbox could not see /var/home, the working directory was not the invocation directory so a relative config
# path loaded the default config instead of ours, and DOSBox needed a DISPLAY that a headless host shell does not
# set. Inside a container the paths are ours, there is no sandbox, and the entrypoint owns the display.
#
# The compiler is bind-mounted from build/hc386_v231 rather than baked in, for the same reason the emulator
# container mounts its ROMs: a 1991 commercial compiler is someone else's copyright and does not belong in an
# image that might be published.
#
# Usage:
#   tools/calib-run.sh start      start it and print the VNC URL
#   tools/calib-run.sh build      run one unattended build, then leave the container up
#   tools/calib-run.sh shell      open a shell in a running container
#   tools/calib-run.sh logs       show the entrypoint log
#   tools/calib-run.sh stop       stop and remove
#   tools/calib-run.sh status     is it running

set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
NAME="${NAME:-highc}"
IMAGE="${IMAGE:-localhost/highc}"
PORT_WEB="${PORT_WEB:-6081}"
PORT_VNC="${PORT_VNC:-5901}"
HC="$ROOT/build/hc386_v231"
WORK="$ROOT/build/calib"

# ROOTLESS. This script uses plain podman, with no sudo, which is the default on this machine and how
# container/Containerfile is run. It was written with sudo first and that was wrong: sudo was copied from the
# emulator's notes without checking, and the only thing it achieved was putting the image in a second store that
# plain "podman images" cannot see. Rootless works for the build and for the run, including the bind mounts.
#
# THE TWO STORES ARE STILL A REAL HAZARD, so the check stays. If an image exists only in the rootful store, podman
# tries to PULL the name from a registry and fails with a certificate error that says nothing about the cause.
# Asking explicitly turns that into a message about the actual problem.
PODMAN=podman
if ! podman image exists "$IMAGE" 2>/dev/null; then
	if sudo -n podman image exists "$IMAGE" 2>/dev/null; then
		echo "  $IMAGE exists only in the ROOTFUL store, which this script does not use." >&2
		echo "  Rebuild it rootless: podman build -t $IMAGE -f container/Containerfile.highc ." >&2
	else
		echo "  $IMAGE not found. Build it first:" >&2
		echo "    podman build -t $IMAGE -f container/Containerfile.highc ." >&2
	fi
	exit 1
fi

note() { printf '  %s\n' "$*"; }

prepare() {
	[ -x "$HC/BIN/HC386.EXE" ] || {
		cat >&2 <<'MSG'
  the compiler is not extracted.

  Extract it first, merging the five floppy images:
    7z x "references/metaware/MetaWare High C 386 v2.31 (1992) (5.25-1.2mb).7z" -o/var/tmp/mw231
    sudo mount -o loop,ro "/var/tmp/mw231/MetaWare High C 386 v2.31 (1992) (5.25-1.2mb)/disk01.img" /mnt
    sudo cp -r /mnt/. build/hc386_v231/ && sudo umount /mnt
    (repeat for disk02..disk05)
MSG
		exit 1
	}
	mkdir -p "$WORK"
	# The DOS side needs a plain .C and a BUILD.BAT. Both are generated here so the host source stays readable.
	cp "$ROOT/tools/calibration/plot.c" "$WORK/PLOT.C"
	cat > "$WORK/BUILD.BAT" <<'BAT'
@echo off
rem Runs inside DOS under DOSBox. Writes markers before each stage so a failure can be located to the mount,
rem the environment, or the compiler, instead of being one silent nothing.
echo MOUNT-OK > STARTED.TXT
set HCDIR=C:\HC
set PATH=C:\HC\BIN
set INCLUDE=C:\HC\INC
echo --- environment --- > BUILD.LOG
set >> BUILD.LOG
echo --- compile --- >> BUILD.LOG
rem Hard-coded rather than passed in. A %VAR% in a BAT expands from the DOS environment, and exporting one from
rem the podman run line does not reach DOS, so a placeholder here silently compiles nothing. The file is generated
rem per run with the right name written in, which cannot go stale.
HC386 PLOT.C >> BUILD.LOG 2>&1
echo --- finished, errorlevel %ERRORLEVEL% --- >> BUILD.LOG
echo FINISHED > FINISHED.TXT
BAT
	# The container runs as root, so anything it writes is root-owned. Fix ownership up front and after each run
	# rather than hitting "Operation not permitted" on the next chmod.
	chmod -R a+rwX "$WORK" 2>/dev/null || true
}

case "${1:-start}" in
start)
	prepare
	$PODMAN rm -f "$NAME" >/dev/null 2>&1 || true
	# DOS GETS ONE DRIVE, SO THE COMPILER MUST BE INSIDE IT. C: is mounted to /work, and BUILD.BAT sets
	# HCDIR=C:\HC, so DOS needs to find C:\HC. Mounting the toolchain at /work/HC makes that true, and mounts it
	# read-only so a build cannot modify the compiler. Mounting it at /hc as well looks tidier and does not work:
	# DOS cannot see a Linux path that is not under the mounted drive.
	mkdir -p "$WORK/HC"
	$PODMAN run -d --name "$NAME" \
		-p "${PORT_WEB}:6080" -p "${PORT_VNC}:5900" \
		-v "$HC:/hc:ro,z" \
		-v "$HC:/work/HC:ro,z" \
		-v "$WORK:/work:z" \
		-e MODE=shell \
		"$IMAGE" >/dev/null
	note "started $NAME"
	note "browse  http://$(hostname -I 2>/dev/null | awk '{print $1}'):${PORT_WEB}/vnc.html"
	note "vnc     localhost:${PORT_VNC}"
	note "the VNC window has an xterm. Run: dosbox-x -conf /opt/dosbox.conf"
	;;
build)
	prepare
	$PODMAN rm -f "$NAME" >/dev/null 2>&1 || true
	mkdir -p "$WORK/HC"
	$PODMAN run -d --name "$NAME" \
		-p "${PORT_WEB}:6080" -p "${PORT_VNC}:5900" \
		-v "$HC:/hc:ro,z" \
		-v "$HC:/work/HC:ro,z" \
		-v "$WORK:/work:z" \
		-e MODE=build \
		"$IMAGE" >/dev/null
	note "building; waiting for FINISHED.TXT"
	for _ in $(seq 1 180); do
		[ -f "$WORK/FINISHED.TXT" ] && break
		sleep 1
	done
	echo
	if [ -f "$WORK/BUILD.LOG" ]; then
		note "--- BUILD.LOG"
		cat "$WORK/BUILD.LOG"
	else
		note "no BUILD.LOG. Files present:"
		ls -1 "$WORK"
	fi
	$PODMAN exec "$NAME" chown -R 1000:1000 /work 2>/dev/null || true
	if [ -f "$WORK/PLOT.OBJ" ]; then
		note "--- PLOT.OBJ is $(stat -c%s "$WORK/PLOT.OBJ") bytes"
		note "--- disassembly (first 40 instructions)"
		ndisasm -b32 "$WORK/PLOT.OBJ" | head -40
	fi
	;;
shell) $PODMAN exec -it "$NAME" bash ;;
logs) $PODMAN logs --tail 40 "$NAME" ;;
stop) $PODMAN rm -f "$NAME" >/dev/null 2>&1 && note "stopped $NAME" ;;
status) $PODMAN ps -a --filter "name=^${NAME}$" --format '{{.Names}} {{.Status}}' ;;
*) echo "usage: $0 {start|build|shell|logs|stop|status}" >&2; exit 2 ;;
esac
