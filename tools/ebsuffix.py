"""Work out what the trailing EB sequence means on Shift-JIS strings.

Observed: many strings are  <Shift-JIS bytes>  followed by  eb 74  or  eb XX.

From strings whose text is unambiguous:

    0x12d6  e6 82 aa 91 ab 82 e8 82 dc 82 b9 82 f1 eb 74
            ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ ^^^^^
            Shift-JIS                               eb 74
            "音源演奏用の領域が足りません"

    0x3320  c4 82 ad 82 be 82 b3 82 a2 81 42
            "ください。" (kudasa-i)

So `eb 74` follows a complete Shift-JIS sentence. It behaves like a terminator or a
style code.

Test: how often does `eb 74` appear at the end of a string, and does it ever appear
mid-string with text after it?
"""

import sys
from collections import Counter

HEADER = 0x20


def main():
    path = sys.argv[1] if len(sys.argv) > 1 else '/var/home/paul/Projects/ai/fm-family-ultima-trilogy/ENCHANT.EXP'
    with open(path, 'rb') as f:
        buf = f.read()[HEADER:]

    lo, hi = 0x1000, 0x8200

    # Collect null-terminated runs.
    runs = []
    i = lo
    while i < hi:
        if buf[i] == 0:
            i += 1
            continue
        end = i
        while end < hi and buf[end] != 0:
            end += 1
        runs.append(buf[i:end])
        i = end + 1

    print('strings in 0x%x..0x%x: %d' % (lo, hi, len(runs)))

    # How many end with an eb-pair?
    enders = Counter()
    for r in runs:
        if len(r) >= 2 and r[-2] == 0xEB:
            enders[r[-1]] += 1
        elif len(r) >= 1:
            enders[('last=%02x' % r[-1])] += 1

    print()
    print('most common string endings:')
    for k, n in enders.most_common(12):
        if isinstance(k, int):
            print('  eb %02x   %d strings' % (k, n))
        else:
            print('  %s     %d strings' % (k, n))

    # Key question: is eb 74 ever followed by more text inside the same string?
    print()
    mid = 0
    for r in runs:
        for j in range(0, len(r) - 1, 2):
            if r[j] == 0xEB and r[j + 1] == 0x74 and j + 2 < len(r):
                mid += 1
                break
    print('strings with eb 74 followed by more bytes: %d' % mid)

    # Distribution of where the eb-prefixed suffix starts.
    print()
    print('examples of strings containing eb 74, with the split point:')
    shown = 0
    for r in runs:
        if b'\xeb\x74' not in r:
            continue
        k = r.find(b'\xeb\x74')
        head = r[:k]
        tail = r[k:]
        try:
            txt = head.decode('shift_jis')
        except UnicodeDecodeError:
            txt = '<not sjis>'
        if len(head) > 4 and shown < 12:
            print('  %-46r + %s' % (txt, tail.hex(' ')))
            shown += 1

    # Is the suffix always a single eb-pair, or can it be a sequence?
    print()
    tails = Counter()
    for r in runs:
        k = r.rfind(b'\xeb')
        if k >= 0:
            tails[r[k:].hex(' ')] += 1
    print('most common eb-suffixes at end of string:')
    for t, n in tails.most_common(12):
        print('  %-24s %d' % (t, n))


if __name__ == '__main__':
    main()
