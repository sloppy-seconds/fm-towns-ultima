#!/usr/bin/env python3
"""tools/tos21-gds.py - build the TownsOS-console image with the GDS driver added.

WHY THIS EXISTS. Two images each have half of what the Phar Lap route needs, and
nobody has tried combining them.

  saves/tos21-console.hdm   TownsOS 2.1 L51, boots to a CLI (CONTROL is commented
                            out of AUTOEXEC.BAT), carries CONSOLE.EXE,
                            COMMAND.COM and RUN386.EXE. Its CONFIG.SYS loads
                            CTL.SYS, TBIOSLD.SYS, TOWNS.SYS, OAK0, OAK1, T_KANJI
                            and TICM. It has NO GDS.SYS.

  saves/towns62.hdm         DOS 6.2 plus TOWNS.SYS, GDS.SYS and MOUSE.SYS. Has
                            the graphics driver, but COCO hangs the batch before
                            SIDEWORK, and its shell is real MS-DOS, not TownsOS.

The measured position before this tool:

  - tos21-console.hdm: RUN386 produces no output, tried bare, with -banner, and
    with a full compile (docs/highc-dos-negative.md). Files verified intact.
  - towns62.hdm: RUN386 produces no output either, and GDS is resident, so GDS
    alone is not sufficient (docs/decompilation-experiment.md result 12).

What has NOT been tried is the combination: a TownsOS boot that completes its
resident stack AND has GDS resident. The two failures above are consistent with
needing both, and neither image has both.

The hypothesis, stated so it can be refuted: RUN386 loads the P3 flat image and
the image requires a GDS surface to attach to. Without GDS it exits silently
rather than erroring, which is what "no output in either environment" looks like
from above. GDS needs a TownsOS of the right version to talk to, which is why
adding it to a DOS 6.2 boot is not the same test.

WHAT IT DOES. Copies saves/tos21-console.hdm to a scratch image (the named image
is never modified), copies GDS.SYS in from saves/towns62.hdm, adds the DEVICE
line to CONFIG.SYS, replaces AUTOEXEC.BAT with a traced probe that runs RUN386,
and optionally boots it.

USAGE
  python3 tools/tos21-gds.py --prepare    build the scratch image, show the plan
  python3 tools/tos21-gds.py --boot       prepare, boot, then read the trace
  python3 tools/tos21-gds.py --read       read the trace from the last run

Requires the emulator container running with the supervisor API on 8096 and a
cserve.js instance serving the scratch image.
"""

import argparse
import os
import shutil
import subprocess
import sys
import time
import json
import urllib.request

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SAVES = os.path.join(ROOT, 'saves')
BASE_IMAGE = os.path.join(SAVES, 'tos21-console.hdm')
GDS_DONOR = os.path.join(SAVES, 'towns62.hdm')
SCRATCH = os.path.join(SAVES, 'scratch-tos21gds.hdm')
GUEST_PATH = '/data/scratch-tos21gds.hdm'
API = 'http://127.0.0.1:8096'

# GDS.SYS lives in ::/DOS on the donor image.
GDS_SOURCE_PATH = '::DOS/GDS.SYS'
# Put it where the other Towns drivers already are on the target.
GDS_DEST_PATH = '::SYS/GDS.SYS'
GDS_DEVICE_LINE = r'DEVICE=\SYS\GDS.SYS'

