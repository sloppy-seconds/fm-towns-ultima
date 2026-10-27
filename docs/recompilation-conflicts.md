# The 366 conflicts are 12 functions, and two causes

**366 conflicts sounds like a diffuse defect. It is not: they sit in 12 functions, and 332 of
them are in two. Each of those two has a different cause, and both are fixable.**

## The distribution

Measured on the curated seed set with the zero mask applied:

| | |
|---|---|
| conflicts | 366 |
| functions affected | **12** |
| `0xd5d` | **280** |
| `0xcfe34` | **52** |
| `0xfcf90` | 9 |
| the other nine | 25 between them |

So the useful work is two functions, not 366 sites.

**An attribution error is recorded because it cost a step.** The second cluster was first reported as
`0xd2b5b` and that was wrong. The grouping put each conflicting address with the nearest preceding
function start, and `0xd2b5b` was a seed that sat just before the conflicts. Removing that seed moved
the attribution to `0xcfe34`, which is where the conflicts always were. A conflict's address and the
function that owns it are not the same question when a bad seed sits between them.

## Cause one: the descent enters data inside a real function

`0xd5d` begins legitimately:

```
0xd5d  push esi
0xd5e  push edi
0xd5f  push ebx
0xd60  mov  edi, [esp+0x10]
0xd64  mov  dx,  [esp+0x14]
0xd69  mov  bx,  [esp+0x18]
0xd6e  mov  esi, [esp+0x1c]
0xd72  mov  ah, 0x66
```

280 conflicts inside a function that starts correctly means the descent enters data somewhere in its
body. The first one names the place:

```
conflict: 0x1685 (sub) overlaps 0x1688 (popal)
```

`popal` at `0x1688` is the signature of a desync: it appears where a `popad`-shaped byte run is being
read at the wrong boundary. `0xd72 mov ah, 0x66` is worth noting too, since `0x66` in `ah` is an int
instruction number and this is the low dispatch region.

## The phantom seed, and how it arose

`0xd2b5b` looked like a second cause and is not one. It is worth recording because the mechanism is
reusable.

The only thing pointing at `0xd2b5b` is a `call rel32` at `0xe0646`. That address is **one byte
inside an instruction**: `0xe0645` is `c1 e8 10` (`shr eax,0x10`), and reading from `0xe0646` gives
`e8 10 25 ff ff`,
which is a valid-looking `call 0xd2b5b`.

```
0xe0645  c1 e8 10        shr eax, 0x10
0xe0646     e8 10 25 ff ff    <- the 'e8' of the shift, read as a call
```

`docs/corpus.json` already classifies `0xd2b5b` as `not-entry` with the reason "not a real function
start". The seed set included it anyway, because the acceptance rule in
[guarded-walk-coverage.md](guarded-walk-coverage.md) took 275 of the 284 `not-entry` rows on the test
"does adding it raise conflicts". For a misdecoded target that test passes, since the conflict is
attributed to the caller's function and not to the seed.

**What the conflict count does and does not tell you.** Removing `0xd2b5b` leaves the count at exactly
366, because no walk changes: the phantom function disappears, the real conflicts stay with
`0xcfe34`. A conflict count is a property of the walk, not of the seed list, and a seed can be
entirely spurious without moving it.


## Order of work

1. **`0xd5d`**: read the body around `0x1685` and find where the descent leaves the code. Expected
   to remove 280 conflicts and it is the single largest item.
2. **`0xcfe34`**: 52 conflicts, and the same question at a different address.
3. **`0xfcf90` and the remaining nine**: 34 conflicts between them, worth looking at after the two
   that matter.

None of this requires the recompiler to change. All of it is about what is fed to it.

## What this does not say

With all 366 removed the output would still not be a playable port: the 24 indirect calls remain,
`MP` still has no entry point, and the function set is 98.7 percent of the corpus rather than 98.7
percent of the game. Fixing the conflicts makes the emitted code trustworthy as code, which is a
different and smaller claim.

## What the conflict addresses showed, and the two attribution errors

Grouping conflicts by *the nearest preceding function start* put 280 under `0xd5d` and 52 under
`0xd2b5b` and then under `0xcfe34`. Both groupings were misleading, and the reason is the same each
time: a conflict's address and the function that owns it are different questions.

Reporting the conflict addresses themselves gives a different picture:

