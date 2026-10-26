#!/usr/bin/env python3
"""tools/towns62-run386.py - boot towns62.hdm and try RUN386 with GDS resident.

WHY THIS EXISTS. Two things are being tested at once, and they are the two halves
of a memory that had never been checked.

FIRST: can a DOS boot have the Towns graphics drivers resident AND a writable
volume AND a normal prompt? docs/compiling-on-fm-towns.md says not to add
TOWNS.SYS/GDS.SYS because "they buy nothing here", which is true for the
HCD386.EXE route and was never tested for the RUN386 route. saves/towns62.hdm
already carries them, so the question is answerable with a boot rather than a
rebuild.

SECOND: does RUN386 HCD386P.EXP produce anything when GDS is present? The
documented position is that RUN386 is silent without a Towns window system.
Whether "window system" means the GDS driver or the CONTROL.EXE desktop is the
distinction nobody has measured, and it is the difference between the whole
route being blocked and it being merely untried.

AND IT MATTERS FOR THE DECOMPILATION. tools/frameflags.py found that every flag
set produces byte-identical output: HCD386.EXE is not engaging the optimiser.
The original toolchain invoked RUN386 HCD386P.EXP. If that honours -O, it may
produce the framed prologues that 23 source variants could not.

WHAT IT DOES. Copies saves/towns62.hdm to a scratch image, replaces AUTOEXEC.BAT
with a probe that traces each stage and then runs RUN386, boots it, and reads the
trace back. The named image is never modified: the probe writes a copy.

USAGE
  python3 tools/towns62-run386.py --prepare   build the scratch image and show the batch
  python3 tools/towns62-run386.py --boot      prepare, boot, screenshot, read trace
  python3 tools/towns62-run386.py --read      read the trace from the last run

Requires the emulator container running with the supervisor API on 8096.
"""

import argparse
import json
import os
import shutil
import subprocess
import sys
import time
import urllib.request

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC_IMAGE = os.path.join(ROOT, 'saves', 'towns62.hdm')
SCRATCH = os.path.join(ROOT, 'saves', 'scratch-towns62.hdm')
GUEST_PATH = '/data/scratch-towns62.hdm'
API = 'http://127.0.0.1:8096'

# The probe. Every stage appends to a trace file so a hang can be located from
# the host without reading the screen. COCO and SIDEWORK are Towns resident
# programs; if COCO is what hangs, the trace stops after its line and that is
# itself the answer.
# Two probes. BATCH runs the full Towns resident stack, which is what the stock
# AUTOEXEC did. BATCH_DIRECT skips it: the GDS driver in CONFIG.SYS is already
# resident, and the question is whether that alone is enough for RUN386.
BATCH_DIRECT = r"""@ECHO OFF
PROMPT $P$G
SET PATH=A:\DOS;A:\BIN
SET HCDIR=Q:\HC386
ECHO D1_START > A:\T.LOG
A:\SHARE.EXE
ECHO D2_SHARE=%ERRORLEVEL% >> A:\T.LOG
\DOS\MSCDEX /D:TOWNS_CD /K /M:8 /L:Q > NUL
ECHO D3_MSCDEX=%ERRORLEVEL% >> A:\T.LOG
DIR Q:\HC386\BIN\HCD386P.EXP >> A:\T.LOG
ECHO D4_RUN386 >> A:\T.LOG
Q:\RUN386.EXE Q:\HC386\BIN\HCD386P.EXP Q:\HC386\DEMOS\HELLO.C -obj A:\H.OBJ -dir Q:\HC386\INC > A:\R.LOG
ECHO D5_RC=%ERRORLEVEL% >> A:\T.LOG
DIR A:\R.LOG >> A:\T.LOG
ECHO D5B_TRY_BARE >> A:\T.LOG
Q:\RUN386.EXE > A:\R2.LOG
ECHO D5C_BARE_RC=%ERRORLEVEL% >> A:\T.LOG
DIR A:\R2.LOG >> A:\T.LOG
ECHO D5D_TRY_NOLOG >> A:\T.LOG
Q:\RUN386.EXE
ECHO D5E_NOLOG_RC=%ERRORLEVEL% >> A:\T.LOG
DIR A:\H.OBJ >> A:\T.LOG
ECHO D6_DONE >> A:\T.LOG
"""

