#!/usr/bin/env bash
# tools/hc17-harness.sh - drive the Fujitsu High C V1.7 kit from the Tsugaru console.
#
# HOW THE GUI IS BYPASSED. The compiler CD's AUTOEXEC.BAT launches TownsOS with one identifiable line,
# "CONTROL -v -p -callbuf 32", and ends with a teardown that reboots. Patching three lines IN PLACE at the same
# length, so no ISO sector moves, makes the CD boot to a DOS prompt instead:
#
#   CONTROL -v -p -callbuf 32   ->  REM
#   \T_TOOL\DELVDISK            ->  REM
#   \T_TOOL\REIPL               ->  REM
#
# Verified: the machine reaches "Entering Interactive Mode." and a Q:\> prompt with no pointer input at all.
#
# WHY THAT MATTERS. Every earlier attempt needed a mouse, and the FM Towns desktop draws inside a 640x496 window
# at screen position (2,40) rather than across a 1024x768 capture, so every synthetic click was aimed at the wrong
# pixel. A text prompt removes coordinates from the problem: the console TYPE command writes to the keyboard buffer
# and needs no geometry.
#
# WHAT IS NOT USED. The proposed -FASTMODE, -AUTOTYPE, -QUITAT and -HOSTDIR flags do not exist in this Tsugaru
# build. HELP lists 282 commands and none of them is among those four. Host file transfer is XMODEMTOVM and
# XMODEMFROMVM, which are handshakes requiring a receiver inside the guest.
#
# Usage:
#   tools/hc17-harness.sh              probe the prompt and report what is available
#   tools/hc17-harness.sh --shot NAME  capture a screenshot of the guest

set -euo pipefail

API="${API:-http://127.0.0.1:8088}"

# TYPE writes characters into the guest keyboard buffer. A carriage return, not a line feed, submits a DOS command.
console() {
	curl -s -m 25 -X POST "$API/api/cmd" \
		-H 'Content-Type: application/json' \
		--data-binary "$1" >/dev/null
}

send() {
	local payload
	payload=$(printf '{"line":"TYPE %s\\r"}' "$1")
	console "$payload"
	sleep "${2:-3}"
}

shot() {
	local payload
	payload=$(printf '{"name":"hc17-%s"}' "$1")
	curl -s -m 20 -X POST "$API/api/shot" -H 'Content-Type: application/json' --data-binary "$payload" >/dev/null
	echo "  screenshot saves/analysis/hc17-$1.png"
}

case "${1:-probe}" in
probe)
	echo "[1] prompt check"
	send "" 2
	shot prompt

	echo "[2] does the compiler exist"
	send "DIR Q:\\HC386\\BIN\\HC386.EXE" 4
	shot dir

	echo "[3] writable drive check"
	send "Q:\\HC386\\BIN\\HC386.EXE" 8
	shot run

	echo "[4] report"
	echo "  Read the three screenshots. Step 2 confirms the compiler is present,"
	echo "  step 3 shows whether it runs from the read-only CD."
	;;
--shot)
	shot "${2:-manual}"
	;;
*)
	echo "usage: $0 [probe|--shot NAME]" >&2
	exit 2
	;;
esac