```
0x5..0x36bb    209      the largest cluster
0x835d..0x986f  50
0xd8ecb..0xd8fc9 52
0xc9b1..0xc9e5  16
0x71cd..0x7252  11
0xb726..0xb734   9
0xfcfa5..0xfcff1 9
0xfa349..0xfa371 5
0x104793..0x104944 3
0x5aba           1
0xefd2a          1
```

**The conflicts begin at `0x5`.** That is inside the 30-byte `MP` header, and the header bytes
`4d 50 0e 01 2f 08` decode as `dec`, `push`, `push`, `add`, `or`. So part of the defect is a descent
walking the container header as if it were code, which `codelimits.js` could not catch because it
looks for zero runs and the header is not zero.

**`0xd5d` itself is clean.** It is a complete TBIOS thunk, 17 instructions from `0xd5d` to `0xd8c`:

```
0xd72  mov ah, 0x66      ; the TBIOS function number
0xd74  push fs
0xd76  push 0x110        ; the TBIOS code selector
0xd7d  call [0x20]       ; the TBIOS entry table
0xd86  movsx eax, ah
0xd8c  ret
```

Nothing inside it can conflict. The 280 attributed to it came from the nearest-preceding rule
sweeping in everything up to the next seed.

## The fix applied

`tools/codelimits.js` now masks the header range as well as the zero runs, taking the size from the
header's own field at `0x18` and refusing a value outside `0x1e..0x400`. Measured: **366 conflicts
become 359**, and the remaining first conflicts move to `0x235`.

```
--no-code 0x0:0x1e  --no-code 0x1d:0x200  ...
```

The header range overlaps the first zero run, which is harmless because a target matching either
range is refused, but it means the ranges are not disjoint and anything summing their widths will
overcount by 30 bytes. Stated because the first version of the summary line did exactly that.

## What remains, honestly

359 conflicts across the clusters above, and none of them yet explained. The largest is
`0x5..0x36bb` with 209, which spans the low startup code and the message string table at
`0x1400..0x2f00`, so the string table is the next likely site:

```
0x1670  20 20 20 41 29 74 74 61 63 6b 20 20 4a 29 75 6d 70
        "   A)ttack  J)ump"
```

A descent into that region decodes message text as instructions. Whether it is reached because a
seed is wrong or because a jump table is read to the wrong bound is not established, and this page
stops short of claiming either.

## The string tables, and where they actually start

The conflicts in the `0x5..0x36bb` cluster sit in two adjacent tables, not in code.

**A filename table from `0x1348`**, entries of `Q:\SOUND\<NAME>.SND` separated by NULs:

```
0x1348  "Q:\SOUND\BUMP.SND"
0x1358  "Q:\SOUND\FIRE.SND"
0x1388  "Q:\SOUND\WHAT.SND"
0x1398  "Q:\SOUND\MAGIC3.SND"
0x13c4  "Q:\SOUND\KATANA1.SND"
0x13dc  "Q:\SOUND\MONSTER1.SND"
```

**A message table from about `0x1500`**, English followed by Shift-JIS Japanese pairs:

```
0x1678  "   A)ttack  J)ump   S)teal \0"
0x1695  "   A)...   J)...  S)..."        Shift-JIS, the same menu in Japanese
0x16c4  "   B)oard   K)limb  T)rans-\0"
0x3000  "キャラクタを生成してくださぃ"    and so on past 0x3000
```

That is why the bytes kept looking like jump tables. A Shift-JIS lead byte is `0x81` to `0x9F` or
`0xE0` to `0xEF`, so `81 6d eb 42 eb 4e` is text, and the `0xEB` at even offsets seen three times
in [unreferenced-extents.md](unreferenced-extents.md) is the second byte of a two-byte character
code, not an opcode.

**Nothing references either table.** `x86map --refs 0x1400` and `--refs 0x1678` both report no
reached instruction naming them, and searching the image for their literal addresses finds 54
occurrences of `0x1400` in the data that are not code references.

**And `0xd5d` does not run into them.** Its body ends at `0xd8c` with `ret`, and the next non-zero
byte is `0x7f` at `0xd90`, a lone constant followed by zeros until `0x1348`. There is no code
between the thunk and the filename table.

