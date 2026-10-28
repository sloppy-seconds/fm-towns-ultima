# AGENTS.md

Guidance for anyone (agent or human) working in this repository.

## Answer questions, do not act on them

**A question gets an answer, not a commit.** This repository has many checks and a strong push toward
committing, so a question about process reads like an invitation to improve the process. It is not.

When the ask is "how do we...", "why...", "are we...", "should we..." or "any...", reply with the answer.
No edits, no new tools, no builds, no commits.

**Before the first tool call, ask: is this gathering information to answer, or changing something?**
Reading and grepping to answer is fine. Writing, editing, building and committing are not.

**If the answer is "we should change something", say so and stop.** Propose it and wait. Do not implement
it in the same turn, and do not test your own proposal. A check that is worth adding is worth adding on
purpose, not as a side effect of being asked about it.

**Do not chase a hung command.** If something hangs, report what hung and the repo state, then stop.
Trying variants of a stuck test turns a wrong turn into a longer wrong turn.

Symptoms this rule is being broken: the reply to a question contains a commit hash, a new file, or a test
run nobody asked for.

## Goal

**The end goal is reimplementation of Ultima II.** The extraction phase exists
to build the strongest possible corpus of data, assets and rules first, so that
reimplementation is a translation exercise rather than a guess.

Extraction is therefore **in service of** reimplementation, not an endpoint.
That distinction has been wrong in this file for a long time and it mattered:
it licensed reading code only where extraction was blocked, which is why most
of the game's routines are still undocumented. The current fraction is owned by
`docs/call-graph.md`; do not restate it here.

What the corpus needs to contain:

- every image, sound effect, map and string the disc will give up
- every data table: monsters, items, spells, towns, shops, NPC assignment
- every rule, **as arithmetic**: combat, movement, time, magic, economy
- the control flow that ties them together: what drives a turn, what drives
  the main loop

A fact nobody can reproduce is not part of the corpus. Every finding needs a
script that derives it, a test that confirms it, and a paragraph that explains
it.

Two rules shape how the work is done:

- Validate against the others. `DARKNESS`, `EXODUS`, `TMENU` and the three
  demos are free corroboration. A format claim that works on U2 and also holds
  on `EXODUS` is worth far more than one that only fits U2. Use them to
  confirm, not to distract.
- Generalise the tooling where it costs nothing. Extraction code written for
  U2 should not be hardcoded in ways that would break on another title. That
  is good engineering hygiene, not a second project.

Working order from here, revised for the real goal:

1. **The call graph, with names.** 738 routines is tractable grouped, and 247
   are called three or more times. Identify the top-level ones. Without this a
   reimplementation has no skeleton.
2. **Read the routines on that skeleton** in the order a player meets them:
   create, move, enter a town, fight, buy, cast, save. Each gets a page with
   its arithmetic.
3. **Data and artwork extraction**, including the tables the skeleton names.
4. **Format documentation.** Every format gets a record in `docs/`.
5. **Runtime confirmation**, where reading cannot settle a question.

**Read first. Compile is a diagnostic, not the production method.** A routine's
deliverable is a behavioural spec: inputs, the arithmetic as arithmetic, outputs,
callers. Byte equality is welcome evidence and is recorded when it happens, but it is
never the gate, and a candidate C is only worth writing when a specific question about
arithmetic or encoding needs settling. The measurement behind this rule: compile-and-diff
over the base-fold set produced 21 recoveries, while compile-and-diff on the `enter`
question produced four refutations and no recoveries.

**An unknown cause does not licence tolerance.** `identical except disp32` is sound
because those bytes are provably linker-supplied. A prologue mismatch with an unexplained
cause is a different thing and must not be filed as verified.

See [docs/reimplementation-gap.md](docs/reimplementation-gap.md) for the
measured distance and what is still missing.

## Read these first

| File | Why |
|---|---|
| `docs/` | Every probe tried, with measurements and verdicts, split by subject. **Read before proposing any investigation.** Five palette approaches are already documented as failed. |
| `README.md` | The GitHub front door. How to set up, play, make a character, run the tools. |
| `docs/index.md` | The docs site homepage. Scope, what is established, reading order. Not a copy of the README. |
| `docs/quickstart.md` | Three routes to playing. The thing most visitors actually want. |
| `tools/README.md` | What each tool does and how to invoke it. |
| `web/README.md` | The browser editor, for someone who arrived there and no further. |

### Documentation lives in four places, and changes go in all the relevant ones

`README.md`, `docs/index.md` and `web/README.md` are **separate documents serving
separate audiences**, not copies of each other. That is deliberate and it is also
a trap, because the same facts appear in several.

When something changes, ask which of these carry it:

| changed | update |
|---|---|
| how to set up or run anything | `README.md` and `docs/quickstart.md` |
| the project's scope, or what is established | `README.md`, `docs/index.md`, `web/README.md` |
| a link to the site, editor or repo | all three of those |
| a format finding | `docs/` only, plus `tools/verify.js` if assertable |
| a platform limitation | `README.md`, `docs/quickstart.md` |
| an item's state, or the order of work | `docs/plan.md`, then whichever of `docs/open-questions.md` / `docs/overnight.md` listed it |
| any count | the one page that owns it, then grep for the old number |
| a finding that closes a question | the closed list in `docs/plan.md`, and the question's own page |

