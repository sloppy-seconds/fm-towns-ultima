"""Refine the EB mapping now that 74 = 。 is confirmed.

Established by measurement, not guess:
  - 0x74 occurs non-finally in only 3 of 160 pure strings, and those are "。。"
  - so 0x74 = 。 (ideographic full stop)

That is the FIRST glyph decoded with a hard test rather than a plausible story.

Everything else must now be derived the same way: by a property of Japanese text that
can be measured, and a prediction that can fail.

Candidate properties:
  P1. A quote or bracket glyph must appear in matched pairs, and its opening form
      must always precede its closing form.
  P2. A character that never appears at the start of a string is a particle or a
      suffix.
  P3. The most frequent glyph overall in Japanese prose is の or に or は.
"""

import sys
from collections import Counter, defaultdict

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
    return g, i == len(r)


def main():
    path = sys.argv[1] if len(sys.argv) > 1 else '/var/home/paul/Projects/ai/fm-family-ultima-trilogy/ENCHANT.EXP'
    with open(path, 'rb') as f:
        buf = f.read()[HEADER:]

    rs = runs(buf)
    pure = [g for g, p in (glyphs_of(r) for r in rs) if p and g]
    print('pure EB strings: %d\n' % len(pure))

    allg = Counter(x for g in pure for x in g)
    total = sum(allg.values())

    # P2: which glyphs never start a string, and which never end one?
    starts = Counter(g[0] for g in pure if g)
    ends = Counter(g[-1] for g in pure if g)
    print('P2: position exclusivity (pure strings only)')
    print('  never at start (suffix-like):')
    nevers = [x for x in allg if starts.get(x, 0) == 0]
    for x in sorted(nevers):
        print('    0x%02x  %4d uses, 0 starts, %3d ends' % (x, allg[x], ends.get(x, 0)))
    print('  never at end (prefix-like):')
    for x in sorted(x for x in allg if ends.get(x, 0) == 0):
        print('    0x%02x  %4d uses, %3d starts, 0 ends' % (x, allg[x], starts.get(x, 0)))

    # P1: bracket pairing. Find pairs (a,b) where count(a)==count(b) and in every
    # string, a appears before b.
    print()
    print('P1: candidate bracket pairs (equal counts, ordered)')
    for a in allg:
        for b in allg:
            if a >= b:
                continue
            if allg[a] != allg[b] or allg[a] < 3:
                continue
            ok = True
            seen = 0
            for g in pure:
                ia = g.index(a) if a in g else -1
                ib = g.index(b) if b in g else -1
                if ia >= 0 and ib >= 0:
                    seen += 1
                    if ia > ib:
                        ok = False
                        break
            if ok and seen >= 3:
                print('  0x%02x / 0x%02x  count %d, co-occur %d, ordered OK'
                      % (a, b, allg[a], seen))

    # The single-glyph strings are pure punctuation.
    print()
    print('single-glyph strings (pure punctuation) and their counts:')
    singles = Counter(g[0] for g in pure if len(g) == 1)
    for x, n in singles.most_common():
        print('  0x%02x  appears alone %d times' % (x, n))

    print()
    print('established so far: 0x74 = 。 (3 of 160 non-final, and those are 。。)')


if __name__ == '__main__':
    main()
