# The top region is loaded, and mirrored in the savestate

> **CORRECTION: the top region is loaded, but live memory is not mirrored.** Measured in segment
> `000C` while the game ran, image offset `o` sits at `000C:(o - 0x200)` at every offset probed, from
> `0x200` to `0x10538E`, byte-identical to `ENCHANT.EXP`, including above `0xd0000` and in the tail
> this page calls unaccounted for. "Fully loaded" is therefore right and "in reverse block order in
> memory" is wrong. What the `0x4392d2 - o` relation measures is not established. It may be how the
> savestate **container** stores those bytes, which is a different question, and the plan now carries
> it. The error looked convincing because the probe searched the state file and never read a live
> address, so a storage order was read as an address order.
>
> The live reads are in "[The live reads](#the-live-reads-which-contradict-the-memory-layout)" below.

This corrects [overlay-test.md](overlay-test.md), which concluded that everything above
`0x0d0000` is never loaded. **That was wrong**, and the two-state test it rested on was
measuring the wrong thing.

## What went wrong

`tools/relocate.js` probed each region of the image for its runtime address using 512-byte
windows at aligned offsets. For the top region it reported `NOT FOUND`.

The region *is* in memory. The probe failed because **the state file does not store the top region
contiguously**. Its addresses fall as the image offset rises.

## The mirror

Probing every `0x1000` of image offset above `0xd0000` gives this:

| image offset | implied base |
|---|---|
| `0x0d0000` | `0x2992d2` |
| `0x0d1000` | `0x2972d2` |
| `0x0d2000` | `0x2952d2` |
| ... | ... |
| `0x105000` | `0x22f2d2` |

The base decreases by exactly **`0x2000`** for every **`0x1000`** of image offset.

Solving that gives the state address directly:

```
stateAddress(o) = 0x4392d2 - o
```

**Verified at five points**, all exact:

| image offset | state address | match |
|---|---|---|
| `0xd0000` | `0x3692d2` | yes |
| `0xe7000` | `0x3522d2` | yes |
| `0xf7000` | `0x3422d2` | yes |
| `0x100000` | `0x3392d2` | yes |
| `0x105000` | `0x3342d2` | yes |

So the top 220 KB is found at state-file addresses that fall as the image offset rises. Read that
as a property of the state file, not of memory: the live reads below show the running image
contiguous.

**This is why every contiguous-base assumption failed when probing the states.**
`0x762d2 + o` is correct below `0xd0000` and wrong above it **in the state file**.

## Correcting the second error too

My first attempt at the formula used `0x2f92d2 - o`, which matched nothing, because I
dropped the `+o` term when combining `o + base(o)`. Recorded because it is the same class of
mistake as everything else on this project: an arithmetic slip inside a plausible-looking
derivation.

## What the mirrored region contains

At the mirrored addresses, **code is present**:

| known address | at `0x4392d2 - o` |
|---|---|
| `0xe4086` switch table | state `0x35524c` |
| `0xd8f84` 170-entry table | state `0x36034e` |
| `0xe6e90` text renderer | state `0x352442` |

The bytes at those state addresses are not identical to the file's. The table quoted below as "file"
did not reproduce in this session, so it is marked and replaced with what the commands return:

```
$ xxd -s 0xd8f84 -l 16 ENCHANT.EXP
000d8f84: 28b9 0000 68b9 0000 9cb9 0000 00ba 0000  (...h...........

$ MD 000C:D8D84          (image 0xd8f84, +0x200)
000C:000D8D84 28 B9 00 00 68 B9 00 00 9C B9 00 00 00 BA 00 00|(   h

state 0x36034e: d8 c9 00 00   1c ca 00 00   64 ca 00 00   9c ca 00 00
```

**Live memory holds the file's values exactly**, so the game does not rewrite this table. Both
windows are dense ascending dword lists, which is why the state window looked like the same table
with different values. The state offsets themselves are the part now in question, not the content.
The state row is quoted from the earlier probe and was **not** re-derived in this session.

## Data in this region is cleared, code is not

Spot checks inside a `0x1000` block show the file's `0xEB` glyph strings zeroed at runtime
while the surrounding structure survives. That is consistent with
[runtime-image.md](runtime-image.md): data is cleared on startup, code is not.

## What this changes

**The image is fully loaded.** Nothing is dead weight. The earlier statement that the top
220 KB is "never mapped" was wrong.

**The addressing limit for the top region is solved for the state file.** A scan of a savestate will
not find a reference above `0xd0000` at `0x762d2 + o`, because the file and the image differ there.
To locate anything in that region in a state, apply `0x4392d2 - o`. For **live memory** the mapping
is the flat one, `000C:(o - 0x200)`, at every offset probed.

## The live reads, which contradict the memory layout

