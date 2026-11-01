#!/usr/bin/env python3
"""tools/controlturn.py - the port accepts one command per turn, as the machine does.

The machine does not carry input across a turn: measured on Tsugaru 2026-11-01, 30 P)ass keys injected as
fast as xdotool allows (170 ms each) produced 30 turns with nothing draining afterwards, and the port read
that same burst as eight queued commands. The port now clears its key queue when the turn clock at DS:0xcdf53
advances, which is the guest's own statement that a turn ended.

Turns are counted with that clock, not with tiles and not with food. Tiles cannot tell a dropped key from a
wall, and food turned out to move without input on a contaminated machine.

Asserts:
  1. eight P)ass keys in one frame cost ONE turn, and
  2. the same eight with --allow-key-queue cost eight, which is the control: without it, assertion 1 would
     also pass on a port that ignored its input
  3. "A" then a direction still costs one turn and both keys are used, which is the case a one-key-per-turn
     rule would break
"""
import json
import os
import shutil
import subprocess
import sys
import tempfile

PORT = sys.argv[1]
DISK_SRC = sys.argv[2]
FONT = sys.argv[3]
FONT20 = sys.argv[4]
ENCHANT = sys.argv[5] if len(sys.argv) > 5 else "ENCHANT.EXP"
TBIOS = sys.argv[6] if len(sys.argv) > 6 else "TBIOS.BIN"
CUE = sys.argv[7] if len(sys.argv) > 7 else "disc.cue"


def start(disk, errlog, queue_ok=False):
    env = dict(os.environ)
    env.update({"SDL_VIDEODRIVER": "dummy", "SDL_AUDIODRIVER": "dummy", "U2_FONT": FONT, "U2_FONT20": FONT20})
    env.pop("DISPLAY", None)
    for p in (ENCHANT, TBIOS, CUE):
        if not os.path.exists(p):
            sys.exit(f"controlturn: {p} is missing. Extract the module first (tools/getfile.js).")
    argv = [PORT, "--graphics=sdl", "--frames=60000", "--control=127.0.0.1:0"]
    if queue_ok:
        argv.append("--allow-key-queue")
    argv += [ENCHANT, TBIOS, CUE, disk]
    return subprocess.Popen(argv, stdout=subprocess.PIPE, stderr=open(errlog, "wb"), text=True, env=env)


class Control:
    def __init__(self, proc):
        bound = None
        while True:
            line = proc.stdout.readline()
            if not line:
                raise RuntimeError("the port exited before announcing the control socket")
            if line.startswith("control"):
                bound = line.strip().split()[-1]
                break
        host, port = bound.rsplit(":", 1)
        import socket

        self.sock = socket.create_connection((host, int(port)), timeout=120)
        self.f = self.sock.makefile("rwb")
        self.n = 0

    def cmd(self, **args):
        self.n += 1
        args.setdefault("id", self.n)
        self.f.write((json.dumps(args) + "\n").encode())
        self.f.flush()
        while True:
            line = self.f.readline()
            if not line:
                raise RuntimeError("the port closed the control socket")
            r = json.loads(line)
            if r.get("id") == args["id"]:
                return r


def goto(ctl, t):
    while True:
        f = ctl.cmd(cmd="ping").get("frame", 0)
        if f >= t:
            return
        ctl.cmd(cmd="frame", n=min(200, t - f))


def turn(ctl):
    """The turn clock at DS:0xcdf53, which advances once per completed command."""
    r = ctl.cmd(cmd="mem", addr="14:cdf53", n=4)
    hx = r.get("hex", "")
    if len(hx) < 8:
        raise RuntimeError(f"could not read the turn clock: {r}")
    return int.from_bytes(bytes.fromhex(hx), "little")


def served(ctl):
    return ctl.cmd(cmd="ping").get("keys", 0)


def run(queue_ok, failures, tag):
    scratch = tempfile.mkdtemp(prefix=f"turn-{tag}-")
    disk = os.path.join(scratch, "play.hdm")
    shutil.copyfile(DISK_SRC, disk)
    proc = start(disk, os.path.join(scratch, "port.err"), queue_ok=queue_ok)
    label = "queue allowed" if queue_ok else "one per turn"
    try:
        ctl = Control(proc)
        goto(ctl, 600); ctl.cmd(cmd="key", key="space")
        goto(ctl, 720); ctl.cmd(cmd="key", key="Down")
        goto(ctl, 840); ctl.cmd(cmd="key", key="Down")
        goto(ctl, 960); ctl.cmd(cmd="key", key="Return")
        goto(ctl, 1200); ctl.cmd(cmd="key", key="Return")
        goto(ctl, 1500); ctl.cmd(cmd="key", key="y")
        goto(ctl, 1700); ctl.cmd(cmd="key", key="space")
        goto(ctl, 2600)

        # Eight P)ass keys delivered without advancing a frame. Pass always costs a turn and never moves, so
        # nothing about terrain can confuse the count.
        t0 = turn(ctl)
        for _ in range(8):
            ctl.cmd(cmd="key", key="p")
        goto(ctl, ctl.cmd(cmd="ping").get("frame", 0) + 300)
        t1 = turn(ctl)
        want = 8 if queue_ok else 1
        print(f"  {tag}: eight P)ass keys -> {t1 - t0} turn(s)  [{label}]", flush=True)
        if (t1 - t0) != want:
            failures.append(f"{tag}: eight P)ass keys cost {t1 - t0} turns, expected {want}")

        if not queue_ok:
            # "A" then a direction: one turn, both keys used. A one-key-per-turn rule would drop the direction.
            goto(ctl, ctl.cmd(cmd="ping").get("frame", 0) + 40)
            t2 = turn(ctl)
            s2 = served(ctl)
            ctl.cmd(cmd="key", key="a")
            for _ in range(3):
                ctl.cmd(cmd="frame", n=1)
            ctl.cmd(cmd="key", key="Right")
            goto(ctl, ctl.cmd(cmd="ping").get("frame", 0) + 200)
            t3 = turn(ctl)
            took = served(ctl) - s2
            print(f"  {tag}: 'A' then a direction -> {t3 - t2} turn(s), {took} key(s) used", flush=True)
            if (t3 - t2) != 1:
                failures.append(f"{tag}: an attack cost {t3 - t2} turns, expected 1")
            if took != 2:
                failures.append(f"{tag}: an attack used {took} keys, expected both (2)")
        ctl.cmd(cmd="quit")
    except Exception as e:  # noqa: BLE001
        failures.append(f"{tag}: {type(e).__name__}: {e}")
    finally:
        try:
            proc.wait(timeout=180)
        except subprocess.TimeoutExpired:
            proc.kill()


def main():
    for p in (PORT, DISK_SRC, FONT, FONT20):
        if not os.path.exists(p):
            sys.exit(f"controlturn: {p} is missing")
    failures = []
    run(False, failures, "turn")
    run(True, failures, "queue")
    if failures:
        print("\nFAILED", flush=True)
        for f in failures:
            print("  " + f, flush=True)
        return 1
    print("\nok: one command per turn, the queue flag restores the old behaviour, and an attack still "
          "uses both of its keys", flush=True)
    return 0


if __name__ == "__main__":
    sys.exit(main())
