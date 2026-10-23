#!/usr/bin/env python3
"""u2bot.py - play Ultima II in the FM Towns emulator by reading state and sending keys.

WHY THIS EXISTS. Every runtime measurement this project has made needed a person at the emulator. Combat was
measured once, over an afternoon, because a human had to fight while another process read memory. Seven plan
items are blocked on the same thing. The bot exists to remove the human, not to finish the game.

WHAT IT DOES. Walks, attacks, passes, enters towns. Records every action with a screenshot, the character
fields, the CPU state and the action window text, so a run is a measurement rather than a log.

HOW IT TALKS TO THE GAME. Over the supervisor's HTTP API in the container:

    POST /api/keys   {text}    type characters into the VM
    POST /api/shot   {name}    screenshot into saves/analysis/
    POST /api/cmd    {line}    raw emulator console command, for MD and STA

No new server code is needed for any of that. The recording is done here, by writing files.

## What is established, and by what

    movement        one arrow key moves one square. Measured: one west step, PLAYER_X 36 to 35.
    HP              0xcde81, confirmed against the status bar which shows 385 when memory says 385.
    max HP          0xcde85
    EXPERIENCE      0xcde89, the status bar calls it E
    FOOD            0xcde8d, the status bar calls it P, and it is divided by 100 for display
    GOLD            0xcde91, the status bar calls it G
    PLAYER_X/Y      0xcdf6b / 0xcdf6f
    MAP             0xcdf53, unverified
    RNG             0xdfc78, confirmed as the LCG state

    food per turn   15, measured on two consecutive P)ass turns
    P)ass           costs 15 food, moves nothing
    A               does NOT consume a turn by itself - it waits for a direction

    A)ttack         letter, then an arrow key for the direction. Confirmed: pressing A shows "Attack with /
                    Hands! / Direct?" and the game prints "Direct with a arrow key!" in its red banner.
                    Sending A alone consumes nothing, which is how the prompt shape was established.

## The trap that matters most

    A pending prompt swallows the next key. After pressing A the game waits at "Direct?", and an arrow sent
    for movement instead became the attack direction. So the bot must know whether a prompt is up before
    sending anything. Until wait() exists, always press a key in a state you have just read.

## Usage

    python3 tools/u2bot.py state           print the current state as JSON
    python3 tools/u2bot.py press up        send one key: up down left right, or a command letter
    python3 tools/u2bot.py pass            P)ass, and record it
    python3 tools/u2bot.py walk up 3       three steps, recording each
    python3 tools/u2bot.py record NAME     screenshot, fields, CS:EIP, appended to the transcript
    python3 tools/u2bot.py tail            print the transcript so far

Design rules this follows, each learned the hard way in this project:

  - Read a value off the game's own display before trusting a memory address. Three of the addresses above
    were wrong until the player read the screen.
  - Never press Z. This build has no turn timeout, so unpausing resolves a pending turn.
  - Pause the VM before reading memory if a value must be stable. Without it the character record reads FF
    about one sample in six.
  - Record before acting, so a crash still leaves the prior state.
"""

import argparse
import json
import subprocess
import sys
import time
from datetime import datetime, timezone
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
ANALYSIS = ROOT / "saves" / "analysis"
TRANSCRIPT = ROOT / "saves" / "bot-transcript.jsonl"
API = "http://127.0.0.1:8080"

# DS-relative addresses, verified as set out in the module docstring.
FIELDS = {
    "hp": 0xcDE81,
    "maxhp": 0xcDE85,
    "exp": 0xcDE89,
    "food": 0xcDE8D,
    "gold": 0xcDE91,
    "px": 0xCDF6B,
    "py": 0xCDF6F,
    "map": 0xCDF53,
    "rng": 0xDFC78,
}

# The keys a turn is made of. Arrow keys move, letters are commands from the bar.
# The names POST /api/key accepts. Verified against supervisor.js, which passes them to xdotool.
ARROWS = {"up": "Up", "down": "Down", "left": "Left", "right": "Right"}
LETTERS = set("abcdefghijklmnopqrstuvwxyz")


# ---------------------------------------------------------------------------
# talking to the emulator
# ---------------------------------------------------------------------------