### How to plan, and how to work the plan

Full process, with the measurements behind each rule: **`docs/plan-process.md`**. The short version:

**Three documents with defined jobs.** `docs/plan.md` is the plan of record. `docs/open-questions.md` and
`docs/overnight.md` are views of it. If they disagree, `plan.md` wins and the other is the bug.

**Every item carries three fields.** No exceptions, and `node tools/plancheck.js` enforces it.

| field | values |
|---|---|
| State | `OPEN`, `DONE`, `CUT`, `NEEDS A DECISION`. No synonyms |
| Autonomy | `AUTONOMOUS`, `PARTLY AUTONOMOUS`, `NEEDS A DECISION`, `BLOCKED ON HUMAN`, `BLOCKED ON INPUT` |
| Done when | a checkable artefact, plus the failure case |

**Autonomy is not optional and it is not obvious.** It says whether an agent can do the item alone.
Without it, picking up work means reading nine paragraphs to find out which ones need a person, which is
exactly the reading the field exists to save. `BLOCKED ON HUMAN` is not a failure, it is a fact worth
stating.

**Acceptance criteria name an artefact and state the failure case.** "Read the tick" is not criteria.
"Names each timer, its interval and its effect, or records that it could not be determined statically" is.
Most items here finish just as well as a recorded negative.

**`DONE` obliges three things:** a page recording the result, an assertion in `tools/verify.js` where
assertable, and a line saying what is now known rather than merely that work happened.

**A finding and an item are different things.** A finding is a measured fact in a subject page with
evidence. An item is a unit of remaining work in `plan.md`, linking to findings rather than restating them.
That separation is what makes a single plan file work.

**Before each commit**, run the checks in `docs/plan-process.md` Part 7. The two that catch this project's
characteristic failures are a count written in two places, and an item written without its metadata.

**Every unit of work ends with a closing report, not a summary.** Run `node tools/sessionreport.js` first,
so the report is read from facts rather than recalled, then state five things: what was asked, what was
done, what was claimed and which check proved it, what is outstanding by plan item, and what this made stale
elsewhere. Full form: `docs/plan-process.md` Part 8.

Currently duplicated and easy to let drift: the archive.org link, the editor and
docs URLs, the scope paragraph, and the untested-platform caveat. If you touch
one, grep for the others.

A fact stated in the README but not in `docs/` is fine. The same fact stated
differently in two places is a bug waiting to be found.

### Never assume game behaviour

**The strictest rule here, with no exceptions.** Every statement about what the game *does* is
either quoted from the code with the command that produced it, or it is marked unverified and
not acted on. If a mechanic cannot be read out of the binary yet, ask Paul rather than describe
what a 1990 RPG plausibly does.

The incident that earned this. A plan item said character creation "rolls attributes from dice".
Nobody measured that. The game has the player allocate 90 points across six attributes. Because
the invented premise looked authoritative, the first attempt at the item went looking for
`randMod` call sites and decoded monster spawn placement instead, which cost an hour and nearly
produced a wrong page. A plausible sentence about a familiar genre reads exactly like a measured
one, and no check in this repository can tell them apart.

Corollary for plan items. An item's prose is a claim like any other. "The state roll" in a
`done when` clause silently framed the deliverable as finding an RNG call when it was really
finding a modifier table. Describe the artefact to be produced, not the mechanic you imagine
produces it.

### Read the gameplay documentation before touching the running game

**Before driving the emulator, reading memory, taking a savestate or writing a tool that does,
find the page that already covers it. This is not optional and the pages are listed below, so
"I did not know where to look" does not apply.**

Rediscovering how to read live memory cost a session on 2026-10-28 and produced nothing. The
console takes a DS-relative offset, and DS's base is the image base, so a file address is the
offset and `MD 14:cdf6b 140` reads the player record with no arithmetic. That was already written
down in **five** pages. The first attempts were `MD /0xcde81` and a hand-computed offset that
overflowed, and the time went on working out something that was in the repository twice over.

Worse than the time: the same session also read memory **without `PAU`**, when
`live-fieldmap.md` states the record flips to `FF` fill about one sample in six without it. The
readings happened to be consistent and were later confirmed paused, but that was luck. A page
that says "pausing is essential" is a measurement, not a suggestion.

