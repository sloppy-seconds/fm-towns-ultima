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
