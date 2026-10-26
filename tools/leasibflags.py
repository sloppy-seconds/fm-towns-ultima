#!/usr/bin/env python3
"""tools/leasibflags.py - does a compiler flag change how lea encodes a base?

WHY THIS EXISTS. tools/frameflags.py asked whether a flag produces a frame, and
answered no over 21 flag sets. This asks a different question about the same
kind of variable: the ENCODING of a single instruction.

The routine at 0xe3c58 is 41 bytes and 39 of them already reproduce. The two
that do not are one instruction:

  target    8d b0 90 de 04 00    lea esi,[eax+0x4de90]      mod=10, disp32
  ours      8d 34 05 <disp32>    lea esi,[eax*1+disp32]     mod=00, SIB base=101

Both compute the same address. The target keeps the base register; this build
puts it in a SIB byte with no base field. The question is whether High C 1.73
has a flag that chooses the first.

WHY THIS IS WORTH A PROBE RATHER THAN MORE SOURCE SHAPES. Four source shapes
were tried on 0xe3c58 and every one produced the SIB form, so the remaining
variable is the command line. That is the same reasoning frameflags.py used, and
the same conclusion applies: vary only the flags.

READ THE OUTPUT AS A SET, NOT A HIT. A flag that changes the lea form without
also changing the 39 matching bytes is interesting. A flag that matches the lea
but breaks something else is not a match for this routine and must not be
reported as one. The probe therefore reports the WHOLE code string, not a yes.

USAGE
  python3 tools/leasibflags.py             run the matrix
  python3 tools/leasibflags.py --list      list the flag sets and the target
  python3 tools/leasibflags.py --json out  write results
"""

import argparse
import json
import os
import sys
import time
import urllib.error
import urllib.request

BASE = 'http://127.0.0.1:8097'

# The control source: the exact 0xe3c58 body, reduced to the shape that matters.
# `src + (i<<12)` is what produces the lea. The copy loop is kept because the
# target's whole 41 bytes are the comparison, and a flag that fixes the lea while
# changing the loop is not a match.
SRC = ('extern unsigned char dst[4096];\n'
       'extern unsigned char src[1048576];\n'
       'void f(int i) {\n'
       '  unsigned char *d = dst;\n'
       '  unsigned char *s = src + (i<<12);\n'
       '  int n;\n'
       '  for (n = 0; n < 0x1000; n++) *d++ = *s++;\n'
       '}\n')

# The game's bytes at 0xe3c58, from ENCHANT.EXP.
TARGET = ('558bec5657bf78d50b008b4508c1e00c8db090de04002bc981f900100000'
          '7d05acaa41ebf35f5ec9c3')

# The one instruction under test. Present in the target, absent when the build
# picks the SIB encoding.
WANT_SUB = '8db0'

# Flag families. High C 1.73 is documented as accepting -on/-off with a toggle
# name, and hc386set.cnf ships HCDEBUG with four of them. The names below are the
# ones this project has measured or found in that file, plus the -O family, plus a
# set of plausible names for an addressing or register choice.
FLAGSETS = [
    ('(none)', ''),
    # The -O family, complete rather than sampled.
    ('-O', '-O'),
    ('-O1', '-O1'),
    ('-O2', '-O2'),
    ('-O3', '-O3'),
    ('-O4', '-O4'),
    ('-OA', '-OA'),
    ('-Oa', '-Oa'),
    ('-Od', '-Od'),
    ('-Oe', '-Oe'),
    ('-Oi', '-Oi'),
    ('-Op', '-Op'),
    ('-Or', '-Or'),
    ('-Os', '-Os'),
    ('-Ou', '-Ou'),
    ('-Ow', '-Ow'),
    ('-Ox', '-Ox'),
    ('-OT', '-OT'),
    ('-OTx', '-OTx'),
    # The toggles this project has measured as live.
    ('off fp', '-off optimize_fp'),
    ('off xjmp', '-off optimize_xjmp'),
    ('off auto_reg', '-off auto_reg_alloc'),
    ('off postpone', '-off postpone_arg_pops'),
    ('off all4', '-off optimize_xjmp optimize_fp auto_reg_alloc postpone_arg_pops'),
    ('on fp', '-on optimize_fp'),
    ('on auto_reg', '-on auto_reg_alloc'),
    # Plausible names for an addressing choice. Unknown names are reported as
    # rejected rather than silently ignored, so a no-op cannot look like a result.
    ('off opt_cse', '-off optimize_cse'),
    ('off opt_loop', '-off optimize_loop'),
    ('off opt_size', '-off optimize_size'),
    ('off opt_strength', '-off optimize_strength'),
    ('off opt_addr', '-off optimize_addr'),
    ('on opt_addr', '-on optimize_addr'),
    ('off opt_peep', '-off peephole'),
    ('on opt_peep', '-on peephole'),
    ('off opt_alias', '-off optimize_alias'),
    ('off opt_common', '-off optimize_common'),
    ('off opt_dead', '-off optimize_dead'),
    ('off opt_reg', '-off optimize_reg'),
    ('off opt_sib', '-off optimize_sib'),
    ('on opt_sib', '-on optimize_sib'),
]


