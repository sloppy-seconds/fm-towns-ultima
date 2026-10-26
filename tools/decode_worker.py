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

Output, one JSON object per line:
  {"a": addr, "s": size, "m": mnemonic, "o": [operand, ...]}
  {"skip": addr}
where an operand is one of
  ["mem", base, index, scale, disp]
  ["imm", value]
  ["reg", name]
"""

import argparse
import json
import os
import sys


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--lo', type=lambda s: int(s, 0), required=True)
    ap.add_argument('--hi', type=lambda s: int(s, 0), required=True)
    ap.add_argument('--image', default=None)
    ap.add_argument('--detail', action='store_true',
                    help='include operand structure (slower, needed for memoryReference questions)')
    args = ap.parse_args()

    import capstone

    root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    path = args.image or os.path.join(root, 'ENCHANT.EXP')
    with open(path, 'rb') as fh:
        fh.seek(args.lo)
        blob = fh.read(args.hi - args.lo)

    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    md.detail = args.detail

    out = sys.stdout
    off = 0
    n = len(blob)
    while off < n:
        progressed = False
        for ins in md.disasm(blob[off:], args.lo + off):
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
            off = ins.address - args.lo + ins.size
            progressed = True
        if not progressed:
            out.write(json.dumps({'skip': args.lo + off}) + '\n')
            off += 1


if __name__ == '__main__':
    main()
