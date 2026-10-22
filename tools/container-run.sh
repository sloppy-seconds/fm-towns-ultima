#!/usr/bin/env bash
# tools/container-run.sh - start, stop and inspect the FM Towns container.
#
# The container runs the emulator under a supervisor that owns its tty, so the
# game can be both played in a browser and driven over an HTTP API.
#
#   ./tools/container-run.sh start        build if needed, start, print URLs
#   ./tools/container-run.sh stop         stop and remove
#   ./tools/container-run.sh restart      stop then start
#   ./tools/container-run.sh status       is it running, and on what ports
#   ./tools/container-run.sh logs         follow the container log
#   ./tools/container-run.sh build        force an image rebuild
#   ./tools/container-run.sh shell        bash inside the container
#
# Environment:
#   PORT_WEB   noVNC browser port        (default 6080)
#   PORT_VNC   raw VNC port              (default 5900)
#   PORT_API   supervisor HTTP API port  (default 8080)
#   RESOLUTION Xvfb geometry             (default 640x480x24)
#
# What runs inside:
#   Xvfb      virtual display
#   x11vnc    VNC server
#   websockify + noVNC   VNC over HTTP
#   supervisor.js        owns Tsugaru's stdin/stdout, serves /api
#
# Host quirks this encodes, both of which fail silently if forgotten:
#   - podman requires sudo on this host
#   - SELinux is enforcing, so every bind mount needs :z or the container sees
#     "Permission denied" on the host directories

set -euo pipefail

HERE="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
ROOT="$(cd -- "$HERE/.." && pwd)"

IMAGE=fmtowns
NAME=fmtowns
PORT_WEB="${PORT_WEB:-6080}"
PORT_VNC="${PORT_VNC:-5900}"
PORT_API="${PORT_API:-8080}"
RESOLUTION="${RESOLUTION:-640x480x24}"

DISC_CCD="$ROOT/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).ccd"
DISC_IMG="$ROOT/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).img"
USERDISK="$ROOT/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[UserDisk].hdm"

PODMAN() { sudo podman "$@"; }
die() { printf 'error: %s\n' "$*" >&2; exit 1; }
note() { printf '%s\n' "$*"; }

hostip() { hostname -I 2>/dev/null | awk '{print $1}' || echo localhost; }

cmd_start() {
	sudo -n true 2>/dev/null || die "sudo required for podman. Run 'sudo -v' first."
	[ -x "$ROOT/vendor/emulator/Tsugaru_CUI" ] || die "run ./tools/vendor.sh first"
	[ -d "$ROOT/vendor/roms" ] || die "run ./tools/vendor.sh --roms first"
	[ -f "$DISC_CCD" ] || die "disc image missing: $DISC_CCD"

	if ! PODMAN image exists "$IMAGE" >/dev/null 2>&1; then
		note "building $IMAGE ..."
		PODMAN build -t "$IMAGE" -f "$ROOT/container/Containerfile" "$ROOT" >/dev/null
	fi

	PODMAN rm -f "$NAME" >/dev/null 2>&1 || true
	mkdir -p "$ROOT/saves"

	local args=(
		--name "$NAME" --rm -d
		-p "${PORT_WEB}:6080" -p "${PORT_VNC}:5900" -p "${PORT_API}:8080"
		-v "$ROOT/vendor/emulator:/emulator:ro,z"
		-v "$ROOT/vendor/roms:/roms:ro,z"
		-v "$ROOT/saves:/data:z"
		-e "RESOLUTION=$RESOLUTION"
		-e "ROM_DIR=/roms"
		-e "CMOS=/data/CMOS.BIN"
		-e "API_PORT=8080"
	)
	[ -f "$DISC_CCD" ] && args+=(-v "$DISC_CCD:/disc/game.ccd:ro,z" -e "CD_IMAGE=/disc/game.ccd")
	[ -f "$DISC_IMG" ] && args+=(-v "$DISC_IMG:/disc/game.img:ro,z")
	[ -f "$USERDISK" ] && args+=(-v "$USERDISK:/disc/userdisk.hdm:ro,z" -e "FD0_IMAGE=/disc/userdisk.hdm")

	note "starting $NAME ..."
	PODMAN run "${args[@]}" "$IMAGE" >/dev/null

	# Wait for the API rather than guessing.
	local ip up=""
	ip=$(hostip)
	for _ in $(seq 1 60); do
		if curl -sf -m 2 "http://127.0.0.1:${PORT_API}/api/status" >/dev/null 2>&1; then
			up=yes; break
		fi
		sleep 1
	done

	note ''
	if [ -n "$up" ]; then
		note "ready."
	else
		note "container started but the API is not answering yet."
		note "check: ./tools/container-run.sh logs"
	fi
	note ''
	note "play     http://${ip}:${PORT_WEB}/vnc.html"
	note "api      http://${ip}:${PORT_API}/api/status"
	note "vnc      vnc://${ip}:${PORT_VNC}"
	note ''
	note "The game boots to the Tsugaru OS menu. Pick the disc, then run TMENU,"
	note "then choose ULTIMA II. The supervisor API can type for you:"
	note "  curl -X POST -H 'content-type: application/json' \\"
	note "       -d '{\"text\":\"2\"}' http://${ip}:${PORT_API}/api/keys"
}

cmd_stop() {
	PODMAN rm -f "$NAME" >/dev/null 2>&1 && note "stopped $NAME" || note "$NAME was not running"
}

cmd_status() {
	if PODMAN ps --filter "name=^${NAME}$" --format '{{.Names}}' | grep -q .; then
		note "$NAME is running"
		note "  web  http://$(hostip):${PORT_WEB}/vnc.html"
		note "  api  http://$(hostip):${PORT_API}/api/status"
		note ''
		curl -s -m 3 "http://127.0.0.1:${PORT_API}/api/status" || note "(api not answering)"
		note ''
	else
		note "$NAME is not running"
	fi
}

case "${1:-start}" in
	start) cmd_start ;;
	stop) cmd_stop ;;
	restart) cmd_stop; cmd_start ;;
	status) cmd_status ;;
	logs) PODMAN logs -f "$NAME" ;;
	build)
		sudo -n true 2>/dev/null || die "sudo required"
		PODMAN build -t "$IMAGE" -f "$ROOT/container/Containerfile" "$ROOT"
		;;
	shell)
		sudo -n true 2>/dev/null || die "sudo required"
		PODMAN exec -it "$NAME" /bin/bash
		;;
	-h|--help|help) sed -n '2,30p' "${BASH_SOURCE[0]}" | sed 's/^# \{0,1\}//' ;;
	*) die "unknown command: $1 (try --help)" ;;
esac
