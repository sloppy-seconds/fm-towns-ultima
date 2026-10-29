#!/usr/bin/env python3
"""Index which data addresses each function references, for naming functions at scale.

WHY THIS EXISTS, and what it changes. Seven routines were read in one long session and each was
reached through an anchor: a named global, a known constant, a string. That is the only method that
has produced correct results, and it does not scale, because there are 709 functions and no
function has a name.

The measurement that says what to build next: 128 call sites in `extracted/strings.json` name the
function that prints a string, and nobody has joined them to the function starts. Those joins are
the anchors. Doing them by hand is 128 searches; doing them for every data address at once is one
pass over the instruction stream.

So this walks a `fmtownskit` discovery once and emits, for every function, the absolute addresses
its body names, with the form of each reference. The output is a lookup table: "which functions
reference 0x1678" and "what does 0xf7740 reference" both become reads.

WHAT THIS IS NOT. It does not name anything. `argument`, `address` and `scalar-read` are operand
shapes, not semantics. The naming still requires reading a function, and the point is only to make
the right function findable.

ADDRESSES ARE RAW FILE OFFSETS, matching docs/two-frames-of-reference.md. `fmtownskit` works in
that frame for an MP binary after the change recorded there, so no conversion is applied.

Usage:
    ./tools/refindex.py OUT.json                        ENCHANT.EXP, default seeds
    ./tools/refindex.py OUT.json --seeds FILE           comma separated, one line
    ./tools/refindex.py OUT.json --bin DARKNESS.EXP
    ./tools/refindex.py --query 0x1678                  who references this address
    ./tools/refindex.py --function 0xf7740              what does this function reference

Needs the `fmtownskit` submodule (`git submodule update --init fmtownskit`) and the Capstone venv.

Exit status 1 if the walk produces no functions, because an empty index would look like a clean
answer to every query.
"""
import argparse
import json
import os
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
FMS = ROOT


def load_fmtownskit():
    if not os.path.isdir(os.path.join(FMS, 'fmtownskit')):
        sys.exit('fmtownskit not found at ./fmtownskit. Run git submodule update --init fmtownskit.')
    sys.path.insert(0, FMS)
    from fmtownskit.recomp import discover
    from fmtownskit.exp import parse_no_code
    return discover, parse_no_code


def default_seeds(name):
    """The seed file this project keeps for a binary, or None."""
    for cand in (os.path.join('/var/tmp/mpwork', name + '.seedset'),
                 os.path.join(ROOT, 'analysis', name + '.seedset')):
        if os.path.exists(cand):
            with open(cand) as fh:
                return [int(x, 16) for x in fh.read().strip().split(',') if x]
    return None


def build(args):
    """Unused: kept out of the way so the real flow stays readable."""
    return None


def ranges_for(binary, root):
    """The no-code ranges for `binary`, derived by tools/codelimits.js.

    `codelimits.js` reads ENCHANT.EXP at the repository root and takes no binary argument, so this
    only works for that file. For another binary the caller passes --ranges, which is honest about
    the fact that the ranges are per-game measurements rather than a format property.
    """
    if binary != 'ENCHANT.EXP':
        return None
    import subprocess
    out = subprocess.run(['node', os.path.join(root, 'tools', 'codelimits.js'), '--args'],
                         capture_output=True, text=True, cwd=root)
    if out.returncode != 0:
        return None
    return [x for x in out.stdout.split() if ':' in x]


