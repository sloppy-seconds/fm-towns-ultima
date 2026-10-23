#!/usr/bin/env python3
"""Build the font glyph encoding from the game's own string pairs.

Layout, established by inspection of the pool at 0x1d00-0x1f00:

    eb XX eb XX ... 00 <Shift-JIS> 00

The EB run is the phonetic reading and the Shift-JIS string is the display text.
That is why lengths differ: 東へ is two characters and ひがしへ is four mora, and
the glyph run encodes the mora.

This means the mapping cannot be read off by equal-length pairing. It has to be
built from cases where BOTH sides are known: a run whose JIS twin is kana only,
because then glyphs and characters correspond one to one.

Usage:
    python3 tools/fontmap.py [/var/tmp/ENCHANT.EXP]
"""

import sys
from collections import Counter, defaultdict

HEADER = 0x20
LO, HI = 0x1000, 0x8000


def eb_run(buf, off):
    g, i = [], off
    while i + 1 < len(buf) and buf[i] == 0xEB:
        g.append(buf[i + 1])
        i += 2
    return g, i


def jis_after_null(buf, off):
    i = off
    while i < len(buf) and buf[i] == 0:
        i += 1
    j = i
    while j < len(buf) and buf[j] != 0 and j - i < 64:
        j += 1
    if j - i < 1:
        return None
    try:
        return buf[i:j].decode('shift_jis')
    except UnicodeDecodeError:
        return None


def is_kana_only(s):
    """True if every character is kana or a long-vowel mark.

    Only these pairs give a one-to-one glyph/character correspondence, because
    kanji compress several mora into one character.
    """
    if not s:
        return False
    for c in s:
        if '\u3040' <= c <= '\u309f':   # hiragana
            continue
        if '\u30a0' <= c <= '\u30ff':   # katakana
            continue
        if c in 'ー−・　 ':
            continue
        return False
    return True


def main():
    path = sys.argv[1] if len(sys.argv) > 1 else '/var/tmp/ENCHANT.EXP'
    with open(path, 'rb') as f:
        buf = f.read()[HEADER:]

    pairs = []
    i = LO
    while i < HI - 1:
        if buf[i] == 0xEB:
            glyphs, after = eb_run(buf, i)
            text = jis_after_null(buf, after)
            if text and glyphs:
                pairs.append((i, glyphs, text))
            i = after + 1 if after > i else i + 1
        else:
            i += 1

    print('EB runs with a JIS twin in 0x%x..0x%x: %d' % (LO, HI, len(pairs)))
    print()

    kana = [(o, g, t) for o, g, t in pairs
            if is_kana_only(t) and len(g) == len(t)]
    print('kana-only, equal length (usable for mapping): %d' % len(kana))
    for o, g, t in kana[:30]:
        print('  0x%05x  %-30s -> %s'
              % (o, ' '.join('%02x' % x for x in g), t))

    votes = defaultdict(Counter)
    for _o, g, t in kana:
        for gl, ch in zip(g, t):
            votes[gl][ch] += 1

    print()
    print('glyphs voted: %d' % len(votes))
    good = {}
    for gl, c in votes.items():
        total = sum(c.values())
        top, n = c.most_common(1)[0]
        if n == total and total >= 1:
            good[gl] = top
    print('unanimous mappings: %d' % len(good))
    if good:
        print()
        for gl in sorted(good):
            print('  0x%02x -> %s' % (gl, good[gl]))

    print()
    print('non-kana pairs, for reference (reading vs display):')
    for o, g, t in pairs:
        if not is_kana_only(t):
            print('  0x%05x  %-28s (%d) -> %-10r (%d)'
                  % (o, ' '.join('%02x' % x for x in g), len(g), t, len(t)))


if __name__ == '__main__':
    main()
