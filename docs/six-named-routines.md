# Five routines named from their strings

`tools/fnstrings.js` had been reporting every routine `0x20` off, and once that was fixed
(`docs/two-frames-of-reference.md` is the underlying issue) it named functions quickly. This
page records the ones identified in one pass, with the strings that identify them.

Every address here was confirmed against the recompiler's 794 verified function starts, so each
is a real entry and not a plausible-looking interior address.

## `0xeb374`: the save and load system

**73 string references, the largest in the binary.** It names every save file the game uses:

```
0xeb3d6  push 0x26f4  "A:\ROSTER1.UT2"
0xeb3f6  push 0x2748  "A:\ROSTER1.UT2"
0xeb4be  push 0x27a4  "A:\WORLD1.UT2"
0xeb4df  push 0x27b0  "A:\WORLD2.UT2"
0xeb4f6  push 0x27bc  "A:\WORLD3.UT2"
0xeb51d  push 0x27d4  "A:\WORLD4.UT2"
0xeb6cd  push 0x28e8  "A:\ROSTER1.UT2"
0xeb7d6  push 0x2990  "(%d)NAME=%s\n"
0xeb935  push 0x2a8c  "GOLD=%d\n"
```

`ROSTER1.UT2` appears three times, so this one routine handles **read, write and one more
operation** on the roster, rather than three routines each doing one. `WORLD1` through `WORLD4`
are the four era saves, and `docs/disc-and-binaries.md` records the measured sizes: roster
3,657 bytes and world 68,096 bytes.

Span: `0xeb374..0xebb90`. It ends exactly where the item-count writer begins, which is the next
routine.

### `0xebb90`: the inventory record writer

Immediately after `0xeb374`, and reachable as its continuation rather than as a separate entry
from a call:

```
0xebbbd  mov  0x2c08  "SKULL_KEY=%d\n"
0xebbc4  mov  0x2c18  "GREEN_GEM=%d\n"
0xebbcb  mov  0x2c28  "BRASS_BUTTON=%d\n"
0xebc04  push 0x2c58  "STRANGE_COIN=%d\n"
```

Plus a run of `push 0x1000` with the literal `"...."`, which is the fixed-width placeholder
field the roster format uses. Call it `roster_write_items`.

Note these are `mov`, not `push` for the first three, and `push` for the fourth. That
inconsistency is in the binary, not in this page: the compiler chose a different encoding for
one of four otherwise identical calls.

## `0xe22f4`: the sound effect dispatcher

```
0xe2361  push 0x1350  "Q:\SOUND\BUMP.SND"
0xe2374  push 0x1378  "Q:\SOUND\WHAT.SND"
0xe2387  push 0x13a0  "Q:\SOUND\BUL1.SND"
0xe239d  push 0x13c8  "Q:\SOUND\KATANA1.SND"
0xe23b0  push 0x13f0  "Q:\SOUND\MONSTER1.SND"
0xe23c3  push 0x1418  "Q:\SOUND\DOOR3.SND"
0xe23d6  push 0x142c  "Q:\SOUND\BOMB4.SND"
```

24 references, span `0xe22f4..0xe25cc`. The `push` addresses reported are `0x1350`, `0x1378`,
`0x13a0`, `0x13c8`, `0x13f0`, `0x1418`, `0x142c`, which are 0, 40, 80, 120, 160, 200 and 220
bytes from the first.

**Those are not the string starts.** Reading the bytes directly shows the table is 4-byte
aligned and variable length, not strided:

```
$ python3 -c "d=open('ENCHANT.EXP','rb').read(); a=0x1350; ..."
0x1350  len 17  Q:\SOUND\BUMP.SND
0x1364  len 17  Q:\SOUND\FIRE.SND
0x1378  len 17  Q:\SOUND\WHAT.SND
0x138c  len 19  Q:\SOUND\MAGIC3.SND
0x13a0  len 17  Q:\SOUND\BUL1.SND
0x13b4  len 19  Q:\SOUND\MAGIC4.SND
0x13c8  len 20  Q:\SOUND\KATANA1.SND
0x13e0  len 21  Q:\SOUND\MONSTER1.SND
0x13f8  len 18  Q:\SOUND\BOMB5.SND
0x140c  len 18  Q:\SOUND\DOOR3.SND
0x1420  len 18  Q:\SOUND\BOMB4.SND
```

So `0x13f0` is not a string start at all: it is twelve bytes into `Q:\SOUND\MONSTER1.SND`
and reads `1.SND`. `0x142c` is four bytes into `Q:\SOUND\BOMB4.SND` and reads `B4.SND`.

**This page's first version called it a 40-byte stride and then a 20-byte one, and both were
wrong.** The reported addresses come from `fnstrings`, which by design also lists references
that point into the middle of a string, because a compiler can share a suffix. Here that
feature produced two plausible-looking string starts that do not exist, and the mistake was
writing a stride theory on top of them instead of reading the bytes.

What the routine therefore shows is a **table of sound names at 4-byte alignment with variable
lengths**, and seven of them referenced. `docs/string-tables.md`'s "exact 20-byte stride" claim
is on the same table and should be treated as doubtful until it is read the same way. It is
recorded there as in need of re-measurement.

## The pattern in the rest

`fnstrings --top` is now dominated by routines whose every string is `(0xEB run, N markers)`.
That is not a failure of the tool: it is `docs/text-encoding.md`'s unresolved `0xEB`, and 3,652
occurrences of it mean most Japanese text renders as an `0xEB` run. Those routines cannot be
named from strings until `0xEB` is settled.

The routines that *can* be named are the ones referencing ASCII paths, format strings and item
names, which is why the six above are all of that kind.

## What this does not say

- **What `0xeb374`'s three `ROSTER1.UT2` uses each do.** Read, write and something else is a
  guess from the count of three; the arguments at each site were not read.
- **Whether `0xebb90` is called or only fallen into.** It is a verified start in the recompiler
  and `0xeb374`'s span ends there, but whether a call targets it is not checked.
- **The sound table layout.** 4-byte aligned, variable length, established above by reading the
  bytes. `docs/string-tables.md` claims an exact 20-byte stride on the same addresses and is
  doubtful for that reason.

## Reproducing it

```
node tools/fnstrings.js 0xeb374
node tools/fnstrings.js 0xe22f4
node tools/fnstrings.js --top 14
```
