#!/usr/bin/env bash
# tools/game-build.sh - build any of the seven titles onto fmtownskit's FM Towns machine.
#
# WHAT THIS FILE IS, AND WHY IT IS NOT CALLED AFTER ONE GAME. It began as tools/u3-build.sh, because a second
# title needed the strip, the frame shift, the seed derivation and the recompiler invocation in one place and
# port-build.sh already owned Ultima II's. Seven titles are now in scope (tools/games.js), so a script named
# after one of them would be the first of seven copies. The per-title facts are read from tools/games.js; this
# file owns the platform-wide arithmetic, which is the strip, the frame and the module key.
#
# WHY IT IS STILL A SECOND SCRIPT AND NOT A FLAG ON port-build.sh. port-build.sh owns Ultima II's build and every
# number in docs/ was taken with it, so changing its behaviour would put those numbers at risk for no gain. What
# the two must not do is each own half of one arithmetic, and they do not: both do the strip, the shift and the
# key in one place each, from the same descriptor. Folding them into one script is plan item U3-6b.
#
# THE FRAME. Runtime address = file offset - 0x200, measured on every title: the header's entry field is a
# runtime address and the bytes at `entry` in the stripped image are the `eb 56` start-up stub, which the script
# checks before using it. Keying the module on the unstripped file puts every lookup 0x200 out, which is this
# project's most expensive recurring mistake.
#
# USAGE
#   tools/game-build.sh u3              recompile, build, run 120 frames
#   tools/game-build.sh u3 --reuse      skip the recompilation, use what is in the build directory
#   tools/game-build.sh u3 --frames N   run N vsyncs instead of 120
#   tools/game-build.sh u3 --no-run     build and stop
#   tools/game-build.sh --list          the titles, from tools/games.js
#   DISC_IMG=/path/to/x.img             the disc image, if not the one .img beside the tools
#
# EXTRA_SEEDS=FILE appends guest-frame seed addresses, in the same format as tools/runtime-seeds.txt, on top of
# the title's own file from tools/games.js. It is how an experiment adds seeds without editing anything.

set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
KIT="$ROOT/fmtownskit"

REUSE=0
FRAMES=120
NO_COVERAGE=0
NO_RUN=0
QUIET=0
GAME_ID=""
while [[ $# -gt 0 ]]; do
	case "$1" in
		--list) node "$ROOT/tools/games.js" --list; exit 0 ;;
		--reuse) REUSE=1; shift ;;
		--frames) FRAMES="$2"; shift 2 ;;
		--no-run) NO_RUN=1; shift ;;
		--quiet) QUIET=1; shift ;;
		--no-coverage) NO_COVERAGE=1; shift ;;
		--game) GAME_ID="$2"; shift 2 ;;
		-*) echo "usage: tools/game-build.sh <title> [--reuse] [--frames N] [--no-run] [--quiet] [--no-coverage]" >&2; exit 2 ;;
		*) GAME_ID="$1"; shift ;;
	esac
done
GAME_ID="${GAME_ID:-u3}"

# The per-title facts come from one table, so a title's executable name is not written into a second place.
GAME=$(node "$ROOT/tools/games.js" --get "$GAME_ID" exp) || exit 2
SELECTOR=$(node "$ROOT/tools/games.js" --get "$GAME_ID" selector) || exit 2
SEED_FILE=$(node "$ROOT/tools/games.js" --get "$GAME_ID" seeds) || exit 2
SHADOWS=$(node "$ROOT/tools/games.js" --get "$GAME_ID" shadows) || exit 2
# THE NATIVE SHADOWS ARE TRUE FOR ULTIMA II ALONE, and the field says so rather than this script assuming it. Every
# entry in port/native_shadows.cpp names a routine of ENCHANT.EXP, so a build for another title compiles that file with
# an empty manifest or it does not link at all. Reading the field also makes the day a second title earns a table a data
# change instead of a second special case here.
SHADOW_FLAG=""
if [[ "$SHADOWS" != "true" ]]; then SHADOW_FLAG="-DU2_FOREIGN_MODULE=ON"; fi
SAVE_DISK=$(node "$ROOT/tools/games.js" --get "$GAME_ID" saveDisk) || exit 2
OUT="$ROOT/build/$GAME_ID"
RECOMP="$OUT/recomp"
STRIPPED="/var/tmp/$GAME_ID-$(basename "$GAME" .EXP)-stripped.bin"

