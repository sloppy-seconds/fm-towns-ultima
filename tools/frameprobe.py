#!/usr/bin/env python3
"""tools/frameprobe.py - what makes High C 1.73 emit a frame pointer?

WHY THIS EXISTS. Two routines in the Level-1 pool pull the cord with class
`frame-decision`: the target has `55 8b ec` and args at [ebp+N], our compile
has neither and reads args at [esp+N]. Same instructions, same offsets,
different prologue. If the discriminator is reachable from source then a whole
class of routines becomes matchable.

tools/frameanalysis.js already measured the static properties of all 738 game
routines and found that none of them predicts the frame well: 'reads arguments
at [ebp+N]' separates framed from unframed by only 0.56, and 56.9 percent of
routines are unframed. So the discriminator is a compiler decision, not a
property of the routine's interface, and the way to find it is to ask the
compiler directly.

This tool compiles a battery of sources that differ in one respect at a time
and reports which ones produce `55 8b ec`. The result is a table of levers,
which is what the loop needs: a cord pull of class `frame-decision` then has a
list of things to try instead of a shrug.

USAGE
  python3 tools/frameprobe.py                 run the battery
  python3 tools/frameprobe.py --only locals   run variants whose name matches
  python3 tools/frameprobe.py --list          list variant names

Requires cserve.js to be running and the guest to be healthy. It resets the
image on corruption, the same way decompile-run.js does.

SIDE EFFECTS: compiles into the guest floppy via /api/compile, which creates
and removes its own files. It does not touch saves/dos62v6.pristine.hdm.
"""

import argparse
import json
import os
import sys
import time
import urllib.error
import urllib.request

BASE = 'http://127.0.0.1:8097'
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

# The storage target used throughout: six int arguments written to consecutive
# dwords at 0xe3f4+0x24. This mirrors the real routine at 0xe1bf4 so that the
# two can be compared directly rather than through a translation.
TARGET = ('558becb8f4e300008b5508 895024 8b550c 895028 8b5510 89502c 8b5514 895030'
          ' 8b5518 895034 8b551c 895038 c9 c3').replace(' ', '')

SIG = '558bec'  # push ebp; mov ebp,esp


