#!/usr/bin/env python3
"""tools/cdlayer.py - report which disc files contain the FM Towns CD layer.

WHY THIS EXISTS. The Int 93h CD services and the CD-DA music are reached through
IO.SYS rather than through any of the game's modules, and finding that out meant
scanning the system files for four independent kinds of evidence. Two of them are
decisive on their own and cheap to recompute: references to the CD controller
registers 0x4C0 to 0x4C7, and the presence of the CD strings. This tool prints
that evidence per file so the claim in docs/audio-playback.md 9.1 is reproducible
by anyone who has extracted the same files.

USAGE
  node tools/getfile.js IO.SYS --out /var/tmp/io
  node tools/getfile.js T_OAK2.EXE --out /var/tmp/io
  python3 tools/cdlayer.py /var/tmp/io/IO.SYS /var/tmp/io/T_OAK2.EXE

WHAT IT COUNTS, and why each one matters:
  ports  mov dx,0x4C0..0x4C7 (BA C0..C7 04), the controller's command, status,
         parameter and data registers. Only a CD driver issues these.
  int93  the byte pair CD 93. The driver's own call site uses AH=0xFD, AL=0xB0|n.
  str    ASCII strings naming MSCDEX or TOWNS_CD, or containing CD-DA/CDROM.

A count of zero is a result, not a failure: it is how T_OAK2.EXE and CONTROL.EXE
are ruled out as the owners of the CD layer.
"""
import re
import sys

PORT_REGS = range(0xC0, 0xC8)


def scan(path):
    with open(path, 'rb') as f:
        b = f.read()
    ports = 0
    for i in range(len(b) - 2):
        if b[i] == 0xBA and b[i + 2] == 0x04 and b[i + 1] in PORT_REGS:
            ports += 1
    int93 = b.count(b'\xCD\x93')
    strs = []
    for m in re.finditer(rb'[ -~]{5,}', b):
        s = m.group().decode('ascii')
        u = s.upper()
        if 'MSCDEX' in u or 'TOWNS_CD' in u or 'CDDA' in u or 'CD-DA' in u or 'CDROM' in u:
            strs.append((m.start(), s))
    return len(b), ports, int93, strs


def main(paths):
    print(f"{'file':28} {'size':>8} {'ports':>6} {'int93':>6}  strings")
    for p in paths:
        size, ports, int93, strs = scan(p)
        print(f"{p.split('/')[-1]:28} {size:8} {ports:6} {int93:6}  {len(strs)}")
        for off, s in strs:
            print(f"      {off:#08x} {s!r}")


if __name__ == '__main__':
    if len(sys.argv) < 2:
        sys.exit(__doc__)
    main(sys.argv[1:])