# The probe. Every stage appends to A:\T.LOG so a hang is located from the host
# with no OCR, and RUN386 output goes to A:\R.LOG separately. COCO has its
# ERRORLEVEL gated exactly as the stock AUTOEXEC does, because on this image
# COCO is expected to succeed and the point is to get past it.
BATCH = r"""@ECHO OFF
PROMPT $P$G
SET PATH=A:\BIN;A:\SYS;A:\T_TOOL
ECHO G1_START > A:\T.LOG
A:\SYS\MSCDEX.EXE /D:TOWNS_CD /M:8 /L:Q > NUL
ECHO G2_MSCDEX=%ERRORLEVEL% >> A:\T.LOG
DIR Q:\HC386\BIN\HCD386P.EXP >> A:\T.LOG
\HCOPY\COCO
ECHO G3_COCO=%ERRORLEVEL% >> A:\T.LOG
IF ERRORLEVEL 1 GOTO END
\SYSINIT\SYSINIT
ECHO G4_SYSINIT=%ERRORLEVEL% >> A:\T.LOG
IF ERRORLEVEL 1 GOTO END
\HCOPY\COCO_MEM \HCOPY\FORRBIOS.NSD
ECHO G5_COCOMEM=%ERRORLEVEL% >> A:\T.LOG
IF ERRORLEVEL 1 GOTO END
ECHO G6_TRY_RUN386 >> A:\T.LOG
ECHO G6A_BARE >> A:\T.LOG
Q:\RUN386.EXE
ECHO G6B_BARE_RC=%ERRORLEVEL% >> A:\T.LOG
ECHO G6C_LIST_Q >> A:\T.LOG
DIR Q:\ >> A:\T.LOG
ECHO G6D_LIST_HC >> A:\T.LOG
DIR Q:\HC386\BIN\HCD386P.EXP >> A:\T.LOG
ECHO G6E_TRY_OBJ >> A:\T.LOG
REM Copy from the CD to A:. COPY uses handle-based opens, not FCB, so this
REM tests file access where DIR cannot.
COPY Q:\HC386\BIN\HCD386P.EXP A:\HCD.EXP
ECHO G6F_COPY_RC=%ERRORLEVEL% >> A:\T.LOG
REM Run the extender against a local copy, avoiding the CD path entirely.
A:\RUN386 > A:\EXT.LOG
ECHO G6G_EXT_RC=%ERRORLEVEL% >> A:\T.LOG
TYPE A:\EXT.LOG >> A:\T.LOG
ECHO G6H_DONE >> A:\T.LOG
Q:\RUN386.EXE Q:\HC386\BIN\HCD386P.EXP Q:\HC386\DEMOS\HELLO.C -obj A:\H.OBJ -dir Q:\HC386\INC > A:\R.LOG
ECHO G7_RC=%ERRORLEVEL% >> A:\T.LOG
DIR A:\H.OBJ >> A:\T.LOG
ECHO G8_DONE >> A:\T.LOG
GOTO FIN
:END
ECHO GX_GAVE_UP_AT_ERRORLEVEL >> A:\T.LOG
:FIN
"""


def dospath(p):
    """mtools wants DOS 8.3 with backslashes. Keep it explicit so a mistake is
    visible rather than silently ignored by mdel/mcopy."""
    if not p.startswith('::'):
        raise ValueError('expected a :: path, got %r' % p)
    return p


