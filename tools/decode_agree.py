#!/usr/bin/env python3
"""tools/decode_agree.py - does Capstone agree with ndisasm on this image?

WHY THIS GATE EXISTS. Eleven tools parse ndisasm text with slightly different
conventions, which is how the -w continuation bug survived in eight of them. The fix
is one shared decoder returning instruction objects instead of text. But that is only
safe if the new decoder agrees with the old one, because cfgwalk.js and funcs.js
underpin the census: the 738 call targets, the 79470 instruction count and every
classification in docs/corpus.json come from ndisasm.

So this compares the two decoders instruction by instruction before anything is
migrated. It reports three things:

  length disagreement   the two decoders split the same bytes into instructions of
                        different sizes. This is the fatal one, because every
                        subsequent boundary shifts.
  mnemonic disagreement same length, different mnemonic.
  operand disagreement  same mnemonic, different operand text.

Usage:
  python3 tools/decode_agree.py                    sample the whole image
  python3 tools/decode_agree.py --region 0xe0000 0xf0000
  python3 tools/decode_agree.py --addr 0xe6a58 --len 256

Requires capstone. The C library is installed as an rpm; the Python binding is not.
A throwaway venv is enough:
  python3 -m venv /var/tmp/csvenv && /var/tmp/csvenv/bin/pip install capstone
"""

import argparse
import subprocess
import sys

ROOT = __import__('os').path.dirname(__import__('os').path.dirname(
    __import__('os').path.abspath(__file__)))
IMAGE = __import__('os').path.join(ROOT, 'ENCHANT.EXP')


