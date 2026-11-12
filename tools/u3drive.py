#!/usr/bin/env python3
"""tools/u3drive.py - drive the Ultima III port over its control socket, one key at a time, with a shot each.

WHY THIS EXISTS. Ultima III's port is a different program from Ultima II's and its screens have never been
driven by a script, so the only way to learn a route is to send a key, look, and send the next one. Doing that by
hand means a person decides what each screen is before acting, and that is the failure docs/quickstart.md records
for Ultima II: keys sent into the wrong screen, a space that quit the game, several restarts.

WHAT IT DOES NOT DO: it does not decide anything. It sends the keys it is given, at the frames it is given, and
writes one PNG per key plus the frame it landed on. Every screen it produces is then read by a person or by
tools/look.py, not inferred by this script. A route worth asserting lives here as a --route name once it has been
read, and only then can it be a test.

WHY THE SOCKET AND NOT xdotool: keys pushed through --control arrive as SDL events, which is the path the physical
keyboard uses (docs/port-defects.md defect 3 is what happens when the port injects beside SDL instead), and it
needs no display server.

USAGE
  ./tools/u3drive.py --keys "space@600,Return@720" --frames 900
  ./tools/u3drive.py --keys "space@600" --settle 60          # also shoot `settle` frames after the last key
  ./tools/u3drive.py --route title-to-menu                    # a named route that has been read and kept

The PNGs go to analysis/u3drive/ unless --out says otherwise, which is gitignored like every other capture.
"""
import argparse
import json
import os
import re
import socket
import subprocess
import sys
import threading
import time

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

# Routes that have been read off a real screen and kept. Each entry is keys plus the frames to shoot after them.
# An empty route is not a placeholder, it is the honest state: nothing has been read yet.
ROUTES = {
    # Read off the screens, one key at a time, 2026-11-10. Frames are the run's own; the run is deterministic.
    # What each screen showed is in docs/u3-port.md, including that slot 1 already holds a character.
    "title-to-register": [("space", 500), ("Down", 800), ("Return", 1100), ("Return", 1400)],
}


def recv_line(sock, timeout=120.0):
    sock.settimeout(timeout)
    buf = b""
    while b"\n" not in buf:
        chunk = sock.recv(4096)
        if not chunk:
            raise RuntimeError("the port closed the socket mid-reply")
        buf += chunk
    return json.loads(buf.split(b"\n", 1)[0].decode())


def wait_frame(sock, target, seen):
    """Poll until the machine reaches `target`, so the schedule is paced by frames rather than by sleeping."""
    while seen[0] < target:
        sock.sendall(b'{"id":1,"cmd":"ping"}\n')
        r = recv_line(sock)
        seen[0] = r.get("frame", seen[0] + 1)
        if not r.get("ok", True):
            raise RuntimeError("ping refused: " + str(r.get("error")))
        time.sleep(0.005)


