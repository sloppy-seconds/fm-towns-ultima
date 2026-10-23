"""Decode the EB glyph set using the -masu (-マス) verb ending as the anchor.

The previous probe found that the most common string ending is four glyphs:
    65 5e 5d 74      (10 occurrences)
and the most common glyph before the terminator is 5d (21%).

Japanese message text is overwhelmingly polite form. The two most common endings are
    マス。        (masu.)     -> 3 kana + period
    シマス。      (shimasu.)  -> 4 kana + period
    クダサイ。    (kudasai.)  -> 5 kana + period

A four-glyph ending of 65 5e 5d 74 therefore reads  X マ ス 。 or X シ マ ス is
too long. The simplest reading that fits 4 glyphs with 2nd=マ and 3rd=ス is
    シ マ ス 。
because シマス。 is exactly four.

Test that assignment against everything else and see if the rest is consistent.
The method: assume 74='。', 5d='ス', 5e='マ'. Then check whether strings that should
contain ス (almost every polite sentence) do, and whether 74 is always final.
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
    return g, i == len(r)


# Provisional mapping from the -masu anchor.
PROV = {
    0x74: '。',
    0x5D: 'ス',
    0x5E: 'マ',
}


def render(g):
    return ''.join(PROV.get(x, '·') for x in g)


def main():
    path = sys.argv[1] if len(sys.argv) > 1 else '/var/home/paul/Projects/ai/fm-family-ultima-trilogy/ENCHANT.EXP'
    with open(path, 'rb') as f:
        buf = f.read()[HEADER:]

    rs = runs(buf)
    pure = [g for g, ispure in (glyphs_of(r) for r in rs) if ispure and g]

    print('provisional mapping: 74=。  5d=ス  5e=マ')
    print('testing whether that reading is consistent.\n')

    # Test 1: is 0x74 ever NOT last in a pure string?
    notlast = [g for g in pure if 0x74 in g[:-1]]
    print('T1: strings containing 74 in a non-final position: %d of %d'
          % (len(notlast), len(pure)))
    if notlast:
        print('     that is a problem for 74="。" unless it is also used mid-string.')
        for g in notlast[:5]:
            print('       %s' % render(g))

    # Test 2: how many strings contain 0x5d (ス)? Polite text should be most of them.
    withsu = sum(1 for g in pure if 0x5D in g)
    print('\nT2: strings containing 5d: %d of %d (%.0f%%)'
          % (withsu, len(pure), 100.0 * withsu / len(pure)))

    # Test 3: does the 3-glyph ending 5e 5d 74 = マス。 appear, which would confirm?
    e3 = sum(1 for g in pure if len(g) >= 3 and g[-3:] == [0x5E, 0x5D, 0x74])
    print('T3: strings ending 5e 5d 74 (=マス。): %d' % e3)

    # Test 4: the most common SHORT strings, rendered.
    print('\nT4: most common short pure strings, rendered with the provisional map:')
    for g in sorted(pure, key=len)[:20]:
        print('  %-18s %s' % (' '.join('%02x' % x for x in g), render(g)))

    # Test 5: glyph 0x91 is the 2nd most common globally and ends 93 strings.
    # What are those strings?
    e91 = [g for g in pure if g[-1] == 0x91]
    print('\nT5: strings ending in 0x91: %d' % len(e91))
    print('     the glyph before it:')
    b = Counter(g[-2] for g in e91 if len(g) >= 2)
    for gg, n in b.most_common(6):
        print('       0x%02x  %d' % (gg, n))


if __name__ == '__main__':
    main()
