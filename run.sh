#!/usr/bin/env bash
# run.sh - launch Ultima Trilogy I/II/III (FM Towns) in the Tsugaru emulator.
#
# Usage:
#   ./run.sh              start with defaults
#   ./run.sh -h           help
#   EXTRA="..." ./run.sh  pass extra Tsugaru_CUI options
#
# The +UserDisk floppy goes into drive 0 too, because it is the FM Towns save
# disk. Run from anywhere; paths are resolved relative to this script.

set -euo pipefail

HERE="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"

# vendor.sh puts things in vendor/emulator and vendor/roms. Older checkouts and
# the upstream Tsugaru zip layout use emulator/ and emulator/ROMS. Accept both
# rather than making the user read the script to find out which.
if [ -d "$HERE/vendor/emulator" ]; then
	EMU_DIR="${EMU_DIR:-$HERE/vendor/emulator}"
else
	EMU_DIR="${EMU_DIR:-$HERE/emulator}"
fi
if [ -d "$HERE/vendor/roms" ]; then
	ROM_DIR="${ROM_DIR:-$HERE/vendor/roms}"
elif [ -d "$EMU_DIR/ROMS" ]; then
	ROM_DIR="${ROM_DIR:-$EMU_DIR/ROMS}"
else
	ROM_DIR="${ROM_DIR:-$HERE/vendor/roms}"
fi
SAVE_DIR="${SAVE_DIR:-$HERE/saves}"

DISC_CCD="$HERE/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).ccd"
DISC_CUE="$HERE/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).cue"
USER_DISK="$HERE/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[UserDisk].hdm"

die()  { printf 'error: %s\n' "$*" >&2; exit 1; }
warn() { printf 'warning: %s\n' "$*" >&2; }
note() { printf '%s\n' "$*"; }

if [[ "${1:-}" == "-h" || "${1:-}" == "--help" ]]; then
	sed -n '2,10p' "${BASH_SOURCE[0]}" | sed 's/^# \{0,1\}//'
	exit 0
fi

# --- locate the emulator -----------------------------------------------------

# The executable name differs per platform: no suffix on Linux and macOS,
# .exe on Windows. Check all of them rather than assuming Unix.
TSG=""
for cand in "$EMU_DIR/Tsugaru_CUI" "$EMU_DIR/Tsugaru_CUI.exe" \
            "$EMU_DIR/Tsugaru_GUI" "$EMU_DIR/Tsugaru_GUI.exe" \
            "$(command -v Tsugaru_CUI 2>/dev/null || true)"; do
	[[ -n "$cand" && -f "$cand" ]] && { TSG="$cand"; break; }
done
[[ -n "$TSG" ]] || die "Tsugaru not found in $EMU_DIR. Run ./tools/vendor.sh first. See docs/quickstart.md."

# Tsugaru_CUI and Tsugaru_GUI must sit in the same directory (the GUI shells out
# to the CUI), so honour the GUI if that is what was found.
if [[ "$(basename -- "$TSG")" == "Tsugaru_GUI" ]]; then
	[[ -x "$EMU_DIR/Tsugaru_CUI" ]] || warn "Tsugaru_GUI present but Tsugaru_CUI missing in $EMU_DIR; the GUI will not start."
fi

# --- locate the ROM set ------------------------------------------------------
# Tsugaru wants the directory holding the ROM files, not individual paths.
# FreeTOWNS ROMS.zip unpacks to names like FMT_SYS.ROM; real hardware dumps may
# be IPLROM.DAT / CGROM.DAT / FONT.ROM. Accept either.

[[ -d "$ROM_DIR" ]] || die "ROM directory missing: $ROM_DIR. See README.md section 2."

if [[ ! -f "$ROM_DIR/FMT_SYS.ROM" && ! -f "$ROM_DIR/IPLROM.DAT" ]]; then
	warn "no FMT_SYS.ROM or IPLROM.DAT in $ROM_DIR; boot will probably fail."
	warn "contents: $(ls -1 "$ROM_DIR" 2>/dev/null | tr '\n' ' ')"
fi

# --- locate the disc image ---------------------------------------------------
# Prefer the CCD: the CUE on this disc uses PREGAP, which Tsugaru's own author
# documents as ambiguous (the same disc can be read two ways). See README.md.

DISC=""
if [[ -f "$DISC_CCD" ]]; then
	DISC="$DISC_CCD"
elif [[ -f "$DISC_CUE" ]]; then
	DISC="$DISC_CUE"
	warn "CCD not found, falling back to CUE; audio track offsets may be wrong."
else
	die "no disc image beside this script. Expected: $(basename "$DISC_CCD")"
fi

# The .img must stay next to the .ccd/.cue, unmodified and unconverted.
[[ -f "$HERE/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).img" ]] \
	|| die "disc data file .img is missing; the .ccd/.cue alone is not enough."

# --- save state --------------------------------------------------------------

mkdir -p "$SAVE_DIR"
CMOS="$SAVE_DIR/CMOS.BIN"
if [[ -f "$CMOS" ]]; then
	note "CMOS: $CMOS (delete it to reset BIOS settings)"
else
	note "CMOS: will be created on first clean quit (that is normal)"
fi

# --- run ---------------------------------------------------------------------

ARGS=(
	"$ROM_DIR"
	-CD "$DISC"
	-CMOS "$CMOS"
)
[[ -f "$USER_DISK" ]] && ARGS+=(-FD0 "$USER_DISK")

# Extra options, e.g. EXTRA="-SCALE 200 -FREQ 25" ./run.sh
if [[ -n "${EXTRA:-}" ]]; then
	# shellcheck disable=SC2206 # deliberate word splitting for user options
	ARGS+=($EXTRA)
fi

note "emulator: $TSG"
note "roms    : $ROM_DIR"
note "disc    : $(basename -- "$DISC")"
note "floppy  : $([[ -f "$USER_DISK" ]] && basename -- "$USER_DISK" || echo '(none)')"
note ""
note "In Tsugaru_CUI: type Q + Enter to quit (a window close button skips the CMOS write)."
note ""

# Tsugaru_CUI has no windowing of its own under Wayland; let XWayland handle it.
if [[ -n "${WAYLAND_DISPLAY:-}" && -z "${DISPLAY:-}" ]]; then
	warn "Wayland without XWayland detected; install xorg-xwayland if the window never appears."
fi

exec "$TSG" "${ARGS[@]}"