| do not guess about | read first |
|---|---|
| the character record layout, every field address | `docs/live-fieldmap.md` |
| reading live memory: `MD`, `STA`, `PAU`/`RUN`, and the `DS` base | `docs/live-fieldmap.md`, `docs/live-session.md` |
| **reading any character field from the running game** | **`tools/peek.js`**. Use it rather than parsing `MD` output. `--json` for a machine-readable object, and a non-zero exit means a read failed rather than returned zero |
| the screen layout: which panel is at which pixel rows | `docs/gameplayer-plan.md`, and the measured constants at the top of `tools/u2read.py` |
| the palette, in-game | `docs/playing-and-environment.md` |
| how to get from the Towns menu into a game | `docs/quickstart.md`, `tools/u2flow.py` |
| what the status bar shows and how it maps to memory | `docs/hp-and-damage.md` |
| the save disk and roster format | `docs/disc-and-binaries.md`, `tools/savedisk.js` |
| driving the game from a script rather than by clicking | `tools/README.md`, `tools/u2bot.py` |

**A negative result is not evidence the page is missing.** If a search for "how do we read
memory" fails, search for the command instead: `MD`, `PAU`, `STA`, `savestate`. The pages are
named after their subject, not after the question being asked.

**When a measurement contradicts a page, the page is wrong and must be corrected in the same
commit.** Finding that the documented value and the observed one differ is a finding, and
leaving it undocumented repeats the cost on the next session.

### Three rules about evidence

These are the ones that decide whether a report is worth anything. They apply to every
answer, commit message and doc edit, not just to formal reports.

**A claim without a check is a guess and must be labelled one.** This project's characteristic defect is
confidently wrong sentences that read fluently: "four of seven checks" when it was six and two, "`0xcfe14` is
the attack message" when it was zero padding, "both jump tables" when it was one of two. Each was a number or
attribution a single command would have settled. If the report contains a count, a comparison or a claim that
something does not exist, either a command produced it or the sentence says "unverified".

**The check must have been run in this session, not recalled.** See "Never quote bytes, addresses or counts
from memory" below. A value copied out of an earlier `docs/` page has not been checked, even if that page
cites a command, because the transcription between the command and here is where the errors appear. Re-run it.

**Before trusting a check, break something it should catch and confirm it fails.** Several of the checks in
`docs/plan-process.md` Part 7 could not fail at all when they were written, and two reported failure when
clean. A check that has never been seen to fail is a comment. `tools/checkquoted.js` was tested this way
before being trusted and failed correctly on a fabricated sequence.

### Do not claim more platform support than has been tested

Everything here was built on Linux and **only Linux has run it**. `vendor.sh`
now detects Windows and macOS and fetches the right emulator build, and the
executable names are handled, but no Windows or macOS machine has ever run this
code.

The specific trap: the scripts are `.sh` and do not run in `cmd` or PowerShell.
Saying "one command, on any platform" about `./tools/vendor.sh` is false on
Windows, and that exact wording was written and then corrected.

When describing platform support, separate the two questions, because they have
different answers:

- **the container**, which is Linux inside and plausibly portable
- **the shell scripts**, which need a bash environment on Windows

Both must be marked untested. The browser editor is the only component that is
genuinely cross-platform, because it is a web page.

## The central lesson of this project

**Byte-plausible is not verified.** Three separate wrong conclusions were
reached and corrected in the first session:

- "This is X68000" when it is FM Towns. The `GP0:3` partitioning byte was
  over-read as a platform marker.
- "Map files render as terrain" when `MAP2_1` is ASCII character data. The
  renders were character codes displayed as greyscale.
- "`.SND` has a 32-byte trailer" when the payload runs to EOF.

Each looked convincing. Each was wrong. So:

- Measure before asserting. No claim about a format goes in a doc without a
  measurement that distinguishes it from its alternatives.
- State what a measurement does not prove. The cross-diff found a shared
  block and it turned out to be the float library, not graphics.
- Prefer exact arithmetic. The reliable signals on this disc are byte
  counts. `33280 == 320*104` and `filesize == 32 + u32@12` are proofs.
  Plausible-looking images and plausible-looking statistics are not.
- Record failures. A failed probe is worth as much as a success, because it
  stops the next person repeating it. `docs/` exists for this.

## Never quote bytes, addresses or counts from memory

**This is the single most expensive defect in this repository's history, and it
is a process defect rather than a knowledge one.** It has now cost three wrong
conclusions on one six-instruction function.

### Guard the disk images: they are not recoverable

**`saves/` contains irreplaceable state and none of it is in git.** It is
gitignored on purpose, because the images are disc-derived. That means **there is
no history, no revert, and no backup unless someone made one.**

This has already gone wrong. A hand-run test wrote a test `AUTOEXEC.BAT` and
test files directly into `saves/dos62v6.hdm`, the working boot floppy. The image
survived only because `saves/dos62v5.hdm` happened to still exist to compare
against. There was no backup. The next one may not be so lucky.

**The rule: never hand-test against a named image. Copy it first.**

```
cp saves/dos62v6.hdm saves/scratch-$(date +%s).hdm
```

`tools/compile-proof.sh` and `tools/plot-proof.sh` already do this: they work on
a copy and never touch the source image. Hand testing is where the discipline
got dropped, and it is exactly where a mistake is unrecoverable.

Specifically:

- **Never rewrite `AUTOEXEC.BAT` or `CONFIG.SYS` on a named image.** Those two
  files decide whether it boots at all. Edit them on a copy.
