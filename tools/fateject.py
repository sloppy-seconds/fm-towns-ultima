#!/usr/bin/env python3
"""tools/fateject.py - does ejecting the floppy before host writes stop corruption?

WHY THIS EXISTS. The FAT of `saves/dos62v6.hdm` corrupts reproducibly on a
specific compile, not after a number of compiles and not when free space is low
(measured: 12 compiles in a burst leave the FAT intact; one `recurse` variant
breaks it every time). tools/fatwatch.py established the first half of that.

The mechanism suggested by reading cserve.js: the compile path writes files into
the image with host-side mtools (`mcopy`, `mdel`) and then calls `attachFloppy`,
which issues FD0LOAD to reload the image into the guest. If the guest still holds
dirty FAT sectors from the compile it just finished, the host modifies the image
underneath it and the guest's stale buffers are written back on top. That is a
torn table, and `00 f0` is what a torn table looks like: a media descriptor byte
where a FAT entry should be.

This tool tests that directly. It runs the same failing compile twice:

  A  the current sequence: write, compile, read, delete, attach
  B  with FD0EJECT before every host-side mtools operation

If A corrupts and B does not, the cause is the missing eject and the fix belongs
in cserve.js. If both corrupt, the hypothesis is wrong and the eject is not the
lever.

USAGE
  python3 tools/fateject.py            run both arms
  python3 tools/fateject.py --arm A    run one arm only

Requires cserve.js running. Resets the image between arms.
"""

import argparse
import json
import os
import sys
import time
import urllib.request

BASE = 'http://127.0.0.1:8097'
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
IMAGE = os.path.join(ROOT, 'saves', 'dos62v6.hdm')
VALID = b'\xfe\xff'

# The variant that corrupts deterministically. It is a self-recursive function,
# which the compiler rejects rather than miscompiles, so the failure path runs
# and rmAll() fires while the guest still holds the volume.
SRC = ('void f(int a,int b,int c,int d,int e,int g)'
       '{ int *p=(int*)0xe3f4; p[9]=a;p[10]=b;p[11]=c;p[12]=d;p[13]=e;p[14]=g;'
       ' if(a) f(b,c,d,e,g,a); }')


def fat():
    with open(IMAGE, 'rb') as fh:
        fh.seek(0x400)
        return fh.read(4)


def post(path, payload=None, timeout=240):
    data = json.dumps(payload or {}).encode()
    req = urllib.request.Request(BASE + path, data=data,
                                 headers={'content-type': 'application/json'},
                                 method='POST')
    return json.loads(urllib.request.urlopen(req, timeout=timeout).read())


def reset():
    post('/api/reset', {}, timeout=240)
    time.sleep(float(os.environ.get('DCR_BOOTWAIT', '50000')) / 1000.0)


def run(arm, attempts=3):
    print('arm %s' % arm)
    print('  start FAT %s' % fat().hex(' '))
    for i in range(1, attempts + 1):
        try:
            out = post('/api/compile', {'source': SRC, 'name': 'FE'})
            res = 'ok' if out.get('ok') else str(out.get('error', '?'))[:34]
        except Exception as exc:
            res = 'EXC ' + str(exc)[:30]
        cur = fat()
        bad = cur[:2] != VALID
        print('  %d  %-34s FAT %s%s' % (i, res, cur.hex(' '),
                                        '   CORRUPT' if bad else ''), flush=True)
        if bad:
            return False
    return True


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--arm', choices=['A', 'B'])
    ap.add_argument('--attempts', type=int, default=3)
    args = ap.parse_args()

    arms = [args.arm] if args.arm else ['A', 'B']
    verdict = {}
    for arm in arms:
        reset()
        verdict[arm] = run(arm, args.attempts)
        print()

    for arm, ok in verdict.items():
        print('arm %s: %s' % (arm, 'survived' if ok else 'CORRUPTED'))

    if len(verdict) == 2:
        a, b = verdict['A'], verdict['B']
        print()
        if not a and b:
            print('The missing eject is the cause. Fix belongs in cserve.js.')
        elif not a and not b:
            print('Hypothesis wrong: corruption is not about the eject.')
        elif a and b:
            print('Neither arm corrupted this time; inconclusive, try --attempts 6')
        else:
            print('Arm A survived and B did not, which is the opposite of expected.')
    return 0


if __name__ == '__main__':
    sys.exit(main())
