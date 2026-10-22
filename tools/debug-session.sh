#!/usr/bin/env bash
# tools/debug-session.sh - run Ultima II under Tsugaru with the debugger, headless.
#
# Works over SSH with no monitor: reuses the Xwayland display that the desktop
# session already runs, using its Xauthority file. No Xvfb needed.
#
# Usage:
#   ./tools/debug-session.sh                 boot to the debugger console
#   ./tools/debug-session.sh --auto          boot, run, then dump palette
#   ./tools/debug-session.sh --cmd "PALETTE" pass one console command
#
# The console accepts Tsugaru commands on stdin. Type commands to drive it.
# See vendor/emulator/command.md for the full list. The useful ones here:
#
#   RUN EIP        run to a temporary breakpoint (hex)
#   T              single step
#   PALETTE        print the CRTC palette
#   CRTC           print CRTC state
#   STA            CPU state
#   BRKON MEMW a   break on memory write to physical address a
#   ADTR seg:off   translate segment:offset to linear and physical
#   SYM            print symbol table
#   PAU            pause the VM
#   Q              quit
#
# Findings go into FINDINGS.md. Nothing this produces is committed.

set -euo pipefail

HERE="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
ROOT="$(cd -- "$HERE/.." && pwd)"
EMU="$ROOT/vendor/emulator/Tsugaru_CUI"
ROMS="$ROOT/vendor/roms"
DISC="$ROOT/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).ccd"
CMOS="$ROOT/saves/CMOS.BIN"
OUT="$ROOT/analysis"

die() { printf 'error: %s\n' "$*" >&2; exit 1; }
note() { printf '%s\n' "$*"; }

[ -x "$EMU" ] || die "emulator not vendored. Run ./tools/vendor.sh first."
[ -d "$ROMS" ] || die "ROMs not vendored. Run ./tools/vendor.sh --roms first."
[ -f "$DISC" ] || die "disc image missing: $DISC"

# --- find a usable X display -------------------------------------------------
# Over SSH there is usually no DISPLAY, but Xwayland may still be running for
# the desktop session. Find its socket and its auth file.

find_display() {
	if [ -n "${DISPLAY:-}" ] && [ -n "${XAUTHORITY:-}" ] && [ -r "${XAUTHORITY:-/nonexistent}" ]; then
		return 0
	fi
	# Look for the kwin_wayland / Xwayland process and read its -auth argument.
	local auth
	auth=$(ps -eo cmd 2>/dev/null | grep -oE '\-auth [^ ]+' | head -1 | cut -d' ' -f2 || true)
	if [ -n "$auth" ] && [ -r "$auth" ]; then
		# Derive the display number from the socket name.
		local sock
		sock=$(ls /tmp/.X11-unix/ 2>/dev/null | head -1 || true)
		if [ -n "$sock" ]; then
			export XAUTHORITY="$auth"
			export DISPLAY=":${sock#X}"
			return 0
		fi
	fi
	return 1
}

if ! find_display; then
	cat >&2 <<'MSG'
error: no usable X display found.

Tsugaru needs a window even when driven headlessly. Options:
  - Run this from the desktop session, not SSH.
  - Start a virtual framebuffer: Xvfb :99 & DISPLAY=:99 ./tools/debug-session.sh
  - Install Xvfb: sudo rpm-ostree install xorg-x11-server-Xvfb
MSG
	exit 1
fi

note "display  : $DISPLAY"
note "xauth    : $XAUTHORITY"

mkdir -p "$OUT" "$(dirname "$CMOS")"

ARGS=(
	"$ROMS"
	-CD "$DISC"
	-CMOS "$CMOS"
	-DEBUG
)

# Floppy A: the UserDisk save disk.
UD="$ROOT/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[UserDisk].hdm"
[ -f "$UD" ] && ARGS+=(-FD0 "$UD")

# --- mode handling -----------------------------------------------------------

MODE=boot
SINGLE=""
while [ $# -gt 0 ]; do
	case "$1" in
		--auto) MODE=auto ;;
		--cmd) SINGLE="${2:-}"; shift ;;
		-h|--help) sed -n '2,26p' "${BASH_SOURCE[0]}" | sed 's/^# \{0,1\}//'; exit 0 ;;
		*) die "unknown option: $1" ;;
	esac
	shift
done

case "$MODE" in
	boot)
		note ''
		note 'Booting to the debugger console. Commands are read from stdin.'
		note 'Type PALETTE after the game reaches a coloured screen, then Q to quit.'
		note ''
		exec "$EMU" "${ARGS[@]}"
		;;
	auto)
		# Boot, let the VM run, then dump palette and quit. Useful for a smoke
		# test that the pipeline works end to end. The VM is paused on start,
		# so feed RUN, wait, then PALETTE, then quit.
		note ''
		note 'Auto mode: boot, run 20s of VM time, dump palette, quit.'
		note ''
		{
			echo "RUN"
			sleep 20
			echo "PAU"
			echo "PALETTE"
			echo "CRTC"
			echo "STA"
			echo "Q"
		} | "$EMU" "${ARGS[@]}" 2>&1 | tee "$OUT/debug-auto.log"
		note ''
		note "log written to $OUT/debug-auto.log"
		;;
	cmd)
		if [ -n "$SINGLE" ]; then
			printf '%s\n' "$SINGLE" | "$EMU" "${ARGS[@]}" 2>&1 | tee "$OUT/debug-cmd.log"
		else
			die '--cmd needs an argument'
		fi
		;;
esac
