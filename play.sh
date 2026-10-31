#!/usr/bin/env bash
# play.sh - put your own copy of the game in ./game/ and play the recompiled port.
#
# WHAT THIS IS FOR. The decision this script exists to serve, taken 2026-10-30 and written down in
# docs/licensing.md: the recompiled C++ is committed, so a person who owns the game clones this repository (or
# downloads the release binary), drops their own files in, and plays. No recompile, no container, no toolkit.
# The container and tools/port-build.sh are the from-source route now, which is where they always belonged.
#
#   ./play.sh                     build if needed, then play with a window
#   ./play.sh --game DIR          where your game files are (default ./game)
#   ./play.sh --disk FILE         which save floppy to use (default saves/userdisk.hdm)
#   ./play.sh --headless N        run N frames with no window, write a PNG, and exit
#   ./play.sh --rebuild           force the C++ build even if the binary exists
#
# WHAT IT NEEDS FROM YOU. The unpacked archive.org zip in ./game/, which means at least the disc image
# (`*.img`), because the port opens the disc at run time for its artwork and its kanji font. And the FM Towns
# font ROM, which ./tools/vendor.sh fetches as the clean-room FreeTOWNS set. Nothing game-derived is written into
# the repository: everything it extracts goes under build/play/.
#
# WHAT IT DOES NOT DO. It does not recompile anything. The module is in module/ and cmake builds it. If you want a
# fresh recompilation, that is tools/port-build.sh, and it needs the disc plus the toolkit submodule.

set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
# The default game location, in the order a reader is likely to have it: the ./game/ directory this script names,
# or the repository directory itself, which is where every other page in this project says to unpack the zip.
if [[ -d "$ROOT/game" ]]; then GAME="$ROOT/game"; else GAME="$ROOT"; fi
DISK="$ROOT/saves/userdisk.hdm"
# U2_WORK lets a container point the build and the extracted files somewhere writable while the project itself is
# mounted read-only. tools/x-run.sh uses it for exactly that.
WORK="${U2_WORK:-$ROOT/build/play}"
HEADLESS=0
REBUILD=0
FRAMES=120

while [[ $# -gt 0 ]]; do
	case "$1" in
		--game) GAME="$2"; shift 2 ;;
		--disk) DISK="$2"; shift 2 ;;
		--headless)
			HEADLESS=1
			# The frame count is optional and only taken if it is a number, so `--headless --rebuild` does not
			# swallow the next flag.
			if [[ $# -gt 1 && "${2:-}" =~ ^[0-9]+$ ]]; then FRAMES="$2"; shift; fi
			shift
			;;
		--rebuild) REBUILD=1; shift ;;
		--help | -h) sed -n '2,26p' "$0"; exit 0 ;;
		*) echo "unknown option: $1 (try --help)" >&2; exit 2 ;;
	esac
done

[[ -d "$GAME" ]] || {
	echo "no game directory at $GAME. Unpack the archive.org zip into ./game/ (see README), or pass --game DIR." >&2
	exit 2
}

mkdir -p "$WORK"

# 1. The disc image, which the port opens at run time for artwork and the kanji font.
DISC_IMG="$(find "$GAME" -maxdepth 1 -iname '*.img' -print -quit)"
if [[ -z "$DISC_IMG" ]]; then
	echo "no disc .img in $GAME. The port reads the disc while it runs, so the unpacked zip is what it wants." >&2
	exit 2
fi
echo "disc      $DISC_IMG"

# 2. The program image and TBIOS, taken from the disc rather than copied into the tree.
if [[ -f "$GAME/ENCHANT.EXP" ]]; then
	PROG="$GAME/ENCHANT.EXP"
else
	node "$ROOT/tools/getfile.js" ENCHANT.EXP --disc "$DISC_IMG" --out "$WORK" >/dev/null
	PROG="$WORK/ENCHANT.EXP"
fi
if [[ -f "$WORK/tbios.bin" ]]; then
	TB="$WORK/tbios.bin"
else
	node "$ROOT/tools/getfile.js" TBIOS.BIN --disc "$DISC_IMG" --out "$WORK" >/dev/null
	TB="$WORK/TBIOS.BIN"
fi
[[ -s "$TB" ]] || { echo "TBIOS did not come off the disc at $DISC_IMG" >&2; exit 1; }
echo "program   $PROG"
echo "tbios     $TB ($(stat -c %s "$TB") bytes)"

# 3. The one-track cue the kit's disc reader accepts. Relative to the cue, because that is how the reader
#    resolves it: an absolute path gets joined onto the cue's directory and comes out doubled.
CUE="$WORK/disc.cue"
printf 'FILE "%s" BINARY\n  TRACK 01 MODE1/2352\n    INDEX 01 00:00:00\n' \
	"$(realpath --relative-to="$WORK" "$(realpath "$DISC_IMG")")" >"$CUE"

