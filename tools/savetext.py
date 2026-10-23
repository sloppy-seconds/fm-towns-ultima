#!/usr/bin/env python3
"""savetext.py - pull the text out of a Tsugaru machine state.

Why this exists: the savestate is a snapshot of RAM, and RAM holds every string the
game had loaded, in both English and Shift-JIS. That makes a game's text extractable
from a single file with no emulator running and no gameplay beyond whatever produced
the snapshot.

This is not a substitute for reading the game's own files, and it is not a decompiler.
It is the cheapest way to see what text exists and where, before deciding what is
worth chasing properly.

Usage:
    python3 savetext.py <state>                 summary counts only
    python3 savetext.py <state> --japanese      Shift-JIS runs, decoded
    python3 savetext.py <state> --ascii         printable ASCII runs
    python3 savetext.py <state> --min 20        minimum run length
    python3 savetext.py <state> --offset 0x77   only runs near this offset

Notes on what you will get. A large share of the Japanese text in a U2 snapshot is
not game dialogue: it is TownsOS, the Fujitsu drivers, and the CD launcher, all of
which are resident. Filter by offset if you want to separate game text from platform
text, since the game image occupies its own range.
"""

import sys

MIN_DEFAULT = 12


def is_lead(b):
    return 0x81 <= b <= 0x9F or 0xE0 <= b <= 0xEF


def is_trail(b):
    return 0x40 <= b <= 0xFC and b != 0x7F


def japanese_runs(data, minlen):
    """Contiguous stretches that decode as Shift-JIS with real kana or kanji."""
    runs = []
    i = 0
    n = len(data)
    while i < n - 1:
        if is_lead(data[i]) and is_trail(data[i + 1]):
            start = i
            while i < n - 1 and ((is_lead(data[i]) and is_trail(data[i + 1]))
                                 or data[i] == 0x20
                                 or 0x30 <= data[i] <= 0x7E):
                i += 2 if is_lead(data[i]) else 1
            if i - start >= minlen:
                runs.append((start, data[start:i]))
        else:
            i += 1
    return runs


def ascii_runs(data, minlen):
    runs = []
    start = None
    for i, b in enumerate(data):
        printable = 0x20 <= b <= 0x7E or b in (0x09, 0x0A, 0x0D)
        if printable:
            if start is None:
                start = i
        else:
            if start is not None and i - start >= minlen:
                runs.append((start, data[start:i]))
            start = None
    if start is not None and len(data) - start >= minlen:
        runs.append((start, data[start:]))
    return runs


def has_real_japanese(s):
    return sum(1 for c in s if '\u3040' <= c <= '\u30ff' or '\u4e00' <= c <= '\u9fff') >= 4


def main():
    args = sys.argv[1:]
    if not args:
        print(__doc__)
        return 2
    path = args[0]
    minlen = MIN_DEFAULT
    if '--min' in args:
        minlen = int(args[args.index('--min') + 1])
    near = None
    if '--offset' in args:
        near = int(args[args.index('--offset') + 1], 0)
    want_jp = '--japanese' in args
    want_ascii = '--ascii' in args

    data = open(path, 'rb').read()
    print('file: %s (%d bytes)' % (path, len(data)))

    jp = japanese_runs(data, minlen)
    asc = ascii_runs(data, minlen)
    print('Shift-JIS runs >= %d: %d' % (minlen, len(jp)))
    print('ASCII runs   >= %d: %d' % (minlen, len(asc)))

    if not want_jp and not want_ascii:
        return 0

    if want_jp:
        print()
        print('--- Shift-JIS ---')
        shown = 0
        for off, b in jp:
            if near is not None and abs(off - near) > 0x10000:
                continue
            try:
                s = b.decode('shift_jis')
            except Exception:
                continue
            if not has_real_japanese(s):
                continue
            print('0x%07x (%4d B) %s' % (off, len(b), s.replace('\n', ' ')[:90]))
            shown += 1
        print('shown: %d' % shown)

    if want_ascii:
        print()
        print('--- ASCII ---')
        shown = 0
        for off, b in asc:
            if near is not None and abs(off - near) > 0x10000:
                continue
            s = b.decode('latin1').strip()
            if not s:
                continue
            print('0x%07x (%4d B) %s' % (off, len(b), s.replace('\n', ' | ')[:90]))
            shown += 1
        print('shown: %d' % shown)

    return 0


if __name__ == '__main__':
    sys.exit(main())
