#!/usr/bin/env python3
r"""tools/ledger.py - generate docs/ledger.json, the per-function attribution ledger.

WHY THIS EXISTS. Plan item 0d. The two build tracks - the C++ behavioural port and the High C
byte-identity reproduction - need one shared record of what is known about each function, so that
neither can claim an attribution it has not earned and neither has to re-derive the other's.

WHAT THIS DELIBERATELY DOES NOT DO: guess. Most functions get `unattributed` / `unknown`, because
that is the honest answer for most of them, and the count is printed in the open rather than buried.
An item whose failure case is "every row has a state and none has evidence" is failed by filling
the state column with confident-sounding words, so the default is the empty answer and a row only
leaves it when a named artefact earns it.

THE TWO FRAMES, WHICH IS THE ONE WAY THIS FILE COULD GO SILENTLY WRONG. The module's function names,
`f_000e9c2c`, are **image** offsets, because the port recompiles a copy stripped of the 0x200 MP
header. `docs/corpus.json` and `docs/routines.json` are **file** offsets, which is what every docs
page quotes and what tools/byteid.js reads. The two differ by exactly 0x200, and an earlier version
of this tool compared them directly: it found 11 asserted sizes out of 454 and mapped none of the ten
matched routines, and both of those looked like missing data rather than a frame error. Measured: after
the shift, 715 of 738 census addresses land on a module function (the 23 that do not are the zero-fill
seeds cfgwalk refuses by design) and 451 of 454 sized entries do.

The ledger reports **file** offsets, per the schema in docs/plan-attribution.md, and converts the
module addresses on the way in.

HOW EACH COLUMN IS EARNED

  addr, size      size comes from docs/corpus.json, which is an asserted derivation. Where
                  corpus.json has no entry the size is `n-a`, NOT guessed from the gap between
                  consecutive function starts. 12a is explicit that an inferred extent gets no
                  verdict, and the same applies here.
  module          ENCHANT for all of these. TBIOS is a different binary and is deferred.
  attribution     `compiler-1.73-matched` only for the routines docs/routines.json classes
                  `matched`, split into driver-verified and framed-pending. `hand-asm-positive`
                  only where the atlas census supplies positive exclusion evidence.
  confidence      `proven` only for a byte-identical driver verification. `probable` where the
                  evidence is one signal. `unknown` is the default and must be written out.
  cluster         the feature-vector group, from tools/cluster.py, so the two cannot disagree.
  recomp          `compiled` for everything here: presence in module/ IS the recompiler's output.
  port-coverage   `n-a` for every row. No tool reports per-function port coverage yet, and
  indirect        `n-a` for every row. Same reason. Both are named in `unpopulated` with the
                  reason, so an empty column is a statement rather than an omission.

USAGE
  ./tools/ledger.py                 write docs/ledger.json and print the summary
  ./tools/ledger.py --check         exit 1 if the committed ledger differs from a fresh run
  ./tools/ledger.py --json          print the summary as JSON

Requires the corpus census (docs/corpus.json) and the module sources (module/).
"""

import argparse
import importlib.util
import json
import os
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DOCS = os.path.join(ROOT, 'docs')
OUT = os.path.join(DOCS, 'ledger.json')

# Routines re-verified byte for byte through the authentic driver route. Kept here as a list rather
# than inferred from prose, and asserted by tools/checkall.js to stay consistent with routines.json.
DRIVER_VERIFIED = ['e9e2c', 'e44d0', 'e9940', 'e07e8', 'e65fc', 'e662c', 'fd0ec', 'e552c']
# Matched under the frame-preserving generator, blocked on the driver default removing the frame.
FRAMED_PENDING = ['e52c8', 'e5304']

# The module's f_XXXXXXXX names are image offsets; docs/ are file offsets. The MP header is 0x200.
FILE_FRAME_DELTA = 0x200

COLUMNS = ['addr', 'size', 'module', 'attribution', 'confidence', 'cluster',
           'recomp', 'port-coverage', 'indirect', 'notes']

