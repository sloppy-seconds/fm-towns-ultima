#!/usr/bin/env python3
"""findvar.py - find the instructions that reference a 32-bit address.

WHY THIS EXISTS. A page said HP is subtracted at 0x0eff73, and the bytes there are
`cmp eax, 4`. An address quoted from a note is worse than none: it looks authoritative
and it aims a reader at the wrong instruction.

WHY IT IS BUILT THIS WAY. The first version found instruction starts by a LINEAR walk of
the code payload and then asked which instruction covered each hit. Every one of 37 hits
came back "in data", because a linear swing through this image is misaligned from the
first data blob onward, which AGENTS.md warns about in as many words. So this version
only disassembles INSIDE the asserted extent of a function from docs/corpus.json, which
is a derivation rather than a swing. A hit outside every asserted function is reported as
outside rather than guessed at.

USAGE
  findvar.py 0xcde81              every site, with the function that contains it
  findvar.py 0xcde81 --op sub     only where the decoded instruction is that mnemonic
  findvar.py 0xcde81 --op sub --json
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
IMAGE = os.path.join(ROOT, 'ENCHANT.EXP')
CORPUS = os.path.join(ROOT, 'docs', 'corpus.json')
MD = Cs(CS_ARCH_X86, CS_MODE_32)


def funcs_with_size():
    out = []
    for r in json.load(open(CORPUS)):
        if isinstance(r.get('addr'), int) and isinstance(r.get('size'), int):
            out.append((r['addr'], r['size']))
    out.sort()
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('addr')
    ap.add_argument('--op', default=None)
    ap.add_argument('--json', action='store_true')
    args = ap.parse_args()

    target = int(args.addr, 0)
    needle = target.to_bytes(4, 'little')
    buf = open(IMAGE, 'rb').read()
    funcs = funcs_with_size()

    hits = []
    i = buf.find(needle)
    while i >= 0:
        hits.append(i)
        i = buf.find(needle, i + 1)

    sites = []
    for h in hits:
        # the function whose asserted extent contains this operand
        host = None
        for a, n in funcs:
            if a <= h < a + n:
                host = a
                break
        if host is None:
            sites.append({'at': h, 'where': 'outside every asserted function', 'mnemonic': None, 'text': None})
            continue
        found = None
        for ins in MD.disasm(buf[host:host + dict(funcs)[host]], host):
            if ins.address <= h < ins.address + ins.size:
                found = ins
                break
        if found is None:
            sites.append({'at': h, 'where': '0x%x' % host, 'mnemonic': None, 'text': 'inside a function but not on an instruction'})
            continue
        sites.append({'at': h, 'function': '0x%x' % host, 'insn': '0x%x' % found.address,
                      'mnemonic': found.mnemonic, 'text': '%s %s' % (found.mnemonic, found.op_str),
                      'bytes': found.bytes.hex(' ')})

    if args.op:
        sites = [s for s in sites if s.get('mnemonic') == args.op]

    if args.json:
        print(json.dumps(sites, indent=1))
        return

    print('%s occurs %d times as bytes; %d site(s) reported%s'
          % (args.addr, len(hits), len(sites), ' for `%s`' % args.op if args.op else ''))
    for s in sites:
        if s.get('mnemonic'):
            print('  %-8s %-30s  in %-8s (insn 0x%x)' % (s['mnemonic'], s['text'][len(s['mnemonic']):].strip(),
                                                          s.get('function', s.get('where', '?')),
                                                          int(s['insn'], 16)))
        else:
            print('  --       %s  @0x%x' % (s['where'], s['at']))


if __name__ == '__main__':
    main()
