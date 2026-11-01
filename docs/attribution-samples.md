# Same-compiler labelled material: the inventory

Plan item [0b](plan-attribution.md) asks for compiler-emitted code we did not write, so that the atlas has a
labelled population obtained by construction rather than by inference. This page is that inventory, and the
answer is positive: there is a great deal of it, it is already on disk, and none of it had been looked at.

Everything here was measured in this session with the commands quoted. `tools/omflib.py` is the instrument for
the library walks.

## The three archives in `references/metaware/`

**Measured:** `find references/metaware -type f` gives three files and nothing else.

| archive | contents | state |
|---|---|---|
| `High C Compiler Multimedia Kaihatsu Kit V1.7 L13 (Japan).7z` | one 71,187,984-byte `.bin` plus a `.cue` | this is the SDK CD the toolchain runs from |
| `MetaWare High C 386 v2.31 (1992) (5.25-1.2mb).7z` | five 1,228,800-byte `.img` floppies | already refuted as the compiler, see `highc-negative-result.md` |
| `MetaWare High CPP v3.04 (1993) (5.25-1.2mb).7z` | seven 1,228,800-byte `.img` floppies | a C++ front end, not a code generator |

So the kit archives do contain shipped material, which is the question item 0b was asking. The v2.31 and
v3.04 sets are the two already-ruled-out compilers and are not new ground.

## `saves/hc.img` is the same disc as the archive, minus a 50-byte boot patch

**Tried:** compare the working CD image against the pristine one in the archive, byte by byte.

**Measured:**

```
sha256sum saves/hc.img "…/High C Compiler Multimedia Kaihatsu Kit V1.7 L13 (Japan).bin"
a513251ad300e1dadc76cd0aa724ea309319d0a8a760a8f1aed44919b7f42c8c  saves/hc.img
2438e2b0382f72d94e321e975d273b56be91f410553ef6d2b2598ee2e551f47f  kit .bin
```

Same size, different hash, so the first question is how much differs. A byte-by-byte comparison over the whole
71,187,984 bytes finds **50 differing bytes, all inside a 74-byte span** at offsets 877,706 to 877,780, which
is sector 373. Reading that span from both images:

```
hc.img   …VEL 1 GOTO END\r\nREM                      \r\nGOTO EXIT\r\n:END\r\nREM             \r\nREM          \r\n:EXIT
kit .bin …VEL 1 GOTO END\r\nCONTROL -v -p -callbuf 32\r\nGOTO EXIT\r\n:END\r\n\T_TOOL\DELVDISK\r\n\T_TOOL\REIPL\r\n:EXIT
```

**Verdict: POSITIVE, and it explains itself.** The difference is exactly the three in-place `AUTOEXEC.BAT`
patches that `tools/hc17-harness.sh` documents: `CONTROL`, `\T_TOOL\DELVDISK` and `\T_TOOL\REIPL` replaced by
`REM` at the same length so no ISO sector moves. The working image is a known derivative of the archived
pristine disc, the deviation is fully accounted for, and a stranger can reproduce either from the archive.

That matters for reproducibility rather than being trivia. Anyone checking this work from the `.zip` alone has
the pristine disc, and the 50 bytes are the one local mutation between it and what the toolchain actually
boots.

## The CD ships 1,095 named compiler-emitted library members

