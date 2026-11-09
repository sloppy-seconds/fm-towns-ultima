#!/usr/bin/env python3
"""tools/ccdtracks.py - print each track's start from a CloneCD .ccd, as LBA and as MSF.

WHY THIS EXISTS. The disc's own track starts are the answer to more than one question: which
track the game plays at a screen, whether the port's table of contents is right, and why a
range that looks 150 sectors off is not. docs/audio-playback.md 9.13 rests on this table and the
figures there were first produced by a scratch script, which is a claim a stranger cannot check.
Reading the .ccd is enough and needs no disc image.

The .ccd lists an [Entry N] block per track with a Point and a PLBA, the absolute sector offset
of that track in the image. A CD's MSF address is its LBA plus 150 sectors of lead-in, so both
forms are printed: the LBA is what the port and Tsugaru's CD log use, the MSF is what a table of
contents carries.

USAGE
    python3 tools/ccdtracks.py "Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).ccd"

Point 0xA0 is the first track's number, 0xA1 the last, 0xA2 the lead-out, and 0x01 upward are
the tracks themselves.
"""
import sys


def msf(lba):
    s = lba + 150
    return f"{s // 4500:02d}:{(s // 75) % 60:02d}:{s % 75:02d}"


def main(path):
    entries, cur = [], None
    for line in open(path, errors='replace'):
        line = line.strip()
        if line.startswith('[Entry'):
            if cur:
                entries.append(cur)
            cur = {}
            continue
        if cur is not None and '=' in line:
            k, v = line.split('=', 1)
            cur[k.strip()] = v.strip()
    if cur:
        entries.append(cur)

    print(f"{'point':>6} {'control':>8} {'lba':>9} {'msf':>10}  meaning")
    for e in entries:
        try:
            point = int(e['Point'], 0)
            plba = int(e['PLBA'], 0)
        except (KeyError, ValueError):
            continue
        ctrl = e.get('Control', '?')
        note = {0xA0: 'first track number', 0xA1: 'last track number', 0xA2: 'lead-out'}.get(point, '')
        kind = 'audio' if ctrl in ('0x00', '0') else 'data'
        print(f"{point:#06x} {ctrl:>8} {plba:9} {msf(plba):>10}  {note or 'track ' + str(point) + ', ' + kind}")


if __name__ == '__main__':
    if len(sys.argv) < 2:
        sys.exit(__doc__)
    main(sys.argv[1])