def main():
    ap = argparse.ArgumentParser(description=__doc__.split('\n')[0])
    ap.add_argument('out', nargs='?', help='write the index here')
    ap.add_argument('--bin', default='ENCHANT.EXP')
    ap.add_argument('--seeds', help='a file of comma separated hex seeds')
    ap.add_argument('--ranges', help='a file of LO:HI no-code ranges, space separated')
    ap.add_argument('--query', metavar='ADDR', help='who references this address')
    ap.add_argument('--function', metavar='ADDR', help='what does this function reference')
    a = ap.parse_args()

    discover, parse_no_code = load_fmtownskit()

    if a.query or a.function:
        if not a.out and not os.path.exists('refindex.json'):
            sys.exit('no index: run without --query/--function first')
        idx = json.load(open(a.out or 'refindex.json'))
        if a.query:
            want = int(a.query, 16)
            print('functions referencing %#x:' % want)
            n = 0
            for fn, refs in idx['functions'].items():
                hits = [r for r in refs if r['disp'] == want]
                if hits:
                    n += 1
                    forms = {}
                    for r in hits:
                        forms[r['form']] = forms.get(r['form'], 0) + 1
                    print('  0x%s  %s' % (fn, forms))
            if n == 0:
                print('  none')
            return 0
        want = int(a.function, 16)
        refs = idx['functions'].get('%x' % want)
        if not refs:
            print('function %#x not in the index' % want)
            return 0
        print('function %#x references %d addresses:' % (want, len(set(r['disp'] for r in refs))))
        seen = set()
        for r in refs:
            if r['disp'] in seen:
                continue
            seen.add(r['disp'])
            print('  %#010x  %-14s %s' % (r['disp'], r['form'], r['text']))
        return 0

    path = os.path.join(ROOT, a.bin)
    if not os.path.exists(path):
        sys.exit('%s not found at the repository root' % a.bin)

    seeds = None
    if a.seeds:
        seeds = [int(x, 16) for x in open(a.seeds).read().strip().split(',') if x]
    else:
        seeds = default_seeds(a.bin)
    if not seeds:
        sys.exit('no seeds for %s: pass --seeds' % a.bin)

    ranges = []
    if a.ranges:
        ranges = [x for x in open(a.ranges).read().split() if ':' in x]
    else:
        r = ranges_for(a.bin, ROOT)
        if r:
            ranges = r
    nc = parse_no_code(ranges)

    p = discover.load(path, seeds=seeds, no_code=nc)
    if not p.functions:
        sys.exit('the walk produced no functions: refusing to write an empty index')

    functions = {}
    for f in p.functions:
        refs = []
        for a_ in sorted(p.body(f)):
            i = p.insn.get(a_)
            if i is None:
                continue
            for o in (i.ops or ()):
                if o[0] == 'm':
                    _, seg, base, index, scale, disp, _ = o
                    # a displacement with no base is an absolute address; one with a base is a
                    # record offset and is kept, named, because that is how this program reaches
                    # its globals
                    refs.append({'site': a_, 'disp': disp & 0xFFFFFFFF,
                                 'form': ('indexed' if index else ('address' if base is None else 'based')),
                                 'base': base, 'index': index, 'scale': scale, 'text': i.op})
                elif o[0] == 'i':
                    refs.append({'site': a_, 'disp': o[1] & 0xFFFFFFFF, 'form': 'immediate',
                                 'base': None, 'index': None, 'scale': 1, 'text': i.op})
                elif o[0] == 'j':
                    # A DIRECT CALL OR JUMP TARGET. The kit's own decoder spells these 'j', not
                    # 'i', and an earlier version of this file handled only 'm' and 'i'. The
                    # consequence was silent and total: every direct call in the image was left out
                    # of the index, so a function known to call two TBIOS stubs appeared to call
                    # none. Found by ranking the output and noticing that only one function in 691
                    # was credited with a TBIOS call when 70 stubs exist and are called.
                    refs.append({'site': a_, 'disp': o[1] & 0xFFFFFFFF, 'form': 'target',
                                 'base': None, 'index': None, 'scale': 1, 'text': i.op})
        if refs:
            functions['%x' % f] = refs

    doc = {
        'binary': a.bin,
        'functions': functions,
        'counts': {
            'functions_walked': len(p.functions),
            'functions_with_refs': len(functions),
            'references': sum(len(v) for v in functions.values()),
        },
    }
    if a.out:
        with open(a.out, 'w') as fh:
            json.dump(doc, fh, indent=1)
        print('%s: %d functions walked, %d with references, %d references written to %s'
              % (a.bin, len(p.functions), len(functions), doc['counts']['references'], a.out))
    else:
        print(json.dumps(doc['counts'], indent=1))
    return 0


if __name__ == '__main__':
    sys.exit(main())
