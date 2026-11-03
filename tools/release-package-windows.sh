#!/usr/bin/env bash
# tools/release-package-windows.sh - build the Windows release artefact: one .exe, statically linked.
#
# WHY A SECOND SCRIPT RATHER THAN A FLAG. release-package.sh builds against a glibc and a Linux SDL and asserts its
# dynamic list with ldd. Every one of those checks is meaningless on a Windows target, where the equivalent questions
# are "which DLLs does the import table name" and "is the C++ runtime inside the file". Sharing one script would have
# meant a pile of conditionals around checks that have no common vocabulary. The two scripts share everything that is
# genuinely shared: the committed module, the port sources, the pinned SDL, and the rule that the artefact is one file.
#
# WHAT IT REFUSES, and each is a demonstration rather than a hope. Mingw will happily produce an .exe that needs
# libgcc_s_seh-1.dll and libstdc++-6.dll, which no Windows machine has; the first cross build this project made did
# exactly that, at 47 MB, and looked self-contained. It will also produce one that needs libSDL3.dll if the prefix
# pointed at a shared SDL. Both are refused here by reading the import table, which is what the loader actually obeys.
#
# USAGE
#   tools/release-package-windows.sh [outdir]      default outdir is dist/
#   SDL3_WIN_PREFIX=DIR                            use an existing Windows SDL3 prefix
#
# Prints the exe's path, size, import list and sha256, which is what the release body quotes.
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
OUT="${1:-$ROOT/dist}"
NAME="u2port-windows-x86_64.exe"
CXX_TRIPLE=x86_64-w64-mingw32

if [[ ! -f "$ROOT/fmtownskit/runtime/towns.cmake" ]]; then
	echo "the toolkit is not at $ROOT/fmtownskit. Run: git submodule update --init fmtownskit" >&2
	exit 2
fi
if [[ ! -f "$ROOT/module/modules.cpp" ]]; then
	echo "no committed module at $ROOT/module, and without it there is nothing playable to ship." >&2
	exit 2
fi
for tool in "${CXX_TRIPLE}-g++" "${CXX_TRIPLE}-objdump" cmake; do
	command -v "$tool" >/dev/null || {
		echo "missing tool: $tool" >&2
		echo "on Debian or Ubuntu: apt-get install mingw-w64 cmake" >&2
		exit 2
	}
done

# SDL for Windows, from the same pin and the same hash check as the host build. Built once into build/sdl3-win and
# reused, so a cached CI runner pays the download and the compile only when the pin moves.
if [[ -z "${SDL3_WIN_PREFIX:-}" ]]; then
	SDL3_WIN_PREFIX="$("$ROOT/tools/sdl-from-source.sh" --windows)"
	echo "sdl3      static archive for Windows at $SDL3_WIN_PREFIX"
else
	echo "sdl3      using the prefix the caller supplied: $SDL3_WIN_PREFIX"
fi

BUILD="$OUT/build-win"
mkdir -p "$OUT"
cmake -S "$ROOT/port" -B "$BUILD" -DCMAKE_BUILD_TYPE=Release \
	-DCMAKE_SYSTEM_NAME=Windows \
	-DCMAKE_C_COMPILER="${CXX_TRIPLE}-gcc" \
	-DCMAKE_CXX_COMPILER="${CXX_TRIPLE}-g++" \
	-DCMAKE_PREFIX_PATH="$SDL3_WIN_PREFIX" >"$OUT/cmake-win.log" 2>&1 || {
	echo "the Windows configure failed. Last lines of $OUT/cmake-win.log:" >&2
	tail -30 "$OUT/cmake-win.log" >&2
	exit 1
}
cmake --build "$BUILD" -j"$(nproc)" >"$OUT/build-win.log" 2>&1 || {
	echo "the Windows build failed. Last lines of $OUT/build-win.log:" >&2
	tail -30 "$OUT/build-win.log" >&2
	exit 1
}
mkdir -p "$OUT"
cp "$BUILD/u2port.exe" "$OUT/$NAME"
chmod 0644 "$OUT/$NAME"

# The self-containment assertion. Any of these in the import table means the file is not one file on a stranger's
# machine: no Windows installation carries a mingw runtime, and SDL is supposed to be inside.
IMPORTS=$("${CXX_TRIPLE}-objdump" -p "$OUT/$NAME" | awk '/DLL Name:/ {print $3}')
for forbidden in libgcc_s_seh-1.dll libgcc_s_dw2-1.dll libstdc++-6.dll libwinpthread-1.dll SDL3.dll; do
	if printf '%s\n' "$IMPORTS" | grep -qi "^${forbidden}$"; then
		echo "refusing to package: the exe imports $forbidden, so it needs a DLL no Windows machine has." >&2
		echo "the import table is:" >&2
		printf '%s\n' "$IMPORTS" >&2
		exit 1
	fi
done

echo "imports   $(printf '%s ' $IMPORTS)"
rm -rf "$BUILD"
echo "binary    $OUT/$NAME, $(stat -c %s "$OUT/$NAME") bytes"
echo "sha256    $(sha256sum "$OUT/$NAME" | cut -d' ' -f1)"
