#!/usr/bin/env bash
# tools/decode-setup.sh - create the venv that tools/decode.js needs.
#
# WHY A VENV AND NOT A SYSTEM PACKAGE. The Capstone C library is already installed as an
# rpm on this machine (`capstone-5.0.6-4.fc44.x86_64`), but the Python binding is not, and
# the whole point of tools/decode.js is operand TYPE: whether a hex literal is a memory
# reference or an immediate. The Node binding (capstone-wasm) exposes only mnemonic and
# opStr with no operand types, so it cannot answer that question, and the Python binding
# can. So the decoder is a small Python worker behind a Node module.
#
# WHY NOT ONE SHARED SYSTEM INSTALL. `tools/verify.js` is the reproducibility gate a
# stranger runs after unzipping the disc, and it must stay Node-only. Keeping Capstone in
# a venv keeps the investigation's dependency out of the verification path's requirements.
#
# The venv lives at tools/.venv and is gitignored. tools/decode-requirements.txt is the
# source of truth for versions.
#
# Usage:
#   ./tools/decode-setup.sh          create or update the venv
#   ./tools/decode-setup.sh --check  report status, change nothing

set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
VENV="$ROOT/tools/.venv"
REQ="$ROOT/tools/decode-requirements.txt"

check_only=0
[ "${1:-}" = "--check" ] && check_only=1

if [ ! -f "$REQ" ]; then
	echo "missing $REQ" >&2
	exit 1
fi

if [ "$check_only" = 1 ]; then
	if [ ! -x "$VENV/bin/python" ]; then
		echo "NOT SET UP: $VENV does not exist. Run ./tools/decode-setup.sh"
		exit 1
	fi
	if "$VENV/bin/python" -c 'import capstone' 2>/dev/null; then
		echo "ok: $("$VENV/bin/python" -c 'import capstone; print("capstone", capstone.__version__)')"
		exit 0
	fi
	echo "BROKEN: venv exists but capstone is not importable"
	exit 1
fi

if [ ! -x "$VENV/bin/python" ]; then
	echo "creating $VENV"
	python3 -m venv "$VENV"
fi

echo "installing $(cat "$REQ")"
"$VENV/bin/pip" install --quiet --disable-pip-version-check -r "$REQ"

"$VENV/bin/python" -c 'import capstone; print("ok: capstone", capstone.__version__)'
echo "tools/decode.js will use $VENV/bin/python3"
