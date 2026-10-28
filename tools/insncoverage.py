#!/usr/bin/env python3
"""tools/insncoverage.py - which bytes of the image the recompiler treats as instruction bytes.

WHY. Item 7c. The program patches its own instructions: the routine the image names "int86"
at guest 0x1023f6 writes the caller's interrupt number into its own `int` slot
(`mov [0x10241b], al`) and then executes it. A recompiled module compiles the bytes on disk, so
every such site is a latent port fault, and one site found by tripping over it does not prove it
is the only one.

`U2_DIFF_CODE=1` on the port diffs guest memory against the image at the end of a run, but that
raw diff cannot tell a data write from a patched instruction, and the data volume drowns the
answer: 522,596 of 1,071,886 bytes differ after 3,000 frames, almost all of it the program filling
its own zero-filled data. This tool supplies the missing classification. It runs the same walk the
recompiler runs, with the same seeds and the same no-code ranges, and writes the address and size
of every instruction it decoded. A difference that lands inside one of those is a patched
instruction. A difference anywhere else is data.

USAGE, from the build script so the seeds and ranges cannot drift from the compile:

    tools/insncoverage.py --image <stripped image> --seeds 0x..,0x.. \
        --no-code 0xb91:0xe1c --no-code ... --out <file>

The frame is the guest frame, which is what the module and the port use, because the image passed in
is already stripped of its 0x200 header and stub.

Exit status 1 if the walk produced no instructions, because an empty coverage file would silently
classify every patched instruction as data.
"""

import argparse
import sys


def main(argv):
    ap = argparse.ArgumentParser()
    ap.add_argument('--image', required=True)
    ap.add_argument('--seeds', default='')
    ap.add_argument('--no-code', action='append', default=[], metavar='LO:HI')
    ap.add_argument('--out', required=True)
    a = ap.parse_args(argv)

    from fmtownskit.recomp import discover

    data = open(a.image, 'rb').read()
    seeds = [int(s, 16) for s in a.seeds.split(',') if s.strip()]
    if not seeds:
        print('no seeds given: an empty walk would classify every patch as data', file=sys.stderr)
        return 1
    ranges = []
    for r in a.no_code:
        lo, _, hi = r.partition(':')
        ranges.append((int(lo, 16), int(hi, 16)))

    prog = discover.Program(data, 0, seeds, 'coverage', no_code=ranges)
    if not prog.insn:
        print('the walk decoded no instructions', file=sys.stderr)
        return 1

    total = sum(i.size for i in prog.insn.values())
    with open(a.out, 'w') as f:
        f.write('# addr size, guest frame, from the same walk that produced the module\n')
        for addr in sorted(prog.insn):
            f.write('%x %d\n' % (addr, prog.insn[addr].size))
    print('coverage  %s: %d instructions, %d bytes of instruction' % (a.out, len(prog.insn), total))
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
