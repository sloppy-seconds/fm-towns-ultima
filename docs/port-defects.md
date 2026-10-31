# What is broken in the port, and how each one was seen

The rule for this page: an entry needs the observation that produced it. A bug list is the most tempting place in
this project to write a confident sentence nobody measured, so the table admits only what somebody actually saw
while playing. "Combat may be broken" is not on it, because nobody has watched combat break.

`tools/portcheck.js` enforces the shape: every row of the table has to carry an observation cell, and the two
quickstarts have to give the tested route rather than the one the game menu suggests.

## The observed defects

| # | defect | the observation | state |
|---|---|---|---|
| 1 | It crashes easily | Paul played the port and it died during ordinary use. No single action was identified as the trigger, which is the observation rather than a failure to narrow it down | open, no diagnosis |
| 2 | `Esc` and `Q` crash it | Pressing `Esc` or `Q` on the keyboard during a session ends the run abnormally. Reported in the same breath as defect 1, and the two may be one fault | open, no diagnosis |
| 3 | Character creation does not work | `Generate Character` on the game menu was tried and is a dead end. `Journey Onward` with a character already on the disk works, and it is the only route anybody has played | open |
| 4 | No sound library means no window | On a Debian trixie container with no SDL and no `libasound`, the port printed `graphics  sdl unavailable (Failed loading libasound.so.2: ... cannot open shared object file), falling back to none` and ran with no window at all. Installing `libasound2` gave a 640x480 window showing the title screen, on the same machine with still no SDL | open, cause known, not fixed |

Defects 1 and 2 are play observations reported on 2026-10-30, when the tree was at `51ca6e5`. They are not traces.
No backtrace has been captured for either, and neither has been re-tested since the report.

Defect 3 is older than the other two and is the reason `assets/save-disk/` carries a disk with three characters on
it. Without that disk the honest quickstart would be "play the original first and make a character", which is a
poor first five minutes.

Defect 4 was found while proving the static-SDL release binary on a bare container, on 2026-10-31, and it is a
different kind of entry: the cause is visible in the message. `fmtownskit/runtime/towns_sdl.cpp` calls `SDL_Init` once
with video, audio and gamepad together, and SDL fails the whole call when no audio backend can be loaded, so the port
loses the window as well as the sound. Every stock desktop has at least one of `libasound`, `libpulse` or
`libpipewire`, which is why this has not bitten anybody playing it. The fix is to init video first and treat audio as
optional, and it belongs to the toolkit's front-end rather than to this repository, so it is a patch against the
submodule rather than an edit here.

What the port does do, so the list is not read as "nothing works": it boots through the splash, the game menu and
into the overworld with a character panel, on the recompiled code. That claim is `docs/recompilation-result.md`,
and the menu screen matching the machine byte for byte is `docs/port-missing-text.md`.

## The route that has been played

1. `./tools/x-run.sh start`, then open `http://<host>:6081/vnc.html`.
2. Press space through the splash to the game menu.
3. `Journey Onward`.
4. Pick a character that already exists. `unzip -o assets/save-disk/userdisk.hdm.zip -d saves/` puts three on the
   disk the container mounts, and in-game slot 1 is `E`.

Do not pick `Generate Character`. The menu offers it, and it does not work yet. That mismatch is the whole reason
this section exists: a reader finds it by losing twenty minutes.

## What is not on the list, and why

Three categories sit outside the table, and the boundary matters more than the entries.

- Defects that were found and fixed. The missing menu and notice text is the large one. `docs/port-missing-text.md`
  is the record, including the six explanations that were measured and rejected first.
- Limits of the harness rather than the game. Pausing the port on a frame count does not line up with the machine's
  clock, which a player cannot see and which belongs to the instrumentation pages.
- Things that look fragile in the code and have not been seen to break. Combat, saving, and the planetary maps are
  all here today. If one of them fails in front of somebody it moves into the table with its observation attached,
  and until then it is a hypothesis and lives in `docs/open-questions.md`.

## How to add an entry

Four fields: what you did, what the screen did, the date or the tree you were on, and whether it still reproduces.
A report without "what the screen did" is a hypothesis, not a defect.

The container already captures the evidence, so the cheapest useful report is a shot before and after the action
plus the log:

```bash
./tools/x-run.sh shot before.png
# ... do the thing that breaks it ...
./tools/x-run.sh shot after.png
./tools/x-run.sh logs
```

## What would settle defects 1 and 2

Both need a fault to point at, and neither has one. Three things would move them, in order of cost.

The log from the moment it dies, which `x-run.sh logs` already keeps. Then whether 2 is a special case of 1, which
a session that only ever presses other keys would answer. Then a comparison with the original on the same keys,
because nobody has recorded what `Esc` and `Q` are supposed to do in this game, and the emulator binds `Q` to its
own quit. That last one is a hypothesis about the mechanism and is listed as a hypothesis: it has not been checked
against the port's front-end or against the original.
