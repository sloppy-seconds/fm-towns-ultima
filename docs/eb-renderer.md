# The renderer does not decode `0xEB`. TownsOS does.

`eb-encoding.md` proved `0xEB` is a Shift-JIS lead byte and that the runs are a private double-byte
character set. What it could not do was find what selects the glyph. **Reading the renderer to the end
answers that: nothing in `ENCHANT.EXP` selects it.**

## The renderer passes raw bytes to the OS

`0xe6e90` builds a buffer and calls the BIOS gateway. The tail of the function:

```
0xe6fa4   mov  [0xcda7c],dx          ; buffer position
0xe6fab   push dword 0xcda78         ; a 2-word X,Y pair
0xe6fb0   push dword 0x7a7d8         ; the text buffer
0xe6fb5   call 0xc5d                 ; BIOS gateway
0xe6fba   mov  eax,[ebx+0x19]        ; advance the cursor by the width it measured
```

Every character in the loop is copied into the buffer unchanged:

```
0xe6f05   mov al,[edi]               ; read the source byte
0xe6f07   mov edx,[ebp-0xc]
0xe6f0a   mov [edx],al               ; store it verbatim
```

**There is no lookup, no table, and no transformation.** The function's entire job is:

1. walk the string, deciding **how many bytes each character occupies** (the `0x81`-`0x9F` /
   `0xE0`-`0xFC` lead-byte tests)
2. copy the bytes into a buffer at `0xcda7e`
3. tell the OS where to draw it
4. advance the cursor by the width

**The drawing is `call 0xc5d`, which is the Fujitsu BIOS gateway.** TownsOS receives the bytes and maps
them to glyphs.

## What that means for the mapping

**The mapping from `0xEB`-range code points to glyph shapes is not in `ENCHANT.EXP`.** It is in TownsOS,
or in a font file TownsOS loads. That is why:

- twelve probes found no character table in the executable
- no bitmap region with glyph structure exists
- no code writes `0xEB` as an immediate to consult a lookup
- the code never compares against `0xEB` at all, only against the lead-byte ranges

**Every negative on record is now explained by one fact.** The project was searching the game for
something the operating system owns.

## What would answer it, and what would not

**Would:**

1. **A savestate plus the TownsOS font.** If the OS keeps a font bitmap in RAM, it is in the savestate.
   The `0xEB` run addresses are known and the shapes could be read out and compared.
2. **The TownsOS font file on the disc**, if it ships as a file rather than living in ROM.
3. **The FM Towns technical reference for the text output BIOS call**, which documents which font is
   used and whether a private character set is selectable.

**Tried and failed: a font search on an existing savestate.** The test looked for a region where every 32
bytes is a 16x16 glyph with plausible ink and all adjacent glyphs differ, which is the signature of a CJK
font in memory. It found one candidate at state `0xa9200` scoring 511 of 511 adjacent glyphs distinct, and
rendering it showed **dense scattered noise with no letter structure**. Random data with a uniform byte
distribution passes that test. **A distinctness test alone cannot distinguish a font from noise**, and the
next attempt needs a positive signal such as a known glyph appearing where expected.

**Would not:**

- Any further scan of `ENCHANT.EXP`. It is settled that the answer is not there.
- More crib-based substitution from the adjacent Shift-JIS strings. `eb-encoding.md` records that the
  runs are shared word tokens, not transcriptions, so the cribs do not align.

## For a reimplementation

**This is better news than it looks.** A reimplementation does not need to decode the private character
set if it renders the same strings in modern Shift-JIS. What it needs is:

- **which string** each routine displays, which `tools/fnstrings.js` already gives
- **where** on screen, which the text-window record at `0x7aee4` gives

It does not need the original glyph shapes, and it does not need the original code points. A
reimplementation that shows the correct Japanese text in a modern font is faithful to the game's
behaviour, not to its font.

**The one thing it does lose** is the ability to say which of the 78 adjacent pairs are the same sentence
in two encodings. That is a documentation nicety, not a blocker.

## What this page does not claim

- Not that the private set is undocumented anywhere. It is undocumented *in this repository*, and the
  three routes above would document it.
- Not that `0xc5d` is the only drawing path. `0xf3e04` and `0xf3dec` are pixel writers used by `0xf78d4`,
  so some output bypasses the text BIOS. Whether any of that output is text is not established.
- Not that the font is impossible to obtain. It is outside the executable, which is all that is claimed.

---

**[The `0xEB` encoding](eb-encoding.md)** **[The text renderer](text-renderer.md)** **[The `0xEB` corpus](eb-corpus.md)**
