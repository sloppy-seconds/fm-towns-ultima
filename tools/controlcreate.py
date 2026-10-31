#!/usr/bin/env python3
"""tools/controlcreate.py - defect 3: create a character through the control socket, from a clean save disk.

Ultima II's Generate Character -> Create asks for the save slot as a digit ("Create Entry (1-4) # 0"). The port
once dropped every digit before it reached the guest, so the prompt could not be answered and creation was a dead
end. See docs/port-defects.md entry 3 for the diagnosis and docs/fmtownskit-patches.md for the kit change that
fixes it, pinned at 4028a76. Against an older kit this test fails, and it says so by name.

This drives the whole route with nothing but the socket: no display, no xdotool, no vision model. The port runs
under SDL's dummy video driver and every key arrives as a pushed SDL event.

What is asserted, and why each one is needed:

  1. the entry field accepts a digit (the frame leaves the create prompt at all)
  2. the allocation, race, sex, type and name prompts advance
  3. the register screen after creation hashes to the frame recorded from the run whose screen was transcribed by
     eye as "4: JAMES   Male   Human   Fighter" (see docs/port-defects.md entry 3). A hash cannot spell a name,
     so the transcription lives in the docs and the hash is the cheap repeatable stand-in for it.
  4. a second run of the same schedule produces the same hashes, so 3 is a measurement and not a coincidence

Exit 0 only if all four hold. Exit 1 with a named cause otherwise.

Usage: controlcreate.py <port> <clean-save-disk.hdm> <font-rom> <font20-rom> <ENCHANT.EXP> <TBIOS.BIN> <disc.cue>
The disk is copied to a scratch file first and the file it was given is never touched.
"""
import base64
import hashlib
import json
import os
import re
import shutil
import socket
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

# Recorded from the run whose screens were transcribed by eye, one frame per key, at 200 frames per step.
CREATE_PROMPT = "c22c4f479ce281df"   # "Create Entry (1-4) # 0", waiting for a digit
ENTRY_ACCEPTED = "0d5aef78ddac10f7"  # the field shows a value after the digit
ALLOCATION = "613551c29db6fa8d"      # "Points: 30", Strength 10, the rest blank
CONFIRM = "7633b81aca2dde28"         # "Create JAMES --Create?  O. K. ? (Y/N)"
CREATED = "ef14d52f52483d6b"         # final stats, "Press Space"
REGISTER = "b12305077c9f201a"        # the register, with "4: JAMES   Male   Human   Fighter"

# The route, one entry per key. The digit is 4 and it selects entry 4. It used to take 3 to get there, which was a
# misaligned row in the kit's key table, not a property of the game; see docs/port-defects.md defect 3.
ROUTE = [
    "space", "Down", "Return",          # splash -> menu -> Generate Character
    "Down", "Return",                   # sub-menu -> Create a Character
    "4", "Return",                      # entry 4 -> allocation
    "Return", "Return", "Return", "Return", "Return", "Return",  # six attributes at the default 10
    "H", "M", "F",                      # Race Human, Sex Male, Type Fighter
    "J", "A", "M", "E", "S",            # name, one key at a time
    "Return",                           # -> "O. K. ? (Y/N)"
    "Y",                                # -> created, "Press Space"
    "space",                            # back to the create prompt
    "Return",                           # back to the sub-menu
    "Return",                           # "Examine the Register" -> the register
]
CHECKPOINTS = {6: ("digit accepted at the create prompt", ENTRY_ACCEPTED),
               7: ("allocation screen", ALLOCATION),
               22: ("creation confirmation", CONFIRM),
               23: ("character created", CREATED),
               26: ("register lists the new character", REGISTER)}


def start(disk, errlog):
    env = dict(os.environ)
    env.update({"SDL_VIDEODRIVER": "dummy", "SDL_AUDIODRIVER": "dummy", "U2_FONT": FONT, "U2_FONT20": FONT20})
    env.pop("DISPLAY", None)
    for p in (ENCHANT, TBIOS, CUE):
        if not os.path.exists(p):
            sys.exit(f"controlcreate: {p} is missing. Extract the module first (tools/getfile.js).")
    return subprocess.Popen([PORT, "--graphics=sdl", "--frames=60000", "--control=127.0.0.1:0",
                             ENCHANT, TBIOS, CUE, disk],
                            stdout=subprocess.PIPE, stderr=open(errlog, "wb"), text=True, env=env)


class Control:
    def __init__(self, proc):
        bound = None
        while True:
            line = proc.stdout.readline()
            if not line:
                sys.exit("controlcreate: the port exited before binding a control socket")
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

    def step(self, n):
        while n > 0:
            d = min(200, n)
            self.cmd(cmd="frame", n=d)
            n -= d

    def close(self):
        try:
            self.cmd(cmd="quit")
        except OSError:
            pass


def run_once(disk, step_frames, errlog):
    """Return (hashes, died_at). hashes[0] is the frame before any key; died_at is None or the step that lost the port."""
    proc = start(disk, errlog)
    hashes, died = [], None
    try:
        ctl = Control(proc)
        ctl.step(step_frames)
        hashes.append(hashlib.sha256(b64(ctl.cmd(cmd="shot").get("png", ""))).hexdigest()[:16])
        for key in ROUTE:
            ctl.cmd(cmd="key", key=key)
            ctl.step(step_frames)
            hashes.append(hashlib.sha256(b64(ctl.cmd(cmd="shot").get("png", ""))).hexdigest()[:16])
        ctl.close()
    except (BrokenPipeError, ConnectionResetError, OSError):
        died = len(hashes)              # the port died during this step
    finally:
        try:
            proc.wait(timeout=180)
        except subprocess.TimeoutExpired:
            proc.kill()
    return hashes, died


def b64(s):
    return base64.b64decode(s) if s else b""


def tail(path, n=4):
    try:
        return "".join(open(path, errors="replace").readlines()[-n:]).strip()
    except OSError:
        return ""


def main():
    if not os.path.exists(DISK_SRC):
        sys.exit(f"controlcreate: no save disk at {DISK_SRC}")
    scratch = tempfile.mkdtemp(prefix="controlcreate-")
    disk = os.path.join(scratch, "scratch.hdm")
    shutil.copyfile(DISK_SRC, disk)

    failures = []
    first, died = run_once(disk, 200, os.path.join(scratch, "port.err"))
    if died is not None:
        failures.append(f"the port died during step {died} of {len(ROUTE)}: {tail(os.path.join(scratch, 'port.err'))[-300:]}")
    for idx, (label, want) in CHECKPOINTS.items():
        got = first[idx] if idx < len(first) else None
        if got != want:
            failures.append(f"step {idx} ({label}): expected {want}, got {got}")
            if idx == 6 and got == CREATE_PROMPT:
                failures.append("the digit never reached the game: the entry field is still at its idle frame. "
                                "This is the kPcToTowns defect, fixed in kit commit 4028a76")
    second, died2 = run_once(disk, 200, os.path.join(scratch, "port2.err"))
    if died2 is not None:
        failures.append(f"the port died during step {died2} of the second run")
    if first != second:
        diff = [i for i in range(max(len(first), len(second))) if first[i:i + 1] != second[i:i + 1]]
        failures.append(f"not reproducible: runs differ at steps {diff[:6]}")

    shutil.rmtree(scratch, ignore_errors=True)
    if failures:
        print("controlcreate: FAILED")
        for f in failures:
            print("  " + f)
        return 1
    print(f"controlcreate: ok, {len(ROUTE)} keys drove creation and the register matches across two runs")
    return 0


if __name__ == "__main__":
    sys.exit(main())
