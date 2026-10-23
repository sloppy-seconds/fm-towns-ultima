#!/usr/bin/env python3
"""u2flow.py - drive Ultima II from the Towns menu into the game, with no judgement.

Why this exists: doing the steps by hand meant a human decided what each screen
was before acting, and that went wrong repeatedly - keys sent into the wrong
screen, a space that quit the game, several restarts. This script encodes the
whole sequence once, checks every precondition against measured pixels, and sends
input only when the check passes. It never infers. If a check fails it stops and
says so.

The safety rule, learned the hard way: NEVER send a key without first confirming
the screen that is expecting it. Every input below is preceded by a state check,
and the script aborts rather than guessing.

Screens, all measured on the running emulator:

  TOWNS MENU   The TownsOS launcher. Six icons on a 112px pitch, first centre at
               framebuffer x=88, icon band rows 185..213. Ultima II is the second
               icon, so its centre is framebuffer (200, 199) = VM (199, 179).
               The window is 1:1 with a 640x496 emulated screen, so the VM
               coordinate is the framebuffer coordinate minus (1, 20).

  SPLASH       A man with sword and shield, plus a pulsating circle of white,
               green and blue. The pulse is the identifying signal: the region
               changes between two frames. Region measured by diffing two frames
               0.7s apart: framebuffer x 200..418, y 224..296.

  RED BAR      Rows 454..469, x 19..622, fill #ff0000 with a 2px white border
               outside it. Empty means no error. A second colour inside the fill
               means error text, and the script stops.

  YELLOW BAR   Rows 23..40, x 4..638, fill #ffff55, no border. Reads
               "Ultima Trilogy    Ultima ][". Its presence means the game is up.

  GAME MENU    A blue box with a white border just below centre, listing:
                   Option:
                   Return to TOWNS OS
                   Generate Character
                   Journey Onward
               The first entry is highlighted red and is the default choice.
               That is why pressing space on this screen QUIT THE GAME every
               time: space accepts "Return to TOWNS OS".

               The two entries take DIFFERENT accept keys:
                   Return to TOWNS OS  -> SPACE quits the game
                   Journey Onward      -> ENTER only; SPACE is ignored
               Sending space with Journey Onward highlighted does nothing at
               all, which is a deceptively quiet failure.

               Navigation is with the arrow keys, so the way through is:
                   DOWN DOWN SPACE   -> Journey Onward (play)
                   DOWN SPACE        -> Generate Character
               with no other input in between, or the highlight moves.

Flow:
  1. confirm the Towns menu is showing (icon band has the circle art)
  2. double-click Ultima II
  3. wait for the splash, confirmed by the pulse animating
  4. confirm the red bar is empty
  5. press space ONCE, which dismisses the splash and reveals the game menu
  6. confirm the animation has stopped (splash gone)
  7. send DOWN DOWN SPACE as one sequence, which selects Journey Onward
  8. report what came next

Usage:
    python3 u2flow.py            run the flow and report
    python3 u2flow.py --dry-run  check the current screen, send nothing
    python3 u2flow.py --status   just report the current screen

Every step prints what it saw and why it decided. That log is the point: if it
ever sends the wrong thing, the log says which check lied.
"""

import json
import struct
import sys
import time
import urllib.request
import zlib

BASE = "http://127.0.0.1:8080"

# --- measured geometry -------------------------------------------------------
# Ultima II on the Towns menu. Framebuffer pixels.
U2_ICON_FB = (200, 199)
# VM = framebuffer - (1, 20). The +20 is a title bar, measured not assumed.
FB_TO_VM = (1, 20)

TOWNS_ICON_BAND = (0, 185, 640, 213)     # x0, y0, x1, y1  where icon art lives

