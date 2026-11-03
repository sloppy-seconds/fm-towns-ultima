#!/usr/bin/env bash
# debug.sh - run the port with its instruments on, and keep everything it says in a log.
#
# WHY THIS EXISTS. Every instrument in this port is an environment variable, and the port strips all of them before it
# reads them unless the run is started with --dev. So "set U2_TRACE_INT=1 and play" measures nothing at all, silently,
# and the report that comes back is "the bug did not reproduce". This script sets the variables and passes --dev in the
# same breath, so the flag and the variable cannot come apart.
#
# WHAT IT DOES. Finds the newest binary beside itself, turns on the interrupt trace and the PCM diagnostics, tees every
# line to a timestamped log, and prints the log's path plus a short summary when you quit. Quit with Ctrl-Q or by closing
# the window. The summary is the part worth sending back.
#
# WHAT TO DO WHILE IT RUNS. Play normally. When the sound misbehaves, let it misbehave for a second or two so the
# instrument has something to count, then carry on, then quit. Nothing has to be timed.
#
# USAGE
#   ./debug.sh                            play with the instruments on; log is ./u2-debug-<timestamp>.log
#   ./debug.sh --control=0.0.0.0:7777     the same, plus a socket another machine can attach to
#   ./debug.sh --frames=9000              headless, for a scripted run
#   ./debug.sh --graphics=none            no window, which is for scripts and not for playing
#   LOG=/tmp/foo.log ./debug.sh           choose the log path
#
# The extra arguments are passed through to the port, so anything it accepts can be added here.
set -uo pipefail

HERE="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# The binary, newest first: a debug build beside the script beats a release one, and a built tree beats nothing.
BIN=""
for cand in "$HERE/u2port-debug" "$HERE/u2port" "$HERE/build/port/b/u2port"; do
	if [[ -x "$cand" ]]; then
		BIN="$cand"
		break
	fi
done
if [[ -z "$BIN" ]]; then
	echo "debug.sh: no u2port beside $HERE" >&2
	echo "  expected one of: u2port-debug, u2port, build/port/b/u2port" >&2
	exit 2
fi

LOG="${LOG:-$HERE/u2-debug-$(date +%Y%m%d-%H%M%S).log}"

# The instruments. U2_TRACE_INT is the one that matters for sound and for the int 93h CD path: it turns on the PCM wrap
# counter, the mask and on/off register log, the int 93h register dump and the per-second sound-port census.
export U2_TRACE_INT=1

echo "debug.sh  binary  $BIN"
echo "debug.sh  log     $LOG"
echo "debug.sh  play; when the sound misbehaves let it run a second, then quit with Ctrl-Q or by closing the window"
echo

"$BIN" --dev "$@" 2>&1 | tee "$LOG"
status=${PIPESTATUS[0]}

echo
echo "debug.sh  exit    $status"
echo "debug.sh  log     $LOG"
if [[ -s "$LOG" ]]; then
	echo "debug.sh  what the log caught:"
	printf '  %-16s %s\n' \
		"PCM mask" "$(grep -c 'PCM mask' "$LOG")" \
		"PCM on/off" "$(grep -c 'PCM on/off' "$LOG")" \
		"PCM ch wraps" "$(grep -c 'PCM ch' "$LOG")" \
		"int 93h" "$(grep -c 'int 93h' "$LOG")" \
		"sound census" "$(grep -cE '^  FM [0-9]+s' "$LOG")"
	if grep -q 'PCM ch' "$LOG"; then
		echo "debug.sh  a channel wrapped, which is the looping sound: the line above names the channel"
	elif [[ "$(grep -c 'PCM on/off' "$LOG")" -gt 0 ]]; then
		echo "debug.sh  the chip was used and no channel wrapped, so no looping was caught in this run"
	else
		echo "debug.sh  the chip was never touched, so this run did not reach the sound that misbehaves"
	fi
else
	echo "debug.sh  the log is empty, so the port said nothing at all: check that it started" >&2
fi
