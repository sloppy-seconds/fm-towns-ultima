#!/usr/bin/env bash
# tools/release-package.sh - assemble the host artefact a release carries: a port that plays, with no game in it.
#
# WHAT IS IN THE ARTEFACT AND WHY. Since 2026-10-30 the recompiled C++ is committed under module/, so a playable
# The port can be built by CI with no disc anywhere in the pipeline. That is the binary this packages, together with
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

if [[ ! -f "$ROOT/fmtownskit/runtime/towns.cmake" ]]; then
	echo "the toolkit is not at $ROOT/fmtownskit. Run: git submodule update --init fmtownskit" >&2
	exit 2
fi
if [[ ! -f "$ROOT/module/modules.cpp" ]]; then
	echo "no committed module at $ROOT/module, and without it there is nothing playable to ship." >&2
	exit 2
fi

rm -rf "$OUT/build-host"

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
mkdir -p "$OUT"
cmake -S "$ROOT/port" -B "$BUILD" -DCMAKE_BUILD_TYPE=Release -DPORT_TARGET=u2 -DPORT_STATIC_CXX=ON -DCMAKE_PREFIX_PATH="$SDL3_PREFIX" >"$OUT/cmake.log" 2>&1
cmake --build "$BUILD" -j"$(nproc)" >"$OUT/build.log" 2>&1 || {
	echo "the release build failed. Last lines of $OUT/build.log:" >&2
	tail -30 "$OUT/build.log" >&2
	exit 1
}
cp "$BUILD/u2" "$OUT/$NAME"
chmod 0755 "$OUT/$NAME"

# The portability assertion. A binary that needs libSDL3 from the distro is not the thing this release claims to
# be, so this is a refusal and not a note, and it was demonstrated by pointing SDL3_PREFIX at the system prefix and
# reading the failure. ldd is the check because it is what the loader actually does, not what the build intended.
if ldd "$OUT/$NAME" | grep -qi "libsdl3"; then
	echo "refusing to package: the binary loads libSDL3 at runtime, so it is not self-contained." >&2
	ldd "$OUT/$NAME" | grep -i sdl3 >&2
	echo "check that tools/sdl-from-source.sh built the static archive and that CMAKE_PREFIX_PATH reached cmake." >&2
	exit 1
fi

# THE GLIBC FLOOR, and it is a refusal like the one above. A binary records, per imported symbol, the glibc version that
# symbol appeared in, and the loader will not start it on a machine with an older libc. The version is decided by the
# BUILD HOST: this port built on glibc 2.43 asked for 2.43 through five float-math calls, and the release built that way
# could not run on Ubuntu 22.04, RHEL 9 or Debian 11 while nothing noticed. Paul set the floor at 2.34 on 2026-11-10.
# tools/glibcfloor.js owns the number and prints the offending symbols, and tools/checkall.js fails if this script stops
# calling it or if the documented floor and the tool's constant disagree.
if ! node "$ROOT/tools/glibcfloor.js" "$OUT/$NAME"; then
	echo "refusing to package: the binary needs a newer glibc than the floor this project ships against." >&2
	echo "build the release on a base whose libc is at or below that floor; the symbol versions come from the build host." >&2
	exit 1
fi

# THE NOTICES ARE INSIDE THE BINARY, and that is what makes one file legal to ship, so it is asserted by asking the
# binary rather than by trusting the build. Four sections: this port's MIT text, fmtownskit's, SDL3's zlib text, and the
# glyph ROM's provenance. The provenance is not decoration: the ROM is generated from a public-domain BDF font and is
# not Fujitsu code, but neither upstream attaches an explicit grant to the generated file, and a reader who gets one
# file instead of an archive can only learn that from the file.
LIC=$(mktemp)
if ! "$OUT/$NAME" --licences >"$LIC" 2>&1; then
	echo "refusing to package: the binary failed to print its licences." >&2
	rm -f "$LIC"
	exit 1
fi
SECTIONS=$(grep -c '^===== ' "$LIC")
rm -f "$LIC"
if [[ "$SECTIONS" -ne 4 ]]; then
	echo "refusing to package: the binary prints $SECTIONS licence sections, and four are required." >&2
	exit 1
fi

echo "ldd       $(ldd "$OUT/$NAME" | awk '{print $1}' | tr '\n' ' ')"
rm -rf "$BUILD"

echo "binary    $OUT/$NAME, $(stat -c %s "$OUT/$NAME") bytes"
echo "sha256    $(sha256sum "$OUT/$NAME" | cut -d' ' -f1)"
