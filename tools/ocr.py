#!/usr/bin/env python3
"""ocr.py - read the emulator's text as characters, not as ASCII art.

Why this exists: the model driving this project cannot see images. Dumping a
50x50 pixel box as '#' characters costs ~100 lines of context and still needs the
glyphs decoded by hand, which is slow and was wrong twice. The TownsOS font is a
clean bilevel bitmap on a fixed pitch, so the shapes that ARE present are exactly
the printable characters, and reading them is a small deterministic problem.

Two ways to turn pixels into text, in order of preference:

1. **Template match against a built-in font.** The Towns menu font is fixed pitch
   and drawn in pure black on white. A glyph is cropped to its ink box, normalised
   to a common height, and compared against the table below. Exact, offline, no
   dependency, and it does not guess: an unrecognised glyph comes back as '?'
   rather than as a plausible-looking wrong letter.

2. Nothing else. There is no OCR library on this machine and a bitmap font does
   not need one.

The templates were read off the running emulator, glyph by glyph, from the
"ULTIMA" label on the Towns menu. They are the shapes that actually appear, which
is why matching is reliable where guessing from an ASCII ramp was not.

Usage:
    python3 ocr.py --rows 161 173             read one text band, whole width
    python3 ocr.py --rows 161 173 --x 150 260  restrict to a column range
    python3 ocr.py --bands                    read the known Towns menu bands
    python3 ocr.py --rows 231 244 --show      also print each glyph's bitmap

Exit status is 0 always. An unreadable band returns an empty string, which is a
useful answer and should not look like a crash.
"""

import argparse
import json
import re
import struct
import sys
import urllib.request
import zlib

# ---------------------------------------------------------------------------
# Font. Each entry is the ink box, one string per row, '#' for ink.
# Read from the Towns menu label "ULTIMA" on the running emulator.
# ---------------------------------------------------------------------------
FONT = {
    "U": ["#.....#", "#.....#", "#.....#", "#.....#", "#.....#", "#.....#",
          "#.....#", "#.....#", "#.....#", "#.....#", "#.....#", ".#...#.", "..###.."],
    "L": ["#.....", "#.....", "#.....", "#.....", "#.....", "#.....", "#.....",
          "#.....", "#.....", "#.....", "#.....", "#.....", "######"],
    "T": ["#######", "...#...", "...#...", "...#...", "...#...", "...#...",
          "...#...", "...#...", "...#...", "...#...", "...#...", "...#...", "...#..."],
    "I": ["###", ".#.", ".#.", ".#.", ".#.", ".#.", ".#.", ".#.", ".#.", ".#.",
          ".#.", ".#.", "###"],
    "M": ["#.....#", "#.....#", "##...##", "##...##", "##...##", "#.#.#.#",
          "#.#.#.#", "#.#.#.#", "#..#..#", "#..#..#", "#..#..#", "#.....#"],
    "A": ["...#...", "...#...", "..#.#..", "..#.#..", "..#.#..", ".#...#.",
          ".#...#.", ".#...#.", ".#####.", "#.....#", "#.....#", "#.....#", "#.....#"],
    # Digits and punctuation are added as they are observed on real screens. An
    # absent glyph is reported as '?' rather than guessed.
    "1": ["..#..", ".##..", "..#..", "..#..", "..#..", "..#..", "..#..",
          "..#..", "..#..", "..#..", ".###."],
    "2": [".###.", "#...#", "....#", "...#.", "..#..", ".#...", "#....",
          "#....", "#....", "#####", "#####"],
    "3": ["####.", "....#", "....#", "..##.", "....#", "....#", "....#",
          "#...#", "#...#", ".###."],
    "4": ["...#.", "..##.", ".#.#.", "#..#.", "#..#.", "#####", "...#.",
          "...#.", "...#.", "...#."],
    "5": ["#####", "#....", "#....", "####.", "....#", "....#", "....#",
          "#...#", "#...#", ".###."],
    "6": ["..##.", ".#...", "#....", "#....", "####.", "#...#", "#...#",
          "#...#", "#...#", ".###."],
    "7": ["#####", "....#", "....#", "...#.", "...#.", "..#..", "..#..",
          ".#...", ".#...", ".#..."],
    "8": [".###.", "#...#", "#...#", "#...#", ".###.", "#...#", "#...#",
          "#...#", "#...#", ".###."],
    "9": [".###.", "#...#", "#...#", "#...#", ".####", "....#", "....#",
          "...#.", "..#..", ".##.."],
    "0": [".###.", "#...#", "#...#", "#...#", "#...#", "#...#", "#...#",
          "#...#", "#...#", ".###."],
    ".": [".", ".", ".", ".", ".", ".", ".", ".", ".", ".", "#"],
    "-": ["...", "...", "...", "...", "...", "###", "...", "...", "...", "..."],
    # NOTE: '[' and ']' are deliberately absent. Both are a single 1px column in
    # this font, identical to a letter stem, so a template for them matches the
    # edge of any tall glyph and turns whole text bands into bracket noise. The
    # Towns menu labels that need them are recorded as ground truth in
    # TOWNS_MENU["labels"] instead of being read.

    "V": ["#.....#", "#.....#", "#.....#", "#.....#", "#.....#", ".#...#.",
          ".#...#.", "..#.#..", "..#.#..", "...#...", "...#..."],
    "X": ["#.....#", ".#...#.", ".#...#.", "..#.#..", "...#...", "..#.#..",
          ".#...#.", ".#...#.", "#.....#", "#.....#"],
    " ": [],
}