def variants():
    """Each variant is (name, source, why). The `why` is what a reader needs in
    order to know which lever it tests, and it is printed with the result."""
    common_tail = 'p[9]=a;p[10]=b;p[11]=c;p[12]=d;p[13]=e;p[14]=g;'

    return [
        ('baseline',
         'void f(int a,int b,int c,int d,int e,int g)'
         '{ int *p=(int*)0xe3f4; ' + common_tail + ' }',
         'no locals, six int arguments. Expected to be frameless.'),

        ('local-unused',
         'void f(int a,int b,int c,int d,int e,int g)'
         '{ int z; int *p=(int*)0xe3f4; ' + common_tail + ' }',
         'one declared but unread local. Does declaring alone force a frame?'),

        ('local-used',
         'void f(int a,int b,int c,int d,int e,int g)'
         '{ int z; z=a; int *p=(int*)0xe3f4; ' + common_tail + ' }',
         'a local that is written. Distinguishes "declared" from "live".'),

        ('local-sum',
         'void f(int a,int b,int c,int d,int e,int g)'
         '{ int z=a+b; int *p=(int*)0xe3f4; ' + common_tail + ' (void)z; }',
         'a local computed from arguments and discarded.'),

        ('ampersand-param',
         'void f(int a,int b,int c,int d,int e,int g)'
         '{ int *q=&a; int *p=(int*)0xe3f4; ' + common_tail + ' (void)q; }',
         'taking the address of a parameter. High C may need a real frame for this.'),

        ('nested-call',
         'int h(int); void f(int a,int b,int c,int d,int e,int g)'
         '{ int *p=(int*)0xe3f4; ' + common_tail + ' h(a); }',
         'an outbound call. Tests the "calls" hypothesis.'),

        ('array-local',
         'void f(int a,int b,int c,int d,int e,int g)'
         '{ int z[2]; int *p=(int*)0xe3f4; ' + common_tail + ' (void)z; }',
         'an array local, which cannot live in a register.'),

        ('struct-local',
         'struct S{int x,y;}; void f(int a,int b,int c,int d,int e,int g)'
         '{ struct S s; int *p=(int*)0xe3f4; ' + common_tail + ' (void)s; }',
         'a struct local, likewise register-hostile.'),

        ('seven-args',
         'void f(int a,int b,int c,int d,int e,int g,int h2)'
         '{ int *p=(int*)0xe3f4; ' + common_tail + ' (void)h2; }',
         'one more argument than the target. Tests whether arity alone matters.'),

        ('varargs',
         'void f(int a,int b,int c,int d,int e,int g, ...)'
         '{ int *p=(int*)0xe3f4; ' + common_tail + ' }',
         'variadic. A varargs function usually needs a frame.'),

        ('recurse',
         'void f(int a,int b,int c,int d,int e,int g)'
         '{ int *p=(int*)0xe3f4; ' + common_tail + ' if(a) f(b,c,d,e,g,a); }',
         'a call to itself, which needs a stable frame.'),

        ('static-local',
         'void f(int a,int b,int c,int d,int e,int g)'
         '{ static int z; int *p=(int*)0xe3f4; ' + common_tail + ' z=a; }',
         'a static local, which lives in data and should not force a frame.'),

        # --- battery 2: target the exact shape of 0xe1bf4 ---------------------
        # The real routine has a frame and NO locals: `55 8b ec` then straight to
        # `b8 f4 e3 00 00`, no `sub esp`, no pushed registers, and `leave`. Every
        # framed variant above either allocates or saves registers, so the shape
        # that produced the original is something else.

        ('base-first-arg',
         'void f(int a,int b,int c,int d,int e,int g)'
         '{ int *p=(int*)(0xe3f4+a); p[9]=a; }',
         'base depends on an argument, so it cannot be a bare mov eax,imm.'),

        ('addr-of-arg',
         'void f(int a,int b,int c,int d,int e,int g)'
         '{ int *p=(int*)0xe3f4; *(int*)((char*)p+0x24)=a;'
         ' *(int*)((char*)p+0x28)=b; *(int*)((char*)p+0x2c)=c;'
         ' *(int*)((char*)p+0x30)=d; *(int*)((char*)p+0x34)=e;'
         ' *(int*)((char*)p+0x38)=g; }',
         'byte-pointer arithmetic rather than array indexing.'),

        ('cond-local',
         'void f(int a,int b,int c,int d,int e,int g)'
         '{ int *p=(int*)0xe3f4; if(a>0) p[9]=a; else p[9]=0; ' + common_tail.replace('p[9]=a;','') + ' }',
         'a conditional whose live range might need a slot.'),

        ('six-temps',
         'void f(int a,int b,int c,int d,int e,int g)'
         '{ int *p=(int*)0xe3f4; int t; t=a;p[9]=t; t=b;p[10]=t; t=c;p[11]=t;'
         ' t=d;p[12]=t; t=e;p[13]=t; t=g;p[14]=t; }',
         'one reused temporary, which is a live local and should force a frame.'),

        ('extern-global',
         'extern int sys[0x400];\nvoid f(int a,int b,int c,int d,int e,int g)'
         '{ sys[9]=a;sys[10]=b;sys[11]=c;sys[12]=d;sys[13]=e;sys[14]=g; }',
         'a global array rather than a cast constant. This is the shape that '
         'folds and is what a real game routine would most likely be.'),

        ('struct-global',
         'struct S{int r[16];};\nextern struct S sys;\n'
         'void f(int a,int b,int c,int d,int e,int g)'
         '{ sys.r[9]=a;sys.r[10]=b;sys.r[11]=c;sys.r[12]=d;sys.r[13]=e;sys.r[14]=g; }',
         'a global struct, which is how the offsets 0x24..0x38 read.'),

        ('base-last-use',
         'int *f(int a,int b,int c,int d,int e,int g)'
         '{ int *p=(int*)0xe3f4; p[9]=a;p[10]=b;p[11]=c;p[12]=d;p[13]=e;p[14]=g;'
         ' return p; }',
         'returns the base, which forces it into eax. The target leaves eax holding '
         '0xe3f4 with no reload, which is what a value living in the return register '
         'looks like.'),

        ('target-shape-min',
         'void f(int a,int b,int c,int d,int e,int g)'
         '{ *(int*)0xe3f4=0; int *p=(int*)0xe3f4; p[9]=a;p[10]=b;p[11]=c;'
         'p[12]=d;p[13]=e;p[14]=g; }',
         'an earlier use of the literal first, so the constant is materialised early '
         'and possibly kept in eax.'),

        ('volatile-pointers',
         'void f(int a,int b,int c,int d,int e,int g)'
         '{ int * volatile p=(int*)0xe3f4; p[9]=a;p[10]=b;p[11]=c;p[12]=d;p[13]=e;p[14]=g; }',
         'volatile pointer. The target keeps the base in eax across six stores and '
         'reloads nothing, which is what a non-volatile pointer looks like, but this '
         'tests whether volatility changes the base holding.'),

        ('base-then-args-order',
         'void f(int a,int b,int c,int d,int e,int g)'
         '{ int *p=(int*)0xe3f4; p[9]=a; p[10]=b; p[11]=c; p[12]=d; p[13]=e; p[14]=g;'
         ' if(a==b) p[9]=g; }',
         'a second use of the base after a compare, so the base must survive.'),

        ('global-and-local',
         'extern int sys[0x400];\nvoid f(int a,int b,int c,int d,int e,int g)'
         '{ int i; for(i=0;i<1;i++){ sys[9]=a;sys[10]=b;sys[11]=c;'
         'sys[12]=d;sys[13]=e;sys[14]=g; } }',
         'a loop counter, a live local, around the global stores.'),
    ]


