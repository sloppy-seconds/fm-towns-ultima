# U2 combat formulas: where they are not

Item 4b. The plan says the reading half is autonomous and the verification needs a fight. **This page
records that the reading half also failed on the first attempt**, and why, so the next try starts elsewhere.

## What the search found

Four approaches, all measured, all negative in a specific way.

### HP is written by six functions, and none of them rolls dice

Every reference to `HP` at `0xcde85` in the image, grouped by owning function:

```
0xe9f0c   1 reference
0xeb354   1 reference
0xec320   1 reference
0xed7f0   2 references
0xef15c   1 reference
0xf1e8c   2 references
```

**Eight references total, in six functions.** None of the six calls `randMod` at `0xe1c5c` or
`randRange` at `0xe3d4c`. Checked by asking `tools/callgraph.js --callees` for each.

So damage is **not computed in the routine that applies it.** Either the amount arrives as an argument, or
combat writes HP somewhere this displacement search does not reach.

### Four of the six are identified and all four are UI or init

| function | identification | why it touches HP |
|---|---|---|
| `0xec320` | character initialisation | writes every field including `HP` and `MHP` |
| `0xed7f0` | status panel | displays `HP` |
| `0xf1e8c` | tile/map interaction | two references, and its comparisons are against `0xdd`, `0xdf`, `0x10`, `0x6c`, which are map cell values |
| `0xeb354` | save and load | persists `HP` |
| `0xe9f0c` | roster load path | restores `HP` |
| `0xef15c` | not identified | one reference, unexplored |

`0xf1e8c` is the one that looked most like combat and is not: comparing a byte against `0xdd` and `0xdf` is
map-cell work, and it calls `0xf22f0`, the language switch.

### No function touching `AGILITY` or `STRENGTH` rolls dice either

Combat needs a character's own stats, so the routine should touch `AGILITY` at `0xcde6a` or `STRENGTH` at
`0xcde66`.

```
functions touching AGILITY:  0xe1ff8 0xe9f0c 0xec320 0xecf17 0xed7f0 0xf0ea4 0xf1474 0xfc4fc
functions touching both:     0xe1ff8 0xe9f0c 0xec320 0xecf17 0xed7f0 0xf0ea4 0xf1474
```

**Seven of the eight are already identified**: init, roster load, publisher credit, status panel, spell
handling, music, and a map-interaction routine. `0xfc4fc` is unidentified and takes two coordinates and
subtracts them, which reads as distance rather than combat.

**None of the eight calls `randMod`.**

### The attack string is data, not code

`\nによる攻撃` at `0xd2e27` disassembles as `add [eax],al` repeated, which is the signature of zero and
padding data, not a function. The string is real and referenced, but its address is inside a data region.
Same for the second copy.

## What this establishes

**U2's combat arithmetic is not reachable from the fields it operates on.** That is the finding, and it is
the same shape as the tick result in [the-tick.md](the-tick.md): a displacement search over the named roster
fields finds every reader and writer, and none of them is the routine that computes the value.

Two readings remain, and they are the same two as for the tick:

1. **Combat works on a copy, not the record.** The record fields named by the format string are persisted
   state. A fight might build a working struct on the stack, roll against that, and write the result back
   once. That would leave the arithmetic invisible to a search for record displacements.
2. **The combat routine is reached indirectly.** There are 144 unresolved indirect branches, dominated by
   `call dword near [0xdfc5c]`. If combat is one of them, no call-graph or displacement search will find it.

## The first damage measurement: one hit of 16

A fight the player did not win in one blow. Sequence as played: the player hit and the monster
was wounded, the monster hit back, then the monster attacked again and the player **parried**,
which is a miss. Nobody died. States taken paused immediately before and after.

| field | before | after | delta |
|---|---|---|---|
| HP | 178 | 162 | **−16** |
| max HP | 400 | 400 | 0 |
| EXP | 12 | 12 | 0 |
| FOOD | 38,770 | 38,740 | **−30** |
| GOLD | 447 | 447 | 0 |
| X / Y | 57 / 18 | 57 / 18 | 0 |
| MAP | 81 | 83 | **+2** |

