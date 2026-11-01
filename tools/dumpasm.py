#!/usr/bin/env python3
"""dis.py - dump disassembly of ENCHANT.EXP regions, for reading routines.

WHY THIS EXISTS. Reading the 5-series items means reading many routines and
citing each one. tools/decode.js does this through a python worker for the
node tools, which is the right path for tools; this is the reading loop for
a person, and it takes file offsets, which is the frame every doc quotes.

Every address printed is a FILE offset, the same frame as docs/routines.json
and docs/corpus.json.

USAGE
  dis.py 0x0eff44                  disassemble at an address until a ret, max 400 bytes
  dis.py 0x0eff44 --bytes 120      same, fixed length
  dis.py 0x0eff44 --until-ret      stop at the first ret (default)
  dis.py 0x0f0a60 --back 40        start 40 bytes earlier for caller context
  dis.py 0x0eff44 0x0efc50 0x0f0a60   several regions in one run
"""

import argparse
import os
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
VENV = os.path.join(os.path.dirname(os.path.abspath(__file__)), '.venv', 'lib', 'python3.14', 'site-packages')
if os.path.isdir(VENV):
    sys.path.insert(0, VENV)
from capstone import Cs, CS_ARCH_X86, CS_MODE_32  # noqa: E402

IMAGE = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'ENCHANT.EXP')
MD = Cs(CS_ARCH_X86, CS_MODE_32)


def dump(buf, start, length=None, until_ret=True, max_bytes=400):
    if length is None:
        length = max_bytes
    blob = buf[start:start + length]
    out = []
    for i in MD.disasm(blob, start):
        out.append(i)
        if until_ret and length is None and i.mnemonic.startswith('ret'):
            break
        if until_ret and length >= max_bytes and i.mnemonic.startswith('ret'):
            break
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('addrs', nargs='+', help='file offsets, 0x-prefixed')
    ap.add_argument('--bytes', type=int, default=None, help='fixed length instead of to-first-ret')
    ap.add_argument('--back', type=int, default=0, help='start this many bytes earlier')
    ap.add_argument('--max', type=int, default=400)
    args = ap.parse_args()

    buf = open(IMAGE, 'rb').read()
    for spec in args.addrs:
        start = int(spec, 16)
        show = max(0, start - args.back)
        print('=== 0x%x%s' % (start, '  (showing from 0x%x)' % show if args.back else ''))
        insns = list(MD.disasm(buf[show:show + (args.bytes or args.max)], show))
        stopped = False
        for i in insns:
            mark = ''
            if args.back and i.address == start:
                mark = '   <<< target'
            print('   %06x  %-8s %s%s' % (i.address, i.mnemonic, i.op_str, mark))
            if args.bytes is None and i.mnemonic.startswith('ret') and i.address >= start:
                stopped = True
                break
        if not stopped and args.bytes is None:
            print('   ... no ret within %d bytes' % args.max)
        print()


if __name__ == '__main__':
    main()
