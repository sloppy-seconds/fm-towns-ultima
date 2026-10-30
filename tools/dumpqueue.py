#!/usr/bin/env python3
"""tools/dumpqueue.py - disassemble the Level-1 pool with provenance.

WHY THIS EXISTS. Working a queue of routines by hand means running dd and ndisasm
for each one, and that is exactly the workflow that produced the stale-buffer
defect: a fixed temp path, a read that silently returned the previous routine,
and a confident wrong disassembly. This reads the image once, in-process, and
disassembles each address from those bytes, printing the source and offset with
every routine so a misalignment is visible rather than plausible.

It prints, for each routine: the address, the caller count from preflight, the
disassembly up to and including the first ret, and the resulting byte string
ready to paste into a candidate file.

USAGE
  python3 tools/dumpqueue.py                 the whole pool
  python3 tools/dumpqueue.py --addr 0xfd0ec  one routine
  python3 tools/dumpqueue.py --json out.json machine-readable
"""

import argparse
import json
import os
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
IMAGE = os.path.join(ROOT, 'ENCHANT.EXP')
HEADER = 0x20


def _ensure_capstone():
    """Import Capstone directly, re-execing into the repo venv if needed.

    Plan item 4h retires the ndisasm text-parsing path here (see
    tools/trycands.py for the reasoning and docs/tooling-policy.md).
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


def pool():
    out = subprocess.run(['node', os.path.join(ROOT, 'tools', 'preflight.js'), '--scan', '60'],
                         capture_output=True, text=True, cwd=ROOT).stdout
    rows = []
    for line in out.split('\n'):
        parts = line.split()
        if len(parts) == 3 and parts[0].startswith('0x'):
            rows.append({'addr': int(parts[0], 16), 'callers': int(parts[1]), 'size': int(parts[2])})
    return rows


def routine(image, addr, cap=512):
    """Bytes and disassembly from addr to the first ret, inclusive.

    Decoded in-process by Capstone (plan item 4h). The `bytes` field is the
    machine contract and is byte-identical to the retired ndisasm path on
    every queue address; `lines` is display text and now carries the
    Capstone rendering.
    """
    blob = image[addr:addr + cap]
    if not blob:
        return None
    bytes_ = []
    lines = []
    for ins in _MD.disasm(blob, addr):
        hexpart = ins.bytes.hex().upper()
        text = '%08X  %s  %s %s' % (ins.address, hexpart, ins.mnemonic, ins.op_str)
        lines.append(text)
        bytes_.extend(ins.bytes)
        if ins.mnemonic.startswith('ret'):
            break
        if len(bytes_) > cap:
            break
    return {
        'addr': addr,
        'stripped': addr - HEADER,
        'bytes': ' '.join('%02x' % b for b in bytes_),
        'lines': lines,
        'length': len(bytes_),
    }


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--addr')
    ap.add_argument('--json')
    ap.add_argument('--bytes-only', action='store_true')
    args = ap.parse_args()

    with open(IMAGE, 'rb') as fh:
        image = fh.read()

    if args.addr:
        targets = [{'addr': int(args.addr, 16), 'callers': '?', 'size': '?'}]
    else:
        targets = pool()

    results = []
    for t in targets:
        r = routine(image, t['addr'])
        if r is None:
            continue
        r['callers'] = t['callers']
        results.append(r)
        if args.bytes_only:
            print('%s  %s' % (hex(r['addr']), r['bytes']))
            continue
        print('=== %s  %s callers  %d bytes  (stripped %s)'
              % (hex(r['addr']), t['callers'], r['length'], hex(r['stripped'])))
        print('    source %s raw %s' % (os.path.basename(IMAGE), hex(r['addr'])))
        for line in r['lines']:
            print('  ' + line)
        print('  bytes: ' + r['bytes'])
        print()

    if args.json:
        with open(args.json, 'w') as fh:
            json.dump(results, fh, indent=1)
        print('written to %s' % args.json)
    return 0


if __name__ == '__main__':
    sys.exit(main())
