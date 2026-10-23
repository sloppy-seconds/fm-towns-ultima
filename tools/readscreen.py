#!/usr/bin/env python3
"""readscreen.py - crop a region of the emulator screenshot and print it as text.

Why this exists: the model driving this project cannot see images. `mode=ascii`
from the supervisor gives a 64x40 luminance ramp for the whole screen, which is
enough for layout but not for reading a label, a menu entry, or a single icon.
`mode=text` thresholds everything to '#', because it is built for a text-mode
screen and not for graphics.

This prints ONE region at ONE pixel per character, so a 50x50 box shows a glyph
at a size that can actually be identified. That is the difference between "the
colour census changed" and "I can see which icon the pointer is on".

It also reports the pointer position, so a reading is always attached to where
the mouse was when it was taken.

Usage:
    python3 readscreen.py                 50x50 box centred on the pointer
    python3 readscreen.py --at 195 150    50x50 box centred on a VM coordinate
    python3 readscreen.py --box 100 60 200 120      x y w h, framebuffer space
    python3 readscreen.py --scale 2       sample every Nth pixel of the whole screen

Coordinate note: the framebuffer is 1024x800 and the emulated screen is 640x496
in the top-left region. A VM coordinate (x, y) is at framebuffer (x + 1, y + 20).
Measured, not assumed. The +20 is a title bar.

Reads the screenshot through the supervisor HTTP API on the port given by
--port, default 8080.
"""

import argparse
import io
import json
import struct
import sys
import urllib.request
import zlib

RAMP = " .:-=+*#%@"


def http_json(url):
    with urllib.request.urlopen(url, timeout=20) as r:
        return json.load(r)


def http_bytes(url):
    with urllib.request.urlopen(url, timeout=20) as r:
        return r.read()


def decode_png(data):
    """Minimal PNG decoder for 8-bit RGB/RGBA. Returns (w, h, bpp, pixels)."""
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
    return w, h, bpp, out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--port", type=int, default=8080)
    ap.add_argument("--at", nargs=2, type=int, metavar=("VMX", "VMY"),
                    help="centre the box on this VM coordinate")
    ap.add_argument("--box", nargs=4, type=int, metavar=("X", "Y", "W", "H"),
                    help="explicit framebuffer box")
    ap.add_argument("--size", type=int, default=50, help="box side for --at")
    ap.add_argument("--scale", type=int, default=0, help="whole screen, sample every N")
    args = ap.parse_args()

    base = "http://127.0.0.1:%d" % args.port

    # Pointer position, so the reading is tied to where the mouse was.
    px = py = None
    try:
        log = http_json(base + "/api/log")
        for entry in log:
            line = entry.get("line", "")
            if "Last Known Raw Coord" in line:
                import re
                m = re.search(r"\((\d+),(\d+)\)", line)
                if m:
                    px, py = int(m.group(1)), int(m.group(2))
    except Exception:
        pass

    w, h, bpp, pix = decode_png(http_bytes(base + "/api/shot.png"))

    def lum(x, y):
        o = y * w * bpp + x * bpp
        return (pix[o] * 299 + pix[o + 1] * 587 + pix[o + 2] * 114) // 1000

    if args.scale:
        step = args.scale
        print("# whole screen %dx%d sampled every %d, 1 char per %d px" % (w, h, step, step))
        for y in range(0, h, step):
            row = "".join(RAMP[min(9, lum(x, y) * 10 // 256)] for x in range(0, w, step))
            print(row)
        return 0

    if args.box:
        bx, by, bw, bh = args.box
    elif args.at:
        # VM -> framebuffer is +1, +20. Measured, see the docstring.
        cx = args.at[0] + 1
        cy = args.at[1] + 20
        s = args.size
        bx, by, bw, bh = cx - s // 2, cy - s // 2, s, s
    else:
        if px is None:
            print("no pointer position known, pass --at or --box", file=sys.stderr)
            return 2
        s = args.size
        bx, by, bw, bh = px - s // 2, py - s // 2, s, s

    print("# box %d,%d %dx%d in framebuffer %dx%d" % (bx, by, bw, bh, w, h))
    if px is not None:
        print("# pointer at VM (%d,%d) = framebuffer (%d,%d)" % (px, py, px + 1, py + 20))
    print("# legend: '#' dark, '+' mid, '.' light, ' ' white")
    for y in range(by, by + bh):
        if not (0 <= y < h):
            continue
        row = ""
        for x in range(bx, bx + bw):
            if not (0 <= x < w):
                row += "?"
                continue
            l = lum(x, y)
            row += "#" if l < 70 else ("+" if l < 150 else ("." if l < 225 else " "))
        print("%4d %s" % (y, row))
    return 0


if __name__ == "__main__":
    sys.exit(main())
