# The plot calibration test: High C 1.7 does not reproduce the game bytes

**Verdict: NOT byte-identical.** The SDK CD's High C 1.7 code generator
compiled the calibration function `tools/calibration/plot.c` to code with the
same semantics, the same instruction count and the same first 12 bytes as the
game, but a different register allocation and a different doubling idiom. No
flag combination tried closes the gap. This reopens the compiler-version
question in favour of the game being built by a newer High C, consistent with
the High C 2.31 DOSBox spike that did match.

## The test

`plot.c` is the calibration probe: one function whose compiled form in
`ENCHANT.EXP` at `0xf3e04` (and in the 2.31 spike at every -O level) is

```
8b 44 24 0c   mov  eax,[esp+0xc]     ; row
c1 e0 07      shl  eax,7             ; row * 128
05 90 7e 07 00 add eax,0x77e90       ; + framebuffer base
8b 4c 24 08   mov  ecx,[esp+0x8]     ; col
d1 e1         shl  ecx,1             ; col * 2
03 c8         add  ecx,eax
66 8b 44 24 04 mov ax,[esp+0x4]      ; value
66 89 01      mov  [ecx],ax
c3            ret
```

The compile ran inside Tsugaru exactly as in `docs/highc-compile-success.md`
(DOS 6.2 floppy, SDK CD on Q:, generator invoked from AUTOEXEC, output proven
from the floppy image host-side).

## The result

High C 1.7 emitted, at default and at every flag combination tried:

```
8b 44 24 0c   mov  eax,[esp+0xc]
c1 e0 07      shl  eax,7
05 90 7e 07 00 add eax,0x77e90
8b 54 24 08   mov  edx,[esp+0x8]     ; edx, not ecx
03 d2         add  edx,edx           ; add, not shl
03 d0         add  edx,eax
66 8b 44 24 04 mov ax,[esp+0x4]
66 89 02      mov  [edx],ax
c3            ret
```

Side by side:

| bytes 0-11 | bytes 12-19 | bytes 20-24 | bytes 25-28 |
|---|---|---|---|
| identical | game: `8b 4c 24 08 d1 e1 03 c8` | identical | game: `66 89 01 c3` |
| | 1.7: `8b 54 24 08 03 d2 03 d0` | | 1.7: `66 89 02 c3` |

The extracted bytes were confirmed by disassembly (`ndisasm -b32` over the
LEDATA payload) and the object is a clean OMF file parsed by
`tools/omf_code.py`.

## Flags tried, all byte-identical to the default

| invocation | object sha256 (first 12) |
|---|---|
| no flags | `a987a3c26955` |
| `-O` | `a987a3c26955` |
| `-O1` `-O2` `-O3` `-O4` `-O5` `-O9` | `a987a3c26955` (all) |
| `-O -on auto_reg_alloc` | `a987a3c26955` |
| `-O -off auto_reg_alloc` | `a987a3c26955` |
| `-O -on postpone_arg_pops` | `a987a3c26955` |
| `-O -on optimize_xjmp` | `a987a3c26955` |
| `-on scheduling` | `a987a3c26955` |

Note on flag plumbing: the `-O0..-O4` levels are a driver (`HC386.EXE`)
concept, and the driver forwards a bare `-O` to the generator. Calling the
generator directly (`HCD386.EXE`, the only route that works without
TownsMENU) means the level digits are ignored by the generator, which is
consistent with every variant producing the same bytes. If a flag combination
inside the driver would change code generation, it was not reachable from this
route.

## What this means

For the identification, honestly on both sides:

- What still matches: calling convention (cdecl, args at esp+4/8/0xc),
  frameless codegen, the `base + index + disp32` addressing style, and 12 of
  29 bytes including the whole row-offset computation. 1.7 is unmistakably the
  same compiler family that built the game.
- What does not match: register selection for `col` (edx vs ecx) and the
  doubling idiom (`add r,r` vs `shl r,1`). The game's bytes are reproduced
  exactly by High C 2.31 under DOSBox, at every -O level.
- Conclusion: the FM Towns game binary was not compiled by this High C 1.7 at
  any settings reachable here. The version question reopens toward "the FM
  Towns port was built by a newer High C than the SDK CD ships" (the CD is
  version 1.7 of the FM Towns product, and the game's bytes agree with 2.31).
  This is a negative result about version identification, not about the
  compile route, which is proven.

## Reproducing

```
./tools/plot-proof.sh
```

prints the guest-side DIR, the extracted LEDATA payload, and the verdict with
both byte sequences side by side.
