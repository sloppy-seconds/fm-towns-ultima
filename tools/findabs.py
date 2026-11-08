#!/usr/bin/env python3
"""tools/findabs.py - find 32-bit absolute references to an address in a flat image.

WHY THIS EXISTS. Reading the CD cluster required knowing which code touches the CD
variables at 0xCD4 and 0xE34, and the answer came from finding every place the address
appears as a dword. That is one line of Python and one line of output, but it was
retyped several times in one session and a typo in it would have produced the same
answer as a genuine negative. It is therefore a tool.

USAGE
    tools/.venv/bin/python tools/findabs.py ENCHANT.EXP 0xcd4 0x250f 0x2511 0x50c0

A count of zero is a result. The service words 0x250F and 0x2511 appearing only at the
game's own call sites, and nowhere as a constant compared against, is what ruled out
IO.SYS or the game dispatching on them.
"""
import sys


def main(path, addrs):
    with open(path, 'rb') as f:
        b = f.read()
    for a in addrs:
        v = int(a, 0)
        pat = v.to_bytes(4, 'little')
        hits, i = [], b.find(pat)
        while i != -1 and len(hits) < 12:
            hits.append(hex(i))
            i = b.find(pat, i + 1)
        print(f"{hex(v):10} {len(hits):2} ref(s): {' '.join(hits)}")


if __name__ == '__main__':
    if len(sys.argv) < 3:
        sys.exit(__doc__)
    main(sys.argv[1], sys.argv[2:])
