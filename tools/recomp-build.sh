#!/usr/bin/env bash
# tools/recomp-build.sh - build the recompiled module and run one function in the host process.
#
# WHY THIS EXISTS. The recompiler emits 794 C++ functions plus a CMakeLists.txt, and until this
# script existed nothing here had ever compiled them. Two defects stopped it, both recorded in
# docs/recomp-plan.md: the generated CMakeLists pointed FMT_RUNTIME at a path that does not exist,
# and there was no main() to load the image and call anything.
#
# This script fixes the path, drops in tools/recomp-run1.cpp as the main(), builds, and runs one
# address. It does not regenerate the recompilation: point it at a directory that already holds a
# `recomp` run, because regenerating needs the kit, the seed set and the no-code ranges, and those
# are documented in docs/recompilation-result.md rather than hidden here.
#
# USAGE
#   tools/recomp-build.sh /var/tmp/recomp3            build, then run 0x209
#   tools/recomp-build.sh /var/tmp/recomp3 0xfdeb6    build, then run that address
#   tools/recomp-build.sh /var/tmp/recomp3 --no-run   build only
#
# The address is a FILE offset, because the module loads the whole image at base 0. The runtime
# address the emulator reports is 0x200 lower. Getting that backwards is this project's most
# expensive recurring mistake, so it is said here as well as in the doc.
#
# Exit status is the build's. A run that stops on a trap is not a failure: the trap names where the
# host runtime ends and the machine begins, which is a result.

set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
RUNTIME="$ROOT/fmtownskit/runtime"

DIR="${1:-}"
shift || true
RUN_ADDR="0x209"
if [[ "${1:-}" == "--no-run" ]]; then
	RUN_ADDR=""
elif [[ -n "${1:-}" ]]; then
	RUN_ADDR="$1"
fi

if [[ -z "$DIR" || ! -f "$DIR/CMakeLists.txt" ]]; then
	echo "usage: tools/recomp-build.sh <generated-dir> [address|--no-run]" >&2
	echo "  <generated-dir> must hold a recomp output (p_game_*.cpp and CMakeLists.txt)" >&2
	exit 2
fi
if [[ ! -f "$RUNTIME/x86.h" ]]; then
	echo "the toolkit runtime is not at $RUNTIME" >&2
	echo "run git submodule update --init fmtownskit, which pins the commit and applies patches/fmtownskit-mp-support.patch" >&2
	exit 2
fi

# 1. The generated CMakeLists points at a path that has never existed on this machine. Fix it in
#    place, but only the first time, so a second run does not append a duplicate.
if grep -q '/fmtownskit/runtime' "$DIR/CMakeLists.txt" && ! grep -qF "$RUNTIME" "$DIR/CMakeLists.txt"; then
	sed -i "s|set(FMT_RUNTIME .*)|set(FMT_RUNTIME $RUNTIME)|" "$DIR/CMakeLists.txt"
	echo "patched FMT_RUNTIME -> $RUNTIME"
fi

# 2. The main(). Kept in the repository rather than generated, because it is ordinary code and the
#    generator is somebody else's.
cp "$ROOT/tools/recomp-run1.cpp" "$DIR/run1.cpp"
if ! grep -q 'add_executable(run1' "$DIR/CMakeLists.txt"; then
	{
		echo ''
		echo 'add_executable(run1 run1.cpp modules.cpp)'
		echo 'target_link_libraries(run1 recomp fmt_x86)'
	} >> "$DIR/CMakeLists.txt"
	echo 'added the run1 target'
fi

# 3. Build.
cmake -S "$DIR" -B "$DIR/b" -DCMAKE_BUILD_TYPE=Release > "$DIR/cmake.log" 2>&1
cmake --build "$DIR/b" -j"$(nproc)" > "$DIR/build.log" 2>&1
echo "built $DIR/b/run1"

# 4. Run.
if [[ -n "$RUN_ADDR" ]]; then
	"$DIR/b/run1" "$RUN_ADDR"
fi
