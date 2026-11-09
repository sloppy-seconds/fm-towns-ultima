# The C++ behavioural port

The port track: a build that plays like Ultima II, verified against the machine rather than against the
original's bytes. It consumes the ledger defined in [plan-attribution.md](plan-attribution.md) and it does
not claim byte identity. Phases 7, 9 and 10 moved here from `plan.md` on 2026-11-01 when the plan split.

**Definition of done for this track: a player-observable behaviour matches the machine.** Compile-and-diff
is a diagnostic here and nothing more, and that rule is unchanged by the preservation track's exception.
See [plan.md](plan.md) "The one exception".

## What can be worked right now

Derived from the items below, not maintained separately. `node tools/plancheck.js --todo` is authoritative.

| item | autonomy | can an agent start it now |
|---|---|---|
| 7a Does the port's screen match the machine's | AUTONOMOUS | **done**, the menu pair exists: 0 bytes differing on the displayed page, and an off-screen half-tone differing by phase |
| 7c What else the program patches at run time | AUTONOMOUS | **done**, one byte |
| 7d The indirect transfers the port meets next | AUTONOMOUS | **done**, 35 of 97 execute and all resolve |
| 7e A port regression the checks can run | AUTONOMOUS | **done**, `tools/portcheck.js`, failure demonstrated on a mutated copy |
| 7f Give the port a floppy drive | AUTONOMOUS | **done**, floppy, keyboard and screen, the title draws |
| 7g Watch the port from another machine | AUTONOMOUS | **done**, a generic X container, the title draws in a browser |
| 7h The port's kanji text | AUTONOMOUS | **done**, the font is on the disc rather than in a ROM, and the menu box VRAM matches the machine byte for byte |
| 9a The README's first screen | AUTONOMOUS | **done**, two quickstarts above the fold, the copyright warning with them |
| 9b The goal, in the README, in one screen | AUTONOMOUS | **done**, the goal section, and the port named a recompile rather than a decompile |
| 9c The page on why this is hard | AUTONOMOUS | **done**, `docs/why-this-is-hard.md`, nine obstacles each linked to the page that measured it |
| 9d A port quickstart that starts from the download | AUTONOMOUS | **done**, `docs/port-from-source.md`, verified in a clean clone, and it found a step that only worked on the author's disk |
| 9e CI that proves the tree builds | AUTONOMOUS | **done**, `.github/workflows/port-build.yml`, the port links against a synthetic module with no game file present |
| 9f A release, and what may be in it | AUTONOMOUS | **done**, `v0.1.0` cut on 2026-10-31 through the workflow, all three jobs green first run |
| 9n The published image is private | BLOCKED ON HUMAN | no, and it cannot be fixed from the API: GitHub has no endpoint for package visibility, so it is a web-UI click |
| 9g Cross-compiling for Windows and macOS | PARTLY AUTONOMOUS | **scheduled followup**, decided 2026-10-30, and it needs machines to run the result on |
| 9h The README's claims and links, checked | AUTONOMOUS | **done**, `checkall.js` rejects any fourth spelling of the three copied URLs and any dead relative link in the README |
| 9l Choose a licence for this repository's own code | AUTONOMOUS | **done**, MIT at the root, shipped in the release archive, with the scope stated in words |
| 9m A release binary that needs nothing installed | AUTONOMOUS | **done**, SDL is built from the pinned source and linked static, and the tarball played on a machine with no SDL at all |
| 9k Mirror the repository and its releases | AUTONOMOUS | **unblocked**, the release exists, and the item now names the exact commit, asset, digest and image manifest to mirror |
| 9i The tested route, and a list of what is broken | PARTLY AUTONOMOUS | **done**, `docs/port-defects.md`, three observed entries, Paul's play report |
| 9j A save disk with characters, and where it may live | AUTONOMOUS | **done**, committed as a 3,629-byte zip with the exception narrowed to one filename |
| 10a The control channel and the frame tap | AUTONOMOUS | **done**, `--control` answers JSON lines from the frame hook, and the default path is byte-identical to the release binary |
| 10b `key`, through SDL rather than beside it | AUTONOMOUS | **done**, the socket path reaches `Select Player` with the windowed path's hash, with no display server |
| 10c `frame` and `wait` | AUTONOMOUS | **done**, exact stepping, waits that time out, and two runs to the same frame give the same framebuffer |
| 10d `shot` over the channel | AUTONOMOUS | **done**, byte-identical to `U2_SHOT` at the same frame, with no display server |
| 10e `mem`, a raw read by `seg:off` | AUTONOMOUS | **done**, image bytes match the file and segment resolution is proved; the peek.js comparison was replaced, and the plan says why |
| 10f `state`, the roster and world parsed for the caller | AUTONOMOUS | **done**, three characters named and every compared field agrees with `savedisk.js` |
| 10g The MCP wrapper | PARTLY AUTONOMOUS | no, depends on 10b, and the harness wiring needs Paul |
| 10h Tier 3, listed and not scheduled | AUTONOMOUS | no, and it is deliberately not scheduled |
| 5m Music: where it comes from, and when it starts | AUTONOMOUS | **partly known**, the port's side is measured and recorded in `docs/music.md`, the original's side has no sound device to measure |
| 5o Some samples are cut off at the end marker | AUTONOMOUS | **open**, the marker stop fixes the repeat and the sample data is the suspect; `docs/audio-playback.md` holds the measurements |
| 5n Hardware interrupt delivery, attempted and reverted | PARTLY AUTONOMOUS | **open**, the attempt silenced the FM music and was bisected out; next is a bounded retry or a CUT, and `docs/interrupts.md` holds the numbers |

## The items this track owns that the old plan did not have

### 11a. Close the coverage hole that is defect 1

**State:** DONE · **Autonomy:** AUTONOMOUS

**What is now known.** The transfer is a **table dispatch**, and that is why no walk seeded on call targets could
see it: `0x10005e  call dword ptr cs:[ebx]`, where `ebx` is computed at `0x100057` as
`0xffe73 + (((byte[0xdfa00] - 0x80) >> 4) * 4)`, guarded by `cmp ebx,0x80; jb`. The table is **eight code
pointers at guest `0xffe73`**, inline in the code segment after a `popal; ret`, and **the fault address `0xffeba`
is index 1**. The handler there is an interrupt-style entry: `cli`, save `ebp`/`ss`, switch the stack to `0xdf7f5`,
`sti`, `call 0xfeb5e`.

**The repair landed before the diagnosis**, from the other direction: the jump-table seed work of 2026-11-01 added
all eight targets, taking the module from 865 to 875 functions. Verified now: all eight are starts in
`module/p_game_funcs.h` with exactly one definition each, and the current binary contains `f_000ffeba` while the
2026-10-30 binary does not. Since the kit fails only on a non-start and `0xffeba` is now a start, **the fault cannot
recur there** - an argument by construction, plus a long route with real input that completes:
`tools/controlcreate.py`'s 26-key socket route runs well past frame 4026.

**The one caveat, recorded rather than glossed.** The original crash was not reproduced and then eliminated,
because the key script that triggered it was never committed. Full write-up in
[port-defects.md](port-defects.md) defect 1.

`no recompiled function at 000c:000ffeba` at frame 4026, reproduced five times from ordinary input, is the
port reaching an address the recompiled module does not contain. `0xffeba` sits inside `f_000ffe24` and is
not a function start, so the first question is control flow and not code generation: what computed transfer
lands there, and why did `cfgwalk` and the seeded decode disagree about it.

| field | value |
|---|---|
| autonomy | autonomous. The fault is deterministic and `tools/cfgwalk.js` and `tools/funcs.js` already exist |
| done when | the transfer that reaches `0xffeba` is named with the instruction address and the register that carried the target, the function containing it is either added to the module or recorded as not-a-function with the evidence, and the scripted route that currently dies at frame 4026 runs past it. The failure case: a recorded negative saying the transfer could not be resolved statically, which is a legitimate end and must be written down rather than left as a crash. **Met 2026-11-02:** instruction `0x10005e` in register `ebx`, all eight table targets are module starts, and the crash cannot recur at that address. The original script was never committed, so this is construction plus a passing long route rather than a replay |
| blocked by | nothing |

### 11b. Read the ledger, and make the port's coverage a column of it

**State:** OPEN · **Autonomy:** PARTLY AUTONOMOUS

The port is where coverage holes become crashes, so the port track writes `port-coverage` and reads
`attribution`. This item is the wiring, and it is what stops the document split from hiding the coupling
that produces defect 1.

| field | value |
|---|---|
| autonomy | partly. The reader and the column are code here. The ledger file itself is produced by [plan-attribution.md](plan-attribution.md) item 0d, so this cannot finish before that one |
| depends on | 0d |
| done when | a script derives `port-coverage` for every function from a scripted run of the control socket, the ledger records it, and the count of `coverage-hole` rows is reported by `tools/portcheck.js`. The failure case: a coverage column that only lists functions the port already reaches, which can never report a hole |
| blocked by | 0d |

### 11c. The region-replacement protocol, with differential verification

**State:** DONE · **Autonomy:** AUTONOMOUS

**The architecture is now decided: strangler.** Recorded in
[goal-behavioural-faithfulness.md](goal-behavioural-faithfulness.md) "The architecture: strangler". A native
engine grows beside the machine and the machine comes out at the end. That makes this item the seam the
whole reimplementation runs through, not a one-off experiment.

**The seam, measured 2026-11-02.** The machine dispatches by guest address through `x86_lookup_cs`, which walks
`g_x86_modules` in order and takes the first hit; the game module's `k_funcs` is 875 `{address, void(*)(X86Cpu&)}`
entries generated into `build/port/recomp/`. A replacement therefore has the same contract as a generated
function: do the work, set `c.r[0]`, and `c.eip = pop32(c)`. **There is no per-function override hook**;
`x86_park` excludes whole modules only. The preferred fix is a native module listed *before* the game module
with the same `cs`, which needs no kit change because first hit wins.

**First region: `0xe140c`**, chosen because item 4f proved 43 of 43 bytes identical, so the replacement tests
the protocol rather than a guess about behaviour. Its **guest** address is `0xe120c`, because the machine
dispatches in the guest frame while the documents quote file offsets.

### The first shadow is written and the differential is blocked, 2026-11-02

`native_000e120c` is in `port/native_shadows.cpp`, wired as one table entry, the gate passes with 1 shadow, and
the port builds and runs. Two switches make the differential possible: `U2_SHADOW_OFF=1` delegates to the
recompiled twin so one binary can produce both behaviours, and `U2_SHADOW_TRACE=1` reports entry so a passing
comparison cannot be the vacuous kind where neither run reached the code.

**A constraint the strangler had to learn, and it is not obvious: the tick accounting is part of the contract.**
`X86_TICK(c,n)` is `c.budget -= n; c.clocks += n`, so it feeds both the guest clock the game can read and the
budget that decides when `x86_poll()` delivers an interrupt. A shadow that reproduced the arithmetic and not the
ticks would drift the game's sense of time and its interrupt timing. The native function therefore carries the
twin's own counts (23 entry, 9 for the `n==0` arm, 12 loop head, 9 match, 9 advance, 20 epilogue) and keeps the
loop state in guest registers with the prologue reproduced, because a poll runs inline and the interrupt it
services can read the machine's registers and stack.

**The differential is blocked on the entry point, and this is the concrete finding.** Driven over the control
socket with the documented create route plus 80 movement presses, the port reaches none of this code: the shadow
was entered **0 times** in 20,000 frames. The caller chain explains why.

| address | what it is | called from |
|---|---|---|
| `0xe140c` | `c-leaf`, 43 bytes, 2 callers | `0xe14fa` and `0xe150f`, both inside `0xe1438` |
| `0xe1438` | `non-leaf`, 267 bytes, 1 caller | inside `0xe1970` |
| `0xe1970` | `non-leaf`, 33 bytes, 1 caller | `0xe35cc` |
| `0xe35cc` | **not in the corpus** | inside a 595-byte hole, `0xe3385..0xe35d8` |

The chain terminates at `0xe35cc` because that call sits in a region the census never asserted a function for. The
block pushes `Q:\SOUND\MAP.EUP` three instructions before the call, and a sibling entry at `0xe359f` pushes
`Q:\SOUND\BRIGHT1.EUP` before jumping to the same shared call with a 60-byte argument block. So the routine this
shadow replaces is in the **sound path**, reached when one of those two effects plays, and the create route never
plays either.

**That is also why a route is now possible to construct** rather than guess: the trigger is a named sound, and a
key sweep during gameplay either enters the shadow or records that it does not.

### The route into gameplay exists, and a long in-game run hangs, 2026-11-02

`tools/drive.py` drives the port over its control socket, always on a copy of the disk. The first job was finding a
route that reaches gameplay, and vision settled the navigation rather than guesswork (`tools/look.py`):

```
space, Down, Down, Return, Down, Return, Y, space
```

That is the title, the three-item main menu (Return to Title / Generate Character / Journey Onward), Journey Onward,
the four-slot Select Player screen (`Select with arrows`, so the digits do nothing), the `O.K.? (Y/N)` confirmation,
and the space that dismisses the prompt. At the end of it a screenshot shows the map, the character sprite and the
status panel, so the route is confirmed by the display and not by a guess about the menu.

**No swept key has entered the shadow**, and the sweep now runs the whole alphabet, the digits, the arrows,
Return and space: 43 keys, 900 frames each, zero entries.

**There is no hang, and the first report of one was wrong.** The port is paced by the SDL window and the headless
backend is not. Measured on 2026-11-02, 20,000 frames:

| backend | wall | rate | guest clocks |
|---|---|---|---|
| `--graphics=sdl` | 329.08 s | 61 frames/s | 5333320012 |
| `--graphics=none` | 2.42 s | 8,262 frames/s | 5333320012 |

Identical guest clocks, so the backend paces the run and changes nothing else. A settle of 20,000 frames applied to
each of nine keys is a 180,000-frame run, which is about 49 minutes at the padded rate, and the 1500-second timeout
killed it partway. That is a timeout, not a hang. `tools/drive.py` now defaults to `--graphics=none` and only takes
`sdl` when a screenshot is wanted.

