# Overworld movement: the wrap is arithmetic, and it is not where the map id changes

**Plan item 5b, partial. The wrap routine is found and read. It is a torus clamp on two
coordinates and it never touches the map id, which contradicts what this project had recorded.**

## The wrap, at `0xf6b5a`

Found by asking `x86map --refs 0xcdf6b` for the write sites and reading the one that stores a
constant. `0x0f6b88` is `mov dword ptr [edx + 0xcdf6b], 0x3f`, which is the `0x3f` (63) boundary
the plan item was looking for. Earlier searches missed it because they looked for a `cmp` against
`0x3f`, and the clamp is a store of the constant, not a comparison.

```
0xf6b5a  cmp [edx+0xcdf6b], 0x40      ; PLAYER_X vs 64
0xf6b61  jl  0xf6b6f
0xf6b63  mov [edx+0xcdf6b], 0x0       ; x >= 64  ->  0
0xf6b6d  jmp 0xf6b92
0xf6b6f  mov eax, [0xceca0]           ; the character index
0xf6b74  lea edx, [eax+eax*4]
0xf6b77  lea edx, [eax+edx*2]
0xf6b7a  shl edx, 0x5                 ; edx = eax * 95
0xf6b7d  sub edx, eax
0xf6b7f  cmp [edx+0xcdf6b], 0x0       ; PLAYER_X vs 0
0xf6b86  jge 0xf6b92
0xf6b88  mov [edx+0xcdf6b], 0x3f      ; x < 0   ->  63
0xf6b92  ... the same four steps for PLAYER_Y at 0xcdf6f, 0x40, 0x0 and 0x3f
0xf6bda  push 0x4
0xf6bdc  call 0xe1c9c
0xf6be1  add  esp, 0x4
0xf6be4  jmp 0xf6923
```

**The rule as arithmetic:** for each axis independently, if the coordinate is `>= 64` set it to 0,
and if it is `< 0` set it to 63. That is a torus of size 64 in both axes, which agrees with the
live measurement of `PLAYER_X` bounding at 63 and with the 256 by 128 sector in
[map-geometry.md](map-geometry.md) being sixteen sectors of 64 cells.

Two things the earlier plan text had wrong, both now corrected in the item:

- it is not a 16 by 16 grid. `cmp 0xf` at `0xef5b4` bounds a 16-wide cell table.
- it is not a sector crossing. There is no map-id write anywhere in this routine.

## The contradiction, stated rather than smoothed

Plan item 5b records as established that "one step west from 0 gives 63 with the map id
(`0xcdf53`) changing 41 to 42". **This routine cannot be the one that did that**, because it never
writes `0xcdf53`, and it is the only code that clamps `PLAYER_X` to 63.

So the live observation mixed two events, or a different routine produced the second half. The
map id has four write sites, all found:

| site | instruction |
|---|---|
| `0xeac7c` | `mov [edx+0xcdf53], eax` |
| `0xec541` | `mov [edx+0xcdf53], eax` |
| `0xedcca` | `mov [edx+0xcdf53], eax` |
| `0xf1b5c` | `add [edx+0xcdf53], eax` |

`0xf1b5c` is the only one that is arithmetic rather than a plain store, and so the only candidate
for a sector changing as a result of movement. Reading it is the next step, not this page.

Until that is read, the map-id change is **unverified** and the plan item should not claim it.

## What the three record initialisers show

`0xec4f0`, `0xedcb2` and the block at `0xead2c` each zero a run of fields and then set values.
`0xec4f0` is the clearest:

```
0xec4f0  mov eax, edi
0xec4f2  lea edx, [eax+eax*4]
0xec4f5  lea edx, [eax+edx*2]
0xec4f8  shl edx, 0x5
0xec4fb  sub edx, eax                  ; edx = edi * 95
0xec4fd  sub eax, eax
0xec4ff  mov [edx+0xcdf23], eax        ; then 0xcdf27, 0xcdf2b, ... to 0xcdf67
0xec565  mov ecx, 0x14                 ; 20
0xec56a  mov [edx+0xcdf6b], ecx        ; PLAYER_X = 20
0xec570  mov [edx+0xcdf6f], ecx        ; PLAYER_Y = 20
```

So a character is initialised to **position 20,20** with the map and position fields zeroed. The
stride is 95, which agrees with the `eax*95` computed around `0xef5b4`.

**What does not fit, and is recorded as unresolved.** `tools/fieldmap.js --check` puts the record
base at `0xcde54` with three anchors agreeing, and at that base `0xcdf6b` is at offset 279, which
is record 2 inner-offset 89. The initialiser's field run `0xcdf23` to `0xcdf73` spans offset 207 to
287, crossing from record 2 into record 3. Fields of one character cannot cross a record boundary,
so either the base, the stride, or the assumption that these are per-character fields is wrong.
Arithmetic alone cannot separate the possibilities, because every base from `0xcdf15` to `0xcdf23`
satisfies the span constraint. **Not guessed, recorded.**

## What 5b still needs

| question | state |
|---|---|
| the routine that clamps at 63 | **found**, `0xf6b5a`, arithmetic stated |
| the routine that changes the map id | four write sites found, `0xf1b5c` the only arithmetic one, unread |
| `MAP_X`/`MAP_Y` versus `PLAYER_X`/`PLAYER_Y` | both are plain dwords in the same region, four bytes apart, written by the same initialiser. Neither meaning established |
| the viewport mapping, 256 by 128 to 11 by 11 | not started |
| the food and turn counters | belongs to item 1b |
| record base and stride | **contradiction recorded**, base `0xcde54` against a cross-boundary field run |
