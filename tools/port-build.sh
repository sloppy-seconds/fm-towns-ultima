#!/usr/bin/env bash
# tools/port-build.sh - build the native port: recompiled game code on fmtownskit's FM Towns machine.
#
# WHY THE STRIPPED IMAGE. The module is keyed by runtime addresses, and the runtime address of file
# offset 0x200 is 0 (docs/cfg-findings.md, measured on 1,546 of 1,555 control-flow edges). So the
# recompilation runs on ENCHANT.EXP with its 0x200 bytes of MP header and loader stub removed, and
# every seed and no-code range is shifted by the same 0x200. Keying the module on the unstripped file
# puts every lookup 0x200 out, which is this project's most expensive recurring mistake.
#
# USAGE
#   tools/port-build.sh              rebuild the recompilation, then cmake and run 60 frames
#   tools/port-build.sh --reuse      skip the recompilation, use what is in the build directory
#   tools/port-build.sh --frames N   run N vsyncs instead of 60
#
# Everything it writes goes under build/port/ and /var/tmp, never into the repository.

set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
KIT="$ROOT/references/vs-sr-dev/fmtownskit"
OUT="$ROOT/build/port"
STRIPPED="/var/tmp/u2-ENCHANT-stripped.bin"
RECOMP="$OUT/recomp"

REUSE=0
FRAMES=60
while [[ $# -gt 0 ]]; do
	case "$1" in
		--reuse) REUSE=1; shift ;;
		--frames) FRAMES="$2"; shift 2 ;;
		*) echo "usage: tools/port-build.sh [--reuse] [--frames N]" >&2; exit 2 ;;
	esac
done

if [[ ! -f "$KIT/runtime/towns.cmake" ]]; then
	echo "the toolkit is not at $KIT (clone https://github.com/vs-sr-dev/fmtownskit, mp-support branch)" >&2
	exit 2
fi
if [[ ! -f "$ROOT/ENCHANT.EXP" ]]; then
	echo "ENCHANT.EXP is not in $ROOT; see README section 1" >&2
	exit 2
fi

mkdir -p "$OUT"

# 3a. TBIOS.BIN, extracted from the disc with this repository's own ISO reader, and needed BEFORE the
#     recompilation because TBIOS is a module too. Not the kit's Disc: its cue reader refuses this
#     disc's PREGAP on the audio tracks, and this is a one-file read from the data track, which
#     tools/cd.js already does correctly.
node - "$ROOT" "$OUT/tbios.bin" <<'JS'
const nodePath = process.argv[2], out = process.argv[3];
const { Disc, defaultDisc } = require(nodePath + '/tools/cd.js');
const d = new Disc(defaultDisc(nodePath));
const cat = d.catalogue();
const name = [...cat.keys()].find((k) => k.toUpperCase().endsWith('TBIOS.BIN'));
if (!name) { console.error('TBIOS.BIN is not on the disc'); process.exit(1); }
require('fs').writeFileSync(out, d.get(cat, name));
console.log('tbios     ' + out + ' (' + require('fs').statSync(out).size + ' bytes, from ' + name + ')');
JS

