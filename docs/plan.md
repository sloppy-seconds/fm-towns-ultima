# Plan

What this project is doing, what order it is doing it in, and which work does not need a
human in the loop. Written because the work had drifted into reacting to whichever probe
was most recent, and several items were being re-attempted from different angles without a
record of what each one was for.

## The standing goal

Extract as much as possible from the FM Towns Ultima II release, reproducibly, from the
zip alone. Ultima II only. Everything else is subordinate.

## The two-track split

This project has two kinds of work and they have been interleaved badly.

**Track A, static analysis.** Reading `ENCHANT.EXP` and the asset files with no emulator.
Deterministic, reproducible, scriptable, and it can proceed without anyone watching.

**Track B, runtime work.** Booting the game, navigating menus, taking savestates, measuring
behaviour. Needs the emulator, needs someone to decide when to press a key, and cannot be
scripted reliably end to end.

Almost everything blocked right now is blocked on Track B. Almost everything done recently
was Track A. That is the imbalance the plan exists to fix.

## Track A: what can be done with no input

Ordered by value per unit of effort. Each is a self-contained piece of work with a
definition of done.

### A1. Read the remaining top-called functions

**Why:** `0xe6e90` was read completely and immediately corrected a documented assumption.
The same method on the next functions is the highest-yield work available, and it needs no
emulator.

**What:** disassemble and annotate, from real entries only:

| entry | calls | what is known |
|---|---|---|
| `0xe5834` | 563 | strlen-then-call, wraps `0xe6e90` |
| `0xe6b1c` | 240 | uses the 57-byte array, calls `0xe5928` |
| `0xe7440` | 231 | uses the 57-byte array |
| `0xe1b24` | 171 | unknown |
| `0xe5810` | 120 | unknown |
| `0xf3e04` | 104 | unknown |
| `0x10096c` | 94 | unknown |
| `0x101928` | 93 | unknown |
| `0xe6da8` | - | the pager `0xe6e90` calls on row limit |
| `0x0c5d` | - | the draw call `0xe6e90` makes |

**Done when:** each has a documented signature, a plain-English purpose, and any struct
offsets it reads.

### A2. Finish the 57-byte record

**Why:** 14 fields found, 6 identified, 8 unknown. The unknown ones are read by functions
already in the list above, so A1 partly does this for free.

**What:** identify offsets +33, +37, +41, +49, +53 by reading their accessors.

**Done when:** every field has a role or is recorded as unread with the reason.

### A3. Find the message tables

**Why:** the renderer takes a caller-supplied string pointer, so every message in the game
is reachable from a call site. The Shift-JIS text is in the image and its containing
structures have never been mapped.

**What:** for each `CALL 0xe6e90` and `CALL 0xe5834`, walk back to find what is pushed as
argument 2. Classify: immediate string, table indexed by a constant, or computed.

**Done when:** there is a table of message sources, and the ones fetched by constant index
are enumerated. This is likely to produce the **largest single extraction win** on this
project, because it turns "the text is somewhere in RAM" into "here is every message and
where it lives".

### A4. The `0xEB` glyph runs, one more time with code

**Why:** nine statistical probes failed. `font-encoding.md` says the answer needs the code
that reads them. Now there is tooling to find code.

**What:** find what writes `0xEB` bytes. Search for instructions storing `0xEB`, and for
the `0xEB` constant as an immediate. A writer will name the structure.

**Done when:** either a writer is found and the format is explained, or the search is
recorded as negative with the method used.

**Note:** this is genuinely optional. Text draws from Shift-JIS and the `0xEB` runs are not
on the rendering path, so nothing is blocked on them.

### A5. The sound setup, for the 1960 question

**Why:** `sound.md` records the `.SND` rate as unverified. A first probe found **no `1960`
constant anywhere in the image**, which is evidence in itself: 1960 is read from the file,
not set by the code.

**What:** find the `.EUP` driver interface through the string table at `0x7a864`, then the
code that programs the PCM channel. The rate is whatever that code writes, which may be a
divisor rather than a frequency.

**Done when:** either the rate is established from the code, or the negative is recorded.

### A6. `MAP2_*` geometry, from the indexing code

**Why:** every statistical approach failed and one produced a confident wrong answer. The
loader at `0xe7b38` was the wrong function. The right one has not been found.

**What:** the map file is opened by a call site that pushes `Q:\GRAPH\MAP2_1.TIF`. Find
that call site's enclosing function and read how the loaded buffer is indexed.

**Done when:** the cell geometry is stated with the instruction that proves it.

## Track B: what needs a human

Not scheduled. Listed so it is clear what is stuck and why.

| item | needs | blocked on |
|---|---|---|
| Which `ENEMY2` bank is which | savestate on the overworld | someone to boot and stand on the map |
| Combat formula measurement | known `AGILITY`/`STRENGTH` then fight | playing the game |
| Equipment thresholds | a character at the boundary, tested | playing the game |
| Debug mode activation | trying inputs, or finding the flag | playing the game |
| `WORLD*.UT2` contents | saves at different positions | playing the game |

**Track B has a cheaper alternative that has not been tried:** `saves/maxed_four.hdm`
already exists with known stats. If the formula can be predicted from the code, a single
save file can confirm it, and making a save file is a Track A operation. That is worth
trying before asking anyone to play.

## What this plan deliberately does not do

- **No more statistical probes on `MAP2_*` or the `0xEB` runs.** Both have been tried to
  exhaustion. If A4 or A6 do not crack them, that is the honest answer.
- **No more U3 cross-checks.** One round done, one test wrong, nothing transferred.
  `references/` stays as reading material, not as a source of claims.
- **No decompiler.** `code-analysis.md` records why a flat binary at a guessed base
  produces systematic errors. Reading functions from real entries is working and is cheap.

## The rule that governs all of it

Every claim needs a measurement that distinguishes it from its alternatives, and every
failed probe gets recorded so it is not retried. Three confident wrong conclusions exist in
this project's history and each one came from a plausible-looking pattern.

The most useful thing recent work produced was not a finding but a correction: the text
renderer reads Shift-JIS directly, which removed a blocker that was shaping the search.

---

**[Open questions](open-questions.md)** **[Finding functions](function-recovery.md)** **[The text renderer](text-renderer.md)**