- **Never delete from a named image.** My own cleanup logic treated the
  extension column as part of a filename and removed `BF0` and `BH1`, which are
  legitimate DOS boot files with no extension. Use
  `tools/clean_floppy.py`, whose keep-list is explicit for that reason.
- **`mdel` and `mcopy -o` are instant and unlogged.** There is no undo and no
  prompt. Treat every one against a named image as a destructive operation.
- **When an image seems broken, check whether the harness is broken instead.**
  The dos62v6 scare was a typing failure: the image was fine, AUTOEXEC ran, and
  the compiler worked, all confirmed after the fact. Before concluding an image
  is lost, verify with a batch file rather than typed input.

What is recoverable and what is not:

| file | recoverable from |
|---|---|
| anything in `git` | `git checkout` |
| `saves/dos62v6.hdm` | **nothing.** Rebuild from the DOS 6.2 floppy plus the CD drivers |
| `saves/hc.img`, `hc.ccd` | re-extract from the archive.org zip |
| `saves/CMOS_HDD.bin` | `disk/CMOS.DAT` in the TownsOS release |
| the U2 save disks | a fresh blank 1232 KB image |


### What happened, precisely

The pixel writer in `ENCHANT.EXP` was cited as being at `0xf3e04` and as being
the 29-byte sequence

```
8b 44 24 0c c1 e0 07 05 90 7e 07 00 8b 4c 24 08 d1 e1 03 c8
66 8b 44 24 04 66 89 01 c3
```

That sequence **does not exist in the image**. It is a paraphrase written in an
earlier session, and two High C compilers were calibrated against it. The real
function is at `0xf3e24`, is six instructions rather than seven, and keeps the
base in the store's displacement where the paraphrase put it in an `add`.
Because both sides of the "comparison" were the same paraphrase, the result was
meaningless and was reported twice as a real finding.

The cost: two wrong verdicts in `docs/`, several hours of probe design aimed at
a sequence that does not exist, and a compiler nearly ruled out on fabricated
evidence. One `xxd` and one `ndisasm` would have prevented all of it.

### The rule

**Any byte sequence, address, instruction, size or count that enters a doc, a
report or a comparison must come from a command run in this session, and the
command goes in the write-up.** Not from an earlier doc, not from a summary, not
from a plausible reconstruction, not from memory of what the disassembly
"looked like".

Concretely:

- **Quote the command, not just the bytes.** `xxd -s 0xf3e24 -l 32 ENCHANT.EXP`
  followed by its actual output. A sequence with no command beside it is
  indistinguishable from an invented one, which is exactly the failure here.
- **Re-derive before re-using.** An earlier doc is evidence that someone once
  measured something, not the measurement itself. If a number matters to a new
  argument, re-run it. Docs go stale, addresses shift, and transcriptions
  acquire errors.
- **A paraphrase is not data.** If you find yourself writing "equivalent to" or
  "the same shape as" and comparing against it, stop: either read the image or
  say the comparison was not made. Paraphrasing is legitimate in prose for a
  human reader and never legitimate as the expected value in a test.
- **Trust the transcript over the recollection.** The compiler banner, the error
  message, the `DIR` listing and the exit code are all in captured output
  somewhere. Read that file. Do not reconstruct it.
- **When you catch yourself uncertain, measure instead of qualifying.** "I
  believe the sequence is" is a signal to run the command, not to add a hedge.

### What memory is for

Use it to know **what to check and where to look**, which is genuinely useful and
is what the `docs/` index is for. Never to supply the value itself.

"The pixel writer has a scaled-index store, so search for the `0x77e90`
immediate" is a memory of *how to find it*. That is fine and it worked: the
immediate occurs exactly once, in the leaf store at `0xf3e38`.

"The pixel writer is 29 bytes starting `8b 44 24 0c`" is a memory of *the
answer*. That is the failure mode this rule exists to stop.

## Hard-won technical constraints

These will bite immediately if forgotten.

### The MP/P3 loaders

The `.EXP` files are Phar Lap DOS extender executables in two flavours:

- `DARKNESS`, `ENCHANT`, `EXODUS`: signature **`MP`**, flat image. The header is
  the documented 30-byte layout and `lastPage`/`blocks` reproduce the exact file
  size for all three. Entry point in `EIP` at offset `0x14`.
- `TMENU`: signature **`P3`**, extended format, 384-byte header.

**The payload does not disassemble as one flat 32-bit stream.** Linear `ndisasm`
from `0x75f` produced 501,275 lines, a large fraction misaligned, and generated
false "port writes" and false "shared code" blocks. This is why every
byte-scanning palette probe failed. Do not trust any figure derived from linear
disassembly of this binary. Anything that needs real code/data separation
requires a proper `MP`/`P3` loader first.

### Symbols exist