UNPOPULATED = {
    'port-coverage': 'no tool reports per-function port coverage yet. Item 11a is the one that '
                     'would produce it, so this column stays n-a rather than being filled with '
                     'a plausible-looking guess',
    'indirect': 'no tool reports which function contains an unresolved indirect transfer. The 30 '
                'unresolved transfers are counted, not located, so a per-function value would be '
                'an invention',
}


def load_cluster():
    spec = importlib.util.spec_from_file_location('cluster', os.path.join(ROOT, 'tools', 'cluster.py'))
    mod = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(mod)
    return mod


def build():
    cl = load_cluster()
    funcs = cl.load_functions()
    if not funcs:
        raise SystemExit('no functions parsed from module/; nothing to build')

    rows = []
    for addr in sorted(funcs):
        f = cl.features(addr, funcs[addr])
        f['cluster_sig'] = cl.signature(f)
        rows.append(f)

    # Cluster ids assigned exactly as tools/cluster.py assigns them: largest first, so a ledger
    # regenerated by either tool names the same groups the same way.
    sizes = {}
    for r in rows:
        sizes[r['cluster_sig']] = sizes.get(r['cluster_sig'], 0) + 1
    order = sorted(sizes.items(), key=lambda kv: (-kv[1], kv[0]))
    id_of = {sig: 'C%02d' % i for i, (sig, _n) in enumerate(order)}

    # Asserted sizes, from the corpus census.
    sizes_by_addr = {}
    corpus = os.path.join(DOCS, 'corpus.json')
    if os.path.exists(corpus):
        for r in json.load(open(corpus)):
            if isinstance(r.get('addr'), int) and isinstance(r.get('size'), int):
                sizes_by_addr[r['addr']] = r['size']

    # Existing routine classifications, used only for the rows that have earned one.
    klass = {}
    rj = os.path.join(DOCS, 'routines.json')
    if os.path.exists(rj):
        for r in json.load(open(rj))['routines']:
            klass[int(r['addr'], 16)] = r

    driver = set(int(a, 16) for a in DRIVER_VERIFIED)
    framed = set(int(a, 16) for a in FRAMED_PENDING)

    functions = {}
    for r in rows:
        img = r['addr']
        addr = img + FILE_FRAME_DELTA          # report file offsets, see the module docstring
        row = {
            'addr': '0x%x' % addr,
            'size': sizes_by_addr.get(addr, 'n-a'),
            'module': 'ENCHANT',
            'attribution': 'unattributed',
            'confidence': 'unknown',
            'cluster': id_of[r['cluster_sig']],
            'recomp': 'compiled',
            'port-coverage': 'n-a',
            'indirect': 'n-a',
            # n-a, not an empty string. The schema says every column is populated or explicitly n-a,
            # and a blank is neither. 738 rows have nothing to say about notes and saying so is the
            # honest value; the gate rejects a blank precisely so this cannot quietly regress.
            'notes': 'n-a',
        }

        k = klass.get(addr)
        if k and k['class'] == 'matched':
            row['attribution'] = 'compiler-1.73-matched'
            if addr in driver:
                row['confidence'] = 'proven'
                row['notes'] = ('byte-identical through the authentic driver route, zero exemptions '
                                'applied (docs/attribution-samples.md)')
            elif addr in framed:
                row['confidence'] = 'probable'
                row['notes'] = ('matched under the frame-preserving generator and the game is framed '
                                '(55 8b ec). Driver default removes the frame, so reproduction is '
                                'blocked on a toggle, not on the C')
            else:
                row['confidence'] = 'probable'
                row['notes'] = 'classed matched but not in either verified list; needs a look'
        elif r['zero_xor']:
            # The one census signal that survived being probed. Probable, not proven: one signal,
            # one instrument, against an atlas that was wrong about three other claims that night.
            row['attribution'] = 'hand-asm-positive'
            row['confidence'] = 'probable'
            row['notes'] = ('zeros a register with `xor reg,reg`, which the atlas never emits: A33 '
                            '(`a ^= a`) and A40 (xor toggle) both gave `sub reg,reg`. One signal, '
                            'not cross-checked by a second method')
        elif k:
            # Keep the existing classification visible without promoting it to an attribution.
            row['notes'] = 'docs/routines.json class=%s: %s' % (k['class'], (k.get('what') or '')[:110])

        functions[row['addr']] = row

    clusters = {}
    for sig, n in order:
        addrs = [r['addr'] + FILE_FRAME_DELTA for r in rows if r['cluster_sig'] == sig]
        lo, hi = min(addrs), max(addrs)
        clusters[id_of[sig]] = {'size': n, 'signature': sig, 'lo': '0x%x' % lo, 'hi': '0x%x' % hi,
                                'span': hi - lo}

    by_attr, by_conf = {}, {}
    for row in functions.values():
        by_attr[row['attribution']] = by_attr.get(row['attribution'], 0) + 1
        by_conf[row['confidence']] = by_conf.get(row['confidence'], 0) + 1

    ledger = {
        'generated_by': 'tools/ledger.py',
        'module': 'ENCHANT',
        'population': len(functions),
        'addr_frame': 'file offset in ENCHANT.EXP. Module function names are image offsets, 0x200 '
                      'lower because the port recompiles a copy stripped of the MP header',
        'columns': COLUMNS,
        'unpopulated': UNPOPULATED,
        'sizes_asserted_by': 'docs/corpus.json (an inferred extent gets no verdict, per item 12a)',
        'clusters': clusters,
        'summary': {
            'attribution': dict(sorted(by_attr.items())),
            'confidence': dict(sorted(by_conf.items())),
            'unattributed': by_attr.get('unattributed', 0),
            'with_asserted_size': sum(1 for v in functions.values() if v['size'] != 'n-a'),
            'without_asserted_size': sum(1 for v in functions.values() if v['size'] == 'n-a'),
        },
        'functions': functions,
    }
    return ledger


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--check', action='store_true',
                    help='compare against the committed ledger instead of writing')
    ap.add_argument('--json', action='store_true', help='print the summary as JSON')
    args = ap.parse_args()

    fresh = build()

    if args.check:
        if not os.path.exists(OUT):
            print('no committed ledger at %s' % OUT)
            return 2
        committed = json.load(open(OUT))
        if json.dumps(committed, sort_keys=True) == json.dumps(fresh, sort_keys=True):
            print('ledger matches a fresh run (%d functions)' % fresh['population'])
            return 0
        print('ledger DIFFERS from a fresh run. Regenerate with ./tools/ledger.py')
        for key in ('population', 'summary'):
            if json.dumps(committed.get(key), sort_keys=True) != json.dumps(fresh.get(key), sort_keys=True):
                print('  %s: committed=%s' % (key, json.dumps(committed.get(key))[:200]))
                print('  %s: fresh    =%s' % (key, json.dumps(fresh.get(key))[:200]))
        return 1

    if not args.json:
        with open(OUT, 'w') as fh:
            json.dump(fresh, fh, indent=1, sort_keys=True)
        print('wrote %s: %d functions' % (OUT, fresh['population']))

    s = fresh['summary']
    if args.json:
        print(json.dumps(s, indent=1))
        return 0

    print('\nattribution:')
    for k, v in s['attribution'].items():
        print('  %-24s %d' % (k, v))
    print('confidence:')
    for k, v in s['confidence'].items():
        print('  %-24s %d' % (k, v))
    print('\nUNATTRIBUTED: %d of %d (%.1f%%). This is the honest answer, not a to-do.'
          % (s['unattributed'], fresh['population'], 100.0 * s['unattributed'] / fresh['population']))
    print('sizes: %d asserted, %d n-a (no entry in docs/corpus.json)'
          % (s['with_asserted_size'], s['without_asserted_size']))
    print('unpopulated columns: %s' % ', '.join(sorted(fresh['unpopulated'])))
    return 0


if __name__ == '__main__':
    sys.exit(main())
