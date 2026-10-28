# Movement and the torus wrap

**Verdict: the wrap is arithmetic on a 16 by 16 grid, and it applies to `MAP_X`/`MAP_Y`, not to
`PLAYER_X`/`PLAYER_Y`.** Read from `0xef5b4`. The step deltas come from a four-way direction
selector. What is not yet read is the blocking test and the food and turn decrements.

This answers part of plan item 5b. Recorded as partial rather than complete, because two of the
four things the item asks for were not found.

## The wrap routine

`0xef5b4`, 240 bytes, frameless in effect (it reads its arguments from a jump table rather than
the stack). The load-bearing part:

```asm
ef5bb  movsx  edx, [0xd6e68]     ; direction, 1..4
ef5c2  dec    edx
ef5c3  cmp    edx, 0x3
ef5c6  ja     done               ; anything outside 1..4 does nothing
ef5c8  jmp    [4*edx+0xef3d0]    ; four cases
```

Each case sets two values, a step in x and a step in y:

| case | `edi` (dx) | `[ebp-4]` (dy) |
|---|---|---|
| `0xef5eb` | 0 | +2 |
| `0xef5f6` | -2 | 0 |
| `0xef5fd` | +2 | 0 |
| fallthrough at `0xef609` | unchanged | 0 |

Then the arithmetic:

```asm
ef609  mov eax, [0xceca0]        ; current record index
       ... 351-byte record stride ...
ef619  mov esi, edi
ef61b  add esi, [edx+0xcdf63]    ; esi = MAP_X + dx
ef621  mov ebx, [edx+0xcdf67]
ef627  add ebx, [ebp+-0x4]       ; ebx = MAP_Y + dy
ef62a  cmp esi, 0xf
ef62d  jle  skip
ef62f  sub esi, 0x10             ; if (x > 15) x -= 16
skip:
ef632  and esi, esi
ef634  jge  skip2
ef636  add esi, 0x10             ; if (x < 0)  x += 16
skip2:
ef639  cmp ebx, 0xf
ef63c  jle  skip3
ef63e  sub ebx, 0x10             ; if (y > 15) y -= 16
skip3:
ef641  and esi, esi              ; note: tests esi again, not ebx
ef643  jge  skip4
ef645  add ebx, 0x10             ; if (x < 0)  y += 16
```

**The wrap constant is 16.** Coordinates are compared against `0xf` and corrected by `0x10`, so
the addressed map is 16 by 16 and movement is toroidal in both axes.

**One oddity worth recording rather than smoothing over.** The second y correction at `0xef641`
tests `esi` rather than `ebx`. The raw bytes there are `23 f6`, which is `and esi,esi` and not a
mis-decode, so the source or the compiler really did test the x value twice. It does not change
behaviour when only one axis moves, and it is recorded here as unexplained.

## The fields, and a correction to an assumption

| field | offset | written by |
|---|---|---|
| `MAP_X` | `0xcdf63` | this routine, from `MAP_X + dx` |
| `MAP_Y` | `0xcdf67` | this routine, from `MAP_Y + dy` |
| `PLAYER_X` | `0xcdf6b` | the roster loader at `0xead78`, from parsed text |
| `PLAYER_Y` | `0xcdf6f` | same |

They are four bytes apart and both exist, so **the wrap operates on the map coordinate pair, not
the player coordinate pair.**

### The open question this leaves

**What `PLAYER_X`/`PLAYER_Y` are for is not established.** Two position pairs in one record, four
bytes apart, is not self-explanatory, and the evidence does not settle it:

- `MAP_X`/`MAP_Y` are wrapped into `0..15` by the step routine
- `live-fieldmap.md` observed `PLAYER_X` change by 1 on a west step, but this routine does not
  write it, so some other path updates it
- the roster loader writes `PLAYER_X`/`PLAYER_Y` from parsed text, so they are saved and restored