**The monster landed one hit and it took 16 HP.** The parry took none, so the 16 is a single hit
and not an average.

**The turn accounting corroborates the food measurement.** Two player turns passed and food fell
by 30, which is `2 * 15`. That is independent of the earlier three-step result and it is the
first time the 15 has been observed across a fight rather than a walk. `MAP` rose by 2 over the
same two turns, so `MAP` counts turns and not position.

**What this does not establish, and it is the whole of the formula.**

**One hit cannot tell a constant from a roll**, and the next hit showed it is a roll. See below.

## Damage varies: six samples, and 16 has now appeared twice

A single observation of 16 was not enough to claim a constant, and the following hits confirmed why.
The monster hit again between reads of the same fight:

| HP | delta |
|---|---|
| 178 → 162 | **16** |
| 162 → 150 | **12** |
| 150 → 136 | **14** |
| 122 → 106 | **16** |

and an earlier fight in `combat-observed.md` recorded **5** and **15**. So **six samples, values 5,
12, 14, 15, 16, 16**: only 16 has repeated. Monster damage is a roll, and the spread of the four
hits in this fight is 12 to 16.

**16 appearing twice is the first sign the distribution may not be uniform**, but six samples over
five distinct values is also exactly what a small uniform draw looks like, so nothing is concluded
beyond the observation.

**What the range is, is not determined.** Six points are consistent with a roll around 12 to 16 with
the 5 an outlier from another fight, or with a wider distribution the six missed, or with a value
that scales by something unidentified. The player's own HP fell across these hits and STRENGTH or
the monster's state could also matter. **Do not read 12 to 16 as the range:** the 5 comes from a
different fight and a different monster, and nothing here ties the two together.

So **monster damage is not a constant.** Six samples from two fights over five distinct values. That
rules out a fixed value and is the first thing this page can say about the form without guessing.

## Talking to a monster: the taunt, found

The player used `T` against a monster and moved south. The monster answered **"Eat death Scum!"**
and attacked for **16**, taking HP from 122 to 106.

### It is at `0x61d0`, and the decoding rule is two offsets not one

The phrase is in `ENCHANT.EXP` at **`0x61d0`**, as the first of a run of NPC dialogue lines that
sit in bilingual pairs: an English line encoded with `0xEB` escapes, then the same line in plain
Shift-JIS.

```
0x61d0  eb 44 eb 5a eb 6d 20 eb 5d eb 5e eb 5a eb 6d eb 61 20 eb 52 eb 5c eb 6e eb 66 eb 74
0x61ed  82 ad 82 bd 82 ce 82 ea eb 74 82 d0 82 c6 82 c5 82 c8 82 b5 eb 74
```

`0x61d0` decodes to **`Eat death Scum!`**. The line under it is the Japanese pair,
`くたばれ。ひとでなし。` ("Drop dead. You beast."), which is what let the English be solved: two
encodings of the same sentence, one of which can be read directly.

**The `0xEB` rule that cracked it.** The documented `xx + 1` transform is only one of two:

| payload | transform | range of the result |
|---|---|---|
| `≤ 0x59` | `+ 1` | capitals and the first punctuation block |
| `≥ 0x5a` | `+ 7` | lowercase |
| `0x74` | `!` | the commonest line ending, 21 uses |
| `0x75` | `?` | 8 uses |

Eighteen payload-to-character pairs were collected from three lines whose wording is not in doubt
(`Eat death Scum!`, `A guard says：`, `Pay your taxes!`) and **every one obeys the split, with no
exceptions**. The single `+1` rule failed on all of them the moment a lowercase letter appeared,
which is why six earlier readings of `0xEB` could not decode dialogue.

### What the table gives

The NPC dialogue table runs from about `0x61d0` to `0x6600` and decodes cleanly with the rule above:

