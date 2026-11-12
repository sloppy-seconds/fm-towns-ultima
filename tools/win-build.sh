#!/usr/bin/env bash
# tools/win-build.sh - build the three Windows executables in a container, on any Linux host.
#
# WHY THIS EXISTS. tools/release-package-windows.sh cross-compiles with mingw-w64, and until this script existed the only
# machine that had ever done it was a GitHub runner: nothing here had mingw installed, so the Ultima I and III executables
# had never been built at all. A container removes that dependency, and it is honest about the thing a Windows cross build
# actually needs, which is a toolchain rather than Windows.
#
# WHAT IT DOES NOT DO. It does not run the executables. Nothing here has a Windows machine or Wine, so the claim these
# files come with is still "built, statically linked, import table clean" and not "we saw it play". The release notes say
# so in those words.
#
# USAGE
#   tools/win-build.sh                 build the image if missing, build all three executables, copy them to dist/
#   tools/win-build.sh --rebuild-image force a fresh image
#   tools/win-build.sh --keep          leave the build volume in place (it holds SDL for Windows, which is slow)
#
# The output lands in dist/ beside the Linux assets, so one directory holds what a release publishes.

set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
IMAGE=u2-win
VOLUME=u2win
REBUILD=0
while [[ $# -gt 0 ]]; do
	case "$1" in
		--rebuild-image) REBUILD=1; shift ;;
		--keep) shift ;;
		*) echo "usage: tools/win-build.sh [--rebuild-image]" >&2; exit 2 ;;
	esac
done

# SELinux is enforcing on this host, so every bind mount needs a label or the container gets Permission denied on it.
# Measured on the emulator image first and true of every image here.
if command -v getenforce >/dev/null 2>&1 && [ "$(getenforce 2>/dev/null || echo Disabled)" = "Enforcing" ]; then
	Z="z"
else
	Z=""
fi
# The label is a separate mount option, joined with a comma. Appending it to "ro" as another colon produced
# "incorrect volume format" the first time this ran, which is the sort of thing the emulator container already records.
MOUNT_OPT="ro${Z:+,$Z}"
RW_OPT="rw${Z:+,$Z}"

if [[ $REBUILD -eq 1 ]] || ! podman image exists "$IMAGE" >/dev/null 2>&1; then
	echo "building $IMAGE from container/Containerfile.win"
	podman build -q -f "$ROOT/container/Containerfile.win" -t "$IMAGE" "$ROOT/container"
fi

podman volume create "$VOLUME" >/dev/null 2>&1 || true

# The tree is copied into the volume rather than built in place, because the packager writes build directories beside its
# output and /src is mounted read-only: nothing here should land in the working tree as root-owned files.
podman run --rm -v "$ROOT:/src:$MOUNT_OPT" -v "$VOLUME:/build" "$IMAGE" bash -lc '
	set -e
	rm -rf /build/w && mkdir -p /build/w
	cd /src && tar -cf - --exclude="*.img" --exclude="*.sub" --exclude="*.hdm" --exclude="*.EXP" --exclude=build . \
		| (cd /build/w && tar -xf -)
	cd /build/w && SDL3_CACHE=/build/sdl3-win tools/release-package-windows.sh /build/dist
'

# COPYING OUT OF A VOLUME NEEDS A CONTAINER. `podman cp u2win:/build/dist/...` looks like the obvious form and fails with
# "container u2win does not exist", because cp takes a container, not a volume. So the copy is done by a container that
# mounts both the volume and the host's dist/, which is also one command instead of three.
mkdir -p "$ROOT/dist"
podman run --rm -v "$VOLUME:/build" -v "$ROOT/dist:/out:$RW_OPT" "$IMAGE" \
	sh -c 'cp -f /build/dist/fm-*-windows-x86_64.exe /out/'

for id in u1 u2 u3; do
	f="$ROOT/dist/fm-$id-windows-x86_64.exe"
	if [[ ! -f "$f" ]]; then
		echo "the build did not produce fm-$id-windows-x86_64.exe" >&2
		exit 1
	fi
	printf '%-32s %10s bytes  sha256 %s\n' "dist/fm-$id-windows-x86_64.exe" "$(stat -c %s "$f")" \
		"$(sha256sum "$f" | cut -c1-16)"
done
echo "three Windows executables in $ROOT/dist, built in $IMAGE"
