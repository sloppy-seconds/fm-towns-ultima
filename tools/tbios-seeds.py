#!/usr/bin/env python3
"""tools/tbios-seeds.py - seed offsets for the TBIOS module, from the live control-flow captures.

WHY. TBIOS is recompiled as a second module, keyed by its own code selector 0x110 with base 0 at the
image's start (boot_towns puts the TBIOS image at linear 0x100000, and the runtime dispatches by
CS:offset). The kit's own ports seed it from a far-pointer table near the start of the image
(`--raw tbios=...@110:20-100`), which found six functions here and then faulted on the first real
call at 0110:19b8.

A capture already knows the answer: every distinct offset that executed in segment 0110 is a function
the game really called. This prints them as a comma-separated seed list for the recompiler.

USAGE
    tools/tbios-seeds.py saves/analysis/entry-boot-tool.txt
    tools/tbios-seeds.py --count saves/analysis/entry-boot-tool.txt
    tools/tbios-seeds.py --check [capture]   assert tools/tbios-seeds.txt equals this derivation

Exit status 1 if the file holds no 0110 steps, because an empty seed list would emit a module with no
functions and look like a TBIOS that is not used. `--check` prints a SKIP and exits 0 when the capture is
not present, because a clean clone has the checked-in derivation and no trace to compare it against.
"""

import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
DEFAULT_CAPTURE = os.path.join(HERE, "..", "saves", "analysis", "entry-boot-tool.txt")
CHECKED_IN = os.path.join(HERE, "tbios-seeds.txt")


def seeds(path):
    seen = set()
    with open(path, "r", errors="replace") as fh:
        for line in fh:
            f = line.split()
            if not f:
                continue
            seg, _, off = f[0].partition(":")
            if seg.upper() != "0110":
                continue
            try:
                seen.add(int(off, 16))
            except ValueError:
                continue
    return sorted(seen)


def main(argv):
    args = [a for a in argv if not a.startswith("--")]
    count = "--count" in argv
    if "--check" in argv:
        capture = args[0] if args else DEFAULT_CAPTURE
        if not os.path.exists(capture):
            print("SKIP  tbios seeds: %s is a gitignored emulator capture and is not present" % capture)
            return 0
        want = set(seeds(capture))
        have = set()
        with open(CHECKED_IN) as fh:
            for line in fh:
                if line.startswith("#"):
                    continue
                for tok in line.split(","):
                    tok = tok.strip()
                    if tok:
                        have.add(int(tok, 16))
        if want == have:
            print("ok    tbios-seeds.txt equals the capture derivation (%d seeds)" % len(want))
            return 0
        print(
            "FAIL  tbios-seeds.txt is not the capture derivation: %d committed, %d derived, "
            "%d only in the file, %d missing from it" % (len(have), len(want), len(have - want), len(want - have))
        )
        return 1
    if len(args) != 1:
        print(__doc__.strip().splitlines()[-1], file=sys.stderr)
        return 2
    s = seeds(args[0])
    if not s:
        print("%s: no segment 0110 offsets" % args[0], file=sys.stderr)
        return 1
    if count:
        print(len(s))
    else:
        print(",".join("0x%x" % v for v in s))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
