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

### A1. Read the remaining top-called functions: DONE

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

## Track B: what needs a human

| item | needs |
|---|---|
| Which `ENEMY2` bank is which | a savestate on the overworld |
| Combat formula measurement | a character with known stats, then fighting |
| Equipment thresholds | a character at the boundary |
| Debug mode activation | input testing, or finding the flag |
| `WORLD*.UT2` contents | saves at different positions |
| The addressing limit | a savestate dumped at known addresses (A7) |

**One Track B item may be closable from Track A:** `saves/maxed_four.hdm` already exists with
known stats. If a formula can be predicted from the code, one save file confirms it, and
making a save file is a Track A operation.

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
