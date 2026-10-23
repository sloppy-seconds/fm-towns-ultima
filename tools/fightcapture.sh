#!/usr/bin/env bash
# tools/fightcapture.sh - capture a fight: memory every second, every instruction, screenshots.
#
# WHY THIS EXISTS. Static analysis reached its limit on combat. The emulator can log every instruction
# with a full register dump, and can save a machine state on demand, which together make a fight
# reconstructable from the inside rather than guessed from the player's description.
#
# COST. The instruction trace is about 10 MB per second, because every line carries a disassembly and a
# full register set. A 60-second fight is roughly 600 MB. Disk has about 1.2 TB free, so a fight is fine
# and a long session is not. Stop it as soon as the fight ends.
#
# WHAT IT PRODUCES, in saves/ (which is bind-mounted into the container as /data):
#
#   fight/state-NNN.state     a full machine state, one per second
#   fight/shot-NNN.png        a screenshot, one per second
#   fight/trace.log           every instruction with disassembly and registers
#   fight/record-NNN.txt      the character record fields, read live, one per second
#
# Usage:
#   ./tools/fightcapture.sh start     begin capturing
#   ./tools/fightcapture.sh stop      stop and report what was captured
#   ./tools/fightcapture.sh status    is it running, how big is the trace
#
# The capture runs as a background loop on the HOST, driving the container over its HTTP API, so it does
# not need the container to have any extra tooling inside it.

set -uo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
API="http://127.0.0.1:8080"
OUT="$ROOT/saves/fight"
PIDFILE="$OUT/capture.pid"

api() { curl -s -m 20 -X POST "$API$1" -H 'Content-Type: application/json' -d "$2"; }

# Field reads are delegated to tools/peek.js. The first version of this script parsed MD output with
# sed, failed on every sample, and wrote eight files of -1 without saying so. peek.js is the parser that
# works, and it exits non-zero when a read fails so a caller can tell zero from failure.
record_snapshot() {
	local n="$1" f="$OUT/record-$1.txt"
	if ! node "$ROOT/tools/peek.js" --kv >"$f.tmp" 2>"$OUT/record-$1.err"; then
		# Keep the file so a failed sample is visible rather than silently absent.
		{
			echo "n=$n"
			echo "FAILED"
			cat "$OUT/record-$1.err"
		} >"$f"
		rm -f "$f.tmp"
		return 1
	fi
	{ echo "n=$n"; cat "$f.tmp"; } >"$f"
	rm -f "$f.tmp" "$OUT/record-$1.err"
}

case "${1:-}" in
start)
	mkdir -p "$OUT"
	if [ -f "$PIDFILE" ] && kill -0 "$(cat "$PIDFILE")" 2>/dev/null; then
		echo "already capturing (pid $(cat "$PIDFILE"))"
		exit 0
	fi
	# fresh trace, do not append to a previous one
	: >"$OUT/trace.log"
	api /api/cmd '{"line":"DBLOG /data/fight/trace.log"}'
	api /api/cmd '{"line":"ENA AUTODISASMR"}'
	echo "capture started"
	# The loop is started with setsid and nohup so it survives the parent shell exiting, and every
	# command inside it tolerates failure: a sample that cannot be read is recorded as FAILED and the
	# loop continues, because a missing sample is worse than a failed one.
	#
	# The first version of this wrote $! from a subshell that had already forked its own child, so the
	# pidfile held a dead pid, status reported not running, and stop killed nothing. The loop had
	# actually kept going in the background with no way to stop it.
	cat >"$OUT/loop.sh" <<'LOOP'
#!/usr/bin/env bash
ROOT="$1"; OUT="$2"
. /dev/stdin <<<"$(sed -n '/^record_snapshot()/,/^}/p' "$ROOT/tools/fightcapture.sh")"
api() { curl -s -m 20 -X POST "http://127.0.0.1:8080$1" -H 'Content-Type: application/json' -d "$2"; }
n=0
while :; do
	n=$((n + 1))
	printf -v nn '%03d' "$n"
	record_snapshot "$nn" || true
	api /api/shot "{\"name\":\"fight/shot-$nn.png\"}" >/dev/null 2>&1 || true
	if [ $((n % 5)) -eq 0 ]; then
		api /api/cmd "{\"line\":\"SAVESTATE /data/fight/state-$nn.state\"}" >/dev/null 2>&1 || true
	fi
	sleep 1
done
LOOP
	chmod +x "$OUT/loop.sh"
	setsid nohup "$OUT/loop.sh" "$ROOT" "$OUT" >"$OUT/loop.log" 2>&1 &
	echo $! >"$PIDFILE"
	sleep 1
	if ! kill -0 "$(cat "$PIDFILE")" 2>/dev/null; then
		echo "capture loop failed to start; see $OUT/loop.log" >&2
		api /api/cmd '{"line":"CDBLOG"}' >/dev/null
		exit 1
	fi
	;;
stop)
	if [ -f "$PIDFILE" ]; then
		kill "$(cat "$PIDFILE")" 2>/dev/null
		rm -f "$PIDFILE"
	fi
	api /api/cmd '{"line":"CDBLOG"}' >/dev/null
	api /api/cmd '{"line":"DIS AUTODISASMR"}' >/dev/null
	echo "capture stopped"
	echo
	echo "trace:   $(du -h "$OUT/trace.log" 2>/dev/null | cut -f1)"
	echo "states:  $(ls "$OUT"/state-*.state 2>/dev/null | wc -l)"
	echo "shots:   $(ls "$OUT"/shot-*.png 2>/dev/null | wc -l)"
	echo "records: $(ls "$OUT"/record-*.txt 2>/dev/null | wc -l)"
	echo "failed:  $(grep -l '^FAILED$' "$OUT"/record-*.txt 2>/dev/null | wc -l)"
	;;
status)
	if [ -f "$PIDFILE" ] && kill -0 "$(cat "$PIDFILE")" 2>/dev/null; then
		echo "capturing, pid $(cat "$PIDFILE")"
	else
		echo "not capturing"
	fi
	echo "trace:   $(du -h "$OUT/trace.log" 2>/dev/null | cut -f1)"
	echo "records: $(ls "$OUT"/record-*.txt 2>/dev/null | wc -l)"
	echo "failed:  $(grep -l '^FAILED$' "$OUT"/record-*.txt 2>/dev/null | wc -l)"
	;;
*)
	sed -n '2,40p' "$0"
	;;
esac
