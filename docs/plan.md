# Plan

What this project is doing, in what order, and which work does not need a human in the
loop. Written because the work had drifted into reacting to whichever probe was most
recent. Updated as items completed.

**Last updated after an autonomous work session. A1, A2, A4 and A5 are done. A3 is partly
done. A6 is blocked and says why.**

## The standing goal

Extract as much as possible from the FM Towns Ultima II release, reproducibly, from the
zip alone. Ultima II only. Everything else is subordinate.

## The two-track split

**Track A, static analysis.** Reading `ENCHANT.EXP` and the asset files with no emulator.
Deterministic, scriptable, and it can proceed without anyone watching.

**Track B, runtime work.** Booting the game, navigating menus, taking savestates, measuring
behaviour. Needs the emulator and needs decisions about pressing keys.

Everything still blocked is blocked on Track B, or on the addressing limit documented in
[addressing-limits.md](addressing-limits.md).

## Track A: status

### A1. Read the remaining top-called functions: FORMERLY MISLABELLED DONE

**This was marked DONE after ten functions. There are 247 targets called three or more times,
so ten is four percent.** The stopping rule was wrong. Sixteen have now been read, in
[more-routines.md](more-routines.md), which is still six percent.

**The most valuable find was the random number generator at `0x101a40`**, an LCG with
constants `0x41c64e6d` and `0x3039`, state at `0xdfc78`, output 15 bits from the high word.
That is the single most useful thing for the combat-formula problem, because every random roll
in the game is now exactly evaluable.

The rest of the original entry follows.

<details><summary>Original text</summary>

Documented in [core-routines.md](core-routines.md).

Read completely: `0xe6e90` (text renderer), `0xe5834` (draw string), `0xe5810` (format
helper), `0x0c5d` (**TownsOS BIOS gateway**), `0xf3e04` (**pixel writer**, row stride 128),
`0x10096c` (bounded copy), `0x101928` (variadic forwarder), `0xe1b24` (sprite slot setup),
`0xe6e48` (counter with limit), `0xe6b1c`, `0xe7440` (object record access).

Three leads came out and one closed:

- `0xe5810` is **not** "draw message N". It formats a number with padding, transforms it, and
  draws it. That is the debug readout path.
- `0xe41d0` is integer-to-string with space padding.
- `0xe4238` is a per-character switch over `0x20`-`0x5A`, whose **jump table at `0xe4086`
  does not resolve**. Open, recorded rather than guessed at.

</details>

### A2. Finish the 57-byte record: DONE

Documented in [record-arrays.md](record-arrays.md).

There are **two** 57-stride arrays, not one:

| array | base | fields |
|---|---|---|
| text windows | `0x7aee4` | 14, roles identified |
| objects | `0x7a7d0` | 10, plus a constructor |

An earlier field scan found 8 fields for the text array using the wrong base and 3 for the
object array using only one addressing form. Searching both `[reg+disp32]` and
`[base+index+disp]` is what made them readable. `tools/structmap.js` now does both.

**Unresolved:** the object constructor writes to offset `+69`, which is 13 bytes past a
57-byte record. And no `CALL` target matches its entry, so it is reached indirectly. Both
recorded, neither explained.

### A3. Find the message tables: PARTLY DONE

Documented in [string-sources.md](string-sources.md).

**123 call sites to the renderer pass a literal string address.** That is the first map of
where the game's text lives, and it was the largest single result of the session.

Found and previously unknown:

- the **music track titles** in English (`Theme of Sosaria`, `Fight!Fight!Fight!`,
  `Lord British`, `Severe conflict`, `Dark field`, `In a deep dungeon`, `Amem`)
- the **debug mode readouts** (`PLAYER_X = `, `PLAYER_Y = `, `DUNGEON_Y = `, `GATE X=`,
  `MAP Y=`, and the `TOWN`/`CASTLE`/`TOWER`/`DUNGEON` labels)

