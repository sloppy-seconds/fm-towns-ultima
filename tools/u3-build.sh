#!/usr/bin/env bash
# tools/u3-build.sh - build the Ultima III port: EXODUS.EXP recompiled onto fmtownskit's FM Towns machine.
#
# WHY THIS IS A SECOND SCRIPT AND NOT A FLAG ON port-build.sh. port-build.sh owns Ultima II's build and every
# number in docs/ was taken with it, so changing its behaviour to serve a second title would put those numbers at
# risk for no gain. What the two builds must not do is each own half of one arithmetic: the strip, the frame
# shift and the module key all belong together, and both scripts do all three in one place. The shared work that
# really is shared (TBIOS, the cue, cmake) is done by the same tools, not by copies of each other.
#
# THE FRAME. Runtime address = file offset - 0x200, measured on both titles: the entry field is 0xd8ab0 and the
# bytes at file 0xd8cb0 are the start-up stub, so the recompilation runs on the stripped image with that seed and
# every address it is given in the same frame as the module it produces. Keying the module on the unstripped file
# puts every lookup 0x200 out, which is this project's most expensive recurring mistake.
#
# USAGE
#   tools/u3-build.sh                recompile, build, run 120 frames
#   tools/u3-build.sh --reuse        skip the recompilation, use what is in the build directory
#   tools/u3-build.sh --frames N     run N vsyncs instead of 120
#   tools/u3-build.sh --no-run       build and stop
#   tools/u3-build.sh --quiet        print only the counts line
#   DISC_IMG=/path/to/x.img          the disc image, if not the one .img beside the tools
#
# U3_SEEDS=FILE appends guest-frame seed addresses, in the same format as tools/runtime-seeds.txt. It is how the
# walked seed set of plan item U3-4a joins the build without editing this script: the entry alone reaches 645
# functions, and every seed added later is a line in that file.

set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
KIT="$ROOT/fmtownskit"
OUT="$ROOT/build/u3"
RECOMP="$OUT/recomp"
GAME="${U3_GAME:-EXODUS.EXP}"
STRIPPED="/var/tmp/u3-$(basename "$GAME" .EXP)-stripped.bin"

REUSE=0
FRAMES=120
NO_RUN=0
QUIET=0
while [[ $# -gt 0 ]]; do
	case "$1" in
		--reuse) REUSE=1; shift ;;
		--frames) FRAMES="$2"; shift 2 ;;
		--no-run) NO_RUN=1; shift ;;
		--quiet) QUIET=1; shift ;;
		*) echo "usage: tools/u3-build.sh [--reuse] [--frames N] [--no-run] [--quiet]" >&2; exit 2 ;;
	esac
done

say() { [[ $QUIET -eq 1 ]] || echo "$@"; }

if [[ ! -f "$KIT/runtime/towns.cmake" ]]; then
	echo "the toolkit is not at $KIT. Run: git submodule update --init fmtownskit" >&2
	exit 2
fi
mkdir -p "$OUT"

# 1. The program and TBIOS, out of the disc with this repository's own ISO reader. Both are needed before the
#    recompilation, because TBIOS is a module too. tools/getfile.js is the one tool for this, so this script
#    neither reimplements the ISO read nor writes a JS snippet of its own.
if [[ ! -f "$ROOT/$GAME" ]]; then
	(cd "$ROOT" && node tools/getfile.js "$GAME")
