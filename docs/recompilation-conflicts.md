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
| `0xd2b5b` | **52** |
| `0xfcf90` | 9 |
| the other nine | 25 between them |

So the useful work is two functions, not 366 sites.

## Cause one: `0xd2b5b` is an unmasked zero region

`0xd2b5b` decodes as `add [eax],al` ten times, which is the signature of decoding zeros. It is not
inside a zero run, and that is the whole problem: the region `0xd2704` to `0xd2f04` is **86 percent
zeros** but never has 64 consecutive, so the mask at the 64-byte threshold misses every part of it.

It is a record array with mostly-empty records. The zero runs inside it are 59, 60, 59, 60, 59, 60
bytes, separated by four or five bytes of data, with run-start gaps of 65, 67, 65, 67, 71 and so on.
The non-empty cells all look alike:

```
0xd270b region  data bytes: 81 6d eb 40 81 6e
0xd274c region  data bytes: 81 6d eb 48 81 6e
0xd27d0 region  data bytes: 81 6d eb 59 81 6e
```

**Removing the seed does not help, and the measurement says why.** Dropping `0xd2b5b` from the seed
set leaves the conflict count at exactly 366, because it is a *legitimate* target: there is one
`call rel32` pointing at it, from `0xe0646`. So the function is reached normally and the conflicts
arise inside its body, not from a stray seed.

**And the caller is itself suspect.** `0xe0646` is 78 bytes into the function at `0xe05f8`, which
decodes as `mov` instructions at a constant 10-byte stride from its start. That is a data pattern,
not a prologue-to-body sequence, so the `call` at `0xe0646` is most likely data being read as a
call. Confirming that means deciding whether `0xe05f8` is a function at all, which is where this
now stops.

**This is the same population that
[unreferenced-extents.md](unreferenced-extents.md) describes**, read three ways and misread every
time. It is now identified as a cause of recompilation defects rather than a puzzle about content.

**The fix is not a smaller mask threshold.** Lowering it to 8 would mask most of this and also mask
real short gaps between functions. The honest statement is that the conflict is a misdecoded caller,
and the repair belongs at `0xe05f8` rather than in the mask.

## Cause two: `0xd5d` is real code that desyncs

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

280 conflicts inside a function that starts correctly means the descent enters data somewhere in
its body, most likely through a jump table read to the wrong bound. That is a different failure from
cause one and needs the body read rather than the seed removed.

`0xd72 mov ah, 0x66` is worth noting: `0x66` in `ah` is an int instruction number, and this function
is in the low `0xd5d` to `0x1440` region which holds the startup and dispatch code.

## Order of work

1. **`0xe05f8`**: decide whether it is a function. If it is not, the `call` at `0xe0646` is data and
`0xd2b5b` was seeded from a misdecode. Expected to remove 52 conflicts, and it is a boundary
question rather than a repair.
2. **`0xd5d`**: read the body and find where the descent leaves the code. Expected to remove 280.
3. **`0xfcf90` and the remaining nine**: 34 conflicts between them, worth looking at after the two
that matter.

Neither of the first two requires the recompiler to change. Both are about what is fed to it.

## What this does not say

With all 366 removed the output would still not be a playable port: the 24 indirect calls remain,
`MP` still has no entry point, and the function set is 98.7 percent of the corpus rather than 98.7
percent of the game. Fixing the conflicts makes the emitted code trustworthy as code, which is a
different and smaller claim.
