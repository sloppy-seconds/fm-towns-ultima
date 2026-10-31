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

def spawn(frames, shot=None, control="127.0.0.1:0"):
    """Start a run with the channel open. SDL dummy by default, because the key half of these checks needs the
    front-end and the dummy driver needs no display server."""
    e = dict(os.environ)
    e.update(env)
    if shot:
        e["U2_SHOT"] = shot
    e["SDL_VIDEODRIVER"] = "dummy"
    e["SDL_AUDIODRIVER"] = "dummy"
    e.pop("DISPLAY", None)
    logf = open(os.path.join(args.work, f"spawn-{frames}-{os.path.basename(str(shot))}.log"), "w")
    p = subprocess.Popen(
        [args.bin, "--graphics=sdl", f"--frames={frames}", f"--control={control}",
         args.exp, args.tbios, args.cue, args.disk],
        stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True, env=e,
    )
    bound = None
    deadline = time.time() + 180
    while time.time() < deadline:
        line = p.stdout.readline()
        if not line:
            break
        logf.write(line)
        m = re.match(r"control\s+(\S+)", line)
        if m:
            bound = m.group(1)
            break
    if not bound:
        p.kill()
        logf.close()
        return None, None, None
    host, port = bound.rsplit(":", 1)
    s = socket.create_connection((host, int(port)), timeout=30)
    return p, s, logf


def call(sock, counter, obj):
    obj["id"] = counter[0]
    counter[0] += 1
    sock.sendall((json.dumps(obj) + "\n").encode())
    return recv_line(sock, timeout=900)


def time_checks():
    p, s, logf = spawn(1500, shot=os.path.join(args.work, "time-a.png"))
    if not s:
        check("a run with --control and SDL dummy starts", False, "no bound address")
        return
    check("a run with --control and SDL dummy starts", True)
    counter = [1]

    r0 = call(s, counter, {"cmd": "ping"})
    r1 = call(s, counter, {"cmd": "frame", "n": 100})
    stepped = r1.get("frame", 0) - r1.get("from", -1)
    check("frame 100 advances exactly 100 machine frames", stepped == 100, f"{stepped} from {r1.get('from')} to {r1.get('frame')}")

    r2 = call(s, counter, {"cmd": "ping"})
    r3 = call(s, counter, {"cmd": "frame", "n": 37})
    stepped2 = r3.get("frame", 0) - r3.get("from", -1)
    check("frame 37 advances exactly 37", stepped2 == 37, f"{stepped2}")

    # wait on the screen. The first version of this asserted the wait was woken *by the key*, and that was an
    # overclaim: the splash animates on its own, so the wait could fire before the key landed and still be
    # correct. What is asserted here is that a screen wait reports a change within its budget, and separately
    # that a wait on a byte nothing writes reports a timeout. Attribution to a cause is what `mem` waits do,
    # and that is 10e's business.
    waiter = {"id": counter[0], "cmd": "wait", "screen": 1, "timeout": 1200}
    counter[0] += 1
    s.sendall((json.dumps(waiter) + "\n").encode())
    time.sleep(0.5)
    keyrep = {"id": counter[0], "cmd": "key", "key": "space"}
    counter[0] += 1
    s.sendall((json.dumps(keyrep) + "\n").encode())
    first = recv_line(s, timeout=900)
    second = recv_line(s, timeout=900)
    woken = first if first.get("changed") else second
    check("wait screen reports a change within its budget", woken.get("ok") and woken.get("changed"),
          json.dumps(woken))

    r = call(s, counter, {"cmd": "wait", "addr": "000c:1000", "n": 4, "timeout": 30})
    check("a wait with nothing to change returns an error rather than hanging", r.get("ok") is False, json.dumps(r))

    s.sendall(json.dumps({"id": counter[0], "cmd": "frame", "n": 500}).encode() + b"\n")
    counter[0] += 1
    s.sendall(json.dumps({"id": counter[0], "cmd": "frame", "n": 500}).encode() + b"\n")
    counter[0] += 1
    pair = sorted([json.dumps(recv_line(s, timeout=900)), json.dumps(recv_line(s, timeout=900))])
    check("two pending frame steps are refused rather than silently dropped", "already pending" in pair[1],
          pair[1][:90])

    s.sendall(json.dumps({"id": counter[0], "cmd": "quit"}).encode() + b"\n")
    try:
        recv_line(s, timeout=60)
    except Exception:
        pass
    s.close()
    try:
        p.wait(timeout=300)
    except subprocess.TimeoutExpired:
        p.kill()
    logf.close()

    hashes = []
    for tag in ("det-a", "det-b"):
        shot = os.path.join(args.work, f"{tag}.png")
        pp, ss, lf = spawn(1200, shot=shot)
        if not ss:
            hashes.append(None)
            continue
        cc = [1]
        # Eleven steps of 100 against a 1200-frame limit, so the last reply is not racing the run's own end. The
        # first version stepped to exactly the limit and the final reply never arrived, because the run stopped
        # in the same frame the step became due.
        for _ in range(11):
            call(ss, cc, {"cmd": "frame", "n": 100})
        ss.close()
        try:
            pp.wait(timeout=300)
        except subprocess.TimeoutExpired:
            pp.kill()
        lf.close()
        hashes.append(sha(shot) if os.path.exists(shot) else None)
    check("two runs stepped to the same frame give identical framebuffers",
          len(set(hashes)) == 1 and hashes[0] is not None,
          " vs ".join(h[:12] if h else "none" for h in hashes))


time_checks()

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
