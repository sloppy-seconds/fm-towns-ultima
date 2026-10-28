#!/usr/bin/env python3
"""tools/pollptr.py - watch a DS-relative dword while the game runs, and report when it changes.

WHY THIS EXISTS. Eight of the recompiler's unresolved indirect transfers are
`call [0xdfc5c]`. That global is zero in ENCHANT.EXP because it lives in BSS and
is filled at run time, so the only place the pointer exists is a running machine.

Reading it once by hand gave zero twice, which is not evidence that it is never
set: idle is simply not when it is set. This polls, so that a value written for a
few frames is not missed.

USAGE

    python3 tools/pollptr.py                  watch 0xdfc5c at DS:14 for 20 s
    python3 tools/pollptr.py --off dfc5c --secs 40
    python3 tools/pollptr.py --off dfc5c --seg 14 --secs 10 --min-hits 1

WHAT IT DOES NOT DO. It never pauses the machine. A paused read is stable and a
polled read is not, and for this purpose stability is the wrong thing: the point
is to catch a transient. The consequence is that a value can be torn, so treat a
single odd reading as a sample rather than a fact and look for a repeated one.

ADDRESS RULE. The offset is DS-relative, and the file equivalent is offset + 0x200,
because the running image has its MP header stripped. That is the same rule as
everywhere else in this project and it is asserted in tools/verify.js.
"""

import argparse
import json
import re
import sys
import time
import urllib.request

API = "http://127.0.0.1:8080"
DEFAULT_OFF = "dfc5c"
DEFAULT_SEG = 14


def cmd(line):
    req = urllib.request.Request(
        API + "/api/cmd",
        data=json.dumps({"line": line}).encode(),
        headers={"content-type": "application/json"},
    )
    return json.load(urllib.request.urlopen(req, timeout=20)).get("output", [])


def read_dword(seg, off):
    """First four bytes of the MD reply at that address, or None."""
    for line in cmd("MD %x:%s" % (seg, off)):
        if "|" not in line:
            continue
        m = re.search(r"[0-9A-Fa-f]{4}:[0-9A-Fa-f]{8}\s+((?:[0-9A-Fa-f]{2}\s+){4})", line)
        if not m:
            continue
        b = [int(x, 16) for x in m.group(1).split()]
        return b[0] | (b[1] << 8) | (b[2] << 16) | (b[3] << 24)
    return None


def main():
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("--off", default=DEFAULT_OFF, help="DS-relative offset, hex without 0x")
    ap.add_argument("--seg", type=lambda s: int(s, 16), default=DEFAULT_SEG)
    ap.add_argument("--secs", type=float, default=20.0)
    ap.add_argument("--every", type=float, default=0.05, help="seconds between reads")
    ap.add_argument("--min-hits", type=int, default=2,
                    help="a value must be seen this many times to be reported as real")
    a = ap.parse_args()

    print("watching %X:%s for %.0f s, one read every %.2f s, never pausing"
          % (a.seg, a.off, a.secs, a.every))
    print("take turns in the game now. Ctrl-C to stop early.")
    print()

    seen = {}
    nulls = 0
    reads = 0
    end = time.time() + a.secs
    try:
        while time.time() < end:
            v = read_dword(a.seg, a.off)
            reads += 1
            if v is None:
                pass
            elif 0 == v:
                nulls += 1
            else:
                seen[v] = seen.get(v, 0) + 1
            time.sleep(a.every)
    except KeyboardInterrupt:
        print("\nstopped early")

    print("reads %d, zero %d, distinct non-zero values %d" % (reads, nulls, len(seen)))
    if not seen:
        print()
        print("The pointer was never non-zero during the watch.")
        print("That is a real negative for this window, not for the program: try longer,")
        print("or watch while the code that calls through it is known to be running.")
        return 0

    print()
    print("non-zero values, most frequent first:")
    for v, n in sorted(seen.items(), key=lambda kv: -kv[1]):
        # A call target must be inside the image. Say so, since an out-of-range
        # value is a torn read rather than a pointer.
        segaddr = (v - 0x400000) if v >= 0x400000 else None
        where = ("segment 0x%05X, image 0x%05X" % (segaddr, segaddr + 0x200)
                 if segaddr is not None else "outside the game segment")
        tag = "CONFIRMED" if n >= a.min_hits else "seen once, treat as torn"
        print("   0x%08X  x%-4d %-24s %s" % (v, n, tag, where))
    return 0


if __name__ == "__main__":
    sys.exit(main())
