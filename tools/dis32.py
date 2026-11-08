#!/usr/bin/env python3
"""tools/dis32.py - disassemble a 32-bit flat-image window with capstone.

WHY THIS EXISTS. The game's CD code is a cluster at 0xE05F8 to 0xE0FA0 and it talks to
the DOS extender rather than to the BIOS, so reading it is how the request format was
learned. For an MP image the file offset is the code address, which makes a plain
window listing enough, but the call targets matter and a bare mnemonic list hides them.
This prints each instruction and annotates direct call and jump targets.

USAGE
    tools/.venv/bin/python tools/dis32.py ENCHANT.EXP START LENGTH
    tools/.venv/bin/python tools/dis32.py ENCHANT.EXP 0x102692 0x40

Needs capstone, so `./tools/decode-setup.sh` must have been run once.
"""
import sys

from capstone import CS_ARCH_X86, CS_MODE_32, Cs


def main(path, start, length):
    with open(path, 'rb') as f:
        b = f.read()
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    for ins in md.disasm(b[start:start + length], start):
        raw = b[ins.address:ins.address + ins.size].hex(' ')
        note = ''
        if ins.mnemonic.startswith(('call', 'jmp')):
            try:
                note = f"   ; -> {hex(int(ins.op_str, 16))}"
            except ValueError:
                pass
        print(f"{ins.address:06x}  {raw:22} {ins.mnemonic} {ins.op_str}{note}")


if __name__ == '__main__':
    if len(sys.argv) < 4:
        sys.exit(__doc__)
    main(sys.argv[1], int(sys.argv[2], 0), int(sys.argv[3], 0))