Candidate readings, none verified: wrapped grid versus unwrapped absolute coordinate, map-local
versus world coordinate, tile cell versus sub-tile offset, or authoritative versus cached. Finding
the routine that writes `PLAYER_X` on a step would settle it, and that routine was not found here.

I wrote "torus wrap on the player position" in the plan item when first drafting it, from the
expectation that a movement coordinate would be called that. The code says otherwise, and the
phrase sent the first search at this item to the wrong fields.

## How big a map is: 64 wide, in sectors, measured by walking

I claimed this section said "one 16 by 16 grid, no sectors" and that claim was **wrong**. It was
derived from four code constants and never tested by walking. One step at the edge refuted it.

### The measurement

Played to `PLAYER_X = 0` (`0xcdf6b`), then one step west, with a memory dump either side:

| field | before | after one step west |
|---|---|---|
| `PLAYER_X` (`0xcdf6b`) | 0 | **63** |
| `PLAYER_Y` (`0xcdf6f`) | 11 | 11 |
| map id (`0xcdf53`) | 41 | **42** |

**Two thing follow and both contradict the earlier reading:**

- **The coordinate bound is 64, not 16.** `0` west becomes `63`, so the maximum is the world
  width minus one.
- **Crossing the edge changes the map id.** 41 to 42. So `0xcdf53` is a sector or world id and
  there is a sector system, exactly as asked.

### Why four constants pointed the wrong way

All four are real, and all four measure **the cell table**, not the world coordinate space:

| source | constant | what it actually bounds |
|---|---|---|
| `0xef5b4` wrap | `cmp 0xf`, `+/- 0x10` | a 16-wide structure, not `PLAYER_X` |
| `0xfb41c` cell index | `(x << 8) + (y << 4)` | 16 bytes per cell, 256 per row |
| `0xfa130` loops | `cmp 0x10` both axes | a 16 by 16 tile block |
| `0xfa130` coordinate update | `15 - value` | the same block's coordinates |

**And the decisive negative that should have stopped me:** `0xef5b4` contains no `0x3f` or `0x40`
immediate at all. It cannot be the routine that bounds `PLAYER_X` at 63. The routine that does was
never found, and reading `0xef5b4` as the overworld stepper was an assumption, not a measurement.

The 16 by 16 is almost certainly the **shared cell table within a sector** and possibly relates to
the 11 by 11 viewport, but which of those it is has not been established.

### The crossing is invisible to the player

Observed on screen while the step above was taken: **the display simply scrolls.** There is no
flash, no reload, no visual discontinuity at the moment the sector id changes from 41 to 42.

The player cannot tell they crossed a sector boundary, only the memory dump can. Three
consequences:

- **The sector arithmetic is seamless by design.** Whatever draws the 11 by 11 viewport reads
  tiles without the player or the renderer caring which sector they belong to.
- **"Torus" was the wrong word twice over.** The world is not a torus, because crossing does not
  loop back into the same map. And it is not visibly bounded either, because the crossing is
  hidden.
- **The 16 by 16 structure is most likely a rendering or collision granularity**, a block the
  code works in, rather than anything the player experiences. That is a guess and is labelled
  one, but it explains why four constants agree on 16 while the world is 64 wide.

### The method failure, stated plainly

Four independent constants agreed, and agreement felt like proof. It was four measurements of the
same thing. A single keystroke was worth more than all four, and it took Paul asking twice before
it was tried.

## How big is a map, the earlier (wrong) reasoning, kept

The rest of this section is the derivation that produced the wrong answer, kept because the
constants themselves are correct and will be needed once the real bound routine is found.

| source | constant |
|---|---|
| `0xef5b4` wrap | `cmp 0xf`, corrected by `+/- 0x10` |
| `0xfb41c` cell index | `(x << 8) + (y << 4)`, so 256 bytes per row and 16 per cell |
| `0xfa130` transform loops | `cmp 0x10` on both axes, in all four cases |
| `0xfa130` coordinate update | `mov edx, 0xf` then `sub edx, [..]`, which is `15 - value` |

