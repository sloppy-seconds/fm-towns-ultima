#!/usr/bin/env python3
"""tools/cfgdiff.py - capture two CFG windows and show what one action added.

WHAT THIS IS FOR. A CFG capture on its own says which edges ran. It does not say
what any of them mean. The way to get meaning is differential: take a baseline,
do exactly one thing, take a second capture, and the difference is the code path
that thing took. That is the whole method, and it is why this tool exists rather
than a pile of ad-hoc curl.

The diff is on INSTRUCTION ADDRESSES, not edges, because two captures taken over
different windows will not agree on counts even when nothing happened. What is
stable across a pause is the set of addresses reached.

READING THE OUTPUT. The addresses are preEIP values from the edge record, which
is where the instruction started. Convert to a file offset with +0x200; see
docs/cfg-dump.md. An address only in the "after" set is a candidate for the
action's path. It is a candidate and not a conclusion: the game also runs timers,
and an idle window is not perfectly quiet.

THE NOISE FLOOR, MEASURED. Two idle captures four seconds apart, no input at all,
gave 3 newly reached instructions and 2 dropped. So the idle machine ticks timers
and a differential is never exactly zero. An action that adds fewer than about ten
instructions is indistinguishable from doing nothing, and should be reported as
such rather than interpreted. Re-measure this if the window length changes,
because a longer window catches more timer activity.

A PAUSED MACHINE RECORDS NOTHING. CFGSTART and CFGSTOP around a paused emulator
give 0 edges, because the hook runs per instruction and no instruction runs. This
is a useful property rather than a defect: a capture cannot be taken of a machine
that is not executing, so `RUN` first if the game was paused.

USAGE

    python3 tools/cfgdiff.py baseline
    ... do the thing in the game ...
    python3 tools/cfgdiff.py after

Both runs write into saves/analysis/ and the second prints the difference.
Requires the container to be running with the patched emulator.

Set CFG_BASE to change the API address. u2flow.py hardcodes :8080; this does not,
because PORT_API is overridable in container-run.sh and a hardcoded port silently
talks to nothing when it is.
"""

import json
import os
import sys
import time
import urllib.request

BASE = os.environ.get("CFG_BASE", "http://127.0.0.1:8080")
OUTDIR = os.environ.get("CFG_OUT", "saves/analysis")
WINDOW = float(os.environ.get("CFG_WINDOW", "4"))


def cmd(line):
    req = urllib.request.Request(
        BASE + "/api/cmd",
        data=json.dumps({"line": line}).encode(),
        headers={"content-type": "application/json"},
    )
    return json.load(urllib.request.urlopen(req, timeout=60)).get("output", [])


def rows(path):
    """Parse an edge file into dicts. Column order is fixed by SAVECFG."""
    out = []
    with open(path) as f:
        for line in f:
            c = line.split()
            if len(c) < 10:
                continue
            try:
                out.append({
                    "src": int(c[0].split(":")[1], 16),
                    "dst": int(c[1].split(":")[1], 16),
                    "seg": c[0].split(":")[0],
                    "kind": c[2],
                    "count": int(c[3]),
                    "op": int(c[4], 16),
                    "len": int(c[5]),
                    "pre": int(c[8], 16),
                })
            except (ValueError, IndexError):
                continue
    return out


def capture(tag):
    path = os.path.join(OUTDIR, "cfgdiff-%s.txt" % tag)
    remote = "/data/analysis/cfgdiff-%s.txt" % tag
    start = cmd("CFGSTART")
    time.sleep(WINDOW)
    stop = cmd("CFGSTOP")
    save = cmd("SAVECFG " + remote)
    print("  CFGSTART: %s" % (start[0] if start else "no reply"))
    print("  CFGSTOP : %s" % (stop[0] if stop else "no reply"))
    print("  SAVECFG : %s" % (save[0] if save else "no reply"))
    return path


def main():
    if len(sys.argv) != 2 or sys.argv[1] not in ("baseline", "after"):
        print(__doc__)
        return 2
    tag = sys.argv[1]
    os.makedirs(OUTDIR, exist_ok=True)

    print("capturing '%s' for %.1f s" % (tag, WINDOW))
    path = capture(tag)
    if not os.path.exists(path):
        print("no file at %s. Is the container running the patched emulator?" % path)
        return 1

    r = rows(path)
    game = [x for x in r if "000C" == x["seg"]]
    addrs = {x["pre"] for x in game}
    print("  edges %d, game-segment %d, distinct instructions %d"
          % (len(r), len(game), len(addrs)))

    if "after" == tag:
        base_path = os.path.join(OUTDIR, "cfgdiff-baseline.txt")
        if not os.path.exists(base_path):
            print("no baseline to compare against. Run: %s baseline" % sys.argv[0])
            return 0
        before = {x["pre"] for x in rows(base_path) if "000C" == x["seg"]}
        new = sorted(addrs - before)
        gone = sorted(before - addrs)
        print()
        print("newly reached instructions: %d" % len(new))
        print("no longer reached         : %d" % len(gone))
        if new:
            # Show them as runs, because an action enters a routine and walks it,
            # so contiguous runs are far more informative than a flat list.
            runs = []
            start = prev = new[0]
            for a in new[1:]:
                if a - prev <= 16:
                    prev = a
                else:
                    runs.append((start, prev)); start = prev = a
            runs.append((start, prev))
            print("  as %d range(s):" % len(runs))
            for a, b in runs[:25]:
                print("    0x%05X .. 0x%05X  (%d)" % (a, b, sum(1 for x in new if a <= x <= b)))
    return 0


if __name__ == "__main__":
    sys.exit(main())
