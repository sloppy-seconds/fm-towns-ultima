#!/usr/bin/env bash
# tools/sdl-from-source.sh - build SDL3 as a static library from the pinned upstream release.
#
# WHY THIS EXISTS. A release binary that needs `apt install libsdl3-0` is not portable, and the package does not
# exist at all on some distros or distro versions (Ubuntu 24.04 has no libsdl3-dev). So the release build compiles
# SDL from source and links the archive, and the only SDL left in the binary is SDL's own code. What SDL still
# loads at runtime with dlopen (libX11, libasound, libpipewire, libpulse, libwayland, libGL, libudev) is a stock
# desktop's own library set, present on any of them, and absent ones are skipped rather than fatal because SDL
# probes for them.
#
# The same mechanism is what 9g will reuse to cross-compile: the only change for a cross build is the toolchain
# file and the target triple, so the pin, the download, the hash check and the option list all stay in one place.
#
# WHAT IS PINNED, AND WHY THAT IS ENOUGH. tools/sdl-pin.txt holds version, sha256 and byte size of the upstream
# release tarball. The hash is checked before extraction, so a silent swap of the artefact is a hard failure rather
# than a different SDL in the release. `--check` re-verifies a cached download against the pin without building.
#
# USAGE
#   tools/sdl-from-source.sh                    build if needed, print the install prefix
#   tools/sdl-from-source.sh --print-prefix     print the prefix, build only if it is missing
#   tools/sdl-from-source.sh --check            verify the pin and the built tree, build nothing
#   tools/sdl-from-source.sh --force            rebuild even if the prefix looks current
#   tools/sdl-from-source.sh --prefix DIR       install elsewhere (default build/sdl3/prefix)
#   SDL3_CACHE=DIR                              where the tarball and source go (default build/sdl3)
#
# The prefix is on stdout and everything else is on stderr, so `P=$(tools/sdl-from-source.sh)` works.

set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
PIN="$ROOT/tools/sdl-pin.txt"
CACHE="${SDL3_CACHE:-$ROOT/build/sdl3}"
PREFIX="$CACHE/prefix"
MODE="build"

while [[ $# -gt 0 ]]; do
	case "$1" in
	--print-prefix) MODE="print" ;;
	--check) MODE="check" ;;
	--force) MODE="force" ;;
	--prefix)
		shift
		PREFIX="${1:?--prefix needs a directory}"
		;;
	-h | --help)
		sed -n '2,30p' "${BASH_SOURCE[0]}" | sed 's/^# \{0,1\}//'
		exit 0
		;;
	*)
		echo "unknown argument: $1" >&2
		exit 2
		;;
	esac
	shift
done

if [[ ! -f "$PIN" ]]; then
	echo "no pin file at $PIN" >&2
	exit 2
fi
read -r SDL_VERSION SDL_SHA256 SDL_BYTES < <(awk 'NR==2 {print $1, $2, $3}' "$PIN")
if [[ -z "${SDL_VERSION:-}" || -z "${SDL_SHA256:-}" ]]; then
	echo "pin file $PIN has no data row (expected: version, sha256, bytes)" >&2
	exit 2
fi

TARBALL="$CACHE/SDL3-$SDL_VERSION.tar.gz"
SRC="$CACHE/SDL3-$SDL_VERSION"
URL="https://github.com/libsdl-org/SDL/releases/download/release-$SDL_VERSION/SDL3-$SDL_VERSION.tar.gz"
STAMP="$PREFIX/.sdl-from-source"

log() { echo "[sdl-from-source] $*" >&2; }

verify_tarball() {
	[[ -f "$TARBALL" ]] || return 1
	local got size
	got="$(sha256sum "$TARBALL" | cut -d' ' -f1)"
	size="$(stat -c %s "$TARBALL")"
	if [[ "$got" != "$SDL_SHA256" ]]; then
		log "sha256 mismatch on $TARBALL"
		log "  expected $SDL_SHA256"
		log "  actual   $got"
		return 1
	fi
	if [[ -n "$SDL_BYTES" && "$size" != "$SDL_BYTES" ]]; then
		log "byte size mismatch on $TARBALL: expected $SDL_BYTES, got $size"
		return 1
	fi
	return 0
}

artefacts_ok() {
	[[ -f "$PREFIX/lib/libSDL3.a" && -f "$PREFIX/lib/cmake/SDL3/SDL3Config.cmake" && -f "$PREFIX/LICENSE.SDL3" ]]
}

prefix_is_current() {
	artefacts_ok || return 1
	[[ -f "$STAMP" && "$(cat "$STAMP")" == "$SDL_VERSION $SDL_SHA256" ]] || return 1
	return 0
}

case "$MODE" in
check)
	verify_tarball || {
		echo "the cached tarball does not match the pin (or is absent), and --check does not download" >&2
		exit 1
	}
	if prefix_is_current; then
		log "prefix is current for SDL $SDL_VERSION"
	else
		log "tarball matches the pin but no built prefix at $PREFIX (that is not a failure for --check)"
	fi
	echo "pin ok    $SDL_VERSION sha256 $SDL_SHA256"
	exit 0
	;;
print)
	if prefix_is_current; then
		echo "$PREFIX"
		exit 0
	fi
	;;
esac

if prefix_is_current && [[ "$MODE" != "force" ]]; then
	log "SDL $SDL_VERSION already built at $PREFIX (--force to rebuild)"
	echo "$PREFIX"
	exit 0
fi

