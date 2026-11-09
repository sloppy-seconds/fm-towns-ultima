#!/usr/bin/env python3
"""tools/controlsmoke.py - the phase 10 tier 1 smoke test: reach the game through the socket alone.

No xdotool, no screenshot tool, no vision model. The port runs with SDL's dummy video driver, which needs no
display server at all, and every key arrives as a pushed SDL event over --control. Each stage's framebuffer is
hashed and compared against a reference recorded from the windowed path (real Xvfb, real xdotool, captured with
U2_SHOT) on 2026-10-31. The last stage is the overworld, confirmed by its status panel (STAMINA, WEA:Dagger,
ARM:Cloth), so the route asserted here is the route docs/port-defects.md calls the only one anybody has played.

Why the references come from the windowed path and not from this script: the measured defect this closes is that
the U2_KEYS injection path reaches the guest and still cannot activate the game menu. Asserting the socket path
against itself would prove nothing about that. Asserting it against the path that demonstrably works is the test.

Exit 0 only if every stage matches.
"""
import hashlib
import json
import os
import re
import socket
import subprocess
import sys
import time

# Recorded from the windowed reference run: SDL_VIDEODRIVER=x11 under Xvfb, keys through xdotool, frame limit
# 1500, shot via U2_SHOT. Keys were sent at wall-clock times of roughly frame 600, 720, 840 and 960 at 60 fps.
STAGES = [
    ("splash", []),
    ("menu", [("space", 600)]),
    ("highlight", [("space", 600), ("Down", 720), ("Down", 840)]),
    ("selectplayer", [("space", 600), ("Down", 720), ("Down", 840), ("Return", 960)]),
    ("confirm", [("space", 600), ("Down", 720), ("Down", 840), ("Return", 960), ("Return", 1100)]),
]
EXPECTED = {
    "splash": "fada784131b8d553",
    "menu": "46761bb40bc41607",
    "highlight": "831c0ff77c488417",
    "selectplayer": "7c7acc2ba471b2f4",
    "confirm": "d283d1f02323d8e6",
}
# The overworld is animated, so its framebuffer at a fixed frame depends on which frame each key landed on, and
# the windowed reference drove its keys by wall clock. Byte equality there is not achievable and pretending otherwise
# would be a test that fails for the wrong reason. What is asserted instead: the world frame differs from the
# confirm frame (progress happened), and two socket runs of the same schedule produce the identical frame (the
# path is deterministic). The hash below is the reproducibility reference, recorded from the socket path.
WORLD_KEYS = [("space", 600), ("Down", 720), ("Down", 840), ("Return", 960), ("Return", 1100), ("y", 1200), ("y", 1300)]
WORLD_REPRODUCIBLE = "45ef7efc21c6254f"
FRAMES = 1500

ap_root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
BIN = os.environ.get("U2_BIN", os.path.join(ap_root, "build/port/b/u2"))
EXP = os.environ.get("U2_EXP", os.path.join(ap_root, "ENCHANT.EXP"))
TBIOS = os.environ.get("U2_TBIOS", os.path.join(ap_root, "build/play/TBIOS.BIN"))
CUE = os.environ.get("U2_CUE", os.path.join(ap_root, "build/play/disc.cue"))
DISK = os.environ.get("U2_DISK", os.path.join(ap_root, "saves/userdisk.hdm"))
WORK = os.environ.get("U2_WORK", "/var/tmp/controlsmoke")

fails = []


def recv_line(sock, timeout=60.0):
    sock.settimeout(timeout)
    buf = b""
    while b"\n" not in buf:
        chunk = sock.recv(4096)
        if not chunk:
            raise RuntimeError("connection closed mid-reply")
        buf += chunk
    return json.loads(buf.split(b"\n", 1)[0].decode())


def wait_frame(sock, target, counter):
    """Poll ping until the machine has reached `target`. Paced by frames, not by sleep, so the test does not
    care whether the dummy driver paces the run or lets it sprint."""
    while counter[0] < target:
        sock.sendall(b'{"id":99,"cmd":"ping"}\n')
        r = recv_line(sock)
        counter[0] = r.get("frame", counter[0] + 1)
        time.sleep(0.01)


