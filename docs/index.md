# Ultima Trilogy on the FM Towns

Playing, and taking apart, the Fujitsu FM Towns release of *Ultima Trilogy 1-3*.

This is the investigation record. Every claim is backed by a measurement on the
page, and most of what is established is also asserted in `tools/verify.js`,
which reads the disc and fails loudly if something stops being true.

If you just want to play, you do not need any of this. Start with the
[README](https://github.com/sloppy-seconds/fm-towns-ultima) instead.

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