if [[ $REUSE -eq 0 ]]; then
	# 1. The stripped image: the file minus the 0x200 header and stub.
	FILE_SIZE=$(stat -c %s "$ROOT/ENCHANT.EXP")
	tail -c +513 "$ROOT/ENCHANT.EXP" > "$STRIPPED"
	STRIPPED_SIZE=$(stat -c %s "$STRIPPED")
	echo "stripped  $STRIPPED ($STRIPPED_SIZE bytes, was $FILE_SIZE)"
	if [[ $((FILE_SIZE - STRIPPED_SIZE)) -ne 512 ]]; then
		echo "the stripped image is not 0x200 bytes smaller, so the strip is wrong" >&2
		exit 1
	fi

	# 2. Seeds and no-code ranges, shifted from the file frame into the runtime frame.
	SEEDS=$(cd "$ROOT" && node tools/seeds.js --emit)
	RANGES=$(cd "$ROOT" && node tools/codelimits.js --args)
	SHIFTED=$(python3 - "$SEEDS" "$RANGES" <<'PY'
import sys
seeds = sys.argv[1].split(',')
out = []
for s in seeds:
    s = s.strip()
    if not s:
        continue
    v = int(s, 16) - 0x200
    if v >= 0:
        out.append('0x%x' % v)
ranges = sys.argv[2].split()
flags = []
for i, tok in enumerate(ranges):
    if tok == '--no-code':
        lo, hi = ranges[i + 1].split(':')
        lo = max(0, int(lo, 16) - 0x200)
        hi = max(0, int(hi, 16) - 0x200)
        flags.append('--no-code %x:%x' % (lo, hi))
print('%s|%s' % (','.join(out), ' '.join(flags)))
PY
)
	SEED_LIST="${SHIFTED%%|*}"
	NO_CODE="${SHIFTED#*|}"
	echo "seeds     $(awk -F, '{print NF}' <<< "$SEED_LIST") in the runtime frame, plus the entry"

	# 3. Recompile, with the entry added because nothing CALLs it (docs/recomp-plan.md).
	#    `--raw` is the right entry point here: the stripped image has no container header left, so the
	#    kit's Exp parser cannot identify it, and `--raw` takes the image at base 0 with the code selector
	#    from the spec. 0x0c is the selector this project measured live (docs/live-session.md).
	#    TBIOS is a second module, keyed by its own code selector 0x110, with its entry table at
	#    offsets 0x20..0x100 seeding the functions. That is the shape the kit's own ports use
	#    (pc-thequeenofduellist docs/09-recompiler.md): "--raw tbios=...TBIOS.BIN@110:20-100".
	#    TBIOS's seeds come from the live captures: every distinct offset that executed in segment 0110
	#    is a function the game really called, which beats guessing at its entry table (six functions
	#    from the far table alone, then a fault on the first real call at 0110:19b8).
	TB_CAPTURE="$ROOT/saves/analysis/entry-boot-tool.txt"
	TB_SEEDS=""
	if [[ -f "$TB_CAPTURE" ]]; then
		TB_SEEDS=$(python3 "$ROOT/tools/tbios-seeds.py" "$TB_CAPTURE")
		echo "tbios     $(python3 "$ROOT/tools/tbios-seeds.py" --count "$TB_CAPTURE") distinct 0110 offsets as seeds"
	fi
	TB_SPEC="tbios=$OUT/tbios.bin@110:20-100"
	if [[ -n "$TB_SEEDS" ]]; then
		TB_SPEC="$TB_SPEC+$TB_SEEDS"
	fi

	#    TWO PASSES, because --no-code is a global flag and the two modules are different images with
	#    different zero fill. A single pass applied ENCHANT's ranges to TBIOS and refused its real code at
	#    0xb91-0xe1c, which is padding in the game and ordinary TBIOS. Each pass gets its own ranges, then
	#    the two output directories are merged into one build directory with a modules.cpp naming both.
	TB_RANGES=$(cd "$ROOT" && node tools/codelimits.js --file "$OUT/tbios.bin" --args)
	echo "tbios     $(awk '{print NF/2}' <<< "$TB_RANGES") zero runs of its own, as --no-code"
	rm -rf "$OUT/re_game" "$OUT/re_tbios"
	(cd "$ROOT/references/vs-sr-dev" && python3 -m fmtownskit.recomp --out "$OUT/re_game" \
		--raw "game=$STRIPPED@0xc+$SEED_LIST,0x101a20" $NO_CODE) | tail -2
	(cd "$ROOT/references/vs-sr-dev" && python3 -m fmtownskit.recomp --out "$OUT/re_tbios" \
		--raw "$TB_SPEC" $TB_RANGES) | tail -2

	rm -rf "$RECOMP"
	mkdir -p "$RECOMP"
	cp "$OUT"/re_game/p_game_*.cpp "$OUT"/re_game/p_game_funcs.h "$RECOMP"/
	cp "$OUT"/re_tbios/p_tbios_*.cpp "$OUT"/re_tbios/p_tbios_funcs.h "$RECOMP"/
	#    modules.cpp is written here rather than copied, because each pass emits one naming only its own
	#    module and the last one would win. The two table files define these two symbols and nothing else
	#    registers them.
	{
		echo '#include "x86.h"'
		echo 'extern const X86Module g_mod_p_game;'
		echo 'extern const X86Module g_mod_p_tbios;'
		echo 'const X86Module* const g_x86_modules[] = {&g_mod_p_game, &g_mod_p_tbios};'
		echo 'const int g_x86_nmodules = 2;'
	} > "$RECOMP/modules.cpp"
	# Read it back rather than trusting the write: a missing second module is the failure that matters.
	if ! grep -q 'g_mod_p_tbios' "$RECOMP/modules.cpp" || ! grep -q 'g_x86_nmodules = 2' "$RECOMP/modules.cpp"; then
		echo "modules.cpp does not register both modules" >&2
		cat "$RECOMP/modules.cpp" >&2
		exit 1
	fi
	echo "merged    $(ls "$RECOMP"/p_*.cpp | wc -l) source files, both modules registered"
fi

# 4. Build the port.
# A one-track cue for the kit's Disc reader, written into the build directory and never committed. It is
# not a conversion of the disc: the .ccd stays the authoritative descriptor for emulation, because the
# audio tracks' PREGAP is ambiguous and Tsugaru's author documents that. The kit's reader refuses PREGAP
# entirely ("a gap not in the files is not read here"), and the program only needs the data track, which
# begins at index 0 of the image. So this hands it the ISO and nothing else.
cat > "$OUT/disc.cue" <<CUE
FILE "../../Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).img" BINARY
  TRACK 01 MODE1/2352
    INDEX 01 00:00:00
CUE
echo "cue       $OUT/disc.cue (track 1 only, for the kit's reader)"
cmake -S "$ROOT/port" -B "$OUT/b" -DCMAKE_BUILD_TYPE=Release -DRECOMP_DIR="$RECOMP" > "$OUT/cmake.log" 2>&1
cmake --build "$OUT/b" -j"$(nproc)" > "$OUT/build.log" 2>&1 || {
	echo "build failed; the last lines:" >&2
	tail -20 "$OUT/build.log" >&2
	exit 1
}
echo "built     $OUT/b/u2port"

# 5. Run it.
"$OUT/b/u2port" "$ROOT/ENCHANT.EXP" "$FRAMES" "$OUT/tbios.bin" "$OUT/disc.cue"
