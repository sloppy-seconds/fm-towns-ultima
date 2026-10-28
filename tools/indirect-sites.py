#!/usr/bin/env python3
"""tools/indirect-sites.py - which unresolved indirect transfers the captures resolve.

WHAT THIS IS FOR. `fmtownskit.recomp.discover` refuses to guess at an indirect
transfer, by design: it records the site and leaves the edges unresolved. The
runtime is what answers those, and this tool does the answering by asking every
capture which sites it observed transferring, and where to.

It is a standing check rather than a one-off because every future capture should
be asked the same question. Doing it by hand once produced a single resolved site
out of twenty-one, which is exactly the kind of figure that gets lost.

Usage
    python3 tools/indirect-sites.py                 report all captures against the sites
    python3 tools/indirect-sites.py --eval NAME=PATH  evaluate a specific program spec

Needs the decoder venv, because it loads fmtownskit:
    ./tools/decode-setup.sh --check

ADDRESS RULE. Captures report segment offsets. `discover` works in image offsets.
The difference is the 0x200 MP header, so  image = segment + 0x200. Getting that
backwards makes every site miss by a fixed amount and look simply unreachable.
"""

import argparse
import glob
import os
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DEFAULT_CAPTURES = os.path.join(ROOT, "saves", "analysis", "cfgdiff-*.txt")
HEADER = 0x200


def load_sites(image_name, seeds=()):
    """Indirect transfer sites, as image offsets, from the recompiler's own walk."""
    sys.path.insert(0, os.path.join(ROOT, "references", "vs-sr-dev"))
    try:
        from fmtownskit.recomp import discover
    except ImportError:
        raise SystemExit(
            "cannot import fmtownskit. Run ./tools/decode-setup.sh, or check that\n"
            "references/vs-sr-dev exists. This tool needs the decoder venv."
        )
    prog = discover.load(image_name, seeds=seeds, name=os.path.basename(image_name))
    return set(prog.indirect), prog


def capture_edges(pattern):
    """{segment address of the instruction: {destinations}} over every capture."""
    edges = {}
    files = sorted(glob.glob(pattern))
    for path in files:
        with open(path) as f:
            for line in f:
                c = line.split()
                if len(c) < 10 or not c[0].startswith("000C:"):
                    continue
                try:
                    src = int(c[8], 16)
                    dst = int(c[1].split(":")[1], 16)
                except (ValueError, IndexError):
                    continue
                edges.setdefault(src, set()).add(dst)
    return edges, files


def main():
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("--image", default=os.path.join(ROOT, "ENCHANT.EXP"))
    ap.add_argument("--seeds", help="comma separated hex seed list, as tools/seeds.js --emit prints")
    ap.add_argument("--captures", default=DEFAULT_CAPTURES, help="glob for edge files")
    ap.add_argument("--eval", help="NAME=PATH program spec passed straight to discover")
    a = ap.parse_args()

    seeds = []
    if a.seeds:
        seeds = [int(t, 16) for t in a.seeds.split(",") if t.strip()]
    elif a.eval is None:
        raise SystemExit("give --seeds (from tools/seeds.js --emit) or --eval")

    sites, prog = load_sites(a.image, seeds)
    edges, files = capture_edges(a.captures)
    print("program   : %s" % os.path.basename(a.image))
    print("captures  : %d file(s), %d instruction addresses with edges" % (len(files), len(edges)))
    print("indirect  : %d site(s) unresolved by the walker" % len(sites))
    print()

    resolved = []
    for s in sorted(sites):
        seg = s - HEADER
        if seg in edges:
            resolved.append((s, sorted(edges[seg])))

    print("resolved by the captures: %d of %d" % (len(resolved), len(sites)))
    for s, targets in resolved:
        print("   image 0x%05X (segment 0x%05X) -> %s"
              % (s, s - HEADER, ", ".join("0x%05X" % t for t in targets)))

    if not resolved:
        print("   none. The captures did not execute any of these sites.")

    # A site is worth naming when many share one dispatch instruction: one read can settle them all.
    if sites:
        print()
        print("unresolved sites still needing coverage: %d" % (len(sites) - len(resolved)))


if __name__ == "__main__":
    sys.exit(main())