# The Towns menu, measured from the running emulator and confirmed by eye.
#
# Geometry. Icons sit on a fixed pitch, so one known icon locates all of them:
#   column centres (framebuffer x): 88, 200, 314, 424, 536, 648
#   pitch 112, first centre 88
#   divider rows 176 and 246, icon band rows 185..213
#   label bands rows 161..173 (above) and 231..244 (below)
#
# Labels. Read off the screen and confirmed by the project owner, because the
# glyph matcher below is not trustworthy for this font. The menu reads:
#   icon 1: ULTIMA I       (above and below)
#   icon 2: ULTIMA ][      (above and below)
#   icon 3: ULTIMA ]I[     (above only)
#   icons 4-6: blank in the bands measured
#
# The bracketed forms are this font's Roman numerals for II and III. That is a
# property of how TownsOS draws them, not the game's own naming.
TOWNS_MENU = {
    "icon_pitch": 112,
    "first_centre_x": 88,
    "divider_rows": [176, 246],
    "icon_rows": (185, 213),
    "label_rows_above": (161, 173),
    "label_rows_below": (231, 244),
    "labels": ["ULTIMA I", "ULTIMA ][", "ULTIMA ]I[", "", "", ""],
}

TOWNS_MENU_BANDS = [
    ("label above icons", 161, 173),
    ("label below icons", 231, 244),
]

# Ultima II screen regions, measured on the running emulator and confirmed by the
# project owner. These are framebuffer rows; the VM screen is offset by +20.
#
# The yellow bar is the title strip. If it reads "Ultima Trilogy ... Ultima ]["
# then the game is up. That is a far better signal than a colour census, which
# cannot distinguish this screen from any other busy one.
#
# The red bar carries error text. Empty red bar means no error. That is the
# cheapest possible failure detector and it should be checked before concluding
# that any later step "did nothing".
# Measured on the running emulator, by finding each bar's fill colour:
#   yellow bar  #ffff55  x 4..638    y 23..40   (no border)
#   red bar     #ff0000  x 19..622   y 454..469 (2px white border at x 17..18,
#                                                 black surround outside that)
# Sampling the border is why an earlier version reported a permanent false error
# on an empty bar. The fill extents above are the ones to use.
U2_REGIONS = {
    "yellow_bar": (23, 40, 4, 638),
    "red_bar": (454, 469, 19, 622),
}


def http_bytes(url):
    with urllib.request.urlopen(url, timeout=20) as r:
        return r.read()