| address | line |
|---|---|
| `0x61d0` | `Eat death Scum!` |
| `0x6204` | `A guard says：` |
| `0x622c` | `Pay your taxes!` |
| `0x6258` | `A jester sings：` |
| `0x62dc` | `Will you buy my apples?` |
| `0x634c` | `Ugh, me tough!` |
| `0x63a8` | `Believe!` |
| `0x64b4` | `Good day!` |
| `0x6588` | `chest!` |

**What this establishes.** The taunt is data, it is static, and it was always findable. The failure
was the decoder, not the phrase. Every search that used `+1` alone was searching for the wrong
bytes, which is why plain ASCII, `0xEB`-escaped and case-insensitive scans across all 140 disc files
all returned nothing.

**What is not yet done.** The `0x74`/`0x75` punctuation mapping is derived from how often each ends a
line, not from the code that stores them, and other punctuation (`,`, `.`, `：`) is still
unaccounted for, which is why two lines render with a stray byte. The rule above is written into
`tools/` so it can be reused, and the remaining punctuation is a smaller version of the same
problem.

**The turn accounting held again.** Two passes cost 30 food and moved `MAP` from 84 to 86, both
consistent with every earlier read.

### What the failed searches established, kept as a record

Paul rejected the earlier claim that the phrase does not exist, and was right. A 1990 Origins port
does not generate dialogue, so if the text is on screen it is bytes somewhere. Every search below
failed to *find* it rather than showing it was absent, and the earlier wording said the latter.

**Why the searches were unsound.** The `0xEB` encoding was only verified for payloads below `0x60`,
the range the `STRENGTH`-style labels use. With that rule alone, real game strings decode as
`_llilu`, `msmn_g` and `l_[^su`. A search for an `0xEB` phrase using it was searching for the wrong
bytes, so a negative from such a search carried no information.

**What the plain-ASCII half did establish, and it stands:**

| scope | searched for | result |
|---|---|---|
| `ENCHANT.EXP` | `Eat`/`death`/`scum` in all cases | none |
| `TBIOS.BIN` | the same | none |
| 79 extracted assets | the same | none |
| **all 140 disc files** | the same | `scum` nowhere; `death` only in `EXODUS.EXP`, which is Ultima III |

That half is trustworthy because the same scan finds `LINGUAL` once, `ROSTER` six times, `GOLD=`
once and `MONSTER` once. **The phrase is not stored as plain ASCII anywhere on the disc.** It is
`0xEB`-encoded, and the decoder was the problem.

`tools/findmem.py` searches live RAM, sprite RAM and VRAM and is committed **unverified**, because
its hits could not be read back. It turned out not to be needed: the phrase was static all along.

**The rule that survived:** talking does not prevent the monster acting, and the reply is
monster-specific rather than a generic refusal.

**The 16 is the sixth damage sample** and the second occurrence of that value. See above.

**The turn accounting held again.** Two passes cost 30 food and moved `MAP` from 84 to 86, both
consistent with every earlier read.

## One attack missed and one hit, and the second monster left no trace

In the same stretch the player passed twice. The first monster attack missed (a parry), the second
hit for 14. A **second monster was present and could not reach the player**.

**Whether the second monster takes a turn cannot be told from these measurements.** The candidate
evidence would be extra turn cost, and there is none: two passes cost exactly `2 * 15` food and moved
`MAP` by exactly 2. A third party taking its own turn would have to make something in that
accounting move faster, and nothing did.

**That is weak evidence either way.** The turn cost is charged per player action and `MAP` is a
player-turn counter, so neither is expected to notice a third party. A monster that does nothing
because it is out of reach would leave no trace in either. **What would settle it** is a monster
taking an observable action of its own, with a count of how many such actions occur per player turn.

**The object array was not located.** The entity tables at `0xce3c8`, `0xce408` and `0xce488` were read
from this state and hold **map tile data** (nibbles such as `15 15 17 55 55 55`), not entity records.
So the monster and its HP cannot be read, and a second monster cannot be found by looking it up. This
matches `combat-observed.md`, which already records monster HP as unlocated.

