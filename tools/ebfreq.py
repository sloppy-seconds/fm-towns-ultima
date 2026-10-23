"""Test the hypothesis that the EB suffix is Japanese text, using frequency.

Every earlier attempt to decode the EB runs guessed at alignment. This one uses a
different signal: Japanese text has a very distinctive frequency profile, and the top
characters are known.

If `eb 74` ends 316 strings and is a punctuation character, it is almost certainly `。`
(ideographic full stop), which is the single most common sentence-ending mark.

Build the profile and compare it against known Japanese frequency order:
    の に は を た が で て と し れ さ あ か る も す ま う く

If the EB glyph frequencies rank in that order, the runs are text and the mapping is
derivable. If they do not, they are not text.
"""

import sys
from collections import Counter

HEADER = 0x20
LO, HI = 0x1000, 0x8200

# Known Japanese character frequency order, approximate, from common corpora.
JA_ORDER = 'のにをはがでてとしれさあかるもすまうく'


def main():
    path = sys.argv[1] if len(sys.argv) > 1 else '/var/home/paul/Projects/ai/fm-family-ultima-trilogy/ENCHANT.EXP'
    with open(path, 'rb') as f:
        buf = f.read()[HEADER:]

    # Gather every EB glyph in the region.
    glyphs = Counter()
    i = LO
    while i < HI - 1:
        if buf[i] == 0xEB:
            glyphs[buf[i + 1]] += 1
            i += 2
        else:
            i += 1

    total = sum(glyphs.values())
    print('EB glyphs in 0x%x..0x%x: %d occurrences, %d distinct'
          % (LO, HI, total, len(glyphs)))
    print()
    print('top 25 glyphs by frequency:')
    for g, n in glyphs.most_common(25):
        print('  0x%02x  %5d  %5.2f%%' % (g, n, 100.0 * n / total))

    print()
    print('=== comparison: Japanese text frequency ===')
    print('the most common kana should dominate the same way in real text.')
    print('expected order (approx): %s' % ' '.join(JA_ORDER[:15]))
    print()
    print('actual top 15 glyphs:    %s'
          % ' '.join('%02x' % g for g, _ in glyphs.most_common(15)))

    # A numeric test: in Japanese prose, the top 10 characters account for roughly
    # a third of all characters. Compute the actual concentration.
    top10 = sum(n for _, n in glyphs.most_common(10))
    print()
    print('top 10 glyphs account for %.1f%% of all EB glyphs' % (100.0 * top10 / total))
    print('for comparison, top 10 kana in Japanese prose is roughly 30-40%')

    # And how many glyphs are used only once? Hapax rate is a text signal.
    once = sum(1 for n in glyphs.values() if n == 1)
    print('glyphs seen exactly once: %d of %d (%.1f%%)'
          % (once, len(glyphs), 100.0 * once / len(glyphs)))


if __name__ == '__main__':
    main()