say() { [[ $QUIET -eq 1 ]] || echo "$@"; }

if [[ ! -f "$KIT/runtime/towns.cmake" ]]; then
	echo "the toolkit is not at $KIT. Run: git submodule update --init fmtownskit" >&2
	exit 2
fi
# THE DISC IMAGE IS RESOLVED FIRST, because two of the steps below read files out of it. It used to be resolved at the
# end, for the cue only, which made the script depend on the media sitting beside the tools: run from a tree without the
# .img and tools/getfile.js died on a null path before it could read the --disc flag it had been given. Measured
# 2026-11-10 in the Alma container, tree at /build/w and media at /src. DISC_IMG names the image and it does not have to
# live inside the tree.
DISC_IMG="${DISC_IMG:-$(find "$ROOT" -maxdepth 1 -name '*.img' -print -quit)}"
if [[ -z "$DISC_IMG" || ! -f "$DISC_IMG" ]]; then
	echo "no disc .img found beside $ROOT, and the port needs one to open. Set DISC_IMG=/path/to/the.img" >&2
	exit 2
fi
DISC_IMG="$(realpath "$DISC_IMG")"

mkdir -p "$OUT"

# 1. The program and TBIOS, out of the disc with this repository's own ISO reader. Both are needed before the
#    recompilation, because TBIOS is a module too. tools/getfile.js is the one tool for this, so this script
#    neither reimplements the ISO read nor writes a JS snippet of its own. Both reads are told which image.
if [[ ! -f "$ROOT/$GAME" ]]; then
	(cd "$ROOT" && node tools/getfile.js "$GAME" --disc "$DISC_IMG")
fi
if [[ ! -f "$OUT/TBIOS.BIN" || ! -s "$OUT/TBIOS.BIN" ]]; then
	node "$ROOT/tools/getfile.js" TBIOS.BIN --disc "$DISC_IMG" --out "$OUT" >/dev/null
fi
say "program   $GAME ($(stat -c %s "$ROOT/$GAME") bytes, $(stat -c %s "$OUT/TBIOS.BIN") for TBIOS)"