**The block is not reached by keyboard input, and this is a measured negative with a control.** `U2_STOP_AT` ends the
run at an address, `U2_STOP_FRAME` ignores hits before a frame so boot-time execution does not mask everything, and
`0xe4b8d` (the game's own loop, seen as the exit eip of earlier runs) **does** fire as a positive control after frame
9300. Against that control, these are reached **neither** during the prefix **nor** by any swept key:

| guest address | what | reached |
|---|---|---|
| `0xe33cc` | the `call 0xe1970` that plays `MAP.EUP` | no |
| `0xe19f4` | the `0xe1bf4` draw call in the same block | no |
| `0xe120c` | the shadow itself | no |

So the sound path in question is not one a keystroke reaches from the world map, and the block's neighbours do not run
there either.

### The hole is a 10-case jump-table dispatcher, recovered, 2026-11-02

Recovered statically, and it settles what the block is.

| file offset | what |
|---|---|
| `0xe3385` | two-byte alignment nop |
| `0xe3388` | **function start**: `push ebp` / `mov ebp,esp` / `mov edx,[ebp+8]` / `cmp edx,9` / `ja 0xe35a1` / `jmp [edx*4+0xe319f]` |
| `0xe339f` | the jump table, **10 entries** (guest `0xe31c7`...`0xe3374`, i.e. file `0xe33c7`...`0xe3574`) |
| `0xe33c7`-`0xe3574` | cases 0 to 8 |
| `0xe3574` | **case 9**, which pushes `Q:\SOUND\BRIGHT1.EUP` at `0xe359a` and jumps to the shared tail |
| `0xe35a1` | the **out-of-range default**, reached by the `ja`, which pushes `Q:\SOUND\MAP.EUP` at `0xe35c7` |
| `0xe35cc` | `call 0xe1970` then `add esp,0x3c` / `leave` / `ret` |

Every case is the same shape: six pushes and a call to `0xe1c24`, six pushes and a call to `0xe1bf4`, then three
pushes and the sound, which is exactly the 15 pushes that `add esp,0x3c` accounts for. So the dispatcher draws two
shapes and plays a sound, and the index chooses which.

**The index is the facing direction.** Each of the 14 call sites sets `[player+0xcdf57]` (the field item 5e already
recorded as the facing value) immediately before the call, and the indexes actually passed are 0, 2, 4, 6, 8 and 9.
So **case 9 is live** and plays `BRIGHT1.EUP`, and `MAP.EUP` sits on the out-of-range default rather than on any case
something deliberately selects. That corrects this section's earlier reading, which had `MAP.EUP` as the trigger to
hunt.

**And then the measurement moved the blocker again.** With the same positive control that fires (`0xe4b8d`), none of
the following is reached after frame 9300 during the prefix plus all 43 keys:

| guest address | what |
|---|---|
| `0xe3188` | the dispatcher itself |
| `0xe33cc` | its `call 0xe1970` |
| `0xe120c` | the shadow |

The dispatcher not running is the load-bearing result: if no case executes, no sound is played, and the arrows in the
route produced no step. So the shadow is not blocked on the sound path after all, it is blocked on **the player never
moving**, which is a smaller and much more checkable question.

**This also closes the census gap.** The hole was a real function with a real jump table and 14 callers, and the
census missed all of it because it was never a `call` target.

### Movement works, the record address was right, and the stop-at negatives are unverified, 2026-11-02

This section carried three wrong conclusions in a row. All three came from measurement mistakes rather than from the
emulator, and the corrections matter more than the original claims did.

**The character record is exactly where `docs/live-fieldmap.md` says.** Scanning the mapped range for slot 0's
signature, the six attributes at a 4-byte stride and then HP 382 followed by MHP 400, found it at `0x4cde62` and
`0x4cde81`, and every field matches the roster file: STRENGTH 20, AGILITY 25, STAMINA 20, CHARISMA 10, WISDOM 10,
INTELLIGENCE 10, RACE/PROFESSION/SEX `EFMA`, HP 382, MHP 400, EXPERIENCE 12, FOOD 38890, GOLD 141.

The claim that it read as all zeros was **my own one-byte error**. Slot 0 is named `E`, a single character, and it
sits at `0x4cde4d`. I read from `0x4cde4e`, which is the zero after it.

**The player does move.** Turn clock and a 64 KB diff, same route, over `0x4c0000..0x4d0000`:

| phase | bytes changed | turn clock |
|---|---|---|
| 600 frames idle | 3,583 | 70 |
| after `Down` | 14,075 | **71** |
| after `Up` | 14,100 | **72** |

So commands complete turns and each step rewrites about 14 KB, which is the screen and map redraw. "The player never
moved" is withdrawn, and so is the reason given for it: the earlier probe diffed 512 bytes over the *static*
character record, and read the turn clock at `0x400cdf53` when the linear address is `0x4cdf53`.

**The backend question is narrower than it was stated.** The observation stands that a byte at `0xcdfec` ticks under
`sdl` and not under `none` after a key route, but the earlier 512-byte window did not include a position field, so it
could not have shown movement either way. What remains is one unexplained byte, not a finding that the backends
disagree about behaviour.

**And every `stop-at` negative in this section is now unverified, because the control stopped working.** Under
`--graphics=sdl` with this route, `0xe4b8d` (the previous positive control) does **not** fire, so the instrument is
not in a state that can distinguish "not reached" from "not watching". A negative from a control that fails is not
a weak negative, it is no measurement at all.

**The control problem is now solved, and it invalidated the fast path.** `0xe4b8d` fires only under `--graphics=none`,
where the guest sits in that loop, so it was never a gameplay control at all. The working control is the turn clock:
with the same route, `--graphics=none` changes **nothing** over 600 idle frames and no key completes a turn, while
`--graphics=sdl` rewrites about 14 KB per step and the clock walks 70 to 71 to 72.

**Then the headless key path was fixed, and the question was answered.** `towns_key` was `static` in
`towns_sdl.cpp`, so only a window could translate a PC keystroke into a Towns scan code, and without one the `key`
command refused. Exposing `towns_key_scancode` and pressing the translated pair directly through `Machine::press_key`
makes `--graphics=none` deliver keys: the turn clock now walks 70 to 71 to 72 headlessly, at 8,262 frames/s instead of
61. `docs/port-defects.md` carries the measurements.

With a working key path, an error-checking driver, 42 keys covering the alphabet, the digits, the arrows, space and
Return, and a control that demonstrably fires (`0xe4b8d` reaches its loop), none of these is reached:

| guest address | what | reached |
|---|---|---|
| `0xe3188` | the direction dispatcher | **no** |
| `0xe33cc` | its `call 0xe1970` | **no** |
| `0xe19f4`, `0xe1a24` | the two draw calls every case makes | **no** |
| `0xe120c` | the shadow | **no** |

So the dispatcher is **not part of ordinary play**. It is not the walk animation and not the step redraw, which is
what the 14 KB per step turned out to be, and the facing field it sets is written by a path that normal input never
takes. The consequence for 11c is direct and does not depend on any remaining unknown: **`0xe120c` cannot be reached
from play input**, so no scripted gameplay route can differential-test it. A different target is needed, one whose
caller chain is verified reachable by the same instrument rather than assumed reachable because it sits in the game.

### A reachable target was found, and the shadow mechanism is inert, 2026-11-02

Picking a better target worked: sweeping `U2_STOP_AT` over the ten byte-identical routines across the create route
finds four that fire, and the smallest is `0xe9c2c` (guest; file `0xe9e2c`), the 21-byte `"="` scanner. `native_000e9c2c`
is now written and `tools/portcheck.js` passes with **2 shadows**.

**It never runs, and the reason is structural rather than a slip.** The recompiler emits a call to a known function as a
direct C++ call:

```
push32(c, 0xe9e59u); f_000e9c2c(c); X86_RET(c, 0xe9e59u);
```

That bypasses `x86_lookup_cs` entirely, so `g_mod_native` is never consulted for a call that starts and ends inside
the game module. Measured: the shadow table reports **0 entries** across the whole create route, while `U2_STOP_AT` on
the same address fires there. Only indirect calls (through a register or memory, `fmtownskit/recomp/emit.py` line 458)
reach the dispatcher today.

So the dispatch seam the strangler assumed does not exist yet for the game's own functions. It is one emission rule
away: `fmtownskit/recomp/emit.py` lines 433, 449 and 456 emit `f_%08x(c);` and `x86_call(c, 0x%08x);` is a drop-in
syntactic replacement with identical semantics (`x86_call` does the lookup and calls, and the emitter already pushes
the return address). The cost is a module regeneration, 331 files, and a lookup per call instead of a direct call.

**That is a decision rather than a detail**, because it rewrites every generated file and trades call speed for a
working seam, so it is recorded here and not taken unilaterally.

### The seam now works, and the differential is blocked on determinism, 2026-11-02

Paul took option B and it is implemented. `x86_call_known(c, addr, fn)` consults an **overlay table** that is module 0
by contract, so the port's native shadows win, and falls through to the translation. The emitter's three direct-call
sites (`emit.py` lines 433, 449, 456) now emit it.

| before | after |
|---|---|
| `push32(c, 0xe9e59u); f_000e9c2c(c); X86_RET(...)` | `push32(c, 0xe9e59u); x86_call_known(c, 0xe9e59u, f_000e9c2c); X86_RET(...)` |

Measured: the **60-frame run is byte-identical** after the regeneration (`eip 0xe56f8`, guest clocks 15999975), and
the create route now reports **722 shadow entries** where it reported 0. Adding a shadow no longer needs the module
regenerated, because every known call site already comes through `x86_call_known`.

**`tools/shadow-diff.py` exists and cannot pass yet.** It runs the same route twice, baseline with `U2_SHADOW_OFF` and
then with the shadows live, hashing the 64 KB at `0x4c0000` (screen buffer, sprite area and character record) at five
checkpoints plus the save disk, and it refuses to pass unless the shadow was entered.

**Its control fails, which is why it is not trusted.** Comparing the baseline against *itself* differs, so the
harness was measuring noise. The noise is exactly one byte, `0x4cdc23`, and its value advanced `0x8c` then `0x8d`
then `0x8e` across this session, so it moves with real time between process starts: the guest reads a host clock
somewhere that `Machine::clock_start` does not cover.

Two things were tried and are **ruled out**: pinning the DOS clock with a new `U2_CLOCK` (the port now sets
`m.clock_start`, and the banner confirms it took), and fixing the copied disk's mtime with `os.utime`. Neither moves
the byte.

### The cause is frame drift, not a clock, and it needs a hold, 2026-11-02

The byte is explained and the explanation is not a clock at all. It cycles `0x8c`, `0x8d`, `0x8e`, `0x8f` with period
four, and two runs sat **one phase apart** because they were at **different frames**: measured, the first sample found
run A at frame 60 and run B at frame 1, since the port free-runs between binding the socket and the first command.

Three fixes went in, each closing part of the gap and each measured:

| change | effect |
|---|---|
| `frame at=<absolute>` | lands on a named frame instead of a relative distance |
| `key at=<frame>` | schedules the press through the same list `U2_KEYS` fills, so the keystroke itself is framed |
| `step_to` / `key_at` in `tools/drive.py` | the harness uses both |

**It was not exact, and a parked read is what fixed it.** Recording the frame each sample was actually taken on gave
`(6200, 6201)`, `(9800, 9801)`, `(13400, 13402)`: the `mem` reply was a *separate command*, serviced a frame or two
after the `frame at=` that was supposed to anchor it, and the lateness varied per run.

`mem at=<frame>` parks the read the way `shot at` already parked a render, and it is the same read at a different
moment rather than a second implementation: `mem_hex()` renders both replies. The harness now schedules the key and
parks the read at the same frame, before reaching it, so neither can be serviced late.

**Measured, five times each:** the control is identical **5 of 5** where it was 1 of 3, and the differential is
identical **5 of 5**. The deliberately wrong build still fails, on four screens and on the disk, so the comparison did
not become insensitive while it became stable. That check matters more than the others: a stable harness that agrees
with everything is worse than a flaky one.

**And the gate is back, verified both ways.** `tools/shadow-diff.py` runs as a check with its control, passes clean,
and goes red when the wrong binary is swapped in.

A hold was considered and rejected. The control loop is serviced inside the vsync hook, so blocking there would stop
the machine, but it would also add a pause the original never had in order to make a measurement work. Anchoring the
observation leaves the machine behaving as it should.

**The silent-instrument class is closed, 2026-11-02.** Every run now prints one `instruments` line listing the `U2_`
variables that are set, derived from the environment so it cannot drift from the 39 switches the port reads, with any
switch this build cannot honour marked `(IGNORED, needs -DU2_TRACE=ON)`. A clean run says
`instruments none, plain gameplay`. The three false negatives in this section were all of one kind, an instrument that
was silent about what it was doing, and this is the smallest change that removes the kind rather than the instances.

**And `--dev` decides whether the instruments exist.** Without it the port strips every instrument variable from the
environment before anything reads it, in one place rather than at each read, and names what it dropped. Nine are
exempt as configuration or input: the fonts, the clock, the entry and stack overrides, keys, pad, layer, shot. A tool
that launches the port and sets an instrument must pass `'--dev'`, and `tools/checkall.js` asserts that by deriving
the instrument set from what the port reads.

**The gate was verified by breaking it**, which is the only way to know it works: deleting `'--dev'` from `drive.py`
turns it red and names the file and the three variables. The first version of the check passed with the argument
removed, because an unquoted `--dev` in a comment matched it, so the test now requires a quoted argument and a tool
that actually launches a process.

**The lesson this session paid for three times: test the instrument before testing the thing.** A wrong address, a
window that did not contain the quantity, and a control that stopped firing each produced a confident, fluent, wrong
paragraph. The dispatcher's reachability is the open question, and it stays open until a control fires under the
exact configuration that will be used to answer it.

**What is not affected.** The static recovery stands, because it is read from the binary and involves no emulator: the
hole is a 10-case jump-table dispatcher at `0xe3388`, every case draws twice and plays a sound through `0xe1970`, the
index is the facing field `[player+0xcdf57]`, case 9 plays `BRIGHT1.EUP`, and the out-of-range default plays
`MAP.EUP`.

**Three instrument facts that each cost a wrong answer this session.** `U2_STOP_COUNT` is "stop at the N-th hit", so
setting it high to "see every hit" suppresses all output and reports a false negative. `U2_STOP_AT` **ends the run**
when it fires, so a boot-time hit looks exactly like a dead socket. And a stop line is printed on stdout, so any
driver that keeps only the last few lines throws away the proof it was looking for.

**One thing this cost, recorded so nobody repeats it.** The port prints `stopped` both when the guest calls
`int 21h AH=4Ch` (`fmtownskit/runtime/towns_dos.cpp:525`) and when the control socket's own `quit` arrives
(`port/main.cpp:1208`), and the printed register block is identical. Reading `stopped` as "the game exited" was
wrong twice this session. The two causes are distinguishable only by a stderr or exit-code change that the port
does not currently make.

**So 11c is now blocked on a gameplay hang, not on the call graph.** The route is found and the sweep logic works.
What is missing is a port that survives more than a few thousand frames in the world.

**Two corrections this investigation forced, both from the guest-versus-file frame.**

- `tools/findcallers.py` reports direct calls only from inside asserted extents, so it answered "0 callers" for
  `0xe1970` when there is one at `0xe35cc`. That is a **false negative in a tool written the same session**, and the
  lesson generalises: `findcallers.py` cannot be used to support a claim of absence about a caller.
- The first pass of this analysis read guest addresses against `corpus.json`, which holds **file** offsets, and
  double-added the 0x200. It therefore reported all three functions as internal labels of one larger function and
  "not a call target". All three have their own records. The 0x200 difference has now cost four sessions and this
  was the fifth, committed and then caught in the same session.

**The scaffold is in place, 2026-11-02, before the first replacement so the gate exists before there is
anything to protect.**

| file | what it is |
|---|---|
| `port/native_shadows.h` | the contract a shadow must keep, and why the module order is load-bearing |
| `port/native_shadows.cpp` | the shadow table (empty) and `g_mod_native` |
| `port/modules.cpp` | the module list the port runs, with `g_mod_native` first |

`port/modules.cpp` exists because the recompiler writes `module/modules.cpp` from the modules it compiled and
any edit there is destroyed by the next recompile. `x86_lookup_cs()` walks the list in order and takes the first
hit, so the order *is* the mechanism and it has to be a committed file the port owns. Changing CMake to link
`port/modules.cpp` instead of `${RECOMP_DIR}/modules.cpp` needed no kit patch.

Five checks in `tools/portcheck.js`, each demonstrated failing on a mutated copy through its `--root` flag:

| check | what it catches |
|---|---|
| the native module is listed first | appending it last, which silently kills every shadow |
| the port list covers every generated module | a recompile that adds a module |
| every shadow address is a function start | a shadow for an address `module/p_game_funcs.h` does not declare |
| every shadow symbol is defined | a table entry that will not link |
| the shadow table is ascending | an entry the binary search never reaches |

**The start-of-table check caught a real bug in its own first draft.** The example entry was written with the
file offset `0xe140c`, and the check reported it as not a start, because `module/p_game_funcs.h` names
`f_000e120c`. That is the 0x200 frame difference again, caught before anyone could write a shadow that
silently shadows nothing. The header now states the conversion with both examples.

There is deliberately no count assertion: removing a shadow is a visible one-line deletion in a committed file,
and a second place recording the number is the drift this repository keeps paying for.

The port currently runs original assembly and recompiled regions side by side. Stripping a region and
replacing it incrementally needs a per-region gate, and the gate is the control socket: same scripted input,
same frame, compare framebuffer on static screens, compare disk state by hash, and compare guest memory
through `mem`.

Today's defect 3 work is the proof of shape: a socket-only run created a character, the save image hash
moved, an independent parser read the roster back, and a second process played the character. Every
assertion was content, and the check was demonstrated able to fail.

| field | value |
|---|---|
| autonomy | autonomous |
| depends on | 11a (done) |
| done when | one named region is stripped from the port's module, replaced, and the differential run is byte-identical on the static screens and on the disk image, with the script committed and shown to fail when the replacement is deliberately wrong. The failure case: a protocol that only compares animated screens, where a one-frame drift between runs reports a difference that is not one, which is exactly what the plan split's method note warns about |
| blocked by | nothing. 11a is done |

## Phase 7: the port, which is the current line of work

The recompiled program runs under fmtownskit's machine. It completes start-up, opens its real assets and
survives 3,000 frames with no fault, which is the furthest this has ever got. Everything below moves that
forward, and nothing in Phase 7 may be swapped for Phase 1 to 5 work: the corpus items can wait, and a port
regression found late costs more than a routine page found late.

### 7a. Does the port's screen match the machine's

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous. Both sides can produce a framebuffer without a human: the machine through the supervisor's screenshot endpoint, the port through a VRAM dump added to it |
| done when | the port emits its VRAM as an image or a hash, the machine's VRAM is read at a comparable point, and the result is stated as a match, a difference characterised by region, or a failure to produce one. The failure case it must catch: the port runs cleanly and draws nothing, which no frame count can see |
| blocked by | nothing |

This is the strongest validation available and it is the one that has never been attempted. Every check so far
counts guest clocks and faults, and a program can do both while writing the wrong pixels. The kit has a
palette and a CRTC; the machine has a screenshot endpoint; the port has the same memory the machine does, so
the comparison is two dumps and a diff.

**What is now known, in two parts.**

*The control-flow divergence this item was originally chasing is closed.* `tools/divergence.py` against the
machine's journey capture now reports **6 port-only addresses out of 6,862**, and all six are explained. Four are
the instruction after a 2-byte conditional (`0x0e07f4 jge`, `0x0e081b jl`, `0x0e060c jge`) and the port executes
both the recorded address and its fall-through, which an edge capture never records because it is inside a block.
The other two are the `y` scan-code handler at `0x0e4ebf`, reached only because a keypress made the port take the
path the machine's capture did not. Zero remain unexplained, and the divergences that were real were always
machine state the port lacked: the `A:` drive, the keyboard, and the screen selector `0120`.

*The screen comparison has an instrument on both sides and no valid pair yet.* **Superseded: the pair exists now.**
See the closing section below. The paragraph is kept because the instrument it describes is the one that produced the
pair, and because the 51 percent figure was a real measurement of the wrong thing. `U2_SCREEN=1` prints the frame as
an ASCII ramp for the port, so the port's grid and `GET /api/screen?mode=ascii` are the same metric. Sampling the
machine once a second through a boot and a
journey gives a best agreement of **51 percent of cells at t=6s**, which is two *different* moments of a moving
sequence rather than the same screen: the port's frame is one instant at 600 frames and the machine's samples
track a boot, a title and a select screen. So the item's allowed outcome here was recorded as **a failure to
produce a comparable pair**, not as a match or a difference.

**What the next attempt needs**, so it is not rediscovered: pause the machine at the moment the title is fully
drawn (`PAU`, then read the grid), and step the port to the same screen, which is the point after its loading bar
finishes rather than a fixed frame count. Two stills of the same screen, then the ramp diff is meaningful, and
the region-by-region difference becomes statable.

#### The rendered-frame route is blocked, and VRAM is the route that works

A rendered frame **cannot** be the comparison. The kit's `render()` gives 704x525 of the CRTC's layer windows, and
the supervisor's capture is a 640x480 window **with its title bar in it**, which the vision model read back as
`FM Towns Emulator - TSUGARU`. Those are different objects at different scales, so the earlier 51 percent was two
incompatible measurements, not two different screens.

VRAM has none of that: it is the same 512 KB on both sides, it is what the program actually writes, and it has no
window furniture. `U2_VRAM_HASH=1` prints, for the port, the non-zero count, an FNV-1a over all 524,288 bytes, and
the same over each of 32 sixteen-kilobyte blocks, so a difference can be named by region instead of declared. On
the machine the same 512 KB is read through segment `0120` (`ADTR 120:0` reports `LINE:80000000H`): `MD 120:<off>`
returns 256 bytes per line, and the whole array takes **64 commands of 8 KB, 17 seconds**, hashed the same way.

**The metric is validated, by a control.** Reading the machine's VRAM twice with one `Down` keypress between them:
**19 of 32 blocks identical**, 13 changed. So the metric moves when the screen moves, and a match would mean
something.

**The pair was not obtained, and the reason is now precise.** Port at 1200 frames with ten timed keypresses:
`vramhash b46886eb`. Machine, at the character-select screen: `3d76244c`, 223,250 non-zero bytes. **0 of 32 blocks
match.** That is what two different screens look like, not what a broken port looks like: the port's blocks are
varied and non-zero (181,402 non-zero bytes at 600 frames), where a port that drew nothing would be a run of
different-but-mostly-zero blocks.

**Which means the item's failure case is covered**, and this is the part worth having: "the port runs cleanly and
draws nothing, which no frame count can see" is now visible in one number, the non-zero VRAM count, alongside the
hash. A blank port cannot report 181,402 non-zero bytes.

**What remains is one measurement, with the method fixed.** Wall-clock pairing cannot work, because the port's
keys are frame-timed and the machine's are person-timed. The pair has to be anchored on a **guest instruction**:
break on both sides at the same address (`BP 000C:<addr>` on the machine, `U2_STOP_AT=<addr>` in the port) and read
VRAM there, at a point both reach exactly once. The obvious candidate is the instruction after the title art is
blitted, which needs the blit located first, and locating it is the same read that would give 5b its viewport.

#### The attempt at that anchor, and what it found (all of it useful)

**Chosen anchor: `0x0e4b8d`**, the KYB_read call site, first hit, on both sides. The port side works and is
informative: `U2_VRAM_HASH` now runs from a stop as well as from the end of a run, and at the first hit the port
reports **`ab20d2db`** with blocks 2 to 11 all `d6aa05c5`, which is a nearly uniform array. So **the first hit of
that address happens before anything has been drawn** (it is the disk-wait path, caller `0xe9a83`), and as an
anchor it is wrong on its own terms. That is a measured answer, not a guess.

**The machine side did not produce a reading, twice, and the reason is the emulator rather than the code.**
`ENA DEBUG` then `BP 000C:000E4B8D` arms (`BL` lists it), but with the breakpoint live the boot wedges:
`u2flow` reports `splash never animated`, then `neither the Towns menu nor Ultima II is on screen`, so the machine
never reaches U2 and the breakpoint never fires. A container restart, arming after the menu, and arming before a
`RESET` were all tried. The machine was left running each time and its clock checked afterwards.

**What that establishes for the next attempt**, and it is the useful part: a bare `CS:offset` breakpoint is armed
*before U2 is loaded*, so it is not selective, and freezing the machine mid-boot also defeats the flow that drives
it. Two workable shapes follow: arm the breakpoint only once `u2flow` reports `in_ultima2`, or find an address that
only U2's own image can reach (the title art's load, which happens once per run) and anchor there. Either way the
comparison needs a stop that is **after** the first screen is drawn, which the port-side measurement above now
rules out `0x0e4b8d`'s first hit as being.

