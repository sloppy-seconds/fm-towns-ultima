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
# Named for provenance, the same as the Linux assets: `fm` is FM Towns, then the title. The NAME is set per title inside
# package_one below; this is the default the header text refers to.
NAME="fm-u2-windows-x86_64.exe"
CXX_TRIPLE=x86_64-w64-mingw32

if [[ ! -f "$ROOT/fmtownskit/runtime/towns.cmake" ]]; then
	echo "the toolkit is not at $ROOT/fmtownskit. Run: git submodule update --init fmtownskit" >&2
	exit 2
fi
# Every playable title, three of them, each from its own committed game module plus the shared TBIOS module. The same
# split the Linux packager uses, and for the same reason: nothing here reads a disc or a recompiler.
for id in u2 u3 u1; do
	if [[ ! -f "$ROOT/module/$id/modules.cpp" ]]; then
		echo "no committed module at $ROOT/module/$id, and without it there is nothing playable to ship." >&2
		exit 2
	fi
done
if [[ ! -f "$ROOT/module/tbios/p_tbios_funcs.h" ]]; then
	echo "no shared TBIOS module at $ROOT/module/tbios, and without it there is nothing playable to ship." >&2
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
# ONE FUNCTION, THREE CALLS AT THE END. Every assertion below is per executable, because a release now carries three
# Windows binaries, and checking only the first would let the others through with a DLL dependency or a missing licence.
package_one() {
	local id="$1"
	local exp
	exp=$(node "$ROOT/tools/games.js" --get "$id" exp) || exit 2
	NAME="fm-$id-windows-x86_64.exe"
	# The native shadows name routines of ENCHANT.EXP, so every title but Ultima II compiles an empty manifest.
	local shadow_flag=""
	[[ "$id" != "u2" ]] && shadow_flag="-DU2_FOREIGN_MODULE=ON"
	local BUILD="$OUT/build-win-$id"
	cmake -S "$ROOT/port" -B "$BUILD" -DCMAKE_BUILD_TYPE=Release \
		-DCMAKE_SYSTEM_NAME=Windows \
		-DCMAKE_C_COMPILER="${CXX_TRIPLE}-gcc" \
		-DCMAKE_CXX_COMPILER="${CXX_TRIPLE}-g++" \
		-DPORT_TARGET="$id" -DPORT_PROGRAM="$exp" $shadow_flag \
		-DPORT_TITLE="$(node "$ROOT/tools/games.js" --get "$id" window)" \
		-DRECOMP_DIR="$ROOT/module/$id" -DTBIOS_DIR="$ROOT/module/tbios" \
		-DCMAKE_PREFIX_PATH="$SDL3_WIN_PREFIX" >"$OUT/cmake-win-$id.log" 2>&1 || {
		echo "the $id Windows configure failed. Last lines of $OUT/cmake-win-$id.log:" >&2
		tail -30 "$OUT/cmake-win-$id.log" >&2
		exit 1
	}
	cmake --build "$BUILD" -j"$(nproc)" >"$OUT/build-win-$id.log" 2>&1 || {
		echo "the $id Windows build failed. Last lines of $OUT/build-win-$id.log:" >&2
		tail -30 "$OUT/build-win-$id.log" >&2
		exit 1
	}
	cp "$BUILD/$id.exe" "$OUT/$NAME"
	chmod 0644 "$OUT/$NAME"

	# The self-containment assertion. Any of these in the import table means the file is not one file on a stranger's
	# machine: no Windows installation carries a mingw runtime, and SDL is supposed to be inside.
	IMPORTS=$("${CXX_TRIPLE}-objdump" -p "$OUT/$NAME" | awk '/DLL Name:/ {print $3}')
	for forbidden in libgcc_s_seh-1.dll libgcc_s_dw2-1.dll libstdc++-6.dll libwinpthread-1.dll SDL3.dll; do
		if printf '%s\n' "$IMPORTS" | grep -qi "^${forbidden}$"; then
			echo "refusing to package: $NAME imports $forbidden, so it needs a DLL no Windows machine has." >&2
			echo "the import table is:" >&2
			printf '%s\n' "$IMPORTS" >&2
			exit 1
		fi
	done

	echo "imports   $(printf '%s ' $IMPORTS)"
	rm -rf "$BUILD"
	echo "binary    $OUT/$NAME, $(stat -c %s "$OUT/$NAME") bytes"
	echo "sha256    $(sha256sum "$OUT/$NAME" | cut -d' ' -f1)"
	echo
}

# The three playable titles, in the order a reader meets them on the disc.
package_one u2
package_one u3
package_one u1

rm -rf "$OUT/build-win-u2" "$OUT/build-win-u3" "$OUT/build-win-u1"
