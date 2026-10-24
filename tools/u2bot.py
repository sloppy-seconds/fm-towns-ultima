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
from dataclasses import dataclass
from datetime import datetime, timezone
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
ANALYSIS = ROOT / "saves" / "analysis"
TRANSCRIPT = ROOT / "saves" / "bot-transcript.jsonl"
API = "http://127.0.0.1:8080"

# DS-relative addresses, verified as set out in the module docstring.
# `map` is kept as the label the status used, but see World.check_area: the field at 0xcdf53 counts turns, it
# does not identify a map. Reported as `turn` as well so nothing reads it as a location.
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
    """The one read interface. No address escapes this function.

    A field that cannot be read retries and then raises, because a silently wrong number is worse than a stop.
    But a field that fails DURING a transition should not end a run: the game rewrites the record while it
    loads a new area, and one field reading FF for the whole retry window is normal then. So a failure is
    retried once after a pause, and only then raises.
    """
    s = {}
    for name, addr in FIELDS.items():
        try:
            s[name] = md(addr)
        except RuntimeError:
            time.sleep(0.7)
            s[name] = md(addr, attempts=8)
    # The status bar divides food by 100 for display; keep the raw value and add the displayed one.
    s["food_display"] = s["food"] // 100
    # A maxhp of 0 is not a real state, it is a bad read of a field the game was rewriting. Re-read it rather
    # than carrying a zero into a division. Measured: one cycle reported hp 344/0 mid-transition.
    if s["maxhp"] == 0:
        for _ in range(6):
            time.sleep(0.20)
            v = md(FIELDS["maxhp"])
            if v:
                s["maxhp"] = v
                break
    # The field at 0xcdf53 counts actions, so expose it under that name too and stop calling it a map.
    s["turn"] = s["map"]
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
    stats = {"turns": 0, "moved": 0, "blocked": 0, "pokes": 0, "attacked": 0, "kills": 0, "fled": 0}

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
            disp = disposition("curious", last_hit=abs(result.hp_delta))
            if verbose:
                print("  turn %3d  %s  hp %d/%d  %s"
                      % (i, result, result.after["hp"], result.after["maxhp"], disp))
            # INTERACT FIRST, AS A PLAYER WOULD. Something has made contact. Try the harmless things before
            # committing to a fight, because a fight is expensive and irreversible while look and talk are not.
            if not disp.wants_fight():
                if verbose:
                    print("    not strong enough: probing passively, then leaving")
                probe_passive(verbose)
                if disp.should_flee():
                    if verbose:
                        print("    hp low, running")
                    flee_from(last or "up", verbose)
                    stats["fled"] = stats.get("fled", 0) + 1
                    continue
            else:
                # Strong enough. Attack the direction the hit came from. `last` is the direction just moved, and
                # the contact arrived from it, so it is the best guess at where the monster is.
                if verbose:
                    print("    strong enough: fighting")
                fight_dir = last or "up"
                for _r in range(8):
                    res2 = attack_turn(fight_dir)
                    if res2.killed:
                        stats["kills"] += 1
                        if verbose:
                            print("    KILL  exp %+d gold %+d" % (res2.exp_delta, res2.gold_delta))
                        break
                    if res2.dead:
                        break
                    if not res2.hit and not res2.killed:
                        break
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


# ---------------------------------------------------------------------------
# the tracker: walk to the nearest monster, kill it, move to the next
# ---------------------------------------------------------------------------
#
# WHAT WAS WRONG WITH THE FIRST HUNTER. `hunt()` swept the four directions every round starting from
# `FACING["up"]`, which is a hardcoded key rather than the party's facing, so it never aimed. And `seek()`
# returned the direction a monster was sensed in and `berserker()` discarded it, which is why the bot walked
# north past two monsters to the west. It could attack. It could not HUNT.
#
# WHAT THIS DOES INSTEAD, which is the player's specification:
#
#   1. sense each adjacent direction and remember which one answered, and from which square
#   2. if one answered, attack it until it stops answering, then look again
#   3. if none answered, walk one step toward the last square that did
#   4. re-sense after every single step, because monsters move
#   5. if nothing ever answered, wander as curiosity does and sense as it goes
#
# The memory is a small list of sighting squares with a timestamp, not a map. That is deliberate: the map's live
# address is still unknown, and a sighting list is all the bot needs to walk toward something it has seen.
#
# THE SENSING COST. One attack in an empty direction is a wasted turn, because `A` takes a direction and consumes
# the turn whether or not anything is there. There is no cheaper sense available. So sensing is done only where
# it is likely to pay: adjacent to a remembered sighting, and after every step while chasing.

SENSE_DIRS = ["up", "down", "left", "right"]
STEP = {"up": (0, -1), "down": (0, 1), "left": (-1, 0), "right": (1, 0)}


class Sighting:
    """Something was attacked from this square and it responded."""

    def __init__(self, x, y, turn):
        self.x = x
        self.y = y
        self.turn = turn

    def distance(self, x, y):
        return abs(self.x - x) + abs(self.y - y)

    def __repr__(self):
        return f"Sighting({self.x},{self.y},t{self.turn})"


# ---------------------------------------------------------------------------
# world memory: what the bot has learned about squares, and how it decides where to go
# ---------------------------------------------------------------------------
#
# TWO FAILURES THIS FIXES, both seen in a live run.
#
# 1. A CLOSED LOOP. The first explore() sorted candidate directions by how often they had been used, so it kept
#    picking the same least-used set in the same order: 36/7 -> 36/6 -> 35/6 -> 35/7 -> 36/7, forever, four
#    squares, no progress. Frequency is the wrong signal. What is needed is a record of which squares have been
#    VISITED, so unexplored ground is preferred over any ground already walked.
#
# 2. NO IDEA WHAT BLOCKED IT. A refused step was reported as a step. The bot could not tell a mountain from
#    water from a town wall from a letter tile, so it retried the same blocked direction repeatedly.
#
# A refused step is the only terrain sample available without the map, and it is a PERMANENT one on the overworld
# and in a town: mountains do not become grass, walls do not open. So one refusal is enough to mark a square
# blocked for the rest of the session.
#
# WHAT A REFUSAL DOES NOT TELL YOU. It does not say WHICH terrain blocked it, only that it is impassable. The
# player's description is the guide: mountains and water on the overworld, walls and letters in towns. Naming the
# terrain would need the map cell value, which needs the map's address, which is still unknown. So this records
# "blocked", not "water", and says so rather than pretending.
#
# Memory is keyed by (map, x, y) because the same coordinates in a different town are different squares. `map`
# is read every turn and changes on a transition, which is how a town is known to be a town.

BLOCKED_FILENAME = "blocked.jsonl"


def blocked_path():
    return ROOT / "saves" / BLOCKED_FILENAME


