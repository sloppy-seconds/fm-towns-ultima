#!/usr/bin/env bash
# tools/precommit-guard.sh - refuse commits containing copyrighted material.
#
# WHAT COUNTS AS COPYRIGHTED HERE, since 2026-10-30. The original media: the disc images, the floppy, the
# executables, the ROMs, and anything extracted from them. Those must never be staged. The recompiled C++ in
# module/ is a translation of machine code into a readable language and is committed on purpose, which is a
# deliberate policy decision rather than a hole: see docs/licensing.md and plan item 9f. Everything this script
# denies is still denied, and the extension list below is what enforces it.
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

# A SECOND PATH IS ALLOWED BY NAME, since 2026-11-02: assets/font-rom/FMT_FNT.ROM, the FM Towns glyph ROM. The port
# renders no text at all without it, and it is not Fujitsu code: pinterior's 16dot.py generates it from Shinonome, a
# public-domain BDF font, which the FreeTOWNS set's own licence states. The other four ROMs in that set stay denied by
# extension and live under vendor/, gitignored.
#
# What is NOT established, and is written down rather than glossed: neither FreeTOWNS nor the generator attaches an
# explicit licence grant to the generated file. The provenance is public domain and the output is a mechanical
# transformation of it, which is strong evidence and is not a licence text. assets/font-rom/README.md says all of that,
# and tools/portcheck.js pins the file's size and sha256 so it cannot be swapped for a different ROM without failing a
# gate. This stays an exact path so the exception cannot widen by accident.
ALLOW_RE='^(assets/save-disk/userdisk\.hdm\.zip|assets/font-rom/FMT_FNT\.ROM)$'

# The size ceiling gets its own exception, and it is only a size exception. module/ holds the recompiled C++ that
# policy now allows in git (decision 2026-10-30, docs/licensing.md and plan item 9f), and one of its files is
# 2.7 MB of generated code. A .img, .rom or .EXP placed under module/ is still denied by extension above, because
# this list is consulted only by the byte-count check.
SIZE_ALLOW_RE='^module/.*\.(cpp|h|txt)$'

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
	if printf '%s' "$f" | grep -qE "$SIZE_ALLOW_RE"; then
		continue
	fi
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

# Documentation and plan consistency is NOT checked here, as of 2026-11-02.
#
# It used to be. This hook ran `node tools/checkall.js --quiet --no-build` on every commit, and the comment
# above it said `--no-build` was used "because mkdocs is the slowest step". Measured, that was wrong: mkdocs
# is 2.6 s of a 38 s suite, so the hook optimised away 7 percent of the cost and kept 93 percent of it.
#
# The real cost was that it ran the whole suite a second time. A normal pattern was `node tools/checkall.js &&
# git commit`, which paid 38 s to check the tree and then another 35.5 s for the hook to check the identical
# tree. Measured on 2026-11-02: checkall --quiet --no-build is 35.5 s, checkall --quiet is 38.1 s, and a
# commit that way took 1 m 53 s. Over one night that was about seven minutes spent re-proving the same thing.
#
# So the doc checks are a deliberate step before a commit now, not a hidden tax inside one. Run
# `node tools/checkall.js` yourself. If you want the old behaviour back for a branch where you would rather
# pay the time than remember, set CHECK_DOC_CHECKS=1.
#
# This is a real trade and it is recorded rather than slipped in: the copyright gate below still cannot be
# forgotten, because it is the only thing standing between a stray `git add -f` and a takedown notice, and it
# costs milliseconds. The doc checks can be forgotten, which is why they are the ones that moved out.
if [ "${CHECK_DOC_CHECKS:-0}" = "1" ] && [ "${SKIP_DOC_CHECKS:-0}" != "1" ] && command -v node >/dev/null 2>&1; then
	if ! node tools/checkall.js --quiet --no-build; then
		cat >&2 <<'MSG'

Documentation or plan checks failed. Run `node tools/checkall.js` to see all of them.

These exist because drift has been the most common defect in this repository: a count restated in two
places, the plan summary table contradicting the item sections under it, and items worked without their
metadata being updated. None of them break the build, which is why they need a gate.

CHECK_DOC_CHECKS=1 opts into running them here. They are not run by default since 2026-11-02, because the
hook was paying for the whole suite a second time on every commit.
MSG
		status=1
	fi
fi

exit "$status"
