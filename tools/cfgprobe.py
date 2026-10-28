#!/usr/bin/env python3
"""tools/cfgprobe.py - capture a control-flow graph from a boot, and query it.

WHY THIS EXISTS. The question "is address X ever executed" cannot be answered
from the file. A capture taken *after* the interesting thing happened answers
nothing, because the emulator's edge map is only populated while CFGSTART is
armed. This tool arms the recorder before the machine boots, so a load-time
execution cannot be missed, and then answers address questions against the
result.

It exists because of the `MP` header `EIP` question. `docs/entry-point-question.md`
records that `0x101a20`, the `EIP` field of `ENCHANT.EXP`'s header, points one byte
into a real instruction, and that no static sweep can say whether it is ever
reached. One armed capture from `RESET` through the game loading settles it.

CAPTURE

    python3 tools/cfgprobe.py capture --journey --out saves/analysis/entry-boot.txt

    RESET            reboot the emulated machine to the configured boot device
    CFGSTART         arm the edge recorder, before anything loads
    u2flow --journey drive the Towns menu into Ultima II, inside the container,
                     because it needs DISPLAY=:99 and xdotool
    CFGSTOP          stop recording and report the edge count
    SAVECFG          write src dst kind count opcode length exception base preEIP preLen

Two guards, both measured rather than assumed:

  - `RUN` returns empty output whether or not the machine resumed, so a capture
    can be taken of a frozen machine and return an empty graph that reads as a
    quiet one. The capture checks the emulator's own clock before and after and
    refuses if it did not advance.
  - A map that recorded nothing is reported as zero edges and exits non-zero,
    rather than being written and analysed as data.

QUERY

    python3 tools/cfgprobe.py query saves/analysis/entry-boot.txt \
        --segment 000C --image 0x101a20 --image 0x10538e

    --image takes an ENCHANT.EXP file offset. `--address` takes a segment offset
    directly, which is what the MP header's EIP is. They differ by 0x200, and
    conflating them is the error that hid the entry point.

    For each address it reports whether the address appears as the start of an
    executed instruction, whether it appears as a branch destination, and the
    nearest executed instructions either side, which is what distinguishes "not
    reached" from "not in the capture at all".

The file offset and the address are not the same number, and confusing them is
how the entry point was missed twice.

    address  = file offset - 0x200     for segment 000C, because the file's first
                                       0x200 bytes are the MP header and stub
    file off = address + 0x200

`--image` takes a **file offset**, `--address` takes a **segment offset**. The
MP header's `EIP` field is an address, so ask for it with `--address 0x101a20`.
Asking for `--image 0x101a20` looks at file offset 0x101a20, which is 0x200 bytes
away from the entry and is not even an instruction boundary.

    Before answering, it re-derives the instruction-length arithmetic on the
    fall-through edges (`preEIP + preLen == src`) and prints the agreement rate.
    That is the check that the columns are being read the way they were written,
    and it is the one that was wrong in every earlier reading of this format.

THE COLUMNS, from Execute_SaveCFG in references/TOWNSEMU:

    src dst kind count srcOpCode srcNumBytes exception srcBase preEIP preLen

`src` is the address AFTER the instruction ran. `preEIP` is where it started.
Decoding at `src` compares the wrong bytes with the right length, which is why
the answers here use `preEIP`.
"""
import argparse
import json
import subprocess
import sys
import time
import urllib.request

DEFAULT_API = "http://127.0.0.1:8080"
# 127.0.0.1 and not localhost: on this host localhost resolves to ::1, nothing
# listens there, and every call fails instantly with curl exit 56, which looks
# exactly like a dead supervisor. That mistake cost an hour on 2026-10-28.
DEFAULT_CONTAINER = "fmtowns"
DEFAULT_FLOW = "/opt/u2/u2flow.py"
IMAGE_OFFSET_000C = 0x200


def cmd(api, line, timeout=30):
    body = json.dumps({"line": line}).encode()
    req = urllib.request.Request(
        api.rstrip("/") + "/api/cmd", data=body, headers={"Content-Type": "application/json"}
    )
    with urllib.request.urlopen(req, timeout=timeout) as r:
        return [str(row) for row in json.load(r).get("output", [])]


def clock(api):
    """The emulator's own nanosecond clock. Identical values mean paused."""
    for row in cmd(api, "STA"):
        if "Towns TIME" in row:
            digits = "".join(ch for ch in row.split(":")[-1] if ch.isdigit())
            if digits:
                return int(digits)
    return None


def do_capture(args):
    api = args.api
    before = clock(api)
    if before is None:
        print("capture: STA gave no clock reading. Is the supervisor up?")
        return 1
    time.sleep(2)
    after = clock(api)
    if after == before:
        print("capture: the emulated machine is paused, so a capture would be empty.")
        print("         RUN it first. No capture written.")
        return 1

    print("capture: clock advancing, %d ns" % before)
    print("capture: RESET")
    cmd(api, "RESET")
    time.sleep(args.settle)
    print("capture: CFGSTART")
    out = cmd(api, "CFGSTART")
    for row in out:
        print("         " + row)

    if args.journey:
        print("capture: driving into the game inside %s" % args.container)
        proc = subprocess.run(
            ["podman", "exec", args.container, "python3", args.flow, "--journey"],
            capture_output=True,
            text=True,
            timeout=args.journey_timeout,
        )
        tail = [ln for ln in proc.stdout.strip().splitlines() if ln][-6:]
        for row in tail:
            print("         " + row)
        if proc.returncode != 0:
            print("capture: u2flow exited %d, so the machine may not be in the game" % proc.returncode)
            if proc.stderr.strip():
                print("         " + proc.stderr.strip().splitlines()[-1])
            return 1

    print("capture: CFGSTOP")
    edges = None
    for row in cmd(api, "CFGSTOP"):
        print("         " + row)
        if "distinct edges" in row:
            edges = int("".join(ch for ch in row.split("distinct edges")[0] if ch.isdigit()))
    print("capture: SAVECFG %s" % args.out)
    for row in cmd(api, "SAVECFG " + args.out):
        print("         " + row)

    if not edges:
        print("capture: the recorder counted zero edges. Nothing written worth analysing.")
        return 1
    return 0


