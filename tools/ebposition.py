"""Decode the EB glyph set using structural position as the signal.

Nine probes failed because they tried to align runs with Shift-JIS twins that do not
correspond. This takes a different route entirely.

Facts now established:
  - 73 distinct glyphs, 5802 occurrences
  - the frequency curve is text-like (top 10 = 52.4%, hapax 6.8%)
  - eb 74 ends 316 strings
  - eb 91 ends 93
  - eb 75 ends 30

In Japanese message text with 73 distinct characters, the set is almost certainly:
  - the 46 basic katakana OR hiragana
  - a handful of kanji used repeatedly in menus
  - punctuation: 。 、 ！ ？ ・ ： 　

The decisive structural test is POSITION. A character that ends 316 strings is a
sentence terminator. A character that appears immediately before it is the last
syllable of a verb, and Japanese verbs end in -u/-ru/-su/-ku/-mu/-bu/-nu/-tsu/-gu.

So: look at the glyph that precedes eb 74. If it clusters on a small set, those are
verb endings, and the set should look like ます / です / した / くだ.
"""

import sys
from collections import Counter

HEADER = 0x20
LO, HI = 0x1000, 0x8200


def runs(buf):
    out = []
    i = LO
    while i < HI:
        if buf[i] == 0:
            i += 1
            continue
        end = i
        while end < HI and buf[end] != 0:
            end += 1
        out.append(buf[i:end])
        i = end + 1
    return out


def glyphs_of(r):
    g = []
    i = 0
    while i + 1 < len(r) and r[i] == 0xEB:
        g.append(r[i + 1])
        i += 2
    return g


def main():
    path = sys.argv[1] if len(sys.argv) > 1 else '/var/home/paul/Projects/ai/fm-family-ultima-trilogy/ENCHANT.EXP'
    with open(path, 'rb') as f:
        buf = f.read()[HEADER:]

    rs = runs(buf)

    # Strings that are pure EB runs and end in eb 74.
    pure = []
    for r in rs:
        g = glyphs_of(r)
        if g and len(g) * 2 == len(r):
            pure.append(g)

    print('pure EB strings: %d' % len(pure))
    print()

    end74 = [g for g in pure if g[-1] == 0x74]
    print('of those, ending in eb 74: %d' % len(end74))
    print()

    # What precedes the terminator?
    before = Counter(g[-2] for g in end74 if len(g) >= 2)
    print('glyph immediately before the terminator (verb endings):')
    for g, n in before.most_common(12):
        print('  0x%02x  %d times' % (g, n))

    print()
    # And two before, which distinguishes -masu from -desu etc.
    pairs = Counter((g[-3], g[-2]) for g in end74 if len(g) >= 3)
    print('two glyphs before the terminator:')
    for (a, b), n in pairs.most_common(12):
        print('  0x%02x 0x%02x  %d times' % (a, b, n))

    print()
    # Full endings, 2 to 4 glyphs long.
    tails = Counter(tuple(g[-4:]) for g in end74 if len(g) >= 4)
    print('full 4-glyph string endings:')
    for t, n in tails.most_common(10):
        print('  %s  %d times' % (' '.join('%02x' % x for x in t), n))

    print()
    # Compare against known Japanese verb endings in katakana:
    #   マス デス シタ クダサイ ゴザイマス
    print('expected common message endings in katakana:')
    print('  マス  デス  シタ  クダサイ  ゴザイマス  オネガイシマス')
    print('all of those end in ス (su) before the period, so the glyph immediately')
    print('before the terminator should be dominated by ONE value if this holds.')

    print()
    if before:
        top, n = before.most_common(1)[0]
        print('actual most common preceding glyph: 0x%02x (%d of %d, %.0f%%)'
              % (top, n, len(end74), 100.0 * n / len(end74)))


if __name__ == '__main__':
    main()
