#!/usr/bin/env bash
# tools/build-emulator.sh - build the patched Tsugaru_CUI and install it into vendor/emulator.
#
# WHY THIS EXISTS. references/TOWNSEMU carries the CFG capture patch this project
# needs: CFGSTART, CFGSTOP and SAVECFG, which record a control-flow graph from the
# running machine. The released binary ./tools/vendor.sh downloads does not have
# them. The container mounts vendor/emulator into /emulator, so a build placed
# there is what the container runs, and neither the Containerfile nor
# container-run.sh needs to know anything about it.
#
# The build itself is NOT done here. references/TOWNSEMU/Containerfile is the one
# build recipe, and this script only drives it and copies the output. Duplicating
# the package list in a second place is how the two go out of step.
#
#   ./tools/build-emulator.sh            build and install
#   ./tools/build-emulator.sh --check    report which binary is installed
#
# The source is bind mounted rather than copied, matching the tmux workflow in
# that Containerfile's own header: editing src/cpu and rebuilding should not
# rebuild the environment.
#
# NOTE the :z on the mount. SELinux is enforcing on this host, and without the
# relabel the container gets Permission denied on every file under /src.

set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
SRC="$ROOT/references/TOWNSEMU"
IMAGE="localhost/tsugaru-build:latest"
OUT="$SRC/build/main_cui/Tsugaru_CUI"
DEST="$ROOT/vendor/emulator/Tsugaru_CUI"

die() { echo "build-emulator: $*" >&2; exit 1; }

# The CFG commands are text in the binary, so their presence is a cheap and
# honest check that the build is the patched one rather than a stock release.
has_cfg() {
	grep -aq 'SAVECFG' "$1" 2>/dev/null
}

if [ "${1:-}" = "--check" ]; then
	[ -x "$DEST" ] || die "no binary at $DEST (run ./tools/vendor.sh, then this script)"
	echo "installed : $DEST"
	echo "size      : $(stat -c %s "$DEST")"
	if has_cfg "$DEST"; then
		echo "CFG cmds  : present (patched build)"
	else
		echo "CFG cmds  : ABSENT (stock release, CFGSTART will not exist)"
	fi
	exit 0
fi

[ -d "$SRC" ] || die "no source at $SRC (clone Tsugaru into references/TOWNSEMU)"
[ -f "$SRC/Containerfile" ] || die "no Containerfile in $SRC"

# Build the environment image only if it is missing. It rarely changes; the
# source changes constantly, and that is what the run below recompiles.
if ! podman image exists "$IMAGE"; then
	echo '== building the Tsugaru build environment (once)'
	podman build -t tsugaru-build -f "$SRC/Containerfile" "$SRC"
fi

echo '== building Tsugaru_CUI from references/TOWNSEMU'
podman run --rm -v "$SRC:/src:z" "$IMAGE"

[ -f "$OUT" ] || die "build produced no binary at $OUT"
has_cfg "$OUT" || die "built binary has no CFG commands, so the patch is not in the source"

mkdir -p "$(dirname "$DEST")"
# Keep a copy of whatever was there, so a stock binary is recoverable without a
# fresh download. Only the first time, so repeated runs do not churn the name.
if [ -f "$DEST" ] && ! has_cfg "$DEST" && [ ! -f "$DEST.stock" ]; then
	cp "$DEST" "$DEST.stock"
	echo "kept the previous stock binary as $DEST.stock"
fi

install -m 755 "$OUT" "$DEST"

echo
echo "installed $DEST"
echo "size      : $(stat -c %s "$DEST")"
echo "CFG cmds  : present"
echo
echo 'The container mounts vendor/emulator into /emulator, so restart it to pick this up:'
echo '  ./tools/container-run.sh'
