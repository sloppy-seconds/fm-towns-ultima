#!/usr/bin/env python3
"""tools/trycands.py - compile a list of C candidates and compare to a target.

WHY THIS EXISTS. Matching a routine by hand means editing a file, posting to the
compile API, and eyeballing hex, which is slow and the comparison is the part
that should be mechanical. This takes a target address in the game image and a
JSON file of labelled C candidates, compiles each, and reports exact match or
the first differing byte with context.

The target bytes come from the image at the given address, disassembled from
there so the instruction boundaries are right. Only the bytes up to and
including the first `ret` are compared, so trailing alignment padding in the
image does not cause a false mismatch.

USAGE
  python3 tools/trycands.py --addr 0xe9940 --cands /var/tmp/c.json
  python3 tools/trycands.py --addr 0xe9940 --cands /var/tmp/c.json --json out.json

Candidate file format: [{"label": "...", "source": "..."}, ...]

Requires cserve.js running and the guest healthy.
"""

import argparse
import json
import os
import re
import subprocess
import sys
import time
import urllib.error
import urllib.request

BASE = 'http://127.0.0.1:8097'
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
IMAGE = os.path.join(ROOT, 'ENCHANT.EXP')


def _ensure_capstone():
    """Import Capstone directly, re-execing into the repo venv if needed.

    Plan item 4h retires the ndisasm text-parsing path here: operand questions
    must be answered by a decoder that returns instruction objects, and four
    hand-rolled column parsers (including the continuation-line trap this file
    used to carry) are how that went wrong before. The venv is the one
    tools/decode-setup.sh creates; CS_PYTHON overrides.
    """
    try:
        import capstone  # noqa: F401
        return
    except ImportError:
        pass
    venv = os.environ.get('CS_PYTHON') or os.path.join(ROOT, 'tools', '.venv', 'bin', 'python3')
    # Compare unresolved paths: the venv python is a symlink to the same system
    # binary, so realpath() makes the two look identical and the re-exec never
    # happens.
    if os.path.exists(venv) and os.path.abspath(venv) != os.path.abspath(sys.executable):
        # sys.orig_argv carries the full command line including `-c script`;
        # sys.argv drops the -c argument itself, which broke the first version
        # of this bootstrap when invoked as `python3 -c ...`.
        os.execv(venv, [venv] + sys.orig_argv[1:])
    raise SystemExit('capstone is not importable and no venv at %s; run ./tools/decode-setup.sh' % venv)


_ensure_capstone()
from capstone import Cs, CS_ARCH_X86, CS_MODE_32  # noqa: E402

_MD = Cs(CS_ARCH_X86, CS_MODE_32)


def target_bytes(addr):
    """The target routine's bytes, from addr to the first ret inclusive.

    The bytes are read in-process and decoded in-process by Capstone. An
    earlier version shelled out to dd into /var/tmp/r.bin and disassembled
    that path, which silently reused a stale file when the dd failed,
    producing a disassembly of the wrong routine with no error. Never route
    this through a shared temp file. The ndisasm text parser that replaced dd
    is itself retired (plan item 4h): a decoder returns instruction objects,
    so there is no column layout to mis-parse and no `-w` continuation line to
    drop (docs/ndisasm-continuation.md).
    """
    with open(IMAGE, 'rb') as fh:
        fh.seek(addr)
        blob = fh.read(4096)
    if not blob:
        raise SystemExit('no bytes at %s' % hex(addr))
    bytes_ = []
    for ins in _MD.disasm(blob, addr):
        bytes_.extend(ins.bytes)
        if ins.mnemonic.startswith('ret'):
            break
        if len(bytes_) > 1024:
            break
    return bytes_


def post(path, payload, timeout=300):
    data = json.dumps(payload).encode()
    req = urllib.request.Request(BASE + path, data=data,
                                 headers={'content-type': 'application/json'},
                                 method='POST')
    return json.loads(urllib.request.urlopen(req, timeout=timeout).read())


def reset_and_wait():
    print('  image unhealthy, resetting', flush=True)
    post('/api/reset', {}, timeout=300)
    time.sleep(float(os.environ.get('DCR_BOOTWAIT', '50000')) / 1000.0)


def compile_source(src, name='TC', retry=True):
    try:
        out = post('/api/compile', {'source': src, 'name': name})
    except urllib.error.HTTPError as exc:
        out = {'ok': False, 'error': 'HTTP %s' % exc.code}
    except Exception as exc:
        out = {'ok': False, 'error': str(exc)}
    if not out.get('ok') and retry:
        msg = str(out.get('error', '')).lower()
        if 'corrupt' in msg or 'unreadable' in msg or '503' in msg:
            reset_and_wait()
            return compile_source(src, name, retry=False)
    return out


def first_diff(got, want):
    n = min(len(got), len(want))
    for i in range(n):
        if got[i] != want[i]:
            lo = max(0, i - 6)
            return i, got[lo:i + 8], want[lo:i + 8]
    if len(got) == len(want):
        return None, [], []
    return n, got[max(0, n - 6):n + 6], want[max(0, n - 6):n + 6]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--addr', required=True)
    ap.add_argument('--cands', required=True)
    ap.add_argument('--json')
    ap.add_argument('--limit', type=int, default=0, help='compare only N bytes')
    args = ap.parse_args()

    addr = int(args.addr, 0)
    want = target_bytes(addr)
    if args.limit:
        want = want[:args.limit]
    # Provenance first. The defect this guards against produced a *plausible*
    # disassembly of the wrong routine, so the fix is that every run states which
    # file and offset the bytes came from and shows the leading bytes. If those do
    # not match the address named on the command line, it is visible before any
    # comparison happens.
    print('source %s  raw 0x%x' % (os.path.basename(IMAGE), addr))
    print('target %s  %d bytes' % (args.addr, len(want)))
    print('       %s' % ' '.join('%02x' % b for b in want))
    print()

    cands = json.load(open(args.cands))
    results = []
    for c in cands:
        out = compile_source(c['source'])
        if not out.get('ok'):
            rec = {'label': c['label'], 'ok': False,
                   'error': out.get('error', '?'), 'code': ''}
            results.append(rec)
            print('%-34s ERR %s' % (c['label'], str(rec['error'])[:40]))
            continue
        got = [int(b, 16) for b in out['code'].split()]
        if args.limit:
            got = got[:args.limit]
        match = got == want
        rec = {'label': c['label'], 'ok': True, 'match': match,
               'code': ' '.join('%02x' % b for b in got),
               'len': len(got)}
        results.append(rec)
        if match:
            print('%-34s MATCH (%d bytes)' % (c['label'], len(got)))
        else:
            pos, g, w = first_diff(got, want)
            rec['diffAt'] = pos
            print('%-34s %2d/%2d bytes, first diff @%s'
                  % (c['label'], len(got), len(want), pos))
            print('%-34s   got  %s' % ('', ' '.join('%02x' % b for b in g)))
            print('%-34s   want %s' % ('', ' '.join('%02x' % b for b in w)))

    if args.json:
        with open(args.json, 'w') as fh:
            json.dump({'addr': args.addr, 'target': ' '.join('%02x' % b for b in want),
                       'results': results}, fh, indent=1)
        print()
        print('written to %s' % args.json)

    n = sum(1 for r in results if r.get('match'))
    print()
    print('%d of %d matched' % (n, len(results)))
    return 0


if __name__ == '__main__':
    sys.exit(main())
