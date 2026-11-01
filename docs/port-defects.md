# What is broken in the port, and how each one was seen

The rule for this page: an entry needs the observation that produced it. A bug list is the most tempting place in
this project to write a confident sentence nobody measured, so the table admits only what somebody actually saw
while playing. "Combat may be broken" is not on it, because nobody has watched combat break.

`tools/portcheck.js` enforces the shape: every row of the table has to carry an observation cell, and the two
quickstarts have to give the tested route rather than the one the game menu suggests.

## The observed defects

| # | defect | the observation | state |
|---|---|---|---|
| 1 | It crashes easily | **Diagnosed 2026-10-31.** Paul played the port and it died during ordinary use. Reproduced on the current release binary with a scripted key sequence under Xvfb: three runs, all three died at machine frame 4026 with `fault at 000c:000ffeba: no recompiled function at 000c:000ffeba (eip 000fed47, frame 4026)` and exit code 3 | **open, cause identified as a module coverage hole, fix not attempted** |
| 2 | `Esc` and `Q` crash it | **Not reproduced, and half of it is refuted.** `Esc` ended the run with exit code 0, measured in two different screen states, because the front-end treated it as the window's quit key (`towns_sdl.cpp`, `throw Stop{0}`) and `main.cpp` printed that at startup. Injected into the guest instead, `Esc` makes the game quit itself cleanly (DOS terminate, `eax 0x4c00`, frame 915). `Q` produced no screen change and no exit at the menu, on Select Player, or on the post-select prompt. **Changed 2026-11-01 at Paul's request:** `Esc` no longer quits, because it is the easiest key to hit by accident, and quitting is `Ctrl-Q` or closing the window. `Esc` is currently inert in-game rather than delivered, since `kPcToTowns` drops index `0x01` and giving it a Towns scancode needs that value measured rather than assumed | **open as a report, refuted as measured behaviour. What is left is that a vanishing window reads as a crash** |
| 3 | Character creation does not work | **Diagnosed 2026-11-01, two causes, both now closed.** The report itself was wrong: `Generate Character` is not a dead end, it is a sub-menu (Examine the Register / Create a Character / Terminate a Character / Main Menu / Look at a Character) and the headless route reaches it. What was dead was the digit. `Create a Character` asks `Create Entry (1-4) # 0` and wants a number, and the port could not deliver one. The second cause was that even a completed creation could not be saved | **fixed. Cause one pinned at kit `4028a76`, cause two by the FAT12 write path, and `tools/controlcreate.py` proves creation, persistence and play across two processes** |
| 5 | The keyboard could not type a digit | **Found and fixed 2026-11-01, on the yell line.** Every digit key was dropped before it reached the guest, and the whole a-z 0-9 grid is now measured glyph by glyph. Recorded under defect 3 because that is where it was found | **fixed, pinned at kit `4028a76`, and gated by `tools/controlkeymap.py`** |
| 4 | No sound library means no window | On a Debian trixie container with no SDL and no `libasound`, the port printed `graphics  sdl unavailable (Failed loading libasound.so.2: ... cannot open shared object file), falling back to none` and ran with no window at all. Installing `libasound2` gave a 640x480 window showing the title screen, on the same machine with still no SDL | open, cause known, not fixed |

Defects 1 and 2 are play observations reported on 2026-10-30, when the tree was at `51ca6e5`. They are not traces.
No backtrace has been captured for either, and neither has been re-tested since the report.

## Defect 1, what the diagnosis is and what it is not

The crash is not a wild pointer and not the emulator losing the plot. It is the port discovering that the game
reached an address the recompiled module does not have.

**The signature.** `fmtownskit/runtime/towns_cpu.cpp:28` is `x86_fault()`, and its last act is `std::exit(3)`. So
**exit code 3 is the coverage-hole signature**, and any future report that says "it crashed" is answered by looking
for a `fault at` line and a 3. The three reproductions all printed the same line, at the same frame, with the same
target and the same `eip`:

```
fault at 000c:000ffeba: no recompiled function at 000c:000ffeba (eip 000fed47, frame 4026)
  eax 0000004c ecx 0000994c edx 00000000 ebx 000ffe77 esp 000df7ad ebp 0011ea94 esi 00122b30 edi 00000017 fl 00000203
```

**Where 0xffeba is.** It is not a function start. `module/p_game_funcs.h` has `f_000ffe24` and the next start is
`f_000fff9b`, so the address lies inside the span of a routine the module does contain, and the kit dispatches only
on exact starts. `tools/cfgwalk.js --check 0xffeba` says it is not an instruction boundary when the walk starts at
its function, while a decode seeded at `0xffe80` lands on `mov reg,reg` exactly there. The two walks disagree, and
that is recorded as a lead rather than resolved.

