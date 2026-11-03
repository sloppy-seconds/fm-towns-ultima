#!/usr/bin/env bash
# start.sh - boot the Ultima Trilogy disc into TownsOS, so the U2 icon can be double-clicked.
#
# WHAT THIS DOES. Starts the vendored Tsugaru with the FreeTOWNS ROMs and the trilogy disc, booting from the disc so
# TownsOS comes up with the disc's own icons on the desktop. Ultima II is one of them: double-click it there and the game
# runs exactly as it does on the machine, because this is the machine.
#
# WHY THE DISC IS THE BOOT DEVICE. Booting from CD puts the TownsOS desktop in front of you rather than a drive prompt,
# and that desktop is where the icons are. It also keeps the save floppy in drive 0, which is where Ultima II looks for its
# characters.
#
# WHAT IT NEEDS. Everything is beside this script: emulator/Tsugaru_CUI, roms/*.ROM and disc/*. They were put there when
# the folder was set up. Nothing is downloaded and nothing is installed.
#
# USAGE
#   ./start.sh                 boot TownsOS and play
#   ./start.sh --check         print what it resolved and exit, without starting the emulator
#   UTT_SCALE=2 ./start.sh     start at 2x, if the window is too small on a high resolution screen
#   UTT_EXTRA="-FREQ 25" ./start.sh
#
# Close the emulator with Q then Enter inside its window (as the emulator itself says), not with the window's close
# button: a clean quit is what writes the CMOS, and the CMOS holds the settings this script just booted with.
set -uo pipefail

HERE="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
EMU_DIR="$HERE/emulator"
ROM_DIR="$HERE/roms"
DISC_DIR="$HERE/disc"
SAVE_DIR="$HERE/saves"
CHECK=0
[[ "${1:-}" == "--check" ]] && CHECK=1

say() { printf '%s\n' "$*"; }
die() {
	printf 'error: %s\n' "$*" >&2
	# A double-clicked script closes its terminal window the instant it exits, which hides the error. Pause when there is
	# somebody there to read it, and never block a scripted run.
	if [[ -t 0 && $CHECK -eq 0 ]]; then
		printf '\nPress Enter to close.\n'
		read -r _
	fi
	exit 1
}

# The emulator. The CUI build is the one used, because it takes every path on the command line and keeps no state of its own;
# the GUI shells out to it and stores its configuration somewhere this folder does not control.
EMU="$EMU_DIR/Tsugaru_CUI"
[[ -x "$EMU" ]] || die "no emulator at $EMU"
[[ -d "$ROM_DIR" ]] || die "no ROM directory at $ROM_DIR"
[[ -f "$ROM_DIR/FMT_SYS.ROM" ]] || die "no FMT_SYS.ROM in $ROM_DIR, which is the one it will not boot without"

# The disc. The .ccd is preferred because it records where the audio tracks begin and the .cue cannot; Tsugaru's own readme
# says so. Either way the .img carries the data.
DISC=""
for cand in "$DISC_DIR"/*.ccd "$DISC_DIR"/*.cue; do
	[[ -f "$cand" ]] || continue
	DISC="$cand"
	break
done
[[ -n "$DISC" ]] || die "no .ccd or .cue in $DISC_DIR"
[[ -f "${DISC%.*}.img" ]] || die "the disc's data file ${DISC%.*}.img is missing beside $DISC"

# The save floppy, if the setup put one here. Ultima II keeps its roster on it, and a missing one costs a prompt rather than
# the run: the emulator boots and the game asks for a disk.
USER_DISK=""
for cand in "$DISC_DIR"/*UserDisk*.hdm "$DISC_DIR"/userdisk.hdm "$DISC_DIR"/*.hdm; do
	[[ -f "$cand" ]] || continue
	USER_DISK="$cand"
	break
done

mkdir -p "$SAVE_DIR" || die "cannot create $SAVE_DIR"
[[ -w "$SAVE_DIR" ]] || die "$SAVE_DIR is not writable, and a read-only one makes a created character silently fail to save"

ARGS=(
	"$ROM_DIR"
	-CD "$DISC"
	-CMOS "$SAVE_DIR/CMOS.BIN"
	-BOOTKEY CD
)
[[ -n "$USER_DISK" ]] && ARGS+=(-FD0 "$USER_DISK")
[[ -n "${UTT_SCALE:-}" ]] && ARGS+=(-SCALE "$UTT_SCALE")
if [[ -n "${UTT_EXTRA:-}" ]]; then
	# shellcheck disable=SC2206 # deliberate word splitting, the same way run.sh takes EXTRA
	ARGS+=($UTT_EXTRA)
fi

say "emulator  $EMU"
say "roms      $ROM_DIR"
say "disc      $DISC"
say "save disk ${USER_DISK:-none found, the game will ask for one}"
say "cmos      $SAVE_DIR/CMOS.BIN"
say "boot      TownsOS from the disc; double-click Ultima II on the desktop"
say ""

if [[ $CHECK -eq 1 ]]; then
	say "check     every path above resolved, and the emulator was not started"
	exit 0
fi

# Tsugaru has no Wayland windowing of its own, so let XWayland handle it and say why if that is missing.
if [[ -n "${WAYLAND_DISPLAY:-}" && -z "${DISPLAY:-}" ]]; then
	say "warning   Wayland without DISPLAY: install xorg-xwayland if the window never appears"
fi

cd "$EMU_DIR" || die "cannot enter $EMU_DIR"
exec "$EMU" "${ARGS[@]}"
