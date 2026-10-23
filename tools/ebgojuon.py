"""Test whether the EB glyph indices follow katakana gojuon order.

The position test split the alphabet cleanly:
    0x40..0x4e  appear mostly at string START, never at end
    0x5a..0x77  appear mid-string or at END, never at start

In katakana there are 46 basic characters in gojuon order:
    ア イ ウ エ オ | カ キ ク ケ コ | サ シ ス セ ソ | タ チ ツ テ ト
    ナ ニ ヌ ネ ノ | ハ ヒ フ ヘ ホ | マ ミ ム メ モ | ヤ ユ ヨ
    ラ リ ル レ ロ | ワ ヲ ン

If glyphs are assigned in order, consecutive glyph values are consecutive katakana.
The strongest test available: Japanese words have known structure. A verb stem is
followed by an inflection, and -imasu/-emasu/-shimasu follow a fixed pattern.

Rather than guess the start index, search for the offset that makes the most strings
end in a plausible infinitive. Try every base and count how many strings end with
ガ/シ/チ/ビ/ミ/リ (the -i forms that take マス).
"""

import sys
from collections import Counter

HEADER = 0x20
LO, HI = 0x1000, 0x8200

# Katakana in gojuon order, the standard subset fonts use.
KANA = (
    'アイウエオ'
    'カキクケコ'
    'サシスセソ'
    'タチツテト'
    'ナニヌネノ'
    'ハヒフヘホ'
    'マミムメモ'
    'ヤユヨ'
    'ラリルレロ'
    'ワヲン'
)

# Small kana and marks that usually follow the main block.
EXTRA = 'ャュョッァィゥェォー'


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
    allg = sorted({x for g in pure for x in g})

    print('pure strings: %d, distinct glyphs: %d' % (len(pure), len(allg)))
    print('glyph range: 0x%02x..0x%02x (%d values, %d gaps)'
          % (min(allg), max(allg), max(allg) - min(allg) + 1,
             max(allg) - min(allg) + 1 - len(allg)))
    print()
    missing = [x for x in range(min(allg), max(allg) + 1) if x not in allg]
    print('absent values in range: %s' % ' '.join('%02x' % x for x in missing))
    print()

    # Known: 0x74 = 。. That is NOT in the kana range, so the font has >=2 blocks:
    # one for kana and one for punctuation/marks.
    print('0x74 = 。 is established. 0x74 is above the kana-looking range, so the')
    print('font is at least two blocks: text glyphs, then punctuation.')
    print()

    # The kana block is probably contiguous. Find the largest contiguous run.
    runs_ = []
    cur = [allg[0]]
    for x in allg[1:]:
        if x == cur[-1] + 1:
            cur.append(x)
        else:
            runs_.append(cur)
            cur = [x]
    runs_.append(cur)
    print('contiguous glyph runs:')
    for r in runs_:
        print('  0x%02x..0x%02x  %d values  %s'
              % (r[0], r[-1], len(r), ''.join(chr(0x41) if len(r) < 3 else '')))

    print()
    print('If a run is exactly 46 long it is the katakana gojuon table.')
    for r in runs_:
        if 44 <= len(r) <= 48:
            print('  CANDIDATE: 0x%02x..0x%02x is %d long' % (r[0], r[-1], len(r)))
            # Render a sample under that assumption.
            base = r[0]
            print('    would give 0x%02x=ア, 0x%02x=カ, 0x%02x=サ, 0x%02x=マ'
                  % (base, base + 5, base + 10, base + 35))
            print('    sample strings:')
            for g in pure[:6]:
                s = ''.join(
                    KANA[x - base] if 0 <= x - base < len(KANA) else
                    ('。' if x == 0x74 else '·')
                    for x in g
                )
                print('      %-20s -> %s' % (' '.join('%02x' % y for y in g), s))


if __name__ == '__main__':
    main()
