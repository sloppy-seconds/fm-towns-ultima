#!/usr/bin/env python3
"""tools/controltest.py - prove the control channel answers, and prove the default path did not move.

Two questions, both measurable:

  protocol   a run with --control accepts a connection, answers hello/ping/echo, refuses a malformed
             line and an unknown command with ok:false, and stays connected after both.
  unchanged  a run without --control produces the same framebuffer and the same frame count as the
             published release binary on the same inputs. This is the assertion that keeps a flag
             from being a behaviour change, and it is the reason the test takes two binaries.

Exit 0 only if every assertion passes. Written as a script rather than a prose claim because the
claim "the default path is untouched" is exactly the kind of sentence that is true once and false
afterwards.
"""
import argparse
import hashlib
import json
import os
import re
import socket
import subprocess
import sys
import time


def sha(path):
    with open(path, "rb") as f:
        return hashlib.sha256(f.read()).hexdigest()


def run(binary, out, frames, control=None, env=None):
    e = dict(os.environ)
    if env:
        e.update(env)
    cmd = [binary, "--graphics=none", f"--frames={frames}"]
    if control:
        cmd.append(f"--control={control}")
    cmd += [args.exp, args.tbios, args.cue, args.disk]
    e["U2_SHOT"] = out
    # The space at frame 400 is what makes the compared frame a text-bearing one. On the splash at frame 600 the
    # framebuffer is identical for a build with no font ROM and a build with one, which was measured and made the
    # byte-identity assertion decoration rather than a check.
    e.setdefault("U2_KEYS", "400:3520")
    p = subprocess.run(cmd, capture_output=True, text=True, timeout=600, env=e)
    return p


def recv_line(sock, timeout=10.0):
    sock.settimeout(timeout)
    buf = b""
    while b"\n" not in buf:
        chunk = sock.recv(4096)
        if not chunk:
            break
        buf += chunk
    return json.loads(buf.split(b"\n", 1)[0].decode())


fails = []


def check(label, ok, detail=""):
    print(f"  {'ok  ' if ok else 'FAIL'}  {label}{'  ' + detail if detail else ''}")
    if not ok:
        fails.append(label)


ap = argparse.ArgumentParser()
ap.add_argument("--bin", required=True, help="the build under test")
ap.add_argument("--ref", help="the published binary to compare the default path against")
ap.add_argument("--exp", default="ENCHANT.EXP")
ap.add_argument("--tbios", default="build/play/TBIOS.BIN")
ap.add_argument("--cue", default="build/play/disc.cue")
ap.add_argument("--disk", default="saves/userdisk.hdm")
ap.add_argument("--font", default="vendor/roms/FMT_FNT.ROM")
ap.add_argument("--font20", default="vendor/roms/FMT_F20.ROM")
ap.add_argument("--work", default="/var/tmp/controltest")
args = ap.parse_args()

os.makedirs(args.work, exist_ok=True)
env = {"U2_FONT": args.font, "U2_FONT20": args.font20}
FRAMES = 1500

print("protocol: --control on an ephemeral loopback port")
proc = subprocess.Popen(
    [args.bin, "--graphics=none", f"--frames={FRAMES}", "--control=127.0.0.1:0",
     args.exp, args.tbios, args.cue, args.disk],
    stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True, env={**os.environ, **env},
)
bound = None
deadline = time.time() + 120
while time.time() < deadline:
    line = proc.stdout.readline()
    if not line:
        break
    m = re.match(r"control\s+(\S+)", line)
    if m:
        bound = m.group(1)
        break
check("startup prints the bound address", bound is not None, bound or "no control line")

if bound:
    host, port = bound.rsplit(":", 1)
    s = socket.create_connection((host, int(port)), timeout=10)
    s.sendall(b'{"id":1,"cmd":"hello"}\n')
    r = recv_line(s)
    check("hello answers ok with a version", r.get("ok") and r.get("version") == "1", json.dumps(r))
    check("hello echoes the id", r.get("id") == 1)

    s.sendall(b'{"id":2,"cmd":"ping"}\n')
    r = recv_line(s)
    check("ping answers with a frame number", r.get("ok") and isinstance(r.get("frame"), int), json.dumps(r))
    frame_at_ping = r.get("frame")

    s.sendall(b'{"id":3,"cmd":"echo","greeting":"hello world"}\n')
    r = recv_line(s)
    check("echo returns its argument", r.get("greeting") == "hello world", json.dumps(r))

    s.sendall(b'{"id":4,"cmd":"nosuchcommand"}\n')
    r = recv_line(s)
    check("unknown cmd is refused with ok:false", r.get("ok") is False and "unknown" in r.get("error", ""), json.dumps(r))

    s.sendall(b'this is not json\n')
    r = recv_line(s)
    check("a malformed line is refused, not fatal", r.get("ok") is False, json.dumps(r))

    s.sendall(b'{"id":5,"cmd":"ping"}\n')
    r = recv_line(s)
    check("the connection survives both refusals", r.get("ok") and r.get("id") == 5)
    check("the machine kept running while commands were served", r.get("frame", 0) >= (frame_at_ping or 0))

    s.sendall(b'{"id":6,"cmd":"quit"}\n')
    try:
        r = recv_line(s, timeout=30)
        check("quit is acknowledged", r.get("ok") and r.get("id") == 6)
    except Exception as exc:
        check("quit is acknowledged", False, str(exc))
    s.close()
    try:
        code = proc.wait(timeout=120)
    except subprocess.TimeoutExpired:
        proc.kill()
        code = None
    check("quit ends the run with exit 0", code == 0, f"exit={code}")
else:
    proc.kill()

print("unchanged: the default path against the published binary")
new_shot = os.path.join(args.work, "new.png")
p = run(args.bin, new_shot, FRAMES)
m = re.search(r"machine frames (\d+)", p.stdout)
new_frames = m.group(1) if m else "?"
check("the test build runs with no --control", p.returncode == 0 and os.path.exists(new_shot), f"exit={p.returncode}")

if args.ref:
    ref_shot = os.path.join(args.work, "ref.png")
    q = run(args.ref, ref_shot, FRAMES)
    m = re.search(r"machine frames (\d+)", q.stdout)
    ref_frames = m.group(1) if m else "?"
    check("frame count matches the release binary", new_frames == ref_frames, f"{new_frames} vs {ref_frames}")
    if os.path.exists(new_shot) and os.path.exists(ref_shot):
        a, b = sha(new_shot), sha(ref_shot)
        check("framebuffer is byte-identical to the release binary", a == b, f"{a[:12]} vs {b[:12]}")
else:
    print("  --ref not given, the default-path comparison was skipped")

print(f"\n{len(fails)} failed" if fails else "\nall control assertions pass")
sys.exit(1 if fails else 0)
