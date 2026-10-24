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



# ---------------------------------------------------------------------------
# survey: walk a pattern and record everything, without needing the map
# ---------------------------------------------------------------------------
#
# walk_to needs the map's live address, which is not located. A SURVEY does not: it walks a fixed pattern and
# records what happened at every turn. That is enough to measure the food tick, find blocked squares, and record
# which squares started a fight, which is the passive-versus-aggressive question the player raised.

DIRECTION_ORDER = ["up", "right", "down", "left"]


def survey(legs, steps):
    """Walk `legs` legs of `steps` steps, turning right between legs, recording every turn.

    Deliberately dumb: no map, no pathfinding, no decisions. Every turn is recorded, so a blocked square, a
    monster encounter and a food tick are all visible in the transcript afterwards.
    """
    total = 0
    blocked = 0
    fights = 0
    for leg in range(legs):
        d = DIRECTION_ORDER[leg % 4]
        print("leg %d: %s, %d steps" % (leg + 1, d, steps))
        for i in range(steps):
            before = state()
            press(d)
            after = state()
            total += 1
            moved = (after["px"], after["py"]) != (before["px"], before["py"])
            hp_fell = after["hp"] < before["hp"]
            if not moved:
                blocked += 1
            if hp_fell:
                fights += 1
            print("  %-5s %2d/%d  %s  %s/%s->%s/%s  hp %d->%d  food %+d"
                  % (d, i + 1, steps, "moved  " if moved else "BLOCKED",
                     before["px"], before["py"], after["px"], after["py"],
                     before["hp"], after["hp"], after["food"] - before["food"]))
            record("survey", "leg %d %s %d/%d moved=%s" % (leg + 1, d, i + 1, steps, moved))
            if hp_fell:
                print("  HP fell: something attacked. Stopping this survey.")
                return {"turns": total, "blocked": blocked, "attacks": fights, "stopped": "attacked"}
    return {"turns": total, "blocked": blocked, "attacks": fights, "stopped": None}


def cmd_survey(args):
    result = survey(args.legs, args.steps)
    print("\nsurvey: %(turns)d turns, %(blocked)d blocked, %(attacks)d attacked" % result)
    record("survey-done", str(result))


# ---------------------------------------------------------------------------
# probing: build a local map by walking, without needing the map's address
# ---------------------------------------------------------------------------
#
# walk_to needs the map. The map's live address is unknown. But the party's own position is readable, and every
# turn moves it by exactly one tile or is refused. So the bot can DISCOVER its surroundings by trying: each
# direction costs one food and tells you whether the square is walkable, and where it leads.
#
# This is slow and it is honest. A 5x5 discovery costs about 8 turns, because a blocked step does not move the
# party and the retry is at the same square.
#
# It is also better than a static map in one respect: it reflects the map the game is actually using, including
# anything generated at runtime, which map-geometry.md says accounts for the first 12 rows.


def try_step(direction):
    """Attempt one step. Returns (moved, before, after). Costs one food regardless."""
    before = state()
    press(direction)
    after = state()
    moved = (after["px"], after["py"]) != (before["px"], before["py"])
    return moved, before, after


def discover(directions=None, record_each=True):
    """From the current square, try each direction and note whether it is walkable.

    Returns a dict of direction to True/False. The party ends where it started, because a successful step is
    undone by stepping back along the same axis. That costs two extra turns per walkable direction, which is
    the price of not having the map.
    """
    if directions is None:
        directions = DIRECTION_ORDER
    result = {}
    for d in directions:
        moved, before, after = try_step(d)
        result[d] = moved
        if record_each:
            record("discover", "%s walkable=%s" % (d, moved))
        if moved:
            # Step back so the next probe starts from the same square.
            back = {"up": "down", "down": "up", "left": "right", "right": "left"}[d]
            press(back)
    return result


def cmd_discover(args):
    res = discover()
    print("  walkable: " + "  ".join("%s=%s" % (k, v) for k, v in res.items()))
    record("discover-done", str(res))


