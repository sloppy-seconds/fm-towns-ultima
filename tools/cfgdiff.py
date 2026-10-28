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

THE NOISE FLOOR, MEASURED, AND IT IS NOT A SINGLE NUMBER. Idle-versus-idle
differentials over four second windows with no input gave 2, 3 and 17 newly
reached instructions on the same machine in the same session, depending on what
the idle loop was doing. So there is no fixed threshold, and any action smaller
than about twenty instructions has to be treated as inconclusive.

This matters more than it looks. The first estimate of 3 came from a quiet moment
and would have licensed reading a diff of 7 as a real result. It was not: it was
timers. Measure the floor on the machine you are about to test, and if a diff
comes out near it, say so instead of interpreting it.

A PAUSED MACHINE RECORDS NOTHING. CFGSTART and CFGSTOP around a paused emulator
give 0 edges, because the hook runs per instruction and no instruction runs. This
is a useful property rather than a defect: a capture cannot be taken of a machine
that is not executing, so `RUN` first if the game was paused.

USAGE

    python3 tools/cfgdiff.py start <tag>   start capturing, return immediately
    ... do the thing in the game ...
    python3 tools/cfgdiff.py stop  <tag>   stop, save, and diff against baseline

    python3 tools/cfgdiff.py baseline      convenience: start, wait CFG_WINDOW, stop
    python3 tools/cfgdiff.py after         convenience: start, wait CFG_WINDOW, stop, diff

WHY START AND STOP ARE SEPARATE. The first attempt at this took a fixed four
second window AFTER the action and caught 7 instructions, because the action was
already over. The game state proved the action had happened (food 39895 to 39880,
map 6 to 7, position unchanged) while almost none of its code was in the window.
A capture has to be armed before the thing happens, which for a human action means
the two calls cannot be one blocking call.

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
    mode = sys.argv[1] if len(sys.argv) > 1 else ""
    tag = sys.argv[2] if len(sys.argv) > 2 else ""
    os.makedirs(OUTDIR, exist_ok=True)

    # Explicit arm/fire pair, for an action taken by a human while the capture
    # runs. Without this the action is over before CFGSTART is sent.
    if "start" == mode:
        if not tag:
            print("start needs a tag")
            return 2
        for l in cmd("CFGSTART"):
            print("  " + l)
        print("armed '%s'. Do the thing, then: %s stop %s" % (tag, sys.argv[0], tag))
        return 0

    if "stop" == mode:
        if not tag:
            print("stop needs a tag")
            return 2
        for l in cmd("CFGSTOP"):
            print("  " + l)
        remote = "/data/analysis/cfgdiff-%s.txt" % tag
        for l in cmd("SAVECFG " + remote):
            print("  " + l)
        path = os.path.join(OUTDIR, "cfgdiff-%s.txt" % tag)
        return report(path, tag)

    if mode not in ("baseline", "after"):
        print(__doc__)
        return 2

    print("capturing '%s' for %.1f s" % (tag if tag else mode, WINDOW))
    path = capture(tag if tag else mode)
    return report(path, tag if tag else mode)


def report(path, tag):
    if not os.path.exists(path):
        print("no file at %s. Is the container running the patched emulator?" % path)
        return 1

    r = rows(path)
    game = [x for x in r if "000C" == x["seg"]]
    addrs = {x["pre"] for x in game}
    print("  edges %d, game-segment %d, distinct instructions %d"
          % (len(r), len(game), len(addrs)))

    base_path = os.path.join(OUTDIR, "cfgdiff-baseline.txt")
    if "baseline" == tag or not os.path.exists(base_path):
        if "baseline" != tag:
            print("no baseline to compare against. Take one first.")
        return 0

    before = {x["pre"] for x in rows(base_path) if "000C" == x["seg"]}
    new = sorted(addrs - before)
    gone = sorted(before - addrs)
    print()
    print("newly reached instructions: %d" % len(new))
    print("no longer reached         : %d" % len(gone))
    if len(new) < 20:
        print("  (at or near the noise floor, measured at 2 to 17 on this machine;")
        print("   treat as inconclusive rather than as a result)")
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