**What is now known that was not:** monster damage is variable, six samples over five distinct values
with 16 appearing twice; the player's HP is the field `0xcde81`; a fight costs the same 15 food per
turn as a step; `MAP` counts turns rather than position; and talking to a monster draws a
monster-specific taunt without preventing its attack. Item 4b is still open, but it is open on six
measurements rather than on a scan.

## An earlier one-hit kill, for contrast

Two savestates, taken paused, before and after killing a monster with one hit. The player stood
at (12,17) on map 40 and did not move; the monster died without landing a hit.

| field | before | after | delta |
|---|---|---|---|
| HP | 216 | 216 | **0** |
| max HP | 400 | 400 | 0 |
| EXP | 10 | 12 | **+2** |
| FOOD | 39,385 | 39,370 | **−15** |
| GOLD | 431 | 447 | **+16** |
| X / Y | 12 / 17 | 12 / 17 | 0 |
| MAP | 40 | 41 | **+1** |

Read with `tools/stateread.py` from the states and confirmed against `tools/peek.js` on the live
game at the same moment; the two agreed on every field but `rng`, which advances per frame.

**What this establishes.**

- **A kill costs 15 food**, the same as a single step (`docs/movement-and-wrap.md`). One fight,
  one data point, but the number being identical to the step cost is worth noting.
- **A kill of this monster is worth 2 EXP and 16 GOLD.**
- **`MAP` moved 40 to 41 while X and Y did not.** So map 40 and 41 are not the same place and the
  change was not caused by movement. What `MAP` counts is unverified, and this is the first
  observed change to it that is not a coordinate change.

**What this does not establish, and it is the interesting part.**

**No damage was taken, so no damage formula was measured.** The whole reason for the capture was
HP before and after a monster hit, and the monster never hit. A one-hit kill cannot produce a
hit-point delta, and this page will not infer one from a fight where HP did not move.

So **item 4b is no better off from this run**, and the honest reading is that the capture was
worth doing for the food, EXP and gold figures and worth nothing for the formula it was aimed at.
The next attempt needs a fight the player does **not** win in one blow.

## The damage site, read: 2026-11-02

This page's stated next step was to find the routine that prints the attack text and follow it backwards.
Done, by a better route: `tools/findvar.py` scans for the four little-endian bytes of a data address and
reports only hits that fall on an instruction inside a function whose extent `docs/corpus.json` asserts.

The consequence of asking it about `0xcde81` (`HP`): **37 occurrences, exactly one of which subtracts.**

```
0xf0144  push ebp
0xf0145  mov  ebp, esp
0xf0148  mov  edi, [ebp + 8]        ; the damage, a parameter
0xf014b  call 0xef8a4
0xf0150  push 8
0xf0152  call 0xe1b44               ; window 8
0xf0157  call 0xef8a4
0xf015f  and  edi, edi
0xf0161  jl   0xf0182               ; a negative argument takes the other path
0xf0163  mov  eax, [0xceca0]        ; the current player index
0xf0163  ...  lea/lea/shl/sub      ; edx = player_index * 351
0xf0173  sub  [edx + 0xcde81], edi  ; HP -= damage
0xf0179  cmp  [edx + 0xcde81], 0
0xf0180  jge  0xf01b5               ; HP >= 0 is fine
0xf0182  cmp  [0xcde44], 1
0xf0189  jne  0xf0192
0xf018b  call 0xf0ec4               ; the routine that writes HP = 99 / 75 / 25
0xf0192  ...  edx = player_index * 351
0xf01a2  mov  [edx + 0xcde81], 0    ; otherwise the floor is zero
```

So the arithmetic is `HP = max(HP - damage, 0)` for a non-negative argument, and a negative argument or an
HP that went below zero both divert to `0xf0182`, where a flag decides between the 99/75/25 routine and the
plain floor. The damage itself is never computed here.

