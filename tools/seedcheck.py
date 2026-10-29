#!/usr/bin/env python3
"""tools/seedcheck.py - which seeds in a seed set are not instruction boundaries.

WHY THIS EXISTS. A seed set is a list of addresses a walk starts from, and every one of them
is an assertion that an instruction begins there. This project has already found one seed
that was not: 0xd2b5b, read from inside a `shr eax,0x10` at 0xe0645. That seed made the walk
descend into padding and produced conflicts attributed to the wrong cause.

Checking the seeds costs one decode per seed and answers it directly. A seed that does not
decode is not a function entry, whatever else it may be, and every conflict downstream of it
is suspect.

This is the cheap version of a question the project keeps meeting from the other direction:
`recomp/discover` reports conflicts and `tools/refusals.py` reports where a walk met bytes it
could not decode. Neither says whether the input was wrong.

Usage:
  ./tools/.venv/bin/python3 tools/seedcheck.py ENCHANT.EXP --seeds FILE
  ./tools/.venv/bin/python3 tools/seedcheck.py ENCHANT.EXP --seeds FILE --json
  ./tools/.venv/bin/python3 tools/seedcheck.py ENCHANT.EXP --seeds FILE --drop > good.keep

--drop prints the seed set with the non-decoding entries removed, so a caller can re-walk
from a verified set and compare.
"""
import argparse
import json
import os
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


def load_kit():
    ref = ROOT
    if not os.path.isdir(os.path.join(ref, 'fmtownskit')):
        sys.exit('fmtownskit not found at ./fmtownskit. Run git submodule update --init fmtownskit.')
    sys.path.insert(0, ref)
    from fmtownskit import i386
    return i386


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('image')
    ap.add_argument('--seeds', required=True)
    ap.add_argument('--json', action='store_true')
    ap.add_argument('--drop', action='store_true',
                    help='print the seeds that do decode, one comma list')
    a = ap.parse_args()

    i386 = load_kit()
    img = open(a.image, 'rb').read()
    seeds = [int(s, 16) for s in open(a.seeds).read().replace('\n', '').split(',') if s.strip()]

    bad = []
    for s in seeds:
        if not (0 <= s < len(img)):
            bad.append((s, 'outside the image'))
            continue
        try:
            i386.decode(img, s, addr=s)
        except i386.Refused as e:
            bad.append((s, str(e)))

    good = [s for s in seeds if s not in {b[0] for b in bad}]

    if a.drop:
        print(','.join('0x%x' % s for s in good))
        return 0

    if a.json:
        print(json.dumps({
            'image': os.path.basename(a.image),
            'seeds': len(seeds),
            'decoding': len(good),
            'not_decoding': [{'addr': '0x%x' % s, 'reason': r} for s, r in bad],
        }, indent=1))
        return 0

    print('%s: %d seeds, %d decode, %d do not'
          % (os.path.basename(a.image), len(seeds), len(good), len(bad)))
    for s, r in bad:
        print('  0x%06x  %s' % (s, r))
    if bad:
        print('\nA seed that does not decode is not an instruction boundary. Every conflict a')
        print('walk produces downstream of one is suspect: re-run with --drop and compare.')
    return 0


if __name__ == '__main__':
    sys.exit(main())
