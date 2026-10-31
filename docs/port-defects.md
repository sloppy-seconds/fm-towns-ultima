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
| 2 | `Esc` and `Q` crash it | **Not reproduced, and half of it is refuted.** `Esc` ends the run with exit code 0, measured in two different screen states, because the front-end treats it as the window's quit key (`towns_sdl.cpp:179`, `throw Stop{0}`) and `main.cpp` prints that at startup: "Escape closes it and ends the run". Injected into the guest instead, `Esc` makes the game quit itself cleanly (DOS terminate, `eax 0x4c00`, frame 915). `Q` produced no screen change and no exit at the menu, on Select Player, or on the post-select prompt | **open as a report, refuted as measured behaviour. What is left is that a vanishing window reads as a crash** |
| 3 | Character creation does not work | `Generate Character` on the game menu was tried and is a dead end. `Journey Onward` with a character already on the disk works, and it is the only route anybody has played | open |
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

## What would settle what is left

Defect 1 has a fault address now, so the question changed from "find a crash" to "what is at `0xffeba` and why does
the guest go there". Three things would close it, in order of cost. Decode the containing routine `f_000ffe24` from
its start and find why `cfgwalk` and a seeded decode disagree about `0xffeba`. Then identify the transfer that
reached it, which the register hint (`ebx 000ffe77`, a code address) says is probably one of the 30 unresolved
indirects in `module/report.txt`. Then decide whether the answer is a missing resume point, in which case
`tools/resumepoints.js` already has the machinery, or a computed jump into a routine body, which is a different
problem and a bigger one.

Defect 2 needs one measurement that nobody has taken: what `Q` does in the original. The emulator binds `Q` to its
own quit, which is why the memory of "Q crashes it" is not trustworthy, and the port forwards `Q` to the guest
unchanged. Running the original in Tsugaru and pressing `Q` at the same three screens answers it, and if the answer
is "nothing", the defect closes as refuted and the only remaining work is a quit affordance that does not look like
a crash.
