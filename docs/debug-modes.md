# The debug and cheat modes

The FM Towns release names five modes in its own text, in `ENCHANT.EXP` at file
offsets `0x5501` to `0x55ad`:

| offset | Japanese | meaning |
|---|---|---|
| `0x5501` | `日本語表示モ−ド` | Japanese display mode |
| `0x5530` | `ダンジョンマスタ−` | dungeon master |
| `0x555e` | `ウルティママスタ−` | Ultima master |
| `0x5583` | `ゾンビモ−ド` | zombie mode |
| `0x559f` | `お金持ちモ−ド` | rich mode |

They sit in a contiguous block with three words before them, `MODE`, `MUSIC` and
`VOICE`-adjacent strings, which suggests a settings or debug menu rather than
individual cheat keys.

## Are they playable

**Unknown, and the honest answer is that this needs one more step to find out.**

What is established:

- The strings are in the binary, in the game's own text, not in the launcher.
- They are **not referenced as immediates**. Searching for each address as a
  uint32, base 0 and base `0x100000`, gives zero hits. Same pattern as the asset
  path strings, which this project already documented as an unsolved addressing
  problem: the game reaches them by a method none of the cheap probes can see.

So the names prove the modes exist. They do not reveal how to enter them.

## What would settle it

Three routes, cheapest first.

**1. Look for the mode in saved data.** The roster schema has no mode field, but the
`SEED`, `FOUND` and `MODE` fields were never explained. `MODE=%c` in particular is
empty in every save we have. A save written while a debug mode is active might
populate it. Testable by turning something on and diffing.

**2. Find the reader of the string pool.** The mode names must be printed by
something, and the print routine takes a pointer. If the pool base is stored in a
global rather than addressed literally, a breakpoint on the print routine while the
menu is displayed would reveal both the pool address and the index. That is the same
unresolved problem as the asset paths and would be worth solving once for both.

**3. Try the obvious inputs.** Most Japanese ports of this era used a key sequence on
the title or the options screen. Nothing in the binary names such a sequence, so this
is a guess rather than an experiment, and this project's rule is to prefer
measurement.

## What the names imply about the game

Independent of whether they are reachable, the names are informative:

- **`お金持ちモ−ド` (rich mode)** implies a gold-granting mode. If it exists as a
  toggle rather than a cheat code, a save editor might set the same flag.
- **`ゾンビモ−ド` (zombie mode)** is not a standard Ultima II term in any of the
  published material. Its meaning is unclear and it is not in the research doc.
- **`ダンジョンマスタ−` and `ウルティママスタ−`** are two levels of a master mode,
  which suggests a staged debug toggle rather than a single flag.

None of these appears in the Apple II or DOS documentation this project has checked,
which is one more entry for `rebuttal.md`: **the FM Towns build ships named debug
modes that the published sources do not mention.**

## Status

Recorded as **present but not reachable**, with the offsets, so the next attempt starts
from a known location rather than from a search.

---

**[The game text](game-text.md)** **[Open questions](open-questions.md)**
