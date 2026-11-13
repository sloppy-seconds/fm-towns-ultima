#!/usr/bin/env bash
# tools/format.sh - format port/ with the clang-format the CI gate uses, wherever you are.
#
# WHY. tools/cstyle.js runs clang-format in --dry-run --Werror mode and skips when the tool is absent, because this
# repository promises every check runs from the zip alone. On the machines this project is developed on, clang-format is
# not installed, so the style gate only ever runs in CI: measured 2026-11-13, it caught two commits on main that were
# green locally. Worse, the versions disagree about what is formatted, so "I ran clang-format" is not the same claim as
# "I ran the same clang-format as CI". The workflow pins 18 and this script uses 18, in a container when the host has
# none, so the answer is the same everywhere.
#
#   tools/format.sh --check     report violations, change nothing (what the gate does)
#   tools/format.sh             rewrite port/*.cpp and port/*.h
#
# A host with clang-format-18 installed is used directly. Otherwise podman runs ubuntu:24.04, which ships 18, and the
# tree is mounted read-write for the rewrite case only.
set -euo pipefail
ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ROOT"

MODE=format
case "${1:-}" in
--check) MODE=check ;;
"") ;;
*)
	echo "usage: tools/format.sh [--check]" >&2
	exit 2
	;;
esac

SOURCES=$(ls port/*.cpp port/*.h)
ARGS=(--dry-run --Werror $SOURCES)
[[ $MODE == format ]] && ARGS=(-i $SOURCES)

if command -v clang-format-18 >/dev/null 2>&1; then
	exec clang-format-18 "${ARGS[@]}"
fi
if command -v clang-format >/dev/null 2>&1 && clang-format --version | grep -q "version 18"; then
	exec clang-format "${ARGS[@]}"
fi
echo "no clang-format 18 on this host, using the container (the version CI pins)" >&2
podman run --rm -v "$ROOT:/work:z" -w /work ubuntu:24.04 bash -lc "
set -e
apt-get update -qq >/dev/null 2>&1
apt-get install -y -qq --no-install-recommends clang-format-18 >/dev/null 2>&1
clang-format-18 ${ARGS[*]}
"