# 4. The font ROM. Without it the port runs and every glyph is blank, which reads as a broken renderer. Fetch it
#    only when the tree is writable, because a read-only container mount must be told, not surprised.
if [[ ! -f "$ROOT/vendor/roms/FMT_FNT.ROM" ]]; then
	if [[ -w "$ROOT" ]] && [[ -x "$ROOT/tools/vendor.sh" ]]; then
		echo "roms      fetching the FreeTOWNS clean-room set with tools/vendor.sh"
		"$ROOT/tools/vendor.sh" --roms >/dev/null
	fi
	if [[ ! -f "$ROOT/vendor/roms/FMT_FNT.ROM" ]]; then
		echo "roms      no FMT_FNT.ROM under $ROOT/vendor/roms and this tree is not writable."
		echo "          Run ./tools/vendor.sh on the host, or mount the ROMs. Text will be blank without it."
	else
		export U2_FONT="$ROOT/vendor/roms/FMT_FNT.ROM"
	fi
else
	export U2_FONT="$ROOT/vendor/roms/FMT_FNT.ROM"
fi
[[ -f "$ROOT/vendor/roms/FMT_F20.ROM" ]] && export U2_FONT20="$ROOT/vendor/roms/FMT_F20.ROM"

# 5. A floppy with a character on it, because character creation does not work yet (docs/port-defects.md).
if [[ ! -f "$DISK" ]]; then
	mkdir -p "$ROOT/saves"
	unzip -o -q "$ROOT/assets/save-disk/userdisk.hdm.zip" -d "$ROOT/saves"
	echo "save disk unpacked to $DISK (in-game slot 1 is E)"
fi
echo "save disk $DISK"

# 6. The binary. A release tarball ships u2port next to this script, and then there is nothing to build: that is
#    the whole point of the release. A clone has no u2port at the root, so it builds one from module/ with cmake,
#    which needs a compiler and SDL3 but no recompiler and no toolkit beyond its runtime headers.
sdl3_from_system() {
	local d
	for d in /usr/lib/cmake/SDL3 /usr/lib/x86_64-linux-gnu/cmake/SDL3 /usr/lib64/cmake/SDL3 \
		/usr/local/lib/cmake/SDL3 /usr/local/lib64/cmake/SDL3 /opt/homebrew/lib/cmake/SDL3
	do
		[[ -f "$d/SDL3Config.cmake" ]] && return 0
	done
	return 1
}

if [[ -x "$ROOT/u2port" ]]; then
	PORT_BIN="$ROOT/u2port"
	echo "binary    $PORT_BIN (shipped with this archive, nothing built)"
elif [[ $REBUILD -eq 0 && -x "$WORK/u2port" ]]; then
	PORT_BIN="$WORK/u2port"
	echo "binary    $PORT_BIN (built earlier, --rebuild to force)"
else
	[[ -d "$ROOT/port" ]] || {
		echo "no u2port beside this script and no port/ directory to build one from." >&2
		exit 2
	}
	# SDL3 from the distro if it has one, and from the pinned source if it does not. Ubuntu 24.04 has no
	# libsdl3-dev at all and a plain desktop may have no SDL whatsoever, and neither is a reason a clone cannot
	# build. The source build is the same one the release uses, so the binary a stranger gets is the binary we ship.
	SDL_ARGS=()
	if sdl3_from_system
	then
		echo "sdl3      from the system"
	elif [[ -x "$ROOT/tools/sdl-from-source.sh" ]]
	then
		echo "sdl3      none found, building the pinned static SDL3 (once, a few minutes)"
		SDL_PREFIX="$(SDL3_CACHE="$WORK/sdl3" "$ROOT/tools/sdl-from-source.sh")" || {
			echo "the SDL3 source build failed. Install libsdl3-dev, or run tools/sdl-from-source.sh to see why." >&2
			exit 1
		}
		SDL_ARGS=(-DCMAKE_PREFIX_PATH="$SDL_PREFIX")
	else
		echo "no SDL3 found and no tools/sdl-from-source.sh beside this script to build one." >&2
		echo "install libsdl3-dev (or SDL3-devel), or use the release archive, which needs neither." >&2
		exit 2
	fi
	cmake -S "$ROOT/port" -B "$WORK" -DCMAKE_BUILD_TYPE=Release "${SDL_ARGS[@]}" >"$WORK/cmake.log" 2>&1
	cmake --build "$WORK" -j"$(nproc)" >"$WORK/build.log" 2>&1 || {
		echo "the port failed to build. Last lines of $WORK/build.log:" >&2
		tail -20 "$WORK/build.log" >&2
		exit 1
	}
	PORT_BIN="$WORK/u2port"
	echo "built     $PORT_BIN from module/ ($(ls "$ROOT"/module/p_*.cpp | wc -l) sources, no recompile)"
fi

# 7. Play.
if [[ $HEADLESS -eq 1 ]]; then
	SHOT="${SHOT:-$WORK/shot.png}"
	echo "running   $FRAMES frames headless, shot to $SHOT"
	# shellcheck disable=SC2086
	U2_SHOT="$SHOT" exec "$PORT_BIN" --graphics=none --frames="$FRAMES" ${U2_ARGS:-} "$PROG" "$TB" "$CUE" "$DISK"
fi
echo "playing   at the game menu pick Journey Onward and a character that already exists."
echo "          Character creation does not work yet, and Esc or Q ends the run: docs/port-defects.md"
# shellcheck disable=SC2086
exec "$PORT_BIN" --graphics=sdl ${U2_ARGS:-} "$PROG" "$TB" "$CUE" "$DISK"