for tool in curl tar sha256sum cmake make; do
	command -v "$tool" >/dev/null || { echo "missing tool: $tool" >&2 && exit 2; }
done

mkdir -p "$CACHE"
if ! verify_tarball; then
	if [[ -f "$TARBALL" ]]; then
		rm -f "$TARBALL"
	fi
	log "downloading $URL"
	curl -fsSL --retry 3 -o "$TARBALL.part" "$URL"
	mv "$TARBALL.part" "$TARBALL"
	verify_tarball || {
		echo "the download does not match the pin. Refusing to build." >&2
		exit 1
	}
fi
log "tarball verified  sha256 $SDL_SHA256  $SDL_BYTES bytes"

if [[ ! -f "$SRC/include/SDL3/SDL.h" ]]; then
	log "extracting to $SRC"
	rm -rf "$SRC"
	mkdir -p "$SRC"
	tar -xzf "$TARBALL" -C "$CACHE"
fi

# The option list, and the reason for each group.
#
#   static only            one archive, no libSDL3.so.0 in the binary's NEEDED list. That is the whole point.
#   *_SHARED=ON (default)  SDL dlopens libX11, libasound, libpipewire, libpulse, libwayland-client and libudev at
#                          runtime instead of recording them as NEEDED. A stock desktop has them, and a desktop
#                          missing one loses that backend rather than losing the program.
#   video and audio on     X11 and Wayland for the window, ALSA, PulseAudio and PipeWire for sound. These are what
#                          a 1990 port actually reaches for, and they are the set the release README promises.
#   the rest off           JACK, OSS, sndio, NAS, KMS/DRM and libusb HIDAPI each want their own headers at build
#                          time and none of them is on the path a desktop user takes. Off keeps the build honest
#                          about what it needs.
#   no tests, no examples  they are not this project's build to make.
log "configuring (this takes a few minutes the first time)"
BUILD="$CACHE/build"
cmake -S "$SRC" -B "$BUILD" -DCMAKE_BUILD_TYPE=Release \
	-DCMAKE_INSTALL_PREFIX="$PREFIX" \
	-DSDL_SHARED=OFF -DSDL_STATIC=ON \
	-DSDL_TESTS=OFF -DSDL_EXAMPLES=OFF -DSDL_INSTALL=ON \
	-DSDL_X11=ON -DSDL_WAYLAND=ON \
	-DSDL_ALSA=ON -DSDL_PULSEAUDIO=ON -DSDL_PIPEWIRE=ON \
	-DSDL_JACK=OFF -DSDL_OSS=OFF -DSDL_SNDIO=OFF \
	-DSDL_KMSDRM=OFF -DSDL_HIDAPI_LIBUSB=OFF -DSDL_LIBUDEV=ON \
	-DSDL_WAYLAND_LIBDECOR=OFF \
	-DSDL_VULKAN=OFF -DSDL_RENDER_VULKAN=OFF \
	>"$CACHE/configure.log" 2>&1 || {
	echo "SDL configure failed. Last lines of $CACHE/configure.log:" >&2
	tail -30 "$CACHE/configure.log" >&2
	exit 1
}
log "backends the build decided on:"
grep -E "^(SDL_(X11|X11_XRANDR|X11_XCURSOR|WAYLAND|ALSA|PULSEAUDIO|PIPEWIRE|OPENGL|RENDER_OPENGL|RENDER_GPU_VULKAN|JOYSTICK_HIDAPI|LIBUDEV)):BOOL" \
	"$BUILD/CMakeCache.txt" | sed 's/^/  /' >&2 || true

cmake --build "$BUILD" -j"$(nproc)" >"$CACHE/build.log" 2>&1 || {
	echo "SDL build failed. Last lines of $CACHE/build.log:" >&2
	tail -30 "$CACHE/build.log" >&2
	exit 1
}
cmake --install "$BUILD" >"$CACHE/install.log" 2>&1 || {
	echo "SDL install failed. Last lines of $CACHE/install.log:" >&2
	tail -30 "$CACHE/install.log" >&2
	exit 1
}

# The licence travels with the prefix, because the thing that consumes it (the release archive) should not have to
# know where the source was unpacked. SDL's install puts it under share/licenses; the source copy is the fallback.
if [[ -f "$PREFIX/share/licenses/SDL3/LICENSE.txt" ]]; then
	cp "$PREFIX/share/licenses/SDL3/LICENSE.txt" "$PREFIX/LICENSE.SDL3"
else
	cp "$SRC/LICENSE.txt" "$PREFIX/LICENSE.SDL3"
fi

artefacts_ok || {
	echo "the install did not produce a usable prefix at $PREFIX" >&2
	exit 1
}
echo "$SDL_VERSION $SDL_SHA256" >"$STAMP"

# What the prefix holds, printed rather than assumed, because "static" is a claim about the artefacts and the
# artefacts are the thing worth checking. A static SDL3 build compiles the render backends in rather than
# shipping them as loadable modules, and if that ever changes this line is where it shows up.
log "built      SDL $SDL_VERSION at $PREFIX"
log "  libSDL3.a  $(stat -c %s "$PREFIX/lib/libSDL3.a") bytes"
if compgen -G "$PREFIX/lib/SDL3/*.so" >/dev/null; then
	log "  modules    $(ls "$PREFIX"/lib/SDL3/*.so | xargs -n1 basename | tr '\n' ' ')"
else
	log "  modules    none (a static build compiles the render backends in)"
fi
echo "$PREFIX"