**The reasoning that was wrong.** `0xd4a68` appears in `0xef5b4` only as an argument to the cell
test and is never written there, from which I concluded that an edge crossing could not change the
map. That inference holds for `0xef5b4` and has no bearing on the real stepper, which was never
read.

### The arithmetic confirms the table size

A 16 by 16 grid of 16-byte cells occupies `0xd4a74` to `0xd5a73`, exactly 4,096 bytes. The next
referenced data structure is at **`0xd5a74`**, which is that boundary, and it is the map transform
routine `0xfa130` being passed the table address. The layout agrees with the arithmetic three ways.

## `0xfa130`: whole-map transforms

The routine called with the map base is a four-way transform, each case a nested 16 by 16 loop:

| case | row start | row step | effect |
|---|---|---|---|
| `0xfa186` | `0xf0` | `+0x10` | scan with rows reversed |
| `0xfa1b8` | n/a | n/a | swap two coordinates, `0xf - x` |
| `0xfa1d0` | `0xff` | `-0x10` | scan from the last cell backwards |
| `0xfa219` | `0xf` | `-1` | scan with columns reversed |

Each path ends by rewriting coordinates as `0xf - value`. This is the rotate and reflect family, and
every loop bound in it is 16.

**Not yet established:** which case corresponds to which rotation or flip, and whether the game uses
all four. The case selector is at `[ebp+0xc]` and was not traced to a caller.

## The collision check, which is not a separate routine

After the wrap, the destination is tested by calling `0xfb41c`:

```asm
ef648  push ebx
ef649  push esi
ef64a  push [0xd4a68]           ; the current map id
ef650  call 0xfb41c              ; returns the destination cell
ef655  add esp, 0xc
ef658  and eax, eax
ef65a  je   commit               ; zero means passable
ef65c  push 0x3
ef65e  call 0xe1b44              ; blocked: a sound
ef663  push 0x46dc
ef668  push 0x7
ef66a  call 0xe5854              ; blocked: a message
```

`0xfb41c` takes the destination x and y, computes `(x << 8) + (y << 4)`, and reads a cell:

```asm
fb428  shl eax, 0x8             ; x << 8
fb42d  shl edx, 0x4             ; y << 4
fb430  add edx, eax
fb432  mov eax, [edx+0xd4a7c]
fb43a  jne  return               ; cell+8 nonzero -> returns 0
fb448  mov eax, [edx+0xd4a78]
fb44e  cmp eax, 0xffffffff
fb451  jne  return               ; cell+4 != -1 -> returns -1
fb45f  mov eax, [edx+0xd4a74]    ; otherwise the cell at +0
```

The stride is 16 bytes per cell and 256 per row, which is the same 16 by 16 grid the wrap uses.

**`0xfb41c` is not yet in `docs/routines.json`.** It is read here and unregistered, and an earlier
draft of this page wrongly said it was.

If the cell is passable the position is committed:

```asm
ef68b  mov [edx+0xcdf63], esi    ; MAP_X = new x
ef691  mov [0xd4a4c], esi        ; a mirrored copy
ef697  mov [edx+0xcdf67], ebx    ; MAP_Y = new y
ef69d  mov [0xd4a50], ebx        ; mirrored copy
```

**Note the mirrored copies at `0xd4a4c` and `0xd4a50`.** The position is stored twice, one copy in
the roster record and one in a global pair, and both are written on every successful step.

## The step cost, measured in the running game

**One step costs 15 food, and one arrow key moves one square in that direction.** Measured
live, three consecutive steps on the overworld with the character record read before and
after each:

```
start      X=19 Y=20 FOOD=39940
after Left  X=18 Y=20 FOOD=39925  (dX=-1 dY=+0 dFOOD=-15)
after Up    X=18 Y=19 FOOD=39910  (dX=+0 dY=-1 dFOOD=-15)
after Right X=19 Y=19 FOOD=39895  (dX=+1 dY=+0 dFOOD=-15)
```

