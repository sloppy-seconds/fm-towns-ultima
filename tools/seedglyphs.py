#!/usr/bin/env python3
"""seedglyphs.py - build the screen glyph table from text whose meaning is known.

WHY THIS SHAPE. Labelling a whole panel at once from an assumed word list failed: it produced 25 "collisions"
where two different letters shared a bitmap, which is impossible for a real font and meant the word list was
wrong about which line held which word.

So this tool labels ONE word at a time, from ONE line, and refuses to add an entry that contradicts an existing
one. A contradiction is reported rather than written, because it means the caller's assumption is wrong, not
that the font is odd.

The seed word is STRENGTH on the stats panel, which is known three ways: it is the first stat in the record,
its value reads 11 and the character's STRENGTH is 11, and it is 8 letters in a panel of 14-glyph lines.

Usage:
    python3 tools/seedglyphs.py --word STRENGTH --line 0 --panel stats
    python3 tools/seedglyphs.py --read stats
"""

import argparse
import importlib.util
import json
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent
spec = importlib.util.spec_from_file_location("u2read", HERE / "u2read.py")
u2 = importlib.util.module_from_spec(spec)
spec.loader.exec_module(u2)


def add_word(img, panel, line, word, dry_run=False):
    """Label the letters of `word` from one panel line. Refuses contradictions."""
    box = u2.PANELS[panel]
    lines = u2.text_rows(img, box)
    if line >= len(lines):
        raise SystemExit(f"panel {panel} has {len(lines)} lines, no line {line}")
    y0, y1 = lines[line]
    runs = [g for g in u2.glyph_runs_ink(img, y0, y1, box) if g[3] >= 7]
    if len(runs) < len(word):
        raise SystemExit(f"line {line} has {len(runs)} letter-width runs, need {len(word)} for {word!r}")
    table = u2.load_glyphs()
    added, contradicted = [], []
    for (a, b, rows, w), ch in zip(runs[: len(word)], word):
        k = u2.cell_key(rows)
        have = table.get(k)
        if have is None:
            added.append((ch, a))
            if not dry_run:
                table[k] = ch
        elif have != ch:
            contradicted.append((have, ch, a))
    return added, contradicted, len(runs) - len(word)


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--word", help="a word whose text on screen is known")
    ap.add_argument("--line", type=int, default=0)
    ap.add_argument("--panel", default="stats")
    ap.add_argument("--read", metavar="PANEL", help="decode a panel using the current table")
    ap.add_argument("--image", help="use this screenshot instead of a fresh one")
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()

    src = Path(args.image) if args.image else u2.grab()
    img = u2.Image.open(src).convert("RGB")
    print(f"# {src}")

    if args.word:
        added, contradicted, extra = add_word(img, args.panel, args.line, args.word, args.dry_run)
        print(f"added {len(added)} glyphs: {''.join(c for c, _ in added)}")
        print(f"{extra} trailing run(s) on the line, not part of the word")
        for have, want, x in contradicted:
            print(f"CONTRADICTION at x={x}: the table says {have!r}, {args.word!r} says {want!r}")
        if contradicted:
            print("nothing written: a contradiction means the word is not what is on that line")
            return 1
        if not args.dry_run:
            u2.save_glyphs()
        return 0

    if args.read:
        u2.load_glyphs()
        for text, unknown in u2.read_panel(img, args.read):
            print(text + (f"   [{unknown} unknown]" if unknown else ""))
        return 0

    ap.print_help()
    return 0


if __name__ == "__main__":
    sys.exit(main())