**A frame correction, and this is the third appearance of the same defect.** The item's earlier block quoted
this routine at `0x0eff44` and its `call` as `0xef6a4`. Every code address in it is exactly `0x200` low: the
routine is `0xf0144` and the call is `0xef8a4`. That is the guest frame, and every page in this repository
quotes file offsets. The `0xcde81` in the same block is unaffected, because an operand's *value* is not
frame-shifted, which is what made the block read as verified while its addresses pointed elsewhere. The
analysis was right and its addressing was in the wrong frame.

### The six callers, and what each pushes

`tools/findcallers.py 0xf0144` finds **six** direct calls, not the eight the earlier note listed:

| call site | pushed damage |
|---|---|
| `0xf0c60` in `0xf0c08` | `push 0xa`, which is 10 |
| `0xf3b8b` in `0xf38d4` | `push -1`, the negative path |
| `0xf92e6` in `0xf90a0` | `push 0x10`, which is 16 |
| `0xf9331` in `0xf90a0` | `push 0x32`, which is 50 |
| `0xfa105` in `0xf9ffc` | `push esi`, computed, the melee case |
| `0xfc8d3` in `0xfc51c` | `push [ebp-8]`, computed from a local |

The two constants 16 and 50 are worth noting against the live measurement above, where a monster hit the
player for exactly 16. That is consistent with a fixed 16 somewhere, and one sample still does not
establish it.

### The melee damage, at `0xf9ffc`

```
0xfa0b6  push 0; call 0xf329c
0xfa0bd  push 4; call 0xe1c7c            ; a roll, bound 4
0xfa0c4  mov  [ebp - 4], eax             ; the roll
0xfa0c7  mov  eax, [edi*4 + 0xce608]     ; a per-attacker word, indexed by the argument
0xfa0d0  mov  ecx, 6
0xfa0d5  div  ecx                        ; unsigned divide by 6
0xfa0d7  mov  esi, [ebp - 4]
0xfa0da  add  esi, eax
0xfa0dc  inc  esi                        ; esi = roll(4) + table[attacker]/6 + 1
0xfa0f0  cmp  [player + 0xcde99], 0
0xfa0f7  jne  0xfa104
0xfa0f9  cmp  [player + 0xcdf57], 3
0xfa100  jne  0xfa104
0xfa102  add  esi, esi                   ; doubled on that combination
0xfa104  push esi
0xfa105  call 0xf0144
```

So the melee damage is **`roll(4) + table[attacker] / 6 + 1`**, doubled when `[player+0xcde99]` is zero and
`[player+0xcdf57]` is 3. `0xcdf57` is `MAP`, from the variable map, so the doubling is scoped to one map id
and the rule for it is not yet read.

### The hit test, and why it is not claimed

Immediately before the damage branch, at `0xfa056`:

```
0xfa056  mov  eax, [player + 0xcde66]
0xfa05c  cdq
0xfa05d  mov  ecx, 0xa
0xfa062  idiv ecx                        ; stat / 10
0xfa064  inc  eax                        ; stat / 10 + 1
0xfa065  cmp  eax, [ebp - 4]             ; against the roll(0x20) taken at 0xfa03a
0xfa068  jg   0xfa09e                  ; branch taken when the stat term is LARGER
```

**That reads inverted and no rule is claimed.** A larger stat making the `jg` branch more likely would mean a
higher stat misses more, which is not a plausible mechanic. Three explanations are open and unseparated: the
branch target `0xfa09e` is the hit path rather than the miss path, `0xe1c7c` is not a uniform roll so
`[ebp-4]` is not comparable to a stat, or `[0xcde66]` is not the attacker's skill. The two strings the
branches print are at `0xad4c` and `0xad6c` and they are in the game's mixed SJIS-and-`0xEB` encoding, so
settling which is "attacks" and which is "misses" needs the text decoder, not another reading of the flow.

