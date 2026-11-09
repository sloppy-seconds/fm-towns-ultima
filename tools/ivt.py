#!/usr/bin/env python3
"""tools/ivt.py - read the real-mode interrupt vector table out of a Tsugaru MEMDUMP log.

WHY THIS EXISTS. Which vector points where is how the Towns' interrupt handlers were told apart:
Int 93h resolved to 0256:0000, which is IO.SYS file 0x2160, and comparing that address against the
file byte for byte is what confirmed the CD entry. Int 21h resolved into a region the file does not
match, which is how we learned the OS overwrites part of its own image. Both findings are in
docs/audio-playback.md 9.10 and both came from this conversion, which was a scratch script until
the claims above needed to be checkable.

WHAT IT EXPECTS. The log of `MD 0:0000 16 64` from the emulator's debug console: 64 lines of the
form `0000:00000AF0 xx xx ...`, which are 1,024 bytes, 256 four-byte vectors of offset then
segment.

USAGE
    python3 tools/ivt.py dump.log            the vectors worth looking at, plus any high segment
    python3 tools/ivt.py dump.log --all      every vector that is not zero

IO.SYS loads at linear 0x400 and is 77,824 bytes, so segments 0x0040 to 0x1340 are its range; the
default output says which side of that each interesting vector falls on, because that is the part
that took the work to establish.
"""
import re
import sys

INTERESTING = (0x08, 0x09, 0x10, 0x13, 0x16, 0x1A, 0x21, 0x25, 0x2F, 0x33, 0x93)
IO_LO, IO_HI = 0x40, 0x1340


def load(path):
    mem = {}
    for line in open(path, errors='replace'):
        m = re.match(r'^0000:([0-9A-Fa-f]{8}) ((?:[0-9A-Fa-f]{2} ?){1,16})', line)
        if not m:
            continue
        base = int(m.group(1), 16)
        for i, tok in enumerate(m.group(2).split()):
            mem[base + i] = int(tok, 16)
    return mem


def main(path, show_all):
    mem = load(path)
    missing = sum(1 for a in range(0x400) if a not in mem)
    print(f"collected {len(mem)} bytes, {missing} of the first 1024 missing")

    def vec(n):
        off = mem.get(n * 4, 0) | (mem.get(n * 4 + 1, 0) << 8)
        seg = mem.get(n * 4 + 2, 0) | (mem.get(n * 4 + 3, 0) << 8)
        return off, seg, seg * 16 + off

    wanted = range(256) if show_all else INTERESTING
    for n in wanted:
        off, seg, lin = vec(n)
        if show_all and not (off or seg):
            continue
        where = 'IO.SYS' if IO_LO <= seg <= IO_HI else 'other'
        print(f"  int {n:02X}  {seg:04X}:{off:04X}  linear {lin:#08x}  {where}")

    if not show_all:
        high = {}
        for n in range(256):
            off, seg, lin = vec(n)
            if seg >= 0xA000:
                high[seg] = high.get(seg, 0) + 1
        if high:
            print("\n  segments at or above 0xA000 (firmware or a protected-mode mapping):")
            for seg in sorted(high):
                print(f"    seg {seg:04X}: {high[seg]} vector(s)")


if __name__ == '__main__':
    if len(sys.argv) < 2:
        sys.exit(__doc__)
    main(sys.argv[1], '--all' in sys.argv)
