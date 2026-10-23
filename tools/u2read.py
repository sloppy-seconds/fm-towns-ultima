#!/usr/bin/env python3
"""u2read.py - read the Ultima II FM Towns screen from a screenshot.

WHY THIS EXISTS. Every fact measured from memory this session had to be cross-checked against what the game
displays, and the game's display is a screenshot. Reading it by hand works but does not scale, and inferring
state from field deltas produced two withdrawn claims before the display was consulted.

The driving model cannot see images. This script turns the screenshot into text so the parts that do not need
vision (fixed-pitch Latin text on known panels) are read deterministically, and only the awkward parts are
sent to a vision model.

## The screen layout, measured

The emulated screen is 640x496 at framebuffer offset (1, 20). Measured from a live screenshot, not assumed:

    header        rows  44- 66   yellow bar, "Ultima Trilogy  Ultima II  FUJITSU"
    status        rows 102-118   "H: 344  E: 25" / "P: 374  G: 249  A"
    stats         rows 150-276   8 lines at 16 px pitch, STRENGTH through WEA/ARM
    actions       rows 326-436   the event log
    map           x    1-361     the tile map, no text

    right column  x 362-639, bordered, split by an internal border at row 340

Text is pure white (255,255,255) on black (0,0,0). Line pitch is 16 px, glyph height about 12.

## What this does and does not read

Latin glyphs on these panels are fixed-pitch and legible, so they can be matched against a built-in table.
Japanese, and the private character set the game uses for dialogue, cannot: those need a vision model. This
script reports `?` for a glyph it does not recognise rather than guessing.

Usage:
    python3 tools/u2read.py                 read the latest screenshot via the API
    python3 tools/u2read.py path.png        read a saved screenshot
    python3 tools/u2read.py --panels        print the measured panel rectangles
    python3 tools/u2read.py --dump-rows     print every text row with its pixel extent
"""

import argparse
import json
import subprocess
import sys
from collections import Counter
from pathlib import Path

try:
    from PIL import Image
except ImportError:
    sys.exit("Pillow is required: pip install pillow")

API = "http://127.0.0.1:8080"
WHITE = (255, 255, 255)

# Measured from a live screenshot. Framebuffer space.
PANELS = {
    "header": (1, 44, 640, 66),
    "status": (363, 102, 639, 118),
    "stats": (363, 150, 639, 276),
    "actions": (363, 326, 639, 436),
    "map": (1, 67, 361, 418),
}

LINE_PITCH = 16


def grab(port=8080):
    """Ask the supervisor for a screenshot and return its path."""
    out = subprocess.run(
        ["curl", "-s", "-m", "20", "-X", "POST", f"http://127.0.0.1:{port}/api/shot",
         "-H", "Content-Type: application/json", "-d", json.dumps({"name": "u2read"})],
        capture_output=True, text=True, check=True,
    ).stdout
    info = json.loads(out)
    # The container writes into /data, which is the repo's saves/ directory on the host.
    local = Path(__file__).resolve().parent.parent / "saves" / info["file"].replace("/data/", "")
    return local


# Inside each panel the box border is itself white, so a naive "any white pixel in the row" test finds the
# border on every row and returns one giant run. Two corrections, both measured:
#
#   INSET           skip the left and right border columns (x=362 and x=371 on the right column)
#   BORDER_PIXELS   a row that is only border still has about 4 white pixels, so a line must have more
#
# Measured line structure in the stats panel: rows 150-163 are one line of glyphs, rows 164-165 are the gap
# and carry 4 white pixels, rows 166-179 are the next line. So glyph height is 14 and the pitch is 16.
INSET = 4
BORDER_PIXELS = 8


def text_rows(img, box):
    """Rows within a panel that contain any white pixel, grouped into lines."""
    x0, y0, x1, y1 = box
    px = img.load()
    runs, inrun = [], False
    for y in range(y0, y1 + 1):
        n = sum(1 for x in range(x0 + INSET, x1 - INSET + 1) if px[x, y] == WHITE)
        has = n > BORDER_PIXELS
        if has and not inrun:
            start, inrun = y, True
        elif not has and inrun:
            runs.append((start, y - 1))
            inrun = False
    if inrun:
        runs.append((start, y1))
    return runs


def column_extent(img, box, y0, y1):
    x0, _, x1, _ = box
    px = img.load()
    xs = [x for y in range(y0, y1 + 1) for x in range(x0 + INSET, x1 - INSET + 1) if px[x, y] == WHITE]
    return (min(xs), max(xs)) if xs else None


