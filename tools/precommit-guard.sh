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

# Files above this size are suspicious for a docs-and-scripts repository.
MAX_BYTES=1048576

staged=$(git diff --cached --name-only --diff-filter=ACMR)
[ -z "$staged" ] && exit 0

status=0

while IFS= read -r f; do
	[ -z "$f" ] && continue
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

exit "$status"