def api(path, payload=None, timeout=20):
    """POST to the supervisor. Returns parsed JSON, or raises with the body in the message."""
    cmd = ["curl", "-s", "-m", str(timeout), "-X", "POST", API + path,
           "-H", "Content-Type: application/json", "-d", json.dumps(payload or {})]
    out = subprocess.run(cmd, capture_output=True, text=True)
    if not out.stdout.strip():
        raise RuntimeError(f"{path}: empty response (stderr: {out.stderr.strip()[:200]})")
    try:
        return json.loads(out.stdout)
    except json.JSONDecodeError:
        raise RuntimeError(f"{path}: not JSON: {out.stdout[:200]}")


def md(addr, attempts=4):
    """Read one dword at a DS-relative address.

    The character record reads as FF about one sample in six while the game rewrites it, so a single read is
    not enough. Retry until a non-FF value appears, and report failure rather than returning a plausible zero.

    The MD reply is not alone in the console output: any line without a '|' separator is trace output from an
    instruction logger, and only MD lines carry one.
    """
    saw_ff = False
    for _ in range(attempts):
        res = api("/api/cmd", {"line": f"MD 14:{addr:05x}"})
        for line in res.get("output", []):
            if "|" not in line:
                continue
            body = line.split("|")[0]
            parts = body.split()
            # "0014:000CDE81 81 01 00 00 ..."
            hexbytes = [p for p in parts[1:] if len(p) == 2]
            if len(hexbytes) < 4:
                continue
            b = [int(p, 16) for p in hexbytes[:4]]
            v = b[0] | (b[1] << 8) | (b[2] << 16) | (b[3] << 24)
            if v == 0xFFFFFFFF:
                saw_ff = True
                continue
            return v
    raise RuntimeError(f"could not read 0x{addr:x}: " + ("only FF seen" if saw_ff else "unparseable"))


def state():
    """The one read interface. No address escapes this function."""
    s = {}
    for name, addr in FIELDS.items():
        s[name] = md(addr)
    # The status bar divides food by 100 for display; keep the raw value and add the displayed one.
    s["food_display"] = s["food"] // 100
    return s


def cpu():
    """CS:EIP and the segment registers, for recording. Not used for decisions yet."""
    res = api("/api/cmd", {"line": "STA"})
    out = "\n".join(res.get("output", []))
    info = {}
    for key, pat in (("cs_eip", r"CS:EIP=([0-9A-F]+):([0-9A-F]+)"),
                     ("cs_lin", r"CS=([0-9A-F]+)\(LIN:([0-9A-F]+)\)")):
        import re
        m = re.search(pat, out)
        if m:
            info[key] = m.groups()
    return info


# ---------------------------------------------------------------------------
# acting
# ---------------------------------------------------------------------------


# The red bar at the bottom of the game area is the prompt line. It is always present, so presence is not the
# signal: TEXT ON IT is. Measured on three screenshots, counting non-red pixels inside rows 455-468:
#
#   idle            56 pixels   (border artefacts)
#   at a prompt   1622 pixels   (the instruction text)
#
# A 29x separation, and the threshold below sits between them with room on both sides.
BAR_TEXT_MIN = 250


def bar_text_pixels(shot_path):
    """Count the pixels drawn on the red prompt bar. Requires Pillow."""
    from PIL import Image
    im = Image.open(shot_path).convert("RGB")
    px = im.load()
    n = 0
    for y in range(455, 469):
        for x in range(5, 637):
            if px[x, y] not in ((255, 0, 0), (0, 0, 0)):
                n += 1
    return n


def prompt_pixels():
    """Screenshot and return how much text is on the red bar."""
    info = api("/api/shot", {"name": "u2bot-wait"})
    local = ROOT / "saves" / info["file"].replace("/data/", "")
    return bar_text_pixels(local)