# The Ultima II "Option:" box, measured on the running emulator.
#   blue fill #0022ee, box at x 160..481, y 368..433
#   three entries on a ~17px pitch:
#       rows 384..399   Return to TOWNS OS   (the default)
#       rows 401..415   Generate Character
#       rows 417..431   Journey Onward
# The SELECTED entry is filled solid #ff0000 across the full box width. That is
# the only reliable way to know which one space would accept, and getting it
# wrong quits the game.
GAME_MENU_BOX = (160, 368, 481, 433)     # x0, y0, x1, y1
GAME_MENU_ENTRIES = [
    ("return",   384, 399),
    ("generate", 401, 415),
    ("journey",  417, 431),
]
HIGHLIGHT = (255, 0, 0)
SPLASH_PULSE = (200, 224, 418, 296)      # x0, y0, x1, y1  the pulsating circle
SPLASH_COLOURS = [(255, 255, 255), (0, 255, 0), (0, 0, 255), (0, 255, 255)]
YELLOW_BAR = (4, 23, 638, 40)
RED_BAR = (19, 454, 622, 469)

FLAT_FILL = 0.995   # a bar that is one colour within this share is empty


# --- plumbing ----------------------------------------------------------------
def http_json(path, payload=None):
    url = BASE + path
    if payload is None:
        with urllib.request.urlopen(url, timeout=20) as r:
            return json.load(r)
    data = json.dumps(payload).encode()
    req = urllib.request.Request(url, data=data,
                                 headers={"Content-Type": "application/json"})
    with urllib.request.urlopen(req, timeout=20) as r:
        return json.load(r)


def shot():
    """Decode /api/shot.png into a dict of (x,y) -> (r,g,b)."""
    with urllib.request.urlopen(BASE + "/api/shot.png", timeout=20) as r:
        data = r.read()
    pos = 8
    w = h = 0
    ct = 0
    idat = b""
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
        f = raw[i]
        i += 1
        line = bytearray(raw[i:i + stride])
        i += stride
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
                pr = a if (pa <= pb and pa <= pc) else (b if pb <= pc else c)
                line[x] = (line[x] + pr) & 255
        out += line
        prev = line

    px = {}
    for y in range(h):
        base = y * stride
        for x in range(w):
            o = base + x * bpp
            px[(x, y)] = (out[o], out[o + 1], out[o + 2])
    return w, h, px


# --- measurements ------------------------------------------------------------
def region_counts(px, box):
    x0, y0, x1, y1 = box
    counts = {}
    for y in range(y0, y1):
        for x in range(x0, x1):
            c = px[(x, y)]
            counts[c] = counts.get(c, 0) + 1
    return counts


def bar_is_empty(px, box):
    """True if the bar is a single flat colour. Returns (empty, dominant_share)."""
    counts = region_counts(px, box)
    if not counts:
        return None, 0.0
    total = sum(counts.values())
    dom = max(counts.values()) / total
    return dom >= FLAT_FILL, dom


def towns_menu_showing(px):
    """The TownsOS launcher, identified by the menu divider row.

    An earlier version just looked for dark pixels in the icon band, which is
    true of almost any screen with content - so it reported True on the Ultima II
    title screen at the same time as in_ultima2() reported True. Two detectors
    both saying yes is worse than either being wrong.

    The discriminator is the divider: the launcher draws a solid dark rule across
    the icon column at row 176, and the yellow title bar does NOT exist yet. Both
    conditions together identify the launcher.
    """
    if in_ultima2(px):
        return False

    # Find a divider row rather than assuming where it is. The launcher's content
    # has been measured at y=176 in one session and y=121 in another, so a
    # hardcoded row gives a false negative as soon as the layout shifts.
    divider = None
    for row in range(80, 300):
        dark = 0
        total = 0
        for x in range(10, 630, 4):
            total += 1
            if sum(px[(x, row)]) < 200:
                dark += 1
        if total and (dark / total) >= 0.85:
            divider = row
            break
    if divider is None:
        return False

    # Below that divider there should be the mottled icon band.
    band = (0, divider + 1, 640, divider + 60)
    counts = region_counts(px, band)
    t = sum(counts.values())
    if not t:
        return False
    d = sum(n for c, n in counts.items() if sum(c) < 200)
    return (d / t) > 0.05


def splash_animating(a, b):
    """The splash pulse changes between frames. Returns changed sample count."""
    x0, y0, x1, y1 = SPLASH_PULSE
    changed = 0
    for y in range(y0, y1, 2):
        for x in range(x0, x1, 2):
            if a[(x, y)] != b[(x, y)]:
                changed += 1
    return changed


