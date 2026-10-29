#!/usr/bin/env python3
"""tools/refusals.py - where the seed walk reaches bytes that are not 386 code.

WHY THIS EXISTS. `fmtownskit.i386 --check` reports that 2 of 234,155 instructions it
reached were refused, and gives the reasons ("opcode 0f 6a", "mov to segment register 1")
but not the addresses. A refusal is a site where the walk decoded a byte sequence that the
386 cannot execute, which almost always means the walk has run into data rather than code.

That matters because this project has already found one phantom seed at 0xd2b5b read from
inside an instruction, and because `recomp/discover` reports conflicts concentrated in a
small number of functions. A positional list of refusals is independent evidence about
where reach and reality disagree, and it is the same question as "is this address really
code", which `cfgwalk.js --check` answers one address at a time.

The kit's check does not expose a positional refusal list, so this walks the same way with
the same decoder and records what it refuses. It uses the kit's own `i386.decode`, not a
re-implementation, so the refusals are the same refusals by construction.

Usage:
  ./tools/.venv/bin/python3 tools/refusals.py ENCHANT.EXP --seeds FILE
  ./tools/.venv/bin/python3 tools/refusals.py ENCHANT.EXP --seeds FILE --json

The walk follows direct calls, jumps and conditional branches, and stops each path at a ret
or after a run of the same undecodable byte, which is the rule the other tools here use.
"""
import argparse
import json
import os
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


def load_kit():
    """Import the decoder from the submodule, or say how to get it."""
    ref = ROOT
    if not os.path.isdir(os.path.join(ref, 'fmtownskit')):
        sys.exit('fmtownskit not found at ./fmtownskit. '
                 'Run git submodule update --init fmtownskit.')
    sys.path.insert(0, ref)
    from fmtownskit import i386
    return i386


def image_bytes(path):
    """The flat image. For an MP this is the whole file, which docs/ two-frames-of-reference.md
    settles: file offset == virtual address, and the header declares relocCount 0."""
    with open(path, 'rb') as f:
        return f.read()


def walk(i386, img, seeds, limit_bytes=0x200000):
    """Follow one path from each seed, recording refusals.

    A refusal is recorded once per address, with the reason and the seed it was reached
    from, because the same bad bytes can be reached from several entries and knowing
    which caller led there is the useful part.
    """
    refusals = {}
    seen = set()
    covered = 0
    stack = list(seeds)
    while stack:
        pc = stack.pop()
        steps = 0
        while 0 <= pc < len(img) and steps < limit_bytes:
            if pc in seen:
                break
            seen.add(pc)
            try:
                ins = i386.decode(img, pc, addr=pc)
            except i386.Refused as e:
                refusals.setdefault(pc, {'reason': str(e), 'seed': pc})
                break
            covered += 1
            steps += 1
            op = ins.op
            nxt = pc + ins.size
            # Direct control flow only. An indirect branch ends the path here, the same
            # limit every other walk in this repository has.
            if op in ('ret', 'retf', 'iret', 'hlt'):
                break
            if op in ('jmp', 'call'):
                tgt = direct_target(i386, ins)
                if tgt is None:
                    break
                if op == 'call':
                    stack.append(nxt)
                pc = tgt
                continue
            if op.startswith('j'):
                tgt = direct_target(i386, ins)
                if tgt is not None:
                    stack.append(tgt)
            pc = nxt
    return refusals, len(seen), covered


def direct_target(i386, ins):
    """The branch target, if this instruction has one as an immediate.

    Read from the decoded operand, never from rendered text. That rule is the whole reason
    tools/decode.js exists and applies equally to the kit's Insn.
    """
    for o in ins.ops:
        if getattr(o, 'kind', None) == 'rel':
            return o.value if hasattr(o, 'value') else None
    return None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('image')
    ap.add_argument('--seeds', required=True, help='a file of comma separated hex seeds')
    ap.add_argument('--json', action='store_true')
    a = ap.parse_args()

    i386 = load_kit()
    img = image_bytes(a.image)
    seeds = [int(s, 16) for s in open(a.seeds).read().replace('\n', '').split(',') if s.strip()]

    refusals, reached, covered = walk(i386, img, seeds)

    if a.json:
        print(json.dumps({
            'image': os.path.basename(a.image),
            'seeds': len(seeds),
            'addresses_reached': reached,
            'instructions_decoded': covered,
            'refusals': [{'addr': '0x%x' % k, 'reason': v['reason']}
                         for k, v in sorted(refusals.items())],
        }, indent=1))
        return 0

    print('%s: %d seeds, %d addresses reached, %d instructions decoded, %d refused'
          % (os.path.basename(a.image), len(seeds), reached, covered, len(refusals)))
    for addr, r in sorted(refusals.items()):
        print('  0x%06x  %s' % (addr, r['reason']))
    return 0


if __name__ == '__main__':
    sys.exit(main())
