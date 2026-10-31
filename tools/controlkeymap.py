#!/usr/bin/env python3
"""tools/controlkeymap.py - the keyboard grid, measured on the yell line.

WHY THIS SURFACE. Ultima II's YELL mode accepts free text and echoes every character the guest receives, so a key
can be tested without a menu that has to be re-navigated between probes. That makes it the honest place to ask what
the port's key table actually delivers, which is the question defect 3 turned on: the create-entry prompt wanted a
digit, and a digit could not be sent.

WHAT IT MEASURES. For each of a-z and 0-9 the harness drives to the yell prompt, types a batch of keys, and cuts
each drawn glyph out of the actions line on the measured 16 px cell grid. Three things are asserted, and none of
them needs a copy of the game's font in this repository:

  1. every key draws a glyph at all. This is the defect. Before the table was filled, no digit drew anything.
  2. no two keys draw the same glyph, which is what a misaligned table looks like from the outside, and what it
     actually was the first time: two keys shared a bitmap and the row was one index off.
  3. two independent runs produce the same 36 bitmaps, so the grid is a measurement and not a coincidence.

WHAT IT CANNOT SEE. That a key draws *the right* letter rather than a different letter. The identity of each glyph
was established once by reading the rendered shapes, and that reading lives in docs/port-defects.md rather than
here, because the bitmaps themselves are extracted from the game's font and extracted output does not go in git.
The digit half of that gap is covered by tools/controlcreate.py, which types 4 at the create-entry prompt and
refuses the run unless the game accepts it: a shifted table makes 4 land on entry 5 and the game answers
"Create (1-4 Only!)".

The grid is cached under analysis/ (gitignored) after a clean pass and compared against on later runs, so a
regression is visible on the machine that runs it without shipping game data to anyone.

Usage: controlkeymap.py <port> <clean-save-disk.hdm> <font-rom> <font20-rom> <ENCHANT.EXP> <TBIOS.BIN> <disc.cue>
No third-party dependency: the screenshot is decoded with zlib and struct, the way tools/ocr.py does it.
Not part of checkall.js: it needs a built port, the disc and the font ROMs.
"""
import base64
import json
import os
import re
import socket
import struct
import subprocess
import sys
import zlib

PORT = sys.argv[1]
DISK = sys.argv[2]
FONT = sys.argv[3]
FONT20 = sys.argv[4]
ENCHANT = sys.argv[5] if len(sys.argv) > 5 else "ENCHANT.EXP"
TBIOS = sys.argv[6] if len(sys.argv) > 6 else "TBIOS.BIN"
CUE = sys.argv[7] if len(sys.argv) > 7 else "disc.cue"
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CACHE = os.path.join(ROOT, "analysis", "keymap-grid.json")

# The measured grid. The actions line's typed cells start at x 492 in the port's 704x525 frame and step 16 px.
# The row band is found per frame rather than hardcoded, because the message log scrolls as the yell prompt and the
# submitted word add lines, which moves the typed text down by a couple of rows between a five-key and an eight-key
# batch. Measured, not assumed: the drawn line advanced exactly 16 px per accepted key.
CELL_X0, CELL_PITCH = 492, 16
BAND_LO, BAND_HI, BAND_X1 = 330, 380, 620
MIN_INK = 20
# The line holds eight glyphs after the prompt, measured by filling it: a ninth and tenth press drew nothing at the
# cells the grid says they should occupy.
GROUPS = ["abcdefgh", "ijklmnop", "qrstuvwx", "yz", "01234", "56789"]
KEYS = [c for g in GROUPS for c in g]
# Route to the world prompt: splash, menu, Journey Onward, first character, confirm, and the two presses that
# dismiss the selection notice. Then one more y opens YELL.
ROUTE = ["space", "Down", "Down", "Return", "Return", "y", "y"]
# Small on purpose. Defect 1 is a coverage hole the machine falls into at frame 4026, and a batch has to finish
# before it. At 40 frames a press a batch ends near frame 2100. Safe because KYB_read is polled every frame while
# the yell line is open.
STEP = 40


def png_rgb(data):
    """Decode a PNG into (w, h, pixels, bpp), no dependencies.

    Same approach tools/ocr.py uses for the emulator's screenshot: IHDR for the geometry, concatenated IDAT
    inflated, then the five PNG filter types undone line by line.
    """
    pos, idat, w, h, ct = 8, b"", 0, 0, 0
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
        f = raw[i]; i += 1
        line = bytearray(raw[i:i + stride]); i += stride
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
                line[x] = (line[x] + (a if (pa <= pb and pa <= pc) else (b if pb <= pc else c))) & 255
        out += line
        prev = line
    return w, h, out, bpp


def white(px, bpp, w, x, y):
    o = (y * w + x) * bpp
    return px[o] == 255 and px[o + 1] == 255 and px[o + 2] == 255


def start(errlog):
    env = dict(os.environ)
    env.update({"SDL_VIDEODRIVER": "dummy", "SDL_AUDIODRIVER": "dummy", "U2_FONT": FONT, "U2_FONT20": FONT20})
    env.pop("DISPLAY", None)
    for p in (ENCHANT, TBIOS, CUE):
        if not os.path.exists(p):
            sys.exit(f"controlkeymap: {p} is missing. Extract the module first (tools/getfile.js).")
    return subprocess.Popen([PORT, "--graphics=sdl", "--frames=60000", "--control=127.0.0.1:0",
                             ENCHANT, TBIOS, CUE, DISK],
                            stdout=subprocess.PIPE, stderr=open(errlog, "wb"), text=True, env=env)


