#!/usr/bin/env bash
# tools/release-package.sh - assemble the host artefact a release carries: a port that plays, with no game in it.
#
# WHAT IS IN THE ARTEFACT AND WHY. Since 2026-10-30 the recompiled C++ is committed under module/, so a playable
# u2port can be built by CI with no disc anywhere in the pipeline. That is the binary this packages, together with
# the smallest set of scripts that make "drop your own files in ./game/ and run ./play.sh" work without a clone.
#
# SDL IS LINKED STATIC, and that is what makes the binary somebody else's machine's binary rather than a Debian
# trixie artefact. tools/sdl-from-source.sh builds the pinned upstream release as libSDL3.a and the port links
# that, so there is no libSDL3.so.0 in the NEEDED list and nothing to install first. What SDL still dlopens at
# runtime (libX11, libwayland-client, libasound, libpulse, libpipewire, libGL, libudev) is the desktop's own
# library set, present on any stock one, and a missing backend is skipped by SDL rather than fatal. The step that
# proves it is the `ldd` assertion below, and it refuses to package rather than warning.
#
# WHAT MAY NEVER BE IN IT, and this is the half of the policy that did not change: the original media. Not
# ENCHANT.EXP, not the disc images, not the floppy, not one extracted asset. One ROM ships and it is named by exact path below,
# because it is not Fujitsu code: FMT_FNT.ROM is generated from a public-domain font, the port renders no text
# without it, and assets/font-rom/README.md records the whole of what is and is not established about it. The reader supplies those
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
mkdir -p "$STAGE/tools"

# Build the playable binary from the committed module. No recompiler, no disc, no game byte read.
# SDL comes from the pinned source build unless the caller says otherwise, because a distro package for it is the
# dependency this artefact exists to remove.
if [[ -z "${SDL3_PREFIX:-}" ]]; then
	SDL3_PREFIX="$("$ROOT/tools/sdl-from-source.sh")"
	echo "sdl3      static archive at $SDL3_PREFIX"
else
	echo "sdl3      using the prefix the caller supplied: $SDL3_PREFIX"
fi
# SDL's licence text is embedded in the binary now, so the file the archive carries and the text the program prints
# have to be the same bytes. The repository copy is the source of truth, because a build does not need the SDL prefix to
# exist to compile the notice in, and a prefix regenerated from a newer tarball cannot silently disagree with it.
SDL_LICENSE="$ROOT/LICENSE.SDL3"
if [[ -f "$SDL_LICENSE" && -f "$SDL3_PREFIX/LICENSE.SDL3" ]] && ! cmp -s "$SDL_LICENSE" "$SDL3_PREFIX/LICENSE.SDL3"; then
	echo "LICENSE.SDL3 at the root differs from $SDL3_PREFIX/LICENSE.SDL3." >&2
	echo "The archive would then carry a different notice from the one compiled into the binary. If SDL was updated," >&2
	echo "copy the new text into LICENSE.SDL3 so both come from one source." >&2
	exit 2
fi
[[ -f "$SDL_LICENSE" ]] || SDL_LICENSE="$SDL3_PREFIX/LICENSE.SDL3"
if [[ ! -f "$SDL_LICENSE" ]]; then
	echo "no SDL licence text: neither LICENSE.SDL3 at the root nor $SDL3_PREFIX/LICENSE.SDL3 exists." >&2
	echo "The binary embeds SDL's notice and the archive has to carry the same text." >&2
	exit 2
fi
BUILD="$OUT/build-host"
cmake -S "$ROOT/port" -B "$BUILD" -DCMAKE_BUILD_TYPE=Release -DCMAKE_PREFIX_PATH="$SDL3_PREFIX" >"$OUT/cmake.log" 2>&1
cmake --build "$BUILD" -j"$(nproc)" >"$OUT/build.log" 2>&1 || {
	echo "the release build failed. Last lines of $OUT/build.log:" >&2
	tail -30 "$OUT/build.log" >&2
	exit 1
}
cp "$BUILD/u2port" "$STAGE/u2port"
chmod 0755 "$STAGE/u2port"

