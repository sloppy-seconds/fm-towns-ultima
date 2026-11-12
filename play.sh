#!/usr/bin/env bash
# play.sh - put your own copy of the game in ./game/ and play the recompiled port.
#
# WHAT THIS IS FOR. The decision this script exists to serve, taken 2026-10-30 and written down in
# docs/licensing.md: the recompiled C++ is committed, so a person who owns the game clones this repository (or
# downloads the release binary), drops their own files in, and plays. No recompile, no container, no toolkit.
# The container and tools/port-build.sh are the from-source route now, which is where they always belonged.
#
#   ./play.sh                     build if needed, then play Ultima II with a window
#   ./play.sh u3                  the same for any title in tools/games.js: u1, u2, u3, british, u1demo, u2demo, u3demo
#   ./play.sh --game DIR          where your game files are (default ./game)
#   ./play.sh --disk FILE         which save floppy to use (default: the title's own, from tools/games.js)
#   ./play.sh --headless N        run N frames with no window, write a PNG, and exit
#   ./play.sh --cpu-rate N        run the guest at N percent of the FM Towns clock (default 100). This is for a title
#                                 whose text scrolls faster than it can be read, which is what the three demos did.
#                                 F5/F6/F7 in the window do the same thing by hand, but the demos end the run on any
#                                 key press, so a key is not a lever you can use on them.
#   ./play.sh u1demo --locale en  translate the demo's narration from locale/en/u1demo.tsv before running it, which
#                                 writes a patched copy under build/play/<title>/i18n and runs that. The demos only:
#                                 their narration is data in the executable, the games' text is not handled this way.
#                                 A language is a directory of tables, so adding one costs a table and no code.
#   ./play.sh --rebuild           force the C++ build even if the binary exists
#
# ONE TITLE PER RUN, and the title is the build's target. The module compiled in is that title's code and nothing
# else, so `./play.sh u3` builds `u3` from module/u3 and runs it. All seven share one TBIOS module, which is why
# every title's code is already committed and none of this needs the disc for anything but the media.
#
#   ./play.sh u1demo --headless 9000    builds the Ultra I demo and photographs frame 9000
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
# The compiler cache, kept in the tree so a container build does not lose it. Forced rather than defaulted, because
# /etc/profile.d/ccache.sh sets CCACHE_DIR for every login shell. See port/CMakeLists.txt.
export CCACHE_DIR="${U2_CCACHE_DIR:-$ROOT/build/.ccache}"
# The default game location, in the order a reader is likely to have it: the ./game/ directory this script names,
# or the repository directory itself, which is where every other page in this project says to unpack the zip.
if [[ -d "$ROOT/game" ]]; then GAME="$ROOT/game"; else GAME="$ROOT"; fi
# U2_WORK lets a container point the build and the extracted files somewhere writable while the project itself is
# mounted read-only. tools/x-run.sh uses it for exactly that.
PLAY_ROOT="${U2_WORK:-$ROOT/build/play}"
# THE SDL3 ARCHIVE IS SHARED AND THE BUILD TREE IS NOT. cmake caches PORT_TARGET inside the build directory, so a
# build tree reused for a second title keeps the first one's target and quietly produces the first one's binary
# under the second one's name. One directory per title. The pinned SDL3 archive is the same archive for all seven,
# so it stays at the root and is built once.
SDL_CACHE="$PLAY_ROOT/sdl3"
# THE TITLE, before anything is read from the disc. Ultima II is the default because it is the title every number,
# route and document in this project was measured on, so a bare `./play.sh` still means what it always meant.
TITLE=u2
DISK_SET=0
# Empty means "say nothing about the rate", which leaves the port's own default of 100 alone rather than restating it
# here and letting the two disagree.
RATE=""
# Empty means "run the title as the disc has it". Otherwise a locale table is applied to the executable before it runs.
LOCALE=""
HEADLESS=0
REBUILD=0
FRAMES=120

while [[ $# -gt 0 ]]; do
	case "$1" in
		--game) GAME="$2"; shift 2 ;;
		--disk) DISK="$2"; DISK_SET=1; shift 2 ;;
		--headless)
			HEADLESS=1
			# The frame count is optional and only taken if it is a number, so `--headless --rebuild` does not
			# swallow the next flag.
			if [[ $# -gt 1 && "${2:-}" =~ ^[0-9]+$ ]]; then FRAMES="$2"; shift; fi
			shift
			;;
		--rebuild) REBUILD=1; shift ;;
		--cpu-rate) RATE="$2"; shift 2 ;;
		--cpu-rate=*) RATE="${1#*=}"; shift ;;
		--locale) LOCALE="$2"; shift 2 ;;
		--help | -h) sed -n '2,38p' "$0"; exit 0 ;;
		-*) echo "unknown option: $1 (try --help)" >&2; exit 2 ;;
		*) TITLE="$1"; shift ;;
	esac
