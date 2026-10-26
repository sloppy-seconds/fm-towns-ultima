#!/usr/bin/env python3
"""tools/fatwatch.py - capture what corrupts the script floppy.

WHY THIS EXISTS. The floppy image `saves/dos62v6.hdm` has now corrupted three
times during ordinary compile traffic, once after only two compiles. The
documented symptom is two bytes at 0x400/0x401 changing from `fe ff` to `00 f0`,
which is a media descriptor followed by a FAT entry rather than the two FAT
reserved entries a valid FAT12 starts with.

The cause is not known, and guessing at it has already cost time. Two candidate
explanations with different fixes:

  space      the volume fills and something writes past the FAT. There is a
             guard for this, so this hypothesis predicts the corruption only
             appears when freeBytes is low. It has now happened with 176 KB
             free, so this is unlikely on its own.

  timing     the guest is still writing when mtools reads or writes the image
             from the host. The FAT is cached in the guest and flushed later,
             so a host read between a guest write and its flush sees a torn
             table. This predicts corruption after bursts, with no relation to
             free space.

The distinction matters: a timing cause means the fix is to stop touching the
image while the guest may be writing, which is a change to cserve.js and not a
change to the disk.

WHAT IT DOES. Runs a burst of compiles while sampling the FAT bytes after every
operation, and records the exact operation at which the table first becomes
invalid. Prints a timeline rather than a verdict, because the verdict is what
the timeline shows.

USAGE
  python3 tools/fatwatch.py              burst of 12 compiles, sampling each
  python3 tools/fatwatch.py --n 30       a longer burst
  python3 tools/fatwatch.py --settle 2   wait N seconds after each op before reading

--settle is the experiment. If corruption disappears once the host stops
reading the image immediately after a guest write, the cause is timing and the
fix belongs in cserve.js.
"""

import argparse
import json
import os
import subprocess
import sys
import time
import urllib.request

BASE = 'http://127.0.0.1:8097'
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
IMAGE = os.path.join(ROOT, 'saves', 'dos62v6.hdm')

# A valid FAT12 with 1024-byte sectors starts fe ff at 0x400. Corruption has been
# observed as 00 f0, which is what a media descriptor plus a FAT entry looks like.
VALID = b'\xfe\xff'

SRC = ('void f(int a,int b,int c,int d,int e,int g)'
       '{ int *p=(int*)0xe3f4; p[9]=a;p[10]=b;p[11]=c;p[12]=d;p[13]=e;p[14]=g; }')


def fat():
    with open(IMAGE, 'rb') as fh:
        fh.seek(0x400)
        return fh.read(4)


def health():
    try:
        return json.loads(urllib.request.urlopen(BASE + '/api/health', timeout=20).read())
    except Exception as exc:
        return {'healthy': False, 'error': str(exc)}


def post(path, payload, timeout=240):
    data = json.dumps(payload).encode()
    req = urllib.request.Request(BASE + path, data=data,
                                 headers={'content-type': 'application/json'},
                                 method='POST')
    return json.loads(urllib.request.urlopen(req, timeout=timeout).read())


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--n', type=int, default=12, help='compiles in the burst')
    ap.add_argument('--settle', type=float, default=0.0,
                    help='seconds to wait after each op before reading the FAT')
    ap.add_argument('--reset-first', action='store_true',
                    help='reset the image before starting, for a clean baseline')
    args = ap.parse_args()

    if args.reset_first:
        print('resetting image')
        post('/api/reset', {}, timeout=240)
        time.sleep(float(os.environ.get('DCR_BOOTWAIT', '50000')) / 1000.0)

    f0 = fat()
    print('image   %s' % IMAGE)
    print('settle  %.1fs between op and read' % args.settle)
    print('start   FAT[0x400]=%s' % f0.hex(' '))
    if f0[:2] != VALID:
        print('start   image is ALREADY corrupt; use --reset-first')
        return 3
    print()

    h = health()
    print('health  healthy=%s free=%s' % (h.get('healthy'), h.get('freeBytes')))
    print()
    print('%3s %-10s %-14s %-10s %s' % ('#', 'op', 'FAT', 'free', 'code'))
    print('-' * 74)

    first_bad = None
    for i in range(1, args.n + 1):
        try:
            out = post('/api/compile', {'source': SRC, 'name': 'FW'})
            code = out.get('code', '').replace(' ', '')[:22] if out.get('ok') else 'ERR'
            err = '' if out.get('ok') else str(out.get('error', ''))[:30]
        except Exception as exc:
            code, err = 'EXC', str(exc)[:30]

        if args.settle:
            time.sleep(args.settle)
        cur = fat()
        h = health()
        free = h.get('freeBytes')

        bad = cur[:2] != VALID
        if bad and first_bad is None:
            first_bad = i
        print('%3d %-10s %-14s %-10s %s %s'
              % (i, 'compile', cur.hex(' '), free if free is not None else '?',
                 code, err), flush=True)
        if bad:
            print()
            print('FAT invalid at op %d: %s (expected %s)'
                  % (i, cur.hex(' '), VALID.hex(' ')))
            break

    print()
    if first_bad is None:
        print('no corruption in %d compiles' % args.n)
        return 0
    print('first corruption at op %d of %d' % (first_bad, args.n))
    print('recover with: curl -X POST %s/api/reset' % BASE)
    return 1


if __name__ == '__main__':
    sys.exit(main())
