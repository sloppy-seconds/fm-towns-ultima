#!/usr/bin/env python3
"""tools/divergence.py - find where the port's execution parts company with the machine's.

WHY THIS EXISTS. The port runs 24,000 frames and draws nothing, while the machine runs the same start-up and
draws a title. The port settles into a keyboard wait at guest 0x0e25ae and the machine never executes that
address at all (breakpoint, with a control at 0x10241a that fired in six seconds). So the port is on a path
the real program does not take, and the difference is upstream. Guessing which BIOS return we answered
wrongly is how this project has wasted time before.

WHAT IT COMPARES. Two records of the same program:

  - the machine's control-flow capture, from `tools/cfgprobe.py capture --journey`. An edge map: for each
    executed basic block it gives the block's start, the block's last instruction (`preEIP`), the next
    instruction, and whether that next step was a fall-through or a branch.
  - the port's instruction trace, from a build with -DU2_TRACE=ON and U2_TRACE_FILE set. Every instruction's
    address, in order.

ALIGNMENT, AND WHY IT IS APPROXIMATE. The capture records block boundaries, not every instruction, so a port
address is not comparable directly. What is comparable is a *decision*: the port leaves address A for target T,
and the machine, when it executed the block starting at B (the greatest machine block start at or before A),
took one of its recorded edges. If the machine has an edge out of B but none to T, the port branched
differently from the same place, and that is the divergence.

Each candidate is printed with the port's last few instructions and the machine's actual edges from that
block, so a reader can judge it rather than trust it. Verify the one that matters with
`tools/cfgprobe.py query` before acting on it: this tool narrows the search, it does not prove a case.

USAGE

    tools/divergence.py saves/analysis/divergence-capture.txt /var/tmp/port-trace.txt
    tools/divergence.py ... --show 12 --segment 000C
"""

import argparse
import sys


def read_edges(path):
    edges = set()
    starts = set()
    by_src = {}
    with open(path, "r", encoding="utf-8", errors="replace") as fh:
        for line in fh:
            f = line.split()
            if len(f) < 10 or ":" not in f[0]:
                continue
            try:
                sseg, soff = f[0].split(":")
                dseg, doff = f[1].split(":")
                src, dst = int(soff, 16), int(doff, 16)
                pre_eip = int(f[8], 16)
            except ValueError:
                continue
            sseg, dseg = sseg.upper(), dseg.upper()
            if sseg == "000C":
                starts.add(src)
                by_src.setdefault(src, set()).add((dseg, dst))
            if dseg == "000C":
                starts.add(dst)
            if sseg == "000C":
                starts.add(pre_eip)
    return starts, by_src, edges


def read_trace(path, segment):
    rows = []
    with open(path, "r", encoding="utf-8", errors="replace") as fh:
        for line in fh:
            line = line.strip()
            if not line or ":" not in line:
                continue
            seg, off = line.split(":")
            if seg.lower() != segment.lower():
                continue
            try:
                rows.append(int(off, 16))
            except ValueError:
                continue
    return rows


def main(argv):
    ap = argparse.ArgumentParser()
    ap.add_argument("capture")
    ap.add_argument("trace")
    ap.add_argument("--segment", default="000C")
    ap.add_argument("--show", type=int, default=8, help="how many candidate divergences to print")
    ap.add_argument("--skip", type=int, default=0, help="skip the first N candidates, to look further")
    a = ap.parse_args(argv)

    starts, by_src, _ = read_edges(a.capture)
    if not starts:
        print("no edges for segment %s in %s" % (a.segment, a.capture), file=sys.stderr)
        return 1
    trace = read_trace(a.trace, a.segment)
    if not trace:
        print("no %s instructions in %s" % (a.segment, a.trace), file=sys.stderr)
        return 1

    sorted_starts = sorted(starts)
    print("machine: %d block starts in %s, %d blocks with recorded edges"
          % (len(sorted_starts), a.segment, len(by_src)))
    print("port:    %d %s instructions traced" % (len(trace), a.segment))

    def block_start_at_or_before(addr):
        lo, hi = 0, len(sorted_starts) - 1
        best = None
        while lo <= hi:
            mid = (lo + hi) // 2
            if sorted_starts[mid] <= addr:
                best = sorted_starts[mid]
                lo = mid + 1
            else:
                hi = mid - 1
        return best

    found = []
    for i in range(1, len(trace) - 1):
        here, nxt = trace[i], trace[i + 1]
        # An instruction that neither falls through to a nearby address nor is a small step is a transfer.
        if nxt > here and nxt - here <= 15:
            continue
        block = block_start_at_or_before(here)
        if block is None:
            continue
        outs = by_src.get(block)
        if not outs:
            continue
        if (a.segment, nxt) in outs or any(d == nxt for _s, d in outs):
            continue
        found.append((i, block, here, nxt, sorted(outs)))
        if len(found) >= a.show + a.skip:
            break

    if not found:
        print("\nno divergence found in this trace: every transfer whose block the machine executed "
              "matched an edge the machine took")
        return 0

    print("\n%d candidate divergences, showing %d from %d\n"
          % (len(found), min(a.show, max(0, len(found) - a.skip)), a.skip))
    for n, (i, block, here, nxt, outs) in enumerate(found[a.skip:a.skip + a.show], 1):
        print("candidate %d: port leaves 0x%06x for 0x%06x (trace line %d)" % (n, here, nxt, i + 1))
        print("  machine block 0x%06x recorded these transfers: %s"
              % (block, ", ".join("0x%06x" % d for _s, d in outs[:8])))
        print("  the port arrived by: %s" % ", ".join("0x%06x" % v for v in trace[max(0, i - 6):i + 1]))
        print()
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
