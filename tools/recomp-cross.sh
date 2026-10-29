#!/usr/bin/env bash
# tools/recomp-cross.sh - can the recompiler be taught the function starts our own walk holds?
#
# WHY. Item 4j3's second half. The two walks were compared and they contradict each other nowhere: 77 of
# fmtownskit's 121 exclusive starts are instruction boundaries our walk already places, and 44 it reaches that our
# seed rule does not, while 30 call targets of ours it never decodes at all (docs/walk-comparison.md). Zero
# conflicts in both directions means the difference is coverage, so the question is mechanical: add our starts to
# its seed list and see whether it decodes them without refusing or conflicting.
#
# WHAT IT DOES. Derives those addresses from tools/recondiff.js, runs tools/port-build.sh with them appended via
# U2_EXTRA_SEEDS into a separate output directory, and hands both modules to tools/recompcompare.js.
#
# WHAT A PASS MEANS, AND WHAT IT DOES NOT. A pass says the recompiler accepts those seeds, so they are function
# starts under its decode as well as ours. It does not say the merged module is the one to ship: that is a decision
# about which seeds the port should carry, and this script only produces the measurement.
#
# USAGE
#   tools/recomp-cross.sh [OUTDIR]     OUTDIR defaults to /var/tmp/u2-cross
#
# Everything it writes goes under /var/tmp and OUTDIR, never into the repository.
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
OUT="${1:-/var/tmp/u2-cross}"
SEEDS="/var/tmp/u2-cross-seeds.txt"
BASE="$ROOT/build/port/recomp"

fail() { echo "recomp-cross: $*" >&2; exit 1; }

[[ -f "$ROOT/ENCHANT.EXP" ]] || fail "ENCHANT.EXP is not in $ROOT"
[[ -d "$BASE" ]] || fail "no baseline module at $BASE. Run tools/port-build.sh first, so there is something to compare against"
[[ -d "$ROOT/fmtownskit/recomp" ]] || fail "the fmtownskit submodule is not initialised: git submodule update --init fmtownskit"

echo "recomp-cross: the starts our walk holds that the recompiler does not decode"
node "$ROOT/tools/recondiff.js" --emit-seeds "$SEEDS"
COUNT=$(grep -vc '^#' "$SEEDS" || true)
[[ "$COUNT" -gt 0 ]] || fail "recondiff emitted no addresses, so there is nothing to teach"

rm -rf "$OUT"
echo ""
echo "recomp-cross: recompiling with those $COUNT added as seeds, into $OUT"
U2_EXTRA_SEEDS="$SEEDS" "$ROOT/tools/port-build.sh" --out "$OUT" --frames 1 2>&1 | grep -E '^(seeds|ranges|game|tbios|report|cross)' || true

[[ -f "$OUT/recomp/report.txt" ]] || fail "the cross recompile produced no report, so nothing can be compared"

echo ""
node "$ROOT/tools/recompcompare.js" "$BASE" "$OUT/recomp" "$SEEDS"