**What the registers hint at, labelled as a hint.** At the fault, `esp` is `000df7ad` against `ebp 0011ea94`, which is
not a plausible frame, and `ebx` holds `000ffe77`, a code address a few instructions before the target. A computed
transfer rather than a normal `call` would look like that, and `module/report.txt` counts 30 indirect transfers it
could not resolve. Not proven, and the exact instruction has not been identified.

**What is not the cause.** The fault is not input-driven in any obvious way: it fired at frame 4026 in runs whose key
timing differed by whole seconds, and in one run after a different number of keys than another. It looks like the
guest reaching a piece of code on a path that the module never covered, at a point the machine reaches on schedule.

**The reproduction, so it can be re-run.** `saves/userdisk.hdm` slot 1, then through the window: `space` to the menu,
`Down Down` to Journey Onward, `Return`, `Return`, `y`, `y`, then 24 rounds cycling `Right Up Left space s Down`. It
dies on the 27th key. The scripts that produced this are not committed because they belong to the next phase's
control API; the sequence above is the thing to reproduce.

## Defect 2, what Esc and Q actually do

`Esc` is the front-end's quit key, deliberately, and it is printed on startup. Measured twice, on the game menu and
after character selection, it ended the run with exit code 0 and a clean `stopped` line. Injected straight into the
guest with `U2_KEYS=900:011b` it made the game terminate itself through DOS (`eax 0x4c00`) at frame 915, which is
the game's own exit path rather than a fault. So neither half of "Esc crashes it" reproduced.

`Q` is forwarded to the guest (Towns scan `0x10`) and produced no screen change and no exit at the three screens
reached so far. What `Q` is *supposed* to do in the original is still unmeasured, and the emulator's own binding of
`Q` to quit is a reason to distrust the memory of it rather than a fact about the game.

What is left of the report is a usability fact rather than a defect: a window that disappears with no message looks
exactly like a crash, and the port currently has no quit affordance that says so. That is a thing to fix in the
front-end or the documentation, and it is listed in the plan rather than here, because this page is for faults.

## Defect 3, two causes, and how far creation gets now

**Cause one: the port drops every digit key.** The create prompt wants a number and no number could reach the game.
The measurement is the queue counter, read in the same breath as the push so that "rejected" and "never queued"
cannot be confused. Before the fix:

| pushed | `queued` immediately | `keys_served` after 40 frames |
|---|---|---|
| `4` | 0 | unchanged |
| `Up` | 1 | +1 |
| `4` | 0 | unchanged |
| `Up` | 1 | +1 |

An arrow enters the queue and is consumed. A digit is not in the queue at all, one frame after being accepted by
the socket. The cause is in the kit: `kPcToTowns` in `runtime/towns_sdl.cpp` maps PC/AT set 1 to the Towns JIS
codes, and indices `0x02` to `0x0B` (the digits `1` to `0`) were left at zero, and `towns_key()` returns false for
a zero, so the key is discarded before it is queued. The correct values are the identity, because the two code
sets agree on this row. `references/TOWNSEMU/src/towns/townsdef/townsdef.h` gives `TOWNS_JISKEY_1 = 0x02` through
`TOWNS_JISKEY_0 = 0x0B` and that was the hint, but the authority is the game's own echo on the yell line, spelled
out below, because a first attempt that trusted the enum without checking it produced a row one index off and every
digit landed one high. The one-row fill is kit commit `4028a76` on `mp-support`, pinned by this repository, and
the record of it is in `docs/fmtownskit-patches.md`.

With the fill applied the whole route runs through the socket alone, no display and no vision model, and the
register comes back:

```
[Generate Character]
Option: Examine Register
1: E        Male    Elf    Fighter
2: D        Male    Dwarf  Fighter
3: B        Male    Bobbit Fighter
4: JAMES    Male    Human  Fighter
Press Space
```

That is the screen transcribed from the run, and `tools/controlcreate.py` drives the 26 keys that produce it and
asserts the frame hashes in two consecutive runs. It was seen to fail before it was trusted: with the unfixed kit
it stops at the create prompt and names the digit defect.

