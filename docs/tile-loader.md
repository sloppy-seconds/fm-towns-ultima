# The function at `0xe7b38`

**Supersedes the earlier reading of this page**, which placed the function entry at
`0xe7b58` and called it an "ENEMY2 tile loader indexing tiles by `index * 512`". That
reading was wrong in its entry point, wrong about what it loads, and wrong about the
direction of the copy. The measurements below are from a full disassembly of the
function rather than a byte-pattern search.

## How the earlier reading went wrong

The earlier probe searched for `shl r32, 9` and found four sites each followed by
`add eax, <bank base>`, spaced `0x2000` apart. From that it concluded "four banks of
sixteen tiles", which is arithmetically true and is the one part that survived.

What it missed: those four sites are inside a **single loop body**, not four branches,
and the shift is of a **counter**, not of a tile index read from the map. The `0x2000`
spacing is the bank layout, not the iteration stride.

## What the function actually does

Entry is **`0xe7b38`**. The prologue is `push ebp`, `mov ebp,esp`, `sub esp,0x30`, then

```
0xE7B40  mov  dword [ebp-0x24], 0        ; counter = 0
0xE7B47  cmp  dword [ebp-0x24], 0x10     ; while counter < 16
0xE7B4B  jnl  0xe7ce5                    ; exit
```

Inside the body there are **four blocks**, A to D, run in sequence on every iteration:

| block | source literal | destination bank |
|---|---|---|
| A | `0x07b578` | `0x0b5578` |
| B | `0x07c778` | `0x0b7578` |
| C | `0x07f778` | `0x0b9578` |
| D | `0x07f978` | `0x0bb578` |

Each block does the same four things:

1. Save 8 dwords from `[esi+0x1e0]` to the stack frame.
2. Shift 120 dwords up by `0x20`: for `edi` from `0x77` down to 0,
   `[esi+edi*4+0x20] = [esi+edi*4]`.
3. Restore the 8 saved dwords to `[esi]`.
4. Compute `dest = ([ebp-0x24] << 9) + BANK`, then copy 0x80 dwords (512 bytes) from
   `esi` to `dest` with `lodsd` / `mov [edx],eax`.

Then `inc dword [ebp-0x24]` and jump back to the top.

## The arithmetic

- Shift per iteration: `0x20` bytes, which is **8 dwords**.
- Sixteen iterations: `16 x 0x20 = 0x200`, which is **exactly one 512-byte tile**.
- Destination per iteration: `counter << 9`, so slot `counter` of the bank.
- Sixteen slots at `0x200` each: `0x2000`, which is **exactly the bank stride**.

So the loop **scrolls a 512-byte window through a source region, one tile's worth at a
time**, writing each successive window to the next slot of a 0x2000-byte bank.

That is a **ring buffer**, or a scroll buffer. It is not a lookup that maps a map value
to a tile.

## Verdict

**POSITIVE** for the function's structure, its four banks, and its source regions.
**NEGATIVE** for the earlier claim that this indexes tiles by a map value.

The four banks at `0x0b5578`, `0x0b7578`, `0x0b9578`, `0x0bb578` are real and are
`0x2000` apart, and each is filled by a scroll of its own source region. So the earlier
conclusion "four banks of sixteen tiles" is **correct as a description of the buffers**,
and the account of what fills them was wrong.

## Why this does not answer the map question

The thing wanted here was the code that turns a map byte into a tile. This function does
not do that. It moves buffers.

That is a genuinely useful negative: it closes off the most promising candidate, so the
map-index code has to be found elsewhere. It also explains why the earlier RAM check of
these banks at the death screen returned zeros: they are working buffers, emptied or
never filled outside the rendering path.

## What the source regions are

All four source literals (`0x07b578`, `0x07c778`, `0x07f778`, `0x07f978`) fall inside
the **337 KB zero-fill block that starts at `0x07b557`**. Note that `0x07b557` is one
byte before the first literal, which is what a BSS section boundary looks like.

So both the sources and the destinations are uninitialised in the file. Neither can be
read statically. Confirming what flows through them needs a savestate taken during
rendering, not one taken at the death screen.

## Reproducing this

```bash
node -e '
const fs=require("fs");
const buf=fs.readFileSync("/var/tmp/ENCHANT.EXP").slice(0x20);
fs.writeFileSync("/var/tmp/loader3.bin", buf.slice(0xe7b38,0xe7cf0));
'
ndisasm -b32 -o0xe7b38 /var/tmp/loader3.bin
```

`ENCHANT.EXP` comes off the disc, or from `node tools/expimage.js --dump`.

---

**[The code](code-analysis.md)** **[Open questions](open-questions.md)**
