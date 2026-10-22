#!/usr/bin/env bash
# tools/vendor.sh - download the emulator and ROMs this project needs.
#
# Everything lands under vendor/ which is gitignored. Nothing copyrighted is
# ever committed. Re-running is safe: existing files are skipped unless --force.
#
#   ./tools/vendor.sh              fetch emulator + ROMs
#   ./tools/vendor.sh --emulator   emulator only
#   ./tools/vendor.sh --roms       ROMs only
#   ./tools/vendor.sh --force      re-download and overwrite
#
# Resulting layout:
#   vendor/emulator/Tsugaru_CUI
#   vendor/emulator/Tsugaru_GUI
#   vendor/roms/FMT_SYS.ROM  FMT_DOS.ROM  ...
#
# Why vendor/ rather than emulator/: the emulator and the ROMs are third-party
# binaries. Keeping them out of the repo tree makes the copyright boundary
# obvious, and .gitignore covers the whole directory.

set -euo pipefail

HERE="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
ROOT="$(cd -- "$HERE/.." && pwd)"
VENDOR="$ROOT/vendor"
EMU="$VENDOR/emulator"
ROMS="$VENDOR/roms"
CACHE="$VENDOR/downloads"

# Pinned so the build is reproducible. Bump deliberately, and note it in
# FINDINGS.md, because a different emulator build is a different instrument.
TSUGARU_TAG="${TSUGARU_TAG:-v20260522}"

# Tsugaru publishes builds for all three desktop platforms, so this script works
# anywhere the host can unzip a binary. Only the download differs. Detection is
# by uname, overridable with TSUGARU_PLATFORM if it guesses wrong.
case "$(uname -s 2>/dev/null)" in
	Darwin) DETECTED="macos" ;;
	MINGW*|MSYS*|CYGWIN*|Windows_NT) DETECTED="windows" ;;
	*) DETECTED="ubuntu" ;;
esac
TSUGARU_PLATFORM="${TSUGARU_PLATFORM:-$DETECTED}"

TSUGARU_URL="https://github.com/captainys/TOWNSEMU/releases/download/${TSUGARU_TAG}/${TSUGARU_PLATFORM}_binary_latest.zip"
ROMS_URL="${ROMS_URL:-https://ysflight.in.coocan.jp/FM/towns/FreeTOWNS/ROMS.zip}"

WANT_EMU=0
WANT_ROMS=0
FORCE=0
for a in "$@"; do
	case "$a" in
		--emulator) WANT_EMU=1 ;;
		--roms) WANT_ROMS=1 ;;
		--force) FORCE=1 ;;
		-h|--help)
			sed -n '2,20p' "${BASH_SOURCE[0]}" | sed 's/^# \{0,1\}//'
			exit 0 ;;
		*) echo "unknown option: $a" >&2; exit 1 ;;
	esac
done
[ "$WANT_EMU" -eq 0 ] && [ "$WANT_ROMS" -eq 0 ] && { WANT_EMU=1; WANT_ROMS=1; }

die() { printf 'error: %s\n' "$*" >&2; exit 1; }
note() { printf '%s\n' "$*"; }

case "$TSUGARU_PLATFORM" in
	ubuntu|macos|windows) ;;
	*) die "TSUGARU_PLATFORM must be ubuntu, macos or windows, got: $TSUGARU_PLATFORM" ;;
esac

for t in curl unzip; do
	command -v "$t" >/dev/null || die "$t is required"
done

mkdir -p "$EMU" "$ROMS" "$CACHE"

fetch() {
	local url="$1" dest="$2" label="$3"
	if [ -s "$dest" ] && [ "$FORCE" -eq 0 ]; then
		note "$label: already present ($(du -h "$dest" | cut -f1)), skipping"
		return 0
	fi
	note "$label: downloading"
	note "  $url"
	if ! curl -fL --retry 3 --retry-delay 2 --connect-timeout 30 \
		-o "$dest.part" "$url"; then
		rm -f "$dest.part"
		die "download failed: $url"
	fi
	mv "$dest.part" "$dest"
	note "  $(du -h "$dest" | cut -f1) -> $dest"
}

# --- emulator --------------------------------------------------------------

if [ "$WANT_EMU" -eq 1 ]; then
	note ''
	note '== Tsugaru emulator ('"$TSUGARU_TAG"') =='
	ZIP="$CACHE/tsugaru-${TSUGARU_TAG}.zip"
	fetch "$TSUGARU_URL" "$ZIP" 'tsugaru'
	if [ ! -x "$EMU/Tsugaru_CUI" ] || [ "$FORCE" -eq 1 ]; then
		unzip -o -q "$ZIP" -d "$EMU" || die "unzip failed"
		chmod +x "$EMU"/Tsugaru_* 2>/dev/null || true
		note '  unpacked to vendor/emulator/'
	else
		note '  already unpacked'
	fi
	note "  platform: $TSUGARU_PLATFORM"
	# Executable names differ per platform (Tsugaru_CUI, Tsugaru_CUI.exe, and
	# the app bundle on macOS), so check for any Tsugaru binary rather than one.
	EMU_BIN=""
	for cand in "$EMU/Tsugaru_CUI" "$EMU/Tsugaru_CUI.exe" "$EMU/Tsugaru_GUI" "$EMU/Tsugaru_GUI.exe"; do
		[ -f "$cand" ] && { EMU_BIN="$cand"; break; }
	done
	if [ -z "$EMU_BIN" ]; then
		note '  contents of vendor/emulator:'
		ls -la "$EMU" | sed 's/^/    /'
		die "no Tsugaru binary found after unpacking (platform $TSUGARU_PLATFORM)"
	fi
	note "  found: $(basename "$EMU_BIN") ($(stat -c%s "$EMU_BIN" 2>/dev/null || stat -f%z "$EMU_BIN") bytes)"
fi

# --- ROMs ------------------------------------------------------------------

if [ "$WANT_ROMS" -eq 1 ]; then
	note ''
	note '== FreeTowns ROM set (free, copyright-clean replacements) =='
	ZIP="$CACHE/ROMS.zip"
	fetch "$ROMS_URL" "$ZIP" 'roms'
	if [ -z "$(ls -A "$ROMS" 2>/dev/null)" ] || [ "$FORCE" -eq 1 ]; then
		unzip -o -q "$ZIP" -d "$ROMS" || die "unzip failed"
		note '  unpacked to vendor/roms/'
	fi
	note '  ROM files:'
	ls -1 "$ROMS" | sed 's/^/    /'
	# Tsugaru wants FMT_SYS and FMT_DOS at minimum.
	for need in FMT_SYS.ROM FMT_DOS.ROM; do
		[ -f "$ROMS/$need" ] || note "  WARNING: $need missing, boot may fail"
	done
fi

# --- summary ---------------------------------------------------------------

note ''
note '== done =='
note "emulator : $EMU"
note "roms     : $ROMS"
note ''
note 'Next: ./tools/debug-session.sh    start U2 with the debugger attached'
note 'Nothing here is committed. vendor/ is gitignored.'
