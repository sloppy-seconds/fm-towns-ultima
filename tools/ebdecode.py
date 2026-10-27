#!/usr/bin/env python3
"""ebdecode.py - decode the game's 0xEB-escaped strings, both offsets included.

WHY THIS EXISTS. Six readings of `0xEB` failed because every one of them treated it as a single
transform. It is two, split by the payload:

    payload <= 0x59    result = payload + 1     capitals and the first punctuation block
    payload >= 0x5a    result = payload + 7     lowercase
    payload == 0x74    result = '!'             the commonest line ending, 21 uses
    payload == 0x75    result = '?'             10 uses
    payload == 0x94    result = ')'             the command-key marker, 256 uses
    payload == 0x92    result = ','             2 uses

Everything that is not an `0xEB` escape passes through unchanged, and the whole result is then
Shift-JIS, because these strings mix escaped ASCII with plain Shift-JIS in adjacent entries.

The split was derived from three lines whose wording is not in doubt, because each has a Japanese
twin in the table:

    Eat death Scum!    0x61d0    くたばれ。ひとでなし。
    A guard says:      0x6204    衛兵が言う：
    Pay your taxes!    0x622c    税金を払えよ。

Eighteen payload-to-character pairs came out of those three and every one obeys the split with no
exceptions. The old single `+1` rule decodes `STRENGTH` in the system string table and produces
`_llilu` for real dialogue, which is why the NPC table could not be read.

Usage:
    ./tools/.venv/bin/python3 tools/ebdecode.py                   the NPC dialogue table
    ./tools/.venv/bin/python3 tools/ebdecode.py --at 0x61d0       one string
    ./tools/.venv/bin/python3 tools/ebdecode.py --at 0x61d0 --span 0x430
    ./tools/.venv/bin/python3 tools/ebdecode.py --search scum      decoded strings containing text
    ./tools/.venv/bin/python3 tools/ebdecode.py --json

Not yet explained: the full stop has not been found as a payload in these tables. Note that
0x94 was first read as a zero-width marker, because dropping it turns the race names into
Human, Elf and Dwarf. The Japanese twin rules that out: 0x3389 is E + 0x94 + 人間, so the 0x94
stands where a ')' must be in both languages. It is ')'.
"""

import argparse
import json
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
IMAGE = os.path.join(ROOT, 'ENCHANT.EXP')

# The NPC dialogue block, measured: bilingual pairs from 0x61d0 to about 0x6600.
NPC_START = 0x61D0
NPC_END = 0x6600


def decode(raw):
    """Decode one byte string. Returns text, with unexplained bytes kept as \\xNN."""
    out = bytearray()
    i = 0
    while i < len(raw):
        b = raw[i]
        if b == 0xEB and i + 1 < len(raw):
            p = raw[i + 1]
            if p == 0x74:
                out.append(ord('!'))
            elif p == 0x75:
                out.append(ord('?'))
            elif p == 0x94:
                out.append(ord(')'))
            elif p == 0x92:
                out.append(ord(','))
            elif p <= 0x59:
                out.append((p + 1) & 0xFF)
            else:
                out.append((p + 7) & 0xFF)
            i += 2
        else:
            out.append(b)
            i += 1
    return bytes(out).decode('shift_jis', errors='replace')


def strings_in(data, start, end):
    """NUL-terminated entries with their addresses."""
    out = []
    i = start
    while i < end:
        e = data.find(b'\x00', i)
        if e < 0 or e > end:
            break
        if e > i:
            out.append((i, data[i:e]))
        i = e + 1
    return out


def main():
    ap = argparse.ArgumentParser(description='Decode the 0xEB-escaped strings.')
    ap.add_argument('--at', help='one string, hex address')
    ap.add_argument('--span', help='with --at, how far to walk (hex). Default walks to a NUL.')
    ap.add_argument('--search', help='only strings whose decoded text contains this')
    ap.add_argument('--json', action='store_true')
    a = ap.parse_args()

    if not os.path.exists(IMAGE):
        sys.exit('ENCHANT.EXP not found at %s' % IMAGE)
    with open(IMAGE, 'rb') as f:
        data = f.read()

    if a.at:
        start = int(a.at, 0)
        if a.span:
            rows = strings_in(data, start, start + int(a.span, 0))
        else:
            rows = [(start, data[start:data.find(b'\x00', start)])]
    else:
        rows = strings_in(data, NPC_START, NPC_END)

    decoded = [(addr, decode(raw), raw) for addr, raw in rows]
    if a.search:
        decoded = [r for r in decoded if a.search.lower() in r[1].lower()]

    if a.json:
        print(json.dumps([{'addr': '0x%x' % ad, 'text': t} for ad, t, _ in decoded], indent=1,
                         ensure_ascii=False))
        return 0

    for addr, text, raw in decoded:
        if not text.strip():
            continue
        print('0x%-6x  %s' % (addr, text.replace('\n', '\\n')))
    print('\n%d strings' % len(decoded))
    return 0


if __name__ == '__main__':
    sys.exit(main())