def shot(sock, path):
    sock.sendall(json.dumps({"id":2, "cmd": "shot", "path": path}).encode() + b"\n")
    r = recv_line(sock)
    if not r.get("ok"):
        raise RuntimeError("shot refused: " + str(r.get("error")))
    return r


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--keys", default="", help='comma separated key@frame, for example "space@600,Down@720"')
    ap.add_argument("--route", default=None, help="a named route from ROUTES")
    ap.add_argument("--frames", type=int, default=None, help="total frames to run, default: last key + settle")
    ap.add_argument("--settle", type=int, default=60, help="frames to run past the last key")
    ap.add_argument("--out", default=os.path.join(ROOT, "analysis", "u3drive"))
    ap.add_argument("--dev", action="store_true", help="run the port with --dev, so its instruments are on")
    ap.add_argument("--bin", default=os.path.join(ROOT, "build", "u3", "b", "u3"))
    ap.add_argument("--exp", default=os.path.join(ROOT, "EXODUS.EXP"))
    ap.add_argument("--tbios", default=os.path.join(ROOT, "build", "u3", "TBIOS.BIN"))
    ap.add_argument("--cue", default=os.path.join(ROOT, "build", "u3", "disc.cue"))
    ap.add_argument("--disk", default="", help="a floppy image; omit to let the port use its ./saves directory")
    args = ap.parse_args()

    if args.route is not None:
        if args.route not in ROUTES:
            sys.exit("no route called %r. Known routes: %s" % (args.route, ", ".join(ROUTES) or "none yet"))
        keys = ROUTES[args.route]
    else:
        keys = []
        for item in args.keys.split(","):
            item = item.strip()
            if not item:
                continue
            name, _, at = item.partition("@")
            keys.append((name, int(at) if at else 0))

    last = max([f for _, f in keys], default=0)
    frames = args.frames if args.frames is not None else last + args.settle
    os.makedirs(args.out, exist_ok=True)

    env = dict(os.environ)
    env.update({"SDL_VIDEODRIVER": "dummy", "SDL_AUDIODRIVER": "dummy"})
    env.pop("DISPLAY", None)
    log = open(os.path.join(args.out, "run.log"), "w")
    argv = [args.bin, "--graphics=sdl", "--frames=%d" % frames, "--control=127.0.0.1:0",
            args.exp, args.tbios, args.cue]
    # --dev turns on the port's instruments, which is where the answer usually is: a refused floppy open, a missing
    # function, a BIOS call the machine does not serve. It is off unless asked for, because a route that works should
    # not change shape between a debug run and a clean one.
    if args.dev:
        argv.insert(1, "--dev")
    # The disk is optional because a tree can hold the game's own save files in ./saves instead, which is what a
    # session that created characters writes. Passing "" would be a positional argument the port does not expect.
    if args.disk:
        argv.append(args.disk)
    proc = subprocess.Popen(argv, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True, env=env)

    # EVERY LINE THE PORT PRINTS GOES TO THE LOG, and the binding address is found by that same reader. Two readers of
    # one pipe race, and the first version of this fix proved it: the thread swallowed the "control" line and the main
    # loop then waited 240s for an address that had already gone past, reporting "never printed a bound address" about
    # a run that was working. One reader, one event.
    ready = threading.Event()
    bound_box = []

    def drain():
        for line in proc.stdout:
            log.write(line)
            log.flush()
            m = re.match(r"control\s+(\S+)", line)
            if m and not bound_box:
                bound_box.append(m.group(1))
                ready.set()

    threading.Thread(target=drain, daemon=True).start()
    if not ready.wait(timeout=240):
        proc.kill()
        sys.exit("the port never printed a bound control address, see %s" % os.path.join(args.out, "run.log"))
    bound = bound_box[0]

    host, port = bound.rsplit(":", 1)
    s = socket.create_connection((host, int(port)), timeout=60)
    seen = [0]
    written = []
    for name, at in keys:
        wait_frame(s, at, seen)
        s.sendall(json.dumps({"id": at, "cmd": "key", "key": name}).encode() + b"\n")
        r = recv_line(s)
        if not r.get("ok"):
            proc.kill()
            sys.exit("key %s at frame %d was refused: %s" % (name, at, r.get("error")))
        path = os.path.join(args.out, "f%05d-%s.png" % (at, name))
        shot(s, path)
        written.append(path)
        print("key %-10s frame %-6d %s" % (name, at, path))

    # The last picture is the one that matters, and it is taken after the settle so an animation has moved. Waiting
    # by frame rather than shooting immediately is the difference between "the key was accepted" and "the screen
    # the key produced": the first version shot four frames later, which is mid-transition and reads as neither.
    wait_frame(s, min(last + args.settle, frames), seen)
    final = os.path.join(args.out, "final.png")
    shot(s, final)
    print("final                frame %-6d %s" % (seen[0], final))

    proc.wait(timeout=600)
    log.close()
    print("exit                 %d" % proc.returncode)
    return 0


if __name__ == "__main__":
    sys.exit(main())