done

# THE TITLE IS CHECKED AGAINST THE TABLE, not against a list written here. An unknown word is refused with the seven
# ids named, because the alternative is what this script used to do: build Ultima II and leave the caller believing
# they had asked for something else.
if ! node "$ROOT/tools/games.js" --ids | grep -qx "$TITLE"; then
	echo "no title \"$TITLE\". This builds one of: $(node "$ROOT/tools/games.js" --ids | paste -sd' ' -)" >&2
	exit 2
fi
EXP=$(node "$ROOT/tools/games.js" --get "$TITLE" exp)
WIN=$(node "$ROOT/tools/games.js" --get "$TITLE" window)
SAVE=$(node "$ROOT/tools/games.js" --get "$TITLE" saveDisk)
WORK="$PLAY_ROOT/$TITLE"

# The save disk has to live somewhere the tree can write, and in a container that is not beside the repository. The
# port opens this image for writing by default, so putting it on a read-only mount makes a created character fail to
# persist with no error that names the cause. The title's own disk is used when the repository has it, which matters
# now that the default is chosen by title rather than being Ultima II's.
if [[ $DISK_SET -eq 0 ]]; then
	if [[ -n "$SAVE" && -f "$ROOT/$SAVE" ]]; then
		DISK="$ROOT/$SAVE"
	elif [[ -w "$ROOT/saves" ]]; then
		DISK="$ROOT/saves/userdisk.hdm"
	else
		DISK="$WORK/userdisk.hdm"
	fi
fi

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

# 2. The program image and TBIOS, taken from the disc rather than copied into the tree. The program's name is the
#    title's, so `u3` asks the disc for EXODUS.EXP and the demo ids ask for their own screensaver shell.
echo "title     $TITLE ($EXP)"
if [[ -f "$GAME/$EXP" ]]; then
	PROG="$GAME/$EXP"
else
	node "$ROOT/tools/getfile.js" "$EXP" --disc "$DISC_IMG" --out "$WORK" >/dev/null
	PROG="$WORK/$EXP"
fi
if [[ -f "$WORK/tbios.bin" ]]; then
	TB="$WORK/tbios.bin"
else
	node "$ROOT/tools/getfile.js" TBIOS.BIN --disc "$DISC_IMG" --out "$WORK" >/dev/null
	TB="$WORK/TBIOS.BIN"
fi
[[ -s "$TB" ]] || { echo "TBIOS did not come off the disc at $DISC_IMG" >&2; exit 1; }

# 2b. The narration, in another language, when one is asked for. Only the demos: their text is Shift-JIS data in the
#     executable and a table rewrites it in place (docs/port-demos.md). The games are a different problem and this is
#     not the tool for them, so an unknown title is refused here rather than silently running untranslated.
if [[ -n "$LOCALE" ]]; then
	case "$TITLE" in
		u1demo | u2demo | u3demo) ;;
		*)
			echo "--locale applies to the three demos (u1demo, u2demo, u3demo), not $TITLE." >&2
			echo "Their narration is data in the executable; $TITLE's text is not handled this way." >&2
			exit 2
			;;
	esac
	node "$ROOT/tools/demopatch.js" --demo "$TITLE" --locale "$LOCALE" --src "$PROG" --out "$WORK/i18n" || exit 1
	PROG="$WORK/i18n/$EXP"
fi
echo "program   $PROG"
echo "tbios     $TB ($(stat -c %s "$TB") bytes)"

# 3. The disc descriptor, and the AUDIO TRACKS ARE THE POINT. The .ccd states the layout: a Control byte and a
#    PLBA per track plus the lead-out, which is how the seven CD-DA tracks survive and the program is handed a real
#    table of contents. A one-track cue describing the data track alone is enough for the artwork and the font, and
#    it is NOT enough for music: measured, the game then asks the CD to play 00:00:00 to 00:00:00 and plays nothing
#    (port/main.cpp says the same where it prefers the .ccd). So the .ccd is used when the download's own is there,
#    and when it is not, the cue is written and the silence is announced rather than left to look like a port bug.
CUE="$WORK/disc.cue"
CCD="$(dirname "$DISC_IMG")/$(basename "${DISC_IMG%.*}").ccd"
if [[ -f "$CCD" ]]; then
	CUE="$CCD"
	echo "disc toc  $CUE (CloneCD, with the audio tracks)"
