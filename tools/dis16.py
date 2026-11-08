#!/usr/bin/env python3
"""tools/dis16.py - disassemble a 16-bit real-mode window with capstone.

WHY THIS EXISTS. The CD layer is 16-bit code inside IO.SYS, reached through Int 93h,
and reading it means disassembling a window at a file offset while remembering that
the file is loaded at linear 0x400. Addresses in a listing are therefore only usable
when the file offset, the linear address and the `segment:offset` form are all shown
together, and that conversion is where mistakes are made by hand. Measured once from
two independent alignments: `0256:0018` is file `0x2178`, and physical `0:05E0` is
file `0x01E0`.

USAGE
    tools/.venv/bin/python tools/dis16.py FILE START LENGTH [BASE]
    tools/.venv/bin/python tools/dis16.py /var/tmp/io/IO.SYS 0x4179 0x20 0x400

BASE defaults to 0x400, the load address of IO.SYS, and is used only to print the
`segment:offset` form beside each file offset.

Needs capstone, so `./tools/decode-setup.sh` must have been run once.
"""
import sys

from capstone import CS_ARCH_X86, CS_MODE_16, Cs


def main(path, start, length, base):
    with open(path, 'rb') as f:
        b = f.read()
    md = Cs(CS_ARCH_X86, CS_MODE_16)
    print(f"{path} [{hex(start)}..{hex(start + length)})  base {hex(base)}")
    for ins in md.disasm(b[start:start + length], start):
        lin = ins.address + base
        raw = b[ins.address:ins.address + ins.size].hex(' ')
        print(f"{ins.address:08x} {lin >> 4:04x}:{lin & 0xF:04x}  {raw:20} {ins.mnemonic} {ins.op_str}")


if __name__ == '__main__':
    if len(sys.argv) < 4:
        sys.exit(__doc__)
    main(sys.argv[1], int(sys.argv[2], 0), int(sys.argv[3], 0),
         int(sys.argv[4], 0) if len(sys.argv) > 4 else 0x400)