So the descent enters the table by a route neither the reference search nor the linear layout
explains. That is as far as this got, and it is recorded as open rather than closed. The two
candidate explanations are a jump table in the low startup code read to the wrong bound, which would
land a target inside the table, and a seed whose disassembly happens to run past its own terminator.

## Correction to what this page said earlier

An earlier revision of this section called `0x1400` the message string table. It is the middle of
the **filename** table. The message text starts later, near `0x1500`. The conclusion is unchanged,
but the addresses in that sentence were wrong.

## The mechanism, found: a false table at `0xf142a`

Tracing the `0x235` conflict to its source gives the mechanism for the whole family.

`0x237` is not a seed, is not called, and is not jumped to directly. It appears in the body of
**`0xf0fec`**, a genuine 1,190-byte function with 57 calls. A function whose body includes `0x237`
reaches it by a transfer, and the transfer is a table read:

```
site 0xf142a   table 0xf1232   4 entries, bounded by a cmp   one target: 0x237
```

The site is real. `0xf1428` is `77 43` (`ja`), and `0xf142a` is

```
2e ff 24 95 32 12 0f 00      jmp cs:[edx*4 + 0xf1232]
```

so the `/4` SIB form with no base and a `cmp`/`ja` bound is exactly what `_table` is designed to
find. What it found is not a table:

```
0xf1232  0x00000237
0xf1236  0x0051b868
0xf123a  0xf4458d00
0xf123e  0xfc44e850
```

One entry is plausible as an address and three are not. Decoded as instructions from `0xf1232` the
bytes are ordinary code (`aaa`, `add`, `push`, `lea`, `call`), and scanning for a run of plausible
code pointers anywhere within 0x40 bytes of `0xf1232` finds **zero**.

So `_table` read four dwords out of the middle of code. The bound test passed because `cmp`/`ja`
precedes the jump, and the entry test passed because the read is bounded rather than open. `0x237`
is the first of those dwords, which is why the conflict lands on a byte inside a TBIOS stub.

**Five other tables have the same signature**, each with low targets that cannot be code addresses:

| site | table | entries | low targets |
|---|---|---|---|
| `0xf142a` | `0xf1232` | 4 | `0x237` |
| `0xe3e7d` | `0xe3c85` | 16 | `0x77e` |
| `0xe2f21` | `0xe2d29` | 23 | `0x100`, `0x1c0` |
| `0xe4606` | `0xe440e` | 69 | `0x8e`, `0x6a` |
| `0xe9129` | `0xe8f31` | 23 | `0xc5` |
| `0xe4a22` | `0xe482a` | 69 | `0x53`, `0x57`, `0x50`, `0x5bb`, `0x6`, `0x7` |

Addresses below `0x1000` are inside the MP header and the startup stubs. A jump table for game code
does not contain them.

## Why six tables and not sixty

`tablecheck.py`, run earlier on this branch, reported 7 sites for the 25-seed walk with **7 real and
0 false positives**. That check asked whether the site is a genuine `jmp`/`call` through a scaled
index, and each of these six is. It did not ask whether the table's *contents* are addresses, and
that is the gap: a correctly detected site with a wrong base is a different failure from a site that
is not a jump at all.

The distinguishing test is cheap and is the next thing to add: **a table whose entries include an
address below the first plausible code byte is not a table.** Every one of the six fails that and
the four known-good ones pass.

## What this does not yet show

Whether the base is wrong, the bound is wrong, or `edx` carries an offset added elsewhere before the
jump. Only the last would leave the displacement correct and the reading wrong, and it is plausible
because the code around `0xf142a` is a `mov`/`cmp`/`ja` sequence whose `edx` is computed earlier.
Settling it needs the `edx` chain read, which is where this stops.

## The real cause: the displacement is not the table base

The six false tables share one cause, and it generalises.

Take `0xe2f21`. The instruction is `2e ff 24 95 29 2d 0e 00`, which is

```
jmp cs:[edx*4 + 0xe2d29]
```

so `_table` reads 23 dwords from `0xe2d29` at a stride of 4. All 23 are code bytes read as dwords.
**Zero of the 23 are valid addresses in the image.**

The table is at `0xe2f29`, immediately after the instruction, and it is exact:

```
0xe2f29  0xe2d85
0xe2f2d  0xe2d8c
0xe2f31  0xe2d93
0xe2f35  0xe2d9a
...      23 entries, spaced 7 bytes apart
```

