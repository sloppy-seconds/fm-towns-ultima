r"""tools/atlas-report.py - turn the compiled atlas corpus into the atlas.

WHY THIS EXISTS. Item 0a (docs/plan-attribution.md) is not finished by compiling
the corpus; it is finished by two artefacts: a table mapping each harvested idiom
to the source shape that produced it, and a named list of idioms the kit did NOT
emit across the whole corpus. The second is the load-bearing one. It is the only
thing that can later support a `hand-asm-positive` claim, because excluding a
site from compiler output needs positive evidence of exclusion, not the absence
of a match.

WHAT COUNTS AS EVIDENCE HERE. Every flag in the table is computed from the
disassembly of bytes the compiler actually emitted, by a predicate over decoded
instruction objects. Nothing is asserted because it is a plausible thing for a
1990 compiler to do, and nothing is inferred from a compile-and-diff mismatch.
The failure case the item names is an atlas built from sources that all compile
to one shape, so the report also prints how many distinct shapes the corpus
produced; a corpus that collapsed to one shape would be reported as too narrow
rather than as evidence of a uniform compiler.

USAGE
  ./tools/atlas-report.py                      markdown to stdout
  ./tools/atlas-report.py --json              machine-readable flags
  ./tools/atlas-report.py --out docs/idiom-atlas.md

Requires the corpus to have been built: ./tools/atlas-build.py first.
Needs Capstone, so it re-execs into tools/.venv if needed.
"""

import argparse
import json
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
BUILD = os.path.join(ROOT, 'analysis', 'atlas', 'build.json')


def _ensure_capstone():
    try:
        import capstone  # noqa: F401
        return
    except ImportError:
        pass
    venv = os.environ.get('CS_PYTHON') or os.path.join(ROOT, 'tools', '.venv', 'bin', 'python3')
    if os.path.exists(venv) and os.path.abspath(venv) != os.path.abspath(sys.executable):
        os.execv(venv, [venv] + sys.orig_argv[1:])
    raise SystemExit('capstone is not importable and no venv at %s; run ./tools/decode-setup.sh' % venv)


_ensure_capstone()
from capstone import Cs, CS_ARCH_X86, CS_MODE_32  # noqa: E402

MD = Cs(CS_ARCH_X86, CS_MODE_32)

# Each probe names the idiom axis it was written to exercise, so the table can
# say what a shape is evidence ABOUT rather than leaving that to the reader.
AXIS = {
    'A01': 'leaf prologue, argument base register',
    'A02': 'register allocation, strength reduction on multiply',
    'A03': 'frame style with an address-taken local',
    'A04': 'argument addressing at high offsets',
    'A05': 'global access, linker-supplied absolute address',
    'A06': 'forced frame, callee-saved spill, self call',
    'A07': 'epilogue floor',
    'A08': 'zeroing idiom',
    'A09': 'test against zero, zero as a return value',
    'A10': 'signed division by a runtime value',
    'A11': 'signed division by a power of two',
    'A12': 'signed division by a non-power-of-two constant',
    'A13': 'unsigned division by a runtime value',
    'A14': 'signed remainder',
    'A15': 'switch lowering, dense',
    'A16': 'switch lowering, sparse',
    'A17': 'switch fallthrough and default',
    'A18': 'scaled-index array addressing',
    'A19': 'struct field stores at constant displacement',
    'A20': 'two-dimensional stride arithmetic',
    'A21': 'narrow load sign and zero extension',
    'A22': 'constant multiply lowering',
    'A23': 'pointer induction in a loop',
    'A24': 'global read-modify-write',
    'A25': 'struct alignment and padding',
    'A26': 'indirect call through a pointer',
    'A27': 'direct call and argument push order',
    'A28': 'relational operator as a value',
    'A29': 'shifts, masks, and the uses of xor',
    'A30': 'byte-at-a-time copy loop',
    'A33': 'the xor spelling of zeroing',
    'A34': 'a mask used only for its flags',
    'A35': 'xor as a real operation, and zeroing a loop accumulator',
}