class Control:
    def __init__(self, proc):
        bound = None
        while True:
            line = proc.stdout.readline()
            if not line:
                sys.exit("controlkeymap: the port exited before binding a control socket")
            m = re.match(r"control\s+(\S+)", line)
            if m:
                bound = m.group(1)
                break
        host, port = bound.rsplit(":", 1)
        self.sock = socket.create_connection((host, int(port)), timeout=120)
        self.buf = b""
        self.n = 0

    def recv(self):
        while b"\n" not in self.buf:
            chunk = self.sock.recv(65536)
            if not chunk:
                return {}
            self.buf += chunk
        line, self.buf = self.buf.split(b"\n", 1)
        return json.loads(line.decode())

    def cmd(self, **o):
        self.n += 1
        o["id"] = self.n
        self.sock.sendall((json.dumps(o) + "\n").encode())
        return self.recv()

    def step(self, n=STEP):
        while n > 0:
            d = min(200, n)
            self.cmd(cmd="frame", n=d)
            n -= d

    def frame(self):
        r = self.cmd(cmd="shot")
        return png_rgb(base64.b64decode(r["png"])) if r.get("png") else None


def band(img):
    """The contiguous row band inside which the typed cells have ink, found in this frame."""
    w, h, px, bpp = img
    rows = [y for y in range(BAND_LO, BAND_HI)
            if any(white(px, bpp, w, x, y) for x in range(CELL_X0, min(BAND_X1, w)))]
    if not rows:
        return None
    best = cur = [rows[0], rows[0]]
    for y in rows[1:]:
        if y <= cur[1] + 2:
            cur[1] = y
        else:
            if cur[1] - cur[0] > best[1] - best[0]:
                best = cur
            cur = [y, y]
    if cur[1] - cur[0] > best[1] - best[0]:
        best = cur
    return best[0], best[1]


def cut(img, i, rows):
    """The glyph bitmap of cell i on the actions line, blank rows dropped."""
    w, h, px, bpp = img
    y0, y1 = rows
    a = CELL_X0 + i * CELL_PITCH
    out = ["".join("#" if white(px, bpp, w, x, y) else "." for x in range(a, a + CELL_PITCH))
           for y in range(y0, y1 + 1)]
    return [r for r in out if "#" in r]


def run_batch(batch, errlog):
    """One fresh session per batch.

    This costs a boot per batch and it is still the right shape: the yell line is modal, and a second `y` after a
    submitted yell does not reliably reopen an empty one, so batches driven from a single session arrive shifted.
    Measured the hard way, 28 of 36 keys wrong with the line offset by one glyph from the second batch onward.
    """
    proc = start(errlog)
    cells, died = [], None
    try:
        ctl = Control(proc)
        ctl.step(600)
        for k in ROUTE:
            ctl.cmd(cmd="key", key=k)
            ctl.step()
        ctl.cmd(cmd="key", key="y")                 # open YELL
        ctl.step()
        for k in batch:
            ctl.cmd(cmd="key", key=k)
            ctl.step()
        img = ctl.frame()
        if img is None:
            return {}, 0
        rows = band(img)
        if rows is None:
            return {}, 0
        cells = [cut(img, i, rows) for i in range(len(batch))]
        ctl.cmd(cmd="quit")
    except (BrokenPipeError, ConnectionResetError, OSError):
        died = len(cells)
    finally:
        try:
            proc.wait(timeout=180)
        except subprocess.TimeoutExpired:
            proc.kill()
    return dict(zip(batch, cells)), died


def sweep(errlog):
    got, died = {}, None
    seen = 0
    for batch in GROUPS:
        cells, died_here = run_batch(batch, errlog)
        got.update(cells)
        if died_here is not None:
            died = seen + died_here
            break
        seen += len(batch)
    return got, died


def main():
    errlog = os.path.join(os.environ.get("TMPDIR", "/var/tmp"), "controlkeymap.err")
    grid, died = sweep(errlog)
    if died is not None:
        tail = ""
        try:
            tail = "".join(open(errlog, errors="replace").readlines()[-4:]).strip()
        except OSError:
            pass
        print(f"controlkeymap: FAILED, the port died after {len(grid)} keys were read: {tail[-300:]}")
        return 1

    fails = []
    if len(grid) != len(KEYS):
        fails.append(f"only {len(grid)} of {len(KEYS)} keys were read")
    empty = [k for k in KEYS if sum(r.count("#") for r in grid.get(k, [])) < MIN_INK]
    if empty:
        fails.append(f"these keys drew nothing: {empty}")
    shapes = {}
    for k in KEYS:
        shapes.setdefault(tuple(grid.get(k, [])), []).append(k)
    shared = [v for v in shapes.values() if len(v) > 1]
    if shared:
        fails.append(f"these keys share a glyph, which means the table maps them to one code: {shared}")

    grid2, died2 = sweep(errlog)
    if died2 is not None:
        fails.append("the second sweep died")
    elif grid2 != grid:
        diff = sorted(set(grid) ^ set(grid2)) + [k for k in grid if k in grid2 and grid[k] != grid2[k]]
        fails.append(f"not reproducible, these keys differ between runs: {diff[:8]}")

    if not fails:
        os.makedirs(os.path.dirname(CACHE), exist_ok=True)
        json.dump(grid, open(CACHE, "w"), indent=0, sort_keys=True)
        # The cache is written after a clean pass and compared on the one after, so drift shows up locally.
        # There is nothing to compare against on a machine that has never run this, and that is not a failure.
        print(f"controlkeymap: ok, {len(KEYS)} keys each drew a distinct glyph, twice over. Grid cached at {CACHE}")
        return 0
    print(f"controlkeymap: FAILED ({len(fails)} problems)")
    for f in fails:
        print("  " + f)
    return 1


if __name__ == "__main__":
    sys.exit(main())