That is the next step on this page, and it is a decoding job.

## What would actually work, and it is not another scan

**Read the routine that prints `\nによる攻撃` and follow it backwards.** That string must be printed at the
moment damage is applied, so whichever routine references it is either the combat routine or one call away
from it. `tools/fnstrings.js` with a search for that specific address would find the referrer, and this page
did not do that.

**That is the concrete next step** and it is cheap. It is recorded here rather than attempted because this
session had already produced two negatives on the same pattern and a third guess is not worth the time.

## The honest state of item 4b

**Not done, in either half.** Not the reading and not the verification. The item was `PARTLY AUTONOMOUS`
which was correct about verification, and too optimistic about reading: the fields the formulas must touch
are not touched by any routine that rolls dice.

**One live attempt has now been made and it produced a single observation.** A monster hit the
player once for 16 HP while the player parried the second attack. That is the first real damage
number this project has, and it is one sample. It does not distinguish a constant 16 from a roll,
and no claim is made about which. See the measurement above.

**Something is now known about the monster's side of the exchange**, which was not before: a
monster can miss (the parry), a hit takes HP from `0xcde81`, and a fight advances `MAP` by one per
turn while charging 15 food per turn.

**A further negative on the string route.** This page's own next step was to find what references the
attack string `による攻撃` and read that routine. The string is at `0x680c` and **nothing references
it**: `tools/refindex.py --query 0x680c` returns none, a literal search for immediates in
`0x6800..0x6820` finds none, and `tools/fnstrings.js --top 200` lists no function for it. So the
string is reached through a computed offset into the `0xEB` table rather than an absolute address, and
following it back needs a different method than the one this page proposed.

The plan's acceptance criterion is "to-hit and damage stated exactly, and marked read-versus-verified".
Neither is satisfied and the page says so rather than offering a plausible formula.

### The port's tables are byte-identical to the original's (measured 2026-11-09)

This is the answer to "how can we be sure the port spawns the same creatures": the tables the spawn code indexes are the same bytes on both
sides, so with the same band roll the same monster and the same group size come out, because the code doing the arithmetic is the original's.

**Tried:** dump `0x4D4A00` from the port and compare with the same region of the death-screen savestate. The port needed a way to dump memory
at the end of a run, since `U2_STOP_DUMP` only fires when a stop address is hit, so `port/main.cpp` gained `U2_DUMP_ADDR` and `U2_DUMP_LEN`.
Both are hex, which bit once: `U2_DUMP_LEN=20` asks for 32 bytes.

**Measured:**

```
port   00 00 00 00 30 FC 34 2C F0 48 38 F8 3C E0 00 00 02 02 02 01
origin 00 00 00 00 30 FC 34 2C F0 48 38 F8 3C E0 00 00 02 02 02 01
identical: True
```

The state offset is `0x363EB2`, which is runtime `0x4D4A00` under the anchor derived above. The run was 1,500 frames of a plain start,
`--graphics=none`, no input.

**Verdict:** POSITIVE for the type half of the question, and by construction rather than by sampling. Band b selects the same monster byte and
the same group size on both sides, because both read this table and both run the same selection code.

**What is still open,** and it is the other half: whether the **rolls** match. The band comes from `randMod(100)`, and the RNG is shared with
every other subsystem, so one extra or missing consumption anywhere diverges every later spawn while the spawn code stays perfect. Comparing
rolls needs both sides at the same logical point, which means a savestate on each, and the original's needs a hand at the emulator.

## How a monster is chosen at spawn, read from the code (2026-11-09)

Paul asked whether a dragon early in the game is the game's design or the port mis-picking. The choice is in two routines, and neither uses
the player's level.

**`0xF9CB8` returns a band 0 to 8 from a percentage roll.** It calls `randMod` (`0xE1C5C`) with `0x64` and compares the result against fixed
thresholds:

| roll (0 to 99) | band | share |
|---|---|---|
| 0 to 39 | 0 | 40% |
| 40 to 69 | 1 | 30% |
| 70 to 79 | 2 | 10% |
| 80 to 81 | 3 | 2% |
| 82 to 89 | 4 | 8% |
| 90 to 91 | 5 | 2% |
| 92 to 94 | 6 | 3% |
| 95 to 96 | 7 | 2% |
| 97 to 99 | 8 | 3% |

Band 9 is unreachable, because the roll cannot reach 100. **There is no term for player level, map region or terrain anywhere in it.**

**`0xF93AC` turns the band into a monster and decides how many.** It compares a player field at `[record + 0xCde99]` with 4: at or below 4
the loop runs 12 times, above it 6. For each slot it calls `0xF9CB8`, reads one byte from `0xD4A04 + band` into that slot's byte at
`0xCE3C8`, and a second byte from `0xD4A10 + band`. So the spawn **count** scales with a player field and the monster **type** does not.

**Both tables are runtime data.** `0xD4A04` and the monster names are zero in `ENCHANT.EXP`: the names were read from a death-screen
snapshot inside the runtime region `0x79300` to `0x81000` (`docs/game-text.md`), and the band table is filled at run time too. So which band
holds the dragon cannot be read from the file, and the next step is a dump of `0xD4A00` while the machine runs.

**The answer to the question, as far as the code goes:** with no level term, a high band is reachable in the first minute and the monster it
holds can appear then. That is a dice roll rather than a rule. Whether it is fair is a design judgement, not something this code says.

**One conflict, recorded rather than resolved.** This page already records that the bytes at `0xCE3C8` held map tile nibbles in the state it
was read from, while the code above writes one monster byte per slot there. Either the region is reused for different things at different
times, or the two readings were of different states, and a dump settles it.

### The dump: the tables, measured 2026-11-09

One run on the original with `spawnwatch.sh`, a fresh character walking in the open. Paging decides which copy is live, and the answer was
not the one the translation suggested: `ADTR 14:0CE3C8` reports physical `0x3693C8`, but the bytes that **change** are at physical
`0x4CE3C0` and `0x4D4A00`, which are the linear addresses taken as physical. The translated window read all zeros at every timestamp, so the
game's data is identity-mapped here.

```
0x4D4A00  00 00 00 00 | 30 FC 34 2C F0 48 38 F8 | 3C E0 00 00
0x4D4A10  02 02 02 01 02 01 02 02 02 02 00 00 3C 00 00 00
0x4CE3C0  00 00 00 00 00 00 00 00 | FC FC F0 34 FC FC FC 30 30 38 30 FC
```

Three things follow. The spawn slots at `0x4CE3C8` change between dumps, so the write path is confirmed live. The second table at
`0x4D4A10` holds `02` for most bands and `01` for bands 3 and 5, which reads as the size of the group that band spawns. And the first table
at `0x4D4A04` holds `30 FC 34 2C F0 48 38 F8 3C E0` for bands 0 to 9, **every value a multiple of four**, which is not a small monster id:
they are offsets, so the id is scaled and the record they point at is not the name table.

**What this does not yet say** is which band holds the dragon. That needs the name region, which is runtime data at **linear** `0x79300` to
`0x81000` (`docs/game-text.md`). One correction on the way: the first attempt dumped `0x479377`, the game offset plus the data segment base,
and the log shows that region is `F3` fill, so `0x79300` is a linear address in its own right and not an offset into the data segment. The
regions that are offsets (`0xD4A04`, `0xCE3C8`) and the region that is linear (`0x79300`) need to be dumped differently, which is exactly
the kind of address mistake this repository records having made before.

**The second dump found UI text, not names.** 512 bytes from linear `0x79360` decode as character-creation and status screen strings:
`キャラクタ作成` at `0x793CD`, `何かキ－を押してください。` at `0x793F5`, `強さ` and `素早さ` at `0x794F0` and `0x79538`, with `0xEB`-prefixed
blocks interleaved between them. So the address that this repository recorded for the sixteen monster names, `0x79377`, holds
`0xEB` blocks and `登録しますか` in this state rather than a name list. Either the module layout differs between states or the recorded
address is wrong, and neither can be settled by assuming.