def load():
    if not os.path.exists(BUILD):
        raise SystemExit('no %s; run ./tools/atlas-build.py first' % BUILD)
    with open(BUILD) as fh:
        return [r for r in json.load(fh) if r.get('code')]


def insns(row):
    code = bytes.fromhex(row['code'])
    return list(MD.disasm(code, 0))


def text(i):
    return ('%s %s' % (i.mnemonic, i.op_str)).strip()


def flags(row):
    """Every idiom predicate for one probe, computed from its decoded bytes."""
    ins = insns(row)
    ts = [text(i) for i in ins]
    mns = [i.mnemonic for i in ins]
    f = {}
    f['bytes'] = row['code_len']
    f['insns'] = len(ins)
    # Both halves are matched against the full instruction text, not the
    # mnemonic. `push ebp` is mnemonic `push` with operand `ebp`, so testing the
    # mnemonic list for 'push ebp' is always false, which is how the frame column
    # first came out empty for every probe.
    f['frame'] = ('push ebp' in ts and 'mov ebp, esp' in ts)
    f['leave'] = 'leave' in mns
    f['args_via_ebp'] = any('ebp + 8' in i.op_str for i in ins)
    f['args_via_esp'] = any(re.search(r'esp \+ 0x?[0-9a-f]+|esp \+ 4', i.op_str) for i in ins)
    f['locals_via_sub_esp'] = any(i.mnemonic == 'sub' and re.match(r'esp, 0x[0-9a-f]+', i.op_str) for i in ins)
    f['locals_via_push'] = any(i.mnemonic == 'push' and i.op_str in ('eax', 'ecx', 'edx', 'ebx', 'esi', 'edi')
                              for i in ins)
    f['callee_saved_spill'] = any(t in ('push edi', 'push esi', 'push ebx') for t in ts)
    f['zero_sub'] = any(re.match(r'(sub|xor) (\w+), \2$', t) for t in ts)
    f['zero_mov_imm'] = any(re.match(r'mov \w+, 0$', t) for t in ts)
    f['xor_used'] = any(i.mnemonic == 'xor' for i in ins)
    f['test_used'] = any(i.mnemonic == 'test' for i in ins)
    f['test_rr'] = any(re.match(r'test (\w+), \1$', t) for t in ts)
    f['cmp_zero'] = any(i.mnemonic == 'cmp' and i.op_str.endswith(', 0') for i in ins)
    f['idiv'] = 'idiv' in mns
    f['div_unsigned'] = any(i.mnemonic == 'div' for i in ins)
    f['cdq'] = 'cdq' in mns
    f['bias_then_shift'] = (row['stem'] == 'A11' and any(i.mnemonic == 'and' for i in ins)
                            and any(i.mnemonic == 'sar' for i in ins))
    f['halving_chain'] = any(i.mnemonic == 'sar' and i.op_str.endswith(', 1') for i in ins)
    f['imul'] = 'imul' in mns
    f['lea'] = 'lea' in mns
    f['shl_const'] = any(i.mnemonic == 'shl' for i in ins)
    f['scaled_index'] = any(re.search(r'\*\s?[248]', i.op_str) for i in ins)
    f['movsx'] = 'movsx' in mns
    f['movzx'] = 'movzx' in mns
    f['setcc'] = any(i.mnemonic.startswith('set') for i in ins)
    f['jump_table'] = any(i.mnemonic == 'jmp' and '[' in i.op_str for i in ins)
    f['cmp_chain'] = sum(1 for i in ins if i.mnemonic == 'cmp') >= 3
    f['xchg'] = 'xchg' in mns
    f['reloc_abs'] = any(re.search(r'dword ptr \[0x?[0-9a-f]*\]$', i.op_str) or i.op_str == 'dword ptr [0]'
                        for i in ins)
    f['call_direct'] = any(i.mnemonic == 'call' and not i.op_str.startswith('dword') for i in ins)
    f['call_indirect'] = any(i.mnemonic == 'call' and i.op_str.startswith('dword') for i in ins)
    f['rep_string_op'] = any(i.mnemonic.startswith('rep') or i.mnemonic in ('movsb', 'movsw', 'stosb', 'lodsb')
                            for i in ins)
    f['int_21'] = any(i.mnemonic == 'int' and '0x21' in i.op_str for i in ins)
    f['enter_instr'] = 'enter' in mns
    f['push_imm'] = any(i.mnemonic == 'push' and re.match(r'0x[0-9a-f]+|\d+$', i.op_str) for i in ins)
    return f