Read with the emulator console, which takes a DS-relative offset. **DS's base is the image
base**, so a file address is also the DS offset: `MD 14:cdf6b 140` reads the player record
without any arithmetic. The record layout and every address is in
[live-fieldmap.md](live-fieldmap.md), which derived them first; this section adds only the cost
measurement.

**Pause first.** `live-fieldmap.md` records that without `PAU` the record flips between its
loaded contents and `FF` fill about one sample in six, because the game re-reads it
continuously. The three steps above were measured unpaused and were consistent, then
re-checked under `PAU` and matched exactly, so the numbers stand. Pausing first is still the
right order.

| field | address | value at the start of this run |
|---|---|---|
| X | `0xcdf6b` | 19 |
| Y | `0xcdf6f` | 20 |
| FOOD | `0xcde8d` | 39,955, then 39,940 |
| HP | `0xcde81` | 400 |
| max HP | `0xcde85` | 400 |
| GOLD | `0xcde91` | 400 |

**Only FOOD changed.** HP, max HP and GOLD were identical before and after every step, so the
step cost is charged to food alone and not to any other visible counter.

**The 15 is not yet explained.** It is constant across three steps in three directions on what
may be open terrain. Whether it is per-step, per-terrain, or a sum of a base and a terrain
cost is not settled: the three steps were all on the same screen without entering anything.
The way to settle it is to walk onto different terrain types and compare, which has not been
done.

**A west then east step returns the coordinates exactly.** They read 20,20 before and 20,20
after, which is the correct result and was briefly mistaken for a failure to move before the
single-direction case was run.

## The cost is a parameter, and there are two of them

Measured 15 on a step and 15 on a kill, which suggested one constant. **It is not.** The food
routine takes the amount as an argument, and it has exactly two callers, passing different values.

### The routine: `0xf0a08` in memory, `0xf0c08` in the file

**The address to use is `0xf0a08`.** A differential CFG capture of a live walk reached this function
at `0xf0a08`, called from `0xf0943`, and its body matches the listing below instruction for
instruction. The figure `0xf0c08` quoted in earlier versions of this page is the **file offset**, which
is `0x200` higher because the running image has its `MP` header stripped. Both are correct about the
same bytes: `ENCHANT.EXP[0xf0c08]` and the bytes executed at segment `0xf0a08` are identical.

This confusion matters because every other address in this repository's docs may carry the same
ambiguity. A capture reports segment offsets. A `xxd` command reports file offsets. They differ by
`0x200` and look identical in prose.

```
0xf0a08  spend_food(amount):        (file offset 0xf0c08)
0xf0a0b    r0 = [0xceca0]           ; the party index
0xf0a10    r2 = r0*11
0xf0a16    r2 <<= 5                 ; r2 = r0*352
0xf0a19    r2 -= r0                 ; r2 = r0*351   <- the record stride
0xf0a1b    r0 = [r5+0x8]            ; THE AMOUNT, from the argument
0xf0a1e    sub [r2+0xcde8d], r0     ; FOOD -= amount
0xf0a24    cmp [r2+0xcde8d], 0
0xf0a2b    jge 0xf0a37
0xf0a2d    mov [r2+0xcde8d], 0      ; clamp at zero, never negative
0xf0a47    cmp [r2+0xcde8d], 0
0xf0a4e    jne 0xf0a7b              ; still fed, return
```

When food reaches zero it falls through to a starvation path that pushes `0x8`, `0x2` and `0xa`,
then `0x4f58` to the text renderer. **The starvation message and its effects were not read**, so
what happens at zero is not established.

The record stride is `351`: `r0*352 - r0`. `0xcde8d` is FOOD and `0xcde4c` appears as a record base
in the caller, so both are readable from this function.

### The two costs