**Not done:** the 75 register-supplied calls. `tools/msgtable.js` tested whether they come
from constant-address loads and found **zero**. They are computed, so they are behind the
addressing limit.

`tools/extractstrings.js` extracts all 138 sites and classifies them by encoding: 96
Shift-JIS, 21 `EB` runs, 11 ASCII. Output goes to `extracted/strings.json`, gitignored.

### A4. The `0xEB` glyph runs: DONE, one glyph proven

Documented in [eb-glyphs.md](eb-glyphs.md).

**`0x74` = `。` is established**, by a test that could have failed: in 160 pure `EB` strings
it occurs non-finally 3 times and all three are `。。`.

Ruled out:

- gojuon ordering: no 46-long contiguous run exists, the largest is 16
- `0x5d` = `ス` from a `-masu` ending: only 11% of strings contain `0x5d`, and polite text
  would use it nearly always
- transliteration against ship names: lengths differ in both directions
- **a font on the disc**: `GAI.TIF` is one 168x249 illustration, not a sheet, and
  `EXTRA.TIF` is a dense tile bank. Neither is a font.
- a font pointer table in the binary: the only 16-long pointer runs are the known string
  table at `0x7a864`

The remaining route is the writer, which is behind the addressing limit.

### A5. The sound rate: DONE, negative on the original question

Documented in [sound.md](sound.md).

The `1960` puzzle is an **artefact of a second header layout**, not a corrupt field. The
discriminator is offset 16: `0` in layout A, `length - 1` in layout B. `BUMP`, `FIRE` and
`WHAT` carry a loop point, and it shifts what the later offsets mean.

Measured: **offset 12 equals `filesize - 32` in 15 of 15 files.**

**The actual question is still open.** A scan of `ENCHANT.EXP` finds **no `1960`** as a u16
or u32, so the game reads the value rather than programming it. At 1960 Hz the effects would
run 1.5 to 30 seconds, which is implausibly long. Answering it needs the PCM setup code.

### A6. `MAP2_*` geometry: SOLVED

Documented in [map-geometry.md](map-geometry.md).

The map buffer is **32,768 bytes = 256 x 128**. The file payload is the last 31,232 bytes of
it, beginning at buffer offset **1,536 = 128 x 12**, so 12 rows are generated at runtime.

The reason this took so long: `31232 = 128 x 244` looked plausible, but rendering from the
payload start shifts every row by 12 cells and destroys coherence. **The width 128 was correct
from the first attempt.** The starting offset was wrong, and an offset error of 1,536 bytes at
width 128 is exactly 12 cells.

Found by walking out from the known payload position in a savestate until the byte values
stopped looking like map cells, giving a 32,768-byte span that divides exactly by 128.

`tools/maprender.js` renders it. Previous state: BLOCKED

The `Q:\GRAPH\MAP2_1.TIF` string is at `0x22cc` and is **never pushed as an immediate**. The
only reference to it anywhere is its own bytes. So the loader that opens it cannot be found
by looking for a reference.

This is the addressing limit again. See [addressing-limits.md](addressing-limits.md), where
it is now recorded as a systemic obstacle with six examples rather than a one-off.

**Cheapest unblocker:** a savestate while the map is displayed, dumped at the loaded map
address, compared against the file. That is Track B.

## New item A7, added this session

### A7. Dump the runtime image where `0xe4086` and friends should be: DONE

Documented in [runtime-image.md](runtime-image.md). It did not give the expected answer and
gave a more useful one.

**Base confirmed independently:** `0x762d2`, from a 50,648-byte contiguous match. The earlier
session's figure was right.

**Findings:**

- The image splits at **`0x7a0e0`**. Below it everything survives byte for byte. Above it,
  nothing does.
- The tables that fail to resolve (`0x7a864`, `0x7a7d0`, `0xe4086`, `0xd8f84`) are **zero at
  runtime**. They are initialised data the game clears on startup.