def http_json(path, payload=None, timeout=240):
    data = None if payload is None else json.dumps(payload).encode()
    req = urllib.request.Request(BASE + path, data=data,
                                 headers={'content-type': 'application/json'},
                                 method='GET' if payload is None else 'POST')
    return json.loads(urllib.request.urlopen(req, timeout=timeout).read())


def health():
    try:
        return http_json('/api/health', timeout=20)
    except Exception as exc:
        return {'healthy': False, 'error': str(exc)}


def reset_and_wait():
    print('  image corrupt, resetting', flush=True)
    http_json('/api/reset', {}, timeout=240)
    time.sleep(float(os.environ.get('DCR_BOOTWAIT', '50000')) / 1000.0)


def compile_source(src, retry=True):
    try:
        out = http_json('/api/compile', {'source': src, 'name': 'FP'})
    except urllib.error.HTTPError as exc:
        out = {'ok': False, 'error': 'HTTP %s' % exc.code}
    except Exception as exc:
        out = {'ok': False, 'error': str(exc)}

    if not out.get('ok') and retry:
        msg = str(out.get('error', ''))
        if 'corrupt' in msg.lower() or 'unreadable' in msg.lower() or '503' in msg:
            reset_and_wait()
            return compile_source(src, retry=False)
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--only', help='substring filter on variant names')
    ap.add_argument('--list', action='store_true')
    ap.add_argument('--json', help='write results to this path')
    args = ap.parse_args()

    table = variants()
    if args.list:
        for name, _, why in table:
            print('%-18s %s' % (name, why))
        return 0
    if args.only:
        table = [v for v in table if args.only in v[0]]
        if not table:
            print('no variant matches %r' % args.only, file=sys.stderr)
            return 64

    h = health()
    if not h.get('healthy'):
        print('guest unhealthy: %s' % h, file=sys.stderr)
        return 2

    print('target routine bytes')
    print('  %s' % TARGET)
    print()
    print('%-18s %-6s %s' % ('variant', 'frame', 'code'))
    print('-' * 78)

    results = []
    for name, src, why in table:
        out = compile_source(src)
        if not out.get('ok'):
            code = 'ERR ' + str(out.get('error', '?'))[:44]
            framed = None
        else:
            code = out.get('code', '').replace(' ', '')
            framed = code.startswith(SIG)
        results.append({'name': name, 'why': why, 'framed': framed,
                        'code': code, 'matched': code == TARGET})
        mark = 'YES' if framed else ('no' if framed is False else '--')
        flag = '  <-- MATCHES TARGET' if code == TARGET else ''
        print('%-18s %-6s %s%s' % (name, mark, code[:56], flag), flush=True)

    if args.json:
        with open(args.json, 'w') as fh:
            json.dump(results, fh, indent=1)
        print()
        print('written to %s' % args.json)

    framed_names = [r['name'] for r in results if r['framed']]
    print()
    print('emitted a frame pointer: %d of %d' % (len(framed_names), len(results)))
    if framed_names:
        print('  %s' % ' '.join(framed_names))
    return 0


if __name__ == '__main__':
    sys.exit(main())