`TMENU.EXP` contains a **`SYM1`** symbol table at file offset `0x33a92`, with
thousands of records including `EGB_palette`, `EGB_color`, `EGB_graph`,
`Palette_data1`, `Common_screen_data1` through `11`, and `Color0` / `Color2` /
`Color14`. It is parsed, by `tools/sym1.js`: 1,725 records, and the walk consumes
the blob exactly.

The record is `[u8 namelen][name bytes][u32 value][u16 type]`, six bytes after the
name, uniform across 1,724 records. The first record, `PROGRAM`, carries six extra
bytes before its value field. The values are 32-bit file offsets into `TMENU`'s load
image, `0x238` to `0x33848`, inside the declared image `0x200` to `0x33892`.

**Two traps were paid for here.** The stride and the field widths are separate
questions, and an exact walk validates only the first: the table parsed exactly with
the value read as a `u16`, printed a 16-bit range, invented a "reserved field", and
was wrong in every value it reported. `tools/verify.js` now asserts the range and that
it needs 32 bits. Full record in `docs/palette.md` 6.8 and 6.12.

**The names do not transfer to the game.** `DARKNESS`, `ENCHANT`, `EXODUS` and
`UT3DEMO` carry no `SYM1`, and probing `TMENU`'s bytes against `ENCHANT` was tried and
is a measured negative, because the two are different compilers' builds of different
programs that merely call the same library. See `docs/name-propagation.md`.

So the symbols give you the **Fujitsu library layer by name**, not the game's own
functions. That is still valuable, because the graphics and sound routines the games
call are Fujitsu's. It does not give you the games' internal variables.

### Colour

The artwork is 4-bit palette indices. The palette is **not** in any asset file
and no `PAL`/`palette` string appears in `ENCHANT.EXP`. All current output is
greyscale, and that is a documented limitation, not an oversight. The `SYM1`
symbols above are the most promising route in.

## Environment

### The emulator is available now

`tools/vendor.sh` fetches Tsugaru and the FreeTowns ROMs into `vendor/`. Both are
gitignored. `tools/debug-session.sh` drives the machine headless, which works over
SSH and needs no monitor: Tsugaru requires a window, so the script reuses the
desktop session's Xwayland display and auth file. If a future session finds
`DISPLAY` unset, look at how that script finds it rather than concluding the
emulator is unusable.

This changes what is practical. Runtime inspection is now cheap, so before
attempting static analysis of a value that only exists at runtime, check whether
`PRI PALETTE`, `PRI CRTC`, `BRKON MEMW` or a breakpoint answers it faster. The
palette cost five failed static probes and would have been one console command.

### Interactive access

`tools/container-run.sh` runs Tsugaru inside podman with Xvfb, x11vnc, noVNC
and a supervisor, so the game is playable from any browser at
`http://<host>:6080/vnc.html` and drivable over HTTP at `http://<host>:8080/api`.
This is how to reach the running game when there is no local display, which is
the normal case over SSH.

