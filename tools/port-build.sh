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
	rm -rf "$RECOMP"
	(cd "$ROOT/references/vs-sr-dev" && python3 -m fmtownskit.recomp --out "$RECOMP" \
		--raw "game=$STRIPPED@0xc+$SEED_LIST,0x101a20" $NO_CODE) | tail -3
fi

# 4. Build the port.
cmake -S "$ROOT/port" -B "$OUT/b" -DCMAKE_BUILD_TYPE=Release -DRECOMP_DIR="$RECOMP" > "$OUT/cmake.log" 2>&1
cmake --build "$OUT/b" -j"$(nproc)" > "$OUT/build.log" 2>&1 || {
	echo "build failed; the last lines:" >&2
	tail -20 "$OUT/build.log" >&2
	exit 1
}
echo "built     $OUT/b/u2port"

# 5. Run it.
"$OUT/b/u2port" "$ROOT/ENCHANT.EXP" "$FRAMES"
