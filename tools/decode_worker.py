#!/usr/bin/env python3
"""tools/decode_worker.py - decode a region and emit one JSON object per instruction.

WHY PYTHON AND NOT NODE. The operand structure is the entire reason for replacing the
text parsers: `tools/globals.js` inferred whether a hex literal was a memory reference or
an immediate by regex, and got it wrong twice in one session. Capstone exposes that as
`X86_OP_MEM` against `X86_OP_IMM`, which cannot be misread.

The Node binding (`capstone-wasm`) exposes only `mnemonic` and `opStr`, with no operand
types, so it cannot supply the one thing wanted. The C library is already installed as an
rpm and the Python binding installs into a throwaway venv in seconds. Measured: detailed
decode of 0xe0000-0xf0000 is 20,633 instructions in 0.20s, so one subprocess per region is
cheap and per-instruction IPC is unnecessary.

RESYNC. Capstone stops at the first byte it cannot decode; ndisasm emits `db` and
continues. A caller decoding a region that contains data needs the resync behaviour, so
undecodable bytes are skipped one at a time and reported as `{"skip": addr}`, which lets
a caller tell "this byte is not an instruction" from "this address was never decoded".

Usage:
  python3 tools/decode_worker.py --lo 0xe0000 --hi 0xf0000 [--image PATH]
  python3 tools/decode_worker.py --serve   # read "lo:hi" lines on stdin, one
                                           # response per line-pair, until "quit"

Output, one JSON object per line:
  {"a": addr, "s": size, "m": mnemonic, "o": [operand, ...]}
  {"skip": addr}
where an operand is one of
  ["mem", base, index, scale, disp]
  ["imm", value]
  ["reg", name]

SERVE MODE exists because a walker that decodes a window per step (cfgwalk does
about 1,028 windows for a full walk) would otherwise pay the interpreter start
and the Capstone import every time: measured 117ms per spawn against about
2ms of actual work. The session protocol is one request line `lo:hi` in, then
`{"range":lo}`, the records, and `{"end":lo}` out.
"""

import argparse
import json
import os
import sys


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--lo', type=lambda s: int(s, 0))
    ap.add_argument('--hi', type=lambda s: int(s, 0))
    ap.add_argument('--ranges', default=None,
                    help='comma-separated lo:hi pairs, decoded in one process so '
                         'Capstone is imported once instead of once per range')
    ap.add_argument('--image', default=None)
    ap.add_argument('--detail', action='store_true',
                    help='include operand structure (slower, needed for memoryReference questions)')
    ap.add_argument('--serve', action='store_true',
                    help='read "lo:hi" request lines from stdin until "quit"')
    args = ap.parse_args()

    # Batch mode: a caller that needs many short ranges (the base-fold scans ask for
    # 76 one-routine windows) would otherwise pay the Python interpreter start and the
    # Capstone import 76 times. Measured: 76 separate decode() calls took 11s, mostly
    # interpreter startup. One process with 76 ranges skips all but one of those.
    ranges = None
    if args.serve:
        pass
    elif args.ranges:
        ranges = []
        for part in args.ranges.split(','):
            lo_s, hi_s = part.split(':')
            ranges.append((int(lo_s, 0), int(hi_s, 0)))
    elif args.lo is not None and args.hi is not None:
        ranges = [(args.lo, args.hi)]
    else:
        ap.error('need --serve, --ranges, or both --lo and --hi')

    import capstone

    root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    path = args.image or os.path.join(root, 'ENCHANT.EXP')

    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    md.detail = args.detail
    out = sys.stdout

    def emit(fh, lo, hi, marker):
        fh.seek(lo)
        blob = fh.read(hi - lo)
        # A marker line makes the batch unambiguous when the caller splits the
        # stream back into ranges: instruction records and skip records can
        # otherwise run together across a range boundary.
        if marker:
            out.write(json.dumps({'range': lo}) + '\n')
        off = 0
        n = len(blob)
        while off < n:
            progressed = False
            for ins in md.disasm(blob[off:], lo + off):
                rec = {'a': ins.address, 's': ins.size, 'm': ins.mnemonic}
                if args.detail:
                    ops = []
                    for op in ins.operands:
                        if op.type == capstone.x86.X86_OP_MEM:
                            m = op.mem
                            ops.append(['mem',
                                        ins.reg_name(m.base) if m.base else '',
                                        ins.reg_name(m.index) if m.index else '',
                                        m.scale, m.disp])
                        elif op.type == capstone.x86.X86_OP_IMM:
                            ops.append(['imm', op.imm])
                        elif op.type == capstone.x86.X86_OP_REG:
                            ops.append(['reg', ins.reg_name(op.reg)])
                    rec['o'] = ops
                else:
                    rec['o'] = ins.op_str
                out.write(json.dumps(rec, separators=(',', ':')) + '\n')
                off = ins.address - lo + ins.size
                progressed = True
            if not progressed:
                out.write(json.dumps({'skip': lo + off}) + '\n')
                off += 1
        if marker:
            out.write(json.dumps({'end': lo}) + '\n')
        out.flush()

    with open(path, 'rb') as fh:
        if args.serve:
            while True:
                line = sys.stdin.readline()
                if not line:
                    break
                line = line.strip()
                if not line:
                    continue
                if line == 'quit':
                    break
                lo_s, hi_s = line.split(':')
                emit(fh, int(lo_s, 0), int(hi_s, 0), True)
        else:
            for (lo, hi) in ranges:
                emit(fh, lo, hi, bool(args.ranges))


if __name__ == '__main__':
    main()
