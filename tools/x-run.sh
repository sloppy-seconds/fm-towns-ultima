#!/usr/bin/env bash
# A virtual display for anything in this repo, watched from a browser on another machine.
#
# Why. The port plays in a window now (`--graphics=sdl`), and a window on the machine under the desk is no use
# from a laptop. `tools/container-run.sh` already solves that for the emulator, by owning Tsugaru's tty and
# exposing Xvfb, x11vnc and noVNC. This is the same idea with nothing project-specific in it: it starts a display
# and runs whatever command it is given, so a mounted build can be compiled and played from a browser.
#
#   ./tools/x-run.sh start          build if needed, start, print the URLs
#   ./tools/x-run.sh stop           stop and remove the container (the build volume is kept)
#   ./tools/x-run.sh restart        stop then start
#   ./tools/x-run.sh status         is it running, and on what ports
#   ./tools/x-run.sh logs           follow the container log
#   ./tools/x-run.sh build          force an image rebuild
#   ./tools/x-run.sh shell          bash inside the container, on the display
#   ./tools/x-run.sh run <cmd...>   run a command inside the container, on the display
#   ./tools/x-run.sh shot [file]    capture the virtual display to a file on this host
#
# Environment:
#   XWEB        noVNC browser port        (default 6081, so it does not collide with the emulator's 6080)
#   XVNC        raw VNC port              (default 5901)
#   RESOLUTION  Xvfb geometry             (default 1024x768x24)
#   ARGS        arguments for the port    (default: none)
#   NOBUILD=1   accepted and ignored. play.sh already rebuilds only when the binary is missing, and --rebuild is
#               the way to force it. The flag stays so old invocations do not break.
#   IMAGE       the image to use      (default u2-x, built locally from container/Containerfile.x). Point it at
#               the published image and nothing is built locally at all.
#
# What runs inside, in order: Xvfb on :99, x11vnc on it, websockify serving noVNC on 6080, then ./play.sh with its
# working directory on the volume. play.sh is the same script a person runs on the host, which is the reason it is
# worth having: the container is a display and a toolchain, not a second copy of the logic.
#
# The project is mounted READ ONLY at /src. The build goes to a named volume, /build, so it survives a restart
# and so that nothing the container writes lands in the working tree as root-owned files.
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
IMAGE="${IMAGE:-u2-x}"
NAME="${NAME:-u2x}"
XWEB="${XWEB:-6081}"
XVNC="${XVNC:-5901}"
RESOLUTION="${RESOLUTION:-1024x768x24}"
ARGS="${ARGS:-}"
VOLUME="${VOLUME:-u2-x-build}"

die() { echo "$*" >&2; exit 1; }

# SELinux is enforcing on this host, so a bind mount without :z is Permission denied inside. Only add the suffix
# when SELinux is actually on: Docker Desktop elsewhere rejects it.
Z=""
if command -v getenforce >/dev/null 2>&1 && [ "$(getenforce 2>/dev/null || echo Disabled)" = "Enforcing" ]; then
	Z=",z"
fi

# Rootless podman for the project's own containers, which is the rule for this repo: the system services (litellm,
# traefik and friends) live in root's store and the two stores cannot see each other.
podman_() { podman "$@"; }

image_exists() { podman_ image exists "$IMAGE"; }

do_build() {
	echo "building $IMAGE from container/Containerfile.x"
	podman_ build -f "$ROOT/container/Containerfile.x" -t "$IMAGE" "$ROOT/container"
}

# One runner for the host and the container, which is the point. play.sh finds the game, extracts what it needs from
# the disc, builds from the committed module if there is no binary yet, and runs it with a window on the display this
# container just started. U2_WORK points its working files at the writable volume, because /src is mounted read-only
# on purpose and nothing here should land in the working tree as root-owned.
session_cmd() {
	printf 'set -e\nU2_WORK=/build U2_ARGS="%s" /src/play.sh\n' "$ARGS"
}

do_start() {
	image_exists || do_build
	podman_ rm -f "$NAME" >/dev/null 2>&1 || true
	podman_ volume create "$VOLUME" >/dev/null 2>&1 || true   # "already exists" is the normal case on a restart,
	                                                          # and with `set -e` it aborted the whole start
	local cmd
	cmd="$(session_cmd)"
	echo "starting $NAME"
	podman_ run -d --name "$NAME" \
		-e "RESOLUTION=$RESOLUTION" \
		-e "U2_FONT=/src/vendor/roms/FMT_FNT.ROM" \
		-p "$XWEB:6080" -p "$XVNC:5900" \
		-v "$ROOT:/src:ro$Z" \
		-v "$VOLUME:/build" \
		"$IMAGE" sh -lc "$cmd" >/dev/null
	echo "display   http://$(hostname -f 2>/dev/null || hostname):$XWEB/vnc.html"
	echo "raw vnc   $(hostname -f 2>/dev/null || hostname):$XVNC"
	echo "logs      ./tools/x-run.sh logs"
}

case "${1:-start}" in
	start) do_start ;;
	stop)
		podman_ rm -f "$NAME" >/dev/null 2>&1 || true
		echo "stopped $NAME (the build volume $VOLUME is kept; ./tools/x-run.sh build removes nothing)"
		;;
	restart) "$0" stop; "$0" start ;;
	status)
		if podman_ container exists "$NAME" 2>/dev/null; then
			podman_ ps -a --filter "name=^${NAME}$" --format '{{.Names}}  {{.Status}}  {{.Ports}}'
		else
			echo "$NAME does not exist"
		fi
		;;
	logs) exec podman_ logs -f "$NAME" ;;
	build) do_build ;;
	shell) exec podman_ exec -e DISPLAY=:99 -it "$NAME" bash ;;
	run) shift; exec podman_ exec -e DISPLAY=:99 -it "$NAME" "$@" ;;
	shot)
		out="${2:-$ROOT/saves/analysis/x-shot.png}"
		mkdir -p "$(dirname "$out")"
		podman_ exec "$NAME" sh -c 'DISPLAY=:99 import -window root /tmp/x-shot.png'
		podman_ cp "$NAME:/tmp/x-shot.png" "$out"
		echo "wrote $out"
		;;
	*) die "usage: tools/x-run.sh [start|stop|restart|status|logs|build|shell|run <cmd>|shot [file]]" ;;
esac