def wait(timeout=8.0, poll=0.15):
    """Block until the game shows a prompt, or the timeout passes. True if a prompt is up.

    THIS IS THE ONE THING THAT COULD STOP THE BOT WORKING. Sending a key while the game is mid-animation
    either gets lost or, worse, is taken by a prompt that had not been noticed. An arrow sent for movement
    became an attack direction exactly that way during the first session.

    The screen changes whenever the game is drawing, so polling for a still screen is not enough on its own.
    Waiting for the prompt bar to fill is specific: a turn resolves to either a prompt or a quiet screen.
    """
    deadline = time.monotonic() + timeout
    while time.monotonic() < deadline:
        try:
            if prompt_pixels() >= BAR_TEXT_MIN:
                return True
        except (RuntimeError, OSError, ValueError):
            pass
        time.sleep(poll)
    return False


def press(key, settle=0.25, wait_for_prompt=False):
    """Send one key and let the game settle.

    A command letter is a single character through /api/keys. An arrow is an escape sequence the emulator's
    TYPE command translates. `settle` is deliberately generous: two keys faster than the game accepts them
    loses the second, and a lost key in a fight wastes a turn.

    `wait_for_prompt` blocks until the red bar shows text, which is how a turn's outcome is observed. Off by
    default because a plain movement step generally produces no prompt.
    """
    if key in ARROWS:
        # /api/key sends a real named key through xdotool. The console TYPE command with an escape
        # sequence does NOT produce an arrow key: the game ignored it and stayed at its prompt.
        api("/api/key", {"keys": ARROWS[key]})
    elif len(key) == 1 and key.lower() in LETTERS:
        api("/api/keys", {"text": key.lower()})
    else:
        raise ValueError(f"unknown key {key!r}")
    time.sleep(settle)
    if wait_for_prompt:
        return wait()
    return None


def record(label, note="", shot=True):
    """Screenshot, fields and CPU state, appended as one JSON line. Returns the record."""
    ANALYSIS.mkdir(parents=True, exist_ok=True)
    stamp = datetime.now(timezone.utc).strftime("%Y%m%dT%H%M%S%f")
    entry = {"t": stamp, "label": label, "note": note}
    if shot:
        name = f"bot-{stamp}"
        try:
            info = api("/api/shot", {"name": name})
            entry["shot"] = info.get("file")
        except RuntimeError as e:
            entry["shot_error"] = str(e)
    try:
        entry["state"] = state()
    except RuntimeError as e:
        entry["state_error"] = str(e)
    try:
        entry["cpu"] = cpu()
    except RuntimeError as e:
        entry["cpu_error"] = str(e)
    with TRANSCRIPT.open("a") as f:
        f.write(json.dumps(entry) + "\n")
    return entry


# ---------------------------------------------------------------------------
# commands
# ---------------------------------------------------------------------------


# ---------------------------------------------------------------------------
# the fight
# ---------------------------------------------------------------------------
#
# A)ttack takes a direction. Confirmed by the game's own instruction, "Direct with a arrow key!", and by the
# fact that A alone consumed no turn. So a turn in a fight is two keys: A, then the arrow of the target.
#
# From the vision transcription of a real fight, the action log reads:
#
#     You defeated
#      Thief!
#
# and "Pass.." means the attack found nothing in that direction, which is how a miss looks.


def attack(direction="up"):
    """One attack turn: A, then the direction. Returns (before, after)."""
    before = state()
    press("a", settle=0.30, wait_for_prompt=True)
    press(direction, settle=0.30, wait_for_prompt=True)
    after = state()
    return before, after


def fight_rounds(n, direction="up"):
    """Attack up to n times, recording every turn, stopping on death or on an experience gain."""
    for i in range(n):
        before, after = attack(direction)
        hp_delta = after["hp"] - before["hp"]
        food_delta = after["food"] - before["food"]
        print("  round %d: hp %d -> %d (%+d)  food %+d  exp %d->%d"
              % (i + 1, before["hp"], after["hp"], hp_delta, food_delta, before["exp"], after["exp"]))
        record("attack", "round %d dir=%s" % (i + 1, direction))
        if after["hp"] <= 0:
            print("  the party fell")
            return
        if after["exp"] != before["exp"]:
            print("  experience gained: %+d" % (after["exp"] - before["exp"]))
            return


def cmd_attack(args):
    before, after = attack(args.dir)
    print("  hp %d -> %d" % (before["hp"], after["hp"]))
    print("  exp %d -> %d" % (before["exp"], after["exp"]))
    print("  food %d -> %d" % (before["food"], after["food"]))
    record("attack", "A then " + args.dir)