if [[ $REUSE -eq 0 ]]; then
	# 2. The stripped image, with the arithmetic checked rather than assumed.
	FILE_SIZE=$(stat -c %s "$ROOT/$GAME")
	tail -c +513 "$ROOT/$GAME" > "$STRIPPED"
	STRIPPED_SIZE=$(stat -c %s "$STRIPPED")
	if [[ $((FILE_SIZE - STRIPPED_SIZE)) -ne 512 ]]; then
		echo "the stripped image is not 0x200 bytes smaller, so the strip is wrong" >&2
		exit 1
	fi
	# The entry is the header's own field, in the runtime frame, and it must land on a jump or the frame is
	# wrong. Read with od and bash arithmetic rather than a script: four bytes at a known offset is not worth a
	# tool, and a heredoc here would be the pattern AGENTS.md forbids.
	read -r e0 e1 e2 e3 <<< "$(od -An -tx1 -j 20 -N 4 "$ROOT/$GAME")"
	ENTRY=$(printf '0x%x' $(( (0x$e3 << 24) | (0x$e2 << 16) | (0x$e1 << 8) | 0x$e0 )))
	ENTRY_BYTES=$(od -An -tx1 -j $((ENTRY)) -N 2 "$STRIPPED" | tr -d ' \n')
	say "stripped  $STRIPPED ($STRIPPED_SIZE bytes, was $FILE_SIZE), entry $ENTRY = $ENTRY_BYTES"
	if [[ "$ENTRY_BYTES" != "eb56" ]]; then
		echo "the entry at $ENTRY is $ENTRY_BYTES, not the start-up stub's eb56, so the frame is wrong" >&2
		exit 1
	fi

	# 3. Seeds. The entry is not CALLed by anything, so it has to be given. The rest are DERIVED from the image
	#    each run by tools/seeds.js, in the lower frame the recompiler and the port use, so nothing here is a
	#    checked-in list that can go stale against a different rip. Measured extras (addresses the static rules
	#    cannot find, taken from a run of the port or the machine) come from the title's own file, named in
	#    tools/games.js, so no game's seed list is discovered by a naming convention in this script.
	SEEDS="$ENTRY,$(cd "$ROOT" && node tools/seeds.js --bin "$GAME" --emit --shift 0x200)"
	if [[ -n "$SEED_FILE" && -f "$ROOT/$SEED_FILE" ]]; then
		EXTRA=$(sed 's/#.*//' "$ROOT/$SEED_FILE" | tr -d ' \t' | grep -v '^$' | paste -sd, -)
		if [[ -n "$EXTRA" ]]; then
			SEEDS="$SEEDS,$EXTRA"
			say "seeds     plus $(tr ',' '\n' <<< "$EXTRA" | grep -c .) measured, from $SEED_FILE"
		fi
	fi
	if [[ -n "${EXTRA_SEEDS:-}" ]]; then
		[[ -f "$EXTRA_SEEDS" ]] || { echo "EXTRA_SEEDS=$EXTRA_SEEDS does not exist" >&2; exit 2; }
		EXTRA=$(sed 's/#.*//' "$EXTRA_SEEDS" | tr -d ' \t' | grep -v '^$' | paste -sd, -)
		SEEDS="$SEEDS,$EXTRA"
		say "seeds     plus $(tr ',' '\n' <<< "$EXTRA" | grep -c .) from $EXTRA_SEEDS"
	fi
	say "seeds     $(tr ',' '\n' <<< "$SEEDS" | grep -c .) in the runtime frame"

	# 4. No-code ranges, per module, derived from that module's own image. tools/codelimits.js finds the zero runs that
	#    are not code, and a range carried over from ENCHANT.EXP would refuse Ultima II's real code in a module
	#    for Ultima III.
	GAME_NO_CODE=$(cd "$ROOT" && node tools/codelimits.js --file "$STRIPPED" --args | sed 's/--no-code /--no-code game=/g')
	TB_NO_CODE=$(cd "$ROOT" && node tools/codelimits.js --file "$OUT/TBIOS.BIN" --args | sed 's/--no-code /--no-code tbios=/g')
	say "ranges    $(grep -o ':' <<< "$GAME_NO_CODE" | wc -l) for the game and $(grep -o ':' <<< "$TB_NO_CODE" | wc -l) for tbios"

	# 5. TBIOS seeds. The live capture first, because every distinct offset that executed in segment 0110 is a function
	#    the game really called, which beats guessing at its entry table. The capture is 3.2 MB of emulator trace and is
	#    gitignored, so a clean clone falls back to tools/tbios-seeds.txt, which is the same derivation checked in and
	#    asserted against the capture by tools/tbios-seeds.py --check. Ultima II's build has always chosen this way, so
	#    this script does too rather than taking the file alone.
	TB_CAPTURE="$ROOT/saves/analysis/entry-boot-tool.txt"
	TB_SEEDS=""
	if [[ -f "$TB_CAPTURE" ]]; then
		TB_SEEDS=$(python3 "$ROOT/tools/tbios-seeds.py" "$TB_CAPTURE")
		say "tbios     $(python3 "$ROOT/tools/tbios-seeds.py" --count "$TB_CAPTURE") distinct 0110 offsets as seeds, from the live capture"
	elif [[ -f "$ROOT/tools/tbios-seeds.txt" ]]; then
		TB_SEEDS=$(grep -v '^#' "$ROOT/tools/tbios-seeds.txt" | tr -d ' \t\n')
		say "tbios     $(tr ',' '\n' <<< "$TB_SEEDS" | grep -c .) seeds from tools/tbios-seeds.txt (the capture is not present)"
	fi
	TB_SPEC="tbios=$OUT/TBIOS.BIN@110:20-100"
	[[ -n "$TB_SEEDS" ]] && TB_SPEC="$TB_SPEC+$TB_SEEDS"

	# 6. One pass, two modules, each with its own ranges. The selector is the title's, from tools/games.js: 0x0c
	#    is measured on ENCHANT and is an assumption everywhere else until that title is measured. The load base
	#    is the port's choice for every title, because the image is flat with no relocations, and neither number
	#    is allowed to be silently defaulted, so both are printed.
	rm -rf "$RECOMP"
	rm -f "$OUT/recomp-summary.txt"
	say "assumption selector $SELECTOR and load base 0x400000, both measured on ENCHANT only (plan item U3-2a)"
	(cd "$ROOT" && PYTHONPATH="$ROOT${PYTHONPATH:+:$PYTHONPATH}" python3 -m fmtownskit.recomp --out "$RECOMP" \
		--raw "game=$STRIPPED@$SELECTOR+$SEEDS" $GAME_NO_CODE \
		--raw "$TB_SPEC" $TB_NO_CODE) | tail -2 | tee "$OUT/recomp-report.txt"

	# The counts line, stable and machine-comparable, so a second run can be diffed against this one rather
	# than against a sentence. Derived from the recompiler's own report and never written by hand, and the
	# script fails if the report stops having the shape this reads.
	SUMMARY=$(sed -nE 's/^game: (.*)$/game: \1/p' "$OUT/recomp-report.txt" | head -1)
	COUNTS=$(sed -nE 's/^game: ([0-9]+) functions, ([0-9]+) instructions, ([0-9]+) bytes of code; ([0-9]+) jump tables \(([0-9]+) bounded\), ([0-9]+) indirect transfers unresolved, ([0-9]+) refused, ([0-9]+) conflicts$/counts    functions=\1 instructions=\2 bytes=\3 jump_tables=\4 bounded=\5 indirect=\6 refused=\7 conflicts=\8/p' "$OUT/recomp-report.txt" | head -1)
	if [[ "$COUNTS" != counts* ]]; then
		echo "the recompiler report does not have the shape this summary reads. It says: $SUMMARY" >&2
		exit 1
	fi
	printf '%s\n' "$COUNTS" | tee "$OUT/recomp-summary.txt"

	# Instruction coverage, from the same walk, the same seeds and the same ranges as the module. That is what lets the
	# port tell a patched instruction from a data write, and item 7c's diff cannot run without it, so a title that has
	# it needs it here rather than only in the old Ultima II script. Skipped on request, and the skip says what it costs.
	# The ranges are passed WITHOUT the module prefix: tools/insncoverage.py walks one image and takes --no-code lo:hi,
	# while the recompiler wants --no-code game=lo:hi. Handing it the scoped form raised on int('game=…', 16) the first
	# time this ran, which is why the two forms are named apart here.
	COV_RANGES="${GAME_NO_CODE//game=/}"
	if [[ $NO_COVERAGE -eq 1 ]]; then
		say "coverage  skipped (--no-coverage), so $RECOMP/coverage.txt is absent"
	elif [[ -x "$ROOT/tools/.venv/bin/python3" ]]; then
		if PYTHONPATH="$ROOT" "$ROOT/tools/.venv/bin/python3" "$ROOT/tools/insncoverage.py" \
			--image "$STRIPPED" --seeds "$SEEDS" $COV_RANGES --out "$RECOMP/coverage.txt"; then
			say "coverage  $(wc -l < "$RECOMP/coverage.txt") instruction addresses in $RECOMP/coverage.txt"
		else
			echo "the coverage pass failed; the module is built, but item 7c's diff cannot run on it" >&2
		fi
	else
		say "coverage  skipped: no tools/.venv (run tools/decode-setup.sh); item 7c's diff cannot run on this module"
	fi
