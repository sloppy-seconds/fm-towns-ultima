#!/usr/bin/env python3
"""findmem.py - find a byte sequence in the running machine and read the text around it.

WHY THIS EXISTS. A phrase the player can see on screen could not be found in ENCHANT.EXP, in
three different savestates, in any of plain ASCII, `0xEB`-escaped, or case-insensitive form. It
was there anyway. Two reasons, both now handled here:

  1. `SAVESTATE` does not cover what `FIND` covers. `FIND` searches main RAM, sprite RAM and
     VRAM. The savestate is a different set of regions, so a phrase can be visible on screen and
     absent from every state file. `docs/live-session.md` says so: "FIND 24 - find a byte
     sequence in RAM and VRAM".

  2. `MD 14:offset` assumes DS has its usual base. It is not constant. A live `MD` reply carries
     the current bases in it (`DS:002B0AD2`), and reading with the wrong one returns the wrong
     bytes silently. This tool asks for the base instead of assuming it.

WHAT IT DOES. Issues `FIND <text>`, waits for the flood to drain, converts each `LINEAR:` hit to
a DS-relative offset using the DS base reported by the emulator, and prints the bytes around each
hit decoded as text.

THE FLOOD. `FIND` streams one line per byte position, not one per occurrence: searching `scum`
returned 241 lines for a single occurrence because every overlapping position matched as the
window shifted. It also keeps streaming after the command returns, and that output contaminates
the next `STA`. So this counts hits, waits, and reads with a retry.

Usage:
    ./tools/.venv/bin/python3 tools/findmem.py scum
    ./tools/.venv/bin/python3 tools/findmem.py --hex 64 65 61 74 68
    ./tools/.venv/bin/python3 tools/findmem.py --text "Eat death" --context 48 --json

Needs the container. Nothing here reads the disc.
"""

import argparse
import json
import os
import re
import subprocess
import sys
import time

API = os.environ.get('FMTOWNS_API', 'http://127.0.0.1:8080')

FOUND = re.compile(r'Found at PHYS:([0-9A-Fa-f]+)\s+LINEAR:([0-9A-Fa-f]+)')
# The live STA format, measured:
#   CS=0110(LIN:00019F34)  DS=0014(LIN:00400000)  ES=0120(LIN:80000000)
# The DS linear base is what converts a FIND `LINEAR:` hit into an MD offset. It is NOT always
# 0x400000; earlier in the same session it read 0x2B0AD2, which is why this asks every time.
# The first version of this regex expected a bare `DS:xxxxxxxx`, which never appears, so it
# reported "console is busy" against a perfectly healthy machine.
SEG_LINE = re.compile(r'\bDS=([0-9A-Fa-f]{4})\(LIN:([0-9A-Fa-f]{8})\)')
MD_LINE = re.compile(r'^>?([0-9A-F]{4}):([0-9A-F]{8})\s+((?:[0-9A-F]{2}\s)+)\|')


def api_cmd(line, timeout=45):
    out = subprocess.run(
        ['curl', '-s', '-m', str(timeout), '-X', 'POST', API + '/api/cmd',
         '-H', 'Content-Type: application/json', '-d', json.dumps({'line': line})],
        capture_output=True, text=True)
    if out.returncode != 0:
        raise RuntimeError('curl failed (%d) talking to %s. Use 127.0.0.1, not localhost.'
                           % (out.returncode, API))
    return json.loads(out.stdout or '{}').get('output', [])


def wait_quiet(timeout=45.0):
    """Block until STA returns a normal reply, so a FIND does not land on a busy console.

    A FIND that arrives while the previous flood is still streaming returns zero lines and no
    error, which is indistinguishable from "no hits". Measured: a 2617-line flood needed about
    18 seconds to drain. A baseline STA is 13 lines and contains a DS register line.
    """
    deadline = time.time() + timeout
    while time.time() < deadline:
        out = api_cmd('STA')
        if len(out) and len(out) < 60 and any(SEG_LINE.search(l) for l in out):
            return True
        time.sleep(1.5)
    return False


def ds_base(timeout=30.0):
    """The current DS linear base, read from a live STA reply.

    Retried on a deadline, not a fixed attempt count. FIND streams one line per matching byte
    position and keeps going after the command returns, so STA comes back full of search output
    and no segment registers. Measured: after a FIND that produced 2617 lines, STA needed about
    18 seconds before a usable reply appeared. Six attempts at 1.5s gave up too early and
    reported "console is busy" against a healthy machine.
    """
    deadline = time.time() + timeout
    while time.time() < deadline:
        for line in api_cmd('STA'):
            m = SEG_LINE.search(line)
            if m:
                return int(m.group(2), 16)
        time.sleep(1.5)
    return None


