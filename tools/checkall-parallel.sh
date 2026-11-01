#!/usr/bin/env bash
# tools/checkall-parallel.sh - run tools/checkall.js across processes, because it is one long serial file.
#
# WHY THIS EXISTS. `node tools/checkall.js` takes about 29 s on a 32-core machine. Measured with --timing,
# twelve checks are 29 s of that and the other twenty-six are 1.7 s. Nothing in the source says which are
# expensive, so checkall.js carries the measured list as SLOW and exposes it with --list-slow. This script
# reads that list rather than repeating it, so adding a slow check there automatically adds a shard here.
#
# HOW. One process runs `--fast` for the twenty-six cheap checks. One process per slow check runs
# `--only=<name>`, which skips the other slow ones and prints just its own result. They all run at once.
#
# The floor is the slowest single check rather than the merged total, so wall time lands near 7 s against
# the suite's 29 s. Getting below that means making an individual check faster, which is a different job from
# sharding. The corpus census was exactly that job: it was 13.5 s and is now 2.0 s, which took this script
# from 17 s to 7 s without changing a line of it.
#
# IT REFUSES TO MERGE AN INCOMPLETE RUN. A skipped check records itself as a skip rather than a pass, and
# this script additionally requires every shard to report exactly one result line for the check it was asked
# to run. A shard that dies, or a name that stops matching, is a hard failure rather than a quiet gap, because
# a merged report missing a check reads as "that check passed".
#
# A FAILURE IS NEVER HIDDEN BY THE FILTER. `--only` says which checks a process was asked to run, not
# permission to suppress a problem another check found, so every shard prints any failure it sees. Those
# duplicate across processes by design, and the merge counts unique names and lists them once.
#
# Usage:
#   ./tools/checkall-parallel.sh
#   ./tools/checkall-parallel.sh --quiet
#
# Exit: 0 all checks passed, 1 any check failed or any shard was incomplete.

set -uo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ROOT"

QUIET=0
for a in "$@"; do
	case "$a" in
		--quiet) QUIET=1 ;;
		*) echo "unknown argument: $a" >&2; exit 2 ;;
	esac
done

WORK="$(mktemp -d /var/tmp/ckparallel.XXXXXX)"
trap 'rm -rf "$WORK"' EXIT

# escape a fixed string for use inside a grep -E pattern.
rx() { printf '%s' "$1" | sed 's/[][\.*^$(){}?+|/]/\\&/g'; }

mapfile -t SLOW < <(node tools/checkall.js --list-slow)
if [ "${#SLOW[@]}" -eq 0 ]; then
	echo "checkall --list-slow returned nothing; refusing to run" >&2
	exit 2
fi

# The cheap checks, and every slow one, all at once.
node tools/checkall.js --fast >"$WORK/fast.out" 2>&1 &
fast_pid=$!

i=0
for name in "${SLOW[@]}"; do
	node tools/checkall.js --only="$name" >"$WORK/shard.$i.out" 2>&1 &
	eval "shard_pid_$i=$!"
	i=$((i + 1))
done

wait "$fast_pid"; fast_rc=$?

shard_bad=0
i=0
for name in "${SLOW[@]}"; do
	eval "pid=\$shard_pid_$i"
	wait "$pid"; rc=$?
	# Exactly one result line for its own name, with the padded label and the optional `  (N)`
	# failure suffix both allowed. Anything else is a gap in the merge, not a pass.
	own=$(grep -cE "^(ok|FAIL) +$(rx "$name")(  \([0-9]+\))?\$" "$WORK/shard.$i.out" || true)
	if [ "$own" -ne "$((1))" ]; then
		echo "SHARD INCOMPLETE: '$name' reported $own result line(s) for itself, expected 1" >&2
		shard_bad=1
	fi
	[ "$rc" -ne 0 ] && shard_bad=1
	i=$((i + 1))
done

# --- merge ------------------------------------------------------------------
#
# Printing is deterministic: the cheap checks in their own order, then the slow ones in --list-slow order.
# Counting is by unique name, so a failure that several processes reported is counted and shown once.

if [ "$QUIET" -eq 0 ]; then
	grep -E '^(ok|FAIL) ' "$WORK/fast.out" || true
fi
i=0
for name in "${SLOW[@]}"; do
	[ "$QUIET" -eq 0 ] && { grep -E "^(ok|FAIL) +$(rx "$name")(  \([0-9]+\))?\$" "$WORK/shard.$i.out" || true; }
	i=$((i + 1))
done

# Unique result lines across every process. Anything a shard saw that it was not asked to run
# (a cheap check failing) appears here and nowhere above.
cat "$WORK/fast.out" "$WORK"/shard.*.out 2>/dev/null \
	| grep -E '^(ok|FAIL) ' \
	| sed 's/  ([0-9]*)$//' \
	| sort -u > "$WORK/unique.out"

ok_n=$(grep -cE '^ok ' "$WORK/unique.out" || true)
fail_n=$(grep -cE '^FAIL ' "$WORK/unique.out" || true)

# Failures that were not already printed above: the cheap shard printed its own, and each shard printed
# its own slow check, so what is left is a cheap check's failure as seen by a slow shard.
{
	grep -E '^ok |^FAIL ' "$WORK/fast.out" || true
	i=0
	for name in "${SLOW[@]}"; do
		grep -E "^(ok|FAIL) +$(rx "$name")(  \([0-9]+\))?\$" "$WORK/shard.$i.out" || true
		i=$((i + 1))
	done
} | sed 's/  ([0-9]*)$//' | sort -u > "$WORK/shown.out"

comm -23 "$WORK/unique.out" "$WORK/shown.out" | grep -E '^FAIL ' > "$WORK/extra_fails.out" || true
if [ -s "$WORK/extra_fails.out" ]; then
	echo
	echo "failures found by a process that was not asked to run that check:"
	cat "$WORK/extra_fails.out"
fi

echo
echo "parallel run: $ok_n passed, $fail_n failed, ${#SLOW[@]} checks across $(( ${#SLOW[@]} + 1 )) processes"

if [ "$fail_n" -gt 0 ] || [ "$shard_bad" -ne 0 ] || [ "$fast_rc" -ne 0 ]; then
	echo "NOT CLEAN. This exits non-zero, so it can gate a commit."
	exit 1
fi
echo "all checks pass."
exit 0