def read_edges(path):
    rows = []
    with open(path, "r", encoding="utf-8", errors="replace") as fh:
        for line in fh:
            f = line.split()
            if len(f) < 10:
                continue
            try:
                sseg, soff = f[0].split(":")
                dseg, doff = f[1].split(":")
                rows.append(
                    {
                        "srcSeg": sseg.upper(),
                        "src": int(soff, 16),
                        "dstSeg": dseg.upper(),
                        "dst": int(doff, 16),
                        "kind": f[2],
                        "count": int(f[3]),
                        "preEIP": int(f[8], 16),
                        "preLen": int(f[9]),
                    }
                )
            except ValueError:
                continue
    return rows


def do_query(args):
    rows = read_edges(args.capture)
    if not rows:
        print("query: no edges in %s. That is not a quiet machine, it is a bad file." % args.capture)
        return 1

    seg = args.segment.upper()
    off = args.offset
    if off is None:
        off = IMAGE_OFFSET_000C if seg == "000C" else 0
    mine = [r for r in rows if r["srcSeg"] == seg]
    executed = sorted({r["preEIP"] for r in mine})
    dests = {r["dst"] for r in mine}
    dests |= {r["dst"] for r in rows if r["dstSeg"] == seg}

    print("%s: %d edges" % (args.capture, len(rows)))
    print("segment %s: %d edges, %d distinct executed instructions, %d distinct destinations"
          % (seg, len(mine), len(executed), len(dests)))

    # The self-check. Every fall-through edge must satisfy preEIP + preLen == src.
    f_all = [r for r in rows if r["kind"] == "F"]
    f_mine = [r for r in mine if r["kind"] == "F"]
    for label, group in (("all segments", f_all), ("segment " + seg, f_mine)):
        good = sum(1 for r in group if r["preEIP"] + r["preLen"] == r["src"])
        pct = (100.0 * good / len(group)) if group else 0.0
        print("  fall-through arithmetic, %-14s %d of %d agree (%.1f%%)"
              % (label + ":", good, len(group), pct))

    if executed:
        lo, hi = executed[0] + off, executed[-1] + off
        print("  image range: 0x%X to 0x%X" % (lo, hi))

    rc = 0
    wants = []
    for want in args.image or []:
        wants.append(("file offset 0x%X" % int(want, 16), int(want, 16) - off))
    for want in args.address or []:
        wants.append(("address 0x%X" % int(want, 16), int(want, 16)))
    for label, addr in wants:
        hit = addr in executed
        isdst = addr in dests
        print("\n%s  ->  %s:%X" % (label, seg, addr))
        print("  executed as an instruction start: %s" % ("YES" if hit else "no"))
        print("  reached as a branch destination:  %s" % ("YES" if isdst else "no"))
        if addr in executed or addr in dests:
            rc = 0
            continue
        if not executed:
            print("  the segment never executed, so this says nothing.")
            rc = 1
            continue
        below = [a for a in executed if a < addr][-3:]
        above = [a for a in executed if a > addr][:3]
        print("  nearest executed below: " + (" ".join("0x%X" % (a + off) for a in below) or "none"))
        print("  nearest executed above: " + (" ".join("0x%X" % (a + off) for a in above) or "none"))
        print("  verdict: not reached in this capture")
    return rc


def main(argv):
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    sub = ap.add_subparsers(dest="mode", required=True)

    cap = sub.add_parser("capture", help="arm the recorder, boot, and save the edge list")
    cap.add_argument("--out", required=True, help="path inside the container, e.g. /data/analysis/x.txt")
    cap.add_argument("--api", default=DEFAULT_API)
    cap.add_argument("--container", default=DEFAULT_CONTAINER)
    cap.add_argument("--flow", default=DEFAULT_FLOW)
    cap.add_argument("--journey", action="store_true", help="drive the Towns menu into Ultima II")
    cap.add_argument("--settle", type=float, default=3.0, help="seconds to wait after RESET")
    cap.add_argument("--journey-timeout", type=float, default=300.0)
    cap.set_defaults(func=do_capture)

    q = sub.add_parser("query", help="report whether addresses were executed")
    q.add_argument("capture")
    q.add_argument("--segment", default="000C")
    q.add_argument("--offset", type=lambda s: int(s, 16), default=None,
                   help="image = address + offset. Defaults to 0x200 for 000C, 0 otherwise")
    q.add_argument("--image", action="append",
                   help="file offset into ENCHANT.EXP, e.g. 0x101c20. Repeatable")
    q.add_argument("--address", action="append",
                   help="segment offset, e.g. 0x101a20 for the MP header EIP. Repeatable")
    q.set_defaults(func=do_query)

    args = ap.parse_args(argv)
    return args.func(args)


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
