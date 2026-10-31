#!/usr/bin/env bash
# tools/release-package.sh - assemble the host artefact a release carries: a port that plays, with no game in it.
#
# WHAT IS IN THE ARTEFACT AND WHY. Since 2026-10-30 the recompiled C++ is committed under module/, so a playable
# u2port can be built by CI with no disc anywhere in the pipeline. That is the binary this packages, together with
# the smallest set of scripts that make "drop your own files in ./game/ and run ./play.sh" work without a clone.
#
# WHAT MAY NEVER BE IN IT, and this is the half of the policy that did not change: the original media. Not
# ENCHANT.EXP, not the disc images, not the floppy, not a ROM, not one extracted asset. The reader supplies those
# and is expected to own them. The guard below enforces it by extension and by name, and it was demonstrated by
# planting a forbidden file and reading the refusal.
#
# USAGE
#   tools/release-package.sh [outdir]      default outdir is dist/
#
# Prints the tarball path and its sha256, which is what the release body quotes.

set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
OUT="${1:-$ROOT/dist}"
NAME="u2port-linux-x86_64"
STAGE="$OUT/$NAME"

if [[ ! -f "$ROOT/fmtownskit/runtime/towns.cmake" ]]; then
	echo "the toolkit is not at $ROOT/fmtownskit. Run: git submodule update --init fmtownskit" >&2
	exit 2
fi
if [[ ! -f "$ROOT/module/modules.cpp" ]]; then
	echo "no committed module at $ROOT/module, and without it there is nothing playable to ship." >&2
	exit 2
fi

rm -rf "$STAGE"
mkdir -p "$STAGE/tools" "$STAGE/assets/save-disk"

# Build the playable binary from the committed module. No recompiler, no disc, no game byte read.
BUILD="$OUT/build-host"
cmake -S "$ROOT/port" -B "$BUILD" -DCMAKE_BUILD_TYPE=Release >"$OUT/cmake.log" 2>&1
cmake --build "$BUILD" -j"$(nproc)" >"$OUT/build.log" 2>&1 || {
	echo "the release build failed. Last lines of $OUT/build.log:" >&2
	tail -30 "$OUT/build.log" >&2
	exit 1
}
cp "$BUILD/u2port" "$STAGE/u2port"

# The scripts a standalone archive needs, and nothing else. play.sh resolves paths from its own directory, so
# tools/ and assets/ beside it is the layout it expects.
cp "$ROOT/play.sh" "$STAGE/play.sh"
cp "$ROOT/tools/getfile.js" "$ROOT/tools/cd.js" "$ROOT/tools/vendor.sh" "$STAGE/tools/"
cp "$ROOT/assets/save-disk/userdisk.hdm.zip" "$STAGE/assets/save-disk/"
cp "$ROOT/LICENSE" "$STAGE/LICENSE"
cp "$ROOT/fmtownskit/LICENSE" "$STAGE/LICENSE.fmtownskit"
cp "$ROOT/tools/release-readme.txt" "$STAGE/README.txt"
chmod 0755 "$STAGE/u2port" "$STAGE/play.sh" "$STAGE/tools/vendor.sh"

# The assertion that decides whether this may be published at all. The save disk is allowed by exact name because
# it is what the tested route picks a character from; everything else game-shaped is refused.
LEAKY=$(find "$STAGE" -type f \
	-not -path "*/assets/save-disk/userdisk.hdm.zip" \
	\( -iname '*.exp' -o -iname '*.img' -o -iname '*.ccd' -o -iname '*.cue' -o -iname '*.sub' \
	-o -iname '*.hdm' -o -iname '*.rom' -o -iname '*.fnt' -o -iname '*.snd' -o -iname '*.eup' \
	-o -iname '*.tif' -o -iname '*.tiff' -o -iname '*.mp3' -o -iname '*.dg3' -o -iname '*.dat' \) -print)
if [[ -n "$LEAKY" ]]; then
	echo "refusing to package, the stage holds original media:" >&2
	echo "$LEAKY" >&2
	exit 1
fi

tar -czf "$OUT/$NAME.tar.gz" -C "$OUT" "$NAME"
rm -rf "$STAGE" "$BUILD"

echo "staged    $OUT/$NAME.tar.gz with $(tar -tzf "$OUT/$NAME.tar.gz" | grep -vc '/$') files"
echo "contents  $(tar -tzf "$OUT/$NAME.tar.gz" | grep -v '/$' | tr '\n' ' ')"
echo "sha256    $(sha256sum "$OUT/$NAME.tar.gz" | cut -d' ' -f1)"
echo "tarball   $OUT/$NAME.tar.gz"
