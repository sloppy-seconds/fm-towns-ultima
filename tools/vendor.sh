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
TSUGARU_URL="https://github.com/captainys/TOWNSEMU/releases/download/${TSUGARU_TAG}/ubuntu_binary_latest.zip"
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
	if [ ! -x "$EMU/Tsugaru_CUI" ]; then
		note '  contents of vendor/emulator:'
		ls -la "$EMU" | sed 's/^/    /'
		die 'Tsugaru_CUI not found after unpacking'
	fi
	note "  Tsugaru_CUI: $(stat -c%s "$EMU/Tsugaru_CUI") bytes"
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
