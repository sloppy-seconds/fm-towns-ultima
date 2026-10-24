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


# ---------------------------------------------------------------------------
# glyph table: bitmap -> character
# ---------------------------------------------------------------------------
#
# The font is fixed-pitch and the same everywhere, so one table serves every panel. It is keyed by the cell
# bitmap rather than by position, so it does not care where on screen a character appears.
#
# SEEDED BY HAND from a screenshot whose text is known from the game's own display: the status bar reads
# "P: 371" and the food field reads 37150, so P, :, space and the digits can be pinned without guessing.

GLYPH_TABLE = {}
GLYPH_FILE = Path(__file__).resolve().parent.parent / "tools" / "glyphs.json"


def cell_key(rows):
    """A stable string for a glyph bitmap, so the table survives font rendering changes in the reader.

    Width is part of the key. Leaving it out made S and C collide, which showed up as INTELLIGENCE decoding to
    "INTELLIGENCE" with two letters swapped, and WISDOM decoding to WICDOM. Trailing dots are trimmed because a
    proportional glyph's bitmap is as wide as its ink, so the trimming is safe once width is recorded.
    """
    return "%d:%s" % (len(rows[0]) if rows else 0, "\n".join(rows))


def load_glyphs():
    if GLYPH_FILE.exists():
        GLYPH_TABLE.update(json.loads(GLYPH_FILE.read_text()))
    return GLYPH_TABLE


def save_glyphs():
    GLYPH_FILE.write_text(json.dumps(GLYPH_TABLE, indent=0, sort_keys=True))


# THE STATUS BAR FONT IS PROPORTIONAL, NOT FIXED-PITCH. This was measured and it corrects the cell-grid
# assumption the panel reader started with: on the status line the runs are 14, 1, 12, 11 and 12 px wide, so
# "P" and ":" do not share a 16 px cell. Glyphs therefore have to be cut at ink boundaries, and the word space
# has to be inferred from the gap width.
#
# So a glyph is identified by its bitmap AND is decoded without its width stored separately: the key includes
# the bitmap only, and the character is whatever that shape is.
#
# A gap wider than this many blank columns is a space. Measured: the gap between words is 20 px, inside a word
# it is 2 to 5 px.

SPACE_GAP = 9


def glyph_runs_ink(img, y0, y1, box=None):
    """Split a text line at blank columns. Returns [(x_start, x_end, rows, width)]."""
    box = box or PANELS["actions"]
    x0, _, x1, _ = box
    px = img.load()
    ink = [any(px[x, y] == WHITE for y in range(y0, y1 + 1)) for x in range(x0, 640)]
    out, cur = [], None
    for i, on in enumerate(ink):
        if on and cur is None:
            cur = i
        elif not on and cur is not None:
            out.append((cur + x0, i - 1 + x0, i - cur))
            cur = None
    if cur is not None:
        out.append((cur + x0, 639, len(ink) - cur))
    glyphs = []
    for a, b, w in out:
        rows = []
        for y in range(y0, y1 + 1):
            rows.append("".join("#" if px[x, y] == WHITE else "." for x in range(a, b + 1)))
        glyphs.append((a, b, rows, w))
    return glyphs


def read_line(img, y0, y1, box=None):
    """Decode one text line to a string. Unrecognised glyphs become '?' and are counted."""
    out, unknown = [], 0
    prev_end = None
    for a, b, rows, w in glyph_runs_ink(img, y0, y1, box):
        if prev_end is not None and a - prev_end - 1 >= SPACE_GAP:
            out.append(" ")
        prev_end = b
        ch = GLYPH_TABLE.get(cell_key(rows))
        if ch is None:
            out.append("?")
            unknown += 1
        else:
            out.append(ch)
    return "".join(out), unknown


def read_panel(img, panel):
    """Every text line in a panel, as strings."""
    box = PANELS[panel]
    lines = []
    for y0, y1 in text_rows(img, box):
        text, unknown = read_line(img, y0, y1, box)
        if text.strip():
            lines.append((text, unknown))
    return lines


def cmd_read(args):
    load_glyphs()
    box = PANELS[args.panel]
    src = Path(args.image) if args.image else grab(args.port)
    img = Image.open(src).convert("RGB")
    for text, unknown in read_panel(img, args.panel):
        print(text + ("   [%d unknown]" % unknown if unknown else ""))
    if not GLYPH_TABLE:
        print("\nthe glyph table is empty: seed it with `--teach <panel>`")


def cmd_teach(args):
    """Print each unknown cell's bitmap so it can be added to the table by hand."""
    load_glyphs()
    box = PANELS[args.teach]
    src = Path(args.image) if args.image else grab(args.port)
    img = Image.open(src).convert("RGB")
    for y0, y1 in text_rows(img, box):
        for a, b, rows, w in glyph_runs_ink(img, y0, y1, box):
            k = cell_key(rows)
            if k in GLYPH_TABLE:
                continue
            print(f"-- glyph at x={a}-{b} width {w}")
            print("\n".join(rows))
            print()


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("image", nargs="?", help="screenshot to read; default is a fresh one from the API")
    ap.add_argument("--panels", action="store_true", help="print the measured panel rectangles")
    ap.add_argument("--dump-rows", action="store_true", help="print every text row and its pixel extent")
    ap.add_argument("--art", metavar="PANEL", help="render a whole panel as ascii art")
    ap.add_argument("--glyphs", metavar="PANEL", help="list the glyph runs in each line of a panel")
    ap.add_argument("--crop", metavar="PANEL", help="save a cropped PNG of a panel, for a vision model")
    ap.add_argument("--cells", metavar="PANEL", help="print each 16 px text cell as ascii art, for building a glyph table")
    ap.add_argument("--read", metavar="PANEL", dest="panel", help="decode a panel to text using the glyph table")
    ap.add_argument("--teach", metavar="PANEL", help="print unknown cells so they can be added to the table")
    ap.add_argument("--port", type=int, default=8080)
    args = ap.parse_args()

    if args.panel:
        cmd_read(args)
        return

    if args.teach:
        cmd_teach(args)
        return

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
