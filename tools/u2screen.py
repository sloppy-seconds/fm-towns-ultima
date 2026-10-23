#!/usr/bin/env python3
"""u2screen.py - say which Ultima II screen is up, from the emulator's pixels.

Why this exists: colour censuses only say "something changed". They cannot say
"this is the splash" versus "this is the menu". Reading the wrong thing wastes a
turn and, worse, invites sending keys into a screen that did not want them.

Every region here was measured on the running emulator and named by the project
owner. Nothing is inferred from a whole-screen sweep.

Screens recognised:

  TOWNS MENU   the TownsOS launcher. Icons on a 112px pitch, first centre at
               framebuffer x=88. Labels read ULTIMA I / ULTIMA ][/ ULTIMA ]I[.
  SPLASH       a man with sword and shield, and a pulsating circle of white,
               green and blue in the middle. The pulse is the signature: the
               region CHANGES between frames. A still screen is not the splash.

Status bars, present once the game is running:

  YELLOW BAR   rows 23-40, x 4-638, fill #ffff55, no border. Reads
               "Ultima Trilogy     Ultima ][". Has text => we are in U2.
  RED BAR      rows 454-469, x 19-622, fill #ff0000, 2px white border outside
               the fill. Empty means no error. Any second colour inside the fill
               is error text.

Usage:
    python3 u2screen.py            report the current screen
    python3 u2screen.py --json     same, machine readable

Read-only. It takes screenshots and nothing else, so it is safe to run at any
time, including while a human is playing.
"""

import json
import struct
import sys
import time
import urllib.request
import zlib

BASE = "http://127.0.0.1:8080"

# --- measured regions --------------------------------------------------------
# The pulsating circle on the splash. Found by diffing two frames 0.7s apart and
# taking the bounding box of the change.
SPLASH_PULSE = (200, 224, 418, 296)     # x0, y0, x1, y1
SPLASH_COLOURS = {
    "white": (255, 255, 255),
    "green": (0, 255, 0),
    "blue": (0, 0, 255),
    "cyan": (0, 255, 255),
}

YELLOW_BAR = (4, 23, 638, 40)           # x0, y0, x1, y1  fill #ffff55
RED_BAR = (19, 454, 622, 469)           # x0, y0, x1, y1  fill #ff0000

# Towns menu geometry, for reporting rather than for detection.
TOWNS_ICON_PITCH = 112
TOWNS_FIRST_CENTRE_X = 88
TOWNS_ICON_Y = 185
TOWNS_LABELS = ["ULTIMA I", "ULTIMA ][", "ULTIMA ]I[", "", "", ""]


def shot():
    with urllib.request.urlopen(BASE + "/api/shot.png", timeout=20) as r:
        data = r.read()
    pos = 8
    w = h = 0
    ct = 0
    idat = b""
    while pos < len(data):
        ln = struct.unpack(">I", data[pos:pos + 4])[0]
        typ = data[pos + 4:pos + 8]
        chunk = data[pos + 8:pos + 8 + ln]
        if typ == b"IHDR":
            w, h, _bd, ct = struct.unpack(">IIBB", chunk[:10])
        elif typ == b"IDAT":
            idat += chunk
        pos += 12 + ln
    raw = zlib.decompress(idat)
    bpp = 4 if ct == 6 else 3
    stride = w * bpp
    out = bytearray()
    prev = bytearray(stride)
    i = 0
    for _y in range(h):
        f = raw[i]
        i += 1
        line = bytearray(raw[i:i + stride])
        i += stride
        if f == 1:
            for x in range(bpp, stride):
                line[x] = (line[x] + line[x - bpp]) & 255
        elif f == 2:
            for x in range(stride):
                line[x] = (line[x] + prev[x]) & 255
        elif f == 3:
            for x in range(stride):
                a = line[x - bpp] if x >= bpp else 0
                line[x] = (line[x] + (a + prev[x]) // 2) & 255
        elif f == 4:
            for x in range(stride):
                a = line[x - bpp] if x >= bpp else 0
                b = prev[x]
                c = prev[x - bpp] if x >= bpp else 0
                p = a + b - c
                pa, pb, pc = abs(p - a), abs(p - b), abs(p - c)
                pr = a if (pa <= pb and pa <= pc) else (b if pb <= pc else c)
                line[x] = (line[x] + pr) & 255
        out += line
        prev = line

    px = {}
    for y in range(h):
        base = y * stride
        for x in range(w):
            o = base + x * bpp
            px[(x, y)] = (out[o], out[o + 1], out[o + 2])
    return w, h, px


def region_counts(px, box):
    x0, y0, x1, y1 = box
    counts = {}
    for y in range(y0, y1):
        for x in range(x0, x1):
            c = px[(x, y)]
            counts[c] = counts.get(c, 0) + 1
    return counts


def bar_has_text(px, box, flat_threshold=0.995):
    """A flat fill is one colour. A message introduces a second one."""
    counts = region_counts(px, box)
    if not counts:
        return None, 0
    total = sum(counts.values())
    dominant = max(counts.values())
    return (dominant / total) < flat_threshold, dominant / total


def pulse_matches(px):
    """Does the pulse box hold the splash's white/green/blue right now?"""
    counts = region_counts(px, SPLASH_PULSE)
    total = sum(counts.values())
    if not total:
        return 0, {}
    shares = {}
    for name, colour in SPLASH_COLOURS.items():
        shares[name] = counts.get(colour, 0) / total
    return sum(shares.values()), shares


def detect():
    w, h, a = shot()
    time.sleep(0.7)
    _w, _h, b = shot()

    # Is anything animating?
    x0, y0, x1, y1 = SPLASH_PULSE
    changed = 0
    for y in range(y0, y1, 2):
        for x in range(x0, x1, 2):
            if a[(x, y)] != b[(x, y)]:
                changed += 1

    frac, shares = pulse_matches(b)
    in_u2, _ = bar_has_text(b, YELLOW_BAR)
    red_text, red_flat = bar_has_text(b, RED_BAR)

    if in_u2 is None:
        screen = "unknown"
    elif red_text is not None and (in_u2 or red_text):
        screen = "ultima2"
    else:
        screen = "towns-menu"

    if changed > 100 and frac > 0.12:
        screen = "splash"

    return {
        "screen": screen,
        "pulse": {
            "changed_samples": changed,
            "splash_colour_share": {k: round(v, 3) for k, v in shares.items()},
        },
        "yellow_bar": {"in_ultima2": in_u2},
        "red_bar": {"has_text": red_text, "dominant_share": round(red_flat, 4)},
        "framebuffer": [w, h],
    }


def main():
    info = detect()
    if "--json" in sys.argv:
        print(json.dumps(info, indent=2))
        return 0

    print("screen : %s" % info["screen"])
    p = info["pulse"]
    print("pulse  : %d changed samples, splash colours %s"
          % (p["changed_samples"], p["splash_colour_share"]))
    print("yellow : in_ultima2=%s" % info["yellow_bar"]["in_ultima2"])
    print("red    : has_text=%s (dominant %.1f%%)"
          % (info["red_bar"]["has_text"], info["red_bar"]["dominant_share"] * 100))

    if info["screen"] == "splash":
        print("=> the pulsating circle is animating, this is the title splash")
    elif info["screen"] == "ultima2":
        print("=> in Ultima II")
    elif info["screen"] == "towns-menu":
        print("=> TownsOS launcher, ULTIMA ][ is icon 2 at vm (199,179)")
    return 0


if __name__ == "__main__":
    sys.exit(main())