Probed directly against the running game with `MD`, comparing each read with `ENCHANT.EXP` at the
same image offset. The game was in play, not on a menu, and every read is 16 bytes.

| image offset | read at | result |
|---|---|---|
| `0x200` | `000C:0` | match, `KYB_init` |
| `0xD0000` | `000C:CFE00` | match, zero fill in both |
| `0xD1000` | `000C:D0E00` | match |
| `0xD8F84` | `000C:D8D84` | match |
| `0xE4086` | `000C:E3E86` | match |
| `0xE6E90` | `000C:E6C90` | match |
| `0x104AA4` | `000C:1048A4` | match |
| `0x10538E` | `000C:10518E` | match |

Eight sites are listed. The same relation held at every other offset read in the session, and the one
read that returned `FF` fill, at image `0x10538E`, matched on the immediate re-read. That is the
transient fill that [live-fieldmap.md](live-fieldmap.md) records for regions being rewritten, and it is
why the other reads were taken more than once.

`0x104AA4` is inside the range this page calls unaccounted for and `0x10538E` is at the very top of the
image.

**The stronger evidence is the control-flow capture.** A boot-to-game capture has 23,987 distinct
executed instructions in segment `000C` at image offsets from `0x209` to `0x10538E`, and its
fall-through edges satisfy `preEIP + preLen == src` on 99.6 percent of the segment's 5,746
fall-through edges. Executed code above `0xd0000` is ordinary flat code:

```
python3 tools/cfgprobe.py query saves/analysis/entry-boot-tool.txt --image 0x10538e
image 0x10538E  ->  000C:10518E
  executed as an instruction start: YES
  reached as a branch destination: YES
```

That is a `ret` at the last instruction of a routine that ran 287 times. See
[entry-point-question.md](entry-point-question.md) for the capture that produced it.

**Still open, and now in the plan:** where `0x4392d2 - o` comes from and what it describes. This page
established that the region is loaded, which stands. It did not establish a memory layout, and the
probes above say there is not one.

**The static analysis is unaffected.** Reading a function at file offset `0xe6e90` is still
correct, because the file is the authority for the file. What was wrong was the *runtime*
address, not the file address.

## A thing the mirror does not fix

`0xe4086`, the switch table target from `0xe425e`, reads as **instruction bytes** at the state offset
this page computed for it. Applying the mirror did not reveal a table there.

```
state 0x35524c: 00 8d 14 80  8d 14 50  c1 e2 05  2b d0  ff b2 99 de ...
```

**Live memory tells a different and, so far, unexplained story.** Reading the same image offset
while the game ran returns the file's own bytes, and the state window's first seven bytes appear
nine bytes into them:

```
$ xxd -s 0xe4086 -l 16 ENCHANT.EXP
000e4086: 2e00 006a 02a1 a0ec 0c00 8d14 808d 1450  ...j...........P

$ MD 000C:E3E86            (image offset 0xe4086, +0x200)
000C:000E3E86 2E 00 00 6A 02 A1 A0 EC 0C 00 8D 14 80 8D 14 50|.  j           P

state 0x35524c: 00 8d 14 80  8d 14 50  c1 e2 05  2b d0  ff b2 99 de
                 ^^-- the live window's bytes 9 to 15 --^^
```

So the state window begins nine bytes later in the same content. That is a correspondence error of
a few bytes, not a mirror, and it is **unverified** which end is wrong. What this does establish is
that the live bytes at `0xe4086` are the file's, so the game is not rewriting them on the way in.
Whether it is a real switch table is still open, recorded in [core-routines.md](core-routines.md).

## A limit found later

The constant `0x4392d2` holds across the region when probed every `0x2000`, but **the tail of the
image does not obey it in the state file**. `0x104aa4` does not match at its mirrored state address, and its bytes appear
2,744 bytes away under a different implied constant.

Neither constant covers the `0x104000`-to-end range: 2 of 462 probes at `0x4392d2`, 0 of 462 at
`0x43881a`. So the tail is either loaded under a mapping not yet derived, or relocated per block.

This does not invalidate the mapping for `0xd0000` to about `0x104000`, which is where every
finding on this page was measured. See [indirect-branches.md](indirect-branches.md).

## What is still open

Why the state file stores the top region at falling addresses is not established. The most likely
explanations are a loader that fills a high memory block while walking downward, or a savestate
container that serialises banks in an order unrelated to the address space. **The live probes above
rule out the first as a memory layout**, so the second now leads.

What matters practically is that the state-file mapping is known and cheap to apply, and that live
addresses need the flat one.

---

**[The two-state test](overlay-test.md)** **[The runtime image](runtime-image.md)** **[Addressing limits](addressing-limits.md)** **[Plan](plan.md)**