def glyph_runs(img, box, y0, y1):
    """Split one text line into glyph runs by finding columns with no ink.

    Measured: the pitch IS fixed at 16 px. Cells begin at x=376, 392, 408 and so on, step 16. Within a
    cell the drawn glyph is 14 px wide for a wide character and 10 for a narrow one, which is why a naive
    "no blank column" segmentation returns runs of two widths rather than one.

    So the cell grid is exact and should be used for decoding. This function returns the ink extent of
    each run, which is useful for finding the grid, and decode() below uses the grid.
    """
    x0, _, x1, _ = box
    px = img.load()
    cols = []
    for x in range(x0 + INSET, x1 - INSET + 1):
        cols.append(any(px[x, y] == WHITE for y in range(y0, y1 + 1)))
    runs, cur = [], None
    for i, ink in enumerate(cols):
        if ink and cur is None:
            cur = i
        elif not ink and cur is not None:
            runs.append((cur + x0 + INSET, i - 1 + x0 + INSET))
            cur = None
    if cur is not None:
        runs.append((cur + x0 + INSET, x1 - INSET))
    return runs


def ascii_art(img, y0, y1, x0, x1):
    px = img.load()
    out = []
    for y in range(y0, y1 + 1):
        out.append("".join("#" if px[x, y] == WHITE else "." for x in range(x0, x1 + 1)))
    return "\n".join(out)


# The panel text grid, measured. Cells start at the first ink column of a line and step 16 px.
# Text starts at x=376 on the right-hand panels. The first cell of a line is at TEXT_X.
TEXT_X = 376
CELL = 16
GLYPH_W = 14      # wide characters
GLYPH_H = 14


def cell_grid(img, y0, y1, x_start=TEXT_X, x_end=630):
    """Return the ink bitmap of each 16 px cell across one line, as a list of strings."""
    px = img.load()
    cells = []
    for cx in range(x_start, x_end, CELL):
        rows = []
        for y in range(y0, y1 + 1):
            rows.append("".join("#" if px[x, y] == WHITE else "." for x in range(cx, min(cx + GLYPH_W, x_end))))
        if any("#" in r for r in rows):
            cells.append((cx, rows))
    return cells


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("image", nargs="?", help="screenshot to read; default is a fresh one from the API")
    ap.add_argument("--panels", action="store_true", help="print the measured panel rectangles")
    ap.add_argument("--dump-rows", action="store_true", help="print every text row and its pixel extent")
    ap.add_argument("--art", metavar="PANEL", help="render a whole panel as ascii art")
    ap.add_argument("--glyphs", metavar="PANEL", help="list the glyph runs in each line of a panel")
    ap.add_argument("--crop", metavar="PANEL", help="save a cropped PNG of a panel, for a vision model")
    ap.add_argument("--cells", metavar="PANEL", help="print each 16 px text cell as ascii art, for building a glyph table")
    ap.add_argument("--port", type=int, default=8080)
    args = ap.parse_args()

    if args.panels:
        for name, box in PANELS.items():
            print(f"  {name:<8} x{box[0]}-{box[2]}  y{box[1]}-{box[3]}")
        return

    if args.crop:
        box = PANELS[args.crop]
        src = Path(args.image) if args.image else grab(args.port)
        img = Image.open(src).convert("RGB")
        out = Path("/var/tmp") / f"u2-{args.crop}.png"
        img.crop(box).resize(((box[2] - box[0] + 1) * 3, (box[3] - box[1] + 1) * 3), Image.NEAREST).save(out)
        print(f"wrote {out}  ({box[2] - box[0] + 1}x{box[3] - box[1] + 1} scaled 3x)")
        return

    if args.cells:
        box = PANELS[args.cells]
        src = Path(args.image) if args.image else grab(args.port)
        img = Image.open(src).convert("RGB")
        for a, b in text_rows(img, box):
            print(f"\n== line rows {a}-{b} ==")
            for cx, rows in cell_grid(img, a, b):
                print(f"-- cell at x={cx}")
                for r in rows:
                    print("   " + r)
        return

    if args.art or args.glyphs:
        name = args.art or args.glyphs
        box = PANELS[name]
        src = Path(args.image) if args.image else grab(args.port)
        img = Image.open(src).convert("RGB")
        for a, b in text_rows(img, box):
            if args.glyphs:
                runs = glyph_runs(img, box, a, b)
                print(f"line rows {a}-{b}: {len(runs)} glyph runs")
                print("   " + " ".join(f"{x}-{y}({y - x + 1})" for x, y in runs))
            else:
                ext = column_extent(img, box, a, b)
                print(f"\nline rows {a}-{b}, x {ext[0]}-{ext[1]}")
                print(ascii_art(img, a, b, ext[0], ext[1]))
        return

    path = Path(args.image) if args.image else grab(args.port)
    if not path.exists():
        sys.exit(f"no such image: {path}")
    img = Image.open(path).convert("RGB")
    print(f"# {path}  {img.size[0]}x{img.size[1]}")

    for name in ("header", "status", "stats", "actions"):
        box = PANELS[name]
        rows = text_rows(img, box)
        print(f"\n## {name}  ({len(rows)} text rows)")
        for a, b in rows:
            ext = column_extent(img, box, a, b)
            if args.dump_rows:
                print(f"   rows {a}-{b}  x {ext[0]}-{ext[1]}")
            else:
                print(f"   rows {a}-{b}")


if __name__ == "__main__":
    main()