Three host specifics the script encodes because each failed silently first time:
project containers run **rootless** (`podman`, no sudo; the system services such as
litellm and traefik live under `sudo podman` in a separate store, and the two stores
cannot see each other's images), SELinux is enforcing so bind mounts need `:z` or the
container gets `Permission denied` on every host directory, and the Tsugaru
window is titled `FM Towns Emulator - TSUGARU` with a 640x496 geometry rather
than 640x480, so matching on 640x480 finds nothing.

### Reading the screen: vision when the question is visual, census when it is not

**You can look at the screen.** `qwen3.8-flash-next` reads images and it works. Use it when the
question is what a thing *looks like*: which picture a screen shows, whether a decoded asset is a
picture or static, whether text is drawn by code or baked into an image. Use the census below when the
question is a measurement, because a model describing colours is not a colour count.

Call it through litellm on the local provider. The endpoint, key and model ids are in
`~/.pi/agent/models.json` under `providers.local`:

```
baseUrl  https://ai.lan:8284/v1
api      openai-completions
auth     Bearer litellm
```

Three models accept `input: ["text", "image"]`, and **only one of them works**:

| model id | state |
|---|---|
| `qwen3.8-flash-next` | **works.** Use this one. |
| `gemini-flash` | 500. Google reports `RESOURCE_EXHAUSTED`, prepayment credits depleted. Not a tooling fault and not fixed by retrying. |
| `qwen3.8-27b-dense` | 500, `OpenAIException - Connection error`. Backend not reachable. |

The image goes in an `image_url` part as a data URL:

```python
{"type": "image_url", "image_url": {"url": "data:image/png;base64," + b64}}
```

**Grab the live screen from the container**, because `import` needs the display that only exists there:

```
podman exec fmtowns sh -c 'DISPLAY=:99 import -window root /tmp/s.png'
podman cp fmtowns:/tmp/s.png /var/tmp/mpwork/s.png
```

Two cautions from the session that established this. A model asked to read a **corrupt decode** will
describe it confidently: `extra.png` came back as "noise, specifically digital or analog signal
interference" when the truth was that the decoder is wrong, not the disc. And a model asked about a
**screenshot** read the skull and the words `Thou art dead!` correctly, which no amount of greyscale
dumping had managed. The difference is that the second image was real.

### Reading the screen without vision

`GET /api/screen?mode=stats` returns a colour census, which answers "is this
screen in colour yet" without any image interpretation. `mode=ascii` gives a
luminance ramp for layout and `mode=text` a character grid for reading menus and
dialogue.

The palette command needs the `PRI` prefix: `PRI PALETTE`. Bare `PALETTE`
returns "Do what?".

- Host `ai.lan`, Bazzite. Check `hostname` before sysadmin work.
- **Two languages, divided by job.** Node for the gates (`verify.js`, `checkall.js`),
  which must stay dependency-free so a stranger can check the findings. Python for
  analysis tools, because instruction decoding needs Capstone and Capstone's only
  binding with operand detail is Python. A venv is required for decoding: run
  `./tools/decode-setup.sh` once, and `./tools/decode-setup.sh --check` to confirm.
  It is gitignored at `tools/.venv`. `tools/decode-requirements.txt` is the version
  source of truth.
- **`ndisasm` is no longer the decoder for anything that asks a question about
  operands.** It remains for raw bytes and byte offsets. See `docs/tooling-policy.md`.
- Java 25 present (Ghidra would run). No Ghidra, Reko, or radare2 installed.
- Scratch files go to `/var/tmp`, **never** `/tmp`.
- The game itself runs in Tsugaru via `run.sh`. Not required for extraction.

## Repository conventions

### Ground truth over guessing

`ENCHANT.EXP` embeds its own asset paths (`Q:\GRAPH\MAP2_1.TIF`,
`A:\ROSTER1.UT2`). When a file list is needed, **read it out of the binary**
rather than inferring from filenames. This is how the U2 asset set was confirmed.

### Evidence lives in docs/

New investigation, new section. Format per entry:

```
**Tried:** what was attempted and why
**Measured:** the numbers, not a summary
**Verdict:** POSITIVE / NEGATIVE / OPEN, and what it rules out
```

Corrections go in as corrections. Superseded claims get marked as superseded
rather than quietly deleted, because the history of being wrong is useful.

## Copyrighted material never enters git

This is a standing rule with no exceptions and no judgement call.

**What is copyrighted here:** the disc images, the floppy image, the executables,
all artwork, all audio, the ROM sets, and anything extracted from them. The game
is commercial software still in copyright. This repository distributes
**scripts, tests and documentation only**.

**Why it is absolute:** committing a copyrighted file is not recoverable. Git
history is permanent, a force-push does not un-distribute what has already been
cloned, and the mistake cannot be undone by the person who made it. The cost of
an over-broad ignore rule is that someone un-ignores one line. The cost of
committing a retail game is a distributed copyright violation. Bias hard toward
ignoring.

Rules that follow:

- Everything copyrighted is in `.gitignore`. If you find something copyrighted
  that is not covered, add the rule **before** doing anything else.
- Never `git add -f`. The force flag exists to defeat the only protection there
  is. If a file is ignored and you think it should be tracked, that is a
  conversation, not an override.
- Extracted output is copyrighted too. `extracted/`, `analysis/` and anything
  derivable from the disc stays out. The extraction **code** is committed, the
  extraction **product** is not.
- Do not paste game text, dialogue tables, or long strings from the binaries
  into documentation. Schema strings and format names (`SHAPE=%d`, `EGB_palette`)
  are protocol and are fine. Dialogue and story text are not.
- Extension matching is a safety net, not a guarantee. Gitignore patterns are
  case-sensitive, so mixed-case extensions slip through naive rules. The file
  has a case-insensitive block for this reason. Test any new rule against
  capitalised and mixed-case variants before trusting it.
- Before committing, run `git status --ignored` and confirm the expected files
  are among the ignored set rather than the tracked set.
- A verification harness asserting the presence of copyrighted files is fine.
  The harness must read them from disk and must not bundle them.

The test is not "is this file small enough to sneak in". The test is "would a
stranger cloning this repository receive a copy of the game".

### Reproducibility is the hard requirement

Every result in this repository must be reproducible by a stranger who has done
nothing but download the `.zip` from the Internet Archive. That is the standard.
Not "it worked on my machine", not "the author has the disc already".

Concretely, that person must be able to:

1. Download
   `FM-Towns CD/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[+UserDisk].zip` from
   `archive.org/details/fmtownscdcollection`.
2. Unpack it into this directory, producing the five files listed in
   `README.md` section 1.
3. Run `node tools/verify.js` and get the same pass/fail verdict as everyone
   else.
4. Run the extractors and get byte-identical output, verified by checksums.

So every non-obvious fact needs all three of: a script that derives it, a test
that confirms it, and a paragraph that explains it.

- **No result may depend on unshared state.** Not a temp file, not a cached
dump, not something produced in an earlier conversation. If a script needs an
intermediate, it builds it from the disc each run.
- **No result may depend on manual steps.** If a human had to hand-edit a byte,
  that edit must become code.
- **Every output is checksummed and asserted.** `tools/verify.js` records expected
  SHA-256 sums for every extraction, and prefers assertions to prose: "`MAP2_1` is
  33,280 bytes" is a claim, `assert(size === 33280)` is a fact that stays true or
  fails loudly. It also checks source file sizes, MD5 sums and the ISO volume
  label, so a different rip is detected rather than silently producing different
  results.

If something cannot yet be reproduced from the zip alone, it is not a finding.
Write it in `docs/` as OPEN and say what is missing.

### Scripts

- Every extraction step lives in `tools/` and is committed. Nothing is done by
  ad-hoc one-liners that get thrown away.
- Shared format logic goes in `tools/cd.js`. Do not duplicate a decoder.
- Use `writePNG` / `writeWAV` / the decoders from `cd.js`.
- **Never parse disassembler text to answer a question about an operand.** Call the
  decoder, which returns instruction objects with operand types. Thirteen
  `ndisasm` call sites once parsed text with four different conventions, and every
  bug they produced was the same defect: a detector answering a slightly different
  question than the one asked. The full reasoning is in `docs/tooling-policy.md`.
- Scripts must print what they did, including counts and any mismatch.
- Write derived artefacts to `extracted/` or `analysis/`, both gitignored.
  Never commit game data, ROMs, or extracted assets.
- `tools/verify.js` is the entry point for anyone checking this work. It must
  stay dependency-free and must not require arguments.

### Editing files

- Never edit a file with a script. Use the `edit` tool. A `replace()` that
  silently no-ops and a successful replace are indistinguishable in output.
- If a script must write a file, read the changed text back to verify. Not a
  line count, not `grep -c` on a common word.
- Check `node --check` after editing any JS.

### Git

- Commit in logical units. `git init` is already done, branch `main`.
- Do not commit the disc images, the `.hdm`, `emulator/`, `saves/`,
  `extracted/`, or `analysis/`.
- Do not push anywhere without being asked.

### Style

- No em-dashes, no semicolons, no bold-at-start-of-bullet, no emojis.
- Verify with a grep for em-dashes and semicolons before committing docs.

## Known-good findings

Do not re-derive these. Everything here is backed by a measurement in
`docs/`.

| Fact | Confidence |
|---|---|
| FM Towns 2HD 1,261,568-byte floppy, Towns OS, `IPL4` boot | High |
| 8-track disc: track 1 MODE1 data, tracks 2-8 CD-DA | High |
| Use `.ccd` not `.cue` (PREGAP ambiguity, documented by Tsugaru's author) | High |
| Written in C, MetaWare High C, Phar Lap extender | High |
| The FM Towns High C 1.73 kit **compiles** in Tsugaru. `docs/compiling-on-fm-towns.md` is the recipe | High |
| High C 1.73 emits the game's `idiv` and its naive `sar`/`sub` halving chain. 2.31 does not | High |
| `DARKNESS`/`ENCHANT`/`EXODUS` are `MP` flat images, header parses exactly | High |
| `TMENU.EXP` is `P3` extended format, not `MP` | High |
| `ENEMY2` = 65 tiles of 32x32 4bpp packed at 512 B | High |
| `PLAYER` = 128 tiles of 16x16, 1 byte per pixel | High |
| `DUNMON1/2/3` = 1,664 / 416 / 104 tiles of 16x16 packed | High |
| Title art is 4bpp packed, 2 pixels per byte | High |
| `MAP2_1/2/3` is ASCII character data, not a bitmap | High |
| `.SND` = 32-byte header, payload to EOF, length at offset 12 | High |
| `.EUP` = EUPHONY voice tables, no colour or audio payload | High |
| `UT3/*.MP3` and `*.DG3` are map data, not MPEG audio | High |
| No palette in any asset, no `PAL` string in `ENCHANT.EXP` | High |
| The art uses palette indices 0-7 only, and those eight colours are confirmed | High |
| `TMENU.EXP` has a `SYM1` symbol table naming the Fujitsu layer | High (parsed, 1,725 records) |
| The four game binaries carry no `SYM1` | High |
| Every file `ENCHANT.EXP` opens is extracted (23 graphics, 14 sounds) | High |
| A 1232 KB `-GENFD` disk is a real FM Towns disk. The other sizes are IBM PC | High |
| Ultima I and III write save files to floppy in Tsugaru | High |
| Ultima II saves to a formatted disk. Saves work end to end | High |
| U1 save survives shutdown and reloads, confirmed by playing the character | High |
| U2 writes `ROSTER1.UT2` (3,657 B) and `WORLD1.UT2` (68,096 B) | High |
| A blank generated 1232 KB disk is a valid save disk. It was never the problem | High |

## Platform versus U2-specific

Before writing a decoder, decide which of these it is. Marking something
platform-wide when it is U2-only produces over-general code that breaks on the
next title. Marking something U2-only when it is platform-wide means solving
the same problem repeatedly.

This list exists to keep the tooling honest, not to justify extra work. Nothing
here is a reason to defer a U2 extraction.

Almost certainly the platform, so write it generically and expect it everywhere:

- The `MP`/`P3` containers and the High C toolchain. Every Origins FM Towns
  title of this era is likely built the same way.
- TIFF-with-lying-headers as the artwork container. The pattern of a stale or
  bogus geometry tag appears across all three games here.
- 4bpp art in two layouts: packed (2 px per byte) for pictures, and the
  sheet/TIFF-strip convention for sprites.
- `.SND` and `.EUP` audio. `.EUP` is the Fujitsu EUPHONY driver layer, which is
  a platform component rather than anything Origins wrote.
- CD audio for music, and the `Q:\` / `A:\` drive conventions.
- Assets named after their content (`MAP2_1`, `PLAYER`, `CHEST`) and referenced
  by literal path strings embedded in the executable. That referencing habit is
  what makes this tractable and it likely repeats across titles.

U2-specific. Do not try to generalise these, but do document them:

- The exact asset set, the roster format (`RACE=%c`, `SKIN=%d`, `SPID=%d`), the
  U2 inventory list (`ANKH`, `RED_GEM`, `TRI_LITHIUM`), and the `WORLD1-4.UT2`
  save layout.
- `MAP2_1/2/3` as ASCII character maps. U3 uses fixed-size binary `.MP3`
  instead, so the U2 map format is *not* the platform map format.
- The 65-tile `ENEMY2` bank size.

Unknown either way, so do not assume: whether the palette is per-game data or a
shared Fujitsu table. This matters directly for U2. If `EGB_palette` is a
library routine reading a per-game table, then U2 has its own palette to find
and the search is on U2's data. If it is one shared table, U2 gets its colours
for free from a table that is not U2's. Either way U2 ends up in colour, but
the search is different, so resolve this before hunting.

## Open problems

**`docs/plan.md` is the only tracker. Do not list work here.** Every item there
carries a State and an Autonomy, `node tools/plancheck.js --todo` reports what
is startable now, and `node tools/checkall.js` fails if an item loses its
metadata. A second list in this file was 80 percent duplicate and 20 percent the
only record of a live question, which is the worst of both.

What this file should tell you that the plan does not: **the cheapest things are
already tried.** Read `docs/` before proposing an investigation. Five palette
approaches are documented as failed, and `## What not to do` below is a list of
probes that cost a session each.

## What not to do

- **A decompiler is now allowed, with conditions.** The old rule banned Ghidra,
  Reko and IDA outright because the base was in doubt. That has changed: the base
  is proved to be 0, the `MP` header declares `relocCount = 0` so nothing needs
  fixups, and the header arithmetic reproduces the file size exactly. A test import
  at base 0 agreed with this project's own tooling on all seven established
  function addresses and on the `0xef4bb` false positive. See
  `docs/ghidra-viability.md`.

  **The condition: decompile only from an entry point already established by
  `tools/funcs.js` or `tools/cfgwalk.js`, and verify any address against
  `node tools/cfgwalk.js --check <addr>` before trusting it.** The failure mode
  the old rule guarded against was silent systematic error. That is now detectable
  in about two seconds per address, so the blanket ban is no longer the right
  instrument.

  **It under-decodes badly without seeds**: 25,728 instructions against this
  project's 79,470 over the same bytes, because a raw import with no entry point
  seeds only from what it can find by scanning. Use it to read code, not to find
  it.
- Reko still has no Phar Lap loader, and there is a known upstream issue reporting
  exactly this failure on FM Towns `.EXP` files. Do not reach for Reko.
- Do not convert the disc to ISO or bincue. Audio track alignment is lost.
- Do not treat greyscale output as a bug. Its cause is documented.
- Ultima II saves work. A formatted FM Towns floppy is fine and was never the
  problem. See `docs/` 8.5. What went wrong for most of one session was
  that tests were run against disks whose contents had not been checked, and
  negative results were built on top of each other without re-verifying the
  input.
- Never trust a disk-state test without first dumping the disk. Confirm what is
  actually on it with the root directory and FAT before drawing any conclusion
  from what a game said. A stale copy, a partial save or the wrong slot will
  look exactly like an emulator bug.
- Do not try MAME as a way around Ultima II problems. It works as an emulator
  (`tools/mame-run.sh`) but its `fmtowns` driver is `status="preliminary"` and
  the pointer dies at the CD launcher, so the games cannot be reached. It also
  needs a real Fujitsu ROM dump, since the FreeTOWNS clean-room ROMs all fail
  CRC verification. See `docs/` 8.4.
- Do not use the FreeTOWNS ROMs with MAME. All four CRC32s mismatch, and
  `FMT_DIC.ROM` is byte-identical to `FMT_F20.ROM`, which is what a substitute
  build looks like rather than dumped silicon.
- Do not use `-GENFD` with 640, 720 or 1440 and expect an FM Towns disk. Only
  1232 produces `IPL4` with 1024-byte sectors. The other three are IBM PC
  formats. The Tsugaru GUI offers the same four and produces identical bytes.
- Do not repeat a failed probe listed in `docs/` without a new method.