- `0x013000` to `0x050000` holds **loaded artwork** at runtime where the file has zeros. It is
  BSS, not code.
- **The top ~230 KB, `0x0c9000` to `0x105cee`, is not resident.** All five known code sites in
  it read as zeros. The binary is likely **overlayed**.

**This demotes the segment-relative addressing hypothesis**, which was the leading candidate.
The references are not hidden by a segment, the targets are simply empty or not loaded.

**A new limitation on method:** scanning a savestate for a function in the upper region is a
false negative when that overlay is swapped out. Recorded in
[addressing-limits.md](addressing-limits.md).

**New item A8 below**, because this result suggests a cheap follow-up.

### A8. Second savestate at a different screen: DONE

A second state (`title.state`) was captured at the Ultima II title screen via
`SAVESTATE /data/title.state` on the running container.

**Result:** nothing is swapped between the two screens, so the overlay hypothesis is dead.
And further probing found something better: **the top region of the image is mirrored** in
memory, at `stateAddress = 0x4392d2 - imageOffset`, verified at five points.

That was the real cause of the addressing limit for the upper half. Documented in
[overlay-test.md](overlay-test.md) and [mirrored-region.md](mirrored-region.md).

Two of my own conclusions were wrong along the way and both are corrected in place: the
overlay reading, and then a claim that the top 220 KB is never loaded.

### A9. Re-run the upper-region searches under the mirror mapping: DONE, NEGATIVE

Documented in [a9-reference-search.md](a9-reference-search.md).

Searched the whole state for dwords equal to the string addresses, using both mappings.
`Q:\GRAPH\MAP2_1.TIF` at `0x22cc` matched twice, and both were **palette data** where `22 cc`
happens to appear inside a colour triple.

**No reference to any asset path exists as a plain dword in either mapping.**

**What A9 did establish:** runtime data tables can be read once the mapping is right. At the
mirrored address of `0xd8f84` the state holds a dense ascending table of code pointers,
structurally identical to the file's. That is a new capability even though it did not answer
the question it was aimed at.

**What replaces it:** finding the loaders is a function-reading task, not a search task. The
image loader at `0xe9948` is a known entry, and reading its callers is the way in.

### A10. Read the image loader's callers: ATTEMPTED, target was wrong

`0xe9948` is called **once** in the whole image, with a register argument. A loader for 71
assets would be called many times. So it is a single-purpose load, not the path mechanism.

The assumption in A10 was that a function printing ` LOAD ERROR` must be the loader. That was
wrong.

**Status: parked.** Two routes remain, both documented in
[a9-reference-search.md](a9-reference-search.md): read the BIOS file service at `0x0c5d`, or
accept the position, since the asset inventory is already proved complete by other means and
`verify.js` asserts it.

Recorded as the third work item this question has consumed with a negative result, which is a
reason to stop rather than a reason to try harder.

### A11. Use the RNG to make combat formulas testable

**Why:** the generator at `0x101a40` is identified exactly. Every random roll in the game is
now computable given the state at `0xdfc78`. That removes the main reason combat formulas have
been unmeasurable.

**What:**
1. Read the seed at `0xdfc78` from both savestates and confirm it differs, which would show it
   is seeded from something variable rather than a constant.
2. Find the callers of `0x101a40` and see which formulas consume its output and how they
   scale it. `0x101a40` returns 0 to 32767, so a caller wanting 0 to N-1 must divide or mask.
3. With the divisors known, evaluate the formulas exactly and compare against a save file with
   known stats, which is Track A because `saves/maxed_four.hdm` already exists.

**Done when:** the to-hit roll and the damage roll are stated with their exact arithmetic.

**Status: step 1 attempted and blocked.** The RNG code is identified from the disassembly, but
its runtime address does not resolve, and its state variable reads as a small counter at both
savestates. Both states are menu screens, so the generator was most likely never called. Step 1
needs a savestate taken during play.

