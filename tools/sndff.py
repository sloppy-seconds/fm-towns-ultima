#!/usr/bin/env python3
"""tools/sndff.py - count 0xFF bytes inside each .SND payload.

WHY THIS EXISTS. The port's RF5C68 channel ends a sample at the first 0xFF it reads in wave
RAM, which is what makes a looping sound effect stop. Plan item 5o asked whether the samples
that get truncated hold 0xFF as waveform data or whether the port reads the wrong place and
finds a 0xFF the sample does not contain. Counting is the whole answer, and it needs no
emulator and no ears: thirteen of the fifteen payloads contain 0xFF inside their own declared
length, and the only two that do not, BUMP and FIRE, are exactly the ones that play to the end.

The header is 32 bytes with the payload length at offset 12, which equals filesize - 32 for
all fifteen files; tools/verify.js asserts that and asserts these counts.

USAGE
  for f in SND/*.SND; do node tools/getfile.js "$(basename "$f")" --out /var/tmp/snd; done
  python3 tools/sndff.py /var/tmp/snd
"""
import glob
import os
import sys

d = sys.argv[1] if len(sys.argv) > 1 else '/var/tmp/snd'
print(f"{'file':14} {'size':>7} {'len@12':>8} {'payload':>8} {'0xFF':>6} {'first at':>9}")
tot = 0
for p in sorted(glob.glob(os.path.join(d, '*.SND'))):
    b = open(p, 'rb').read()
    decl = int.from_bytes(b[12:16], 'little') if len(b) >= 16 else 0
    body = b[32:32 + decl]
    n = body.count(0xFF)
    if n:
        tot += 1
    first = body.find(b'\xff')
    print(f"{os.path.basename(p):14} {len(b):7} {decl:8} {len(body):8} {n:6} {first if first >= 0 else '-':>9}")
print(f"\n{tot} of {len(glob.glob(os.path.join(d, '*.SND')))} payloads contain 0xFF as waveform data")
