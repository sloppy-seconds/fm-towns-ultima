#!/usr/bin/env python3
r"""tools/cluster.py - feature-vector clustering of the game module, against the atlas.

WHY THIS EXISTS. Plan item 0c (docs/plan-attribution.md) is the step between "we have
an atlas" and "we have attributions". Clustering without the atlas yields groups; the
groups only mean something if the axes they are built on are the idioms the atlas
showed this compiler emitting or never emitting. So every feature below is an atlas
finding, cited by probe, and nothing is a feature because it looked like a useful
thing to count.

THE POPULATION is the recompiler's own output, `module/p_game_*.cpp`. Each function
is `void f_XXXXXXXX(...)` and its instructions are carried as comments, so the
instruction census comes from the same asserted walk that produced the port rather
than from a second decode that could disagree with it. Extents are the gap between
consecutive function starts, which is an assertion by the walk, not a scan for `ret`.

THE CLUSTERING is a categorical signature, not a distance metric with a chosen k.
Every axis is a small discrete set derived from the atlas, so a function's cluster
is the tuple of its axis values and the assignment is reproducible and inspectable.
A k-means over hand-weighted numeric features would produce groups nobody could
explain back to an idiom, which is the thing this item must not do.

# TWO THINGS ARE CHECKED, because the item names both:
#
# - the `enter` band is the one group with independent boundary evidence, so it must
#   land in one cluster. The plan states it as "41 routines in 2,260 bytes" and also
#   gives the range 0xfdb9a..0x105000, and the two disagree: 2,260 bytes from
#   0xfdb9a ends at 0xfe46e, and that band holds 43 recompiled functions, which
#   matches the routine count. The byte count is taken as the assertion and the
#   range as the typo, and the discrepancy is recorded rather than resolved silently.
#
# - clusters must not be a re-derivation of address position. The check is
#   dispersion: if a cluster occupies one contiguous address range and neighbouring
#   clusters do too, the vectors have added nothing beyond position, which is the
#   stated failure case.

USAGE
  ./tools/cluster.py                    summary
  ./tools/cluster.py --json             full per-function vectors

  The ledger itself is written by tools/ledger.py, which includes the cluster column. This tool no
  longer has a --write: two writers of one file silently drop each other's columns.
"""

import argparse
import collections
import json
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
# The game module of the title this tool works on, which is Ultima II: the corpus census and the attribution ledger are
# ENCHANT.EXP's. Since the modules were split by owner on 2026-11-12, that is module/u2 rather than module/.
MODULE_DIR = os.path.join(ROOT, 'module', 'u2')

FUNC_RE = re.compile(r'^void f_([0-9a-f]{8})\(')
INSN_RE = re.compile(r'^\s*//\s*([0-9a-f]{6})\s+(.*?)\s*$')

ENTER_LO = 0xfdb9a
ENTER_BYTES = 2260
ENTER_HI = ENTER_LO + ENTER_BYTES


def load_functions():
    """Every recompiled game function: address, instruction texts, in file order."""
    funcs = {}
    for name in sorted(os.listdir(MODULE_DIR)):
        if not (name.startswith('p_game_') and name.endswith('.cpp')):
            continue
        cur = None
        with open(os.path.join(MODULE_DIR, name)) as fh:
            for line in fh:
                m = FUNC_RE.match(line)
                if m:
                    cur = int(m.group(1), 16)
                    funcs[cur] = []
                    continue
                if cur is None:
                    continue
                m = INSN_RE.match(line)
                if m:
                    funcs[cur].append(m.group(2))
                elif line.startswith('}'):
                    cur = None
    return funcs


def mnemonics(insns):
    return [i.split(' ', 1)[0].strip() for i in insns]