else
	printf 'FILE "%s" BINARY\n  TRACK 01 MODE1/2352\n    INDEX 01 00:00:00\n' \
		"$(realpath --relative-to="$WORK" "$(realpath "$DISC_IMG")")" >"$CUE"
	echo "disc toc  $CUE (ONE TRACK: no CD audio)"
	echo "          the music is on tracks 2-8. Put the download's .ccd beside the .img, named after it, for sound."
fi

# 4. The font ROM. Without it the port runs and every glyph is blank, which reads as a broken renderer.
#    One ships in this repository since 2026-11-02, at assets/font-rom/FMT_FNT.ROM, so the common case needs no network
#    at all and works on a read-only mount. vendor/roms/ is still honoured as a fallback for a tree that fetched the
#    whole FreeTOWNS set before that, and fetching remains the last resort, only when the tree is writable, because a
#    read-only container mount must be told rather than surprised. Reasoning: assets/font-rom/README.md.
if [[ -f "$ROOT/assets/font-rom/FMT_FNT.ROM" ]]; then
	export U2_FONT="$ROOT/assets/font-rom/FMT_FNT.ROM"
	echo "roms      $U2_FONT (in this repository, nothing fetched)"
elif [[ -f "$ROOT/vendor/roms/FMT_FNT.ROM" ]]; then
	export U2_FONT="$ROOT/vendor/roms/FMT_FNT.ROM"
else
	if [[ -w "$ROOT" ]] && [[ -x "$ROOT/tools/vendor.sh" ]]; then
		echo "roms      fetching the FreeTOWNS clean-room set with tools/vendor.sh"
		"$ROOT/tools/vendor.sh" --roms >/dev/null
	fi
	if [[ -f "$ROOT/vendor/roms/FMT_FNT.ROM" ]]; then
		export U2_FONT="$ROOT/vendor/roms/FMT_FNT.ROM"
	else
		echo "roms      no FMT_FNT.ROM under $ROOT/assets/font-rom or $ROOT/vendor/roms and this tree is not writable."
		echo "          Run ./tools/vendor.sh on the host, or mount the ROMs. Text will be blank without it."
	fi
fi
[[ -f "$ROOT/vendor/roms/FMT_F20.ROM" ]] && export U2_FONT20="$ROOT/vendor/roms/FMT_F20.ROM"

# 5. A floppy with characters on it. Character creation works now, and the disk is writable by default, so this is
#    an image a run can actually save onto. It is unpacked from the repository's own copy rather than fetched, and it
#    goes beside $DISK, which is under build/play when the tree is read-only. A missing image is not fatal: the A:
#    probe fails and the program shows its insert-a-disk prompt instead of the title.
# The save disk is optional. The port keeps saves as plain files in saves/ and mounts that directory as the floppy,
# creating it if it is not there, so a missing image is not a prompt any more. The four positional paths are passed
# only when there is an image to pass: naming a path that does not exist takes the explicit-files route, which is the
# one that does not create the directory, so "pass a missing disk" would be worse than "pass none".
if [[ -f "$DISK" ]]; then
	DISK_ARGS=("$PROG" "$TB" "$CUE" "$DISK")
	echo "save disk $DISK"
else
	DISK_ARGS=()
	echo "saves     the port creates ./saves on first run, and no image was found to seed it from"
fi

# 6. The binary. A release carries the port beside this script under its release name, and then there is nothing to
#    build: that is at least part of the point of the release. A clone has no binary at the root, so it builds one
#    from module/<title> with cmake, which needs a compiler and SDL3 but no recompiler and no toolkit beyond its
#    runtime headers. THE NAME OF THE EXECUTABLE IS THE TITLE'S, so every lookup below is per title: a build produces
#    `u3` for u3, the release asset is `fm-u3-linux-x86_64`, and `u3port` is the spelling builds used before the
#    rename and is still honoured. Looking for a single fixed name here is how this script came to build only
#    Ultima II while claiming to run whatever was in ./game/.
#    There is no probe for a distro SDL3 any more: every build links the pinned static archive, because a binary that
#    needs libSDL3 from the package manager is the thing this whole script exists to avoid handing to somebody.
if [[ -x "$ROOT/$TITLE" ]]; then
	PORT_BIN="$ROOT/$TITLE"
	echo "binary    $PORT_BIN (shipped with this archive, nothing built)"
