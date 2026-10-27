#!/usr/bin/env python3
"""calltrace.py - a timeline of what the machine executed, cheaply.

WHY THIS EXISTS. Two things were needed and neither existed. `tools/fightcapture.sh` already does a
full instruction trace, but at about 10 MB per second, because every line carries a disassembly and
a full register dump; a 60-second fight is roughly 600 MB and the trace competes with reading
memory through the same console. And a control-flow graph is not a timeline: it says which blocks
exist and how they connect, not what ran, in what order, on this turn.

WHAT TSugaru ALREADY KEEPS. It maintains, in memory, a rolling log of the last 65536 `CS:EIP`
values with the stack pointer, and `SAVEHIST filename.txt` writes it out instantly. No
disassembly, no registers beyond SS/ESP, nothing streamed to disk. The dump is about 2.3 MB of
text and takes a second. That is the whole mechanism, and it was already there.

    SAVEHIST only records while the debugger is enabled (`ENA DEBUG`), and only steps the CPU
    actually executed. A paused machine produces a buffer of 65536 zero lines, which looks like
    a successful capture. Check the emulator's clock before trusting the output; see
    tools/README.md "Console quirks worth knowing".

WHAT THE OUTPUT IS. 65536 consecutive instructions ending at the moment of the dump, so it is a
window on the recent past rather than from boot. That suits the question this project actually
has, which is "what ran during that turn", not "what ran since power on".

Usage:
    ./tools/.venv/bin/python3 tools/calltrace.py --save            capture and analyse
    ./tools/.venv/bin/python3 tools/calltrace.py --file HIST.TXT   analyse an existing dump
    ./tools/.venv/bin/python3 tools/calltrace.py --file H --json   machine readable
    ./tools/.venv/bin/python3 tools/calltrace.py --file H --calls  show call/ret transitions
    ./tools/.venv/bin/python3 tools/calltrace.py --file H --top 30

Needs the container for --save only. Analysis is offline and needs no emulator.
"""

import argparse
import json
import os
import re
import subprocess
import sys
from collections import Counter

API = os.environ.get('FMTOWNS_API', 'http://127.0.0.1:8080')
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

# "0110:00009AF5 SS=0014 ESP=0011E9EC"
LINE = re.compile(r'^([0-9A-Fa-f]{4}):([0-9A-Fa-f]{8})\s+SS=([0-9A-Fa-f]{4})\s+ESP=([0-9A-Fa-f]{8})')

# The game's code segment. The image is loaded by RUN386 at a selector whose linear base is
# 0x400000; docs/live-fieldmap.md and docs/mirrored-region.md establish the mapping between an
# image offset and the state file. Selector 0x000C is where ENCHANT.EXP executes, 0x0110 is TBIOS.
GAME_CS = {0x000c}
TBIOS_CS = {0x0110}


def api_cmd(line, timeout=40):
    """One emulator console command over the supervisor API."""
    out = subprocess.run(
        ['curl', '-s', '-m', str(timeout), '-X', 'POST', API + '/api/cmd',
         '-H', 'Content-Type: application/json', '-d', json.dumps({'line': line})],
        capture_output=True, text=True)
    if out.returncode != 0:
        raise RuntimeError('curl failed (%d) talking to %s' % (out.returncode, API))
    return json.loads(out.stdout or '{}').get('output', [])


def clock():
    """The emulator's own nanosecond clock. Equal values across two calls means PAUSED."""
    for line in api_cmd('STA'):
        if 'Towns TIME' in line:
            return line.split(': ')[-1]
    return None


def capture(path='/data/analysis/calltrace.txt'):
    """Make sure the machine is live, then ask Tsugaru for its CS:EIP history."""
    # The debugger must be on or the ring buffer is never filled.
    for line in api_cmd('ENA DEBUG'):
        if 'Debugger' in line:
            print('  ' + line.strip())
    # RUN returns empty output whether or not it worked, so verify with the clock.
    api_cmd('RUN')
    c0 = clock()
    import time
    time.sleep(0.5)
    c1 = clock()
    if c0 is not None and c0 == c1:
        raise SystemExit('the machine is PAUSED: Towns TIME did not advance. Nothing would be '
                         'recorded and the dump would be 65536 zero lines.')
    api_cmd('SAVEHIST ' + path)
    local = os.path.join(ROOT, 'saves', path.replace('/data/', ''))
    if not os.path.exists(local):
        raise SystemExit('SAVEHIST reported success but %s does not exist' % local)
    print('  captured %s (%d bytes)' % (local, os.path.getsize(local)))
    return local


