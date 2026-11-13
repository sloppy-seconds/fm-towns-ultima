#!/usr/bin/env python3
"""tools/callers.py - list call sites whose target lands in an address range.

WHY THIS EXISTS. The CD BIOS in FMT_SYS.ROM has no discoverable entry by opcode
search: `cmp ah,0x50`, `cmp ah,0xFD` and `cmp al,0xFD` all occur zero times in the ROM.
Walking upward from the code that is known to touch the CD controller registers found
it instead, because the callers cluster immediately above the dispatcher. That walk is
three lines of Python and was retyped by hand first, so it is a tool.

USAGE
    python3 tools/callers.py FILE LO HI [--far] [--32]
    python3 tools/callers.py /var/tmp/io/FMT_SYS.ROM 0x3c990 0x3cd80
    python3 tools/callers.py ENCHANT.EXP 0xe64e8 0xe64e9 --32

File offset is the address here because the ROM is treated as mapping at 0, which is how
the disassembly windows in docs/audio-playback.md 9.6 address it.

TWO ENCODINGS, AND THE FLAG IS NOT OPTIONAL. `--32` is for the game images, which are
32-bit x86: their `E8` takes a four-byte displacement and the call is five bytes long.
Without it the tool uses the 16-bit form, two-byte displacement and a three-byte call,
which is right for the real-mode CD BIOS ROM and silently wrong for every `.EXP`. Measured
2026-11-13: without the flag, the six callers of `0xe64e8` in `ENCHANT.EXP` report as zero,
because each target is computed from two bytes of a four-byte field.

A count of zero is a result: no near call into 0x3C795 is what says the CD BIOS
dispatcher is entered by a far call or through a vector rather than by a near call. But
a zero from the wrong encoding is not a result, which is why the flag is documented here
rather than left to be discovered.
"""
import sys


def main(path, lo, hi, want_far, bits):
    with open(path, 'rb') as f:
        b = f.read()
    near = []
    width = 4 if bits == 32 else 2
    for i in range(len(b) - (width + 1)):
        if b[i] == 0xE8:
            rel = int.from_bytes(b[i + 1:i + 1 + width], 'little', signed=True)
            tgt = i + 1 + width + rel
            if lo <= tgt < hi:
                near.append((i, tgt))
    print(f"{path}: {len(near)} near call(s) into {hex(lo)}..{hex(hi)} ({bits}-bit encoding)")
    for site, tgt in near[:60]:
        print(f"  site {site:#08x} -> {tgt:#08x}")
    if want_far:
        far = [(i, int.from_bytes(b[i + 3:i + 5], 'little'), int.from_bytes(b[i + 1:i + 3], 'little'))
               for i in range(len(b) - 4) if b[i] == 0x9A]
        print(f"{len(far)} far call(s) total:")
        for site, seg, off in far[:20]:
            print(f"  site {site:#08x} -> {seg:04x}:{off:04x}")


if __name__ == '__main__':
    if len(sys.argv) < 4:
        sys.exit(__doc__)
    main(sys.argv[1], int(sys.argv[2], 0), int(sys.argv[3], 0), '--far' in sys.argv,
         32 if '--32' in sys.argv else 16)