def prepare():
    for need in (BASE_IMAGE, GDS_DONOR):
        if not os.path.exists(need):
            print('missing %s' % need, file=sys.stderr)
            return 3

    shutil.copyfile(BASE_IMAGE, SCRATCH)
    print('copied %s -> %s' % (os.path.basename(BASE_IMAGE), os.path.basename(SCRATCH)))

    # GDS.SYS out of the donor and into the target.
    tmpgds = '/var/tmp/gds-extract.sys'
    subprocess.run(['mcopy', '-o', '-i', GDS_DONOR, dospath(GDS_SOURCE_PATH), tmpgds],
                   check=True)
    size = os.path.getsize(tmpgds)
    subprocess.run(['mcopy', '-o', tmpgds, '-i', SCRATCH, dospath(GDS_DEST_PATH)],
                   check=True)
    print('copied GDS.SYS (%d bytes) %s -> %s'
          % (size, GDS_SOURCE_PATH, GDS_DEST_PATH))

    # CONFIG.SYS: append the DEVICE line after the TOWNS.SYS line, which is where
    # the donor image and the TownsOS convention both put it.
    out = subprocess.run(['mtype', '-i', SCRATCH, '::CONFIG.SYS'],
                         capture_output=True, check=True)
    cfg = out.stdout.decode('latin1')
    if 'GDS.SYS' in cfg.upper():
        print('CONFIG.SYS already loads GDS.SYS, leaving it alone')
    else:
        lines = cfg.split('\n')
        newlines = []
        inserted = False
        for line in lines:
            newlines.append(line)
            if not inserted and 'TOWNS.SYS' in line.upper() and 'DEVICE' in line.upper():
                newlines.append(GDS_DEVICE_LINE)
                inserted = True
        if not inserted:
            print('could not find the TOWNS.SYS line, appending at the end', file=sys.stderr)
            newlines.append(GDS_DEVICE_LINE)
        cfg = '\n'.join(newlines)
        with open('/var/tmp/cfg.sys', 'w', newline='\r\n') as fh:
            fh.write(cfg.replace('\r\n', '\n').replace('\n', '\r\n'))
        subprocess.run(['mcopy', '-o', '/var/tmp/cfg.sys', '-i', SCRATCH, '::CONFIG.SYS'],
                       check=True)
        print('added DEVICE line: %s' % GDS_DEVICE_LINE)

    # CD drivers. tos21-console.hdm has neither CDDRV.SYS nor CDISC.SYS, so
    # MSCDEX starts and binds to nothing: Q: reports "no volume label" and
    # every read of the CD silently does nothing. The stock AUTOEXEC calls
    # MSCDEX anyway, so this image has never been able to read the disc. Copy
    # the pair from the donor, where the same disc does mount.
    for name in ('CDDRV.SYS', 'CDISC.SYS'):
        srcd = '::DOS/' + name
        tmp = '/var/tmp/' + name
        r = subprocess.run(['mdir', '-i', SCRATCH, '::SYS/' + name], capture_output=True)
        if name.encode() in r.stdout.upper():
            print('%s already present' % name)
            continue
        subprocess.run(['mcopy', '-o', '-i', GDS_DONOR, srcd, tmp], check=True)
        subprocess.run(['mcopy', '-o', tmp, '-i', SCRATCH, '::SYS/' + name], check=True)
        print('copied %s (%d bytes) ::DOS -> ::SYS' % (name, os.path.getsize(tmp)))

    # MSCDEX itself. This image has no MSCDEX.EXE anywhere on it, so the stock
    # AUTOEXEC's MSCDEX line does nothing at all and Q: never exists. That is
    # why the CD was unreadable on this image before any of this work.
    r = subprocess.run(['mdir', '-i', SCRATCH, '::SYS/MSCDEX.EXE'], capture_output=True)
    if b'MSCDEX' not in r.stdout:
        subprocess.run(['mcopy', '-o', '-i', GDS_DONOR, '::DOS/MSCDEX.EXE',
                        '/var/tmp/MSCDEX.EXE'], check=True)
        subprocess.run(['mcopy', '-o', '/var/tmp/MSCDEX.EXE', '-i', SCRATCH,
                        '::SYS/MSCDEX.EXE'], check=True)
        print('copied MSCDEX.EXE (%d bytes) ::DOS -> ::SYS'
              % os.path.getsize('/var/tmp/MSCDEX.EXE'))

    # CONFIG.SYS lines for them, matching the donor's arguments.
    out = subprocess.run(['mtype', '-i', SCRATCH, '::CONFIG.SYS'], capture_output=True)
    cfg = out.stdout.decode('latin1')
    if 'CDDRV' not in cfg.upper():
        add = ('DEVICE=\\SYS\\CDDRV.SYS /D:TOWNS_CD /U0:0\r\n'
               'DEVICE=\\SYS\\CDISC.SYS\r\n')
        newcfg = []
        for line in cfg.split('\r\n'):
            newcfg.append(line)
            if line.upper().startswith('DEVICE=\\SYS\\GDS.SYS'):
                newcfg.append(add.rstrip('\r\n'))
        cfg = '\r\n'.join(newcfg)
        with open('/var/tmp/cfg3.sys', 'w', newline='\r\n') as fh:
            fh.write(cfg)
        subprocess.run(['mcopy', '-o', '/var/tmp/cfg3.sys', '-i', SCRATCH, '::CONFIG.SYS'],
                       check=True)
        print('added CDDRV.SYS and CDISC.SYS device lines')

    # CONFIG.SYS SHELL line. The image ships SHELL=C:\COMMAND.COM C:\ /P, which
    # cannot start on a floppy-only boot because there is no C:. High C's own docs
    # treat this image as one that "boots to a DOS prompt", which is only true when
    # a C: exists (an 8 MB hard disk supplied it during that earlier work). Point
    # it at A: so the shell has somewhere to live, and copy COMMAND.COM there.
    out = subprocess.run(['mtype', '-i', SCRATCH, '::CONFIG.SYS'], capture_output=True)
    cfg = out.stdout.decode('latin1')
    newcfg = []
    changed = False
    for line in cfg.split('\r\n'):
        if line.upper().startswith('SHELL='):
            newcfg.append(r'SHELL=A:\COMMAND.COM A:\ /P')
            changed = True
        else:
            newcfg.append(line)
    if changed:
        with open('/var/tmp/cfg2.sys', 'w', newline='\r\n') as fh:
            fh.write('\r\n'.join(newcfg))
        subprocess.run(['mcopy', '-o', '/var/tmp/cfg2.sys', '-i', SCRATCH, '::CONFIG.SYS'],
                       check=True)
        print(r'changed SHELL= to A:\COMMAND.COM A:\ /P')

    # COMMAND.COM must be reachable at A:\ for that shell to start.
    cmd_out = subprocess.run(['mdir', '-i', SCRATCH, '::COMMAND.COM'], capture_output=True)
    if b'COMMAND' not in cmd_out.stdout:
        subprocess.run(['mcopy', '-o', '-i', SCRATCH, '::COMMAND.COM', '/var/tmp/command.com'],
                       check=True)
        subprocess.run(['mcopy', '-o', '/var/tmp/command.com', '-i', SCRATCH, '::COMMAND.COM'],
                       check=True)
        print('copied COMMAND.COM to the root of A:')

    # AUTOEXEC probe.
    with open('/var/tmp/tos21-gds.bat', 'w', newline='\r\n') as fh:
        fh.write(BATCH)
    subprocess.run(['mcopy', '-o', '/var/tmp/tos21-gds.bat', '-i', SCRATCH,
                    '::AUTOEXEC.BAT'], check=True)
    print('wrote AUTOEXEC.BAT probe')

    for stale in ('T.LOG', 'R.LOG'):
        subprocess.run(['mdel', '-i', SCRATCH, '::' + stale], capture_output=True)

    print()
    print('--- resulting CONFIG.SYS ---')
    out = subprocess.run(['mtype', '-i', SCRATCH, '::CONFIG.SYS'],
                         capture_output=True)
    print(out.stdout.decode('latin1').replace('\r', ''))
    print('--- AUTOEXEC.BAT ---')
    print(BATCH)
    return 0