**The digit off-by-one was this repository's bug, and it is closed.** The first fill copied TOWNSEMU's enum as an
identity mapping but wrote the row one index off, so the key `1` delivered the code for `2`, `2` delivered `3`, and
so on down the row, while `0` delivered zero and drew nothing at all. That is exactly what the create prompt showed:
typing `4` produced `Create (1-4 Only!)` and typing `3` produced entry 4. With the row aligned, `4` selects entry 4
and the create route needs no workaround. The original game was never the question, so the comparison under Tsugaru
that this note used to call for is not needed for this.

**Cause two was: the save disk is read-only, so a created character is never persisted.** `port/floppy.h` said so
on purpose, "saves/ holds irreplaceable state and none of it is in git, so nothing here writes", and the kit's DOS
layer only ever called `fm_floppy_read`. File creation (`int 21h AH=3C`) on `A:` reported "not on the floppy". The
measurement at the time: after a completed creation the image's md5 was `70ea85d4e7f006663b57a5a4d669787b`,
identical to before, `state` still read slot 3 as empty, and `Journey Onward` showed only `1: E`, `2: D`, `3: B`.

**That cause is closed as of 2026-11-01, and the decision to close it was Paul's, not this repository's.** He
accepted that the port may mutate save images, on the boundary below. The rule it replaced existed because `saves/`
is disc-derived and has no backup, and a write path is exactly the thing that rule was guarding against, so the
boundary is the part worth keeping written down:

| volume | writable? | why |
|---|---|---|
| the user/save disk, the image passed as the fourth argument | yes, by default | a character that cannot be written to `ROSTER1.UT2` is a character that does not exist |
| the same disk with `--read-only-disk` | no | the old behaviour is one flag away, and a run that is measuring something should not be able to leave a mark |
| the game disc (`.ccd`/`.cue`) | never, and not from this code at all | it is a separate file served by the CD path, so "never mutate the original media" needs no policy here because there is nothing to guard |

Writes go through a FAT12 writer in `port/floppy.h` and reach the file **once, at exit**, so a run that dies part
way leaves the image exactly as it was found. The kit side is four hooks rather than two, and a handle only flushes
if something was actually written to it, so opening a file read-only and closing it cannot touch the image.

The end-to-end measurement, from `tools/controlcreate.py`: a socket-only run creates JAMES in slot 4, the image
md5 moves from `70ea85d4e7f006663b57a5a4d669787b` to `f4911c56b51b7eb274f7bcf3db583c07`, `node tools/savedisk.js
slots` on the written image reports `slot 3: "JAMES"`, and a **second process** opening that file reads him back
through `state` (HP 400, STRENGTH 20, AGILITY 20, INTELLIGENCE 15, which are the stats the creation screen ended
on) and plays him: the overworld status panel reads `JAMES / H: 400 / STRENGTH: 20 / AGILITY: 20 / INTELLI: 15`.
Forcing `--read-only-disk` makes the test fail with "the save disk is unchanged", which is the check having teeth
rather than a hypothesis.

One interaction worth recording: with the unfixed kit the creation route does not stall quietly, it dies at frame
4925 on the defect 1 fault at `000c:000ffeba`. The route is a second reproduction of defect 1 and it is reachable
without any unusual input.

## The keyboard grid, measured on the yell line

Once the game is running, `Y` opens YELL, the game answers `Word?` and echoes whatever the guest receives until
`Return`. That makes it the cleanest surface in the game for asking what a key actually delivers: no menu to
re-navigate, and the answer is drawn on screen.

The measurement is the drawn glyph, not a transcription. Each accepted key advances the line exactly 16 px, so the
glyphs are cut on that grid and compared as bitmaps. `tools/controlkeymap.py` drives it, and it asserts three
things that need no copy of the game's font in this repository: every key draws something, no two keys draw the same
shape, and two independent runs agree. The identity of each glyph, which a structural test cannot see, was
established once by reading the rendered shapes, and that reading is the table below.

| keys | delivered | what the game drew | result |
|---|---|---|---|
| `a` to `z` | the Towns codes the table already gave | `A` to `Z`, one glyph each | 26 of 26 correct, before and after the digit fix |
| `0` to `9`, before the fill | nothing, the keys were dropped at `towns_key()` | no glyph, ink delta about 6 px of cursor | 10 of 10 dead |
| `0` to `9`, first fill | one code too high, and `0` dropped | `1` drew `2`, `9` drew `0`, `0` drew nothing | 9 wrong, 1 dead |
| `0` to `9`, final fill | the code for the digit itself | `0` to `9` | 10 of 10 correct |

Two things make this a measurement rather than an impression. The glyph bitmaps are identical across independent
runs of the same key, and no two keys in the 36 share a bitmap. And the test was broken on purpose to watch it
fail: on the unfixed kit it reports `these keys drew nothing` for six digits and names the collisions, and with one
table index corrupted by hand it reported `2 of 36` and named the key.