# ---------------------------------------------------------------------------
# terrain classes, learned by observation and generalised
# ---------------------------------------------------------------------------
#
# THE PROBLEM THE OLD WORLD HAD. It recorded "this square is blocked". It could never learn anything, because a
# blocked square said nothing about any other square. Encountering one mountain taught it one square.
#
# WHAT THIS DOES INSTEAD. It records what the bot OBSERVED about a square when it was there, and when a walk is
# refused it asks which observation best predicts that. Over time a class emerges: "squares that looked like
# this were impassable". That is generalisation from evidence, and it is the player's own rule, which is that
# failing to walk through a mountain teaches you that mountains cannot be traversed.
#
# WHAT IS OBSERVABLE WITHOUT THE MAP. The map's live address is not known, and three attempts to find it produced
# wrong answers: values at the party's own square did not distinguish walkable ground from water, so nothing
# keyed on those bytes is trustworthy. What IS observable, per square:
#
#   the terrain COLOUR under the party, sampled from the screenshot at the party's screen position
#   whether a step out of the square succeeded, in each direction
#   whether an attack from the square found anything
#
# Colour is the honest signal available. It is not the tile index, and two different terrains may share a colour,
# so the classes are named by colour and the bot says so rather than claiming "mountain".
#
# WHY COLOUR IS ENOUGH TO GENERALISE. Mountains render as one colour and occupy runs; so does water, grass and
# forest. Two squares with the same colour are, for the purposes of "can I walk here", the same bet. That is
# exactly the generalisation the player described: learn one mountain, know all mountains.

# THE MAP PANEL GEOMETRY, MEASURED. This replaced a wrong assumption, so the numbers and how they were got are
# both here.
#
# The panel carries a blue border with a white inner line. Measured on a live 1024x800 screenshot:
#
#   blue border      x 2-10 and x 368-370,  y 64-66 and y 419+
#   white inner line x 1 and x 11 and x 371-372,  y 67 and y 418
#   terrain interior x 12-367,  y 68-417        that is 356 by 350 pixels
#
# The grid is 11 by 11. That was NOT assumed from the reference documents: scanning the interior for the columns
# with the most colour changes returned 59, 91, 123, 155, 187, 219, which is an exact arithmetic sequence with
# step 32. A tile boundary is where the most colours change, so the pitch is 32 pixels and 11 tiles span 352.
#
# The party's own position was then found independently: counting white, red and magenta pixels per cell, the
# densest cell is column 5, row 5, which is index 60 of 121 and the exact centre. So the party is at the centre,
# as the player said, and that is now measured rather than taken on trust.

MAP_INTERIOR = (12, 68, 367, 417)
VIEW = 11
VIEW_CENTRE = 5
CENTRE_INDEX = VIEW_CENTRE * VIEW + VIEW_CENTRE      # 60

# Sampling radius inside a tile. The tile is 32 pixels and its art is dithered, so sampling the centre avoids
# the edge where one tile's border meets the next.
SAMPLE_RADIUS = 6

# The map's palette is flat: 13 distinct colours, no anti-aliasing, measured. So a tile sample can be exact
# rather than fuzzy, and no colour-distance metric is needed.
TERRAIN_COLOURS = {
    (0, 255, 0): ".",        # green, open ground
    (255, 255, 0): "y",      # yellow, sand or road
    (0, 0, 0): " ",          # black, void or interior
    (255, 255, 255): "W",    # white, structure edge
    (0, 34, 238): "b",       # blue border
    (0, 0, 255): "B",        # blue, water
    (0, 255, 255): "C",      # cyan
    (255, 0, 0): "R",        # red
    (0, 128, 0): "f",        # dark green, forest
    (128, 0, 0): "r",        # dark red
    (128, 128, 128): "8",    # grey, stone
    (0, 0, 128): "n",        # navy
    (128, 0, 128): "M",      # magenta
    (0, 128, 128): "c",      # teal
}