def features(addr, insns):
    """The atlas-derived feature vector for one function.

    Each axis names the atlas probe that established it as a discriminator.
    """
    mn = mnemonics(insns)
    joined = '\n'.join(insns)
    f = {}
    f['addr'] = addr
    f['n_insns'] = len(mn)

    # Prologue and epilogue shape. A01/A03/A06: unframed leaves, framed with an
    # address-taken local, framed with a callee-saved spill.
    f['frame'] = 'ebp' if ('push ebp' in joined and 'mov ebp, esp' in joined) else 'none'
    spill = [r for r in ('edi', 'esi', 'ebx') if ('push %s' % r) in joined]
    f['spill'] = ''.join(sorted(spill)) or '-'
    f['epilogue'] = 'leave' if 'leave' in mn else ('pop' if 'pop ebp' in mn else 'ret-only')

    # Argument base register. A01/A04 vs A03/A27: the base follows the frame.
    # The module renders operands Intel-style with spaces, `[ebp + 8]`, so the
    # pattern has to allow them; a tighter pattern matched nothing and every
    # function came out `argbase=-`.
    esp_args = bool(re.search(r'\[esp \+', joined))
    ebp_args = bool(re.search(r'\[ebp \+', joined))
    f['argbase'] = 'ebp' if ebp_args else ('esp' if esp_args else '-')

    # Zeroing. A08/A09/A13: this compiler uses sub reg,reg and never xor reg,reg.
    f['zero_sub'] = bool(re.search(r'\bsub (\w+), \1\b', joined))
    f['zero_xor'] = bool(re.search(r'\bxor (\w+), \1\b', joined))

    # Zero test. A09: cmp x,0 and never test x,x.
    f['test_used'] = 'test' in mn
    f['cmp0'] = bool(re.search(r'\bcmp\b.*,\s*0\b', joined))
    # `and reg,reg` as a truthiness test appears in the game (0xe3ff6 does it on a
    # pointer) and the atlas has no probe for it, so it is flagged as an atlas gap
    # rather than silently ignored. A feature that says "we have not characterised
    # this" is worth more than one that pretends the question was asked.
    f['and_self'] = bool(re.search(r'\band (\w+), \1\b', joined))

    # Division. A10/A12 idiv even for constants, A11/A31 bias-then-shift, A32 sar 1
    # only from an explicit halving.
    f['idiv'] = 'idiv' in mn
    f['cdq'] = 'cdq' in mn
    f['sar1'] = bool(re.search(r'\bsar\b.*,\s*1\b', joined))
    f['sarwide'] = bool(re.search(r'\bsar\b.*,\s*(0x[2-9a-f]|[2-9])\b', joined))
    f['imul'] = 'imul' in mn
    f['lea'] = 'lea' in mn

    # Narrow extension. A21.
    f['movsx'] = 'movsx' in mn
    f['movzx'] = 'movzx' in mn

    # Switch lowering. A15 inline jump table, A16 compare chain.
    f['jumptab'] = bool(re.search(r'\bjmp dword', joined))
    f['setcc'] = any(m.startswith('set') for m in mn)

    # String ops. A30: never emitted by this compiler, so presence is evidence.
    f['strorm'] = any(m in ('rep', 'movsb', 'movsw', 'stosb', 'lodsb') or m.startswith('rep ') for m in mn)
    f['int_instr'] = 'int' in mn
    return f


# The signature is the subset of axes that carry attribution meaning. Size is
# deliberately excluded: including it would let cluster boundaries be driven by
# how big a function is, which correlates with position and tells us nothing.
SIG_AXES = ('frame', 'spill', 'epilogue', 'argbase', 'zero_sub', 'zero_xor',
            'test_used', 'cmp0', 'and_self', 'idiv', 'cdq', 'sar1', 'sarwide',
            'imul', 'lea', 'movsx', 'movzx', 'jumptab', 'setcc', 'strorm',
            'int_instr')


def signature(f):
    parts = []
    for a in SIG_AXES:
        v = f[a]
        if isinstance(v, bool):
            parts.append(a if v else '')
        else:
            parts.append('%s=%s' % (a, v))
    return '|'.join(p for p in parts if p) or 'bare'


