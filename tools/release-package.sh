#!/usr/bin/env bash
# tools/release-package.sh - assemble the host artefact a release carries, and say plainly what is not in it.
#
# WHY SHAPE C LOOKS LIKE THIS. A u2port that plays contains the recompiled game, because the module is linked in
# and the module is the game translated into another form. The standing rule is that nothing derived from the disc
# is distributed, and a release is distribution. So the host artefact is the port built against a synthetic module
# by tools/ci-port-build.sh: it links, it runs, it carries the kit's MIT notice, and it holds no game byte by
# construction rather than by inspection. The route that plays is the container, where the module is built from the
# reader's own disc on the reader's own machine.
#
# USAGE
#   tools/release-package.sh [outdir]      default outdir is dist/
#
# Prints the tarball path and its sha256, which is what the release body quotes. It refuses when ENCHANT.EXP is
# present, because ci-port-build.sh does, and a release assembled beside the disc is one where shipping the game
# by accident becomes possible.

set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
OUT="${1:-$ROOT/dist}"
NAME="u2port-linux-x86_64"
STAGE="$OUT/$NAME"

rm -rf "$STAGE"
mkdir -p "$STAGE"

"$ROOT/tools/ci-port-build.sh" "$OUT/ci"

cp "$OUT/ci/b/u2port" "$STAGE/u2port"
cp "$ROOT/fmtownskit/LICENSE" "$STAGE/LICENSE.fmtownskit"
cp "$ROOT/tools/release-readme.txt" "$STAGE/README.txt"

# The assertion that decides whether this may be published at all. Counted rather than assumed, and it looks for
# the shapes a game artefact has here: the executable, the disc, the floppy, the ROMs, and the recompiler's module.
LEAKY=$(find "$STAGE" -type f \( -iname '*.exp' -o -iname '*.img' -o -iname '*.ccd' -o -iname '*.hdm' \
	-o -iname '*.rom' -o -iname '*.bin' -o -iname 'p_game_*.cpp' -o -iname 'modules.cpp' \) -print)
if [[ -n "$LEAKY" ]]; then
	echo "refusing to package, the stage holds game-shaped files:" >&2
	echo "$LEAKY" >&2
	exit 1
fi

tar -czf "$OUT/$NAME.tar.gz" -C "$OUT" "$NAME"
rm -rf "$STAGE"

echo "staged    $(ls "$OUT/$NAME.tar.gz") with $(tar -tzf "$OUT/$NAME.tar.gz" | grep -vc '/$') files"
echo "sha256    $(sha256sum "$OUT/$NAME.tar.gz" | cut -d' ' -f1)"
echo "tarball   $OUT/$NAME.tar.gz"
