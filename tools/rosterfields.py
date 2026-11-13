#!/usr/bin/env python3
"""tools/rosterfields.py - map every roster save field to its address in the character record.

WHY THIS EXISTS. The roster writer in ENCHANT.EXP serialises the character record as text, one
`NAME=%d` line per field, and each line is built by a `push [ebx+ADDR]` immediately followed by a
`push "NAME=%d"` and a `sprintf`. That makes the writer a complete field map: the address in the
value push is the field, and the format string names it.

THE TRAP THAT COST A SESSION. The immediates in the code are RUNTIME addresses, and the runtime
address of a string is its FILE offset minus 0x200, because the MP header is 512 bytes. Reading the
string at the immediate itself therefore reports the label one table block later, and the result is
still a plausible ascending field map with names that are simply the wrong ones. Measured
2026-11-14: reading at the immediate put "MACE=%d" at 0xcdf6b and contradicted the live field map,
which says PLAYER_X. Reading at `imm + 0x200` gives PLAYER_X and everything agrees. A wrong answer
here is silent, so this tool prints the FILE offset of the string it used beside every field.

USAGE
    python3 tools/rosterfields.py ENCHANT.EXP
    python3 tools/rosterfields.py ENCHANT.EXP --json

Requires the decoding venv: ./tools/decode-setup.sh once, then tools/.venv/bin/python.
"""

import argparse
import json
import sys

try:
    import capstone
except ImportError:
    sys.exit('rosterfields: capstone is missing. Run ./tools/decode-setup.sh, then use tools/.venv/bin/python')

# The MP header is 512 bytes, so a file offset is a runtime address plus this.
HEADER = 0x200
# The writer's code, established by the format-string pushes it makes. File offsets.
WRITER_LO = 0xeb800
WRITER_HI = 0xec400
# The character record the fields belong to, and its size. Both measured, see docs/roster-field-map.md.
RECORD_BASE = 0xcde4d
RECORD_SIZE = 351


def cstr(buf, off):
    end = buf.find(b'\0', off)
    return buf[off:end].decode('latin1', 'replace').replace('\n', '').replace('\r', '')


def label_for(buf, imm):
    """The format string a push-immediate names.

    The immediate is a runtime address, so the bytes live at imm + HEADER. Where that lands mid-string
    the compiler shared the `=%d` tail with the string before it, so walk back to the enclosing one.
    """
    file_off = imm + HEADER
    text = cstr(buf, file_off)
    if '=' in text:
        return text, file_off
    start = file_off
    while start > 0 and 0x20 <= buf[start - 1] < 0x7f:
        start -= 1
    return cstr(buf, start), start


def extract(buf):
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    md.detail = True
    ins = list(md.disasm(buf[WRITER_LO:WRITER_HI], WRITER_LO))
    fields = []
    for k, one in enumerate(ins):
        target = None
        for op in one.operands:
            # The string range is given in RUNTIME addresses, so 0x2800..0x2f00 is file 0x2a00..0x3100.
            if op.type == capstone.x86.X86_OP_IMM and 0x2800 <= op.imm <= 0x2f00:
                fo = op.imm + HEADER
                if b'%' in buf[fo:buf.find(b'\0', fo)]:
                    target = op.imm
        if target is None or k == 0:
            continue
        src = None
        for op in ins[k - 1].operands:
            if op.type == capstone.x86.X86_OP_MEM and 0x60000 <= op.mem.disp <= 0xf0000:
                src = op.mem.disp
        if src is None:
            continue
        name, file_off = label_for(buf, target)
        fields.append({'name': name.split('=')[0], 'format': name, 'address': src,
                       'offset': src - RECORD_BASE, 'string_file_offset': file_off,
                       'site_file_offset': one.address})
    fields.sort(key=lambda f: f['address'])
    return fields


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('image')
    ap.add_argument('--json', action='store_true')
    args = ap.parse_args()
    buf = open(args.image, 'rb').read()
    fields = extract(buf)
    if args.json:
        print(json.dumps({'record_base': RECORD_BASE, 'record_size': RECORD_SIZE, 'fields': fields}, indent=2))
        return
    print(f'{len(fields)} roster field(s), record base 0x{RECORD_BASE:x}, size {RECORD_SIZE}')
    print(f'{"field":14} {"address":10} {"offset":>7}  site     string')
    for f in fields:
        print(f'{f["name"]:14} 0x{f["address"]:08x} {f["offset"]:7}  0x{f["site_file_offset"]:05x}  0x{f["string_file_offset"]:05x}')


main()