def cmd_fight(args):
    fight_rounds(args.n, args.dir)


def cmd_state(args):
    print(json.dumps(state(), indent=None if getattr(args, "compact", False) else 1))


def cmd_press(args):
    before = state()
    record("before-press", f"key={args.key}")
    press(args.key)
    after = record("after-press", f"key={args.key}")
    if "state" in after:
        a = after["state"]
        print(f"  food {before['food']} -> {a['food']}")
        print(f"  hp   {before['hp']} -> {a['hp']}")
        print(f"  x/y  {before['px']}/{before['py']} -> {a['px']}/{a['py']}")


def cmd_pass(args):
    before = state()
    record("before-pass")
    press("p")
    after = record("after-pass")
    if "state" in after:
        a = after["state"]
        print(f"  food delta {a['food'] - before['food']}")
        print(f"  moved: {a['px'] != before['px'] or a['py'] != before['py']}")


def cmd_walk(args):
    for i in range(args.n):
        before = state()
        press(args.dir)
        after = state()
        moved = (after["px"], after["py"]) != (before["px"], before["py"])
        print(f"  step {i + 1}: {'moved' if moved else 'BLOCKED'}  "
              f"{before['px']}/{before['py']} -> {after['px']}/{after['py']}  "
              f"food {before['food']} -> {after['food']}")
        record("walk", f"{args.dir} {i + 1}/{args.n}")
        if not moved:
            print("  stopped: the square is not walkable, or the game was not ready")
            return 1
    return 0


def cmd_prompt(_args):
    n = prompt_pixels()
    print(f"bar text pixels: {n}  (threshold {BAR_TEXT_MIN})  prompt showing: {n >= BAR_TEXT_MIN}")


def cmd_record(args):
    e = record(args.name or "manual", args.note or "")
    print(json.dumps(e, indent=1))


def cmd_tail(args):
    if not TRANSCRIPT.exists():
        print("no transcript yet")
        return
    lines = TRANSCRIPT.read_text().splitlines()
    for line in lines[-args.n:]:
        e = json.loads(line)
        s = e.get("state", {})
        print(f"{e['t']}  {e['label']:<14} hp={s.get('hp')} food={s.get('food')} "
              f"x/y={s.get('px')}/{s.get('py')}  {e.get('note', '')}")


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="cmd", required=True)

    st = sub.add_parser("state", help="print the current state")
    st.add_argument("--json", dest="compact", action="store_true", help="one line, for scripts")
    st.set_defaults(fn=cmd_state)

    p = sub.add_parser("press", help="send one key")
    p.add_argument("key")
    p.set_defaults(fn=cmd_press)

    sub.add_parser("pass", help="P)ass and record it").set_defaults(fn=cmd_pass)

    sub.add_parser("prompt", help="is the game showing a prompt right now").set_defaults(fn=cmd_prompt)

    a = sub.add_parser("attack", help="one attack turn: A then a direction")
    a.add_argument("dir", nargs="?", default="up", choices=sorted(ARROWS))
    a.set_defaults(fn=cmd_attack)

    f = sub.add_parser("fight", help="attack repeatedly, recording each turn")
    f.add_argument("n", type=int, nargs="?", default=5)
    f.add_argument("--dir", default="up", choices=sorted(ARROWS))
    f.set_defaults(fn=cmd_fight)

    w = sub.add_parser("walk", help="take N steps in a direction")
    w.add_argument("dir", choices=sorted(ARROWS))
    w.add_argument("n", type=int, nargs="?", default=1)
    w.set_defaults(fn=cmd_walk)

    r = sub.add_parser("record", help="screenshot, fields, CPU, appended to the transcript")
    r.add_argument("name", nargs="?")
    r.add_argument("--note", nargs="?")
    r.set_defaults(fn=cmd_record)

    t = sub.add_parser("tail", help="print the last transcript entries")
    t.add_argument("n", type=int, nargs="?", default=10)
    t.set_defaults(fn=cmd_tail)

    args = ap.parse_args()
    try:
        sys.exit(args.fn(args) or 0)
    except (RuntimeError, ValueError) as e:
        sys.exit(f"u2bot: {e}")


if __name__ == "__main__":
    main()