def cell_box(col, row):
    """Pixel bounds of one viewport cell. Integer arithmetic so adjacent cells cannot overlap or leave a gap."""
    x0, y0, x1, y1 = MAP_INTERIOR
    w, h = x1 - x0, y1 - y0
    return (x0 + col * w // VIEW, y0 + row * h // VIEW,
            x0 + (col + 1) * w // VIEW, y0 + (row + 1) * h // VIEW)


def sample_cell(px, col, row):
    """The terrain symbol at one cell: the most common colour in a small box at its centre."""
    bx0, by0, bx1, by1 = cell_box(col, row)
    cx, cy = (bx0 + bx1) // 2, (by0 + by1) // 2
    counts = {}
    for y in range(cy - SAMPLE_RADIUS, cy + SAMPLE_RADIUS + 1):
        for x in range(cx - SAMPLE_RADIUS, cx + SAMPLE_RADIUS + 1):
            p = px[x, y]
            counts[p] = counts.get(p, 0) + 1
    if not counts:
        return "?"
    colour = max(counts, key=counts.get)
    return TERRAIN_COLOURS.get(colour, "?")


def viewport(shot=None):
    """The 11 by 11 window around the party, as 121 symbols in row-major order.

    Index 60 is the party's own cell. Returns a dict with the grid, a rendering, and how many cells came back
    unknown, because a reading that is mostly unknown should never be presented as a result.
    """
    from PIL import Image
    if shot is None:
        info = api("/api/shot", {"name": "viewport"})
        shot = ROOT / "saves" / info["file"].replace("/data/", "")
    im = Image.open(shot).convert("RGB")
    px = im.load()
    if im.width <= MAP_INTERIOR[2] or im.height <= MAP_INTERIOR[3]:
        raise RuntimeError("screenshot is %dx%d, too small for the measured map interior"
                           % (im.width, im.height))
    cells = []
    for row in range(VIEW):
        for col in range(VIEW):
            cells.append(sample_cell(px, col, row))
    unknown = sum(1 for c in cells if c == "?")
    rows = ["".join(cells[r * VIEW:(r + 1) * VIEW]) for r in range(VIEW)]
    return {"cells": cells, "rows": rows, "unknown": unknown, "shot": str(shot),
            "party": cells[CENTRE_INDEX]}


def render_viewport(v):
    """The viewport as a string, with the party's own cell marked."""
    out = []
    for i, row in enumerate(v["rows"]):
        if i == VIEW_CENTRE:
            row = row[:VIEW_CENTRE] + "@" + row[VIEW_CENTRE + 1:]
        out.append(row)
    return "\n".join(out)


def cmd_viewport(args):
    v = viewport()
    print(render_viewport(v))
    print()
    print("party cell %d (col %d, row %d) shows %r"
          % (CENTRE_INDEX, VIEW_CENTRE, VIEW_CENTRE, v["party"]))
    print("unknown cells: %d of %d" % (v["unknown"], VIEW * VIEW))
    if args.json:
        print(json.dumps({k: v[k] for k in ("cells", "unknown", "party")}))
    record("viewport", "unknown=%d" % v["unknown"])


class TerrainBook:
    """What the bot knows about terrain, by colour class.

    Stored as counts, not verdicts, so a class with one observation is not treated like a class with fifty.
    """

    def __init__(self, path=None):
        self.path = path or (ROOT / "saves" / "terrain.json")
        self.classes = {}      # signature -> {"walk": n, "blocked": n}
        self.load()

    def load(self):
        if self.path.exists():
            try:
                self.classes = json.loads(self.path.read_text())
            except ValueError:
                self.classes = {}

    def save(self):
        self.path.parent.mkdir(parents=True, exist_ok=True)
        self.path.write_text(json.dumps(self.classes, indent=1, sort_keys=True))

    def observe(self, sig, walkable):
        c = self.classes.setdefault(sig, {"walk": 0, "blocked": 0})
        c["walk" if walkable else "blocked"] += 1

    def predict(self, sig):
        """What is this class likely to do? Returns True, False, or None for no opinion.

        Needs at least three observations before it will guess, and only guesses when the majority is decisive.
        A wrong confident guess is worse than none: it makes the bot walk into a wall repeatedly.
        """
        c = self.classes.get(sig)
        if not c:
            return None
        total = c["walk"] + c["blocked"]
        if total < 3:
            return None
        if c["blocked"] == 0:
            return True
        if c["walk"] == 0:
            return False
        return True if c["walk"] > c["blocked"] * 2 else (False if c["blocked"] > c["walk"] * 2 else None)

    def summary(self):
        out = []
        for sig, c in sorted(self.classes.items(), key=lambda kv: -(kv[1]["walk"] + kv[1]["blocked"])):
            n = c["walk"] + c["blocked"]
            out.append("%s walk=%d blocked=%d" % (sig, c["walk"], c["blocked"]))
        return out


def tile_colour_at(x, y, shot=None):
    """The terrain symbol at world square (x, y), read from the viewport.

    The viewport shows a world window centred on the party, so a world square maps to a viewport cell by its
    offset from the party. A square outside the window returns "out-of-view" rather than a wrong answer.

    This replaces a version that divided the panel into 64 columns. The panel is 11 tiles across, measured from
    an exact 32-pixel boundary pitch, so that version sampled unrelated pixels.
    """
    st = state()
    col = VIEW_CENTRE + (x - st["px"])
    row = VIEW_CENTRE + (y - st["py"])
    if not (0 <= col < VIEW and 0 <= row < VIEW):
        return "out-of-view"
    from PIL import Image
    if shot is None:
        info = api("/api/shot", {"name": "terrain-sig"})
        shot = ROOT / "saves" / info["file"].replace("/data/", "")
    im = Image.open(shot).convert("RGB")
    return sample_cell(im.load(), col, row)


def tile_colour(sig_args=None):
    """The terrain symbol under the party, which is the viewport's centre cell."""
    return viewport()["party"]


class World:
    """What the bot has learned: blocked squares, visited squares, and where it has tried to go."""

    def __init__(self, load=True):
        # Position only. The `map` field is kept as a label, not as part of the key, because it proved unstable:
        # see the note above. A change in it is treated as a move to a new area.
        self.blocked = set()      # (x, y) known impassable, in the current area
        self.visited = set()      # (x, y) stood on, in the current area
        self.area = None          # last seen turn counter, kept only for the record
        self.areas_seen = []      # values observed, for the record
        self.area_changes = 0
        self.transitions = 0      # a position jump of more than one tile
        self.terrain = TerrainBook()
        self.sig_cache = {}
        self.last = None
        self.last_recent_x = 0
        self.last_recent_y = 0
        if load:
            self.load()

    # --- persistence, so a long run survives a restart ---------------------------------------

    def load(self):
        p = blocked_path()
        if not p.exists():
            return
        for line in p.read_text().splitlines():
            try:
                e = json.loads(line)
                self.blocked.add((e["x"], e["y"]))
            except (ValueError, KeyError):
                continue

    def save(self):
        p = blocked_path()
        p.parent.mkdir(parents=True, exist_ok=True)
        with p.open("w") as f:
            for x, y in sorted(self.blocked):
                f.write(json.dumps({"x": x, "y": y}) + "\n")

    # --- learning ----------------------------------------------------------------------------

    def note(self, st):
        """Record a visit. A position jump of more than one tile is a transition, not movement."""
        if self.last and abs(st["px"] - self.last[0]) + abs(st["py"] - self.last[1]) > 1:
            self.transitions += 1
            self.blocked.clear()
            self.visited.clear()
        self.last = (st["px"], st["py"])
        self.visited.add((st["px"], st["py"]))

    def mark_blocked(self, st, direction):
        """A refusal. Records the square AND teaches the terrain class, which is what generalises.

        Calls tile_colour(), which is a screenshot, so this is the expensive path. It runs only on a refusal or a
        first visit, not on every step.
        """
        dx, dy = STEP[direction]
        self.blocked.add((st["px"] + dx, st["py"] + dy))
        try:
            sig = self.sig_for(st["px"] + dx, st["py"] + dy)
        except (RuntimeError, OSError, ValueError):
            return
        if sig:
            self.terrain.observe(sig, False)
            self.terrain.save()

    def mark_walked(self, st):
        """A success. Teaches that this class is passable."""
        try:
            sig = self.sig_for(st["px"], st["py"])
        except (RuntimeError, OSError, ValueError):
            return
        if sig:
            self.terrain.observe(sig, True)
            self.terrain.save()

    def sig_for(self, x, y):
        """The colour signature at a square. Cached, because one screenshot serves a whole neighbourhood."""
        key = (x, y)
        if key in self.sig_cache:
            return self.sig_cache[key]
        sig = tile_colour_at(x, y)
        self.sig_cache[key] = sig
        return sig

    def likely_blocked(self, x, y):
        """Should the bot bet that this square is impassable, without trying it?"""
        if (x, y) in self.blocked:
            return True
        try:
            sig = self.sig_for(x, y)
        except (RuntimeError, OSError, ValueError):
            return False
        return self.terrain.predict(sig) is False

    def check_area(self, st):
        """Do NOTHING on a change, and that is the correction.

        The field at 0xcdf53 was believed to be `MAP` and used as a location identity. It is not. It increments
        by one on every action, including a blocked move that does not change px or py, so it is a turn or step
        counter. Keying blockages on it filed every square under an id that never recurred, which is why the bot
        retried the same wall 64 times.

        So the field is now recorded as `turn` and is not an identity. The world is keyed on position alone and
        is only cleared when the party's position is far enough away that a transition is certain.
        """
        self.area = st.get("turn", st.get("map"))
        return False

    def is_blocked(self, m, x, y):
        return (x, y) in self.blocked

    def is_known(self, m, x, y):
        return (x, y) in self.visited or (x, y) in self.blocked

    # --- choosing where to go ----------------------------------------------------------------

    def frontier(self, m, x, y, radius=12):
        """The nearest square that is adjacent to a visited square but has not been walked.

        This is the exploration target. Chasing a frontier rather than a direction is what stops the closed loop:
        once a square is visited, it is never a target again.
        """
        best = None
        best_d = (1 << 30, 0)
        for (vx, vy) in self.visited:
            if abs(vx - x) > radius or abs(vy - y) > radius:
                continue
            for d, (dx, dy) in STEP.items():
                nx, ny = vx + dx, vy + dy
                if self.is_known(m, nx, ny):
                    continue
                if nx < 0 or ny < 0 or nx >= 64 or ny >= 64:
                    continue
                dd = abs(nx - x) + abs(ny - y)
                # Prefer unvisited ground, and among equals prefer the one furthest from the last few visits,
                # so the party does not immediately retrace its own steps. Without this the bot walked back down
                # a line of eight squares it had just walked up, which is eight wasted turns and eight food.
                recent = abs(nx - self.last_recent_x) + abs(ny - self.last_recent_y) if self.last else 0
                score = (dd, -recent)
                if score < best_d:
                    best_d = score
                    best = (nx, ny)
        return best

    def blocked_directions(self, m, x, y):
        return {d for d, (dx, dy) in STEP.items() if self.is_blocked(m, x + dx, y + dy)}

    def open_directions(self, m, x, y):
        """Directions not known to be blocked, most-unvisited first."""
        out = []
        for d, (dx, dy) in STEP.items():
            nx, ny = x + dx, y + dy
            if self.is_blocked(m, nx, ny):
                continue
            out.append((d, (nx, ny) in self.visited))
        out.sort(key=lambda t: t[1])
        return [d for d, _ in out]

    def describe(self, m, x, y):
        """A compact picture of the known neighbourhood, for the log. Uses ? for unknown."""
        rows = []
        for dy in (-1, 0, 1):
            row = ""
            for dx in (-1, 0, 1):
                nx, ny = x + dx, y + dy
                if (dx, dy) == (0, 0):
                    row += "@"
                elif (nx, ny) in self.blocked:
                    row += "#"
                elif (nx, ny) in self.visited:
                    row += "."
                else:
                    row += "?"
            rows.append(row)
        return " / ".join(rows)


class Tracker:
    """Hunts monsters: sense, attack, chase, repeat.

    The turn counter exists so a stale sighting can be discarded. A monster sighted forty turns ago is almost
    certainly elsewhere, and chasing it forever would be worse than wandering.
    """

    SIGHTING_TTL = 25          # turns after which a sighting is forgotten
    MAX_ADJACENT_DIRS = 2      # attack this many distinct directions per fight before deciding it is over

    def __init__(self, verbose=True):
        self.verbose = verbose
        self.world = World()
        self.sightings = []
        self.turn = 0
        self.kills = 0
        self.hits_taken = 0
        self.paralysis_retries = 0

    def say(self, msg):
        if self.verbose:
            print(msg)

    # --- memory -------------------------------------------------------------------------------

    def remember(self, x, y):
        self.sightings = [s for s in self.sightings if s.distance(x, y) > 0]
        self.sightings.append(Sighting(x, y, self.turn))
        self.sightings = [s for s in self.sightings if self.turn - s.turn <= self.SIGHTING_TTL]
        self.sightings = self.sightings[-6:]

    def nearest(self, x, y):
        live = [s for s in self.sightings if self.turn - s.turn <= self.SIGHTING_TTL]
        return min(live, key=lambda s: s.distance(x, y)) if live else None

    def forget(self, x, y):
        self.sightings = [s for s in self.sightings if s.distance(x, y) != 0]

    # --- one action ---------------------------------------------------------------------------

    def sense_and_attack(self, only=None, max_retries=6, confirmed=False):
        """Sense directions by attacking them, attacking whatever answers until it stops.

        Returns (found, killed_here, direction). `found` is False when no direction answered, which is the signal
        that nothing is adjacent.

        PARALYSIS HANDLING. `combat-observed.md` records that arms paralysis makes `A` fail while still costing
        the turn, so a failed attack is indistinguishable from a monster that dodged by looking at hp and exp
        alone. The rule the player asked for is to keep trying until it works. This retries a direction
        `max_retries` times before moving on, so a paralysis of a few turns is ridden out and a permanent one does
        not consume the whole food supply.
        """
        dirs = only or SENSE_DIRS
        anything = False
        killed_here = 0
        last_dir = None
        for d in dirs:
            retries = 0
            while retries <= max_retries:
                st_before = state()
                res = attack_turn(d)
                self.turn += 1
                record("tracker-attack", "dir=%s try=%d" % (d, retries))
                if res.dead:
                    return anything, killed_here, d
                if res.killed:
                    self.kills += 1
                    killed_here += 1
                    anything = True
                    last_dir = d
                    self.say("    KILL %-5s exp %d (%+d) gold %d (%+d)"
                             % (d, res.after["exp"], res.exp_delta, res.after["gold"], res.gold_delta))
                    break
                if res.hit:
                    self.hits_taken += 1
                    anything = True
                    last_dir = d
                    self.say("    hit  %-5s hp %d/%d (%+d)"
                             % (d, res.after["hp"], res.after["maxhp"], res.hp_delta))
                    # Something is alive and adjacent in this direction: keep hitting it.
                    continue
                # Nothing observable happened. Either nothing is there, or the action was refused.
                # Food always falls by 15 per turn, so a turn definitely passed.
                if confirmed and retries < max_retries and anything:
                    # We already know something is adjacent, so a no-op is most likely a paralysis.
                    self.paralysis_retries += 1
                    retries += 1
                    self.say("    no effect in %s (likely paralysed or dodged), retry %d" % (d, retries))
                    continue
                break
            if killed_here:
                break
        st = state()
        if anything:
            self.remember(st["px"], st["py"])
        return anything, killed_here, last_dir

    # --- movement -----------------------------------------------------------------------------

    def step_toward(self, tx, ty):
        """One step that reduces the distance to (tx, ty). Returns the direction moved, or None."""
        st = state()
        dx = (tx > st["px"]) - (tx < st["px"])
        dy = (ty > st["py"]) - (ty < st["py"])
        # Try the larger axis first, then the other, then anything. A refused step is cheap to discover.
        order = []
        if abs(dx) >= abs(dy):
            if dx:
                order.append("right" if dx > 0 else "left")
            if dy:
                order.append("down" if dy > 0 else "up")
        else:
            if dy:
                order.append("down" if dy > 0 else "up")
            if dx:
                order.append("right" if dx > 0 else "left")
        order += [d for d in SENSE_DIRS if d not in order]
        # A direction already known blocked is not retried. That is the whole point of remembering.
        order = [d for d in order if d not in self.world.blocked_directions(st["map"], st["px"], st["py"])]
        if not order:
            return None
        for d in order:
            st_before = state()
            res = turn(d)
            self.turn += 1
            record("tracker-step", "toward %d,%d dir=%s moved=%s" % (tx, ty, d, res.moved))
            if res.dead:
                return None
            if res.moved:
                self.world.note(res.after)
                return d
            if not res.moved:
                # LEARN. A refusal is a permanent fact about that square. This is the only terrain sample the
                # bot has, and discarding it is why it used to retry the same wall forever.
                self.world.mark_blocked(st_before, d)
            if res.hit or res.killed:
                # Moving was interrupted: something is adjacent. Stop and report the direction.
                self.remember(res.after["px"], res.after["py"])
                return d
        return None

    def chase(self, max_steps=14):
        """Walk to the nearest sighting and attack what is there. Returns kills made."""
        kills = 0
        for _ in range(max_steps):
            st = state()
            if st["hp"] <= 0:
                return kills
            target = self.nearest(st["px"], st["py"])
            if target is None:
                return kills
            if target.distance(st["px"], st["py"]) <= 1:
                before = self.kills
                found, _, _ = self.sense_and_attack()
                kills += self.kills - before
                if not found:
                    # Arrived and nothing answered: the monster left. Forget that square and try the next.
                    self.forget(target.x, target.y)
                continue
            moved = self.step_toward(target.x, target.y)
            if moved is None:
                self.say("    could not move toward %d,%d" % (target.x, target.y))
                self.forget(target.x, target.y)
                continue
            self.say("    step %-5s to %d/%d  (target %d,%d)"
                     % (moved, state()["px"], state()["py"], target.x, target.y))
            # Re-sense every step: a monster may have closed on us while we walked.
            if state()["hp"] < state()["maxhp"]:
                before = self.kills
                found, _, _ = self.sense_and_attack()
                kills += self.kills - before
                if found:
                    self.say("    intercepted while walking")
        return kills

    def route_to(self, tx, ty, limit=4000):
        """BFS over squares NOT known blocked, from here to (tx, ty). Returns the first direction, or None.

        WHY BFS AND NOT A GREEDY STEP. Stepping greedily toward a target with two equally good directions makes
        the bot oscillate: from 36/6 it would step down to 36/7, then back up, forever, because both reduce the
        distance by the same amount on alternate axes. A path through known-open squares that prefers squares not
        yet walked does not oscillate, because each step lands somewhere with a shorter remaining path.

        Squares known blocked are not entered. Squares unknown are allowed but cost more, so the route prefers
        ground already proved open. That combination is what lets it leave a known pocket without giving up on
        exploring.
        """
        st = state()
        m = st["map"]
        start = (st["px"], st["py"])
        goal = (tx, ty)
        if start == goal:
            return None

        # A first step into a square already proved blocked is not a route. This is checked explicitly because
        # the BFS below is willing to cross unknown squares, and the first step is the one the caller acts on.
        blocked_here = self.world.blocked_directions(m, start[0], start[1])

        from collections import deque
        q = deque([start])
        first = {start: None}
        seen = {start}
        while q:
            cx, cy = q.popleft()
            if len(seen) > limit:
                break
            if (cx, cy) == goal:
                d = None
                cur = (cx, cy)
                while first[cur] is not None:
                    d = first[cur][1]
                    cur = first[cur][0]
                if d in blocked_here:
                    # The cheapest route starts through a wall. Treat the goal as unreachable rather than
                    # returning a step that is known to fail, which is what made the explore loop spin.
                    return None
                return d
            for d, (dx, dy) in STEP.items():
                nx, ny = cx + dx, cy + dy
                if nx < 0 or ny < 0 or nx >= 64 or ny >= 64:
                    continue
                if (nx, ny) in seen:
                    continue
                if self.world.is_blocked(m, nx, ny):
                    continue
                seen.add((nx, ny))
                first[(nx, ny)] = ((cx, cy), d)
                q.append((nx, ny))
        return None

    def explore(self, steps=14):
        """Walk toward ground not yet walked, learning what blocks the way.

        TARGET A FRONTIER, NOT A DIRECTION. The first version picked a direction by how often it had been used,
        and so walked the same four squares in a loop: 36/7 -> 36/6 -> 35/6 -> 35/7 -> 36/7, forever. Frequency
        cannot see that a square has already been visited. A frontier can: it is a square adjacent to somewhere
        visited that has not itself been walked, so it disappears from the target list once reached.

        Refusals are recorded as blocked, permanently. Mountains, water, walls and letters all look the same to
        this bot because the map is not addressable; all it can honestly say is "impassable".
        """
        moved = 0
        attempts = 0
        while moved < steps and attempts < steps * 8:
            st = state()
            if st["hp"] <= 0:
                return
            self.world.note(st)
            attempts += 1

            # Sense one direction every fourth step, so exploring still covers ground.
            if moved and moved % 4 == 0:
                d = SENSE_DIRS[moved % 4]
                if d not in self.world.blocked_directions(st["map"], st["px"], st["py"]):
                    found, _, hit_dir = self.sense_and_attack(only=[d])
                    if found:
                        self.say("    sensed something in %s" % hit_dir)
                        self.world.save()
                        return

            target = self.world.frontier(st["map"], st["px"], st["py"], radius=20)
            d = None
            if target is not None:
                d = self.route_to(target[0], target[1])
                if d is None:
                    self.say("    no known route to frontier %d,%d" % target)
            if d is not None:
                # Route found. Take one step along it.
                st_before = state()
                res = turn(d)
                self.turn += 1
                record("tracker-explore", "route to %d,%d via %s moved=%s"
                       % (target[0], target[1], d, res.moved))
                if res.dead:
                    return
                if res.moved:
                    self.world.note(res.after)
                    moved += 1
                    self.say("    step %-5s to %d/%d  %s  food %d"
                             % (d, res.after["px"], res.after["py"],
                                self.world.describe(res.after["map"], res.after["px"], res.after["py"]),
                                res.after["food_display"]))
                    if res.hit:
                        self.remember(res.after["px"], res.after["py"])
                        self.say("    attacked while walking in %s" % d)
                        self.world.save()
                        return
                    continue
                self.world.mark_blocked(st_before, d)
                attempts += 1
                self.say("    %s is blocked, recorded (attempt %d/%d)"
                         % (d, attempts, steps * 8))
                self.world.save()
                if attempts >= steps * 8:
                    self.say("    giving up: too many refusals at %d/%d" % (st_before["px"], st_before["py"]))
                    return
                continue
            if True:
                # No frontier known: take any open direction, preferring unvisited.
                open_dirs = self.world.open_directions(st["map"], st["px"], st["py"])
                d = None
                for cand in open_dirs:
                    res = turn(cand)
                    self.turn += 1
                    record("tracker-explore", "%s frontier=none moved=%s" % (cand, res.moved))
                    if res.dead:
                        return
                    if res.moved:
                        self.world.note(res.after)
                        d = cand
                        moved += 1
                        break
                    self.world.mark_blocked(st, cand)
                if d is None:
                    self.say("    boxed in at %d/%d: %s"
                             % (st["px"], st["py"], self.world.describe(st["map"], st["px"], st["py"])))
                    self.world.save()
                    return
                self.say("    step %-5s to %d/%d  %s"
                         % (d, state()["px"], state()["py"],
                            self.world.describe(st["map"], state()["px"], state()["py"])))
                continue

            if d is None:
                self.say("    no route to frontier at %d,%d" % target)
                self.world.save()
                return
            moved += 1
            after = state()
            self.say("    step %-5s to %d/%d  %s  food %d"
                     % (d, after["px"], after["py"],
                        self.world.describe(after["map"], after["px"], after["py"]),
                        after["food_display"]))
            if after["hp"] < st["hp"]:
                self.remember(after["px"], after["py"])
                self.say("    attacked while walking in %s" % d)
                self.world.save()
                return
        self.world.save()

    def wander_and_sense(self, turns=20):
        """No sighting: wander, sensing occasionally so something new gets found."""
        for i in range(turns):
            st = state()
            if st["hp"] <= 0:
                return
            # Sense every third step. Sensing is a full turn, so doing it always would halve the distance covered.
            if i % 3 == 2:
                before = self.kills
                found, _, _ = self.sense_and_attack()
                if found:
                    return
                continue
            for d in SENSE_DIRS:
                res = turn(d)
                self.turn += 1
                record("tracker-wander", d)
                if res.dead:
                    return
                if res.moved:
                    break
                if res.hit:
                    self.remember(res.after["px"], res.after["py"])
                    return

    # --- the loop the player asked for --------------------------------------------------------

    def run(self, cycles=8, steps_per_cycle=14):
        """Attack what is adjacent, else walk to the nearest thing seen, else wander. Repeat."""
        for c in range(cycles):
            st = state()
            if st["hp"] <= 0:
                self.say("  the party fell")
                break
            self.say("\ncycle %d  hp %d/%d  exp %d  at %d/%d  food %d  %s"
                     % (c + 1, st["hp"], st["maxhp"], st["exp"], st["px"], st["py"], st["food_display"],
                        self.world.describe(st["map"], st["px"], st["py"])))

            # HEAL BEFORE WALKING, not after. A run of three fights took the party from 344 to 86 hp while
            # resting was only checked at the bottom of the loop, which a fight never reached. Resting first is
            # the difference between a bot that survives a long run and one that dies on the fourth monster.
            if st["maxhp"] and st["hp"] < st["maxhp"] * 0.45:
                self.say("  hp low (%d/%d), resting" % (st["hp"], st["maxhp"]))
                rest_if_hurt(threshold=0.95, rounds=60)
                st = state()
                self.say("  after resting: hp %d/%d, food %d"
                         % (st["hp"], st["maxhp"], st["food_display"]))
                if st["hp"] <= 0:
                    break

            # WALK FIRST. This is the correction that matters. The first version sensed every cycle, and sensing
            # is an attack, which is a turn. So it stood still attacking air and never explored. Exploration is
            # the default and sensing is the exception.
            #
            # Sense only where a monster is likely: after a hit has already confirmed one is adjacent, or when
            # we have arrived at a square something responded from.
            target = self.nearest(st["px"], st["py"])

            if target is not None and target.distance(st["px"], st["py"]) <= 1:
                # We are standing where something answered before. Check, once, without retries.
                self.say("  arrived at a sighting, checking")
                found, _, d = self.sense_and_attack()
                if found:
                    self.say("  fought in %s" % d)
                else:
                    self.forget(target.x, target.y)
                continue

            if target is not None:
                self.say("  chasing %r" % (target,))
                self.chase(steps_per_cycle)
                continue

            # Nothing known: explore. Walk a lot, sense rarely, and remember anything that answers.
            self.say("  exploring")
            self.explore(steps_per_cycle)


        st = state()
        self.say("\ntracker: %d kills, %d hits taken, %d paralysis retries, hp %d/%d, exp %d, gold %d"
                 % (self.kills, self.hits_taken, self.paralysis_retries,
                    st["hp"], st["maxhp"], st["exp"], st["gold"]))
        record("tracker-done", "kills=%d" % self.kills)
        return self.kills


def cmd_tracker(args):
    t = Tracker()
    t.run(args.cycles, args.steps)


# ---------------------------------------------------------------------------
# disposition: how much fight the bot has in it, and what it does about that
# ---------------------------------------------------------------------------
#
# THE RULE, as the player stated it: whenever something new is met, try to interact with it passively first,
# then WALK into it, then talk to it, then fight it. In curious mode, avoid fighting, especially at low health,
# and go and find a town instead. When strong, fight.
#
# So disposition is a single number derived from the party's actual condition, and every decision asks it.
#
# WHY HEALTH ALONE IS NOT COURAGE. A party at 90 percent health with 25 experience should not pick a fight with
# something that just took a third of its hit points. Courage therefore combines health fraction with how much
# damage the last encounter did, and with experience as a rough proxy for whether the party has grown. It is a
# heuristic and the code says so: nothing here is measured from the game, it is a policy, and the player may
# want to tune it.

LORE_FILE = "lore.json"


def load_lore():
    """Seeded knowledge, as a player who read the manual or played before would have.

    THIS IS NOT MEASURED FROM THE GAME and must not be presented as if it were. It is a prior, in the same shape
    as the terrain classes, so that the bot has something to reason with on its first turn instead of nothing.
    Every entry is overwritten by observation as soon as the bot disagrees with it enough times.

    Field notes on Ultima II that shape these priors, from the manual and from playing:
      - water and mountains and dense forest are not walkable on the overworld
      - bridges cross water, and are walkable
      - towns, castles and dungeons are entered from the overworld with E)nter
      - moongates are entered by walking onto them and teleport by their own rules
      - some monsters are far beyond a starting party; fleeing is the correct play
    """
    p = ROOT / "saves" / LORE_FILE
    if p.exists():
        try:
            return json.loads(p.read_text())
        except ValueError:
            pass
    return {
        "_note": "SEEDED PRIOR, not measured. Overwritten by observation.",
        "terrain_prior": {
            "water": "impassable",
            "mountain": "impassable",
            "forest": "slow, passable",
            "grass": "passable",
            "bridge": "passable",
        },
        "courage": {
            "fight_at_health": 0.55,
            "flee_below_health": 0.30,
        },
    }


@dataclass
class Disposition:
    """How willing the party is to fight, right now."""

    health: float          # fraction of max
    exp: int
    last_hit: int          # the largest single damage taken recently, 0 if none
    mode: str              # "curious" or "berserker"

    @property
    def courage(self):
        """0.0 is certain death, 1.0 is invincible. Not measured, a policy; see the note above.

        Health dominates, because health is what the party actually spends. A big recent hit reduces it further,
        since the thing that dealt it is likely still there.
        """
        c = self.health
        if self.last_hit >= 25:
            c -= 0.25
        elif self.last_hit >= 12:
            c -= 0.12
        return max(0.0, min(1.0, c))

    def wants_fight(self):
        """Berserker fights unless it is nearly dead. Curious fights only when it is clearly safe."""
        c = self.courage
        if self.mode == "berserker":
            return c > 0.22
        return c > 0.62

    def should_flee(self):
        c = self.courage
        return c < 0.30

    def __str__(self):
        return "hp %.0f%% courage %.2f %s" % (self.health * 100, self.courage,
                                             "wants-fight" if self.wants_fight() else "avoiding")


def disposition(mode, last_hit=0):
    st = state()
    h = (st["hp"] / st["maxhp"]) if st["maxhp"] else 0.0
    return Disposition(health=h, exp=st["exp"], last_hit=last_hit, mode=mode)


# --- passive interaction, in the order the player asked for -------------------------------------
#
# Try to interact with something new WITHOUT committing to a fight:
#   1. look, which is free of consequence and may name the thing
#   2. talk, which some monsters answer and some do not
#   3. get, in case it is an item rather than a creature
#   4. only then walk into it, which is what actually starts a fight on contact
#
# The order matters because a fight is expensive and irreversible, while L)ook and T)alk are cheap and can be
# abandoned. This is the bot doing what a careful player does.

PASSIVE_ORDER = ["l", "t", "g"]


def probe_passive(verbose=True):
    """Try the harmless interactions once each. Returns how many produced any observable change."""
    changed = 0
    for cmd in PASSIVE_ORDER:
        before = state()
        press(cmd, settle=0.40, wait_for_prompt=True)
        after = state()
        record("passive-" + cmd, "probe")
        if (after["hp"] != before["hp"] or after["exp"] != before["exp"]
                or after["gold"] != before["gold"] or after["px"] != before["px"]):
            changed += 1
            if verbose:
                print("    %s changed something: hp %+d exp %+d gold %+d pos %s"
                      % (cmd, after["hp"] - before["hp"], after["exp"] - before["exp"],
                         after["gold"] - before["gold"],
                         "moved" if (after["px"], after["py"]) != (before["px"], before["py"]) else "same"))
        # Clear any prompt these opened.
        press("p", settle=0.25)
    return changed


def flee_from(relative_dir, verbose=True):
    """Run the opposite way from a threat, and keep running while it is still making contact.

    Legs paralysis is documented as a separate flag from arms paralysis, so a failed flee is expected sometimes
    and is retried rather than treated as a wall.
    """
    away = {"up": "down", "down": "up", "left": "right", "right": "left"}[relative_dir]
    for i in range(5):
        st = state()
        if st["hp"] <= 0:
            return False
        res = turn(away)
        record("flee", "%s %d" % (away, i))
        if verbose:
            print("    flee %-5s -> %d/%d  hp %d/%d" % (away, res.after["px"], res.after["py"],
                                                        res.after["hp"], res.after["maxhp"]))
        if res.moved:
            return True
        # Refused: either terrain or a paralysis. Try a side step before giving up.
        for alt in SENSE_DIRS:
            if alt == away:
                continue
            r2 = turn(alt)
            record("flee-alt", alt)
            if r2.moved:
                return True
    return False


# ---------------------------------------------------------------------------
# personality: one live posture, derived from context, overridable from outside
# ---------------------------------------------------------------------------
#
# THE MISTAKE THIS REPLACES. `curious` and `berserker` were COMMANDS: a mode was chosen when the process started
# and held for the whole run. The player's description is a different thing. Aggressive, Curious and Scared are
# POSTURES that change as the situation changes: usually Curious in a town because fighting there is pointless,
# Aggressive on the overworld at high health, Curious at medium, Scared at low.
#
# So the posture is a derived value, recomputed before every decision, and there are three overrides:
#
#   the environment, which biases the derivation
#   a lock, so an operator can force a posture and have it stay forced
#   a file, so the lock can be set without restarting the bot
#
# THE FILE IS THE API. A bot mid-run cannot be reconfigured by calling a function in its own process from
# outside, so the lock lives in saves/personality.json. Writing that file changes the next decision. That is a
# poor man's RPC and it is robust: no socket, no thread, no restart, and it works while the bot is mid-explore.

POSTURES = ("aggressive", "curious", "scared")

PERSONALITY_FILE = "personality.json"

# What each posture does. These are policy, not measurement, and the doc says so.
#
#   aggressive  closes with anything it senses and fights it; rests only when badly hurt
#   curious     tries passive interaction first, fights only when clearly safe, otherwise leaves
#   scared      runs from contact, seeks a town or safety, rests at the first opportunity
#
# The thresholds are fractions of max health, adjusted downward by the size of the last hit.

POSTURE_RULES = {
    "aggressive": {"fight_above": 0.30, "flee_below": 0.15, "passive_first": False},
    "curious":    {"fight_above": 0.62, "flee_below": 0.30, "passive_first": True},
    "scared":     {"fight_above": 1.10, "flee_below": 0.90, "passive_first": True},
}

# Environment biases. The environment is not certain: see detect_environment, which is an inference with a
# stated confidence rather than a fact read from the game.
#
# A town takes the fight out of the party, because most town encounters are not worth a fight and shops and
# healers are the actual reason to be there. The overworld rewards aggression, because the party is only there
# to travel or fight.
ENVIRONMENT_BIAS = {
    "town":       {"aggressive": -0.25, "curious": 0.0, "scared": 0.0},
    "overworld":  {"aggressive": 0.20, "curious": 0.0, "scared": 0.0},
    "dungeon":    {"aggressive": -0.10, "curious": 0.0, "scared": 0.10},
    "unknown":    {"aggressive": 0.0, "curious": 0.0, "scared": 0.0},
}


def personality_path():
    return ROOT / "saves" / PERSONALITY_FILE


def read_override():
    """The operator's lock, if any. A missing or unreadable file means no override, never an error."""
    p = personality_path()
    if not p.exists():
        return None
    try:
        data = json.loads(p.read_text())
    except (ValueError, OSError):
        return None
    want = data.get("posture")
    if want in POSTURES:
        return want
    return None


def set_override(posture, note=""):
    """Lock a posture from outside. Called by the CLI; the file is what the running bot reads."""
    p = personality_path()
    p.parent.mkdir(parents=True, exist_ok=True)
    if posture in (None, "auto"):
        if p.exists():
            p.unlink()
        return None
    if posture not in POSTURES:
        raise ValueError("posture must be one of %s or auto" % (", ".join(POSTURES),))
    p.write_text(json.dumps({"posture": posture, "note": note,
                             "at": datetime.now(timezone.utc).isoformat()}, indent=1))
    return posture


def detect_environment(world, st):
    """Which kind of place is the party in? An INFERENCE, not a read from the game.

    This is the weakest link in the design and is labelled as such. The game does not expose a location kind at
    an address this project has confirmed: 0xcde56 was a candidate and read 0xec unchanged across a walk and an
    E)nter, so it was not used.

    What is used instead, and why each is weak:

      walled      an inference from blocked-square density. A town is bounded, so its open area is small and the
                  fraction of refusals is high. The overworld is large and mostly open. This correlates but does
                  not prove: a mountain range looks like a wall too.

      unknown     everything else, which is the honest default and biases nothing.

    A wrong environment does not break the bot, it only mis-weights the posture. That is why it is safe to ship
    an inference here rather than blocking on a real signal.
    """
    if not world.visited:
        return "unknown"
    refusals = len(world.blocked)
    visits = len(world.visited)
    if visits < 4:
        return "unknown"
    ratio = refusals / float(visits)
    if ratio > 0.55:
        return "town"
    if ratio < 0.25:
        return "overworld"
    return "unknown"


@dataclass
class Personality:
    """A posture, why it is that posture, and whether it was forced."""

    posture: str
    health: float
    last_hit: int
    environment: str
    forced: bool
    reason: str

    @property
    def rules(self):
        return POSTURE_RULES[self.posture]

    def wants_fight(self):
        c = self.health - (0.25 if self.last_hit >= 25 else 0.12 if self.last_hit >= 12 else 0.0)
        return c > self.rules["fight_above"]

    def should_flee(self):
        c = self.health - (0.25 if self.last_hit >= 25 else 0.12 if self.last_hit >= 12 else 0.0)
        return c < self.rules["flee_below"]

    @property
    def passive_first(self):
        return self.rules["passive_first"]

    def __str__(self):
        return ("%s%s  hp %.0f%%  %s  (%s)"
                % (self.posture.upper(), " [locked]" if self.forced else "",
                   self.health * 100, self.environment, self.reason))


def posture_now(world=None, last_hit=0):
    """Derive the posture from health, environment and the override. This is the single decision point.

    Read fresh every call, including the override file, so an operator can change posture mid-run by writing
    one JSON file. That costs a stat and a parse per decision, which is nothing next to a screenshot.
    """
    st = state()
    health = (st["hp"] / st["maxhp"]) if st["maxhp"] else 0.0
    env = detect_environment(world, st) if world else "unknown"

    forced = read_override()
    if forced:
        return Personality(posture=forced, health=health, last_hit=last_hit,
                           environment=env, forced=True, reason="locked from outside")

    # POSTURE IS AN ORDERED BAND, NOT A BEST FIT. The first version scored each posture by how close the party
    # was to its fight threshold, which made low health select the LOWEST threshold, i.e. AGGRESSIVE at 21%
    # health. That is exactly backwards, and it was written by scoring instead of by stating the rule.
    #
    # Stated plainly: scared below 40%, aggressive above 65%, curious in between. The environment shifts both
    # cut points rather than adding a score, so a town makes the party reluctant and the overworld makes it
    # forward, without either being able to invert the health order.
    effective = health - (0.25 if last_hit >= 25 else 0.12 if last_hit >= 12 else 0.0)

    bias = ENVIRONMENT_BIAS.get(env, ENVIRONMENT_BIAS["unknown"])
    # A negative aggressive bias raises the bar for aggression; a positive one lowers it.
    agg_cut = 0.65 - bias.get("aggressive", 0.0) * 1.6
    scared_cut = 0.40 + bias.get("scared", 0.0) * 1.6

    if effective >= agg_cut:
        best = "aggressive"
    elif effective <= scared_cut:
        best = "scared"
    else:
        best = "curious"

    reason = ("effective health %.0f%% vs aggression at %.0f%% and fear at %.0f%%, %s"
              % (effective * 100, agg_cut * 100, scared_cut * 100, env))
    return Personality(posture=best, health=health, last_hit=last_hit,
                       environment=env, forced=False, reason=reason)


def cmd_personality(args):
    """Show or set the posture. Setting writes the lock file; showing prints the derivation."""
    if args.set:
        got = set_override(args.set, args.note or "")
        print("posture lock: %s" % (got or "cleared"))
        return
    w = World()
    p = posture_now(world=w)
    print(p)
    print()
    print("  environment: %s   (inferred, see detect_environment)" % p.environment)
    print("  health:      %.0f%%" % (p.health * 100))
    print("  fights at:   > %.0f%%" % (p.rules["fight_above"] * 100))
    print("  flees at:    < %.0f%%" % (p.rules["flee_below"] * 100))
    print("  passive first: %s" % p.passive_first)
    if p.forced:
        print("  LOCKED by saves/%s" % PERSONALITY_FILE)
    else:
        print("  derived (no lock)")
    print()
    print("  terrain classes learned: %d" % len(w.terrain.classes))
    for line in w.terrain.summary()[:8]:
        print("    " + line)


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

    vp = sub.add_parser("viewport", help="read the 11x11 window around the party")
    vp.add_argument("--json", action="store_true")
    vp.set_defaults(fn=cmd_viewport)

    pe = sub.add_parser("personality", help="show the current posture, or lock one")
    pe.add_argument("--set", choices=list(POSTURES) + ["auto"],
                    help="lock a posture (writes saves/personality.json), or 'auto' to clear")
    pe.add_argument("--note", help="why, recorded in the lock file")
    pe.set_defaults(fn=cmd_personality)

    tr = sub.add_parser("tracker", help="hunt: walk to the nearest monster, kill it, find the next")
    tr.add_argument("cycles", type=int, nargs="?", default=8)
    tr.add_argument("--steps", type=int, default=14, help="steps per chase")
    tr.set_defaults(fn=cmd_tracker)

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