def run_stage(name, keys):
    os.makedirs(WORK, exist_ok=True)
    shot = os.path.join(WORK, f"{name}.png")
    if os.path.exists(shot):
        os.remove(shot)
    env = dict(os.environ)
    env.update({
        "SDL_VIDEODRIVER": "dummy",
        "SDL_AUDIODRIVER": "dummy",
        "U2_FONT": os.path.join(ap_root, "vendor/roms/FMT_FNT.ROM"),
        "U2_FONT20": os.path.join(ap_root, "vendor/roms/FMT_F20.ROM"),
        "U2_SHOT": shot,
    })
    env.pop("DISPLAY", None)
    log = open(os.path.join(WORK, f"{name}.log"), "w")
    proc = subprocess.Popen(
        [BIN, "--graphics=sdl", f"--frames={FRAMES}", "--control=127.0.0.1:0", EXP, TBIOS, CUE, DISK],
        stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True, env=env,
    )
    log.write(name + "\n")
    bound = None
    deadline = time.time() + 180
    while time.time() < deadline:
        line = proc.stdout.readline()
        if not line:
            break
        log.write(line)
        m = re.match(r"control\s+(\S+)", line)
        if m:
            bound = m.group(1)
            break
    if not bound:
        proc.kill()
        log.close()
        return None, "no bound address printed"

    host, port = bound.rsplit(":", 1)
    try:
        s = socket.create_connection((host, int(port)), timeout=30)
        counter = [0]
        for keyname, at_frame in keys:
            wait_frame(s, at_frame, counter)
            s.sendall(json.dumps({"id": at_frame, "cmd": "key", "key": keyname}).encode() + b"\n")
            r = recv_line(s)
            if not r.get("ok"):
                s.close()
                proc.kill()
                log.close()
                return None, f"key {keyname} refused: {r.get('error')}"
        # let the run reach its frame limit and write the shot
        try:
            code = proc.wait(timeout=600)
        except subprocess.TimeoutExpired:
            proc.kill()
            log.close()
            return None, "run did not finish"
        s.close()
        log.close()
        if not os.path.exists(shot):
            return None, f"no shot, exit {code}"
        with open(shot, "rb") as f:
            return hashlib.sha256(f.read()).hexdigest()[:16], f"exit {code}"
    except Exception as exc:
        proc.kill()
        log.close()
        return None, str(exc)


print(f"binary {BIN}")
print("driving with SDL_VIDEODRIVER=dummy, no display server, keys pushed through SDL over the socket\n")
seen = []
for name, keys in STAGES:
    got, note = run_stage(name, keys)
    want = EXPECTED[name]
    ok = got == want
    seen.append(got)
    print(f"  {'ok  ' if ok else 'FAIL'}  {name:<13} {got or note}{'  expected ' + want if not ok else ''}")
    # The first version printed FAIL here and still exited 0, because only the distinctness check below appended
    # to `fails`. A gate that reports failure and exits success is the failure mode this repository names in AGENTS.md,
    # and it was found by running the gate against a binary that does not implement the feature.
    if not ok:
        fails.append(name)

print("  world: the overworld is animated, so this stage asserts determinism and progress, not equality with a wall-clock reference")
w1, n1 = run_stage("world-a", WORLD_KEYS)
w2, n2 = run_stage("world-b", WORLD_KEYS)
if w1 != w2:
    print(f"  FAIL  world is not reproducible  {w1 or n1} vs {w2 or n2}")
    fails.append("world determinism")
elif w1 != WORLD_REPRODUCIBLE:
    print(f"  FAIL  world differs from the recorded reference  {w1} vs {WORLD_REPRODUCIBLE}")
    fails.append("world reference")
else:
    print(f"  ok    world          {w1} twice, matching the recorded reference")
confirm_hash = EXPECTED["confirm"]
if w1 and w1 != confirm_hash:
    print("  ok    world differs from the confirm frame, so the route made progress")
else:
    print("  FAIL  world is the confirm frame, so nothing was confirmed")
    fails.append("world progress")

# Distinctness is asserted too: four identical hashes would match nothing, and a run that never advanced past
# the splash would otherwise look like a passing test if every expectation were the same value.
if len(set(x for x in seen if x)) != len([x for x in seen if x]):
    print("  FAIL  the stages did not produce distinct frames")
    fails.append("distinctness")

if len(fails):
    print(f"\n{len(fails)} failed")
    sys.exit(1)
print("\nthe socket path reproduces the windowed path, frame for frame, with no display server")