else
	say "reuse     using the module already in $RECOMP"
	[[ -f "$OUT/recomp-summary.txt" ]] && cat "$OUT/recomp-summary.txt"
fi

# 7. The port, against this module. Same cmake invocation as Ultima II's build, because it is the same port. The disc
# image was resolved at the top, because the reads in step 1 needed it; only the relative cue path is computed here.
DISC_REL="$(realpath --relative-to="$OUT" "$DISC_IMG")"
printf 'FILE "%s" BINARY\n  TRACK 01 MODE1/2352\n    INDEX 01 00:00:00\n' "$DISC_REL" > "$OUT/disc.cue"
say "cue       $OUT/disc.cue (track 1 only, resolving to $DISC_IMG)"

# STATIC SDL3 BY DEFAULT, the same rule and the same resolution as tools/port-build.sh: a binary that needs
# libSDL3 from the distro is not portable, and port/CMakeLists.txt refuses a shared one unless a caller says it is a
# link check. The prefix is resolved here rather than passed down so that `tools/game-build.sh u3` is one command on
# a fresh clone, building the pinned archive the first time and finding it every time after.
SDL3_PREFIX="${SDL3_PREFIX:-$("$ROOT/tools/sdl-from-source.sh" --print-prefix)}"
if [[ ! -f "$SDL3_PREFIX/lib/libSDL3.a" ]]; then
	echo "no static SDL3 at $SDL3_PREFIX/lib/libSDL3.a, and every build links one by default." >&2
	echo "run tools/sdl-from-source.sh, or set SDL3_PREFIX to a prefix that has the archive." >&2
	exit 2