| caller | amount | what the caller does |
|---|---|---|
| `0xf0943` in `0xf0928` | **15** | the turn: spends food, decrements the hour counter `[0xd3710]` rolling 0 to 16, advances `[r6+0x35]` capped at `[r6+0x39]` when `[0xcdf57]` is set, decays `[r6+0x14f]`, then torches `[r6+0x147]` and `[r6+0x14b]` |
| `0xfacc0` in `0xfae9c` | **10** | the per-turn game step, which checks HP first and returns early when the player is dead |

Both caller addresses are also `0x200` lower than the file offsets an earlier version quoted, and both
were re-measured rather than adjusted. Scanning the whole image for `call` instructions whose target is
`0xf0a08` finds **exactly two**, at `0xf0943` and `0xfacc0`, which matches the two callers this page
has always claimed. The immediates immediately before each call are `6a 0f` (**push 15**) and `6a 0a`
(**push 10**), which is the two-cost finding confirmed at the new addresses.

A step and a kill both cost 15 because both go through the **turn** path. The 10 is a
different, smaller charge on the other path.

### What the 10 actually is, and it is not Pass

Pass was a good hypothesis and it is wrong. `0xfae9c` has **one** caller, `0xfaaa5`, and that call
sits in a loop:

```
0xfaaa5   call 0xfae9c          ; the 10-food step
0xfaaaa   and  r0, r0
0xfaaac   je   0xfaaa5          ; LOOP until it returns non-zero
```

So 10 is charged **per iteration of the game's step loop**, not per command. The caller `0xfa948`
saves position into globals, initialises screen state and then spins that loop.

**The command dispatcher is elsewhere and does not decide the food cost.** It is at `0xf6c98`, keyed
on `[r2+0xcdf57] == 2`, then a 12-entry table indexed by `[r2+0xcde99] - 2`:

```
0xf6cc9   jmp [r2*4+0xf6ad1]     ; 12 commands
```

That table does not hold code pointers: the entries read as `0x114`, `0x977c68`, `0x6805eb00`,
and `docs/jump-tables.md` already records this table as the one that fails to resolve. So **which
command a player picks does not change the food charged**, because the charge is on the loop and on
the turn, not on the action.

**That means the boat is unlikely to cost differently through this routine**, which is the opposite
of the guess. Only 10 and 15 are ever passed to `spend_food`. A different boat cost would need
another writer of FOOD, and the 20 absolute references have not been read.

A step and a kill both cost 15 because both go through the **turn** path. The 10 is charged once
per loop iteration on the other path.

### On the boat

Transports costing differently is **not tested and not read**. These two amounts are the only two
literals passed to this routine, so a boat cost other than 10 or 15 would have to arrive by another
route, which would mean food is also written somewhere else. That is checkable: `0xf0c1e` is the
only FOOD reference through a base register, and there are 20 references at absolute addresses
which were **not** read.

**The test that settles it:** step once on foot, board, step again, and compare. One savestate pair.

## What is still not read

**The turn counter.** The food decrement is now measured but the turn counter is not found, and
nothing in the three steps above distinguished "per step" from "per turn". It belongs to
whatever drives the turn, which is plan item 1b.

**Whether the 15 varies by terrain.** See above.

**The direction numbering.** The four cases give deltas but the mapping from arrow keys to
direction 1..4 was not confirmed here. `docs/bot-build.md` records that a west step moved
`PLAYER_X` down by one, so direction to delta is observable but not yet tied to this selector.

**The jump table at `0xef3d0`.** Four dwords read from `0xef3d0` are not valid code addresses
when read directly, and the disassembly of the targets decodes as data. The table is probably
stored as offsets or with a different base. The inline cases above are reliable and the table
itself is left unresolved rather than guessed at.

## Related

- `docs/live-fieldmap.md`: the field addresses, observed against a paused VM
- `docs/record-layout.md`: the 351-byte record and its fields
- `docs/cell-fields.md`: what a map cell contains
- `docs/routines.json`: `0xfb41c`, the destination test this routine calls