# The portability assertion. A binary that needs libSDL3 from the distro is not the thing this release claims to
# be, so this is a refusal and not a note, and it was demonstrated by pointing SDL3_PREFIX at the system prefix and
# reading the failure. ldd is the check because it is what the loader actually does, not what the build intended.
if ldd "$STAGE/u2port" | grep -qi "libsdl3"; then
	echo "refusing to package: the binary loads libSDL3 at runtime, so it is not self-contained." >&2
	ldd "$STAGE/u2port" | grep -i sdl3 >&2
	echo "check that tools/sdl-from-source.sh built the static archive and that CMAKE_PREFIX_PATH reached cmake." >&2
	exit 1
fi

# SDL's own loadable backends, if this build has any. A static SDL3 compiles the render backends in, so today this
# copies nothing, and the branch stays because the release README promises the archive is complete: if a future SDL
# ships them as modules they go in SDL3/ beside the binary, which is on the rpath.
if compgen -G "$SDL3_PREFIX/lib/SDL3/*.so" >/dev/null; then
	mkdir -p "$STAGE/SDL3"
	cp "$SDL3_PREFIX"/lib/SDL3/*.so "$STAGE/SDL3/"
	echo "bundled   $(ls "$STAGE/SDL3" | tr '\n' ' ') in SDL3/"
fi

# The scripts a standalone archive needs, and nothing else. play.sh resolves paths from its own directory, so
# tools/ and assets/ beside it is the layout it expects.
cp "$ROOT/play.sh" "$STAGE/play.sh"
cp "$ROOT/tools/getfile.js" "$ROOT/tools/cd.js" "$ROOT/tools/vendor.sh" "$STAGE/tools/"
# Nothing to seed a save disk from, decided 2026-11-03. The port keeps saves as plain files and creates the directory
# itself, so the archive ships no floppy. The 1.26 MB image in git carries three characters, which is a convenience for
# whoever has it in the repository and not a requirement for playing: a fresh run starts with an empty save store and
# Generate Character writes into it. Shipping it also made "is there a save disk" a question a player had to answer
# before they could start.
# The one platform ROM this project carries, with the provenance document beside it. It is the glyph ROM and
# the port renders no text without it, and it is not Fujitsu code: see assets/font-rom/README.md.
mkdir -p "$STAGE/assets/font-rom"
cp "$ROOT/assets/font-rom/FMT_FNT.ROM" "$ROOT/assets/font-rom/README.md" "$STAGE/assets/font-rom/"
cp "$ROOT/LICENSE" "$STAGE/LICENSE"
cp "$ROOT/fmtownskit/LICENSE" "$STAGE/LICENSE.fmtownskit"
cp "$SDL_LICENSE" "$STAGE/LICENSE.SDL3"
cp "$ROOT/tools/release-readme.txt" "$STAGE/README.txt"
chmod 0755 "$STAGE/u2port" "$STAGE/play.sh" "$STAGE/tools/vendor.sh"

# The assertion that decides whether this may be published at all. Nothing game-shaped goes in, and the glyph ROM is
# allowed by exact name because it is not Fujitsu code.
LEAKY=$(find "$STAGE" -type f \
	-not -path "*/assets/font-rom/FMT_FNT.ROM" \
	\( -iname '*.exp' -o -iname '*.img' -o -iname '*.ccd' -o -iname '*.cue' -o -iname '*.sub' \
	-o -iname '*.hdm' -o -iname '*.rom' -o -iname '*.fnt' -o -iname '*.snd' -o -iname '*.eup' \
	-o -iname '*.tif' -o -iname '*.tiff' -o -iname '*.mp3' -o -iname '*.dg3' -o -iname '*.dat' \) -print)
if [[ -n "$LEAKY" ]]; then
	echo "refusing to package, the stage holds original media:" >&2
	echo "$LEAKY" >&2
	exit 1
fi

tar -czf "$OUT/$NAME.tar.gz" -C "$OUT" "$NAME"
echo "ldd       $(ldd "$STAGE/u2port" | awk '{print $1}' | tr '\n' ' ')"
rm -rf "$STAGE" "$BUILD"

echo "staged    $OUT/$NAME.tar.gz with $(tar -tzf "$OUT/$NAME.tar.gz" | grep -vc '/$') files"
echo "contents  $(tar -tzf "$OUT/$NAME.tar.gz" | grep -v '/$' | tr '\n' ' ')"
echo "sha256    $(sha256sum "$OUT/$NAME.tar.gz" | cut -d' ' -f1)"
echo "tarball   $OUT/$NAME.tar.gz"