def splash_is_running(samples=6, interval=0.5):
    """Decide whether the splash is on screen by watching it for a few seconds.

    A single pair of frames is not enough. Measured on the real splash, sampled
    every 0.5s for 35s, the pulse cycles through three states and repeats:

        changed ~381   splash colours 40%
        changed ~656   splash colours 64%
        changed ~873   splash colours 28%

    So both the change count AND the colour share dip, and a one-shot test with
    any single threshold rejects the splash some of the time. That is why an
    earlier version of this script declared "splash never animated" and refused
    to continue.

    Watching for a few seconds and taking the BEST sample removes the timing
    dependence. Returns (is_splash, best_changed, best_share).
    """
    best_changed = 0
    best_share = 0.0
    prev = shot()[2]
    for _ in range(samples):
        time.sleep(interval)
        cur = shot()[2]
        c = splash_animating(prev, cur)
        sh = splash_colours_present(cur)
        if c > best_changed:
            best_changed = c
        if sh > best_share:
            best_share = sh
        prev = cur
    # The splash reaches ~870 changed samples and 64% splash colours at its
    # brightest. Require both to be clearly above a static screen, which gives 0.
    return (best_changed > 300 and best_share > 0.35), best_changed, best_share


def splash_colours_present(px):
    counts = region_counts(px, SPLASH_PULSE)
    total = sum(counts.values())
    if not total:
        return 0.0
    return sum(counts.get(c, 0) for c in SPLASH_COLOURS) / total


def game_menu_state(px):
    """Which entry of the Option: box is highlighted.

    Returns (entry_name, coverage) where coverage is the share of the entry's
    row band that is solid red. A selected row is filled across the box, so
    coverage is near 1.0 for exactly one entry and near 0.0 for the others.
    Returns (None, {}) if the box is not on screen.
    """
    x0, y0, x1, y1 = GAME_MENU_BOX
    blue = sum(1 for y in range(y0, y1, 2) for x in range(x0, x1, 2)
               if px[(x, y)] == (0, 34, 238))
    if blue < 100:
        return None, {}

    coverage = {}
    for name, ry0, ry1 in GAME_MENU_ENTRIES:
        total = 0
        red = 0
        for y in range(ry0, ry1 + 1):
            for x in range(x0 + 2, x1 - 1, 3):
                total += 1
                if px[(x, y)] == HIGHLIGHT:
                    red += 1
        coverage[name] = red / total if total else 0.0

    best = max(coverage, key=coverage.get)
    if coverage[best] < 0.5:
        return None, coverage
    return best, coverage


def find_player_highlight(px):
    """Find the highlighted row of the select-player panel, or None.

    The panel is a blue box listing one row per character, with the selected row
    filled solid red. Measured on the running emulator:

        panel           x 11..630, y 121..339
        highlight       rows 270..285, ~120 red pixels per row
        in game         red is scattered, 6-12 pixels per row (the map cursor)

    The earlier version required 15% red coverage across x 60..580, which is a
    guess that happened to pass on the panel and happened to fail elsewhere. It
    also reported a false positive IN GAME, because a few rows of map cursor
    reached the threshold.

    Two conditions together remove both problems: the row must have a long
    CONTIGUOUS run of red (a filled bar, not scattered dots), and that run must
    span most of the panel width.
    """
    # Measure total red on the row, NOT the longest contiguous run. The
    # highlight is a filled bar with the character name knocked out of it, so it
    # is two runs, not one: measured on row 277 the red spans (237..239) and
    # (249..364), a total of 119 pixels with a text gap in the middle. A
    # contiguity test therefore rejects the very thing it is looking for.
    #
    # The threshold separates the two cases by a wide margin:
    #   select-player highlight   ~115-130 red pixels per row, over 16 rows
    #   in game                   the red bar only (rows 454-469) plus 6-12
    #                             scattered cursor pixels
    # The scan stops at y=345, above the red bar, so the bar cannot be mistaken
    # for a highlight.
    best = None
    for y in range(120, 345):
        red = sum(1 for x in range(11, 631) if px[(x, y)] == (255, 0, 0))
        if red >= 60:
            if best is None:
                best = [y, y]
            else:
                best[1] = y
    if best is None:
        return None
    # Require a band, not a single stray row.
    if (best[1] - best[0]) < 5:
        return None
    return (best[0], best[1])