def api(path, payload=None, timeout=120):
    url = API + path
    if payload is None:
        req = urllib.request.Request(url)
    else:
        req = urllib.request.Request(url, data=json.dumps(payload).encode(),
                                     headers={'content-type': 'application/json'})
    return urllib.request.urlopen(req, timeout=timeout).read()


def boot(seconds):
    """Load the scratch image into the floppy and boot it.

    The emulator is started with -FD0 pointing at whatever image the container
    was launched with, so FD0LOAD is what makes it see a different one. That is
    how cserve.js does it and the sequence here matches, including the FD0UP
    re-arm which is needed because without it guest writes silently do nothing.
    """
    for line in ('FD0EJECT',):
        try:
            api('/api/cmd', {'line': line})
        except Exception:
            pass
    time.sleep(1)
    api('/api/cmd', {'line': 'FD0LOAD ' + GUEST_PATH})
    time.sleep(1)
    api('/api/cmd', {'line': 'FD0UP'})
    time.sleep(1)
    api('/api/cmd', {'line': 'RESET F0'})
    print('booted, waiting %ds' % seconds)
    for i in range(seconds // 10):
        time.sleep(10)
        try:
            raw = api('/api/screen?mode=stats', timeout=30)
            d = json.loads(raw)
            st = d['stats']
            print('  %3ds colours=%d allGrey=%s'
                  % ((i + 1) * 10, st['distinctColours'], st['allGrey']))
        except Exception as exc:
            print('  %3ds stats failed: %s' % ((i + 1) * 10, exc))
    return 0


def read_trace():
    for name in ('T.LOG', 'R.LOG'):
        out = subprocess.run(['mtype', '-i', SCRATCH, '::' + name],
                             capture_output=True)
        text = out.stdout.decode('latin1').replace('\r', '').strip()
        print('--- %s ---' % name)
        print(text if text else '(absent or empty)')
        print()
    out = subprocess.run(['mdir', '-i', SCRATCH, '::H.OBJ'], capture_output=True)
    got = out.stdout.decode('latin1').strip()
    print('--- H.OBJ ---')
    print(got if got else '(not produced)')
    return 0


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--prepare', action='store_true')
    ap.add_argument('--boot', action='store_true')
    ap.add_argument('--read', action='store_true')
    ap.add_argument('--seconds', type=int, default=90)
    args = ap.parse_args()

    if not (args.prepare or args.boot or args.read):
        ap.print_help()
        return 64

    if args.prepare or args.boot:
        rc = prepare()
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