**All 23 are valid code addresses.** The difference between the declared displacement and the real
table is `0x200`, the same offset by which the `ja` skips past the table:

```
0xe2f0d  movzx eax, [edx+0xcde7b]    ; the profession byte
0xe2f15  sub   edx, 0x41             ; 'A'
0xe2f18  cmp   edx, 0x16             ; 22, so 23 entries
0xe2f1b  ja    0xe2fcf               ; past the table
0xe2f21  jmp   [edx*4 + 0xe2d29]
```

So the site is right, the bound is right, and the **base is wrong**.

Checking the other five the same way: read from immediately after the instruction and the first
eight dwords are 8 of 8 valid code addresses, except `0xf142a` which is 4 of 8 and remains the one
genuine oddity.

| site | declared table | table after the jmp | first 8 entries valid |
|---|---|---|---|
| `0xe2f21` | `0xe2d29` | `0xe2f29` | **8 of 8** |
| `0xe3e7d` | `0xe3c85` | `0xe3e85` | **8 of 8** |
| `0xe4606` | `0xe440e` | `0xe460e` | **8 of 8** |
| `0xe9129` | `0xe8f31` | `0xe9131` | **8 of 8** |
| `0xe4a22` | `0xe482a` | `0xe4a2a` | **8 of 8** |
| `0xf142a` | `0xf1232` | `0xf1432` | 4 of 8 |

His own `pc-4ddriving` documentation describes exactly this idiom, in
[three-games-compared.md](three-games-compared.md): *"they jump through tables placed right after
the jump"*. The displacement in the encoding is a **stale or biased value** the compiler emitted,
and the real base is `next_instruction + index*4` with the index pre-biased by the code before it.

## Why this matters beyond the conflicts

Every table read through the wrong base feeds garbage targets into the walk. That is why
`0x237`, `0x100` and `0x6` appear as function starts: they are entries read from the middle of code.

The repair is in `_table`, and it is testable without changing any game knowledge: **if the entries
at the declared displacement are not code addresses and the entries immediately after the
instruction are, the displacement is biased.** That is a property of the compiler's output, so it
belongs in the kit.

It also explains why `tablecheck.py` reported 7 of 7 sites real. It asked whether the site is a
genuine `jmp` through a scaled index, which it is in every case. It never asked whether the table
the tool then *read* contains addresses.

## The `ja` skip, independently

For `0xe2f21` the `ja` target `0xe2fcf` is not `table + 23*4` (`0xe2f85`), so the skip is not
simply past the table either. It is 74 bytes further on. That is consistent with code following the
table, and it is recorded rather than explained.

## Applying the same fix to `discover`: attempted twice, reverted twice

The base fix works in `x86map` and does not transfer. Both attempts are recorded because the
failure is informative and neither was a coding error.

**Attempt 1.** `_plausible` counted entries that were merely in the image. Conflicts went from
166 to 1,216. The bases it chose were full of data pointers, and the walk began decoding
`add [eax],al` at every byte.

**Attempt 2.** `_plausible` counted entries that decode, then entries in the code band above
`0x1000`. Conflicts went to 1,216 again, at the same addresses.

**Why both fail, and it is not the scoring.** At site `0xe0543` the table is at `pc + 8`, which is
`0xe054b`, and that is correct: 16 of 16 entries are code addresses in the band and the declared
base `0xe034b` has 0 of 16. The entries are `0xe03b5`, `0xe03de`, `0xe03d1`, `0xe03bc`. **The
targets overlap each other**: `0xe03b5`, `0xe03bc` and `0xe03c3` are 7, 7 and 5 bytes apart, so a
descent that follows all of them decodes the same bytes at several boundaries and every one is a
conflict.

So for this site the base is right, the entries are right, and the conflict is **between targets
rather than from a wrong base**. No choice of base fixes that, and a scoring function cannot see it.

**The remaining lever is target overlap, not base selection.** A table whose entries are not all
reachable as distinct instruction starts needs the entries merged or the overlapping ones dropped,
and which of those is correct depends on what the table means, which is game knowledge rather than
a format rule. That is where this stops, and the 166 conflicts stand.

`recomp/discover.py` is unchanged from its state before this work. `x86map.py` keeps the base fix,
which improved its table reporting from 0 of 68 tables fully valid to 72 of 75 and is measured in
the commit that added it.