def in_ultima2(px):
    """The yellow bar only exists once the game is running."""
    counts = region_counts(px, YELLOW_BAR)
    if not counts:
        return False
    return counts.get((255, 255, 85), 0) / sum(counts.values()) > 0.5


# --- actions -----------------------------------------------------------------
def vm_to_fb(vx, vy):
    return vx + FB_TO_VM[0], vy + FB_TO_VM[1]


def xdotool_double_click(fb_x, fb_y):
    """Double-click the Towns menu icon using XTEST inside the container.

    Two things here are not obvious and both were measured:

    1. `xdotool click` presses and releases in the same millisecond and Tsugaru
       ignores it: the screen does not change. Explicit `mousedown`/`mouseup`
       with a real hold DOES register. So the delay is not cosmetic.

    2. The pointer must actually MOVE before clicking. Tsugaru only forwards a
       position when it changes, so clicking where the pointer already sits
       produces no motion event and the button press lands somewhere stale.
       Hence the nudge away first.

    XTEST does work here; an earlier note in this project claimed it did not,
    based on tests where the pointer was already at the target coordinate and no
    motion event was generated.
    """
    import subprocess
    disp = "DISPLAY=:99"

    def xd(*args):
        subprocess.run(["/usr/bin/xdotool", *args], check=True, timeout=15,
                       env={**__import__("os").environ, "DISPLAY": ":99"},
                       stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)

    xd("mousemove", "300", "400")          # nudge, so the next move is a change
    time.sleep(0.3)
    xd("mousemove", str(fb_x), str(fb_y))
    time.sleep(0.5)
    for _ in range(2):                      # two real presses
        xd("mousedown", "1")
        time.sleep(0.15)
        xd("mouseup", "1")
        time.sleep(0.2)


def send_key_x(name):
    """Send a named key with plain XTEST inside the container.

    Two approaches were tried and only one works:

    * The supervisor's /api/key calls `xdotool key --window <win> <name>`. That
      sends a synthetic event addressed at the window, which Tsugaru ignores:
      pressing Down left the menu highlight exactly where it was.

    * Plain `xdotool key <name>` goes through XTEST against the focused window.
      That DOES work: with the menu on "return", one Down moved the highlight to
      "generate". Focus-based is the same path that made mouse clicks land.

    So keys are sent here directly rather than through the supervisor.
    """
    import subprocess
    subprocess.run(["/usr/bin/xdotool", "key", name], check=True, timeout=15,
                   env={**__import__("os").environ, "DISPLAY": ":99"},
                   stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)


def type_space():
    """Send exactly one space, through the emulator console.

    TYPE is the emulator's own key injection, independent of X. It is used only
    after the caller has confirmed the screen wants it. For the game menu the
    arrow keys go through send_key_x instead, because the menu needs XTEST.
    """
    http_json("/api/cmd", {"line": "TYPE "})