#### The pair, obtained on the game menu

The anchor turned out not to need a breakpoint at all. Both sides reach the game menu and then sit there, so two
stills taken after the menu has settled are the same screen by construction, and the comparison becomes a diff of
two 512 KB arrays with no timing in it.

| | measurement |
|---|---|
| machine | `machine-vram-menu.bin`, read through segment `0120` while `u2flow` sat at the game menu |
| port | `U2_VRAM_DUMP=/var/tmp/port-menu6.bin` at 900 frames, `U2_KEYS=400:3520` |
| whole array | 8,765 of 524,288 bytes differ |
| the menu box, rows 344 to 416 | **0 bytes differ** |
| VRAM page 1, rows 764 to 949 | 8,765 bytes differ, off screen while `display_page` is 0 |

So the item's answer is a **match on the displayed page and a characterised difference off it**. That is the third
of the three outcomes the acceptance clause allows, and it is the one worth having, because the difference is
named: it is a TBIOS dithered fill at `0110:00004267` whose half-tone level depends on when the capture was taken,
the port reaches the machine's exact state of it at frame 300, and it is invisible while the game displays page 0.
The full measurement is in
[port-missing-text.md](port-missing-text.md#solved-the-kanji-font-is-on-the-disc-not-in-a-rom), which is also where
the menu's own defect was found.

**What the failure case looked like when it was not covered**, kept because it is the thing this item existed for:
before the kanji font fix the same comparison reported **2,733 bytes differing inside the menu box**, which is a
port that drew the box, the highlight and the bars and no characters at all. One number, and it said which part of
the screen was wrong.

### 7c. What else the program patches at run time

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous. Done without the emulator: the port diffs its own memory |
| done when | every byte of the code range that differs between the file and live memory is listed, and each is either explained by a named routine or recorded as unexplained. The `int` vector at guest `0x10241b` is the known one and must be recovered by the diff rather than assumed to be alone |
| blocked by | nothing |

**What is now known. Exactly one instruction byte in the image changes at run time**, after 24,000 frames:

```
patched   guest 0x10241b  00 -> 93
patched   522674 bytes differ, of which 1 are inside a decoded instruction
```

The mechanism is `U2_DIFF_CODE=1` on the port, with `U2_COVERAGE=<file>` from `tools/insncoverage.py`, which
runs the same walk with the same seeds and no-code ranges and writes each instruction's address and size. The
filter is what makes the answer visible: 522,674 bytes differ in total, almost all of it the program filling
its own zero-filled data, and one byte of it is code. The `int86` vector is recovered by the diff rather than
assumed, which was the acceptance test.

Scope, stated rather than implied: this is what the program did in 24,000 frames of emulated time. A site
reached later could still appear, and the check is now cheap enough to re-run after anything that changes how
far the port gets.

The `int86` routine writes the caller's vector into its own instruction, and the recompiler cannot see that.
One such site was found by tripping over it. If there are others, each is a latent port fault of the same
kind, and the diff is a page of work now against a debugging session later.

### 7d. The indirect transfers the port meets next

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous. The recompiler already reports them, and three resolution rules are established |
| done when | each of the 30 unresolved transfers in the game module and the 67 in the TBIOS module is either resolved by a rule (a callback immediate pointing at a prologue, an address taken by `lea reg, [disp32]`, a measured seed) or shown to be unreachable, and the port's frame count before and after is recorded |
| blocked by | nothing |

**CORRECTION: the item asked for the wrong thing, and the answer is that none of the 97 needs resolving.** The
done-when assumed an unresolved transfer is a gap in the port. It is not. The emitter writes a **dynamic** call:
for `call dword ptr cs:[ebx]` at `0xffe5e` the generated C is

```c
{ uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3]))); push32(c, 0xffe61u); x86_call(c, t); X86_RET(c, 0xffe61u); }
```

and `x86_call` faults with `no recompiled function at cs:off` only if the target is absent. So the question worth
answering is whether the sites the port reaches resolve at run time, not how many the static walk can follow.

**What is now known, measured.** `build/port/recomp/report.txt` gives **30** unresolved in the game module and
**67** in TBIOS with 0 refused and 0 conflicts in both. Of the 97, a traced 600-frame run executes **35** (2 of
the 30 game sites, `0x1034c2` and `0x103825`, and 33 of the 67 TBIOS sites) and ends at the frame limit with no
fault, which is only possible if every one of those 35 resolved to a recompiled function. The other 62 are the
shapes no rule can resolve in principle: 28 in the game module (a parameter, a table slot or a computed target) and
34 in TBIOS (a computed target or a dispatch-table slot).

**Frame count before and after: 600 and 600, no fault either side**, because no seed was added. The earlier
24,000-frame run also faulted nowhere, so the executed subset resolved there too. The full reasoning and the
shape table are in [indirect-resolution.md](indirect-resolution.md#correction-the-port-does-not-need-these-resolved-at-all-and-30-and-67-is-the-count-that-matters).

**What this closes and what it does not.** It closes 7d as a port blocker: there is nothing to seed, and a
resolution rule would change no behaviour. It does not prove the 62 unreached sites safe, only unreached in 600
frames. If one is reached later and its table slot holds zero, the fault will name the address and the site, which
is the right time to look.

### 7e. A port regression the checks can run

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous. `checkall.js` already had the shape for it |
| done when | `node tools/checkall.js` fails if the port's known-good behaviour regresses, without needing the emulator, the disc or a recompile. Candidates: the seed count, the fact that the emitted module reads a patched vector, and the number of functions per module. The failure case: a check that passes when the port is broken |
| blocked by | nothing |

**What is now known.** `tools/portcheck.js` is the check, wired into `checkall.js` as `port constants`, and it
needs no emulator, no disc and no recompile: it reads `port/`, `tools/` and `docs/` and nothing else, which is
why it runs on a clone that has downloaded nothing. Its own output is the count, so there is no number here to keep
in step with it.

It asserts the values this session measured, because each was a wall found the expensive way: `PROGRAM_BASE`
`0x400000`, hand-off `ESP` `0x11EB10`, descriptor limit `0x377FFF`, profile `prog_phys` `0x76000`, the entry read
from the header rather than a literal, the floppy geometry, and the four measured seeds. It also asserts the
superseded values are **absent from the code** (`0x11EAC8`, `0x2000000`, `0x49000`) while allowing them in
comments, because this repository records corrected numbers as history on purpose and a check that forbade the
history would forbid the record of how the value was found. Comments are stripped before the scan for exactly
that reason.

The last check is drift in the other direction: every `U2_*` switch the docs offer must exist in the port, and
every one in the port must be documented. A switch documented but absent is a promise the tool cannot keep.

**It was made to fail on purpose, three ways**, on throwaway copies under `/var/tmp`, then once in place, and
`checkall.js` reported each:

```
port/main.cpp, STACK put back to 0x11EAC8    -> FAIL hand-off ESP, FAIL the 0x48-low ESP is gone
runtime-seeds.txt, one line malformed        -> FAIL the seed list holds its four measured entries
main.cpp, U2_WATCH renamed                   -> FAIL every documented switch exists in the port
```

In place, `checkall.js` printed `FAIL port constants (2)` with the two lines under it, and the value was put
back in the same session. That is the acceptance criterion met in the sense that matters: the check has been
seen to fail on the specific breakage it exists for.

**What it does not cover**, stated so the next session does not mistake it for coverage: the port's runtime
behaviour. Whether it takes the same branch as the machine, and whether its memory holds the same bytes, is
`tools/divergence.py` against a capture and needs the machine. This is the half that catches a reverted value,
not the half that catches a wrong one.

### 6a. One frame of reference per tool, declared and checked
**State:** OPEN · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous. The inventory is measurement over the tools that already exist, and nothing here waits on a human |
| done when | `docs/two-frames-of-reference.md` names the frame of every tool that emits or accepts an address, `node tools/cfgwalk.js --check` prints which frame it is answering in, and `tools/verify.js` asserts one known address resolving in each of the three. The failure case it must catch: a tool handed an address in the wrong frame answering plausibly instead of refusing |
| blocked by | nothing |

Three frames are in use and nothing declares them: raw file offsets, stripped (`file - 0x20`, which is
`cfgwalk.js` and `docs/call-graph.md`), and guest (`file - 0x200`, which is the running machine and the
recompiled modules). They are `32` and `480` bytes apart respectively, and the guest frame was the one
nothing was checking. The measurement is in
[two-frames-of-reference.md](two-frames-of-reference.md#a-third-frame-the-one-the-program-runs-in).

The cost of not declaring it, measured twice in one session: `cfgwalk --check` refused a real function
head because it was asked in the guest frame, and the instruction in `AGENTS.md` to verify addresses with
`--check` does not say which frame to use, so following it correctly is not possible from the text.

### 7f. Give the port a floppy drive

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous. The image format is already implemented in `tools/savedisk.js`, the kit's DOS layer takes files through one object, and `saves/userdisk.hdm` is on disk |
| done when | `A:\ROSTER1.UT2` resolves for attributes and opens for reading in the port, the program's start-up takes the same branch as the machine at guest `0x0e259b`, and the port draws something. The failure case: a shim that answers the attribute query without serving the reads, which moves the failure one call later and hides it |
| blocked by | nothing |

This is where the port stops and it is not a code fault. The program probes `A:\ROSTER1.UT2` at start-up, the
port has no `A:` drive, the probe fails, and the program takes its "insert the disk, press the key" path and
waits forever. Every one of those 24,000 frames was an error dialog. `docs/recomp-plan.md` has the differential
trace that found it: 4,200 of the port's 4,216 executed addresses match the machine's, and the one that does
not is the `je` at `0x0e259b` that chooses between the error path and the rest of the game.

The work is a FAT12 reader behind the same interface the CD uses, driven by the `.hdm` image the machine mounts.
`tools/savedisk.js` already walks FAT12 and knows the keep-list quirks, so this is a translation rather than a
discovery.

**Progress.** `port/floppy.h` is that reader, wired through two hooks the runtime calls, and the probe now
passes: `attributes: A:\ROSTER1.UT2 -> floppy, attr 20, 3701 bytes` and then `handle 5 (floppy, 3701 bytes)`.
The error dialog is gone. The drive serves four files, from `U2_FLOPPY_LS=1`:
`roster1.ut2 3701`, `world1.ut2` to `world3.ut2` at 68096 each.

**The keyboard was the next wall, and it is fixed.** With the floppy answering, the port's last instruction moved
from the error dialog's loop to `000C:0E4B8D`, a KYB_read poll, and `U2_VRAM=1` reported **0 of 524288 bytes**
non-zero with 0 reads and 0 writes: the program had never touched VRAM. The kit's `int 90h` had no keyboard at all
and answered "no key" unconditionally, so the wait could not end. The device contract was then measured on the
machine (no key `BX=0xFF00 DX=0xFFFF`, `a` `BX=0x1E00 DX=0x0061`) and implemented as patch eleven, with
`U2_KEYS=<frame>:<scan><ascii>` to press keys on given frames. Twenty-seven presses now report
`27 served, 0 still queued` and the game dispatches each one through its 114-entry scan-code table at `0xE4BD1`.

**What is now known, and the item is finished on all three clauses.**

`A:\ROSTER1.UT2` resolves and reads. Listing was not accepted as proof, because the item's own failure case is a
shim that answers the query and returns nothing: `U2_FLOPPY_LS=1` now reads every file in full and reports a
checksum, and gives `roster1.ut2` 3701 bytes `fnv 280364f9` and `world1` to `world3` at 68096 each with
`0 of the files read short or not at all`. The program then opens the file for real and succeeds: the trace shows
`0xe9a38` (the open) returning a handle at `0xe9a59`, with the failure branch `0xe9a4a` never taken.

The floppy was the first of **three** walls. The second was the keyboard: the kit's `int 90h` had none, so the
program waited on a KYB_read poll for ever. Its contract was measured on the machine (no key `BX=0xFF00
DX=0xFFFF`, `a` `BX=0x1E00 DX=0x0061`), implemented, and driven with `U2_KEYS`. The third was the screen: the
program draws through selector `0120`, which `STA` reports at linear `0x80000000`, and the port had no descriptor
for it, so there was nowhere to draw and no fault to notice.

**The port draws.** 600 frames with three keypresses give `181402 of 524288 bytes are non-zero`, `386205 writes
and 83173 reads` to VRAM, and `U2_SHOT` renders the frame at 704x525. That frame is the Ultima II title screen,
identified by reading it with the vision model: title banner, the logo with the sword through it, the robed figure
before the castle, the loading bar. Nothing in this item settled the palette, and the picture's colours are the
kit's. All three patches are recorded in [recomp-plan.md](recomp-plan.md), eleven to thirteen.

### 7g. Watch the port from another machine

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| done when | the port plays in a browser on another machine, driven from the working tree, without a host build being required or the working tree being written to by root. The failure case: a container that only runs on the machine it was built on, or one that writes root-owned files into the repository |
| autonomy | autonomous. `tools/container-run.sh` already shows the shape: Xvfb, x11vnc and noVNC |
| blocked by | nothing |

**What is now known.** `container/Containerfile.x` and `tools/x-run.sh` are a generic X container: a virtual display
with VNC and noVNC, plus the toolchain, which runs whatever command it is given. It builds the port inside the
container from a read-only mount of the working tree, into a named volume, so nothing root-owned lands in the
repository and no host build is needed.

**The measurement that chose the base image.** The host is Bazzite with glibc 2.43 and SDL3 from linuxbrew, so a
host-built binary cannot run in an Ubuntu 24.04 container (glibc 2.39, and no `libsdl3-dev` at all: checked, no
candidate). Debian trixie has `libsdl3-dev` 3.2.10, Xvfb, x11vnc, noVNC and websockify, so the container compiles
and runs the port itself.

**Verified, end to end:** `./tools/x-run.sh start` builds and starts it, `http://ai:6081/vnc.html` answers 200, the
virtual display shows the Ultima II title screen (captured from the container and read back with the vision model),
and `xdotool key Return` inside the container changes the screen, which exercises the same SDL path a browser's
keystrokes take. Audio has no device in the container and the front-end says so and carries on.

**Ports** are 6081 for the browser and 5901 for raw VNC, chosen so they do not collide with the emulator's 6080 and
5900. `XWEB`, `XVNC`, `RESOLUTION` and `ARGS` override them, and `NOBUILD=1` reuses what is in the build volume.

### 7h. The port's kanji text

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous. Both sides could be read at the same instruction, and the font file is on the disc |
| done when | the port's menu box holds glyph pixels and its VRAM differs from the machine's capture by nothing inside the box. The failure case: a box drawn, a highlight drawn, and no characters in it |
| blocked by | nothing |

**What was wrong.** Two-byte characters are fetched through a far pointer that TBIOS keeps in its own image at
`CS:0x1E8`: the offset is the font base, the selector gets the glyph. On the machine that slot holds
`0003B7E1:0040`, a copy of `\UTFONT.FNT` in low RAM that TownsOS places at boot. The port boots TBIOS without
TownsOS's loader, so the slot kept the value the disc's own `TBIOS.BIN` carries, `00006400:0138`, which points
at a blank range of the character ROM. Every two-byte character therefore rendered from an empty font, while the
single-byte ANK text, which comes from the ROM at `0x3D000`, drew correctly. That split is exactly the symptom
recorded on `docs/port-missing-text.md`: bars and boxes drew, Japanese text did not.

**What is now known, and how it was confirmed.** The port loads `UTFONT.FNT` from the disc, packs its 188 glyphs
32 bytes each at the machine's own address, and writes the patched far pointer into the TBIOS image. Glyph
bitmaps sit at offset 5 of each 48-byte record, measured against the machine's font buffer and not read off the
file's layout; +7 and +6 were both tried and both leave the menu visibly wrong. With +5 the menu box's VRAM is
byte-identical to the machine's capture, 0 bytes differing over rows 344 to 416 where the same comparison was
2,733 bytes before the fix. `tools/portcheck.js` asserts the load, the offset, the pointer patch and the `0040`
descriptor, and the offset check was seen to fail against a copy with +7 in it.

**Still open at the time of writing, and since characterised.** VRAM outside the menu box differed from that capture
in rows 764 to 949, 8,765 bytes, a region the port left zero. It was not this item's, and item 7a has since named
it: it is a TBIOS dithered fill into VRAM page 1, off screen while the game displays page 0, and its half-tone level
depends on the moment the capture was taken. The port reaches the machine's exact state of it at frame 300.

The copyright notice is fixed by the same change, which is worth stating because the page that found this was about
that screen and not the menu. At frame 120 the notice's box holds all ten of its lines, transcribed back from a
screenshot including `データを読み込んでいます！`. The game stores even its ASCII-looking text as two-byte characters,
so one blank font emptied every box on every screen and one fix filled them all.

## Phase 9: the front door, and a binary someone can run

This phase exists because the repository explains itself to someone who already knows what it is. The README opens
with where the game comes from and what the repository contains, which is the wrong order for the two audiences that
actually arrive: somebody who wants to play, and somebody who wants to know whether a faithful decompile to C is
possible. Everything here is presentation and packaging, except one constraint that shapes all of it.

**The constraint, and it was superseded on 2026-10-30.** As written, this phase began from the claim that the port
cannot be built without the game: its module is the recompiler's output over `ENCHANT.EXP`, so `RECOMP_DIR` is empty
on a fresh clone and there is nothing to link, and the conclusion drawn was that "the useful release is not a
binary". That was true and it is no longer. The module is committed under `module/` by Paul's decision of that date,
recorded in [licensing and preservation](licensing.md), so CI can build a playable binary with no disc in the
pipeline and a release can ship one. What did not change is the other half: the original media is never hosted, in
git or in a release.

The measurements from the old constraint stay, because they are still what `tools/ci-port-build.sh` runs on every
push. A 4 KB synthetic image through `python3 -m fmtownskit.recomp --raw game=<syn>.bin@0xc+0x0` produces
`modules.cpp` and `p_game_000.cpp`, and `port/main.cpp` links against it into a `u2port`. Measured on 2026-10-30 in
the trixie container on a clean clone: 3,874,992 bytes. An earlier session's figure of 434,104 was not reproduced and
is not used. That check proves the three move together, which is worth having independent of what ships.

### 9a. The README's first screen: two quickstarts

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous. The commands were all run this session and are already written down in `docs/quickstart.md` |
| done when | the first screen after the title holds exactly two runnable quickstarts, one for the emulated original and one for the port, each three commands or fewer with its URLs, each linking to a full page, and no explanatory paragraph above them. The failure case: a visitor who wants to play has to read what the repository contains before finding a command |
| blocked by | nothing |

The current page puts "Where the game comes from" and "What this repository contains" first, then eight numbered
sections. A person who wants to play reads two screens of provenance before reaching `container-run.sh`. Both routes
are the container and VNC route for now: `tools/container-run.sh` for the emulated original and `tools/x-run.sh` for
the port, which is what this session actually used and what works over SSH with no local display. The native
`run.sh` route and the editor stay where they are, below the fold.

**What must not move above the fold.** The copyright warning. The game is supplied by the reader, and a first screen
that omits that invites somebody to ask where the download is. The quickstart names the archive.org zip and moves on.

**What landed.** The first screen is now the download warning, then two runnable blocks: `vendor.sh` plus
`container-run.sh` for the original, and the submodule plus the disk zip plus `x-run.sh` for the port. Three commands
each, both URLs, both linking a full page, and the port block says in the first screen that character creation does not
work. Provenance and "what this repository contains" moved below them, and the archive.org block is now part of the
warning rather than a section of its own.

Two stale cross-references went with it, both found by grepping for `section ` after the renumbering: a pointer to a
section 2b that has never existed, and save-disk API routes said to be in section 5 when they are in `tools/README.md`.

### 9b. The goal, in one screen, in the README

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous. Prose, with the evidence already measured on other pages |
| done when | the README has a section stating the goal as a faithful decompile to C, stating plainly that the port is C++ with inline assembly fragments and is a recompile rather than a decompile, stating that the port is the oracle the decompile will be checked against, and linking the long page. The failure case: a reader finishes it believing the port is the decompilation, or believing the decompile has been dropped |
| blocked by | nothing |
| depends on | 9c |

Three sentences carry it, and each is a fact this repository already owns rather than a hope.

The goal is Ultima II in readable C, as arithmetic a person could reimplement from. The port is not that. It is the
game's own 386 code mechanically translated to C++, with hand-written assembly where the translation could not be
trusted, and it is useful for two things: it proves the corpus is complete enough to run the game, and it gives an
oracle that a real decompile can be diffed against, screen by screen, which is the check this project already runs
(`docs/plan.md` 7a and `U2_VRAM_DUMP`). A decompile with no oracle is a claim. What exists now is the oracle, and a
game that is playable in the meantime.

**What landed.** The README has a "The goal, and what the port is" section above the fold, with the three claims and
links to `why-this-is-hard.md` and `reimplementation-gap.md`.

**One wording in this item was wrong, and the README does not repeat it.** The done-when asked for "C++ with inline
assembly fragments". Measured on 2026-10-30: `grep -rn 'asm' port/` returns nothing, and neither does the generated
module in `build/port/recomp`. There is no inline assembly in the port. What is hand-written is the glue, `port/main.cpp`
at 955 lines and `port/floppy.h` at 193, which supplies what TownsOS would have handed the program. The README says
that instead, because the distinction the item is protecting, recompile rather than decompile, survives the correction
and a false detail would not have.

### 9c. The page that answers "why is this hard"

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous. Every obstacle named is already a measured finding on another page |
| done when | a docs page states each obstacle with a link to the page that measured it rather than a restatement of the number, has a nav entry in `mkdocs.yml`, and builds. The failure case: an obstacle asserted with no citation, or a page that exists but is unreachable from the docs site |
| blocked by | nothing |

This is the longer document the README links. The obstacles, in the order a person trying this would meet them:

- **The compiler, and the version.** MetaWare High C 1.73, and the version matters: it emits the game's `idiv` and
  its naive `sar`/`sub` halving chain, and 2.31 does not. Two compilers were calibrated before that was settled.
- **Getting a compiler onto an FM Towns at all.** The kit has to run inside the emulator, from floppies built with
  this project's own tools. The recipe is frozen in `compiling-on-fm-towns.md` because nothing about it is guessable.
- **No symbols.** The three game binaries carry no `SYM1`. `TMENU.EXP` on the same disc does, which is a trap of
  its own: it names the Fujitsu layer and cannot be transferred, measured and recorded as a negative.
- **No usable prologue, and no reliable function boundaries.** Only a minority of functions open with `push ebp`.
  The one signal that works is the `call` target, and 738 of them is a set to work through rather than a solution.
- **Zero padding that defeats scanning.** A 337 KB zero region means a byte pattern match can land in data, and
  `capstone` and `ndisasm` disagree on 122,199 addresses when both are swept. Decoding has to start from a seed.
- **Seeds, and what unlocks them.** 88 seeds, a walk, 30 conflicting starts, and a recompiler that can be taught
  starts our own walk holds that its static rules miss.
- **Indirect transfers.** Not a wall, as it turned out: an unresolved transfer is emitted as a dynamic call and
  works. The count was chased for a session before that was measured.
- **The runtime, which is where the time actually went.** Descriptors, a disc, a floppy, a keyboard, a screen, the
  font ROM, the kanji font on the disc. None of it is decompilation and all of it had to work before a single
  screen was right.
- **Why a Borland-era binary is easier.** It would carry a symbol table or at least uniform prologues, its runtime
  library would be identifiable, and there would be published tools expecting it. None of those helpers exist here,
  which is why a game-agnostic recompiler from another FM Towns project is what made this tractable.

**What landed.** `docs/why-this-is-hard.md`, nine obstacles in the order a person meets them, each linked to the page
that measured it and with no number copied forward. It is in the nav under "Where it stands" and the site builds strict.

**Two bullets in this item were wrong and the page states the measurement instead.** The item said only a minority of
functions open with `push ebp`. `docs/function-recovery.md` measured 142 of the 247 strongly-called targets carrying
`55 8b ec`, so a majority of the frequently-called ones do, and the obstacle is that the rest are missed entirely and
that the byte pair also occurs inside data. The item also asked for "88 seeds" as a figure, and no page owns that
number, so the page cites the seed pages rather than repeating it.

### 9d. A port quickstart that starts from the download

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous. Every command exists and was run this session |
| done when | one page takes a stranger from the archive.org zip to a running port: the zip, unpacking it, the submodule and its patch, the recompile, the cmake build, the run, and the container route. Verified on a clean clone in a scratch directory with `build/` and the submodule removed, every command pasted from the page. The failure case: a step that only works because an artefact was already on the author's disk, which is exactly what `build/port/recomp` is |
| blocked by | nothing |
| depends on | 9a |

`docs/quickstart.md` covers playing the original. It covers the port only as a container that builds itself. The
from-source route is real and written down in `tools/port-build.sh`, but nobody reading the README would find it, and
it has a trap worth naming on the page: the recompilation is keyed by runtime address, so it runs on the stripped
image and every seed is shifted by `0x200`. A page that skips that produces a module whose every lookup is `0x200`
out, which is this repository's most expensive recurring mistake.

The route this page must give is the one that has been played, which is not the one the game's own menu suggests: game
menu, then Journey Onward, then pick a character that already exists. 9i owns the defect list that makes that the only
route worth documenting, and 9j owns the disk it picks from. Both sit next to this item rather than in numerical order,
because this one depends on them and a reader should meet them together.

**What landed.** `docs/port-from-source.md`, ten steps from the zip to a drawn screen, and every command in it run on
2026-10-30 in a clean clone at `/var/tmp/ci-clone` created with `git clone` plus `git submodule update --init`, with
no `build/` and no `fmtownskit/` until the page told it to have them. The final measurement: 120 frames headless,
`U2_SHOT` written, 7 colours in the frame, and the vision model read the notice screen off it.

**The item's own failure case happened, and is fixed.** A clean clone's `port-build.sh` produced a TBIOS module of
307 functions and faulted at `0110:6d73` on frame 80, because the TBIOS seeds come from
`saves/analysis/entry-boot-tool.txt`, a 3.2 MB gitignored emulator capture that only the author has. That is exactly
"a step that only works because an artefact was already on the author's disk". The derivation is now checked in as
`tools/tbios-seeds.txt` (5,395 seeds, 39 KB), `port-build.sh` falls back to it when the capture is absent and says
which it used, `tools/tbios-seeds.py --check` asserts the file still equals the derivation, and `checkall.js` runs
that check and skips with a printed note where the capture does not exist. With the fallback the clean clone builds
331 module sources and reaches the notice.

**Two steps the item did not list and the clone forced.** `ENCHANT.EXP` is inside the disc image, not in the zip, so
the page needs an extraction step, and there was no tool for it: `tools/getfile.js` is that step, generic over the
disc and the filename. And the port needs the font ROM, so `vendor.sh` is not only about the emulator: without
`U2_FONT` the program runs and every glyph is blank. `decode-setup.sh` is the third step nobody writes down until a
build fails on the coverage pass.

### 9i. The tested route, and a list of what is broken

**State:** DONE · **Autonomy:** PARTLY AUTONOMOUS

| field | value |
|---|---|
| autonomy | partly. The page can be assembled from the repository's own record, but the list opens with Paul's observations from playing and those have to be given, not inferred |
| done when | the port quickstart gives the route that has actually been played, game menu then Journey Onward then an existing character, and says in one sentence that character creation does not work, while a page lists every known port defect with the observation that found it and nothing on the list without one. The failure case: a quickstart that offers Generate Character because the menu has it, or a defect list padded with plausible bugs nobody saw |
| blocked by | nothing. The play report arrived on 2026-10-30 and is the first two entries |

The user-facing fact is blunt and belongs in the README: the port is early and buggy. The specific fact is that
character creation does not work, so Generate Character on the game menu is a dead end and the only tested path is
Journey Onward with a character already on the disk. That is exactly the kind of thing a reader discovers by losing
twenty minutes, and the quickstart exists to stop that.

The defect page has one rule that keeps it useful: an entry needs the observation that produced it. This repository's
characteristic failure is a confident sentence nobody measured, and a bug list is the most tempting place in the
project to write one. "Character creation does not work" is admissible because it was played. "Combat may be broken"
is not, until somebody sees it break.

**What landed.** `docs/port-defects.md` holds three entries, and each carries its observation: the port dies during
ordinary play with no trigger identified, `Esc` and `Q` end a run abnormally, and character creation is a dead end
while Journey Onward with an existing character works. The first two are Paul's play report, recorded as play
observations with no diagnosis and no backtrace, and the page says so rather than guessing at a mechanism. The third
is what `assets/save-disk/` exists for.

The route is now in both places a reader meets the port: the README's port section and `docs/quickstart.md` route 2,
each with the four steps, the disk to unzip first, and the sentence that creation does not work. `docs/quickstart.md`
also stopped implying that the emulator's "actually playing" steps apply to the port, because those steps begin with
Generate character.

The page's rule is enforced rather than asked politely. `tools/portcheck.js` fails when a defect row has no
observation cell, and fails when either quickstart drops the Journey Onward route, the link to the page, or the words
naming character creation a dead end. Both were seen to fail: on an empty root, and on a copy with one observation
cell blanked and one link removed.

### 9j. A save disk with characters, and where it may live

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous. Paul decided the shape, and the packaging is mechanical |
| done when | from a fresh clone a reader reaches a character-ready disk in one command, and the repository carries a check that the disk is the one the quickstart describes. The failure case: an image committed by defeating the `*.hdm` rule with `git add -f`, or a generator whose output nobody asserts |
| blocked by | nothing |

**Decided: the image is committed, zipped, under `assets/save-disk/`.** What follows records what was measured before
the decision, because it narrowed the item, and then what landed.

**Measured first, because it changes the item: the disk the zip ships is already populated.** `node
tools/savedisk.js slots saves/userdisk.hdm` reports slot 0 `"E"`, slot 1 `"D"`, slot 2 `"B"` and slot 3 empty, and
`ls` shows `ROSTER1 UT2` at 3,701 bytes with `WORLD1` to `WORLD3` at 68,096 each. So Journey Onward plus an existing
character works on a fresh unzip with no new artefact at all, and what `newdisk` produces is a blank disk rather than
what the zip contains.

So the item is narrower than it looks. What a committed disk would add is a state that has been *played*: a character
standing in the overworld rather than a character that has just been selected, which is also the state this session's
port measurements were taken against. That is worth something, and it is not worth un-ignoring a rule by accident.

The mechanical obstacle is exact and is why this is a decision rather than a task: `.gitignore` line 28 is `*.hdm`,
globally, and line 163 adds `/saves/`. `assets/savedisk/anything.hdm` is therefore untrackable today, and `AGENTS.md`
says un-ignoring a line is a conversation. The three shapes:

| shape | what it costs | what it risks |
|---|---|---|
| commit the image under `assets/savedisk/`, with a named exception in `.gitignore` | one line of ignore, one binary in history | a `.hdm` in git forever, and the exception invites the next one |
| commit a script that builds the disk from the zip and asserts its checksum | a script and a `verify.js` assertion, no exception | nothing, and it is the only shape that stays reproducible from the zip |
| nothing, and have the quickstart say which slot to pick | zero | a reader starts at character selection with a fresh character rather than in the world |

The second shape is how this repository answers every other question of this kind, and it also gives `assets/savedisk`
something to hold that is not a game artefact: the recipe and the expected checksum.

**What landed instead: the image, zipped, with the exception narrowed to one filename.** The path is
`assets/save-disk/userdisk.hdm.zip`, and the zip is not a detail. The disk is 1,261,568 bytes and almost all of it is
zero fill, so it packs to **3,629 bytes**, 347 to 1, using `zip -X -9` on a copy whose modification time is fixed to
1980-01-01. The fixed timestamp means the same disk always packs to the same bytes, which is what makes a check on
the archive meaningful rather than a check on when somebody packed it. Measured reproducible: two packs from the same
disk in different directories are byte-identical.

The exception is `!assets/save-disk/userdisk.hdm.zip` and nothing else, because `*.hdm` and `*.zip` are both ignored
for the same reason and a glob exception would have widened both. `tools/portcheck.js` asserts two things and was seen
to fail on both: the zip's central directory names `userdisk.hdm` with uncompressed size 1,261,568 and CRC-32
`f4d2c1ea`, which is a check on the disk rather than on the container, and the general `*.hdm` and `*.zip` rules are
still present. The failure was demonstrated by packing a blank disk of the same size under the same name: same size,
different CRC, and the check refused it.

The disk's contents, from `savedisk.js ls` and `slots`: `ROSTER1.UT2` at 3,701 bytes with slots 0, 1 and 2 named
`E`, `D` and `B` and slot 3 empty, plus `WORLD1` to `WORLD3` at 68,096 each. The game's list is 1-indexed and the
roster is 0-indexed, so in-game slot 1 is `E`. That sentence is what the checksum protects.

Still to do, and it belongs to 9a rather than here: the README's first screen has to tell the reader to expand the
zip and pick slot 1. `docs/quickstart.md` does say it, as part of 9i's tested route.

### 9e. CI that proves the tree builds, without the game

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous. The build was demonstrated this session against a synthetic module, and `.github/workflows/pages.yml` already exists so the wiring is known |
| done when | a workflow runs on push and pull_request and does all of: initialise the submodule and apply `patches/fmtownskit-mp-support.patch`, run the recompiler over a synthetic image, configure and link `u2port` against that module, and run `node tools/checkall.js`. It fails when the link fails and passes without any game file present. The failure case: a workflow that passes because it built a subset of the tree, or that quietly requires a copyrighted file |
| blocked by | nothing |

Two things make this cheap and one makes it easy to get wrong. Cheap: the builder already exists as
`container/Containerfile.x`, which is Debian trixie precisely because Ubuntu 24.04 has no `libsdl3-dev`, so the
workflow can run in that image and not fight the runner's packages. Easy to get wrong: the port needs the kit, and
the kit is a submodule plus a patch series that `tools/patchcheck.js` already verifies, so the workflow must do the
same steps a human does rather than a plain `submodule update`.

**Not in scope, and should not creep in:** running the port. It needs the game, and a workflow that fakes that would
be testing a different program.

**What landed.** `.github/workflows/port-build.yml`, on push and pull_request, four steps: checkout with
`submodules: recursive`, `node tools/patchcheck.js`, build `container/Containerfile.x` and run
`tools/ci-port-build.sh` inside it, then `node tools/checkall.js --no-build`. Verified end to end on this machine in
a clean clone at `/var/tmp/ci-clone` with the submodule fetched from GitHub and no game file anywhere: the synthetic
module gave `modules.cpp` and `p_game_000.cpp`, and `u2port` linked at **3,874,992 bytes**. The commands are in
`tools/ci-port-build.sh`, and it refuses to run when `ENCHANT.EXP` is present.

**Three things the item's wording got wrong, and what was done instead.**

The item said CI must "apply `patches/fmtownskit-mp-support.patch`". It must not. The kit's changes ride on the
submodule's `mp-support` branch, and the patch file is a readable mirror that `patchcheck.js` asserts is exact, so
applying it on top would be wrong. The workflow runs `patchcheck.js` instead, which is the step a plain submodule
update would skip.

The phase header quoted a 434,104-byte `u2port` from an earlier session's measurement. That number was not
reproduced and is not used. The figure above is from the run described here, in the trixie container, on a clean
clone.

The item assumed `node tools/checkall.js` can run without the disc. It could not: it read `ENCHANT.EXP` at top level
and died with ENOENT, and nine of its checks failed on a tree that had done nothing wrong. `checkall.js` now
auto-detects a disc-less tree, or takes `--no-disc`, skips exactly those nine by name, and prints the count. The skip
list was derived by running the whole file in the clean clone and taking everything that failed there, which is also
the demonstration that the skips are load-bearing.

### 9f. A release, and what may legally be in it

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | blocked on a person to push the tag. The workflow, the packaging and the verification are done |
| done when | one release has been cut through a written workflow, and its contents are enumerated with the reason each item is or is not copyrighted. The failure case: a release artefact containing the game, the disc image, the recompiled module, or any extracted asset |
| blocked by | nothing. The tag was pushed on 2026-10-31 and the release is public |

The constraint from the phase header decides this. A release cannot ship `u2port` in a form that plays, because a
playing `u2port` needs a module built from the reader's own disc. Three shapes:

*(This paragraph is the analysis before the 2026-10-30 decision to commit the module, and it is kept because the
reasoning was sound for the rule at the time. The release that shipped does ship a playable `u2port`, and the
sentence above is no longer true.)*

| shape | what ships | cost | who it helps |
|---|---|---|---|
| A, source only | a tag and the docs site | nothing new | nobody gains a binary |
| B, a container image to `ghcr.io` | the builder and runner image, no game in it | one workflow, reusing `Containerfile.x` | the only shape that gives Windows and macOS a working path |
| C, host binaries | a Linux binary built where the disc exists | a manual upload per release | somebody who has the disc and does not want a 20 minute compile |

B is the recommendation, and it is the one that retires 9g: `podman run -v /path/to/game:/src:ro` is the same
command on every platform, the image contains nothing copyrighted because the module is built from the mount, and
it is the route this session already used.

**Decided on 2026-10-30, twice, and the second decision replaced part of the first.** First: both shapes, B and C, with
9g scheduled after rather than blocking. Then, in the same day and after seeing what C had become: **the recompiled C++
is committed and the release ships a playable binary**, version `v0.1.0` rather than `v1.0.0` because the port reaches
a title screen and a known defect list, not a finished game. The policy and its reasoning are on
[licensing.md](licensing.md) and in `AGENTS.md`, and the original media is still never hosted.

**What landed.** `.github/workflows/release.yml`, three jobs. `image` builds `container/Containerfile.x` and pushes
`ghcr.io/<repo>:port-<tag>` and `:port-latest`. `host` builds the port from the committed module inside that same
image, with no disc anywhere in the job, and packages `u2port-linux-x86_64.tar.gz` through
`tools/release-package.sh`. `release` cuts the GitHub Release with the tarball and a body that enumerates every
artefact, says the port is early, states the ownership and takedown terms, and names what is in git that was not
before. `workflow_dispatch` runs the same path with a `dev-<sha>` image tag and no release, so the plumbing can be
exercised without publishing.

**What the tarball holds, and the reason for each item.** `u2port` (the port, with the recompiled code linked in, and
nothing that is the game), `play.sh` (the same runner the repository uses), `tools/getfile.js` and `tools/cd.js` (to
read `ENCHANT.EXP` and `TBIOS.BIN` out of the reader's own disc), `tools/vendor.sh` (to fetch the clean-room font ROM,
because the ROMs are never shipped), `assets/save-disk/userdisk.hdm.zip` (so the tested route has a character to
pick), `LICENSE.fmtownskit` (the MIT licence the static link obliges), and `README.txt` with the terms, the takedown
route and the runtime libraries. Not in it: `ENCHANT.EXP`, any disc image, any ROM, any extracted asset.

**The guard, and its demonstration.** `release-package.sh` refuses anything game-shaped in the staging directory by
extension, with the save disk allowed by exact name. It was seen to refuse, first by planting a module source when the
rule was the old one and later by the same method against the current list, and the refusal was read rather than
assumed. `tools/portcheck.js` separately asserts the module is whole (28 game and 302+1 tbios sources, both registered)
and that it contains no game text, which is the claim the whole policy rests on.

**Verified locally rather than claimed.** `play.sh` in this repository, with only the disc image in `game/`: it
extracted `ENCHANT.EXP` and `TBIOS.BIN`, built from `module/` with no recompile, ran 120 frames headless, and the
shot reads the copyright notice with its text. `U2_WORK` was then pointed at a scratch directory to prove the same
script works against a read-only project mount, which is what the container does.

**What the container needed to be true, and what got simpler.** Before the module was committed, `x-run.sh` had to be
taught to recompile into its volume, and `port-build.sh` gained `--no-run` and `--no-coverage` for it. Now the
container runs `play.sh` like everything else, with `U2_WORK=/build`, so there is one runner instead of two copies of
the logic. The cue bug found on the way is recorded in `tools/port-build.sh`: the kit's reader joins the cue's `FILE`
path onto the cue's directory, so an absolute path comes out doubled, which is how a port with no disc and no kanji
font looked like a rendering defect.

**Cut on 2026-10-31, and what the run produced.** `main` fast-forwarded to `72f97c3` and annotated tag `v0.1.0` pushed.
Run [41175749064](https://github.com/sloppy-seconds/fm-towns-ultima/actions/runs/41175749064) went green first run on
all three jobs: the image push, the host tarball build, and the release publish. The release is
<https://github.com/sloppy-seconds/fm-towns-ultima/releases/tag/v0.1.0> with one asset,
`u2port-linux-x86_64.tar.gz`, 12,894,884 bytes, sha256
`44f8cdfb8c7d004e50d6799483ef449bf504648e85a41cb8ba8f41f9ae14a752`. That hash is stated three ways and agrees in all
three: the digest the workflow recorded, the digest GitHub computed for the stored asset, and a fresh `sha256sum` of
the file downloaded from the release page. The ten files inside are the binary, `play.sh`, three tools, the save disk,
three licence texts and `README.txt`, and no game file was anywhere in the job.

The published asset was then played rather than trusted: downloaded, unpacked into a Debian trixie container with no
SDL installed at all, run 120 frames headless against a disc supplied by its owner, and the resulting frame reads as
the Ultima II copyright screen. That is the same test the local build passed, run against the bytes the world gets.

**The tarball is not byte-reproducible, and the reason is measured.** The build run locally the day before hashed
`7181c5675419eb21ca03b366a41f07349170b0374764239eb30b0a9a54e0018f` at 12,895,767 bytes, and the published one is
`44f8cdfb…` at 12,894,884. The difference is the container, not the contents: extracted and compared member by
member, all ten files including `u2port` are byte-identical, so CI and the local build produced the same binary from
the same inputs. What differs is each tar header's `mtime` (1793427911 published against 1793424102 local, the
63 minutes of wall clock between the two builds) and the member order, which `find` does not guarantee. Different
header bytes and a different compression window are the whole 883 bytes. The gzip mtime field is zero in both, so it
is not a factor. **The published hash is the hash of record**, and the one above is kept here as the fact that a
second build agrees with it, which is worth more than a reproducibility claim nobody tested. Making the archive
itself deterministic is a one-line change (`tar --sort=name --mtime=@0 --owner=0 --group=0 --numeric-owner`) and is
not done, because nothing yet depends on comparing tarballs across builds rather than comparing their contents.

### 9n. The published image is private, and the release tells people to pull it

**State:** OPEN · **Autonomy:** BLOCKED ON HUMAN

| field | value |
|---|---|
| autonomy | blocked on a person with a browser. The API cannot do it, which is the finding, and the setting is a click in the web UI |
| done when | an unauthenticated manifest fetch succeeds for `port-v0.1.0` and `port-latest`, which is the same request a stranger's `podman pull` makes first. The failure case: the first thing a visitor follows from the release notes fails with HTTP 401, and they conclude the project is vaporware rather than finding one setting |
| blocked by | the GitHub web UI. Approved by Paul on 2026-10-31 and attempted, and it turns out there is no API for it |

Found while verifying the release, not while reading the docs. `ghcr.io/sloppy-seconds/fm-towns-ultima` exists and both
tags resolve: `port-v0.1.0` and `port-latest` point at the same `linux/amd64` manifest, four layers, 343.3 MB
compressed, config digest `sha256:98f875410f8b`. An anonymous token request for `pull` scope returns 401 on the
manifest, and the package API reports `visibility: private`, while the repository itself is public. Packages created
by `GITHUB_TOKEN` do not inherit the repository's visibility, so the workflow pushing successfully and the image being
pullable are two separate facts, and only the first was checked before the tag.

**The API cannot change it, and that is worth recording because it looks like a permissions problem.** Attempted with
a classic PAT holding `repo workflow write:packages`, whose owner is an admin of the `sloppy-seconds` org and of the
repository:

| attempt | result |
|---|---|
| `PATCH /orgs/sloppy-seconds/packages/container/fm-towns-ultima` with `-F visibility=public` | 404 |
| same path, JSON body `{"visibility":"public"}` | 404 |
| same path, JSON body also carrying `package_type` | 404 |
| `PATCH /users/sloppy-seconds/...` | 404, and the account is an Organization anyway |
| GraphQL, introspecting `Mutation` for anything matching `package` | only `deletePackageVersion` |
| the whole Packages REST docs page, searched for `PATCH` | zero matches |

The 404 is not the token being short a scope. GitHub's Packages REST API has no endpoint that writes visibility, and
GraphQL has no mutation for it either, so the answer to "why 404" is that the route does not exist. The GET endpoints
work fine on the same token, which is what rules out authentication as the cause.

**What would close it, in order of cost.** The web UI: <https://github.com/orgs/sloppy-seconds/packages>, select
`fm-towns-ultima`, Package settings, change visibility to public. The proof is the unauthenticated fetch, which today
returns 401 for both tags and returns the manifest the moment the setting flips.

The alternative that needs no setting is to stop depending on ghcr for the image: `podman pull` it with an
authenticated login, `podman save` and gzip it, and attach the archive to the release, where assets on a public repo
are anonymously downloadable. That costs roughly 350 MB on the release and has the side benefit of being the mirror 9k
wants for the image anyway. Not done, because it is a different decision than the one Paul approved.

### 9g. Cross-compiling for Windows and macOS

**State:** OPEN · **Autonomy:** PARTLY AUTONOMOUS

| field | value |
|---|---|
| autonomy | partly. A mingw cross-build can be attempted here and its link is checkable, but the done-when is a machine that ran the binary |
| done when | either a mingw and a macOS build of the port link and start, with the untested-platform caveat removed from the README because a machine ran them, or the item is CUT with the reason recorded on the page |
| blocked by | no Windows or macOS machine has ever run this project, and a cross-compiled binary still needs a module built from the reader's disc |

**Decided on 2026-10-30: do it, as a followup, and do not let it hold 9f.** The item's own argument against itself
still stands and is recorded here rather than argued away: the artefact is a binary that starts and then needs a
module its platform cannot easily produce, and shape B now gives Windows and macOS a working path with one artefact.
So the honest reading of this item is a cross-compiled front-end for people who want to build the port on those
platforms, not a way to play on them.

**Measured on 2026-10-30, and it sizes the first step.** Debian trixie has 74 `mingw-w64` packages and not one of
them is SDL, by `apt-cache search mingw | grep -i sdl` over updated lists in the same container the port builds in.
So the mingw route is not a package install, it is a cross-build of SDL3 itself with cmake and mingw before the
kit's SDL front-end has anything to link against. macOS is further still: there is no cross toolchain here at all,
and the done-when is a machine that ran the binary, which this project has never had. That is the work priced rather
than guessed, and the first tractable slice is the SDL3 cross-build plus a link of `towns_sdl.cpp` against it, which
needs no hardware to check.

What it would take: `libsdl3-dev` for mingw, the kit's SDL front-end built against it, and a CI matrix. What it
would not fix: the module. So the artefact is a binary that starts and then asks for a recompiled module the user
cannot easily produce on the platform it was built for. Shape B in 9f solves the same problem with one artefact
instead of three, and does not need a Windows machine to be believed.

If it is done anyway, the honest done-when is a machine that ran it, because this repository's platform rule is that
untested means untested, and that rule exists for good reason: the shell scripts do not run in `cmd` or PowerShell
at all.

### 9h. The README's claims and links, checked

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous. `tools/checkall.js` already collects checks of this shape |
| done when | `checkall.js` fails when the archive.org URL, the docs site URL or the editor URL is inconsistent between the pages that carry it, or when a relative link in `README.md` does not resolve to a file. The failure case: a check that greps for one string only, which is what let three copies of the archive link drift already |
| blocked by | nothing |

The README is about to grow the two most-copied links in the project, and it already carries a duplicate-link problem
that `AGENTS.md` names: the archive link, the editor and docs URLs, and the scope paragraph appear in several places.
A rewrite is the moment a link goes stale in one of them, and the check is a page of work against finding out from a
reader.

**What landed.** Two checks in `tools/checkall.js`. `shared URLs have one form each` enumerates every occurrence of
the two hosts across `README.md`, `tools/README.md`, `web/README.md`, `mkdocs.yml` and every docs page, and rejects any
`sloppy-seconds.github.io` path that is not the root, `/docs/` or `/docs/quickstart/`, and any `archive.org/details/`
item that is not `fmtownscdcollection`. That is the shape the item warned about: grepping for one string cannot see a
fourth spelling appear, so this one allows exactly three and fails everything else. `README relative links resolve`
covers the gap mkdocs cannot, because the README is deliberately not built by mkdocs.

Both were seen to fail, on a temporary line in the README carrying an invented docs path and a link to a file that does
not exist, and the line was removed after the failure was read.

### 9k. Mirror the repository and its releases

**State:** OPEN · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous now. The artefacts exist and are fetchable, and the second host is a choice with no technical constraint |
| done when | the repository and at least one release exist on a second host and on archive.org, each with the commit or tag they were taken from recorded, and `docs/licensing.md` names the mirrors so a reader can find them. The failure case: a preservation artefact with exactly one point of removal, and no record that anyone thought about it |
| blocked by | nothing since 2026-10-31. The inputs are named below. One of them, the image, is gated on 9n |

**What to mirror, with the exact inputs.** The repository at tag `v0.1.0`, which peels to `72f97c3`, and the release
asset `u2port-linux-x86_64.tar.gz` at 12,894,884 bytes, sha256
`44f8cdfb8c7d004e50d6799483ef449bf504648e85a41cb8ba8f41f9ae14a752`, from
<https://github.com/sloppy-seconds/fm-towns-ultima/releases/tag/v0.1.0>. Those two are enough to rebuild everything,
because the module is in git and the SDL source is pinned by hash, and archive.org accepts both as a single item with
the tag and the digest in its metadata. The image is the awkward one: `ghcr.io/sloppy-seconds/fm-towns-ultima:port-v0.1.0`
resolves to manifest `sha256:4650410f0096`, 343.3 MB compressed across four layers, but it is private (9n), so
mirroring it means either making it public first or exporting it from an authenticated pull with `podman pull` and
`podman save`. The second git host has no constraint attached to it, which is the one part of this that is a preference
rather than a measurement.

The decision of 2026-10-30 makes the committed module the thing worth preserving, and a single account on a single
host is one takedown, one outage or one acquisition away from being the only copy. Mirroring is the difference between
a preservation project and a temporary one. The shape: a second git host for the repository, an archive.org upload for
the release tarball and the image's build inputs, and the mirrors named in `docs/licensing.md` rather than left as folk
knowledge.

### 9l. Choose a licence for this repository's own code

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | needs Paul. It is a choice about the project's future, not a packaging detail |
| done when | a `LICENSE` file at the root states the terms for this project's own scripts, docs and recompiled module, `README.md` and `docs/licensing.md` point at it, and `tools/release-package.sh` ships it in the archive. The failure case: a public preservation repository that grants nothing, so every downstream use is technically unlicensed, or a licence chosen that claims rights nobody here holds |
| blocked by | a decision. The obvious care: whatever is chosen covers this project's code and the recompiled translation, and says so, because the original game's code is not this project's to license |

There is no `LICENSE` at the root today, which was harmless while the repository held only scripts and documentation and
nobody was expected to reuse them. That changed with a committed module and a shipped binary. The toolkit's MIT terms
are already carried in `THIRD-PARTY-NOTICES.md` and in the release archive, and they are not a substitute: they cover
fmtownskit, not this work.

**What landed.** `LICENSE` at the root, standard MIT text, Copyright (c) 2026 Paul Czarkowski, matching fmtownskit's
own so the stack is one licence rather than three. `release-package.sh` ships it in the archive beside
`LICENSE.fmtownskit`, and `THIRD-PARTY-NOTICES.md` gained the section the licence needs: what MIT covers here, and the
thing a licence from a non-owner cannot cover, which is the original game.

**The preservation disclaimers, added with it.** The usual set, in plain tone rather than defensive, in three places a
reader actually meets them: the README's first screen, `docs/licensing.md` as a notice block at the top, and
the release notes the workflow publishes beside the binary. Non-commercial preservation, own your own copy and supply your own
disc files, *Ultima* is Origin Systems now Electronic Arts and *FM Towns* is Fujitsu with no affiliation or endorsement
claimed, all original content and ROMs belong to their owners and are not included, takedown through GitHub issues,
and no warranty because MIT already says so.

### 9m. A release binary that needs nothing installed

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous. It is a build change with a machine to check it on, and no product decision in it |
| done when | the release tarball's `u2port` has no `libSDL3` in its `ldd` output, and the unpacked archive plays on a machine that has no SDL of any kind installed, with a captured frame read back as the title screen. The failure case: a release described as portable that still needs a distro SDL package, which is what made the artefact Debian trixie-shaped and would have made `v0.1.0` unplayable on the majority of the machines it can reach |
| blocked by | nothing. 9g reuses the same mechanism with a cross toolchain file |

**What landed.** `tools/sdl-from-source.sh` builds SDL3 as a static archive from the upstream
release tarball, and `tools/sdl-pin.txt` pins version, sha256 and byte size, with the hash
checked before extraction so a swapped artefact is a hard failure rather than a different SDL
in a published binary. `container/Containerfile.x` gained the header packages SDL needs at
build time (X11, Wayland, ALSA, Pulse, PipeWire, udev, and `libxtst-dev`, which the configure
step asks for by name). `port/CMakeLists.txt` says out loud which SDL the kit found and puts
`$ORIGIN:$ORIGIN/SDL3` on the rpath, so anything a future build ships beside the binary is
found by relative path. `tools/release-package.sh` builds against the static archive, refuses
a binary whose `ldd` still lists `libSDL3`, ships SDL's zlib text as `LICENSE.SDL3`, and
bundles `$PREFIX/lib/SDL3/*.so` if a build ever produces them. `play.sh` falls back to the
same source build when the distro has no SDL3 config, so a clone on a plain machine builds.

**Measured, not assumed.** The static archive is 6,446,422 bytes and a static SDL3 build ships
no loadable backends, so the module-bundling branch copies nothing today and says so. The
release binary's whole `ldd` list is `linux-vdso`, `libstdc++`, `libm`, `libgcc_s`, `libc`,
`ld-linux`: no SDL, and no X11 or audio library either, because SDL dlopens those and they are
the desktop's own. The verification container was a bare `debian:trixie-slim` with `nodejs`,
`unzip`, `xvfb` and `imagemagick` and nothing else, where `ldconfig -p | grep -ci sdl3` and
`dpkg -l | grep -ci sdl` both returned 0. In it the unpacked archive ran 120 frames headless
and wrote a 1,109,473-byte shot, and then ran with `SDL_VIDEODRIVER=x11` and mapped a window
named `Ultima II - FM Towns, recompiled` at 640x480, whose 24,503-byte capture the vision
model read as the title screen with the Fujitsu credit.

**The defect it found, which is not this item's to fix.** On that bare container the first X11
attempt produced no window at all, with the port printing `graphics  sdl unavailable (Failed
loading libasound.so.2: ... cannot open shared object file), falling back to none`. The cause
is visible: `fmtownskit/runtime/towns_sdl.cpp` calls `SDL_Init` once with video, audio and
gamepad together, so no audio backend loses the window too. Every stock desktop has at least
one of `libasound`, `libpulse` or `libpipewire`, which is why nobody hit it while playing, and
the fix belongs to the toolkit's front-end. It is entry 4 of `docs/port-defects.md` with its
observation, and the release README says the same in plain words rather than hiding it.

**The gates, and seeing them fail.** `tools/portcheck.js` gained four checks: the pin is one
well-formed row, the source build asks for static and verifies the hash, the release script
calls the source build and asserts on `ldd` and ships the licence, and the port's CMake names
the static target and `$ORIGIN`. The pin check was seen to fail by shortening the hash by one
character and reading `1 data rows, 0 well formed`. The `ldd` refusal was seen to fire by
linking a toy binary against the system shared SDL with `-Wl,--no-as-needed`, where the same
pipeline reported `libSDL3.so.0` and refused, and reported clean on the real release binary.
The first attempt at that demonstration was silently useless, because the linker dropped an
unreferenced `libSDL3` under `--as-needed` and the gate had nothing to see.

**What 9g inherits.** The pin, the download, the hash check and the option list are the whole
SDL problem; a Windows cross build changes the toolchain file and the target triple and reuses
the rest, which is the reason this was done as a separate script rather than inlined into the
packaging.

**Cut into the release on 2026-10-31.** The CI host job built from the pinned SDL source with a
cold cache and no game file present, which is the path nobody had walked before the tag, and it
produced the shipped binary. The local cold-cache simulation of that job was abandoned part way
once CI itself was the evidence, which is the better witness anyway.

## Phase 10: a control API for the port, so it can be driven without a window

This phase exists because of a sentence in `docs/port-defects.md`: headless key injection cannot activate the game
menu, while real SDL keys do it on the first try. Everything downstream of that costs a window. The defect-1 hunt
needed Xvfb, `xdotool`, `import`, and a vision model to say what the screen showed, and it still took three passes to
get a deterministic reproduction. The mechanics items in phase 5 have the same shape: each one needs the game driven
into a state and then observed, and today that means a display server and a screenshot reader.

**The design, agreed with Paul on 2026-10-31.** A thin tap inside the port's own frame loop, speaking JSON lines over
a socket, gated behind a flag so the default path and the release binary are untouched. Not a parallel front-end, and
not a reimplementation of input: the `key` command pushes through SDL, because SDL is the path that works. Tier 1 is
the socket and its commands. Tier 2 is a small MCP wrapper so an agent session can use it as tools rather than as a
protocol to hand-roll. Tier 3 is what becomes possible afterwards, listed so it is visible and deliberately not
scheduled.

**What Tier 1 upgrades immediately, and this is not speculative.** `tools/x-run.sh shot` currently captures the Xvfb
screen with `import`, which needs a display server, an X client, and a window that exists; `shot` over the channel
returns the framebuffer the machine is presenting, which works with `--graphics=none`. Defect diagnosis gets `mem`,
`frame` and `wait`, which is what the `0xffeba` hunt wanted: it could have stepped to frame 4026 and dumped the stack
instead of pressing keys and hoping. The phase-5 mechanics items get a state reader that does not need a screenshot
read by a model, and the vision model stays for the questions only it can answer, which `AGENTS.md` already says.

### 10a. The control channel and the frame tap

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous. It is a flag, a listener and a place in the loop, and the loop already has the hook |
| depends on | none |
| done when | `--control=<host:port|path.sock>` makes the port accept one JSON object per line and answer one JSON object per line, handled from inside the existing `on_vsync` hook so commands run between frames and nowhere else, and a run **without** the flag is unchanged, proved by a byte-identical `U2_SHOT` and an identical frame count against the same inputs on the release binary. The failure case: a tap that perturbs the default path, or a listener that only exists when SDL opened, which would put the window back into the loop |
| blocked by | nothing |

The protocol is line-delimited JSON with `id` echoed back, and the transport is a TCP socket bound to loopback by
default, because a Unix socket path inside a container volume is a mount argument waiting to be wrong. The port prints
the bound address on stdout at startup, which is what makes an ephemeral port (`:0`) usable and is also the smoke test
that the listener exists. Commands are answered when the machine next reaches a frame boundary, so a command can never
observe a half-updated machine, and that is the whole reason the tap lives in the frame hook rather than on a thread.

**What landed.** `port/control.h` is the channel: a flat JSON parser that refuses anything it does not understand
rather than half-accepting it, a non-blocking listener accepting one client at a time, and a command queue drained
from the frame hook. `port/main.cpp` gained `--control=`, the startup line naming the bound address, and the dispatch.
Commands in this item are `hello`, `ping`, `echo` and `quit`, and the protocol version is `1`. No thread, no new
link dependency, and nothing at all happens when the flag is absent.

**Measured, and both halves of the equivalence check were seen to fail.** `tools/controltest.py` ran against the
release binary as the reference: 600 frames, then 1500 with a space at 400, and the frame count matched and the
framebuffer hash matched (`b07da349b43a` both sides). Pointing the reference at a run one frame short failed the frame
check (`1500 vs 599`), and pointing it at a run that never received the space key failed the framebuffer check
(`b07da349b43a` against `c4aca5e1a2da`) while the frame count still matched. That second demonstration mattered:
at frame 600 the splash is identical with and without a font ROM, so the first version of the comparison could not
have failed and was widened to a text-bearing frame before it was trusted.

**One bug the protocol test caught on its own.** A malformed line made the dispatch loop treat "bad" and "nothing
queued" as the same answer, so the bad line was dropped silently and the client hung waiting for a reply that was
never sent. `Channel::next` now returns three states, and the test's "a malformed line is refused, not fatal" case is
what found it.

### 10b. `key`, through SDL rather than beside it

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous, and the acceptance test is already written down by the defect pass that failed without it |
| depends on | 10a |
| done when | a committed script reaches the title screen, the game menu, `Select Player` and the world **through the socket alone**, with no `xdotool`, no `import` and no vision model, asserting each transition against a framebuffer hash recorded from the windowed reference run. The failure case: `key` reaches the guest the way `U2_KEYS` does and still cannot activate the menu, which is the measured defect this item exists to remove |
| blocked by | nothing beyond 10a |

`key` must go in through `SDL_PushEvent`, which is the front-end's own door, so the injected key travels the same road
as a physical one: `towns_key()` mapping, the front-end's own Esc handling, the same ordering against the vsync hook.
The measured gap this closes is in `docs/port-defects.md`: `U2_KEYS` moves the menu highlight and then cannot select,
across both ASCII encodings of `Return`, repeated presses, spacings from 200 to 2500 frames, and the pad buttons.
Whatever that difference turns out to be, pushing through SDL sidesteps it by construction rather than by guesswork.

**What landed, and what it proved.** `key` resolves its argument with `SDL_GetKeyFromName` and pushes a
`SDL_EVENT_KEY_DOWN`, so `"key":"Return"` enters through the same handler a physical Return does. The port runs that
way with `SDL_VIDEODRIVER=dummy`, which was measured to open the front-end with no display at all: `graphics  sdl,
window open`, 200 frames, a shot written. That is the part that turned out better than planned. The window was never
a requirement for the SDL path, only for the `xdotool` path, so the socket removes the display server as well as the
X client.

`tools/controlsmoke.py` is the artefact. Four stages, each a fresh process, keys paced by the machine's own frame
counter through `ping` rather than by sleep, and each stage's framebuffer compared against a hash recorded from the
windowed reference (real Xvfb, real `xdotool`, captured with `U2_SHOT`):

| stage | hash, both paths |
|---|---|
| splash | `fada784131b8d553` |
| menu | `46761bb40bc41607` |
| highlight | `831c0ff77c488417` |
| `Select Player` | `7c7acc2ba471b2f4` |
| confirm | `d283d1f02323d8e6` |

`Select Player` is the one that matters: it is the screen the `U2_KEYS` path could not reach in any of the six ways
tried, and the socket path reaches it with a hash identical to the windowed path's. The test also asserts the stage
hashes are distinct, because several matches against one repeated value would prove nothing.

**The overworld is asserted differently, and the reason is a real property of the screen.** The first attempt compared
the world frame against the windowed reference and failed, `45ef7efc21c6254f` against `3e74b4bf2c08f0d2`. The
overworld is animated, so the framebuffer at frame 1500 depends on which frame each key landed on, and the windowed
reference drove its keys by wall clock. Byte equality there is not achievable, so the world stage asserts two things
that are: two socket runs of the same schedule produce the identical frame, and that frame differs from the confirm
frame, so the route made progress. The recorded hash is the socket path's own, and the screen was checked once with
the vision model to confirm it is the overworld rather than some other animated panel; it reads `STAMINA : 20`,
`WEA:Dagger`, `ARM:Cloth`.

**The test was broken when it was first written, and the demonstration found it.** Running it against the release
binary, which has no `--control`, printed four `FAIL` lines and exited 0, because only the distinctness check
appended to the failure list. Fixed, and re-run both ways: release binary exits 1 with four failures, the build under
test exits 0 with four matches.

### 10c. `frame` and `wait`, so time is an argument and not a sleep

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous. The frame counter and the vsync hook already exist |
| depends on | 10a |
| done when | `frame N` advances exactly N machine frames and two runs from the same start produce identical framebuffer hashes, and `wait` on a memory address or on the framebuffer returns within a stated frame budget of a change caused by a scripted `key`, and returns an error line rather than hanging when nothing changes. The failure case: a `wait` that busy-loops forever, or a `frame` that drifts because the SDL pacing path paces it as well |
| blocked by | nothing beyond 10a |

This is the item that turns the defect-1 reproduction from a wall-clock script into a measurement. The reproduction
died at frame 4026 in three runs whose key timing differed by seconds, which says the machine is deterministic and the
*script* was not. With `frame` and `wait` the same sequence becomes "step to 4025, dump, step one, dump", and the
address `0xffeba` can be approached under observation instead of near it.

**What landed.** Both commands park in a small pending struct beside the hook and are answered from it, because
neither can be answered in the frame it arrives in. `frame` replies with `frame`, `from` and `stepped`; `wait` takes
`addr` with an optional byte count, or `screen`, plus a `timeout` in frames, and replies `changed:true` with the new
bytes as hex for a memory wait, or `ok:false` with "no change within the frame budget". A second pending step or wait
is refused with a reason rather than silently dropped. Screen comparison is a sampled checksum of the rendered frame
(every 997th pixel, FNV-1a), which is cheap enough to poll and catches a screen that changed.

**Measured, and three of the assertions were wrong before they were right.** `frame 100` and `frame 37` both advance
exactly their N, checked as `frame - from`, and two runs stepped to the same frame produced identical framebuffers
(`fada784131b8` both). Three findings came out of the first attempt:

- The first version measured reply-to-reply and saw 101 for `frame 100`. That is not drift, it is the one frame it
  takes to read a command, and the fix was to make the contract self-describing by returning `from` rather than to
  teach every caller about the transport.
- The first version claimed the screen wait was "woken by a change the caller caused". It was wrong: the splash
  animates on its own, so the wait could fire before the key landed and still be correct. The assertion is now that a
  screen wait reports a change within budget, and attribution to a cause is left to memory waits, which is 10e's
  business.
- The determinism runs stepped to exactly the frame limit, so the final reply never arrived and the test crashed on
  an empty read. Stepping to eleven hundreds against a twelve-hundred limit is the fix, and it is the same class of
  bug as a test that races the thing it measures.

### 10d. `shot`, the framebuffer over the channel

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous. The encoder already exists, since `U2_SHOT` writes the same PNG |
| depends on | 10a |
| done when | `shot` over the socket returns a PNG whose bytes are identical to the `U2_SHOT` file for the same frame and the same state, asserted by hash in a committed test, and it works with `--graphics=none` so no display server is involved. The failure case: a shot that only works in SDL mode, which would keep Xvfb in every automated route |
| blocked by | nothing beyond 10a |

**Measured.** A run that ended at frame 600 with `U2_SHOT` and a run that parked a `shot` on frame 600 produced the
same PNG bytes, `fada784131b8` both, and the read checks run with `--graphics=none` for the memory half and SDL dummy
for the shot, so no display server is anywhere in the test.

Two findings came out of getting there. `mkstemps` on glibc wants **six** X's before the suffix, not four, and returns
`EINVAL` for anything less; the first template used `XXXX` and every inline shot failed with "Invalid argument", which
the test caught and which would otherwise have been blamed on the renderer. And a shot taken after stepping to "600 or
later" is a different picture from a shot at frame 600, because the splash animates and a command is read a frame or
two after the step reply lands. That is why `shot` takes `at` and parks, rather than rendering whenever it happens to
be read.

### 10e. `mem`, a raw read by `seg:off`

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous. The CPU object has the segments and the memory, and `tools/peek.js` already proves the addressing from the other side |
| depends on | 10a |
| done when | `mem` returns N bytes at a `seg:off` address and the player record read that way matches `tools/peek.js` field for field on the same state, with a committed test asserting at least HP, level, gold and position. The failure case: an off-by-one in the segment base, which is the error class `docs/live-fieldmap.md` exists to prevent and which a field-by-field comparison catches and a smoke test does not |
| blocked by | nothing beyond 10a |

**The done-when was not achievable as written, and what replaced it is stronger in one way and weaker in another.**
`tools/peek.js` reads the *emulator's* live memory, and putting the port and the emulator into one game state is a
savestate alignment problem this item does not need. The substitution, asserted in `tools/controltest.py`:

- `mem` at the linear address the run prints it loaded the program at returns the stripped image from disk, byte for
  byte (`4b59425f696e6974`, which is `KYB_init`). That is the segment-base test with an independent source, and it is
  the exact error class the item was worried about.
- A segment the CPU does not hold is refused with the list it does hold (`0014 0110 0014 0014 0110 0014`), and reading
  through one it does hold resolves to a linear address and returns bytes.
- `mem` reads live memory: 64 bytes at the record address are zeros before a `key space` and non-zero after it.

Weaker than the original wording in one respect: HP, level, gold and position are not individually cross-checked
against the emulator. That comparison belongs to `state` (10f), which has an independent source it can actually reach,
namely the save file.

**Corrected the same day.** The sentence above was written before `state` existed, and it was too pessimistic. Once the
roster was being read, the HP comparison the item had asked for became available with the save file as the source
instead of the emulator: `mem` at the image base plus `0xcde81` returns 382, and the roster's `HP` for the character on
the disk is 382. The earlier 382-against-20 failure was the test comparing against `STAMINA` while the fieldmap names
`HP`, and the fieldmap was right.

**A wrong assumption caught on the way.** The first version hardcoded `0xcde81` and compared the result to the roster's
`STAMINA=20`. It read 382. Two errors were stacked there: the fieldmap address is relative to the image base, which
the port prints rather than fixes (`program 1071886 bytes at linear 0x400000`), and the frame-paced route does not land
on the same world state as the wall-clock reference, so the comparison was measuring the schedule and not the read
path. Both are now derived instead of assumed, and the roster comparison moved to the item that can do it honestly.

### 10f. `state`, the roster and world parsed for the caller

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous. The formats are already parsed by `tools/savedisk.js`, and the files are plain ASCII on the emulated floppy |
| depends on | 10a |
| done when | `state` returns party, position, gold and inventory for the save disk the repository ships, naming the three characters on it, and the numbers agree with `tools/savedisk.js` run over the same image. The failure case: a parser that duplicates `savedisk.js` and drifts from it, which is why the acceptance is an agreement test and not a printout |
| blocked by | nothing beyond 10a |

**What landed.** `state` reads `ROSTER1.UT2` through the port's own `u2floppy::Image`, splits the slot at the
`(N)NAME=` markers the roster uses, and returns every field the roster spells, in file order: `NAME`, `HP`, `MHP`,
`GOLD`, `FOOD`, `EXPERIENCE`, the six attributes, `PLAYER_X`, `PLAYER_Y`, `MAP`, `WORLD`, `SURFACE`, the dungeon and
gate coordinates, and the inventory flags (`ANKH`, `DAGGER`, `RED_GEM`, `TRI_LITHIUM` and the rest). Slot numbering
follows `savedisk.js`, so in-game slot 1 is the roster's `(0)`.

**Measured as an agreement, not a printout.** For each of the three characters on the shipped disk, the port's reader
and `tools/savedisk.js` were run over the same image and compared field for field on `NAME`, `HP`, `MHP`, `GOLD`,
`PLAYER_X`, `PLAYER_Y` and `STRENGTH`. All three agree, and the names come back as `E`, `D` and `B`. A slot outside the
roster is refused with a reason. That is the failure case the item named: two parsers that drift would show up here and
nowhere else, because everything else in the port reads bytes rather than the roster.

### 10g. Tier 2, the MCP wrapper

**State:** OPEN · **Autonomy:** PARTLY AUTONOMOUS

| field | value |
|---|---|
| autonomy | partly. The wrapper is code and can be written here; registering an MCP server into the harness is a change to a person's config and needs Paul |
| depends on | 10b |
| done when | an agent session drives the port to the title screen and reads back party state using only the MCP tools `play_key`, `game_state`, `screenshot` and `step_frames`, with the transcript or a committed script as the artefact, and the wrapper is a thin translation of the socket protocol with no logic of its own. The failure case: a wrapper that grows state or policy, at which point there are two drivers and only one of them is tested |
| blocked by | 10b, and Paul for the harness registration |

### 10h. Tier 3, listed and not scheduled

**State:** OPEN · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous in principle, and it is listed rather than scheduled on purpose, because scheduling it now would be guessing which of the three is wanted |
| depends on | 10b |
| done when | not applicable while it is a list. Each of the three becomes its own item when it is picked up, with its own done-when. The failure case this note guards against: a tier that reads as committed work and quietly consumes the phase. The three are deterministic replay scripts, save and load-state over the socket, and a headless auto-play harness that grinds defects 1 to 3 and validates the phase-5 mechanics items |
| blocked by | a decision about which of the three to promote, and nothing else |

The auto-play harness is the one with the largest shadow. An agent that can step frames, read state and press keys
without a window is an agent that can walk the overworld until something breaks, which is how defect 1 was found and
is how the phase-5 mechanics items would be confirmed against the running game rather than inferred from the module.

### 5m. Music: where it comes from, and when it starts

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | done, and no decision was needed in the end |
| depends on | nothing |
| done when | met. The source is named, the track is named, and the port plays it in the same place the original does, confirmed in play on 2026-11-07 |
| blocked by | nothing |

**What was wrong, and it was three defects rather than one.** The port was given a one-track cue, so the program was told the disc
had one track and its CD-audio request came out as `00:00:00` to `00:00:00`. The position service answered zeros, and the program
hands that same buffer back as a play range. And the audio reader bounded each track by `file_start`, which is zero for every track
on a single-image disc, so the data track was rendered as audio.

**What is now known.** The music is CD audio, proved by muting the CD during the splash. The file that decides the layout is the
`.ccd`: a Control byte and a PLBA per track, plus the lead-out. Ultima II's music is track 5, `CDDAPLAY 06:43:00 to 08:06:74`, which
is LBA 30225 to 36524. The port now plays it at the splash and the census reads 44,100 samples a second in play. Measurements are in
`docs/audio-playback.md` section 7.

### 5p. The character screen changes song and this port goes silent

**State:** DONE · **Autonomy:** AUTONOMOUS

**Resolved 2026-11-09.** Two defects, both measured rather than read. `0x250F`'s real-mode window was never mapped onto the program's
frames, so every CD reply went to a copy the program never read and its track table at `0xCE0` stayed empty. And the table of contents was
sent in BCD while the program copies the bytes verbatim and the original's buffer holds binary. Fixed, the port's requests are the
original's own numbers: menu `30225` to `36524`, Create Character `44250` to `52724`, byte for byte. The position substitution was then
proven dead by removing it and re-running the same route to the same ranges, so it and `U2_CD_NOFALLBACK` are gone. Record:
`docs/audio-playback.md` 9.15. What is now known: the contract is `Int 93h` with `AL=0xC0`, `AH` the function (`0x50` play, `0x52` stop,
`0x53` position, `0x54` TOC, `0x55` pause, `0x56` resume), buffers binary MSF with the lead-in through the `2511h` window, and the play range
derives from the table of contents reply rather than from the position reply. Still unknown and no longer needed here: which family the ROM
dispatcher at `0x3C795` serves.

| field | value |
|---|---|
| autonomy | autonomous for steps one to five, which are reading and port code. One listening run by Paul at the end, because the headless route never reached the character screen |
| depends on | nothing |
| done when | with `U2_CD_NOFALLBACK=1` set, the Create Character screen plays track 7 and the splash still plays track 5, and the substitution, the switch and the hand-written CD cases are deleted. The failure case is a finding rather than a gap: if the block turns out to belong to the extender, or the services turn out to sit on DOS internals, the page records the driver's real semantics and the item closes with the port's approximation labelled as one |
| blocked by | nothing |

**What is known, and the call stack is the important part.** The original plays track 7 there, `CDDAPLAY 09:50:00 to 11:42:74`, and
the stack at the audio start names the caller: `000C:000E093A` then `0256:000027B9`. That is the game asking through a DOS-extender
thunk into the CD BIOS, and the splash play has the same caller, so nothing is started by the launcher. The game builds a parameter
block at `0xe34` with a sub-function code `0xb94` and calls the BIOS with it, and this port's hand-written `int 93h` services expect
two MSF triples instead, which is why the decoded range arrives with its end before its start.

**The port's splash music is a substitution, measured as such.** `U2_CD_NOFALLBACK=1` restores the documented answer of zeros while
nothing has played, and the splash goes silent, so the music comes from the position service supplying a range rather than from the
program's own request being understood.

**The route.** Model the CD controller at `0x4C0` to `0x4C7` and route `int 93h` into the recompiled TBIOS, so the real BIOS interprets
the program's parameter block and the substitution can be deleted. `references/TOWNSEMU`'s `TownsCDROM` is a worked reference for the
device. Done when the character screen plays track 7 with `U2_CD_NOFALLBACK=1` set, which would prove the program's own request is
being understood rather than answered for.

**That route is now known to be wrong in one part.** The `int 93h` handler is not in the recompiled module at all. It lives in `/IO.SYS`
on the disc, at file offset `0x2160`, which is segment `0256`, and it is a twenty-byte trampoline that far-calls into segment `0x0050`,
a second module. `TBIOS.BIN`, `ENCHANT.EXP` and all ten ROM files were searched for its first bytes and none contains them. Routing
`int 93h` into the recompiled BIOS therefore has nothing to route to, and loading IO.SYS would mean running DOS system code in 16-bit
real mode, which this port does not have.

**Parked 2026-11-07 by Paul**, after three attempts to locate the game's track table by searching memory. The substitution stays, and
the splash and gameplay music work.

| tried | result |
|---|---|
| `FIND 064300` and `FIND 095000`, eight cycles with a translation before each | one address, `0x8BAE`, in low memory rather than the game's data area |
| dump from `0x8B40` | a keyboard translation table mapping scan codes to ASCII, not track times |
| translation taken at dump time | `Page Table Not Present`, so the dump is not the game's memory and proves nothing either way |
| memory-write monitor on the assumed table address | only DMA-tagged writes with code-like values, which is the CD controller's transfer buffer |

**The plan, written 2026-11-07, worked 2026-11-09.** Steps one to four are done or answered. What remains is steps five and six.

1. **Find the file that contains the CD layer. DONE, with a correction.** There is no separate driver file and no `MSCDEX.EXE` on the
disc. The layer is inside `IO.SYS`: 26 controller-port loads at file `0x4106` to `0x4CAC`, 32 `int 93h` instructions, and the strings
`C:\MSCDEX.EXE` and `TOWNS_CD`. The corrected first question was not "which file holds segment `0x0050`", because `0x50` is a selector
whose base changes per context, measured as `0x500` in one session and `0x68C50` in another.
2. **Read the interrupt convention. DONE.** The driver's own call site at file `0x4179` shows `AH=0xFD`, `AL=0xB0` plus a four-bit
selector, `DS:DI` a buffer and `CH` carried in and out. The entry stub guards `AH` to `0xFD` or above, or `0x04` or below.
3. **Read what the game sends. DONE.** The CD cluster is `0xE05F8` to `0xE0FA0`. The game does not call `int 93h` directly: it calls
`int 21h` with `AX=0x250F` and `0x2511` through the register-image routine at `0x102692`, and `0x2511` raises the real-mode interrupt
named by the sub-block at `0xb94`. The request itself is six bytes at `0xCD4`, a start time and an end time.
4. **Settle whether the block belongs to the BIOS or the extender. ANSWERED, the extender.** `0x102692` loads `EAX`, `EBX`, `ECX`,
`EDX`, `ESI` and `EDI` from the block at `0xe34` and executes `int 0x21`, then writes the registers and the carry flag back to
`0xe50`. It is a register image, and `0x250F` and `0x2511` are `int 21h` `AX` values, neither of which appears as a constant anywhere
in `IO.SYS` or the game image.
5. **Find out why nothing is playing when the program asks for a position.** The experiment settled the mechanism: with `U2_CD_NOFALLBACK=1`
every play range on the create route becomes zeros, so the ranges are built from the **position reply** and not from the table of contents
directly, even though the values equal table entries. Turning the substitution off is therefore not the repair: an honest answer of "nothing
is playing" gives a program that asks for nothing. On the original a track is always running when the program asks, and in the port it is
not. So the step is to find where the port stops the menu track before the Create Character screen, which is a port-side question with a
port-side instrument: the existing `U2_TRACE_INT` trace already prints every stop, and the answer is the frame at which the stop arrives and
what asked for it.
6. **Verify, then delete the workarounds.** With `U2_CD_NOFALLBACK=1` the character screen must play track 7 and the splash must still
play track 5. Then remove the position substitution, the `U2_CD_NOFALLBACK` switch, the BCD table of contents and `to_msf_bcd` if they
are unused, and the hand-written CD cases the new code replaces.

**Verification is one listening run**, because the headless route never reached the character screen in any run this week. The port's own
CD-DA log gives the range as a secondary check, and the range for track 7 is `44250` to `52724`.

**Failure cases.** Two of the three are now spent. Step one found the layer and step four found that the extender owns the block, so the
plan changed as it said it would rather than failing. The one that remains: if step five cannot be read far enough to play track 7
without the substitution, the item closes with the driver's semantics recorded as far as they were read, and the port's approximation
labelled as one.

### 5n. Hardware interrupt delivery, attempted, reverted, and why

**State:** OPEN · **Autonomy:** PARTLY AUTONOMOUS

| field | value |
|---|---|
| autonomy | mostly autonomous now. The bisection is done and the next step is a hypothesis to test, not a judgement call |
| depends on | nothing |
| done when | interrupts are delivered **and** the FM music survives it, measured by the same one-second sound-port census that caught the regression: the music must still start at frame 4026 and run to the end of a 9,000-frame route. The failure case: if a bounded attempt cannot have both, the item records that this game demonstrably prefers no interrupts and closes as CUT with that measurement, rather than leaving a change in the tree that silences the music |
| blocked by | nothing. It was previously blocked on a played test, and bisection replaced that with a number |

**What is now known.** The port never delivered a hardware interrupt: `x86_poll()` existed and nothing called it, measured by a
one-shot print that never appeared in `pending_irq()` and did appear in `x86_poll()` with `IF=1`. The game does install
handlers (vectors `44` and `4D`, master IRQ4 and IRQ13), so they had simply never run.

**What happened to the fix.** Delivering interrupts at the I/O boundary, the only place this port's clock moves, was deployed
and then bisected when the music stopped being heard. Same route, same 9,000 frames, counting the per-second sound-port
census: 83 buckets before the change, **1 bucket with it**, 83 again after reverting. The change is out; the RF5C68 end-marker
fix that ended the looping sound effect stayed, because the census shows it cost nothing.

**The hypothesis for next time, and it is only a hypothesis.** The FM timer's handler now runs, and the sequencer's timing
assumption no longer holds: the chip's timer was read as free-running, and an interrupt-driven rewrite of it changes what the
driver sees. The two halves of the poll are now behind their own switches so this can be tested one at a time: `U2_TICKS=1`
runs the timer BIOS's 10 ms callbacks, which stays opt-in. Hardware interrupt delivery is on by default because it is part of the machine, and `U2_NO_IRQ=1` turns it off for a differential run. The poll
itself always runs and always advances the clock, because that is the port's time base and an earlier version of these flags
broke it by returning early.

**What was measured about the attempt, for the record.** The 700-frame frame was unchanged at `21682d77` with a save disk,
and 14,000 frames with keys reached the world with no fault. Neither of those caught it; the sound census did. That is the
lesson worth keeping: a change can leave the picture identical and take the music away.

Full record in `docs/interrupts.md`.

### 5o. Some samples are cut off at the end marker

**State:** DONE · **Autonomy:** AUTONOMOUS

**Resolved 2026-11-09.** The first explanation holds: the samples contain `0xFF` as waveform data, so the marker rule truncates them at the
first such byte, and nothing is wrong with the wave indexing. Measured over every `.SND` payload inside its declared length, thirteen of
the fifteen contain `0xFF` and the only two that do not are `BUMP` and `FIRE`, which are exactly the ones that play to the end. `MAGIC3`
stops 44 bytes into 16,418. Record and table: `docs/sound.md`. Asserted in `tools/verify.js`, and scanned by `tools/sndff.py`. What is now
known: the length to play is the header's at offset 12, the marker rule and that length are not the same number, and a sample with an
early `0xFF` is cut short by design rather than by a decoding fault. Left open deliberately: whether a looping effect and a one-shot need
different rules, which is a playback question and not a measurement.

| field | value |
|---|---|
| autonomy | autonomous. The next step is a dump of the bytes a channel reads, which needs no display and no ears |
| depends on | nothing |
| done when | the wave bytes behind a step (which ends correctly) and a moongate (which is truncated) are dumped and compared, and the page says which of the two explanations holds: the sample contains 0xFF as waveform data, or our wave indexing reads the wrong place and finds 0xFF where the sample has none. Either way the artefact is the dump and the verdict. The failure case: if the dump shows nothing wrong with the mapping, the item records that the marker rule is what hardware does and the truncation is the driver's own behaviour, which is a negative result and closes it |
| blocked by | nothing |

**What is known.** Stopping the RF5C68 channel at its 0xFF marker fixes the repeating sound effect and leaves the music working,
measured in play on 2026-11-05 after the FM chip fix. But some samples, a moongate for instance, are truncated. The registers
cannot separate a sound that should loop from one that should end: every sound has `start 224` and `loop 61440`, and only
`step` differs.

**Why the wave dump is the next step.** If the mapping is right, the truncation is the chip's own rule and the driver's
problem. If the mapping is wrong, every channel has been reading the wrong bytes all along, which would explain the original
long loops as well as the truncations.

Full sequence, measurements and the reverted attempts are in `docs/audio-playback.md`.

---

**[Distance to reimplementation](reimplementation-gap.md)** **[Unattended queue](overnight.md)** **[All pages](index.md)**

### The create path, swept: 13 routines replaced, 2026-11-02

The path a player meets first is now enumerated and partly native. `U2_TRACE_FN` over splash, menu, character
creation and the register reports **101 distinct routines**, 77 with a corpus record. Replaced so far, each verified by
the differential on five screens and the save disk:

| guest | size | what |
|---|---|---|
| `0xe42d0` | 49 B | decimal parser, entered 329 times |
| `0xe63fc` | 23 B | copies two fields out of a record |
| `0xe642c` | 9 B | signed 16-bit field getter |
| `0xe5748`, `0xe5760`, `0xe5778`, `0xe5790` | 22 B | `g(0x7a7d8, N, x)` for N = 0..3, one address per constant |
| `0xe5810`, `0xe58b8`, `0xe58cc` | 18 B | `g(0x7a7d8, x)` with three different callees |
| `0xe58e0` | 34 B | advance an index, wrap at four, then call 0x1e6 |
| `0xe9c2c` | 21 B | the `"="` scanner, 11c's first target |
| `0xe120c` | 43 B | 11c's original target, replaced and verified but **never entered from play**, which is what turned the target choice from a guess into a measurement |

Shadow entries on the create route went from 0 to **114,882**, so this is not idle code.

**The next tier is deliberately excluded.** `0x1c4`, `0x1e6`, `0x27d` and `0x4b1` are the callees the wrappers above
reach, and each is a TBIOS gateway of the same shape: `mov ah, N` then `call fs:[0x20]` with `fs` set to selector
`0x110`. Those are the boundary into the system layer rather than the game's logic. Replacing them would be
reimplementing the platform, which the port already does in C code, and the shapes are uniform enough that a native
version would only restate `x86_far`.

**What the remaining work looks like.** Of the 101, four are done and four are the TBIOS gateways. The rest are mostly
non-leaf, and 24 have no corpus record at all, so they must be named before they can be replaced. Two instrument bugs
surfaced while doing this and are fixed in the kit: `U2_TRACE_FN` hooked `find()` and so missed every call that now
goes through `x86_call_known`, reporting one routine where dozens were entered, and `U2_WATCH_MAX` was only read inside
the `U2_WATCH` block, so a traced enumeration stopped silently at 64 entries.

### The rules are separated from the glue, 2026-11-02

The first thirteen replacements were worthless and Paul named why in one line: they might as well have been assembly.
They restated the recompiler's output one machine operation at a time, so the differential comparing them with that
output was a tautology. It caught the inverted tab test in `0xe42d0` only because the copy was mis-typed, which makes
it a typo checker rather than evidence of understanding.

Two changes fix the class:

- `port/x86_glue.h` holds the machine half: argument fetch, tick charge, call with its sentinel return, and return. It
  states the contract in one place, including what a rule may assume and what is deliberately not reproduced, with the
  reason each is invisible to a caller (the frame, callee-saved push/pop, flags from a comparison, the exact return
  address).
- `port/native_shadows.cpp` is now a list of rules. `0xe58e0` went from twenty-five lines to seven, and there is no
  macro that hides a `return`, so every exit of a rule is visible in the rule.

One constraint stays and is documented where it bites: **a rule containing a backward jump keeps its live values in the
guest registers the twin expects**, because a poll can hand control back to the recompiled code at that jump, which
reads those registers. Three rules say so at the point they do it.

**Style and lint are wired but dormant.** `.clang-format` and `.clang-tidy` are pinned to the style `port/` already
uses, scoped to `port/` and never `module/`, and `tools/cstyle.js` runs them when they exist. No clang tool is
installed on any machine this project has been built on, so the check prints what it could not do and passes: a
missing tool must not fail a suite that a stranger has to be able to run from the zip. Neither file has ever been run,
so the first person to use them should commit any reformatting separately, where it shows up as whitespace rather than
hiding inside a change of behaviour.

### The socket-driven differential is the weak instrument, 2026-11-02

Item `0xe1344`, the hottest routine left on the create path at 132,826 entries, was written and refused. Chasing why
settled two things.

**The rule is genuinely wrong, and the socket was not to blame.** Driving the route with `U2_KEYS` at fixed frames and
stopping on a `--frames` limit takes the driver out of the loop, so no wall-clock scheduling reaches the sample. That
run is identical at 3,000, 6,000 and 12,000 frames with and without the rule, and then differs by **172 bytes between
`0x51e808` and `0x51eaef`**: the rule writes an extra pointer, `0x00134905`, where the original has zeros, and the
entries after it shift by one slot. A fill-length or fill-condition error, not a timing artefact.

**And the differential's control cannot see the failure it most needs to.** It compares the baseline against itself, so
both sides run at the same speed, which is exactly the condition under which a speed sensitivity would hide. A jitter
variant was written to close that: the same config twice, the second reaching each frame by a different path. It passed
four times and then failed once with no rule installed, and its own defect explains the inconsistency, because a pause
between commands can let the machine pass a frame target, after which the scheduled key never fires and the route
silently shortens. That control was removed rather than fixed, on the rule that an unreliable control is worse than
none.

So the reliable comparison is the socket-free one and `tools/shadow-diff.py` should be rebuilt on it. Until then every
rule in this file is verified by an instrument whose insensitivity to speed is assumed rather than shown, and that is
worth knowing before another fifty are added.

One trap found by using it: `U2_MEM_DUMP` parses its length as **hex**, so `65536` means 414,518 bytes rather than
65,536. The dump that found the 172 bytes covered a third of a megabyte because of it.
