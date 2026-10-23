# What the live session measured

Six savestates taken during play, plus live memory reads over the emulator console. This page records what
the measurements establish, what they correct, and the one thing that failed.

**Everything here is from a running game, not from the executable.** It is the first runtime evidence this
project has.

## The console is a better tool than the savestates

`STA` and `MD` were available the whole time and were never used. Both are documented in the Tsugaru help and
both answer questions that three sessions of savestate searching failed to.

```
STA             CS:EIP, and every segment register with its linear base
MD 14:dfc78     memory dump at DS-relative offset
FIND 24         find a byte sequence in RAM and VRAM
SAVESTATE path  the state file
PAU / RUN       freeze and resume, which makes a sample stable
```

**`PAU` before a read is the important one.** Without it the VM keeps running and every sample differs, which
is why the first attempts to find a value in a state produced zero matches.

## Segment registers, finally

Read live from `STA`:

| register | selector | linear base |
|---|---|---|
| CS | `000C` | `0x400000` |
| CS | `0110` | `0x19EF4` |
| **DS** | **`0014`** | **`0x400000`** |
| ES | `0014` | `0x400000` |

**The game runs in two code segments**, `000C` and `0110`, and switches between them sample to sample. That
is the segmented behaviour `addressing-limits.md` hypothesised and could not confirm.

**Flat addresses in `ENCHANT.EXP` are DS-relative.** `MAP` at `0xcdf57` is not at linear `0xcdf57`. This
explains why the map buffer "appeared nowhere in the executable" as an absolute address.

## Movement is one unit per step

Two states, one known action apart:

```
play3  PLAYER_X=36  PLAYER_Y=24
play4  PLAYER_X=35  PLAYER_Y=24     after exactly one west step
```

**X decrements by one per west step, Y is unchanged.** Movement is 1:1.

**This corrects an earlier reading in this session.** A previous pair showed X and Y both falling by 5 after
ten steps, which was read as five diagonal moves. There are no diagonal moves in Ultima II. The ten-step
figure and the one-step figure do not agree, and the one-step figure is the trustworthy one because the
action is known exactly.

## Food is not consumed per step

```
play3  FOOD=235
play4  FOOD=235     after one step
```

**No change.** `the-tick.md` searched the executable for a per-move food decrement and found only thresholds,
a spend path and a display. The runtime agrees: **food does not tick with movement.**

That is a negative, and it closes the question the static search opened. Whatever consumes food, it is not
the move.

## The RNG is the documented LCG

Sampled repeatedly while the VM ran, consecutive values sit a small constant number of steps apart on the
`0x41c64e6d` / `0x3039` chain:

```
0x9ccb1638 -> 0x2c91b8bd   n=21
0x2c91b8bd -> 0xa75928ae   n=21
0xa75928ae -> 0x93340a0c   n=18
0x93340a0c -> 0x12eedb41   n=21
```

**`rng-helpers.md` is confirmed at runtime**, including the exact multiplier and increment. An earlier read
of a single pair appeared not to match, because the VM advanced between the two samples.

## A monster cast and moved in one turn

Observed by the player directly, and captured in `play5.state`:

```
HP    400 -> 400     the magic missile did no damage
EXP   37810 -> 37750  a fall of 60, unexplained
```

**HP unchanged means the missile missed, or 400 HP absorbed it without a visible change.** The fall in
`EXPERIENCE` is not a combat gain and has no explanation yet. Recorded as an anomaly.

## The FM Towns build has no turn timeout

**Do not use `Z` to pause during a measured fight.** `Z` is the game's pause, and unpausing resolves the
pending turn. In a fight that means a monster acts, or a spell lands, the moment the pause is released.

That behaviour was mistaken for a bug in this project's own tooling first: a `PAU` and `RUN` cycle over the
emulator console appeared to cause an extra turn. It did not. The game was already paused, and resuming the
emulator resolved the game's pending turn.

**The platform note that matters:** the original 1982 release ends a turn on a real-time timeout. This build
appears not to, so a turn waits indefinitely for input, and any pause and resume hands it a decision.

Two consequences for measurement:

- **Read memory without pausing the VM.** A single `MD` is one command and does not disturb the game.
- **Never toggle `Z` mid-fight** if a turn is being measured.

## What failed: mapping flat addresses into the state file

**The savestate is not a flat memory image.** Two anchors, each verified independently:

| value | flat address | state offset | implied base |
|---|---|---|---|
| character record, `HFMA` | `0xcde7a` | `0x36b32c` | `0x29d4b2` |
| RNG, while paused | `0xdfc78` | `0x35912a` | `0x2794b2` |

**The two bases differ by `0x24000`**, and neither base works for the other region. So the file stores
memory in at least two regions at different offsets, and no single base maps flat addresses into it.

**Four wrong answers were produced before this was accepted**, all from searching for a value and treating the
first byte match as the base:

- an 8-byte match on `PLAYER_X`/`PLAYER_Y` gave a base of `0x24bfcf`, which put `HP` and `FOOD` at nonsense
- that base was then used to read `HP` as 400 and `MAGIC` as 400, which was read as a contradiction when the
  values were simply both 400
- the RNG read as ASCII `CCcC` because it was read at the wrong offset
- an exact RNG byte search returned zero hits because the VM had advanced between the save and the read

**The lesson is the same one this project keeps relearning:** a single match is not a base. Two independent
anchors are needed, and here two anchors gave two different answers, which is the finding.

## What the state files are still good for

The record fields resolve correctly at delta `0x29d4b2`, verified on four independent values:

```
HFMA at base+0xcde7a      RACE, PROFESSION, SEX
base+0xcde91 = 235        FOOD
base+0xcdf6b = 34         PLAYER_X
base+0xcdf6f = 23         PLAYER_Y
```

So **diffing the character record between states works**, which is how the movement and food results above
were obtained. Diffing the whole file does not work, because 93,482 bytes differ between two adjacent states
and almost all of it is VRAM, timers and regions at other offsets.

## Files

`saves/play1.state` through `play5.state`, and `saves/rngprobe.state`, all 7,607,281 bytes.

| state | what it is |
|---|---|
| `play1` | standing still in the world, before any movement |
| `play2` | after ten steps, direction mix unrecorded |
| `play3` | standing still, baseline for the single-step test |
| `play4` | after exactly one west step |
| `play5` | after a monster cast a magic missile and moved |
| `rngprobe` | taken paused, for the RNG search |

## What is still open

- **Where food is consumed.** Not on a move. The next test is food across a different action.
- **The `EXPERIENCE` fall of 60.** No explanation.
- **The state file's region layout.** Two bases found, relationship unknown.
- **Monster records.** The object array was not located, so "does a monster take a turn per player turn" is
  an observation rather than a measurement.

---

**[The tick](the-tick.md)** **[RNG helpers](rng-helpers.md)** **[Savestate session](savestate-session.md)** **[Plan](plan.md)**