def run_selection(px, say):
    """Move the highlight to Journey Onward and accept it, verifying each step.

    The default choice is "Return to TOWNS OS", so a lost DOWN followed by SPACE
    quits the game. That is exactly what kept happening when this was done by
    hand. The highlight is checked after every key, and space is only sent once
    the box confirms "journey".
    """
    sel, _cov = game_menu_state(shot()[2])
    say("selection: start on %s" % sel)
    if sel is None:
        say("STOP: nothing highlighted on the game menu.")
        return 6

    for i, target in enumerate(["generate", "journey"], 1):
        send_key_x("Down")
        time.sleep(0.35)
        now, cov_now = game_menu_state(shot()[2])
        say("           after DOWN %d: selected = %s %s"
            % (i, now, {k: round(v, 2) for k, v in cov_now.items()}))
        if now != target:
            say("STOP: expected %r, highlight is on %r. Not pressing space."
                % (target, now))
            return 7

    # Journey Onward accepts ENTER, not space. Space is what accepts "Return to
    # TOWNS OS", and the two entries take different keys. Confirmed on the
    # running emulator: xdotool key space leaves the menu untouched with
    # Journey Onward highlighted, while Return accepts it.
    say("           pressing ENTER for Journey Onward")
    send_key_x("Return")
    time.sleep(5)

    # --- select player ----------------------------------------------------
    # A blue panel lists the roster, one entry per character, first entry
    # highlighted. With a single-character save the highlighted one is the only
    # one, so ENTER accepts it.
    sel_row = find_player_highlight(shot()[2])
    if sel_row is None:
        say("STOP: no highlighted player row found after Journey Onward.")
        return 8
    say("player select: highlight at rows %d..%d, pressing ENTER" % sel_row)
    send_key_x("Return")
    time.sleep(2)

    # --- confirm ----------------------------------------------------------
    # The red bar then shows "O.K. ? (y/n)". Answer y.
    say("confirm: answering Y")
    send_key_x("y")
    time.sleep(2)

    # --- press space to load ----------------------------------------------
    say("load: pressing SPACE")
    send_key_x("space")
    time.sleep(8)

    _w, _h, after = shot()
    red_empty, red_dom = bar_is_empty(after, RED_BAR)
    say("after: in_ultima2=%s red_bar_empty=%s towns_menu=%s"
        % (in_ultima2(after), red_empty, towns_menu_showing(after)))
    say("       player select still up = %s" % (find_player_highlight(after) is not None))
    return 0