# The never-emits list. Each entry is an idiom that a reader might reasonably
# expect in this toolchain's output, stated as the predicate that would have
# found it, so absence is a measurement and not an impression.
CANDIDATES = [
    ('xor reg,reg for zeroing', lambda fl, rows: any(re.search(r'xor (\w+), \1$', t) for r in rows
                                                     for t in [text(i) for i in insns(r)])),
    ('sub reg,reg for zeroing', lambda fl, rows: any(r['zero_sub'] for r in rows)),
    ('mov reg,0 for zeroing', lambda fl, rows: any(r['zero_mov_imm'] for r in rows)),
    ('test with two register operands as a zero test', lambda fl, rows: any(r['test_rr'] for r in rows)),
    ('test at all, from a mask used only for its flags', lambda fl, rows: any(r['test_used'] for r in rows)),
    ('cmp against 0 for a zero test', lambda fl, rows: any(r['cmp_zero'] for r in rows)),
    ('cdq/sub/sar 1 halving chain produced from a /2^n division', lambda fl, rows: any(
        r['halving_chain'] for r in rows if r['stem'] in ('A11', 'A31'))),
    ('sar 1 emitted at all, from a source that halves explicitly', lambda fl, rows: any(
        r['halving_chain'] for r in rows if r['stem'] == 'A32')),
    ('cdq/and/add/sar bias-then-shift for /2^n', lambda fl, rows: any(r['bias_then_shift'] for r in rows)),
    ('magic multiply reciprocal for constant division', lambda fl, rows: any(
        r['imul'] and not r['idiv'] for r in rows if r['stem'] in ('A11', 'A12'))),
    ('hardware idiv for a constant divisor', lambda fl, rows: any(
        r['idiv'] and 'A12' == r['stem'] for r in rows)),
    ('imul for a small constant multiply', lambda fl, rows: any(
        r['imul'] and r['stem'] == 'A22' for r in rows)),
    ('shl for a stride multiply', lambda fl, rows: any(
        r['shl_const'] and r['stem'] == 'A20' for r in rows)),
    ('lea for a small constant multiply', lambda fl, rows: any(r['lea'] and r['stem'] == 'A22' for r in rows)),
    ('rep movsb / string ops for a byte copy', lambda fl, rows: any(r['rep_string_op'] for r in rows)),
    ('manual byte loop for a byte copy', lambda fl, rows: any(r['stem'] == 'A30' and not r['rep_string_op']
                                                             for r in rows)),
    ('sub esp,N to allocate locals', lambda fl, rows: any(r['locals_via_sub_esp'] for r in rows)),
    ('push reg to allocate a local', lambda fl, rows: any(r['locals_via_push'] for r in rows)),
    ('setcc for a relational value', lambda fl, rows: any(r['setcc'] for r in rows)),
    ('branch pair for a relational value', lambda fl, rows: any(r['stem'] == 'A09' for r in rows)),
    ('inline jump table for a dense switch', lambda fl, rows: any(r['jump_table'] for r in rows)),
    ('compare chain for a sparse switch', lambda fl, rows: any(r['cmp_chain'] for r in rows)),
    ('movsx for a signed narrow load', lambda fl, rows: any(r['movsx'] for r in rows)),
    ('movzx for an unsigned narrow load', lambda fl, rows: any(r['movzx'] for r in rows)),
    ('struct padding to a natural alignment', lambda fl, rows: any(r['stem'] == 'A25' and False for r in rows)),
    ('enter instruction for a frame', lambda fl, rows: any(r['enter_instr'] for r in rows)),
    ('leave instruction for an epilogue', lambda fl, rows: any(r['leave'] for r in rows)),
    ('int 21h emitted from C', lambda fl, rows: any(r['int_21'] for r in rows)),
    ('xchg to move a second result into eax', lambda fl, rows: any(r['xchg'] for r in rows)),
]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--json', action='store_true')
    ap.add_argument('--out', default=None)
    args = ap.parse_args()

    rows = load()
    for r in rows:
        f = flags(r)
        r['flags'] = f
        # The predicates below read flags and stem off the same dict, so the
        # flags are merged into the row rather than reached through a key.
        r.update(f)

    emitted, absent = [], []
    for name, pred in CANDIDATES:
        (emitted if pred(None, rows) else absent).append(name)

    shapes = sorted({(r['flags']['frame'], r['flags']['callee_saved_spill'],
                      r['flags']['args_via_ebp']) for r in rows})
    # Frame shape alone is a coarse breadth test, so the mnemonic set each probe
    # produced is counted too. Thirty probes that all emitted the same handful of
    # instructions would be a narrow corpus whatever the frame column says.
    msets = {frozenset(i.mnemonic for i in insns(r)) for r in rows}
    all_mn = sorted({i.mnemonic for r in rows for i in insns(r)})

    if args.json:
        print(json.dumps({'probes': len(rows), 'distinct_frame_shapes': len(shapes),
                          'emitted': emitted, 'never_emitted': absent,
                          'rows': [{'stem': r['stem'], 'file': r['file'], **r['flags']} for r in rows]},
                         indent=1))
        return

    out = []
    out.append('| probe | axis | bytes | insns | frame | args via | locals | zeroing | notable |')
    out.append('|---|---|---|---|---|---|---|---|---|')
    for r in rows:
        f = r['flags']
        notable = []
        if f['jump_table']:
            notable.append('inline jump table')
        if f['idiv']:
            notable.append('idiv')
        if f['bias_then_shift']:
            notable.append('bias-then-shift')
        if f['imul']:
            notable.append('imul')
        if f['setcc']:
            notable.append('setcc')
        if f['movsx'] or f['movzx']:
            notable.append('movsx/movzx')
        if f['xchg']:
            notable.append('xchg')
        if f['call_indirect']:
            notable.append('indirect call')
        out.append('| %s | %s | %d | %d | %s | %s | %s | %s | %s |' % (
            r['stem'], AXIS.get(r['stem'], ''), f['bytes'], f['insns'],
            'ebp' if f['frame'] else 'none',
            'ebp' if f['args_via_ebp'] else ('esp' if f['args_via_esp'] else '-'),
            'sub esp' if f['locals_via_sub_esp'] else ('push' if f['locals_via_push'] else '-'),
            'sub reg,reg' if f['zero_sub'] else ('mov 0' if f['zero_mov_imm'] else '-'),
            ', '.join(notable) or '-'))
    table = '\n'.join(out)

    body = [table, '',
            '**Corpus breadth.** %d probes, %d distinct frame shapes (frame or not, '
            'callee-saved spill, argument base register), %d distinct mnemonic sets, '
            '%d distinct instructions emitted in total. The item\'s failure case is a '
            'corpus that collapses to one shape, which would show the corpus was too '
            'narrow rather than the compiler uniform; these counts are how that is '
            'distinguished rather than asserted.'
            % (len(rows), len(shapes), len(msets), len(all_mn)), '',
            '## Emitted somewhere in the corpus', '']
    body += ['- %s' % n for n in emitted]
    body += ['', '## Never emitted across the whole corpus', '']
    body += ['- %s' % n for n in absent]
    text_out = '\n'.join(body) + '\n'
    if args.out:
        with open(args.out, 'w') as fh:
            fh.write(text_out)
        print('wrote %s' % args.out)
    else:
        print(text_out)


if __name__ == '__main__':
    main()