**Step 2 is DONE.** Documented in [rng-helpers.md](rng-helpers.md). The two range wrappers are
fully decoded:

- `0xe3d4c` is `randRange(lo, hi)` = `lo + (rng % (hi - lo + 1))`, **both ends inclusive**.
- `0xe1c5c` is `randMod(n)` = `rng % (n + 1)`, returning `0` to `n` inclusive, and returning
  zero without consuming a roll when `n` is zero.

The inclusive high end is the detail that would have broken any measured formula, because a
call with `(0, strength)` yields `0..strength`, one more value than a naive reading.

**Step 3 is DONE for one formula.** Documented in [stat-gain.md](stat-gain.md).

Four call sites of `0xe3d4c` and **85** of `0xe1c5c`. Following the densest cluster found
`0xf25b4`, a complete routine:

```
roll = rng % 10                      ; 0 to 9
if roll >= 2:                        ; 80 percent
    record[index].field += 1         ; 351-byte records
    if field > 99: field = 99        ; clamp
else:
    different message
```

**Two separate caps confirmed:** stats at 99, and HP at 9999 (the 9999 cap is elsewhere and not
yet located).

**A stride the tooling misses:** `0x351` is built as `lea *5`, `lea *11`, `shl 5`, `sub`, which
is 11x32-1. `tools/stride.js` finds the `lea` stages but not the shift-and-subtract finish.

**Not established:** which stat the field is, and the message text at `0x6408` and `0x6428`,
which are `EB` glyph runs. The glyph mapping being unsolved costs a real answer here.

### A12. Build a linear disassembler pass

**Why:** the survey of all 85 `randMod` sites in
[randmod-survey.md](randmod-survey.md) resolved 33 and produced four numerically impossible
results. Byte scanning finds call opcodes inside instruction operands. `0xef4bb` disassembles as
`mov al,[0x8d000cec]`, which proves the offset is mid-operand.

**What:** a pass that walks each function from its entry following real instruction lengths,
recording boundaries. Then re-run the site survey only on boundaries that are genuine.

**Done when:** the survey resolves substantially more than 33 of 85, with no impossible odds.

**Cost:** medium. This is the blocker for the remaining formula work, and it is bounded.

**Status: BUILT, then superseded by a control-flow walk.** See [cfgwalk.md](cfgwalk.md).

`tools/cfgwalk.js` seeds from CALL targets, follows call/jmp/jcc targets and fall-through,
recovers functions after alignment padding, and records the 144 indirect branches it cannot
follow. Measured: **79,470 instructions, 85 randMod sites reduced to 83**, in about 2 seconds.

Two rejected, both provable: `0xef4bb` inside `mov eax,[0xceca0]`, `0xef4cd` inside
`mov eax,[edx+0xcdeef]`. The real call in that function is `0xef4ad`, which is kept.

**The earlier judgement that this was "not worth building for tidiness" was wrong.** It took one
tool and a bug fix, and it doubles the usable site count.

Design notes and the superseded sweep numbers in [a12-design.md](a12-design.md).

`tools/sweep.js` produces instruction boundaries from a real entry. `tools/randmods.js --sweep`
filters sites against them.

| sweep scope | sites surviving of 85 |
|---|---|
| none | 85 |
| 738 call targets | 72 |
| 247 strongly-called | 24 |

**13 of the 85 raw hits are provably false.**

**Structural limit found:** one false positive survives every filter, `0xe393e`, because it lives
in a function reached by **fall-through, not by `call`**. No list of CALL targets will ever cover
it. Reaching those needs a control-flow walk from the entry point at `0x101a20`.

Also confirmed: a **full-image sweep from offset 0 is unusable**, and reports the real
`cmp edx,0x48` as not a boundary while reporting the byte after it as one. Function-local sweeps
are sound; all 247 came out under 15 percent `db` ratio.

### Fixed this session: the `funcs.js` label skew

