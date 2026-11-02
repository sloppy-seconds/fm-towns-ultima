#!/usr/bin/env python3
"""tools/shadow-diff.py - prove a native shadow behaves exactly like the recompiled function it replaces.

WHY THIS EXISTS. A replaced routine with no comparison is an unverified replacement, and this project has
paid repeatedly for confident fluents that were never measured. The strangler's claim is not "the native code
looks right", it is "with the shadow installed, the machine ends up in the same state as without it".

WHAT IT COMPARES. The same route, the same starting disk, twice: once with U2_SHADOW_OFF=1 so every shadow
delegates to the recompiled twin (the baseline), once with the shadows live. At each checkpoint it hashes the
guest memory the game draws with, at the end it hashes the save disk, and it refuses to pass unless the shadow
was actually entered, because two runs that both never reached the code would agree perfectly and prove nothing.

SCREENS COME FROM MEMORY, NOT A WINDOW. The screen buffer and the character record both live in the 64 KB at
0x4c0000, and a screenshot would need the SDL renderer, which paces the run to real time and costs a factor of
135. The bytes behind the picture are the picture.

USAGE
  ./tools/shadow-diff.py                      compare baseline and shadows on the default build
  ./tools/shadow-diff.py --port /var/tmp/wb/u2port    ... against another build
  ./tools/shadow-diff.py --json               machine-readable

EXIT STATUS. 0 when the two runs agree and the shadow ran. 1 otherwise, so this can gate a commit.
"""

import argparse
import hashlib
import json
import os
import shutil
import sys
import tempfile

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
sys.path.insert(0, HERE)
import drive  # noqa: E402  - the socket client, so there is one of it

# The create route from tools/controlcreate.py: splash, menu, create, allocate, name, confirm, back out,
# examine the register. Character creation is the right vehicle because its screens are static and its
# input is already documented, so a difference cannot be "\the route was wrong".
ROUTE = ["space", "Down", "Return", "Down", "Return", "4", "Return",
         "Return", "Return", "Return", "Return", "Return", "Return",
         "H", "M", "F", "J", "A", "M", "E", "S", "Return", "Y", "space", "Return", "Return"]
CHECKPOINTS = {6: "entry accepted", 12: "attributes allocated", 18: "name typed",
               22: "creation confirmed", 25: "the register"}
SCREEN_LO, SCREEN_LEN = 0x4c0000, 0x10000
# The guest's DOS clock is pinned, because without it the game seeds itself from the host time and two identical
# runs differ by one byte, which is enough to make every comparison fail. The value is arbitrary and only has to
# be the same in both runs.
CLOCK = 1700000000     # screen buffer, sprite area and the character record


def one_run(port_path, template_disk, shadow_off, boot, settle, work, tag):
    disk = os.path.join(work, f'disk-{tag}.hdm')
    shutil.copyfile(template_disk, disk)      # the named image is never driven
    errlog = os.path.join(work, f'err-{tag}.log')
    port = drive.Port(port_path, disk, errlog, shadow_off=shadow_off, graphics='none',
                      frames=len(ROUTE) * (settle + 200) + boot + 20000, clock=CLOCK)
    shots, entered_at, frames_seen = {}, [], []
    try:
        # ABSOLUTE frames, because relative stepping leaves each process wherever it happened to be when the first
        # command arrived, and the game's counters then disagree for reasons that have nothing to do with a shadow.
        port.step_to(boot)
        target = boot
        for i, key in enumerate(ROUTE):
            target += settle
            port.key_at(target, key)
            if i in CHECKPOINTS:
                r = port.cmd(cmd='mem', addr=f'0x{SCREEN_LO:x}', n=SCREEN_LEN)
                block = r['hex']
                frames_seen.append((target, int(r.get('frame', -1))))
                shots[CHECKPOINTS[i]] = hashlib.sha256(bytes.fromhex(block)).hexdigest()[:16]
                entered_at.append(port.hits())
        entry = port.hits()
    finally:
        port.close()
    return {'screens': shots, 'entry': entry, 'entered_at': entered_at, 'frames_wanted_vs_got': frames_seen,
            'disk': hashlib.sha256(open(disk, 'rb').read()).hexdigest(),
            'stdout': getattr(port, 'stdout_path', '')}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--port', default=os.path.join(ROOT, 'build', 'port', 'b', 'u2port'))
    ap.add_argument('--disk', default=os.path.join(ROOT, 'saves', 'userdisk.hdm'))
    ap.add_argument('--boot', type=int, default=2000)
    ap.add_argument('--settle', type=int, default=600)
    ap.add_argument('--control', action='store_true',
                    help='compare the baseline against itself: proves the comparison is not measuring noise')
    ap.add_argument('--json', action='store_true')
    args = ap.parse_args()
    if not os.path.exists(args.port):
        sys.exit(f'shadow-diff: {args.port} is missing. Run ./tools/port-build.sh first.')

    work = tempfile.mkdtemp(prefix='shadowdiff-', dir='/var/tmp')
    base = one_run(args.port, args.disk, True, args.boot, args.settle, work, 'base')
    # --control runs the BASELINE twice. If two identical runs disagree the comparison is measuring run-to-run
    # noise (a timer, an RNG seeded from the clock) and would report a difference for any shadow whatsoever.
    shad = one_run(args.port, args.disk, args.control, args.boot, args.settle, work, 'shadow')

    report = {'baseline': base, 'shadow': shad, 'work': work}
    diffs = []
    for name in base['screens']:
        if base['screens'][name] != shad['screens'].get(name):
            diffs.append(f'screen "{name}": {base["screens"][name]} != {shad["screens"].get(name)}')
    if base['disk'] != shad['disk']:
        diffs.append(f'disk: {base["disk"][:16]} != {shad["disk"][:16]}')
    report['differences'] = diffs

    # The shadow must have run. Without this, two runs that never reached the routine agree for the wrong reason.
    vacuous = shad['entry'] == 0
    report['vacuous'] = vacuous
    report['ok'] = not diffs and not vacuous

    if args.json:
        print(json.dumps(report, indent=2))
    else:
        print(f'shadow-diff: {args.port}')
        for name, h in base['screens'].items():
            same = 'same' if shad['screens'].get(name) == h else 'DIFFERS'
            print(f'  screen {name:22s} {h}  {same}')
        print(f'  disk   {" " * 22} {base["disk"][:16]}  '
              f'{"same" if base["disk"] == shad["disk"] else "DIFFERS"}')
        print(f'  frames wanted vs reached: {base["frames_wanted_vs_got"]}')
        print(f'  shadow entries: baseline {base["entry"]}, shadow {shad["entry"]}'
              f'  (per checkpoint {shad["entered_at"]})')
        if vacuous:
            print('  FAIL the shadow never ran, so agreeing proves nothing')
        for d in diffs:
            print(f'  FAIL {d}')
        print('  PASS identical' if report['ok'] else '  FAIL not identical')

    sys.exit(0 if report['ok'] else 1)


if __name__ == '__main__':
    main()