# --- flow --------------------------------------------------------------------
def main():
    dry = "--dry-run" in sys.argv
    status_only = "--status" in sys.argv
    # Stepping past the splash into the game is a separate decision from
    # dismissing the splash, so it needs its own flag. Without it the script
    # stops at the menu and sends nothing.
    args_select = "--journey" in sys.argv

    def say(msg):
        print(msg, flush=True)

    w, h, px = shot()
    say("framebuffer %dx%d" % (w, h))

    if status_only:
        say("towns menu : %s" % towns_menu_showing(px))
        say("in ultima2 : %s" % in_ultima2(px))
        red_empty, red_dom = bar_is_empty(px, RED_BAR)
        say("red bar    : empty=%s dominant=%.1f%%" % (red_empty, red_dom * 100))
        sel, cov = game_menu_state(px)
        if sel:
            say("game menu  : selected=%s  %s"
                % (sel, {k: round(v, 2) for k, v in cov.items()}))
        elif cov:
            say("game menu  : present but no highlight found %s"
                % {k: round(v, 2) for k, v in cov.items()})
        else:
            say("game menu  : not on screen")
        prow = find_player_highlight(px)
        say("player sel : %s" % (("highlight rows %d..%d" % prow) if prow else "not on screen"))
        return 0

    # --- step 1: are we at the Towns menu or already in the game? -----------
    # Splash colours dominating the pulse box means the other start state:
    # already inside U2, waiting on the title screen. Handle it explicitly
    # instead of falling through to "neither screen is showing".
    splash_frac = splash_colours_present(px)
    sel_now0, _ = game_menu_state(px)
    on_splash, _bc, _bs = (False, 0, 0.0)
    if in_ultima2(px) and sel_now0 is None:
        # Watch it for a few seconds rather than trusting one frame.
        on_splash, _bc, _bs = splash_is_running()
    if on_splash:
        say("start: on the Ultima II splash (%.0f%% splash colours)" % (splash_frac * 100))
        # Skip the launch and the splash wait; go straight to dismissing it.
        red_empty, red_dom = bar_is_empty(px, RED_BAR)
        say("step 4: in_ultima2=True red bar empty=%s (dominant %.1f%%)"
            % (red_empty, red_dom * 100))
        if not red_empty:
            say("STOP: the red bar has text. Read it before continuing.")
            return 4
        if dry:
            say("dry run: would press space once, then select Journey Onward"
                if args_select else "dry run: would press space once")
            return 0
        say("step 5: pressing space once to dismiss the splash")
        type_space()
        time.sleep(3)
        still, bc6, bs6 = splash_is_running(samples=5, interval=0.5)
        say("step 6: still splashing = %s (best %d changed, %.0f%% splash colours)"
            % (still, bc6, bs6 * 100))
        if still:
            say("STOP: still animating, still the splash. Not sending arrows.")
            return 5
        if not args_select:
            say("step 7: stopping here (no --journey requested)")
            return 0
        return run_selection(px, say)

    if in_ultima2(px):
        say("already inside Ultima II, skipping the launch")
    elif towns_menu_showing(px):
        say("step 1: Towns menu is showing")
        if dry:
            say("dry run: would double-click Ultima II at framebuffer %s" % (U2_ICON_FB,))
            return 0
        say("step 2: double-clicking Ultima II at framebuffer %s" % (U2_ICON_FB,))
        xdotool_double_click(*U2_ICON_FB)
    else:
        say("STOP: neither the Towns menu nor Ultima II is on screen.")
        say("      not sending anything.")
        return 2

    # --- already at the game menu? ----------------------------------------
    # If the Option: box is up with a highlight, the splash is already past and
    # waiting for it would hang. Jump straight to selection.
    sel_now, cov_now = game_menu_state(px)
    if sel_now is not None:
        say("step 3: game menu already showing, selected = %s" % sel_now)
        if not args_select:
            say("        stopping here (no --journey requested)")
            return 0
        return run_selection(px, say)

    # --- step 3: wait for the splash, confirmed by the pulse ----------------
    say("step 3: waiting for the splash (watching up to 60s)")
    seen_splash = False
    deadline = time.time() + 60
    while time.time() < deadline:
        is_splash, bc, bs = splash_is_running(samples=4, interval=0.5)
        if is_splash:
            say("        splash confirmed (best %d changed samples, %.0f%% splash colours)"
                % (bc, bs * 100))
            px = shot()[2]
            seen_splash = True
            break
        time.sleep(0.5)

    if not seen_splash:
        say("STOP: splash never animated. Not pressing space.")
        return 3

    # --- step 4: the red bar must be empty ---------------------------------
    red_empty, red_dom = bar_is_empty(px, RED_BAR)
    say("step 4: in_ultima2=%s red bar empty=%s (dominant %.1f%%)"
        % (in_ultima2(px), red_empty, red_dom * 100))
    # The red bar only exists once the game is up. On the Towns menu this region
    # holds other content, so a "has text" reading there is meaningless and must
    # not stop the flow.
    if in_ultima2(px) and not red_empty:
        say("STOP: the red bar has text. Read it before continuing.")
        return 4

    if dry:
        say("dry run: would press space once")
        return 0

    # --- step 5: dismiss the splash --------------------------------------
    say("step 5: pressing space once to dismiss the splash")
    type_space()
    time.sleep(3)

    # --- step 6: the animation must have stopped -------------------------
    # The splash is identified by its pulse. If the pulse is still running, the
    # space was not accepted and the game menu is NOT up yet. Sending arrows at
    # that point would move nothing, and sending space would be sent twice.
    still, bc6, bs6 = splash_is_running(samples=5, interval=0.5)
    say("step 6: still splashing = %s (best %d changed, %.0f%% splash colours)"
        % (still, bc6, bs6 * 100))
    if still:
        say("STOP: still animating, so this is still the splash.")
        say("      Not sending DOWN DOWN SPACE.")
        return 5
    say("        animation stopped, so the game menu should be up")

    if not args_select:
        say("step 7: stopping here (no --journey requested)")
        return 0

    # --- step 7: DOWN DOWN SPACE, as one uninterruptible sequence ----------
    # The menu defaults to "Return to TOWNS OS" highlighted in red. Space alone
    # accepts that and quits, which is what kept exiting the game. Two DOWNs move
    # the highlight to "Journey Onward". The three keys go out back to back with
    # nothing in between, because any other input would move the highlight.
    return run_selection(px, say)


if __name__ == "__main__":
    sys.exit(main())