def post(path, body, timeout=240):
    data = json.dumps(body).encode()
    req = urllib.request.Request(BASE + path, data=data, method='POST',
                                 headers={'content-type': 'application/json'})
    return json.loads(urllib.request.urlopen(req, timeout=timeout).read())


def reset_and_wait():
    print('  image corrupt, resetting', flush=True)
    post('/api/reset', {}, timeout=240)
    time.sleep(float(os.environ.get('DCR_BOOTWAIT', '50000')) / 1000.0)


def compile_with(flags, retry=True):
    try:
        out = post('/api/compile', {'source': SRC, 'name': 'LS', 'flags': flags})
    except urllib.error.HTTPError as exc:
        out = {'ok': False, 'error': 'HTTP %s' % exc.code}
    except Exception as exc:
        out = {'ok': False, 'error': str(exc)}
    if not out.get('ok') and retry:
        msg = str(out.get('error', '')).lower()
        if 'corrupt' in msg or 'unreadable' in msg:
            reset_and_wait()
            return compile_with(flags, retry=False)
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--list', action='store_true')
    ap.add_argument('--json')
    args = ap.parse_args()

    if args.list:
        print('target %s' % TARGET)
        print('one instruction under test: %s (lea esi,[eax+disp32])' % WANT_SUB)
        print()
        for name, flags in FLAGSETS:
            print('%-16s %s' % (name, flags or '(none)'))
        return 0

    print('source: the 0xe3c58 body, src + (i<<12) then a 0x1000-byte copy')
    print('target: %s' % TARGET)
    print('looking for %s (the base-register lea) and a whole-string match' % WANT_SUB)
    print()
    print('%-16s %-6s %-6s %s' % ('flags', 'lea', 'exact', 'code or error'))
    print('-' * 100)

    results = []
    for name, flags in FLAGSETS:
        out = compile_with(flags)
        if out.get('ok'):
            code = out.get('code', '').replace(' ', '')
            has_lea = WANT_SUB in code
            exact = code == TARGET
            note = code[:62]
            err = None
        else:
            code, has_lea, exact = '', False, False
            err = str(out.get('error', '?'))[:60]
            note = 'ERR ' + err
        results.append({'name': name, 'flags': flags, 'code': code,
                        'has_lea': has_lea, 'exact': exact, 'error': err})
        print('%-16s %-6s %-6s %s' % (name, 'YES' if has_lea else 'no',
                                      'YES' if exact else 'no', note), flush=True)

    if args.json:
        with open(args.json, 'w') as fh:
            json.dump(results, fh, indent=1)

    ok = [r for r in results if r['error'] is None]
    lea = [r for r in ok if r['has_lea']]
    print()
    print('compiled: %d of %d;  rejected: %d'
          % (len(ok), len(results), len(results) - len(ok)))
    print('emitted the base-register lea (%s): %d' % (WANT_SUB, len(lea)))
    if lea:
        print('  %s' % ' '.join(r['name'] for r in lea))
    if any(r['exact'] for r in results):
        print('EXACT MATCH FOUND')
    else:
        print('no exact match')
    return 0


if __name__ == '__main__':
    sys.exit(main())