def parse(path):
    """Read a SAVEHIST dump into a list of (cs, eip, ss, esp), oldest first."""
    seq = []
    bad = 0
    with open(path, 'r', errors='replace') as f:
        for line in f:
            m = LINE.match(line)
            if not m:
                bad += 1
                continue
            seq.append((int(m.group(1), 16), int(m.group(2), 16),
                        int(m.group(3), 16), int(m.group(4), 16)))
    return seq, bad


def summarise(seq):
    real = [s for s in seq if s[1] != 0]
    by_cs = Counter(s[0] for s in real)
    by_eip = Counter((s[0], s[1]) for s in real)
    return {
        'steps': len(seq),
        'zeroLines': len(seq) - len(real),
        'byCS': {'%04x' % k: v for k, v in by_cs.most_common()},
        'gameSteps': sum(v for k, v in by_cs.items() if k in GAME_CS),
        'tbiosSteps': sum(v for k, v in by_cs.items() if k in TBIOS_CS),
        'hottest': [{'cs': '%04x' % cs, 'eip': '0x%x' % eip, 'n': n}
                    for (cs, eip), n in by_eip.most_common(20)],
    }


def transitions(seq, limit=40):
    """Instruction-pointer transitions that change segment.

    A segment change mid-stream means control left one body of code for another, which at this
    granularity is the cheapest available stand-in for a call. It is not a call: a far return
    and a far call look the same here, and so does an interrupt. Named `transitions` rather than
    `calls` because that is what it measures.
    """
    out = []
    for a, b in zip(seq, seq[1:]):
        if a[0] != b[0]:
            out.append({'from': '%04x:%08x' % (a[0], a[1]), 'to': '%04x:%08x' % (b[0], b[1])})
            if len(out) >= limit:
                break
    return out


def main():
    ap = argparse.ArgumentParser(description='Timeline of what the emulator executed.')
    ap.add_argument('--save', action='store_true', help='capture a fresh dump (needs the container)')
    ap.add_argument('--file', help='analyse an existing SAVEHIST dump')
    ap.add_argument('--json', action='store_true')
    ap.add_argument('--top', type=int, default=20)
    ap.add_argument('--calls', action='store_true', help='show segment transitions')
    a = ap.parse_args()

    path = a.file
    if a.save:
        path = capture()
    if not path:
        ap.print_help()
        return 2

    seq, bad = parse(path)
    if not seq:
        print('no CS:EIP lines parsed from %s' % path)
        return 1

    s = summarise(seq)
    if bad:
        s['unparsedLines'] = bad

    if a.json:
        if a.calls:
            s['transitions'] = transitions(seq, a.top)
        print(json.dumps(s, indent=1))
        return 0

    print('%s: %d steps, %d zero-filled' % (os.path.basename(path), s['steps'], s['zeroLines']))
    if s['zeroLines'] == s['steps']:
        print('  EVERY line is zero. The machine was paused, so nothing was recorded.')
        print('  Enable the debugger (ENA DEBUG) and confirm the clock advances, then re-run.')
        return 1
    print('  game  (CS 000c): %d steps' % s['gameSteps'])
    print('  TBIOS (CS 0110): %d steps' % s['tbiosSteps'])
    print('  other segments : %s'
          % ', '.join('%s=%d' % (k, v) for k, v in s['byCS'].items()
                      if k not in ('000c', '0110')))
    print()
    print('hottest instruction addresses:')
    for h in s['hottest'][:a.top]:
        print('   %s:%s  x%d' % (h['cs'], h['eip'], h['n']))

    if a.calls:
        print()
        print('segment transitions:')
        for t in transitions(seq, a.top):
            print('   %s -> %s' % (t['from'], t['to']))
    return 0


if __name__ == '__main__':
    sys.exit(main())