# ---------------------------------------------------------------------------
# behaviour modes
# ---------------------------------------------------------------------------
#
# Two modes, both driven only by signals measured earlier in this project. Neither needs the screen read as
# text and neither needs the map's live address, so both work today.
#
# WHAT THE BOT CAN SENSE, and nothing else:
#
#   hp / maxhp        a fall means something hit the party
#   exp / gold        a rise means something was killed
#   food              falls 15 every turn, so it is a clock that never stops
#   px / py           position, so a refused step is visible
#   try_step()        whether a neighbouring square is walkable
#
# That is enough for both modes. A monster is "adjacent and attackable" if `A` followed by a direction changes
# hp, exp or gold, and "not there" if the action log says the pass found nothing. The bot does not need to read
# the log: a killed monster shows up as exp or gold rising.
#
# THIS IS A DELIBERATE LIMITATION. The bot cannot read the action log as text, because the panel font is
# proportional and the glyph table is only partly seeded. So it infers from effect rather than from words. That
# makes it slower to notice a kill and it cannot report the monster's name. It cannot be wrong about the
# arithmetic, which matters more.


class Outcome:
    """What one turn did, as far as the bot can tell."""

    def __init__(self, before, after, moved=None):
        self.before = before
        self.after = after
        self.moved = moved

    hp_delta = property(lambda self: self.after["hp"] - self.before["hp"])
    exp_delta = property(lambda self: self.after["exp"] - self.before["exp"])
    gold_delta = property(lambda self: self.after["gold"] - self.before["gold"])
    food_delta = property(lambda self: self.after["food"] - self.before["food"])

    @property
    def hit(self):
        """Something damaged the party this turn."""
        return self.hp_delta < 0

    @property
    def killed(self):
        """Something died this turn. Experience is the reliable signal; gold can come from other sources."""
        return self.exp_delta > 0

    @property
    def dead(self):
        return self.after["hp"] <= 0

    def __str__(self):
        bits = []
        if self.moved:
            bits.append("moved")
        if self.hit:
            bits.append("hit %+d" % self.hp_delta)
        if self.killed:
            bits.append("KILL exp+%d gold+%d" % (self.exp_delta, self.gold_delta))
        if self.dead:
            bits.append("DEAD")
        return ", ".join(bits) or "nothing"


def turn(direction):
    """One movement turn in `direction`, with the outcome classified."""
    before = state()
    press(direction)
    after = state()
    moved = (after["px"], after["py"]) != (before["px"], before["py"])
    return Outcome(before, after, moved)


def attack_turn(direction):
    """One attack turn: A, then the direction. Classified the same way as movement."""
    before = state()
    press("a", settle=0.30, wait_for_prompt=True)
    press(direction, settle=0.30, wait_for_prompt=True)
    after = state()
    return Outcome(before, after, None)


# --- shared: keeping a party alive -------------------------------------------------------------


def rest_if_hurt(threshold=0.5, rounds=40):
    """Pass turns until HP stops improving, or the party is at full health.

    A pass is a turn, so this costs food. It is still the only way the bot has of recovering, because healing
    needs a town and the bot cannot find one without the map.

    Stops early if HP is not rising, which is what an unrecoverable situation looks like.
    """
    total = state()
    if total["hp"] >= total["maxhp"] * threshold:
        return False
    best = total["hp"]
    for _ in range(rounds):
        before = state()
        press("p", settle=0.30)
        after = state()
        record("rest", "pass")
        if after["hp"] <= before["hp"]:
            return True
        best = max(best, after["hp"])
        if after["hp"] >= after["maxhp"]:
            return True
    return True


# --- curiosity ---------------------------------------------------------------------------------
#
# Curiosity wanders and pokes at things. It walks to unexplored squares, tries every command letter that is
# safe to try, and records what happened. It is the exploration mode: its product is a transcript of what the
# world does when touched.
#
# THE SAFE COMMANDS. The command bar has 25 entries and the key is the letter before the ')'. Several of them
# are dangerous: `Q)uit` ends the game without saving and would cost the session. The bot therefore works from
# an allow list rather than by trying every letter.
#
#   E)nter  G)et  L)ook  T)alk  O)pen  S)earch  J)ump  K)limb  U)se  P)ass
#
# Each returns to the world screen on its own, which is what makes them usable unattended.

CURIOUS_COMMANDS = ["l", "e", "g", "t", "o", "s", "j", "k", "u"]

# Commands that must never be pressed without a human. Recorded here so the reason travels with the code.
NEVER_PRESS = {
    "q": "Quit ends the session without saving",
    "n": "New character overwrites the roster",
    "d": "Descend may drop the party somewhere unrecoverable",
    "a": "Attack outside a fight wastes a turn and can start one",
    "c": "Cast consumes reagents and can kill the party",
}