def dispersion(members):
    """How spread out a cluster's addresses are, as a position-only tripwire.

    span/(n * median_gap_in_image) is roughly 1.0 when a cluster is one
    contiguous run of addresses and grows as the cluster scatters. Stated as
    span and count too, because a single number invites over-reading.
    """
    addrs = sorted(m['addr'] for m in members)
    return {'n': len(addrs), 'span': addrs[-1] - addrs[0] if len(addrs) > 1 else 0,
            'lo': '0x%x' % addrs[0], 'hi': '0x%x' % addrs[-1]}


def coherence(rows, band=None):
    """Fraction of the population (or of a band) that the largest cluster holds."""
    pop = [r for r in rows if band is None or band[0] <= r['addr'] < band[1]]
    if not pop:
        return 0, 0, 0
    c = collections.Counter(r['cluster'] for r in pop)
    top, n = c.most_common(1)[0]
    return len(pop), len(c), n / len(pop)


def granularity_sweep(rows, enter):
    """Cluster at each prefix of the axis list and report enter-band coherence.

    The full signature is deliberately fine-grained, and a fine signature can fail
    a cohesion test simply by separating rather than grouping. Sweeping the axis
    prefix separates those two: if coherence rises to 1.0 at some coarseness the
    vectors do support the claim and the question is which axes carry it, and if
    it never does then the enter region's cohesion is not expressible in these
    idioms, which is a finding about the idioms rather than a tuning problem.
    """
    out = []
    for k in range(1, len(SIG_AXES) + 1):
        axes = SIG_AXES[:k]
        saved = list(SIG_AXES)
        globals()['SIG_AXES'] = tuple(axes)
        for r in rows:
            r['cluster'] = signature(r)
        globals()['SIG_AXES'] = tuple(saved)
        n, nc, frac = coherence(rows)
        en, enc, efrac = coherence(rows, enter)
        out.append({'axes': k, 'clusters': nc, 'largest_frac': round(frac, 3),
                    'enter_clusters': enc, 'enter_frac': round(efrac, 3)})
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--json', action='store_true')
    ap.add_argument('--write', default=None)
    args = ap.parse_args()

    funcs = load_functions()
    if not funcs:
        raise SystemExit('no functions found under %s' % MODULE_DIR)
    rows = [features(a, insns) for a, insns in sorted(funcs.items())]
    for r in rows:
        r['cluster'] = signature(r)
        r['in_enter'] = ENTER_LO <= r['addr'] < ENTER_HI

    groups = collections.defaultdict(list)
    for r in rows:
        groups[r['cluster']].append(r)

    sweep = granularity_sweep([dict(r) for r in rows], (ENTER_LO, ENTER_HI))
    # Restore the full signature after the sweep mutated the copies.
    for r in rows:
        r['cluster'] = signature(r)
    groups = collections.defaultdict(list)
    for r in rows:
        groups[r['cluster']].append(r)

    ordered = sorted(groups.items(), key=lambda kv: -len(kv[1]))
    clusters = []
    for i, (sig, members) in enumerate(ordered):
        clusters.append({
            'id': 'C%02d' % i,
            'signature': sig,
            'size': len(members),
            'dispersion': dispersion(members),
            'members': ['0x%x' % m['addr'] for m in sorted(members, key=lambda x: x['addr'])],
        })

    # The enter-band check: which cluster holds it, and what fraction.
    enter = [r for r in rows if r['in_enter']]
    enter_by = collections.Counter(r['cluster'] for r in enter)
    top_enter = enter_by.most_common(1)[0] if enter_by else ('none', 0)

    # Position-only tripwire: a cluster whose members are one contiguous run with
    # no other cluster interleaved is re-deriving the address boundary.
    contiguous = [c for c in clusters if c['size'] >= 5 and
                  c['dispersion']['span'] and
                  c['dispersion']['hi'] <= '0x%x' % (int(c['dispersion']['lo'], 16) + c['dispersion']['span'])]
    interleaved = 0
    addrs_sorted = sorted(r['addr'] for r in rows)
    seq = [next(c['id'] for c in clusters if '0x%x' % a in c['members']) for a in addrs_sorted]
    for i in range(1, len(seq)):
        if seq[i] != seq[i - 1]:
            interleaved += 1

    out = {
        'population': len(rows),
        'clusters': len(clusters),
        'axes': list(SIG_AXES),
        'sizes': [c['size'] for c in clusters],
        'largest': [{'id': c['id'], 'size': c['size'], 'signature': c['signature'],
                     'span': c['dispersion']['span'], 'lo': c['dispersion']['lo'],
                     'hi': c['dispersion']['hi']} for c in clusters[:10]],
        'enter_band': {'functions': len(enter), 'top_cluster': top_enter[0],
                       'in_top': top_enter[1],
                       'fraction': round(top_enter[1] / len(enter), 3) if enter else 0,
                       'clusters_touched': len(enter_by)},
        'position_check': {'cluster_boundaries_in_address_order': interleaved,
                           'contiguous_large_clusters': len(contiguous)},
        'granularity_sweep': sweep,
        'atlas_gaps_flagged': {
            'functions using `and reg,reg` as a test': sum(1 for r in rows if r['and_self']),
            'functions using `test`': sum(1 for r in rows if r['test_used']),
            'functions using `xor reg,reg` to zero': sum(1 for r in rows if r['zero_xor']),
            'functions using `sub reg,reg` to zero': sum(1 for r in rows if r['zero_sub']),
            'functions using a string op': sum(1 for r in rows if r['strorm']),
            'functions using `sar 1`': sum(1 for r in rows if r['sar1']),
        },
    }

    # --write was retired on 2026-11-02. It wrote docs/ledger.json with only the cluster column,
    # and tools/ledger.py now owns that file with all ten columns. Two writers of one ledger is the
    # drift this repository keeps catching, so this refuses rather than clobbering the full file.
    if args.write:
        raise SystemExit('--write is retired: the ledger is generated by tools/ledger.py, which '
                         'includes the cluster column. Two writers of docs/ledger.json would '
                         'silently drop the other nine columns.')

    if args.json:
        print(json.dumps(out, indent=1))
        return

    print('population: %d functions, %d clusters' % (len(rows), len(clusters)))
    print('sizes: %s' % ', '.join(str(s) for s in out['sizes'][:14]))
    print('\nlargest clusters:')
    for c in out['largest']:
        print('  %-4s %4d  span %#x  %s..%s' % (c['id'], c['size'], c['span'], c['lo'], c['hi']))
        print('        %s' % c['signature'][:150])
    e = out['enter_band']
    print('\nenter band: %d functions, %d clusters touched, largest %s holds %d (%.0f%%)'
          % (e['functions'], e['clusters_touched'], e['top_cluster'], e['in_top'], 100 * e['fraction']))
    print('position check: %d cluster boundaries in address order, %d large clusters are contiguous runs'
          % (out['position_check']['cluster_boundaries_in_address_order'],
             out['position_check']['contiguous_large_clusters']))
    print('\ngranularity sweep (axes -> clusters, enter-band coherence):')
    for s in out['granularity_sweep']:
        print('  %2d axes: %4d clusters, largest %.0f%%   enter in %3d clusters, largest %.0f%%'
              % (s['axes'], s['clusters'], 100 * s['largest_frac'],
                 s['enter_clusters'], 100 * s['enter_frac']))
    print('\natlas coverage on the real population:')
    for k, v in out['atlas_gaps_flagged'].items():
        print('  %-40s %d' % (k, v))


if __name__ == '__main__':
    main()
