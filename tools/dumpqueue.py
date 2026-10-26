#!/usr/bin/env python3
"""tools/dumpqueue.py - disassemble the Level-1 pool with provenance.

WHY THIS EXISTS. Working a queue of routines by hand means running dd and ndisasm
for each one, and that is exactly the workflow that produced the stale-buffer
defect: a fixed temp path, a read that silently returned the previous routine,
and a confident wrong disassembly. This reads the image once, in-process, and
disassembles each address from those bytes, printing the source and offset with
every routine so a misalignment is visible rather than plausible.

It prints, for each routine: the address, the caller count from preflight, the
disassembly up to and including the first ret, and the resulting byte string
ready to paste into a candidate file.

USAGE
  python3 tools/dumpqueue.py                 the whole pool
  python3 tools/dumpqueue.py --addr 0xfd0ec  one routine
  python3 tools/dumpqueue.py --json out.json machine-readable
"""

import argparse
import json
import os
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
IMAGE = os.path.join(ROOT, 'ENCHANT.EXP')
HEADER = 0x20


def pool():
    out = subprocess.run(['node', os.path.join(ROOT, 'tools', 'preflight.js'), '--scan', '60'],
                         capture_output=True, text=True, cwd=ROOT).stdout
    rows = []
    for line in out.split('\n'):
        parts = line.split()
        if len(parts) == 3 and parts[0].startswith('0x'):
            rows.append({'addr': int(parts[0], 16), 'callers': int(parts[1]), 'size': int(parts[2])})
    return rows


def routine(image, addr, cap=512):
    """Bytes and disassembly from addr to the first ret, inclusive."""
    blob = image[addr:addr + cap]
    if not blob:
        return None
    out = subprocess.run(['ndisasm', '-b32', '-o', hex(addr), '-'],
                         input=blob, capture_output=True)
    text = out.stdout.decode('latin1')
    bytes_ = []
    lines = []
    for line in text.split('\n'):
        if not line.strip():
            continue
        parts = line.split(None, 2)
        if len(parts) < 2:
            continue
        lines.append(line)
        for i in range(0, len(parts[1]), 2):
            bytes_.append(int(parts[1][i:i + 2], 16))
        if len(parts) > 2 and parts[2].strip().startswith('ret'):
            break
        if len(bytes_) > cap:
            break
    return {
        'addr': addr,
        'stripped': addr - HEADER,
        'bytes': ' '.join('%02x' % b for b in bytes_),
        'lines': lines,
        'length': len(bytes_),
    }


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--addr')
    ap.add_argument('--json')
    ap.add_argument('--bytes-only', action='store_true')
    args = ap.parse_args()

    with open(IMAGE, 'rb') as fh:
        image = fh.read()

    if args.addr:
        targets = [{'addr': int(args.addr, 16), 'callers': '?', 'size': '?'}]
    else:
        targets = pool()

    results = []
    for t in targets:
        r = routine(image, t['addr'])
        if r is None:
            continue
        r['callers'] = t['callers']
        results.append(r)
        if args.bytes_only:
            print('%s  %s' % (hex(r['addr']), r['bytes']))
            continue
        print('=== %s  %s callers  %d bytes  (stripped %s)'
              % (hex(r['addr']), t['callers'], r['length'], hex(r['stripped'])))
        print('    source %s raw %s' % (os.path.basename(IMAGE), hex(r['addr'])))
        for line in r['lines']:
            print('  ' + line)
        print('  bytes: ' + r['bytes'])
        print()

    if args.json:
        with open(args.json, 'w') as fh:
            json.dump(results, fh, indent=1)
        print('written to %s' % args.json)
    return 0


if __name__ == '__main__':
    sys.exit(main())
