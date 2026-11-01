#!/usr/bin/env python3
r"""tools/omflib.py - list the members of a MetaWare / Phar Lap OMF library.

WHY THIS EXISTS. Plan item 0b asks for same-compiler ground truth that is not our
own guesses, and the SDK CD ships it: Q:\HC386\SMALL\HCE.LIB, HCC.LIB and NA.LIB
are MetaWare objects built by the compiler under study, with member names still
attached. They are a labelled compiler-emitted population obtained by
construction rather than by inference, which is exactly what the atlas needs and
exactly what the TMENU SYM1 route could not provide.

THE FORMAT, measured here rather than assumed. These are not Microsoft librarian
files. The documented MS layout puts a 0x1A marker at offset 40 and a module
directory of 40-byte headers, and none of that is present: offset 40 holds
ordinary record bytes, and walking the file as MS librarian modules stops almost
immediately. What these files actually have is a four-byte magic `f0 0d 00 00`,
a u16 at offset 4, a byte at offset 7, and then ordinary 32-bit OMF object
images concatenated from offset 16, each starting with THEADR (0x80) and ending
with MODEND32 (0x8a), separated by zero padding.

The record framing is the one already established for this toolchain in
docs/compiling-on-fm-towns.md: a record is 3 + length bytes and the length field
counts the checksum. That framing was verified against T4.OBJ, where it consumes
all 160 bytes exactly and yields only valid record ids.

WHAT IS AND IS NOT CLAIMED. A module is accepted only if its THEADR parses, its
name is printable ASCII, and a record walk from there reaches MODEND32 without
an impossible length. Coverage is then measured, not assumed: on all four
libraries the accepted modules plus inter-module zero padding account for the
body exactly, and a single trailing block is left over, which is the librarian
index (it carries the member names again alongside public symbol names, and
begins with the magic reversed as `f1 0d 00 00`). This tool does not parse that
index, so it reports its size rather than pretending the walk covered it.

Public symbol counts are not reported. The PUBLICS record's frame and offset
fields vary with the segment's word size, and a count derived from a guessed
advance is a number with no check behind it, which is the failure this repository
has been bitten by before.

USAGE
  ./tools/omflib.py HCE.LIB
  ./tools/omflib.py HCE.LIB --json
  ./tools/omflib.py HCE.LIB --grep gfx
"""

import argparse
import json
import struct
import sys

THEADR = 0x80
MODEND32 = 0x8A
PUBL = 0x90
MAGIC = b'\xf0\x0d\x00\x00'
BODY_START = 16


def walk_module(d, start):
    """Walk OMF records from a candidate THEADR to its MODEND32.

    Returns (end_offset, [(type, body), ...]) or None if the framing is
    impossible, which is how a false THEADR-looking byte is rejected.
    """
    i = start
    out = []
    while i + 3 <= len(d):
        typ = d[i]
        ln = struct.unpack_from('<H', d, i + 1)[0]
        if ln == 0 or ln > 65536 or i + 3 + ln > len(d):
            return None
        out.append((typ, d[i + 3:i + 3 + ln]))
        i += 3 + ln
        if typ == MODEND32:
            return i, out
    return None


def theadr_name(body):
    if not body:
        return None
    nlen = body[0]
    if not (1 <= nlen <= 31) or len(body) < 1 + nlen:
        return None
    nm = body[1:1 + nlen]
    if not all(32 <= c < 127 for c in nm):
        return None
    return nm.decode('ascii')


def publics(module_records):
    """Unused. The PUBLICS frame and offset widths vary with the segment's word
    size, so a count from a guessed advance is a number with no check behind it.
    Kept as a note on why the member list carries names only."""
    names = []
    for typ, body in module_records:
        if typ == PUBL:
            j = 0
            while j < len(body):
                nlen = body[j]
                if nlen == 0 or j + 1 + nlen > len(body):
                    break
                nm = body[j + 1:j + 1 + nlen]
                if all(32 <= c < 127 for c in nm):
                    names.append(nm.decode('ascii'))
                # frame u8, offset u16/u32 follows; the safe advance is by the
                # name only, and publics are reported as a count, not as
                # addresses, so a partial parse is stated as a count.
                j += 1 + nlen + 3
    return names


def gaps(d, mods):
    """The regions between accepted modules, split into padding and other.

    This is the check that the walk is complete. Zero-filled gaps are alignment
    padding and are expected. A non-zero gap that is not the trailing index is a
    module the walk missed, and saying so is the whole point of measuring.
    """
    iv = sorted((m['offset'], m['offset'] + m['size']) for m in mods)
    out = []
    cur = BODY_START
    for a, b in iv:
        if a > cur:
            out.append((cur, a - cur))
        cur = max(cur, b)
    if cur < len(d):
        out.append((cur, len(d) - cur))
    pad = sum(n for _o, n in out if not any(d[_o:_o + n]))
    other = [(o, n) for o, n in out if any(d[o:o + n])]
    return pad, other


def members(d):
    if d[:4] != MAGIC:
        raise SystemExit('not a MetaWare library: magic is %s, expected %s'
                         % (d[:4].hex(), MAGIC.hex()))
    field4 = struct.unpack_from('<H', d, 4)[0]
    field7 = d[7]
    mods = []
    i = BODY_START
    covered = 0
    while i + 4 < len(d):
        if d[i] == THEADR:
            res = walk_module(d, i)
            if res:
                end, recs = res
                nm = theadr_name(recs[0][1])
                if nm:
                    code = sum(len(b) for t, b in recs if t == 0xA0)
                    mods.append({'name': nm, 'offset': i, 'size': end - i,
                                 'ledata': code})
                    covered += end - i
                    i = end
                    continue
        i += 1
    pad, other = gaps(d, mods)
    # Exactly one non-zero gap, at the end, is the librarian index. Anything
    # else means the walk missed a module and the member list is incomplete.
    index = other[0] if len(other) == 1 and other[0][0] + other[0][1] == len(d) else None
    body_len = len(d) - BODY_START
    return {'field4': field4, 'field7': field7, 'members': mods,
            'body_len': body_len, 'covered': covered, 'padding': pad,
            'index': index, 'unexplained': [o for o in other if o != index],
            'complete': index is not None and not other[1:]}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('lib')
    ap.add_argument('--json', action='store_true')
    ap.add_argument('--grep', default=None)
    args = ap.parse_args()

    with open(args.lib, 'rb') as fh:
        d = fh.read()
    res = members(d)
    ms = res['members']
    if args.grep:
        ms = [m for m in ms if args.grep in m['name']]

    if args.json:
        print(json.dumps({'file': args.lib, 'walk': res}, indent=1))
        return
    idx = res['index']
    print('%s: %d bytes, %d members, %d code bytes' % (args.lib.split('/')[-1], len(d), len(ms),
                                                       sum(m['ledata'] for m in ms)))
    print('  body %d = modules %d + padding %d%s  %s' % (
        res['body_len'], res['covered'], res['padding'],
        ' + index %d' % idx[1] if idx else '',
        'EXACT' if res['complete'] else 'INCOMPLETE'))
    if res['unexplained']:
        print('  unexplained regions at: %s' % ', '.join(str(o) for o, _ in res['unexplained']))
    for m in ms:
        print('  %-10s %6d B  %5d code' % (m['name'], m['size'], m['ledata']))


if __name__ == '__main__':
    main()
