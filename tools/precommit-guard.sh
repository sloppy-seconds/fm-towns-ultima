#!/usr/bin/env bash
# tools/precommit-guard.sh - refuse commits containing copyrighted material.
#
# Install once:
#   ln -sf ../../tools/precommit-guard.sh .git/hooks/pre-commit
#
# Why this exists: .gitignore only stops files that were never staged. It does
# nothing about `git add -f`, or about a file added before its ignore rule
# existed. This check inspects what is actually staged and blocks the commit.
#
# Two independent checks:
#   1. Extension allowlist/denylist on staged paths.
#   2. Size ceiling, because a large staged blob is almost certainly game data.
#
# Exits non-zero to block the commit. Bypass deliberately with
# `git commit --no-verify` only when you are certain the rule is wrong.

set -euo pipefail

# Anything matching these must never be committed.
DENY_RE='\.(img|sub|cue|ccd|iso|mds|mdf|bin|nrg|hdm|d77|d88|hdf|vhd|fdi|2hd|zip|7z|rar|lzh|tar|tgz|exe|exp|com|sys|drv|386|rex|snd|eup|fmb|tif|tiff|mp3|mp2|mp1|dg3|dic|fnt|rom|dat|png|gif|bmp|wav|flac)$'

# ONE PATH IS ALLOWED THROUGH BY NAME, and only one. assets/save-disk/userdisk.hdm.zip is the save disk the port's
# quickstart needs, because character creation does not work yet and the tested route picks an existing character.
# It is a zip because the disk is 1,261,568 bytes of almost pure zero fill and packs to 3,629.
#
# Why this is not the hole it looks like: it holds three characters and three world files that the game wrote while
# it was played, and nothing from the disc, which is what every other denied extension here is for. The exception is
# an exact path rather than a pattern, so no other zip and no hdm can use it. And tools/portcheck.js reads the
# archive's central directory and asserts the uncompressed size and CRC-32, so the file cannot be swapped for
# something else without failing the gate. Decision and reasoning: assets/save-disk/README.md and plan item 9j.
ALLOW_RE='^assets/save-disk/userdisk\.hdm\.zip$'

# Files above this size are suspicious for a docs-and-scripts repository.
MAX_BYTES=1048576

staged=$(git diff --cached --name-only --diff-filter=ACMR)
[ -z "$staged" ] && exit 0

status=0

while IFS= read -r f; do
	[ -z "$f" ] && continue
	if printf '%s' "$f" | grep -qE "$ALLOW_RE"; then
		printf 'allowed by name: %s\n' "$f" >&2
		continue
	fi
	if printf '%s' "$f" | grep -qiE "$DENY_RE"; then
		printf 'BLOCKED: looks like copyrighted game data: %s\n' "$f" >&2
		status=1
	fi
done <<< "$staged"

# Size check on the staged blob, not the working tree copy.
while IFS= read -r f; do
	[ -z "$f" ] && continue
	sz=$(git cat-file -s ":$f" 2>/dev/null || echo 0)
	if [ "$sz" -gt "$MAX_BYTES" ]; then
		printf 'BLOCKED: staged file is %s bytes, over the %s ceiling: %s\n' \
			"$sz" "$MAX_BYTES" "$f" >&2
		status=1
	fi
done <<< "$staged"

if [ "$status" -ne 0 ]; then
	cat >&2 <<'MSG'

This repository distributes scripts, tests and documentation only.
The game, its artwork, its audio and its ROMs are commercial software
still in copyright and must not be committed.

If a rule above is genuinely wrong, fix .gitignore or this script.
Do not bypass with --no-verify unless you are certain.
MSG
fi

# Second gate: documentation and plan consistency, per docs/plan-process.md Part 7.
#
# The old Part 7 gave six shell one-liners, four of which could not fail and two of which reported failure
# when clean. checkall.js is the replacement, and every check in it has been tested by breaking something it
# should catch.
#
# --no-build skips mkdocs here because it is the slowest step and this runs on every commit. The build is
# still checked on the manual run and in any future CI job.
#
# SKIP_DOC_CHECKS=1 bypasses this. If you use it, say why in the commit message.
if [ "${SKIP_DOC_CHECKS:-0}" != "1" ] && command -v node >/dev/null 2>&1; then
	if ! node tools/checkall.js --quiet --no-build; then
		cat >&2 <<'MSG'

Documentation or plan checks failed. Run `node tools/checkall.js` to see all of them.

These exist because drift has been the most common defect in this repository: a count restated in two
places, the plan summary table contradicting the item sections under it, and items worked without their
metadata being updated. None of them break the build, which is why they need a gate.

SKIP_DOC_CHECKS=1 bypasses this.
MSG
		status=1
	fi
fi

exit "$status"