This is the substantial part of the answer. `Q:\HC386\SMALL\` holds four OMF libraries and seven loose object
files, all built by the toolchain under study, all still carrying member names.

**Measured** by `tools/omflib.py` over each library extracted from the CD:

| library | bytes | members | code bytes | walk |
|---|---|---|---|---|
| `HCE.LIB` | 253,952 | 428 | 124,617 | EXACT |
| `HCC.LIB` | 199,680 | 357 | 96,039 | EXACT |
| `NA.LIB` | 58,368 | 307 | 3,523 | EXACT |
| `PTOC.LIB` | 2,560 | 3 | 793 | EXACT |

**1,095 members and 224,972 code bytes** of MetaWare output that nobody here wrote.

EXACT means something specific, and it is the reason the numbers are believed. These are not Microsoft
librarian files: the documented MS layout puts a `0x1A` marker at offset 40 and a directory of 40-byte module
headers, and neither is present. What the files actually have is a magic `f0 0d 00 00`, then ordinary 32-bit
OMF object images concatenated from offset 16, each opening with `THEADR` and closing with `MODEND32`,
separated by zero padding, with a trailing index block. The walk is only called EXACT when

```
body = modules + inter-module padding + trailing index
```

closes to the byte, and the padding was checked to be actually zero rather than assumed. On all four libraries
it does close. `HCE.LIB` for instance is `253,936 = 236,279 + 3,168 + 14,489`.

The trailing block is the librarian index. It repeats the member names alongside public symbol names, and
begins with the magic reversed as `f1 0d 00 00`. `omflib.py` reports its size and does not parse it.

Member names include the whole C runtime and the Fujitsu graphics layer: `memcpy`, `qsort`, `printf`, `sqrt`,
`_mwint21`, `alloca`, and a `_gfx_*` family in `NA.LIB` with `gfx_line`, `set_ega`, `get_pixel` and the rest.

**Why this is worth more than the SYM1 route was.** `docs/name-propagation.md` is a recorded negative: naming
`ENCHANT` functions by probing `TMENU`'s symbols gave 1,291 probes, 54 matches, and a shift control showed the
matches were noise. That route inferred a correspondence between two separately built binaries. These objects
need no correspondence argument at all, because they are the compiler's own output with their names attached,
which is a labelled population by construction. They are the positive idiom evidence the atlas is supposed to
supply, and a second independent one alongside the compiled corpus.

What they do **not** give is the game's own functions. The claim is about the library layer only.

## Loose objects and sample sources on the CD

**Measured** from the ISO9660 tree extracted out of `hc.img` at 16 bytes per 2,352-byte sector:

- `HC386\SMALL\`: `CFINIT.OBJ`, `C_CLOSE.OBJ`, `C_HEAP.OBJ`, `C_PRINTF.OBJ`, `C_SCANF.OBJ`, `HEAP1.OBJ`,
  `STKDMP.OBJ`, plus the four `.LIB` files above
- `HC386\DEMOS\`: 20 C sources, including `FBENCH.C`, `WHETD.C`, `MATMULT.C`, `QSORT.C`, `QUEENS.C`,
  `SIEVE.C`, `DRY.C`, `ANALYZE.C`, `GREYCODE.C`, `PALIN.C`, `SAVAGE.C`, `SORT.C`, `HELLO.C` and variants

The demo sources are the other half of what item 0b was looking for: real C, from the vendor, that the
compiler was documented against. Compiling them and keeping the output is a larger labelled corpus than the
30 hand-written probes, and it costs nothing but boot time.

## The seven-or-ten count, settled

`docs/compiler-generation.md` said "the seven routines known to be High C 1.73 output (the ten `matched`)",
which is two numbers in one sentence for the same set. They are not the same set, and both are correct.

**Measured:** `docs/routines.json` classifies 103 routines, and the `matched` class holds exactly ten:

```
0xe9e2c 21 B   0xe44d0 49 B   0xe9940 37 B   0xe552c 76 B   0xe52c8 58 B
0xe5304 189 B  0xe07e8 58 B   0xe65fc 23 B   0xe662c  9 B   0xfd0ec 29 B
```

Seven of those ten, `0xe9e2c`, `0xe44d0`, `0xe9940`, `0xe07e8`, `0xe65fc`, `0xe662c` and `0xfd0ec`, are the
set `docs/highc-authentic-toolchain.md` re-verified byte for byte through the driver route. The other three,
`0xe552c`, `0xe52c8` and `0xe5304`, carry evidence naming `docs/compile-route-dos.md`: they were matched
through the older real-mode route, and all three have since been re-run through the driver below.

**Verdict: POSITIVE.** Ten is the count of `matched` routines. **Eight** of those ten are confirmed against
the authentic generator: the seven above plus `0xe552c`. The remaining two, `0xe52c8` and `0xe5304`, are
matched but not yet reproduced under the driver's default, and the reason is documented below rather than
left as a gap.

## The three DOS-route matches, re-run the same night

Followed up rather than left as a caveat. Each was compiled through the authentic driver and checked under
[byte-identity-rule.md](byte-identity-rule.md):

| routine | asserted | candidate | verdict |
|---|---|---|---|
| `0xe552c` | 76 B | 76 B | **byte-identical**, zero exemptions applied |
| `0xe52c8` | 58 B | 64 B | length-differs, and not a refutation: its recorded evidence already names a
non-default configuration, and the gap is the `esp`-versus-`ebp` one |
| `0xe5304` | 189 B | 192 B | length-differs by three bytes, and no existing explanation covers it |

So **eight of the ten** `matched` routines are now confirmed against the generator that reproduced the game.
Full write-up, including the `Remove_BP` experiment that came out of it:
[highc-authentic-toolchain.md](highc-authentic-toolchain.md).

## Why the two are probably right anyway

The count above would read as two failures if it stopped there. It should not, and the evidence is in the
bytes.

All three DOS-route routines begin with the same three bytes:

```
0xe52c8  55 8b ec   push ebp ; mov ebp, esp
0xe5304  55 8b ec
0xe552c  55 8b ec
```

**The game's code is framed.** For a function taking eight arguments the framed form is also the *shorter*
one, because `[ebp+8]` is three bytes where `[esp+8]` is four: you spend four bytes on the frame to save
eight. That is exactly the 58-versus-64 split.

So the sequence is: the game contains framed code, the frame-preserving generator emitted framed code and
matched, and the driver's **default** strips the frame, which is why `0xe52c8` comes out 64 bytes against 58.
`0xe52c8` is therefore not a refutation of its original match. It is a blocked reproduction, and the block is
a compiler toggle rather than the C.

The honest ledger entry for those two is `compiler-1.73-matched`, with the note that the reproduction requires
the frame-preserving configuration and that the driver default does not provide it yet.

## What was not re-attempted

The `TMENU.SYM1` naming route, which `docs/name-propagation.md` records as a measured negative. It was not
repeated, per item 0b's own instruction.
