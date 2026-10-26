#!/usr/bin/env python3
"""tools/frameflags.py - does a compiler flag produce the frame, not the source?

WHY THIS EXISTS. tools/frameprobe.py ran 23 source variants against the routine
at 0xe1bf4 and got no match. The finding that matters is the shape of the
mismatch, and it is not about which C was written:

  target          55 8b ec        b8 f4 e3 00 00   8b 55 08 ...
                  frame           base in eax      arg from [ebp+8]
                  no sub esp, no pushed registers

  every framed    55 8b ec 50     ... or 83 ec 08    or 56 57 ...
  variant         frame but with a slot, or with saved registers

So the target has a frame pointer and NOTHING else: no stack allocation and no
saved registers, yet it reads its arguments from [ebp+N]. Every source shape that
produced a frame also produced one of the two things the target lacks.

That points away from source and towards the compiler invocation. A frame
pointer without a frame is what a specific optimisation level or a specific
-noframe / -frame style switch produces, and High C 1.73 has flags this project
has not tried because the compile path has been hardcoded with no flags since it
was first made to work.

This tool compiles ONE source under a matrix of flags and reports which
invocations reproduce the target prologue. The source is fixed on purpose: if
varying the source cannot produce the shape, the remaining variable is the
command line.

USAGE
  python3 tools/frameflags.py              full matrix
  python3 tools/frameflags.py --list       list the flag sets
  python3 tools/frameflags.py --json out   write results

Unknown flags make High C error rather than ignore, so a flag set that the
compiler rejects is reported as such and is not a silent no-op.
"""

import argparse
import json
import os
import sys
import time
import urllib.error
import urllib.request

BASE = 'http://127.0.0.1:8097'

# The framed local variant: it reliably produces a frame, so it is the best
# control for asking what removes the slot and the saved registers.
SRC = ('void f(int a,int b,int c,int d,int e,int g)'
       '{ int z; z=a; int *p=(int*)0xe3f4; '
       'p[9]=a;p[10]=b;p[11]=c;p[12]=d;p[13]=e;p[14]=g; (void)z; }')

TARGET = ('558becb8f4e300008b55088950248b550c8950288b551089502c8b5514895030'
          '8b55188950348b551c895038c9c3')

# Flag sets to try. High C 1.73's optimiser is controlled with -O and friends.
FLAGSETS = [
    ('(none)', ''),
    ('-O', '-O'),
    ('-O1', '-O1'),
    ('-O2', '-O2'),
    ('-OT', '-OT'),
    ('-OTx', '-OTx'),
    ('-Od', '-Od'),
    ('-Ou', '-Ou'),
    ('-Or', '-Or'),
    ('-Os', '-Os'),
    ('-Oa', '-Oa'),
    ('-Ow', '-Ow'),
    ('-Oz', '-Oz'),
    ('-Oe', '-Oe'),
    ('-noframe', '-noframe'),
    ('-frame', '-frame'),
    ('-f', '-f'),
    ('-g', '-g'),
    ('-v', '-v'),
    ('-O -noframe', '-O -noframe'),
    ('-Oe -noframe', '-Oe -noframe'),
]


def post(path, payload, timeout=240):
    data = json.dumps(payload).encode()
    req = urllib.request.Request(BASE + path, data=data,
                                 headers={'content-type': 'application/json'},
                                 method='POST')
    return json.loads(urllib.request.urlopen(req, timeout=timeout).read())


def reset_and_wait():
    print('  image corrupt, resetting', flush=True)
    post('/api/reset', {}, timeout=240)
    time.sleep(float(os.environ.get('DCR_BOOTWAIT', '50000')) / 1000.0)


def compile_with(flags, retry=True):
    try:
        out = post('/api/compile', {'source': SRC, 'name': 'FF', 'flags': flags})
    except urllib.error.HTTPError as exc:
        out = {'ok': False, 'error': 'HTTP %s' % exc.code}
    except Exception as exc:
        out = {'ok': False, 'error': str(exc)}
    if not out.get('ok') and retry:
        msg = str(out.get('error', '')).lower()
        if 'corrupt' in msg or 'unreadable' in msg or '503' in msg:
            reset_and_wait()
            return compile_with(flags, retry=False)
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--list', action='store_true')
    ap.add_argument('--json')
    args = ap.parse_args()

    if args.list:
        for name, flags in FLAGSETS:
            print('%-16s %s' % (name, flags or '(none)'))
        return 0

    print('fixed source: framed local variant, six int args into 0xe3f4+0x24')
    print('target      %s' % TARGET)
    print()
    print('%-16s %-5s %s' % ('flags', 'frame', 'code / error'))
    print('-' * 78)

    results = []
    for name, flags in FLAGSETS:
        out = compile_with(flags)
        if out.get('ok'):
            code = out.get('code', '').replace(' ', '')
            framed = code.startswith('558bec')
            note = code[:52]
            match = code == TARGET
        else:
            code, framed, match = '', None, False
            note = 'ERR ' + str(out.get('error', '?'))[:46]
            log = (out.get('log') or '').strip().replace('\n', ' ')[:46]
            if log:
                note = 'ERR ' + log
        results.append({'name': name, 'flags': flags, 'framed': framed,
                        'code': code, 'matched': match})
        mark = 'YES' if framed else ('no' if framed is False else '--')
        print('%-16s %-5s %s%s' % (name, mark, note,
                                   '  <-- MATCHES' if match else ''), flush=True)

    if args.json:
        with open(args.json, 'w') as fh:
            json.dump(results, fh, indent=1)

    ok = [r for r in results if r['framed'] is not None]
    framed = [r for r in ok if r['framed']]
    print()
    print('compiled: %d of %d;  emitted a frame: %d'
          % (len(ok), len(results), len(framed)))
    if framed:
        print('  %s' % ' '.join(r['name'] for r in framed))
    if any(r['matched'] for r in results):
        print('EXACT MATCH FOUND')
    return 0


if __name__ == '__main__':
    sys.exit(main())
