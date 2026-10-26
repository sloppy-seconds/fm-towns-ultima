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


def target_bytes(addr):
    """The target routine's bytes, from addr to the first ret inclusive.

    The bytes are read in-process and handed to ndisasm on stdin. An earlier
    version shelled out to dd into /var/tmp/r.bin and disassembled that path,
    which silently reused a stale file when the dd failed, producing a
    disassembly of the wrong routine with no error. Never route this through a
    shared temp file.
    """
    with open(IMAGE, 'rb') as fh:
        fh.seek(addr)
        blob = fh.read(4096)
    if not blob:
        raise SystemExit('no bytes at %s' % hex(addr))
    # ndisasm reads the bytes from stdin. Deliberately NOT a temp file: an earlier
    # version wrote /var/tmp/r.bin and disassembled that path, so when the write
    # did not happen ndisasm disassembled the PREVIOUS routine and reported it as
    # the target with no error. Nothing in this file may route bytes through a
    # shared path. tools/imgaudit.js asserts this.
    out = subprocess.run(['ndisasm', '-b32', '-w', '-o', hex(addr), '-'],
                         input=blob, capture_output=True)
    text = out.stdout.decode('latin1')
    bytes_ = []
    for line in text.split('\n'):
        if not line.strip():
            continue
        # ndisasm WRAPS a long instruction onto a continuation line that starts with
        # '-' and carries hex but no mnemonic:
        #     000EF548  C705606E0D003000  mov dword [0xd6e60],0x30
        #              -0000
        # The old version required parts[2] (the mnemonic) and silently dropped the
        # continuation, so 0xef548 was reported as 9 bytes when it is 11. The two
        # lost bytes were part of the immediate 30 00 00 00, one of which is 0xc3.
        # That made the routine look like it used a 2-byte immediate, and comparing
        # the truncated target against a correct build produced a false mismatch.
        # Never drop a line because it does not look like the shape you expect.
        if not line[0].isspace():
            parts = line.split(None, 2)
            if len(parts) < 2:
                continue
            hexpart = parts[1]
            mnemonic = parts[2].strip() if len(parts) > 2 else ''
        else:
            # Continuation line: '  -0000' continues the previous instruction.
            m = re.match(r'\s+-([0-9a-f]+)\s*$', line)
            if not m:
                continue
            hexpart = m.group(1)
            mnemonic = ''
        for i in range(0, len(hexpart), 2):
            bytes_.append(int(hexpart[i:i + 2], 16))
        if mnemonic.startswith('ret'):
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
