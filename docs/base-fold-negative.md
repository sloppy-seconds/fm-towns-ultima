# Base-fold: the source is recoverable, the address is not

**Verdict: NEGATIVE for the experiment as posed.** The 76 `base-fold` routines in
`docs/corpus.json` are not unmatchable because their source is unknown. For the
highest-called routine in the binary the source is now known and 24 of its 25
bytes match. They are unmatchable because our build places a global at its own
address and the linker will not be told to place it at the game's.

This page records the measurement so the next attempt does not repeat it.

## The routine, and its source

`0xf3e24`, 25 bytes, **104 callers**, the most-called routine in the image. It is
the pixel writer.

```
8b 44 24 0c c1 e0 07 8b 54 24 08 66 8b 4c 24 04 66 89 8c 50 90 7e 07 00 c3
```

Disassembled:

```
mov eax,[esp+0xc]          8b 44 24 0c
shl eax,7                  c1 e0 07
mov edx,[esp+0x8]          8b 54 24 08
mov cx,[esp+0x4]           66 8b 4c 24 04
mov [eax+edx*2+0x77e90],cx 66 89 8c 50 90 7e 07 00
ret                        c3
```

Which is:

```c
unsigned short grid[128][64];
void f(int v, int b, int a) { grid[a][b] = (unsigned short)v; }
```

Note the argument order, `value, b, a`, and that the row stride is 128 **bytes**
so a row is 64 `unsigned short`. Eight source shapes were needed to find the
combination that produces `shl 7` with `b` held separately in `edx` rather than
added into `eax` first. A one-dimensional `grid[a*128+b]` gives `add eax,[esp+8]`
instead and diverges at byte 7.

## The measurement, and it is exact

Compiled through `tools/cc.sh`, the source produces:

```
mine: 8b 44 24 0c c1 e0 07 8b 54 24 08 66 8b 4c 24 04 66 89 8c 50 00 00 00 00 c3
tgt : 8b 44 24 0c c1 e0 07 8b 54 24 08 66 8b 4c 24 04 66 89 8c 50 90 7e 07 00 c3
```

Same length, 25 bytes. Differing byte indices: **20, 21, 22.** That is the upper
three bytes of one disp32. Byte 23 is `00` in both, so it is the same four-byte
field and the difference is the value, not the encoding.

So the source shape is settled and one relocation is the entire remaining gap.
This is not a near-miss being called a match: the routine is **unmatched**, and
the register says so.

## Why linking does not close it

`compile` returns OMF `LEDATA`, which carries relocation placeholders by design.
`link` was extended this session to return the linked code bytes, so the
question could be asked of the linker's real output.

Two measurements, through `/api/link`:

| source | linked size |
|---|---|
| `int f(int a,int b){return a+b;}` | 524 bytes, object sha `56139677cdc7`, code present |
| the same with `unsigned short grid[128][64]` | **16,924 bytes**, code at the end, disp32 still `00 00 00 00` |

The twenty-fold size increase is the linker allocating a real data segment for
the array. The displacement stays zero because the fixup targets that segment and
nothing tells the linker where the segment goes.

`-offset 0x77e90` was tried and produces **no output at all**, so it is rejected
rather than ignored. `386LINK` does expose `-offset`, `-segment`, `-group`,
`-order` and `-databreak`, but no combination was found that places a data
segment at a chosen absolute address in the flat model, and `-locate` is
documented as having been replaced by `-offset` for flat memory.

## What this means for the 76

They are excluded from byte matching by a real, measured mechanism, not by
caution. Two things would change the answer and neither was achieved:

1. a link that places the data segment at a chosen absolute address, which the
   linker options do not obviously support in flat model
2. patching the displacement after the fact, which would be editing our own
   output rather than reproducing it, and would prove nothing about the source

The second is worth naming explicitly because it is tempting: overwriting four
bytes to equal the target is not a match, it is a forgery of the evidence.

## What the source finding is still worth

The source for the most-called routine in the game is now known and written
down, which is a real result for reimplementation even though it is not a byte
match. It establishes the pixel grid at `0x77e90` is `unsigned short[128][64]`,
indexed `[a][b]` with a 128-byte row stride, written by a function taking
`(value, b, a)`.

## Related

- `docs/corpus-census.md`: the 76 `base-fold` routines and why the class exists
- `docs/compile-route-dos.md`: the compile route, and the toggle that cracked
  `0xe52c8`
- `docs/decompilation-experiment.md`: result at line 400 on when a constant folds
  to a relocation