fi
say "sdl3      static archive at $SDL3_PREFIX"
# SDL3_DIR as well, because it is a cache entry and a tree configured before this rule keeps the system's SDL3 in it.
SDL3_CMAKE_DIR="$SDL3_PREFIX/lib/cmake/SDL3"
if [[ ! -f "$SDL3_CMAKE_DIR/SDL3Config.cmake" ]]; then
	echo "the static SDL3 prefix has no $SDL3_CMAKE_DIR/SDL3Config.cmake, so CMake cannot be pointed at it." >&2
	exit 2
fi

cmake -S "$ROOT/port" -B "$OUT/b" -DCMAKE_BUILD_TYPE=Release -DRECOMP_DIR="$RECOMP" \
	-DFMT_RUNTIME="$KIT/runtime" $SHADOW_FLAG -DPORT_TARGET="$GAME_ID" -DPORT_PROGRAM="$GAME" \
	-DCMAKE_PREFIX_PATH="$SDL3_PREFIX" -DSDL3_DIR="$SDL3_CMAKE_DIR" > "$OUT/cmake.log" 2>&1
cmake --build "$OUT/b" -j"$(nproc)" > "$OUT/build.log" 2>&1 || {
	echo "build failed; the last lines:" >&2
	tail -20 "$OUT/build.log" >&2
	exit 1
}
say "built     $OUT/b/$GAME_ID"

[[ $NO_RUN -eq 1 ]] && { say "run       skipped (--no-run). Everything is under $OUT."; exit 0; }

# 8. Run it. `--graphics=none` for the same reason as Ultima II's build: a measurement path must not change
#    according to whether a display happens to be reachable. The save disk is the title's own from tools/games.js,
#    passed when it exists, because a game that asks for A: runs differently with no floppy than with a formatted
#    one and the difference is not a port defect.
FLOPPY=""
if [[ -n "$SAVE_DISK" && -f "$ROOT/$SAVE_DISK" ]]; then
	FLOPPY="$ROOT/$SAVE_DISK"
	say "floppy    $FLOPPY"
fi
# The binary is named after the title (plan item U3-6a): the module is compiled in, so one binary per title is
# the shape and the names have to differ. It is the title's id, so `u3` builds `u3`. The variable is passed rather
# than derived, and the file is checked, because a build that silently produced the default name is exactly the
# failure the item exists to stop.
PORT_BIN="$OUT/b/$GAME_ID"
if [[ ! -x "$PORT_BIN" ]]; then
	echo "no $PORT_BIN, so the build did not honour -DPORT_TARGET=$GAME_ID" >&2
	exit 1
fi
"$PORT_BIN" --graphics=none --frames="$FRAMES" "$ROOT/$GAME" "$OUT/TBIOS.BIN" "$OUT/disc.cue" $FLOPPY
