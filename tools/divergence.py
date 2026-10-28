#!/usr/bin/env python3
"""tools/divergence.py - find where the port's execution parts company with the machine's.

WHY THIS EXISTS. The port ran 24,000 frames and drew nothing, while the machine ran the same start-up and drew
a title. The port settled into a keyboard wait and the machine never executed that address at all (breakpoint,
with a control at 0x10241a that fired in six seconds). So the port was on a path the real program does not
take, and the difference was upstream. Guessing which BIOS return we answered wrongly is how this project has
wasted time before.

WHAT IT COMPARES. Two records of the same program:

  - the machine's control-flow capture, from `tools/cfgprobe.py capture --journey`. An edge map: for each
    executed basic block it gives the block's start, the block's last instruction (`preEIP`), the next
    instruction, and whether that step was a fall-through or a branch.
  - the port's trace, from a build with -DU2_TRACE=ON and U2_TRACE_FILE set. That trace logs each address the
    first time it executes, so its lines are in first-execution order but **are not adjacent instructions**.

THE METHOD IS SET SUBTRACTION, AND ADJACENCY WAS REMOVED ON PURPOSE. An earlier version of this tool tried to
reason about consecutive lines and report "the port left A for B where the machine went to C". On a deduplicated
trace that is meaningless: the line after an address is the next *new* address, not the next instruction, and the
result is a list of off-by-one artefacts that look exactly like findings. It produced four of them before this
was caught. A plausible artefact is worse than no output.

So what is compared is coverage. Take every address the port executed, subtract the machine's recorded set, and
what remains is code the port ran that the machine has no record of. Each is printed with the nearest machine
record below it and the gap, because "0x100b0f, nearest machine record 0x100b00, gap 0x0f" says far more than
the address by itself.

This is the method that found the missing A: drive. On the trace taken before the floppy existed it named
**0x102345** first, which is the `jb` error target inside the get-file-attributes wrapper at 0x102317, and the
next few were the message print and the key wait that follow at 0x0e25a1 onward. That is the failure read off
the instruction stream rather than guessed: the probe returned an error, and everything after it is the
error path.

WHAT IT DOES NOT PROVE. A port-only address in the middle of a block can be an artefact of the machine's capture
recording block boundaries rather than every instruction, so the low counts should be read as a shortlist of
places to look, not as evidence. Confirm the one that matters by disassembling around it and, where it is a
branch, by breaking there on the live machine.

USAGE

    tools/divergence.py saves/analysis/divergence-capture.txt /var/tmp/port-first.txt
    tools/divergence.py ... --show 12 --segment 000C
"""

import argparse
import sys


def read_edges(path):
    """Every address in the segment the machine has a record of: block starts, block ends, and branch targets."""
    seen = set()
    edges = 0
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
                seen.add(src)
                seen.add(pre_eip)
                edges += 1
            if dseg == "000C":
                seen.add(dst)
    return seen, edges


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
    ap.add_argument("--show", type=int, default=8, help="how many port-only addresses to print")
    ap.add_argument("--skip", type=int, default=0, help="skip the first N, to look further")
    a = ap.parse_args(argv)

    machine, edges = read_edges(a.capture)
    if not machine:
        print("the capture has no addresses for segment %s" % a.segment, file=sys.stderr)
        return 1
    trace = read_trace(a.trace, a.segment)
    if not trace:
        print("no %s instructions in %s" % (a.segment, a.trace), file=sys.stderr)
        return 1

    print("method:   set subtraction, not adjacency. The port's trace records first executions, so consecutive")
    print("          lines are not consecutive instructions and ordering is first-execution only.")
    if len(set(trace)) < len(trace):
        print("          This trace repeats addresses, so it is a full instruction trace; the set method still")
        print("          applies and is still the only one used here.")
    print("machine:  %d addresses recorded in %s, from %d edges" % (len(machine), a.segment, edges))
    print("port:     %d distinct addresses executed in %s" % (len(set(trace)), a.segment))

    sorted_machine = sorted(machine)

    def nearest(addr):
        lo, hi = 0, len(sorted_machine) - 1
        best = None
        while lo <= hi:
            mid = (lo + hi) // 2
            if sorted_machine[mid] <= addr:
                best = sorted_machine[mid]
                lo = mid + 1
            else:
                hi = mid - 1
        return best

    only = [a_addr for a_addr in trace if a_addr not in machine]
    shared = len(set(trace)) - len(only)
    print("overlap:  %d of the port's addresses match a machine record; %d do not"
          % (shared, len(only)))
    if not only:
        print("\nno divergence found: every address the port executed is one the machine has a record of. "
              "That is not proof of identical behaviour, because the capture records block boundaries rather "
              "than every instruction, but it rules out the port being somewhere the machine never was")
        return 0

    show = only[a.skip:a.skip + a.show]
    print("\nshowing %d of %d port-only addresses, in first-execution order\n" % (len(show), len(only)))
    for n, addr in enumerate(show, 1):
        nb = nearest(addr)
        gap = "none" if nb is None else "0x%06x (gap 0x%x)" % (nb, addr - nb)
        print("port-only %d: 0x%06x   nearest machine record below it: %s" % (n, addr, gap))
    print("\nThe earliest line is the place to start: it is the first address the port reached that the machine "
          "has no record of at all. Disassemble around it, find the branch that leads there, and check that "
          "branch on the live machine.")
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
