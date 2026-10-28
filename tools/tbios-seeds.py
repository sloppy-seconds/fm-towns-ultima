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

Exit status 1 if the file holds no 0110 steps, because an empty seed list would emit a module with no
functions and look like a TBIOS that is not used.
"""

import sys


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