fi
if [[ ! -f "$OUT/TBIOS.BIN" || ! -s "$OUT/TBIOS.BIN" ]]; then
	node "$ROOT/tools/getfile.js" TBIOS.BIN --out "$OUT" >/dev/null
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
	#    cannot find, taken from a run of the port or the machine) live in tools/u3-seeds.txt, a line each.
	SEEDS="$ENTRY,$(cd "$ROOT" && node tools/seeds.js --bin "$GAME" --emit --shift 0x200)"
	if [[ -f "$ROOT/tools/u3-seeds.txt" ]]; then
		EXTRA=$(sed 's/#.*//' "$ROOT/tools/u3-seeds.txt" | tr -d ' \t' | grep -v '^$' | paste -sd, -)
		if [[ -n "$EXTRA" ]]; then
			SEEDS="$SEEDS,$EXTRA"
			say "seeds     plus $(tr ',' '\n' <<< "$EXTRA" | grep -c .) measured, from tools/u3-seeds.txt"
		fi
	fi
	if [[ -n "${U3_SEEDS:-}" ]]; then
		[[ -f "$U3_SEEDS" ]] || { echo "U3_SEEDS=$U3_SEEDS does not exist" >&2; exit 2; }
		EXTRA=$(sed 's/#.*//' "$U3_SEEDS" | tr -d ' \t' | grep -v '^$' | paste -sd, -)
		SEEDS="$SEEDS,$EXTRA"
		say "seeds     plus $(tr ',' '\n' <<< "$EXTRA" | grep -c .) from $U3_SEEDS"
	fi
	say "seeds     $(tr ',' '\n' <<< "$SEEDS" | grep -c .) in the runtime frame"

	# 4. No-code ranges, per module. EXODUS's ranges are its own: tools/codelimits.js finds the zero runs that
	#    are not code, and a range carried over from ENCHANT.EXP would refuse Ultima II's real code in a module
	#    for Ultima III.
	GAME_NO_CODE=$(cd "$ROOT" && node tools/codelimits.js --file "$STRIPPED" --args | sed 's/--no-code /--no-code game=/g')
	TB_NO_CODE=$(cd "$ROOT" && node tools/codelimits.js --file "$OUT/TBIOS.BIN" --args | sed 's/--no-code /--no-code tbios=/g')
	say "ranges    $(grep -o ':' <<< "$GAME_NO_CODE" | wc -l) for the game and $(grep -o ':' <<< "$TB_NO_CODE" | wc -l) for tbios"

	# 5. TBIOS seeds: the same derivation Ultima II's build uses, because it is the same TBIOS.BIN on the same
	#    disc. The file is checked in and asserted against the live capture by tools/tbios-seeds.py --check.
	TB_SEEDS=""
	if [[ -f "$ROOT/tools/tbios-seeds.txt" ]]; then
		TB_SEEDS=$(grep -v '^#' "$ROOT/tools/tbios-seeds.txt" | tr -d ' \t\n')
	fi
	TB_SPEC="tbios=$OUT/TBIOS.BIN@110:20-100"
	[[ -n "$TB_SEEDS" ]] && TB_SPEC="$TB_SPEC+$TB_SEEDS"

	# 6. One pass, two modules, each with its own ranges. The selector is 0x0c, which is the one the port
	#    registers the game module at and the one Ultima II's live CS was measured to be; Ultima III's has not
	#    been measured (item U3-2a), and until it is, this is the assumption the port runs under and it is
	#    printed rather than buried.
	rm -rf "$RECOMP"
	rm -f "$OUT/recomp-summary.txt"
	say "assumption selector 0x0c and load base 0x400000 are Ultima II's, not measured on Ultima III (U3-2a)"
	(cd "$ROOT" && PYTHONPATH="$ROOT${PYTHONPATH:+:$PYTHONPATH}" python3 -m fmtownskit.recomp --out "$RECOMP" \
		--raw "game=$STRIPPED@0xc+$SEEDS" $GAME_NO_CODE \
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
else
	say "reuse     using the module already in $RECOMP"
	[[ -f "$OUT/recomp-summary.txt" ]] && cat "$OUT/recomp-summary.txt"
fi

# 7. The port, against this module. Same cmake invocation as Ultima II's build, because it is the same port.
DISC_IMG="${DISC_IMG:-$(find "$ROOT" -maxdepth 1 -name '*.img' -print -quit)}"
if [[ -z "$DISC_IMG" || ! -f "$DISC_IMG" ]]; then
	echo "no disc .img found beside $ROOT, and the port needs one to open. Set DISC_IMG=/path/to/the.img" >&2
	exit 2
fi
DISC_IMG="$(realpath "$DISC_IMG")"
DISC_REL="$(realpath --relative-to="$OUT" "$DISC_IMG")"
printf 'FILE "%s" BINARY\n  TRACK 01 MODE1/2352\n    INDEX 01 00:00:00\n' "$DISC_REL" > "$OUT/disc.cue"
say "cue       $OUT/disc.cue (track 1 only, resolving to $DISC_IMG)"

cmake -S "$ROOT/port" -B "$OUT/b" -DCMAKE_BUILD_TYPE=Release -DRECOMP_DIR="$RECOMP" \
	-DFMT_RUNTIME="$KIT/runtime" -DU2_FOREIGN_MODULE=ON > "$OUT/cmake.log" 2>&1
cmake --build "$OUT/b" -j"$(nproc)" > "$OUT/build.log" 2>&1 || {
	echo "build failed; the last lines:" >&2
	tail -20 "$OUT/build.log" >&2
	exit 1
}
say "built     $OUT/b/u2port"

[[ $NO_RUN -eq 1 ]] && { say "run       skipped (--no-run). Everything is under $OUT."; exit 0; }

# 8. Run it. `--graphics=none` for the same reason as Ultima II's build: a measurement path must not change
#    according to whether a display happens to be reachable. The save disk is passed when one is present, because
#    Ultima III asks for A: and a missing floppy is a different run from a formatted one.
FLOPPY=""
if [[ -f "$ROOT/saves/u3test.hdm" ]]; then
	FLOPPY="$ROOT/saves/u3test.hdm"
	say "floppy    $FLOPPY"
fi
"$OUT/b/u2port" --graphics=none --frames="$FRAMES" "$ROOT/$GAME" "$OUT/TBIOS.BIN" "$OUT/disc.cue" $FLOPPY
