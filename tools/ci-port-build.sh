#!/usr/bin/env bash
# tools/ci-port-build.sh - prove the port still links, with no game file anywhere in the pipeline.
#
# WHY THIS EXISTS. The port's module is the recompiler's output over ENCHANT.EXP, so on a fresh clone RECOMP_DIR
# is empty and there is nothing to link. That makes "the port builds" look uncheckable, and it is not: what can be
# checked is whether port/main.cpp, the kit's runtime and the recompiler's emitted module still compile and link
# together. A synthetic image supplies the module without supplying the game.
#
# WHAT IT PROVES. That the three move together: a recompiler that emits something the port can no longer link
# against, or a kit runtime whose interface the port has outgrown, fails here, on every push, with no copyrighted
# byte involved.
#
# WHAT IT DOES NOT PROVE. That the port plays the game. That needs the disc, and a workflow that faked it would be
# testing a different program. This script refuses to run when ENCHANT.EXP is present, so it cannot be mistaken
# for the real build, and the real build is tools/port-build.sh.
#
# USAGE
#   tools/ci-port-build.sh [outdir]     default outdir is build/ci
#
# Run it inside container/Containerfile.x, which is Debian trixie because the port links SDL3 and Ubuntu 24.04
# has no libsdl3-dev at all. That is also why CI runs it in that image rather than on the runner.

set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
OUT="${1:-$ROOT/build/ci}"
SYN="$OUT/syn.bin"

if [[ ! -f "$ROOT/fmtownskit/runtime/towns.cmake" ]]; then
	echo "the toolkit is not at $ROOT/fmtownskit. Run: git submodule update --init fmtownskit" >&2
	exit 2
fi
if [[ -f "$ROOT/ENCHANT.EXP" ]]; then
	echo "ENCHANT.EXP is present, so this is not the no-game proof. Use tools/port-build.sh for the real build." >&2
	exit 2
fi

mkdir -p "$OUT"

# 4 KB of zero fill. A zero byte decodes as `add [eax],al`, so the recompiler walks a real instruction stream and
# emits a real module with real function bodies, and none of it is the game. The seed at 0x0 is the entry, and
# 0x0c is the code selector this project measured live on the machine (docs/live-session.md).
head -c 4096 /dev/zero > "$SYN"
echo "synthetic   $SYN (4096 bytes of zero fill)"

# Two modules from the same zero fill, because port/modules.cpp names both: the game's code selector and TBIOS's.
# One module was enough until the port started carrying the native shadows, and then the link failed on g_mod_p_tbios,
# which is a fact about the module list rather than about the thing this check exists to prove.
(cd "$ROOT" && PYTHONPATH="$ROOT${PYTHONPATH:+:$PYTHONPATH}" python3 -m fmtownskit.recomp \
	--out "$OUT/recomp" --raw "game=$SYN@0xc+0x0" --raw "tbios=$SYN@0x110+0x0") | tail -2

for f in modules.cpp p_game_000.cpp; do
	if [[ ! -f "$OUT/recomp/$f" ]]; then
		echo "the recompiler produced no $f" >&2
		exit 1
	fi
done
echo "module      $(ls "$OUT/recomp"/p_*.cpp | wc -l) source file(s), modules.cpp present"

# The same two cache variables a human passes, for the same reason port-build.sh passes them: RECOMP_DIR has no
# default worth guessing, and FMT_RUNTIME is cached, so a stale build tree keeps pointing at an old path.
cmake -S "$ROOT/port" -B "$OUT/b" -DCMAKE_BUILD_TYPE=Release \
	-DRECOMP_DIR="$OUT/recomp" -DFMT_RUNTIME="$ROOT/fmtownskit/runtime" \
	-DU2_SYNTHETIC_MODULE=ON > "$OUT/cmake.log" 2>&1 || {
	echo "cmake configure failed, last lines of $OUT/cmake.log:" >&2
	tail -20 "$OUT/cmake.log" >&2
	exit 1
}
cmake --build "$OUT/b" -j"$(nproc)" > "$OUT/build.log" 2>&1 || {
	echo "build failed, last lines of $OUT/build.log:" >&2
	tail -30 "$OUT/build.log" >&2
	exit 1
}
if [[ ! -f "$OUT/b/u2port" ]]; then
	echo "no u2port at $OUT/b/u2port" >&2
	exit 1
fi
echo "linked      $OUT/b/u2port ($(stat -c %s "$OUT/b/u2port") bytes)"

# THE SAME MODULE, BUILT THE WAY A SECOND TITLE BUILDS IT. `-DU2_FOREIGN_MODULE=ON -DPORT_TARGET=u3port` is what
# tools/game-build.sh passes: the option compiles port/native_shadows.cpp with an empty manifest, because every entry
# in the real one names a function of ENCHANT.EXP and a module from another title has none of them, and the target
# name is what keeps two binaries from calling themselves the same thing. The first is the gate doing its job, and
# this step proves the second does its own. A link check and nothing more: no game is played, no disc is read.
cmake -S "$ROOT/port" -B "$OUT/b-foreign" -DCMAKE_BUILD_TYPE=Release \
	-DRECOMP_DIR="$OUT/recomp" -DFMT_RUNTIME="$ROOT/fmtownskit/runtime" \
	-DU2_FOREIGN_MODULE=ON -DPORT_TARGET=u3port > "$OUT/cmake-foreign.log" 2>&1 || {
	echo "the foreign-module configure failed, last lines of $OUT/cmake-foreign.log:" >&2
	tail -20 "$OUT/cmake-foreign.log" >&2
	exit 1
}
cmake --build "$OUT/b-foreign" -j"$(nproc)" > "$OUT/build-foreign.log" 2>&1 || {
	echo "the foreign-module build failed, last lines of $OUT/build-foreign.log:" >&2
	tail -30 "$OUT/build-foreign.log" >&2
	exit 1
}
if [[ ! -x "$OUT/b-foreign/u3port" ]]; then
	echo "no u3port at $OUT/b-foreign/u3port, so -DPORT_TARGET did not reach the target" >&2
	exit 1
fi
echo "linked      $OUT/b-foreign/u3port, no native shadows, named after its title (a second title's configuration)"

# AND A TITLE'S BUILD MUST REFUSE TO RUN WITHOUT ITS OWN BINARY. tools/game-build.sh extracts the title's `.EXP`
# from the disc and checks that the entry field lands on the start-up stub. With no disc and no binary there is
# nothing to check, so it must stop with a message rather than build a module from whatever is lying around. Named
# by a title id that does not exist, which is the state a fresh clone is in for every title but Ultima II.
if "$ROOT/tools/game-build.sh" no-such-title --no-run --quiet > "$OUT/title-refusal.log" 2>&1; then
	echo "tools/game-build.sh exited 0 for a title that does not exist, so it built something out of nothing" >&2
	exit 1
fi
echo "refused     tools/game-build.sh for an unknown title, as it must"

echo "the port links with no game present, in both configurations. It does not play, and nothing in CI can make it play."
