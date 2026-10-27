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
