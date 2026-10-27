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

## The contradiction, resolved

Plan item 5b recorded as established that "one step west from 0 gives 63 with the map id
(`0xcdf53`) changing 41 to 42". The clamp at `0xf6b5a` cannot do that, because it never writes the
map id. Reading the one arithmetic map-id writer and its single caller resolves it: **the
observation was right in substance and the mechanism was not the clamp.**

`0xf1b48` is a one-argument setter, the only relative map-id write in the image:

```
0xf1b48  mov eax, [0xceca0]          ; the current character index
0xf1b4d  lea edx, [eax+eax*4]
0xf1b50  lea edx, [eax+edx*2]
0xf1b53  shl edx, 0x5
0xf1b56  sub edx, eax                ; edx = index * 95
0xf1b58  mov eax, [esp+0x4]          ; the argument
0xf1b5c  add [edx+0xcdf53], eax      ; MAP_ID += argument
0xf1b62  ret
```

It has **one caller in the whole image**, at `0xf7742`, and that caller is the sector-crossing
rule:

```
0xf7740  push 0x1
0xf7742  call 0xf1b48                ; MAP_ID += 1
0xf7747  mov eax, [0xceca0]
0xf775a  cmp [edx+0xcdf57], 0x0      ; a flag, and only when it is set ...
0xf7761  je  0xf7786
0xf7763  mov eax, [edx+0xcdf6b]      ; PLAYER_X
0xf776b  je  0xf7781                 ; x == 0
0xf776d  cmp eax, 0x3f
0xf7770  je  0xf7781                 ; x == 63
0xf7772  mov eax, [edx+0xcdf6f]      ; PLAYER_Y
0xf777a  je  0xf7781                 ; y == 0
0xf777c  cmp eax, 0x3f
0xf777f  jne 0xf7786                 ; y == 63 takes the same branch
0xf7781  call 0xf828c                ; the sector changes
```

**The rule: the map id advances by one whenever the party is on an edge**, that is `x == 0` or
`x == 63` or `y == 0` or `y == 63`, and only while the flag at `0xcdf57` is set. That is why a step
west from 0 shows both a wrap to 63 and a map-id change: the party is standing on the edge, so both
happen in the same turn, but they are two independent pieces of code.

`0xf828c` is the loader the edge test calls. It clears the flag at `0xcdf57`, reads `0xcde99`, and
calls `0xf3e40`, which sits next to the pixel writer at `0xf3e24`. What it does with `0xcde99` is
where the viewport question lives and is not read yet.

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
| what changes the map id | **found**, `0xf1b48` called from `0xf7742`, edge rule stated above |
| `MAP_X`/`MAP_Y` versus `PLAYER_X`/`PLAYER_Y` | both are plain dwords four bytes apart, written by the same initialiser. Neither meaning established |
| the viewport mapping, 256 by 128 to 11 by 11 | not started. `0xf828c` and `0xcde99` are where to begin |
| the food and turn counters | belongs to item 1b |
| record base and stride | **contradiction recorded**, base `0xcde54` against a cross-boundary field run |
