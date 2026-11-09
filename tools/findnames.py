#!/usr/bin/env python3
"""Find the monster name table in a spawnwatch log by searching for a known name.

docs/combat-formulas.md records the byte string for ドラゴン as 83 68 5D 83 5A 83 53 83 8E, which
is Shift-JIS. Searching the dumped text region for it locates the table wherever it actually sits,
instead of trusting an address: the surrounding zero-split runs then give the table's base and its
stride.
"""
import re
import sys

path = sys.argv[1]
LO, HI = 0x79300, 0x81000
NEEDLE = bytes.fromhex('83685d835a8353838e')

mem = {}
for line in open(path, errors='replace'):
    m = re.match(r'^0000:([0-9A-Fa-f]{8}) ((?:[0-9A-Fa-f]{2} ?){1,16})', line)
    if not m:
        continue
    a = int(m.group(1), 16)
    if not (LO <= a < HI):
        continue
    for i, tok in enumerate(m.group(2).split()):
        mem.setdefault(a + i, int(tok, 16))

have = len(mem)
print(f"collected {have} bytes of the {HI - LO} in range")

data = bytes(mem.get(a, 0) for a in range(LO, HI))
hits = []
i = data.find(NEEDLE)
while i >= 0:
    hits.append(i)
    i = data.find(NEEDLE, i + 1)
print(f"ドラゴン: {len(hits)} hit(s) at " + ' '.join(hex(LO + h) for h in hits))

for h in hits:
    print(f"\n--- context around {hex(LO + h)} (zero-split runs) ---")
    start = max(0, h - 96)
    end = min(len(data), h + 160)
    run_start = None
    for i in range(start, end + 1):
        b = data[i] if i <= end else 0
        if b == 0:
            if run_start is not None:
                chunk = data[run_start:i]
                try:
                    text = chunk.decode('cp932')
                except UnicodeDecodeError:
                    text = chunk.decode('cp932', errors='replace')
                mark = '  <<<' if run_start <= h < i else ''
                print(f"  {hex(LO + run_start)} len {len(chunk):3} {text!r}{mark}")
                run_start = None
        elif run_start is None:
            run_start = i
