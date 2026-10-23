"""The real discriminator for the duplicated-nibble hypothesis: adjacency.

H5 was falsified by "non-mirrored bytes scatter uniformly across 232 of 244 rows". That
test was wrong. Uniform scatter is what you EXPECT if the non-mirrored bytes are
tile-to-tile transitions, because transitions occur everywhere on a map.

The within-group test already showed the diagonal dominates every terrain group:
terrain 0 pairs with low 0, terrain 3 with low 3, terrain 7 with low 7.

This script tests the actual mechanism. If the byte is one value duplicated and the
non-mirrored cases are transitions, then a non-mirrored byte should sit next to a
mirrored byte of its own value, and be rare inside large uniform blocks.
"""

import sys
from collections import Counter

MAP = sys.argv[1] if len(sys.argv) > 1 else "/var/tmp/MAP2_1_TIF.bin"
W = 128


def load():
    with open(MAP, 'rb') as f:
        return f.read()[0x800:0x800 + 31232]


def main():
    data = load()
    n = len(data)
    mir = [(v >> 4) == (v & 0x0F) for v in data]

    print('=== T1: are non-mirrored bytes adjacent to a mirrored byte? ===')
    both = 0
    neither = 0
    for i, m in enumerate(mir):
        if m:
            continue
        nb = []
        if i % W > 0:
            nb.append(i - 1)
        if i % W < W - 1:
            nb.append(i + 1)
        if i >= W:
            nb.append(i - W)
        if i < n - W:
            nb.append(i + W)
        if any(mir[j] for j in nb):
            both += 1
        else:
            neither += 1
    print('non-mirrored bytes with a mirrored neighbour: %d' % both)
    print('non-mirrored bytes with no mirrored neighbour: %d' % neither)
    print('  a random scatter would give a high "no" fraction,')
    print('  a transition reading gives almost all "yes"')
    print()

    print('=== T2: of the non-mirrored bytes, which value is the dominant nibble? ===')
    dom = Counter()
    for i, m in enumerate(mir):
        if m:
            continue
        v = data[i]
        hi, lo = v >> 4, v & 0x0F
        # count how many neighbours carry each nibble as a mirrored value
        hc = lc = 0
        for j in (i - 1, i + 1, i - W, i + W):
            if 0 <= j < n and mir[j]:
                if data[j] >> 4 == hi:
                    hc += 1
                if data[j] >> 4 == lo:
                    lc += 1
        if hc > lc:
            dom['hi'] += 1
        elif lc > hc:
            dom['lo'] += 1
        else:
            dom['tie'] += 1
    print('  neighbour supports the high nibble: %d' % dom['hi'])
    print('  neighbour supports the low  nibble: %d' % dom['lo'])
    print('  tie: %d' % dom['tie'])
    print()

    print('=== T3: run length of identical bytes ===')
    runs = Counter()
    cur = 1
    for i in range(1, n):
        if data[i] == data[i - 1]:
            cur += 1
        else:
            runs[cur] += 1
            cur = 1
    runs[cur] += 1
    print('  identical-byte run lengths, top 8: %s' % runs.most_common(8))
    print('  longest run: %d' % max(runs))
    print('  if this were 2 independent nibbles per cell, runs of identical bytes')
    print('  would be short. Long runs mean large uniform regions.')


if __name__ == '__main__':
    main()
