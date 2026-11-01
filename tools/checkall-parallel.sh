#!/usr/bin/env bash
# tools/checkall-parallel.sh - run tools/checkall.js across processes, because it is one long serial file.
#
# WHY THIS EXISTS. `node tools/checkall.js` takes about 29 s on a 32-core machine. Measured with --timing,
# eleven checks are 27 s of that and the other twenty-six are 1.7 s. Nothing in the source says which are
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
# this script additionally asserts that every shard produced exactly one result line for the check it was
# asked to run. A shard that dies, or a name that stops matching, is a hard failure rather than a quiet gap,
# because a merged report missing a check reads as "that check passed".
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

mapfile -t SLOW < <(node tools/checkall.js --list-slow)
if [ "${#SLOW[@]}" -eq 0 ]; then
	echo "checkall --list-slow returned nothing; refusing to run" >&2
	exit 2
fi

# The cheap checks, and every slow one, all at once. No --quiet is passed to the shards so that a failure
# carries its detail lines into the merged output.
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
	# Exactly one result line, and it must be for this check. Anything else is a gap in the merge.
	lines=$(grep -cE '^(ok|FAIL|skip) ' "$WORK/shard.$i.out" || true)
	if [ "$lines" -ne 1 ]; then
		echo "SHARD INCOMPLETE: '$name' produced $lines result line(s), expected 1" >&2
		shard_bad=1
	fi
	# The label column pads to four characters (`ok  `, `FAIL`) and a failure appends `  (N)`, so both the
	# separator and that suffix have to be allowed. Requiring exactly one space made every shard look
	# mismatched while all 37 checks actually passed.
	if ! grep -qE "^(ok|FAIL) +$(printf '%s' "$name" | sed 's/[][\.*^$/]/\\&/g')(  \([0-9]+\))?\$" "$WORK/shard.$i.out"; then
		echo "SHARD MISMATCH: '$name' did not report a result for its own name" >&2
		shard_bad=1
	fi
	[ "$rc" -ne 0 ] && shard_bad=1
	i=$((i + 1))
done

# The cheap shard prints its eleven skipped slow checks as `skip`. Those lines are replaced by the real
# results above, so they are dropped rather than merged.
if [ "$QUIET" -eq 0 ]; then
	grep -E '^(ok|FAIL) ' "$WORK/fast.out" || true
fi
i=0
for name in "${SLOW[@]}"; do
	grep -E '^(ok|FAIL|skip) ' "$WORK/shard.$i.out" || true
	i=$((i + 1))
done

ok_n=$(cat "$WORK"/fast.out "$WORK"/shard.*.out 2>/dev/null | grep -cE '^ok ' || true)
fail_n=$(cat "$WORK"/fast.out "$WORK"/shard.*.out 2>/dev/null | grep -cE '^FAIL ' || true)
skip_n=$(cat "$WORK"/fast.out "$WORK"/shard.*.out 2>/dev/null | grep -cE '^skip ' || true)
# The fast shard's own skip lines are duplicates of real results, so they are not counted.
skip_n=$((skip_n - ${#SLOW[@]}))
[ "$skip_n" -lt 0 ] && skip_n=0

echo
echo "parallel run: $ok_n passed, $fail_n failed, $skip_n skipped, ${#SLOW[@]} shards across ${#SLOW[@]} processes"

if [ "$fail_n" -gt 0 ] || [ "$shard_bad" -ne 0 ] || [ "$fast_rc" -ne 0 ]; then
	echo "NOT CLEAN. This exits non-zero, so it can gate a commit."
	exit 1
fi
echo "all checks pass."
exit 0
