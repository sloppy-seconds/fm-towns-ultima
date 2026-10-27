# The drawing clusters: every routine that calls TBIOS, grouped by handler

Rather than name routines one at a time, `tools/triagesweep.js` reads all of them and groups
by the set of TBIOS handlers each calls directly. A shared handler is how the rectangle
cluster was found (`docs/rectangle-cluster.md`), and the sweep shows it was not the only one:
**41 routines call at least one TBIOS stub, and they fall into four groups of two or more.**

Every address below came from `node tools/triagesweep.js --index refindex.json` and
`tools/tbios-read.js` in this session.

## The groups

| count | AH set | handler | what it is |
|---|---|---|---|
| 8 | `0x07` | `0x1c6c` | text attribute setters, thin wrappers |
| 5 | `0x25` | `0x20f8` | tile or sprite blit through a callback |
| 4 | `0x04` | `0xc20` | palette or colour table load |
| 3 | `0x0c 0x46` | `0x1e04`, `0x2d78` | the rectangle cluster, already documented |
| 2 | `0x04 0x25` | `0xc20`, `0x20f8` | sprite draw that also sets a colour |

The rest are singletons, most of them the primitive wrappers `0xe5ab8` through `0xe5ed4`.

## The shared argument buffer

Almost every routine in every group writes to the same addresses:

```
0x7add8  0x7adda  0x7addc  0x7adde  0x7ade0  0x7ade2  0x7ade4
```

`0x7add8` was established by `docs/rectangle-cluster.md` as the four-field rectangle. This
sweep shows the buffer is **longer**: the sprite group writes six or seven fields, reaching
`0x7ade4`. So it is one argument struct shared by every drawing primitive, with different
primitives using different lengths, not a rectangle buffer that happens to be reused.

That is a correction to how the earlier page describes it, and it is recorded there.

## AH 0x25 is a blit through a caller-supplied callback

This is the group with the most members and the most to learn, and the handler is unlike the
others. `TBIOS.BIN 0x20f8`:

```
0x20f8  push eax
0x20f9  call 0x36e4
0x20fe  call 0x22c4
0x2103  pop  eax
0x2104  mov ebx, 0x4218      ; a code address
0x2109  jmp 0x20a0
```

and `0x20a0` ends in **`call ebx`**. So AH 0x25 does not draw; it calls a routine whose
address it puts in `ebx`. `0x4218` is inside `TBIOS.BIN`, so this is TBIOS's own software
blitter being invoked through a function pointer, which is why the handler reads as a
dispatcher rather than a primitive.

The second entry point into the same family, `0x2046`, saves and restores `[ebp+0x28]` and
`[ebp+0x2c]` around a `call ebx`, so it is a **state-preserving** variant: it swaps two
context words, calls, and swaps them back.

### The packed coordinates

The `0x210c` path reads two words and unpacks them:

```
0x210c  cmp [esi+0xe], 0x0
0x2111  je  0x2068
0x2117  cmp [esi+0x10], 0x0
0x211c  je  0x2068
0x2122  call 0x22c4
0x2127  mov eax, [esi+0xe]
0x212a  mov [ebp+0x428], ax     ; low half  -> field 1
0x2132  add ax, ax              ; doubled
0x2135  mov [ebp+0x430], ax
0x213d  shr eax, 0x10           ; high half
0x2140  mov [ebp+0x42a], ax     ; -> field 2
0x2148  add ax, ax              ; doubled
0x214b  mov [ebp+0x432], ax
```

Two dwords at `[esi+0xe]` and `[esi+0x10]`, each holding **two 16-bit halves**, each half
doubled. Four values out of two dwords, all scaled by 2. That is the shape of a sprite
rectangle in units that are half-pixels, or of a tile in units where the source granularity is
2. `docs/rectangle-cluster.md` measured that an 8x16 text cell uses shifts of 3 and 4, so the
doubling here is a different unit and worth keeping distinct.

**Both dwords are tested for zero before use**, which means zero is a sentinel rather than a
coordinate, and the routine returns early rather than drawing at the origin.

## The 11 by 11 viewport

The largest member of the `0x04` group, `0xe8c0c`, is not a colour load at all despite calling
that handler. It is a **two-dimensional loop**:

```
0x0e8c15  cmp [0xcda74], 0x0      ; a global guard
0x0e8c1d  je  0xe8d32
0x0e8c23  call 0xfb37c
0x0e8c28  call 0xfc1f4
0x0e8c2d  mov [ebp-4], 0x0
0x0e8c34  cmp [ebp-4], 0xb        ; outer bound 11
0x0e8c38  jge 0xe8ccf
0x0e8c3e  sub edi, edi
0x0e8c40  cmp edi, 0xb            ; inner bound 11
0x0e8c43  jge 0xe8cc7
```

An **11 by 11** grid with a global enable at `0xcda74`. Both bounds are compared against `0xb`,
so it is 121 cells.

`0xcda78`, `0xcda7a` and `0xcda7c` are the x, y and width that `docs/text-encoding.md`
established from `0xe6eb0`. This loop sits beside them and reads `0xcda74`. That proximity is
worth noting and is not yet explained: the four addresses `0xcda74` through `0xcda7c` look
like one small structure, of which `0xe6eb0` uses the top three and this loop uses the bottom
one.

The arithmetic inside divides by 2:

```
0x0e8c50  shl eax, 0x5
0x0e8c53  cdq
0x0e8c54  sub eax, edx
0x0e8c56  sar eax, 0x1
```

`cdq` then `sub eax,edx` then `sar eax,1` is integer division by 2 for a signed value, which
is the High C idiom this project has documented. So a value is shifted left 5 and then halved,
which is a multiply by 16.

## What the sweep does not settle

- **What `0x4218` is.** It is loaded into `ebx` and called, and it is inside `TBIOS.BIN`, but
  what it draws is not read. The handler family behind it (`0x20a0`, `0x2068`, `0x2046`) has at
  least three entries and only the dispatcher is understood.
- **Which AH value selects which family member.** `0x4218` appears in the `[esi+0xe]` path and
  `0x4294` in the other (`mov ebx,0x4294` at `0x216d`). Two constants, two paths, and the
  condition choosing between them is `[esi+0xe]` and `[esi+0x10]` being zero.
- **Whether the 11 by 11 grid is the viewport.** It is 121 cells and it is guarded by a global.
  That is consistent with a viewport and is not proof of one.
- **What the eight `AH 0x07` wrappers differ in.** They are `0xe5948`, `0xe5960`, `0xe5978`,
  `0xe5990`, `0xe59a8`, `0xe59dc`, `0xe5a3c`, `0xe5a70`, all calling handler `0x1c6c`. Their
  arguments differ and the handler is not read here.

## Reproducing it

```
node tools/triagesweep.js --index refindex.json
```

Needs `refindex.json`, which `tools/refindex.py` writes to the working directory (gitignored):

```
./tools/.venv/bin/python3 tools/refindex.py refindex.json --seeds <seedset>
```