def curiosity(turns=60, poke_every=7, verbose=True):
    """Wander, and poke at things. Records everything.

    Deliberately has no map and no memory of where it has been beyond a local heuristic: prefer a direction it
    has not recently used, and avoid the square it just came from. That is enough to avoid walking into the same
    wall forever, which is the failure the first survey had.
    """
    history = []
    last = None
    pokes = 0
    stats = {"turns": 0, "moved": 0, "blocked": 0, "pokes": 0, "attacked": 0, "kills": 0}

    for i in range(turns):
        st = state()

        if st["hp"] <= 0:
            if verbose:
                print("  the party fell on turn %d" % i)
            break

        # Every so often, try a command. `poke_every` is small enough to find things and large enough that
        # most turns are movement, so the party actually gets somewhere.
        if i and i % poke_every == 0:
            cmd = CURIOUS_COMMANDS[(i // poke_every) % len(CURIOUS_COMMANDS)]
            before = state()
            press(cmd, settle=0.40, wait_for_prompt=True)
            after = state()
            pokes += 1
            stats["pokes"] += 1
            label = "poke-" + cmd
            record(label, "curiosity")
            if verbose:
                print("  poke %-2s  hp %+d exp %+d food %+d" %
                      (cmd, after["hp"] - before["hp"], after["exp"] - before["exp"],
                       after["food"] - before["food"]))
            # Any command may have opened a submenu. A single pass clears the ones that only print a line.
            press("p", settle=0.30)
            continue

        # Choose a direction: not the way we came, and prefer one that worked before.
        back = {"up": "down", "down": "up", "left": "right", "right": "left"}.get(last)
        order = [d for d in DIRECTION_ORDER if d != back]
        if len(history) >= 2 and history[-2] in order:
            order.remove(history[-2])
            order.append(history[-2])

        result = None
        for d in order:
            result = turn(d)
            stats["turns"] += 1
            if result.moved:
                last = d
                history.append(d)
                stats["moved"] += 1
                break
            stats["blocked"] += 1
            if result.dead:
                break
        record("curiosity", "%s %s" % (last, result))
        if result is None:
            continue

        if result.dead:
            if verbose:
                print("  the party fell")
            break
        if result.killed:
            stats["kills"] += 1
        if result.hit:
            stats["attacked"] += 1
            if verbose:
                print("  turn %3d  %s  hp %d/%d" % (i, result, result.after["hp"], result.after["maxhp"]))
            # Something is adjacent and hostile. Curiosity does not fight: it records and moves on, which is
            # the difference between this mode and berserker.
        elif verbose and result.moved:
            print("  turn %3d  %-5s  %2d/%2d  food %d" %
                  (i, last, result.after["px"], result.after["py"], result.after["food_display"]))

        if result.after["hp"] < result.after["maxhp"] * 0.4:
            if verbose:
                print("  hp low (%d/%d), resting" % (result.after["hp"], result.after["maxhp"]))
            rest_if_hurt()

    return stats


def cmd_curiosity(args):
    stats = curiosity(args.turns, args.poke_every)
    print("\ncuriosity: %(turns)d turns, %(moved)d moved, %(blocked)d blocked, "
          "%(pokes)d pokes, %(attacked)d attacked, %(kills)d kills" % stats)
    record("curiosity-done", str(stats))


# --- berserker ---------------------------------------------------------------------------------
#
# Berserker hunts. It probes for a target, attacks until nothing is left, and when the neighbourhood is empty
# it goes looking for a town or a moongate.
#
# HOW IT FINDS A MONSTER. There is no monster table to read and the map is not addressable, so it uses the
# cheapest reliable test: attack in a direction. If the attack changed hp, exp or gold, something was there.
# If nothing changed, the pass found nothing and that direction is clear for now.
#
# That is one wasted turn per empty direction, which is why the search order matters: try the direction the
# party is already facing, then the others, before moving.

FACING = {"up": ["up", "left", "right", "down"],
          "down": ["down", "left", "right", "up"],
          "left": ["left", "up", "down", "right"],
          "right": ["right", "up", "down", "left"]}


def hunt(max_rounds=40, verbose=True):
    """Attack everything adjacent until nothing responds. Returns the number of kills."""
    kills = 0
    misses = 0
    for r in range(max_rounds):
        found = False
        for d in FACING["up"]:
            res = attack_turn(d)
            record("hunt", "dir=%s" % d)
            if res.dead:
                if verbose:
                    print("  the party fell")
                return kills
            if res.killed:
                kills += 1
                misses = 0
                found = True
                if verbose:
                    print("  KILL  round %2d %-5s  exp %d (%+d)  gold %d (%+d)  hp %d/%d"
                          % (r, d, res.after["exp"], res.exp_delta, res.after["gold"],
                             res.gold_delta, res.after["hp"], res.after["maxhp"]))
                break
            if res.hit:
                # Something hit back, so it is alive and adjacent. Keep attacking it.
                found = True
                if verbose:
                    print("  hit   round %2d %-5s  hp %d/%d (%+d)"
                          % (r, d, res.after["hp"], res.after["maxhp"], res.hp_delta))
                break
        if not found:
            misses += 1
            if misses >= 2:
                if verbose:
                    print("  nothing adjacent for %d rounds: the fight is over" % misses)
                return kills
        if state()["hp"] < state()["maxhp"] * 0.35:
            if verbose:
                print("  hp low, resting")
            rest_if_hurt()
    return kills


def seek(max_turns=80, verbose=True):
    """Walk until something is adjacent. Returns the direction it found, or None.

    This is the "no monsters left here" behaviour: move, probe, repeat. A town or moongate shows up as a
    command succeeding where open ground gives nothing, which is why `E)nter` is part of the probe.
    """
    for t in range(max_turns):
        for d in DIRECTION_ORDER:
            res = turn(d)
            record("seek", d)
            if res.dead:
                return None
            if res.hit or res.killed:
                if verbose:
                    print("  turn %3d  found something in %s: %s  at %d/%d"
                          % (t, d, res, res.after["px"], res.after["py"]))
                return d
            if res.moved:
                if verbose:
                    print("  turn %3d  %-5s to %d/%d  food %d"
                          % (t, d, res.after["px"], res.after["py"], res.after["food_display"]))
                break
        # A town, a moongate or a shop announces itself by accepting a command. Try entering before moving on.
        if t and t % 6 == 0:
            before = state()
            press("e", settle=0.40, wait_for_prompt=True)
            after = state()
            if after["map"] != before["map"]:
                if verbose:
                    print("  ENTERED something: map %d -> %d" % (before["map"], after["map"]))
                return "enter"
            press("p", settle=0.25)
    return None


def berserker(cycles=6, verbose=True):
    """Hunt locally, then seek, then hunt again. Stops when the party falls."""
    total = {"kills": 0, "cycles": 0}
    for c in range(cycles):
        print("\ncycle %d" % (c + 1))
        kills = hunt(verbose=verbose)
        total["kills"] += kills
        total["cycles"] += 1
        st = state()
        if st["hp"] <= 0:
            print("  the party fell")
            break
        if st["hp"] < st["maxhp"] * 0.5:
            print("  hp %d/%d, resting before seeking" % (st["hp"], st["maxhp"]))
            rest_if_hurt()
        print("  seeking")
        where = seek(verbose=verbose)
        if where is None:
            print("  found nothing and could not enter anywhere")
            break
        print("  seek result: %s" % where)
    st = state()
    print("\nberserker: %(kills)d kills over %(cycles)d cycles, hp %d/%d, exp %d, gold %d"
          % dict(total, hp=st["hp"], maxhp=st["maxhp"], exp=st["exp"], gold=st["gold"]))
    record("berserker-done", str(total))
    return total


def cmd_berserker(args):
    berserker(args.cycles)


def cmd_hunt(args):
    kills = hunt(args.rounds)
    print("\nhunt: %d kills" % kills)


def cmd_seek(args):
    where = seek(args.turns)
    print("\nseek: %s" % (where or "nothing found"))


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

    cu = sub.add_parser("curiosity", help="wander and poke at things")
    cu.add_argument("turns", type=int, nargs="?", default=60)
    cu.add_argument("--poke-every", type=int, default=7)
    cu.set_defaults(fn=cmd_curiosity)

    be = sub.add_parser("berserker", help="hunt monsters, then seek a town or moongate")
    be.add_argument("cycles", type=int, nargs="?", default=6)
    be.set_defaults(fn=cmd_berserker)

    hu = sub.add_parser("hunt", help="attack everything adjacent, then stop")
    hu.add_argument("rounds", type=int, nargs="?", default=40)
    hu.set_defaults(fn=cmd_hunt)

    se = sub.add_parser("seek", help="walk until something is adjacent or somewhere is entered")
    se.add_argument("turns", type=int, nargs="?", default=80)
    se.set_defaults(fn=cmd_seek)

    dv = sub.add_parser("discover", help="probe which neighbouring squares are walkable")
    dv.set_defaults(fn=cmd_discover)

    sv = sub.add_parser("survey", help="walk a square pattern, recording every turn")
    sv.add_argument("legs", type=int, nargs="?", default=4)
    sv.add_argument("steps", type=int, nargs="?", default=5)
    sv.set_defaults(fn=cmd_survey)

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