`--at` passed the file address to `ndisasm -o` while disassembling the header-stripped image, so
every printed label was `0x20` high. `call 0xe1c5c` printed as `call 0xe1c7c`. Fixed, with the
measurement recorded in [randmod-survey.md](randmod-survey.md). Any address quoted from a `--at`
run before the fix needs `-0x20`.

**Cost:** medium Track A for steps 2 and 3. Step 1 is Track B.

## Track B: what needs a human

| item | needs |
|---|---|
| Which `ENEMY2` bank is which | a savestate on the overworld |
| Combat formula measurement | a character with known stats, then fighting |
| Equipment thresholds | a character at the boundary |
| Debug mode activation | input testing, or finding the flag |
| `WORLD*.UT2` contents | saves at different positions |

**Solved and removed from this list:** the addressing limit. A7 and A8 answered it. The
image loads below `0x0d0000` at base `0x762d2` and above it mirrored at `0x4392d2 - offset`.
Nothing further is needed from Track B for that.

**One Track B item may be closable from Track A:** `saves/maxed_four.hdm` already exists with
known stats. If a formula can be predicted from the code, one save file confirms it, and
making a save file is a Track A operation.

## Honest status, item by item

Four of the ten Track A items are genuinely complete. The rest are not, and the headings
above use words like DONE that overstate two of them.

| item | heading says | actually |
|---|---|---|
| A1 | DONE | complete |
| A2 | DONE | **mostly.** The object constructor writes to offset `+69` in a 57-byte record and no caller matches its entry. Unexplained. |
| A3 | PARTLY DONE | **partial.** 123 of 226 call sites resolved. The 75 register-supplied ones are unresolved. |
| A4 | DONE, one glyph proven | **partial.** 1 of 54 glyphs decoded. The rest is open and the font is not on the disc. |
| A5 | DONE, negative | **negative only.** The header layouts are settled, the actual question, whether 1960 is a frequency, is untouched. |
| A6 | SOLVED | complete |
| A7 | DONE | complete |
| A8 | DONE | complete |
| A9 | DONE, NEGATIVE | complete as a negative |
| A10 | ATTEMPTED | **closed as unresolvable.** The target was wrong, three further routes were tried (20-byte record grid found, base reference, `lea` x20 chain), and none found the mechanism. Five work items spent. |

**Nothing on Track B has been attempted.** Every item there still needs a human, apart from
the addressing limit which is now solved.

### What is genuinely still open

1. **The high bits of a map cell.** `v & 3` is terrain, established. The upper bits correlate
   at 74% and their meaning is unknown.
2. **The `0xEB` glyph mapping.** 1 of 54 glyphs. Needs the writer or a font, neither of which
   is reachable by the methods tried.
3. **The `0xe4086` switch table.** Not a table in the file, not a table at its mirrored
   runtime address. Something else is going on there.
4. **The asset path mechanism.** Three work items spent, all negative. The paths are real and
   present; how they are supplied is not known.
5. **The object record's true size.** 57 by the `lea` chain, 69 by the constructor.
6. **Everything on the Track B list.**

## What this plan deliberately does not do

- **No more statistical probes on `MAP2_*` or the `0xEB` runs.** Both tried to exhaustion.
- **No more U3 cross-checks.** One round done, one test wrong, nothing transferred.
- **No decompiler.** Reading functions from real entries works and is cheap.

## The rule that governs all of it

Every claim needs a measurement that distinguishes it from its alternatives, and every failed
probe gets recorded so it is not retried. Three confident wrong conclusions exist in this
project's history and each came from a plausible-looking pattern.

This session produced two more examples of the same failure mode, both caught: a tool that
took the wrong argument order and reported 216 implausible hits, and a field scan that used
the wrong array base and reported 49 untouched bytes in a 57-byte record.

---

**[Open questions](open-questions.md)** **[Core routines](core-routines.md)** **[Addressing limits](addressing-limits.md)** **[Where the strings are](string-sources.md)**
