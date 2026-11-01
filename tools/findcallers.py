#!/usr/bin/env python3
"""findcallers.py - every direct call to a given address, found inside asserted extents.

WHY THIS EXISTS. Answering "what pushes the damage argument" means knowing the real call
sites, and a list copied from a note is 0x200 out in this repository more than once. This
derives them: disassemble each function from docs/corpus.json and keep the calls whose
rel32 resolves to the target. Extents come from the corpus, so there is no linear swing.

It prints the instruction before the call as well, because the argument is usually pushed
immediately before it and that is the thing being read.

USAGE
  findcallers.py 0xf0144
  findcallers.py 0xf0144 --before 3     more preceding instructions of context
"""

import argparse
import json
import os
import sys

VENV = os.path.join(os.path.dirname(os.path.abspath(__file__)), '.venv', 'lib', 'python3.14', 'site-packages')
if os.path.isdir(VENV):
    sys.path.insert(0, VENV)
from capstone import Cs, CS_ARCH_X86, CS_MODE_32  # noqa: E402

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
MD = Cs(CS_ARCH_X86, CS_MODE_32)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('addr')
    ap.add_argument('--before', type=int, default=3)
    ap.add_argument('--after', type=int, default=0)
    args = ap.parse_args()

    target = int(args.addr, 0)
    buf = open(os.path.join(ROOT, 'ENCHANT.EXP'), 'rb').read()
    funcs = [(r['addr'], r['size']) for r in json.load(open(os.path.join(ROOT, 'docs', 'corpus.json')))
             if isinstance(r.get('addr'), int) and isinstance(r.get('size'), int)]
    funcs.sort()

    found = []
    for a, n in funcs:
        insns = list(MD.disasm(buf[a:a + n], a))
        for k, ins in enumerate(insns):
            if ins.mnemonic != 'call' or not ins.op_str.startswith('0x'):
                continue
            if int(ins.op_str, 16) != target:
                continue
            lo = max(0, k - args.before)
            hi = min(len(insns), k + 1 + args.after)
            found.append((ins.address, a, insns[lo:hi]))

    print('%d direct call(s) to 0x%x' % (len(found), target))
    for addr, host, window in found:
        print('\n--- call at 0x%x, inside function 0x%x' % (addr, host))
        for ins in window:
            mark = '   <<< call' if ins.address == addr else ''
            print('   %06x  %-8s %s%s' % (ins.address, ins.mnemonic, ins.op_str, mark))


if __name__ == '__main__':
    main()