elif [[ -x "$ROOT/fm-$TITLE-linux-x86_64" ]]; then
	PORT_BIN="$ROOT/fm-$TITLE-linux-x86_64"
	echo "binary    $PORT_BIN (the release asset, nothing built)"
elif [[ -x "$ROOT/${TITLE}port" ]]; then
	PORT_BIN="$ROOT/${TITLE}port"
	echo "binary    $PORT_BIN (the name builds used before the rename, nothing built)"
elif [[ $REBUILD -eq 0 && -x "$WORK/$TITLE" ]]; then
	PORT_BIN="$WORK/$TITLE"
	echo "binary    $PORT_BIN (built earlier, --rebuild to force)"
else
	[[ -d "$ROOT/port" ]] || {
		echo "no port binary beside this script and no port/ directory to build one from." >&2
		exit 2
	}
	# THE PINNED STATIC SDL3, ALWAYS, including on a machine that has one from the distro. A build that links the
	# system's libSDL3 produces a binary that runs here and nowhere else, and that is now a configure error rather
	# than a quiet outcome (port/CMakeLists.txt). The source build is the same one the release uses, so what a
	# stranger gets from a clone is what we ship. It is a few minutes once and cached under $WORK/sdl3 after that.
	if [[ ! -x "$ROOT/tools/sdl-from-source.sh" ]]; then
		echo "no tools/sdl-from-source.sh beside this script to build the static SDL3 every build links." >&2
		echo "use the release archive, which needs no SDL at all." >&2
		exit 2
	fi
	echo "sdl3      building or reusing the pinned static archive (a few minutes the first time)"
	SDL_PREFIX="$(SDL3_CACHE="$SDL_CACHE" "$ROOT/tools/sdl-from-source.sh")" || {
		echo "the SDL3 source build failed. Run tools/sdl-from-source.sh to see why." >&2
		exit 1
	}
	SDL_ARGS=(-DCMAKE_PREFIX_PATH="$SDL_PREFIX")
	# THE TITLE'S THREE FACTS, passed rather than defaulted: the target name, the program it asks the disc for, and
	# the window title. -DU2_FOREIGN_MODULE is what compiles an empty shadow manifest for every title but Ultima II,
	# because the hand-written shadows name routines of ENCHANT.EXP and no other title has a table yet.
	FOREIGN=""
	[[ "$TITLE" != "u2" ]] && FOREIGN="-DU2_FOREIGN_MODULE=ON"
	cmake -S "$ROOT/port" -B "$WORK" -DCMAKE_BUILD_TYPE=Release "${SDL_ARGS[@]}" \
		-DPORT_TARGET="$TITLE" -DPORT_PROGRAM="$EXP" -DPORT_TITLE="$WIN" $FOREIGN \
		-DRECOMP_DIR="$ROOT/module/$TITLE" -DTBIOS_DIR="$ROOT/module/tbios" >"$WORK/cmake.log" 2>&1
	cmake --build "$WORK" -j"$(nproc)" >"$WORK/build.log" 2>&1 || {
		echo "the port failed to build. Last lines of $WORK/build.log:" >&2
		tail -20 "$WORK/build.log" >&2
		exit 1
	}
	PORT_BIN="$WORK/$TITLE"
	echo "built     $PORT_BIN from module/$TITLE ($(ls "$ROOT"/module/"$TITLE"/p_game_*.cpp "$ROOT"/module/tbios/p_tbios_*.cpp | wc -l) sources, no recompile)"
fi

# 7. Play.
if [[ $HEADLESS -eq 1 ]]; then
	SHOT="${SHOT:-$WORK/shot.png}"
	echo "running   $FRAMES frames headless, shot to $SHOT"
	# shellcheck disable=SC2086
	U2_SHOT="$SHOT" exec "$PORT_BIN" --graphics=none --frames="$FRAMES" ${RATE:+--cpu-rate="$RATE"} ${U2_ARGS:-} "${DISK_ARGS[@]}"
fi
echo "playing   at the game menu pick Journey Onward, or Generate Character to make one."
echo "          Saves live in $ROOT/saves as plain files, writable, so a created character persists."
echo "          Ctrl-Q or closing the window ends the run. Known bugs: docs/port-defects.md"
# shellcheck disable=SC2086
exec "$PORT_BIN" --graphics=sdl ${RATE:+--cpu-rate="$RATE"} ${U2_ARGS:-} "${DISK_ARGS[@]}"