BATCH = r"""@ECHO OFF
PROMPT $P$G
SET PATH=A:\DOS;A:\BIN
SET HCDIR=Q:\HC386
ECHO P1_START > A:\T.LOG
A:\SHARE.EXE
ECHO P2_SHARE=%ERRORLEVEL% >> A:\T.LOG
\DOS\MSCDEX /D:TOWNS_CD /K /M:8 /L:Q > NUL
ECHO P3_MSCDEX=%ERRORLEVEL% >> A:\T.LOG
DIR Q:\HC386\BIN\HCD386P.EXP >> A:\T.LOG
Q:\HCOPY\COCO
ECHO P4_COCO=%ERRORLEVEL% >> A:\T.LOG
Q:\SIDEWORK\SIDEWORK -q
ECHO P5_SIDE=%ERRORLEVEL% >> A:\T.LOG
Q:\SYSINIT\SYSINIT -q
ECHO P6_SYS=%ERRORLEVEL% >> A:\T.LOG
ECHO P7_TRY_RUN386 >> A:\T.LOG
DIR Q:\SYSINIT >> A:\T.LOG
Q:\RUN386.EXE Q:\HC386\BIN\HCD386P.EXP Q:\HC386\DEMOS\HELLO.C -obj A:\H.OBJ -dir Q:\HC386\INC > A:\R.LOG
ECHO P8_RUN386=%ERRORLEVEL% >> A:\T.LOG
DIR A:\H.OBJ >> A:\T.LOG
ECHO P9_DONE >> A:\T.LOG
"""


def api(path, payload=None, timeout=60):
    url = API + path
    if payload is None:
        req = urllib.request.Request(url)
    else:
        req = urllib.request.Request(url, data=json.dumps(payload).encode(),
                                     headers={'content-type': 'application/json'})
    return urllib.request.urlopen(req, timeout=timeout).read()


def prepare(which='full'):
    if not os.path.exists(SRC_IMAGE):
        print('missing %s' % SRC_IMAGE, file=sys.stderr)
        return 3
    shutil.copyfile(SRC_IMAGE, SCRATCH)
    print('copied %s -> %s' % (os.path.basename(SRC_IMAGE), os.path.basename(SCRATCH)))

    with open('/var/tmp/towns62-boot.bat', 'w', newline='\r\n') as fh:
        fh.write(BATCH_DIRECT if which == 'direct' else BATCH)
    subprocess.run(['mcopy', '-o', '/var/tmp/towns62-boot.bat', '-i', SCRATCH,
                    '::AUTOEXEC.BAT'], check=True)
    for stale in ('T.LOG', 'R.LOG'):
        subprocess.run(['mdel', '-i', SCRATCH, '::' + stale],
                       capture_output=True)
    print('wrote AUTOEXEC.BAT probe (%s)' % which)
    print()
    print(BATCH_DIRECT if which == 'direct' else BATCH)
    return 0


def read_trace():
    for name in ('T.LOG', 'R.LOG'):
        try:
            out = subprocess.run(['mtype', '-i', SCRATCH, '::' + name],
                                 capture_output=True, text=True, timeout=30)
        except subprocess.TimeoutExpired:
            print('%s: unreadable' % name)
            continue
        text = out.stdout.strip()
        if text:
            print('--- %s ---' % name)
            print(text)
        else:
            print('%s: absent or empty' % name)


def boot(seconds=90):
    # Point the guest at the scratch image and boot from it.
    try:
        api('/api/cmd', {'line': 'FD0EJECT'})
    except Exception:
        pass
    time.sleep(1)
    # Boot from the floppy slot, which is how this project boots DOS images.
    api('/api/cmd', {'line': 'FD0LOAD ' + GUEST_PATH})
    time.sleep(1)
    api('/api/cmd', {'line': 'FD0UP'})
    time.sleep(1)
    api('/api/cmd', {'line': 'RESET F0'})
    print('booted, waiting %ds' % seconds)
    for i in range(seconds // 10):
        time.sleep(10)
        try:
            stats = api('/api/screen?mode=stats', timeout=30)
            print('  %3ds %s' % ((i + 1) * 10, stats[:120].decode('latin1', 'replace')))
        except Exception as exc:
            print('  %3ds stats failed: %s' % ((i + 1) * 10, exc))
    return 0


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--prepare', action='store_true')
    ap.add_argument('--boot', action='store_true')
    ap.add_argument('--read', action='store_true')
    ap.add_argument('--seconds', type=int, default=90)
    ap.add_argument('--batch', choices=['full', 'direct'], default='direct')
    args = ap.parse_args()

    if not (args.prepare or args.boot or args.read):
        ap.print_help()
        return 64

    if args.prepare or args.boot:
        rc = prepare(args.batch)
        if rc:
            return rc
    if args.boot:
        rc = boot(args.seconds)
        if rc:
            return rc
    if args.read or args.boot:
        print()
        read_trace()
    return 0


if __name__ == '__main__':
    sys.exit(main())