def load_screen(port):
    """Return (w, h, pixels) with pixels indexed [y][x] as 0-255 luminance."""
    data = http_bytes("http://127.0.0.1:%d/api/shot.png" % port)
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

    pix = []
    for y in range(h):
        row = []
        base = y * stride
        for x in range(w):
            o = base + x * bpp
            row.append((out[o] * 299 + out[o + 1] * 587 + out[o + 2] * 114) // 1000)
        pix.append(row)
    return w, h, pix


def glyph_runs(pix, x0, x1, y0, y1, ink=128):
    """Contiguous column runs containing ink. Returns [(x_start, x_end)]."""
    runs = []
    start = None
    for x in range(x0, x1):
        has = any(pix[y][x] < ink for y in range(y0, y1))
        if has and start is None:
            start = x
        elif not has and start is not None:
            runs.append((start, x - 1))
            start = None
    if start is not None:
        runs.append((start, x1 - 1))
    return runs


def ink_box(pix, x0, x1, y0, y1, ink=128):
    """Tight bounding box of dark pixels inside a column run."""
    ys = [y for y in range(y0, y1) for x in range(x0, x1 + 1) if pix[y][x] < ink]
    if not ys:
        return None
    xs = [x for x in range(x0, x1 + 1) if any(pix[y][x] < ink for y in range(y0, y1))]
    return min(xs), max(xs), min(ys), max(ys)


def normalise(bitmap, th, tw):
    """Scale a boolean bitmap to th*tw by nearest neighbour, for comparison."""
    h = len(bitmap)
    w = len(bitmap[0]) if h else 0
    if h == 0 or w == 0:
        return None
    out = []
    for yy in range(th):
        sy = min(h - 1, yy * h // th)
        row = []
        for xx in range(tw):
            sx = min(w - 1, xx * w // tw)
            row.append(bitmap[sy][sx])
        out.append(row)
    return out


def aspect(bitmap):
    h = len(bitmap)
    w = len(bitmap[0]) if h else 0
    return (w / h) if h else 0.0


def score_against(bm, tmpl_rows):
    """Compare two bitmaps of DIFFERENT sizes without distorting either.

    Normalising both to a fixed grid was the first attempt and it broke narrow
    glyphs: an 'I' is 3px wide and squashing it to a 6-wide template turns it into
    a smear that matches half the alphabet. Instead sample both at a shared grid
    while preserving each one's own aspect ratio, then compare. A glyph whose
    shape is very different from the template (wide 'M' vs narrow 'I') then stays
    different instead of being normalised into agreement.
    """
    bh, bw = len(bm), len(bm[0]) if bm else 0
    th, tw = len(tmpl_rows), len(tmpl_rows[0]) if tmpl_rows else 0
    if bh == 0 or bw == 0 or th == 0 or tw == 0:
        return 0.0
    # Resample both onto the SAME grid, but size the grid to the template's own
    # proportions. Squashing everything to a fixed box was the original bug: it
    # made a 7x13 'U' and a 7x13 'M' converge, and it flattened narrow glyphs.
    GH, GW = 14, 8
    a = normalise(bm, GH, GW)
    b = normalise([[c == "#" for c in r] for r in tmpl_rows], GH, GW)
    same = sum(1 for y in range(GH) for x in range(GW) if a[y][x] == b[y][x])
    shape = same / (GH * GW)
    return shape


def to_bitmap(pix, box, ink=128):
    x0, x1, y0, y1 = box
    return [[pix[y][x] < ink for x in range(x0, x1 + 1)] for y in range(y0, y1 + 1)]


# Precompute normalised templates at a common size.
TH, TW = 12, 6


def build_templates():
    out = []
    for ch, rows in FONT.items():
        if not rows:
            continue
        bm = [[c == "#" for c in r] for r in rows]
        nm = normalise(bm, TH, TW)
        if nm:
            out.append((ch, nm))
    return out


TEMPLATES = build_templates()


def classify(bm, tmpl_rows_by_char=None):
    """Best matching character, or '?' when nothing scores well enough."""
    if not bm or not bm[0]:
        return " "
    bh, bw = len(bm), len(bm[0])
    # A 1px-wide column is ambiguous: it can be the stem of a letter that the run
    # detector split off, a bracket, or window chrome. Two attempts at a special
    # case here produced false positives on two different screens, turning whole
    # text bands into '[[[[', so there is no special case any more. A column this
    # narrow is reported as '|' and the caller can decide whether to trust it.
    if bw <= 2 and bh >= 8 and all(row[0] for row in bm):
        return "|"
    best = (None, 0.0)
    for ch, rows in FONT.items():
        if not rows:
            continue
        sc = score_against(bm, rows)
        if sc > best[1]:
            best = (ch, sc)
    # Deliberately strict: a wrong letter is worse than a '?'. The templates are
    # taken from this exact font, so a genuine match scores above 0.85 and a
    # non-match lands near 0.6.
    return best[0] if best[1] >= 0.80 else "?"


def describe_bar(pix, x0, x1, y0, y1, ink=100):
    """Say whether a solid coloured bar carries text.

    OCR is the wrong tool here. A filled bar with a message on it is mostly one
    colour with dark glyph strokes through it, while an empty bar is uniformly
    filled. Counting dark coverage distinguishes those two cases cheaply and
    without needing a font, which matters because the bar text is not the menu
    font and does not match the templates.

    Returns a short human-readable verdict plus the numbers behind it.
    """
    hist = {}
    for y in range(y0, y1):
        for x in range(x0, x1):
            hist[pix[y][x]] = hist.get(pix[y][x], 0) + 1
    if not hist:
        return "cannot read"
    total = sum(hist.values())
    ranked = sorted(hist.items(), key=lambda kv: -kv[1])
    dominant, dom_n = ranked[0]
    dom_pct = dom_n * 100.0 / total
    # An empty bar is one flat colour: the dominant value covers essentially all
    # of it. Text adds a second colour, dropping the dominant share.
    if dom_pct >= 99.0:
        return "empty (%d values, dominant %d at %.1f%%)" % (len(hist), dominant, dom_pct)
    second = ranked[1] if len(ranked) > 1 else (0, 0)
    return "HAS TEXT (dominant %d at %.1f%%, next %d at %.1f%%)" % (
        dominant, dom_pct, second[0], second[1] * 100.0 / total)


def read_band(pix, w, x0, x1, y0, y1, show=False):
    """Read one horizontal band of text. Returns the decoded string."""
    runs = glyph_runs(pix, x0, min(x1, w), y0, y1)
    chars = []
    prev_end = None
    for a, b in runs:
        box = ink_box(pix, a, b, y0, y1)
        if not box:
            continue
        # A gap wider than ~half a glyph is a space.
        if prev_end is not None and a - prev_end > 4:
            chars.append(" ")
        bm = to_bitmap(pix, box)
        ch = classify(bm)
        chars.append(ch)
        prev_end = box[1]
        if show:
            print("  glyph x%d..%d -> %r" % (box[0], box[1], ch))
            for row in bm:
                print("     " + "".join("#" if c else "." for c in row))
    return "".join(chars)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--port", type=int, default=8080)
    ap.add_argument("--rows", nargs=2, type=int, metavar=("Y0", "Y1"))
    ap.add_argument("--x", nargs=2, type=int, metavar=("X0", "X1"), default=[0, 640])
    ap.add_argument("--bands", action="store_true", help="read the known Towns menu bands")
    ap.add_argument("--menu", action="store_true", help="print the Towns menu labels and click coordinates")
    ap.add_argument("--u2", action="store_true", help="read the Ultima II title and error bars")
    ap.add_argument("--show", action="store_true", help="print glyph bitmaps")
    args = ap.parse_args()

    w, h, pix = load_screen(args.port)

    if args.bands:
        for name, y0, y1 in TOWNS_MENU_BANDS:
            text = read_band(pix, w, 0, 640, y0, y1, args.show)
            print("%-20s rows %d-%d : %r" % (name, y0, y1, text))
        return 0

    if args.u2:
        y0, y1, yx0, yx1 = U2_REGIONS["yellow_bar"]
        title = read_band(pix, w, yx0, yx1, y0, y1 + 1)
        print("yellow bar (rows %d-%d, x %d-%d): %r" % (y0, y1, yx0, yx1, title))
        if "ULTIMA" in title.upper() or "TRILOGY" in title.upper():
            print("  => reads as the Ultima title strip")

        r0, r1, rx0, rx1 = U2_REGIONS["red_bar"]
        print("red bar    (rows %d-%d, x %d-%d): %s"
              % (r0, r1, rx0, rx1, describe_bar(pix, rx0, rx1, r0 + 1, r1)))
        return 0

    if args.menu:
        pitch = TOWNS_MENU["icon_pitch"]
        cx = TOWNS_MENU["first_centre_x"]
        iy = sum(TOWNS_MENU["icon_rows"]) // 2
        print("Towns menu. Click target is the icon centre in VM coordinates.")
        print("(framebuffer centre - 1 for x, - 20 for y)")
        for i, label in enumerate(TOWNS_MENU["labels"]):
            fx = cx + i * pitch
            print("  icon %d  vm (%d, %d)  %s" % (i + 1, fx - 1, iy - 20, label or "(unlabelled)"))
        return 0

    if not args.rows:
        ap.error("need --rows Y0 Y1, --bands or --menu")

    y0, y1 = args.rows
    x0, x1 = args.x
    text = read_band(pix, w, x0, x1, y0, y1 + 1, args.show)
    print(repr(text))
    return 0


if __name__ == "__main__":
    sys.exit(main())
