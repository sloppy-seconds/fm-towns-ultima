# Ultima Trilogy on the FM Towns

Playing, and taking apart, the Fujitsu FM Towns release of *Ultima Trilogy 1-3*.

**[Quickstart](quickstart.md)** &nbsp;·&nbsp;
**[Save game editor](https://sloppy-seconds.github.io/fm-towns-ultima/)** &nbsp;·&nbsp;
**[Repository](https://github.com/sloppy-seconds/fm-towns-ultima)**

The editor runs in a browser, needs nothing installed, and edits a save disk
entirely on your machine.

This page and the pages under it are the investigation record. Every claim is
backed by a measurement on the page, and most of what is established is also
asserted in `tools/verify.js`, which reads the disc and fails loudly if something
stops being true.

If you just want to play, you do not need any of this. Start with the
[quickstart](quickstart.md) instead.

## Scope: this is Ultima II work

Almost everything here is about **Ultima II**, `ENCHANT.EXP`. Ultima I and III are
on the same disc and were used throughout as **cross-validation**, not as subjects:
a format claim or a tool behaviour that holds on one game and also holds on its
siblings is worth far more than one that only fits a single binary.

Many of the concepts transfer. Where they do not, it is usually because the games
differ in ways worth knowing:

| | Ultima I | Ultima II | Ultima III |
|---|---|---|---|
| binary | `DARKNESS.EXP` | `ENCHANT.EXP` | `EXODUS.EXP` |
| roster | `ROSTER.UT1` | `ROSTER1.UT2` | `ROSTER.UT3` |
| world | none declared | `WORLD1-4.UT2` | `WORLD.UT3`, `PARTY.UT3`, `PLAYERS.UT3` |
| save paths | built at runtime | literal strings | literal strings |
| format | plain ASCII | plain ASCII | plain ASCII |

The roster format is the interesting one. All three games write plain
`KEY=value` text, so the save editing machinery generalises. **Extending the
editor to Ultima I and III should be close to trivial and has simply not been
attempted yet.** The work is known, not unknown:

- **A field set per game.** Measured from saves the games actually wrote, the
  names genuinely differ. U2 says `HP` and `MHP` where U1 and U3 say `HITPOINT`
  and `MAXHIT`. U3 has `DEXTERITY` and no `AGILITY`. U1 has `TYPE` and no
  `PROFESSION`. U3 splits food into `FOOD1` and `FOOD2`. U1 has 133 distinct
  fields including its `WEAPON01`-`16` and `VITEM0`-`16` tables, U2 has about
  90, U3 has 56.
- **A different filename** in the FAT lookup: `ROSTER.UT1`, `ROSTER1.UT2`,
  `ROSTER.UT3`.
- **A different slot count.** U1 and U2 have four. **U3 has twenty**, `(0)`
  through `(19)`, so its roster and world files would need a different model.
- **Different formatting.** U1 pads its keys with spaces and indents them:
  `  RACE        =1`. U2 does not. A parser has to tolerate both.
- **Extra files for U3**, which writes `PARTY.UT3`, `PLAYERS.UT3` and
  `WORLD.UT3` alongside the roster.

What is genuinely U2-specific and should not be generalised: the 65-tile `ENEMY2`
bank, the `MAP2_1/2/3` ASCII map format (Ultima III uses fixed-size binary `.MP3`
instead), and the exact roster field set.

## The short version

The game is commercial software, so it is not in this repository. You supply it.

| | |
|---|---|
| **The game** | [archive.org/details/fmtownscdcollection](https://archive.org/details/fmtownscdcollection), file `FM-Towns CD/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[+UserDisk].zip` |
| **The editor** | [sloppy-seconds.github.io/fm-towns-ultima](https://sloppy-seconds.github.io/fm-towns-ultima/), a browser save-disk editor that needs nothing installed |
| **The emulator** | fetched by `tools/vendor.sh`, pinned so the setup is reproducible |

## What was worked out

Most of this project was one question: **why would Ultima II refuse to save?**
The answer took a long time and most of it is wrong turns, recorded deliberately.

| page | what is in it |
|---|---|
| [Getting set up](setup.md) | What to download, checksums to confirm your rip, and the emulator. |
| [Running the game](playing-and-environment.md) | Driving the FM Towns CD browser, and how the live palette was captured. |
| [The save disk](save-disk.md) | Why saves failed, what was actually wrong, and how to build a disk from scratch. |
| [Disc and binaries](disc-and-binaries.md) | Platform, disc layout, the C toolchain, the Phar Lap executable format. |
| [Assets and graphics](assets-and-graphics.md) | The asset set proved complete, and the 4bpp formats behind it. |
| [Extraction](extraction.md) | Running the extractor and what it produces. |
| [Sound](sound.md) | The `.SND` effect format. |
| [Save files](save-files.md) | The roster format, and the measured race, sex and profession modifiers. |
| [The palette](palette.md) | Five failed static approaches before the palette was read from the machine. |
| [Compiling on FM Towns](compiling-on-fm-towns.md) | The whole recipe, frozen: discs, BIOS, container, batch file, every input trap. Start here to compile anything. |
| [Compiling with High C](highc-compile-success.md) | The SDK CD's own compiler building an object file inside the emulator, and the TownsMENU detour it did not need. |
| [The plot calibration](highc-plot-calibration.md) | Compiling a known function, twice getting the answer wrong, and what the corrected comparison shows. |
| [Pixel writer address correction](pixel-writer-address-correction.md) | The pixel writer is at 0xf3e24, not 0xf3e04, and the "expected bytes" were a paraphrase. |
| [Two frames of reference](two-frames-of-reference.md) | Raw offset and stripped offset both exist and both are valid. How a confident general rule about Phar Lap files nearly overwrote a measurement, and the guard against it. |
| [fmtownskit and seeds](fmtownskit-and-seeds.md) | A game-agnostic FM Towns toolkit that recompiles 386 to C++. What transfers, what does not, and the one thing it needs that this binary cannot supply. |
| [The decompilation experiment](decompilation-experiment.md) | First Level-1 run on real routines. One byte match, one confirmed relocation trigger, and the candidate pool is 103 not 738. |
| [The decompilation loop](decompilation-loop.md) | The strategy and the Andon Cord, amended where the experiment contradicted it. |
| [The decompilation plan](decompilation-plan.md) | Running the loop unattended, and the honest ceiling. |
| [The goal, stated](goal-behavioural-faithfulness.md) | Behavioural faithfulness, not byte-identical. What that retires and what it makes urgent. |
| [Compiler API](compiler-api.md) | A C source in, the emitted bytes out, over HTTP. About 12 seconds per compile. |
| [AGENTS.md audit](agents-md-audit.md) | Measured cost and effectiveness of the agent operating document: what works, what is stale, what to cut. |
| [Open questions](open-questions.md) | What is still unknown, ordered by cost to resolve. |

## Reading order, if you want one

[The palette](palette.md) is the best account of how the work actually went,
because it records five failures in sequence before the answer. It is also the
longest.

[The save disk](save-disk.md) is the other one worth reading for the method rather
than the result. Most of it is wrong turns, kept because a failed probe is worth
as much as a success when it stops the next person repeating it.

For the durable results, read [disc and binaries](disc-and-binaries.md) and
[assets and graphics](assets-and-graphics.md). Those are almost entirely settled.

## A note on how these pages are written

Each investigation is recorded as **Tried**, **Measured**, **Verdict** with the
numbers rather than a summary. Claims that were later corrected are marked as
corrections rather than quietly edited out, because the history of being wrong is
useful. Where a measurement does not prove what it might appear to, that is stated
too.

The standard is that a stranger with only the archive.org zip can reproduce every
number here. `tools/verify.js` exists to make that true rather than aspirational.