The bitmaps themselves are not committed. They are cut from the game's own font, and extracted output stays out of
git, so the grid is cached under `analysis/` (gitignored) after a clean pass and compared against on the next one.

One constraint worth knowing, because it decides how long a sweep can be. Defect 1 fires at frame 4026, so the whole
36-key sweep runs at 40 frames a press and finishes near frame 2800. At 120 frames a press the second batch died on
the coverage hole, which is the same fault with the same register dump as the one Paul hit while playing.

## Why this evidence pass needed a window and could not be done headlessly

Headless key injection cannot activate the game menu. `U2_KEYS` moves the menu highlight and reaches the Select
Player screen through the front-end, but the same injection through `U2_KEYS` alone never selects an item: measured
with `Return` as `1c0d` and as `1c00` (the front-end sends ascii `0x00` for keysyms below `0x20`, per
`towns_key()`), with presses repeated across a sweep of frames, with spacing from 200 to 2500 frames, and with the
pad buttons `A` and `Run`. Every one stayed on the menu. Real SDL keys through Xvfb and `xdotool` got through on the
first try. Both paths call the same `Machine::press_key`, so the difference is not the API, and it is not the ASCII
half and not the frame spacing, because both were varied and measured.

That is the gap the control API in phase 10 is for: a `key` command that pushes through SDL, which is the path that
works, rather than a parallel one that does not.

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

## Reported and refuted: keys queue up and act more than once

**Reported 2026-11-01.** Typing a direction key five times quickly walks five tiles, and the original was said to
accept only one action per turn, which would matter in combat where the direction keys get mashed.

**What the port does, measured.** `Machine::press_key` is `keys.push_back(...)` in
`fmtownskit/runtime/towns_dos.cpp`, so the queue has no depth limit, no expiry and no per-frame budget. The game
drains it as fast as it fills: over 1,600 frames the guest called `int 90h` with `AX=0901` (`KYB_read`) **803,794
times**, about 500 polls per frame, and called `AH=06` (clear) not once. Every key offered is therefore consumed,
and N presses produce N actions.

**What the machine does, measured in Tsugaru.** Five presses of one direction, on a corridor first proven open six
tiles long and walked back between trials so a trial could not reach a wall:

| gap between presses | moves registered |
|---|---|
| 400 ms | 5 of 5 |
| 300 ms | 5 of 5 |
| 200 ms | 5 of 5 |
| 150 ms | 5 of 5 |
| 100 ms | 5 of 5 |
| 60 ms | 5 of 5 |
| 30 ms | 5 of 5 |
| 10 ms | 4 of 5 |

Eight presses 30 ms apart gave 8 of 8.

**Verdict: refuted.** The machine buffers at least eight fast presses, so it does not limit input to one action per
turn, and the port is faithful at every speed a person can type. Two caveats stated rather than smoothed. At 10 ms
apart one press was lost, and that may be the game or may be `xdotool` coalescing at the X server, so it is not
evidence either way. The depth above eight is unmeasured.

**Two failed attempts are part of the finding**, because each produced a confident wrong answer first. The first
run reported 0 of 5 at every fast gap, from a tile whose westward neighbour is blocked. The second flagged every
fast trial as ambiguous, because three moves reached water. A corridor that runs out and a buffer that drops a
press are the same reading until the corridor is proven long enough to hold the whole trial.

**A real bug found on the way, and not the cause.** `int 90h AH=06`, the keyboard clear, is a no-op stub in the kit
(`case 0x00: case 0x01: case 0x02: case 0x05: case 0x06: break;`). Ultima II never calls it, so it cannot produce
this report, but a program that does call it will not get a cleared buffer.

## What would settle what is left

Defect 1 is closed: the fault at `0xffeba` was table entry 1 of eight handlers at `0xffe73` that only a
`call dword ptr cs:[ebx]` refers to, all eight are now seeds, and the scripted route that faulted runs 9,000 frames
clean. The 30 unresolved indirect transfers remain the obvious place to look for the next hole of that shape.

Defect 2 needs one measurement that nobody has taken: what `Q` does in the original. The emulator binds `Q` to its
own quit, which is why the memory of "Q crashes it" is not trustworthy, and the port forwards `Q` to the guest
unchanged. Running the original in Tsugaru and pressing `Q` at the same three screens answers it, and if the answer
is "nothing", the defect closes as refuted and the only remaining work is a quit affordance that does not look like
a crash.