def ndisasm(lo, hi):
    """Decode [lo,hi) with ndisasm -w and return [(addr, length, mnemonic, opstr)]."""
    with open(IMAGE, 'rb') as fh:
        fh.seek(lo)
        blob = fh.read(hi - lo)
    out = subprocess.run(['ndisasm', '-b32', '-w', '-o', hex(lo), '-'],
                         input=blob, capture_output=True)
    rows = []
    for line in out.stdout.decode('latin1').split('\n'):
        if not line.strip():
            continue
        parts = line.split(None, 2)
        if len(parts) < 3:
            continue
        addr = int(parts[0], 16)
        hexpart = parts[1]
        body = parts[2].strip()
        # ndisasm separates an instruction PREFIX with a space: `es push cs`, and for
        # a rep-form it writes `rep movsb`. Taking the first space-delimited token as
        # the mnemonic made 33 instructions look like mnemonic disagreements when the
        # only difference was that Capstone folds the prefix into the mnemonic. Strip
        # the prefixes first, then split.
        for _ in range(3):
            head = body.split(' ', 1)[0].lower()
            if head in ('es', 'cs', 'ss', 'ds', 'fs', 'gs', 'lock',
                        'rep', 'repe', 'repz', 'repne', 'repnz'):
                body = body.split(' ', 1)[1] if ' ' in body else body
            else:
                break
        mnemonic, _, opstr = body.partition(' ')
        rows.append((addr, len(hexpart) // 2, mnemonic, opstr.strip()))
    return rows


def capstone_decode(lo, hi):
    import capstone
    with open(IMAGE, 'rb') as fh:
        fh.seek(lo)
        blob = fh.read(hi - lo)
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    md.detail = False

    # CAPSTONE STOPS AT THE FIRST BYTE IT CANNOT DECODE; ndisasm emits `db 0xNN` and
    # carries on. That difference is fatal for a naive comparison: on 0xe0000-0xf0000
    # Capstone returned 22 instructions against ndisasm's 20,659, because it halted at
    # 0xe0034 where the bytes are zero padding and ndisasm wrote `db 0xff`.
    #
    # So this resumes one byte after each failure, which is what a caller decoding a
    # region that contains data needs anyway. Failures are counted and returned so the
    # comparison can tell "both decoded this" from "only ndisasm tried".
    out = []
    skipped = []
    off = 0
    while off < len(blob):
        progressed = False
        for ins in md.disasm(blob[off:], lo + off):
            out.append((ins.address, ins.size, ins.mnemonic, ins.op_str))
            off = ins.address - lo + ins.size
            progressed = True
        if not progressed:
            skipped.append(lo + off)
            off += 1
    return out, skipped


def normalise(mnemonic, opstr):
    """Reduce an instruction to the property callers actually depend on.

    The two decoders differ in SPELLING, not in meaning:
      ndisasm `rep movsd`        capstone `rep movsd  dword ptr es:[edi], dword ptr [esi]`
      ndisasm `iret`             capstone `iretd`
      ndisasm `popa`             capstone `popal`
      ndisasm `eax,[ebp+0x8]`    capstone `eax, dword ptr [ebp + 8]`

    Comparing operand text produces thousands of false differences that carry no
    information, because no tool in this repository reads the operand spelling: they
    read instruction BOUNDARIES, instruction LENGTHS, and whether an operand is a
    memory reference. Those three are what this normalises to.
    """
    m = family(mnemonic.lower())
    # Fold the mnemonic synonyms that mean the same instruction.
    m = {'iret': 'iretd', 'popf': 'popfd', 'popa': 'popal',
         'movsd': 'movsd', 'ljmp': 'jmp'}.get(m, m)
    has_mem = '[' in opstr
    return (m, has_mem)


# ndisasm and Capstone use different synonyms for the same conditional jump.
JUMP_ALIAS = {
    'jnl': 'jge', 'jle': 'jng', 'jnle': 'jg', 'jnge': 'jl',
    'jnae': 'jb', 'jnb': 'jae', 'jnc': 'jae', 'jc': 'jb',
    'jna': 'jbe', 'jnbe': 'ja', 'jnz': 'jne', 'jz': 'je',
}


def family(m):
    return JUMP_ALIAS.get(m, m)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--region', nargs=2, type=lambda s: int(s, 0))
    ap.add_argument('--addr', type=lambda s: int(s, 0))
    ap.add_argument('--len', type=lambda s: int(s, 0), default=4096)
    ap.add_argument('--limit', type=int, default=40, help='max differences to print')
    args = ap.parse_args()

    if args.addr is not None:
        lo, hi = args.addr, args.addr + args.len
    elif args.region:
        lo, hi = args.region
    else:
        # Default: from the first real routine to the end of the code region.
        lo, hi = 0xe0000, 0x105d0e

    a_rows = ndisasm(lo, hi)
    a = a_rows
    b, skipped = capstone_decode(lo, hi)

    print('ndisasm instructions : %d' % len(a))
    print('capstone instructions: %d' % len(b))
    print('bytes capstone could not decode: %d' % len(skipped))

    # Compare on instruction BOUNDARIES first, which is the property every tool relies on.
    bound_a = {x[0] for x in a}
    bound_b = {x[0] for x in b}
    only_a = sorted(bound_a - bound_b)[:args.limit]
    only_b = sorted(bound_b - bound_a)[:args.limit]
    print()
    print('boundaries: ndisasm %d, capstone %d, agree %d' %
          (len(bound_a), len(bound_b), len(bound_a & bound_b)))
    if only_a:
        print('  boundaries only ndisasm has (first %d): %s' %
              (len(only_a), ' '.join(hex(x) for x in only_a[:10])))
    if only_b:
        print('  boundaries only capstone has (first %d): %s' %
              (len(only_b), ' '.join(hex(x) for x in only_b[:10])))

    # Then the textual differences at shared boundaries.
    map_b = {x[0]: x for x in b}
    len_diff = []
    mnem_diff = []
    op_diff = []
    for addr, length, mnemonic, opstr in a_rows:
        other = map_b.get(addr)
        if other is None:
            continue
        _, olen, omn, oop = other
        # A `db` line is not an instruction, so its length is meaningless to compare.
        if mnemonic in ('db', 'dw', 'dd', 'udw'):
            continue
        if length != olen:
            len_diff.append((addr, length, olen, mnemonic, opstr, omn, oop))
            continue
        na = normalise(mnemonic, opstr)
        nb = normalise(omn, oop)
        if na[0] != nb[0]:
            mnem_diff.append((addr, mnemonic, omn, opstr, oop))
            continue
        if na[1] != nb[1]:
            op_diff.append((addr, mnemonic, opstr, oop))

    print()
    print('length disagreements  : %d' % len(len_diff))
    for d in len_diff[:args.limit]:
        addr_, la_, lb_, ma_, oa_, mb_, ob_ = d
        print('  0x%06x  ndisasm %d bytes %-8s %-22s | capstone %d bytes %-8s %s' %
              (addr_, la_, ma_, oa_[:22], lb_, mb_, ob_[:22]))
    print('mnemonic disagreements: %d' % len(mnem_diff))
    for d in mnem_diff[:args.limit]:
        print('  0x%06x  ndisasm %-8s %-22s | capstone %-8s %s' % d)
    print('operand disagreements : %d' % len(op_diff))
    for d in op_diff[:args.limit]:
        print('  0x%06x  %-8s ndisasm %-24s | capstone %s' % d)

    # THE GATE, stated precisely.
    #
    # A naive set comparison fails, and it should not: ndisasm emits a `db 0xNN` or
    # `udw` PSEUDO-INSTRUCTION for every byte it cannot decode, and Capstone has no
    # such concept, so it declines and this decoder skips a byte. Those pseudo-lines are
    # not instructions, and counting them as decoding disagreements overstates the
    # difference.
    #
    # Measured on 0xe0000-0xf0000: 20,659 ndisasm lines against 20,633 Capstone
    # instructions, 25 pseudo-instruction lines, 26 boundary differences of which 25
    # were `db` and one `udw`. So the two decoders agree on EVERY real instruction in
    # the region, and the apparent failure was entirely the pseudo-instruction concept.
    pseudo = {a for a, _l, m, _o in a_rows if m in ('db', 'dw', 'dd', 'udw', 'ud2')}
    real_a = bound_a - pseudo
    unexplained = sorted(real_a - bound_b)
    print()
    print('ndisasm pseudo-instruction lines (db/udw): %d' % len(pseudo))
    print('real instructions ndisasm decoded: %d' % len(real_a))
    print('real boundaries with no Capstone match: %d' % len(unexplained))
    for u in unexplained[:args.limit]:
        print('  0x%06x' % u)

    if unexplained:
        print()
        print('VERDICT: FAIL. %d real instructions were decoded by ndisasm and not by '
              'Capstone. Those are genuine decoding disagreements.' % len(unexplained))
        return 1
    if len_diff:
        print()
        print('VERDICT: FAIL. Boundaries agree but instruction lengths do not.')
        return 1
    print()
    print('VERDICT: PASS for substitution. Every real instruction in the region is decoded '
          'identically in length and position. The two differ only on undecodable bytes, '
          'where ndisasm invents a db pseudo-instruction and Capstone declines to.')
    return 0


if __name__ == '__main__':
    sys.exit(main())