**The method that would settle it**, and the one to use next: dump the whole `0x79300` to `0x81000` and **search the bytes** for the Shift-JIS
encoding of a name that is already known, rather than trusting an address. `ドラゴン` is `83 68 5D 83 5A 83 53 83 8E`. Locating it by
content also gives the table's stride and its base in one step, which an address guess cannot.

**That search found nothing, measured.** The whole region was dumped, 31,936 of its 32,000 bytes collected, and `83 68 5D 83 5A 83 53 83 8E`
occurs **zero times** in it, while walking in the open with a live character. So the names are not in that region in this state at all.

**What that implies, and the next attempt.** The page that recorded the names read them from a **death-screen** snapshot, so the text is
present in that state and not in this one: different states load different text. The next dump therefore has to be taken on a death screen or
during a fight, not while walking, or the search has to run over the whole data segment rather than the region this page assumed.

### The names are in the monster record area, and `0x79377` was a savestate offset

Two failed dumps, then the state file explained both. `tools/savetext.py` reads a **Tsugaru savestate**, so the numbers in `docs/game-text.md`
are offsets inside that file, not runtime addresses. The state is a flat copy of RAM, and the band table appears in it at file `0x363EB6` and
group table at `0x363EC2`, twelve bytes later, exactly as at runtime `0x4D4A04` and `0x4D4A10`. That anchors the conversion:

```
runtime = state offset + 0x170B4E
```

With the anchor, the names were found by content in the same state, and they are **not** in the `0x79300` region at all. They are in the
monster record area, contiguous with the band table that indexes it:

```
  state 0x36533c  runtime 0x4d5e8a  len  6  'オ－ク'
  state 0x3653c0  runtime 0x4d5f0e  len  8  'ゴブリン'
  state 0x365444  runtime 0x4d5f92  len  6  'デビル'
```

So the records live at roughly `0x4D5E47` upward with a stride near `0x41` to `0x43`. Reading the wider window shows why the stride looked
irregular: **there are two interleaved arrays, each with a stride of `0x84`**, one `0xEB`-encoded and one plain Shift-JIS. The plain one
starts at runtime `0x4D59E6`, and its entries step by `0x84`:

```
0x4D5C7A 僧兵          0x4D5C7A is index 5, so index 0 is 0x4D59E6
0x4D5CFE 死霊使い       0x4D5D82 魔法使い    0x4D5E06 盗賊
0x4D5E8A オ－ク        0x4D5F0E ゴブリン    0x4D5F92 デビル
```

That puts `warrior monk`, `necromancer`, `wizard`, `thief`, `orc` and `goblin` at indices 5, 6, 7, 8, 9 and 10, which agrees with the order
the text page records. **But index 12 reads `デビル`, devil**, where that page has the Loch Ness dinosaur, so either the ordering shifts
somewhere between 10 and 14 or the page's translation of one entry is wrong. That is a conflict between two measurements and it is recorded
rather than smoothed over: the next read is indices 11 to 15 in the same window, which settles both the ordering and whether a dragon is in
the list at all.

**Also corrected:** the sixteen-name table in `docs/game-text.md` names a location that is a state offset, and three of my own Shift-JIS
encodings for those names were written from memory and did not match anything, which is the mistake this repository records having made
before. Two that were checked by content, `商人` and `ゴブリン`, both appear in the state, so the list is real and its position is the part
that was wrong.

**Next, and it is small:** dump runtime `0x4D5C00` to `0x4D6100` in the same state, read all sixteen names with their addresses, and the band
values become bands of monsters. That answers whether an early dragon is the game's own design.

---

**[The RNG](rng-helpers.md)** **[Record layout](record-layout.md)** **[The tick](the-tick.md)** **[Plan](plan.md)**
