#!/usr/bin/env bash
# debug.sh - run the port with its instruments on, and keep everything it says in a log.
#
# WHY THIS EXISTS. Every instrument in this port is an environment variable, and the port strips all of them before it
# reads them unless the run is started with --dev. So "set U2_TRACE_INT=1 and play" measures nothing at all, silently,
# and the report that comes back is "the bug did not reproduce". This script sets the variables and passes --dev in the
# same breath, so the flag and the variable cannot come apart.
#
# WHAT IT DOES. Finds the newest binary beside itself, turns on the interrupt trace, the PCM diagnostics and the far-call
# trace, tees every line to a timestamped log, and prints the log's path plus a short summary when you quit. Quit with
# Ctrl-Q or by closing the window. The summary is the part worth sending back.
#
# WHY THE FAR-CALL TRACE IS IN HERE. The game does not reach the sound layer with int 90h. It does `lcall fs:[0x80]`, which
# lands in the dispatcher at 0110:000110B0, and the service number is in AH. Only that trace shows which service was asked
# for and with what arguments, so the repeat question (the original plays a moongate sound three times, this port once) is
# answered from these lines rather than from the chip. Enabled by default because typing variables at a remote console is
# not something anyone should have to do.
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

# The binary, newest first: a debug build beside the script beats a release one, and a built tree beats nothing. The
# executable is named after its title (docs/port-structure.md), so `u2` comes first and `u2port` stays because that is
# what every build before the rename called itself. Without this, a tree holding the new binary and an old one runs the
# old one and reports the wrong thing, which is exactly the failure this block was written to prevent.
BIN=""
for cand in "$HERE/u2port-debug" "$HERE/u2" "$HERE/u2port" "$HERE/build/port/b/u2" "$HERE/build/port/b/u2port"; do
	if [[ -x "$cand" ]]; then
		BIN="$cand"
		break
	fi
done
if [[ -z "$BIN" ]]; then
	echo "debug.sh: no port binary beside $HERE" >&2
	echo "  expected one of: u2port-debug, u2, u2port, build/port/b/u2" >&2
	exit 2
fi

LOG="${LOG:-$HERE/u2-debug-$(date +%Y%m%d-%H%M%S).log}"

# The instruments. U2_TRACE_INT is the one that matters for sound and for the int 93h CD path: it turns on the PCM wrap
# counter, the mask and on/off register log, the int 93h register dump and the per-second sound-port census.
export U2_TRACE_INT=1
# The far-call trace, capped so a long session cannot fill a disk with one line per call. AH in the eax field is the service
# number, and the argument registers follow it.
export U2_TRACE_FAR=1
export U2_TRACE_FAR_ALL="${U2_TRACE_FAR_ALL:-20000}"
# Entries into the game's own sound library, 0xFD933 to 0xFDC00 in code selector 000C. Each line names the entry, the return
# address it came from, and the frame, so a routine the game only reaches in some states can be seen being reached. Measured at
# the title screen: 64 entries, all at frame 97, and zero into 0xFDBD2, the one that asks the driver to play. In-game is what
# this run is for.
export U2_TRACE_FN="${U2_TRACE_FN:-000c:fd933:fdc00}"

echo "debug.sh  binary  $BIN"
echo "debug.sh  log     $LOG"
echo "debug.sh  play; when the sound misbehaves let it run a second, then quit with Ctrl-Q or by closing the window"
echo

# The log says which binary made it, and what that binary is, before it says anything else. Paul's question of 2026-11-03
# is the reason: after four rounds of "still sticking" it was impossible to prove from the logs alone that each round had
# run a NEW binary rather than the one already open. A session report has to be self-describing, or it cannot be trusted.
{
	echo "debug.sh binary $BIN"
	echo "debug.sh sha256 $(sha256sum "$BIN" 2>/dev/null | cut -d' ' -f1)"
	echo "debug.sh when   $(date -Is)"
	echo "debug.sh args   $*"
} >"$LOG"
"$BIN" --dev "$@" 2>&1 | tee -a "$LOG"
status=${PIPESTATUS[0]}

echo
echo "debug.sh  exit    $status"
echo "debug.sh  log     $LOG"
if [[ -s "$LOG" ]]; then
	echo "debug.sh  what the log caught:"
	printf '  %-18s %s\n' \
		"PCM mask" "$(grep -c 'PCM mask' "$LOG")" \
		"PCM on/off" "$(grep -c 'PCM on/off' "$LOG")" \
		"samples ended" "$(grep -c 'sample ended' "$LOG")" \
		"irq asserted" "$(grep -c 'PCM irq asserted' "$LOG")" \
		"irq dropped" "$(grep -c 'PCM irq dropped' "$LOG")" \
		"status reads" "$(grep -c 'PCM status read' "$LOG")" \
		"flags reads" "$(grep -c 'PCM flags read' "$LOG")" \
		"int 93h" "$(grep -c 'int 93h' "$LOG")" \
		"sound census" "$(grep -cE '^  FM [0-9]+s' "$LOG")" \
		"TBIOS calls" "$(grep -c '0110:000110b0' "$LOG")" \
		"AH=01 starts" "$(grep '0110:000110b0' "$LOG" | grep -c 'eax 000001')" \
		"sound library" "$(grep -c '^fn ' "$LOG")" \
		"music play 0xfdbd2" "$(grep -c 'fdbd2' "$LOG")"
	# The line that matters is the join between what the chip asked for and what the driver did about it. A sample that
	# ended with no assert after it is the chip finishing its job. An assert with no status or flags read is the driver
	# not being reached. Both are single lines and they mean opposite things.
	ended=$(grep -c 'sample ended' "$LOG")
	asserted=$(grep -c 'PCM irq asserted' "$LOG")
	reads=$(( $(grep -c 'PCM status read' "$LOG") + $(grep -c 'PCM flags read' "$LOG") ))
	if [[ "$(grep -c 'PCM irq dropped' "$LOG")" -gt 0 ]]; then
		echo "debug.sh  an interrupt was dropped, and the log names why: $(grep -m1 'PCM irq dropped' "$LOG" | sed 's/^ *//')"
	elif [[ "$asserted" -gt 0 && "$reads" -eq 0 ]]; then
		echo "debug.sh  the chip asserted $asserted time(s) and the driver never read its status: it was not reached"
	elif [[ "$asserted" -gt 0 ]]; then
		echo "debug.sh  the driver read the sound registers $reads time(s) against $asserted assert(s), so it is being reached"
	elif [[ "$ended" -gt 0 ]]; then
		echo "debug.sh  samples ended with nothing asked of the driver, which is what a finished one-shot looks like"
	elif [[ "$(grep -c 'PCM on/off' "$LOG")" -gt 0 ]]; then
		echo "debug.sh  the chip was used and no sample ended, so the sound never reached its marker in this run"
	else
		echo "debug.sh  the chip was never touched, so this run did not reach the sound that misbehaves"
	fi
else
	echo "debug.sh  the log is empty, so the port said nothing at all: check that it started" >&2
fi