def find(pattern, settle=6.0):
    """Issue FIND, collect every LINEAR hit, then wait for the console to go quiet."""
    out = api_cmd('FIND ' + pattern)
    hits, seen = [], set()
    for line in out:
        for m in FOUND.finditer(line):
            lin = int(m.group(2), 16)
            if lin not in seen:
                seen.add(lin)
                hits.append(lin)
    time.sleep(settle)
    return hits, out


def read_bytes(offset, n, ds):
    """Read n bytes at a DS-relative offset, returning a dict of addr -> byte."""
    out = api_cmd('MD 14:%x %x' % (offset, n))
    mem = {}
    for line in out:
        m = MD_LINE.match(line.strip())
        if not m:
            continue
        addr = int(m.group(2), 16)
        for i, b in enumerate(m.group(3).split()):
            mem[addr + i] = int(b, 16)
    return mem


def as_text(mem):
    return ''.join(chr(b) if 32 <= b < 127 else '.' for _, b in sorted(mem.items()))


def main():
    ap = argparse.ArgumentParser(description='Find a byte sequence in the running machine.')
    ap.add_argument('text', nargs='?', help='the text to search for')
    ap.add_argument('--hex', nargs='+', help='search for these raw bytes instead')
    ap.add_argument('--context', type=int, default=32, help='bytes either side to read')
    ap.add_argument('--json', action='store_true')
    ap.add_argument('--max', type=int, default=8, help='how many hits to read around')
    a = ap.parse_args()

    if a.hex:
        # FIND takes ASCII, not hex; a hex byte string returns zero lines and no reason.
        # Searching for the bytes directly means decoding them back to text, which only works
        # for printable sequences. Refuse rather than silently searching for the literal
        # characters '7363756d'.
        raw = bytes(int(x, 16) for x in a.hex)
        try:
            pattern = raw.decode('ascii')
        except UnicodeDecodeError:
            print('--hex only accepts printable ASCII: FIND takes text, not a byte string.')
            return 2
        label = ' '.join(a.hex)
    elif a.text:
        pattern = a.text
        label = a.text
    else:
        ap.print_help()
        return 2

    # Wait for the console to be idle before searching: a FIND issued during a previous flood
    # returns zero lines, which reads exactly like a genuine negative.
    if not wait_quiet():
        print('the console did not go quiet; refusing to search rather than report a false '
              'negative.')
        return 1

    # FIND FIRST, then read the base. The base does not depend on the search, and the search
    # floods the console, so asking for STA afterwards means waiting out the flood. Doing the
    # find first and letting ds_base() absorb the delay is one wait instead of two.
    hits, raw = find(pattern)
    if not hits:
        # A negative needs its control: say how many reply lines came back, so "found nothing"
        # is distinguishable from "the command did not run".
        print('no hits for %r (%d reply lines)' % (label, len(raw)))
        if raw:
            print('  first reply line: %s' % raw[0][:100])
        return 1

    base = ds_base()
    if base is None:
        print('found %d hits but could not read the DS base: the console stayed busy.' % len(hits))
        print('  hit addresses (linear): %s' % ', '.join('0x%x' % h for h in hits[:8]))
        return 1

    # Every hit shares the DS base, so a linear address maps to offset (linear - base).
    rows = []
    for lin in hits[:a.max]:
        off = lin - base
        if off < 0:
            rows.append({'linear': lin, 'offset': None, 'error': 'below the DS base'})
            continue
        mem = read_bytes(max(0, off - a.context), a.context * 2 + 8, base)
        rows.append({
            'linear': lin,
            'offset': off,
            'text': as_text(mem),
            'hex': ' '.join('%02x' % b for _, b in sorted(mem.items())),
        })

    if a.json:
        print(json.dumps({'pattern': label, 'dsBase': base, 'hits': len(hits),
                          'distinctAddresses': rows}, indent=1))
        return 0

    print('%r: %d hits, %d distinct addresses, DS base 0x%x'
          % (label, len(hits), len(hits), base))
    for r in rows:
        if r.get('offset') is None:
            print('  LINEAR:%08x  %s' % (r['linear'], r['error']))
            continue
        print('  LINEAR:%08x  DS:%-8x  %s' % (r['linear'], r['offset'], r['text']))
    return 0


if __name__ == '__main__':
    sys.exit(main())
