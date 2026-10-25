# The plot calibration: my first negative result was wrong, and the correction reverses it

**Verdict, corrected: High C 1.7 reproduces the game's division codegen exactly,
and 2.31 does not.** The FM Towns SDK's own compiler passes the discriminating
test that the DOSBox spike failed. The negative result this page originally
carried was an artefact of the source form I chose, not a property of the
compiler.

This page keeps the wrong conclusion visible, because the mistake is
instructive and would otherwise be repeated.

## What I got wrong first

My initial calibration compiled `tools/calibration/plot.c`, which computes the
destination as integer arithmetic:

```c
*(unsigned short *)(0x77e90 + row * 128 + col * 2) = value;
```

High C 1.7 produced `edx` / `add edx,edx` / `mov [edx],ax`, which does not
match the game's `ecx` / `shl` / `mov [ecx],ax`. I concluded that the game was
not built by 1.7.

**That conclusion was unsound**, because `highc-spike.md` already recorded that
High C **2.31 also fails** on that same source form. I had tested the one
formulation that no compiler in the family matches, and read its failure as
evidence about the version.

The spike doc records it plainly: 2.31 on the integer form gives
`mov ecx,[esp+0x8] / shl ecx,1 / add ecx,eax / mov [ecx],ax`, and on the
**pointer form** gives the game's shape. `plot.c` is the wrong probe.

## The test that actually discriminates

`highc-forensics.md` named the real discriminator: **compile a division by a
constant power of two and look for `idiv`.** The game uses hardware `idiv` and
repeated halving (83 `idiv` instructions, 31 `cdq`/`sub`/`sar` chains, one
reciprocal multiply in a megabyte). High C 2.31 emits a bias-then-shift
reciprocal at every optimisation level including `-O0`, so it cannot be the
compiler for the bulk of the image.

So I ran that test on 1.7 inside Tsugaru.

### Division by 16

```c
int f(int x) { return (x - 4) / 16; }
```

High C 1.7, measured:

```
8B442404     mov eax,[esp+0x4]
83E804       sub eax,0x4
99           cdq
B910000000   mov ecx,0x10
F7F9         idiv ecx        <-- HARDWARE DIVIDE
C3           ret
```

The game at `0x0e6a2c`:

```
sub eax,0x4
cdq
mov ecx,0x10
idiv ecx          <-- HARDWARE DIVIDE, same sequence
```

High C 2.31 for the same source:

```
sar eax,2 / shr eax,0x1d / add eax,ecx / sar eax,3
```

**1.7 matches the game. 2.31 does not.** At `-O` the output is byte-identical
to the default, `sha256` unchanged.

### Division by 2, the halving chain

```c
int g(int x) { return (x - 6) / 2; }
```

High C 1.7:

```
8B442404     mov eax,[esp+0x4]
83E806       sub eax,0x6
99           cdq
2BC2         sub eax,edx      <-- exact match
D1F8         sar eax,1        <-- exact match
C3           ret
```

The game at `0x0e6a0f`:

```
cdq
sub eax,edx
sar eax,1
```

**The naive one-power-at-a-time halving is reproduced exactly.** This is the
31-instance pattern, and 1.7 emits it in the same form as the game where 2.31
emits the modern reciprocal.

## The plot probe, re-run on the pointer form

Using the formulation the spike doc records as the game's, and with no local
variable:

```c
void plot2(unsigned short value, int col, int row) {
    *(unsigned short *)(0x77e90 + row * 64 + col) = value;
}
```

High C 1.7, measured, identical at default, `-v-`, `-O`, and `-v- -O`:

```
8B44240C      mov eax,[esp+0xc]
C1E006        shl eax,byte 0x6
05907E0700    add eax,0x77e90
03442408      add eax,[esp+0x8]
668B542404    mov dx,[esp+0x4]
668910        mov [eax],dx
C3            ret
```

The game:

```
8b 44 24 0c   mov eax,[esp+0xc]
c1 e0 07      shl eax,7
05 90 7e 07 00 add eax,0x77e90
8b 4c 24 08   mov ecx,[esp+0x8]
d1 e1         shl ecx,1
03 c8         add ecx,eax
66 8b 44 24 04 mov ax,[esp+0x4]
66 89 01      mov [ecx],ax
c3            ret
```

**Still not byte-identical**, but for a mundane reason now visible: the game's
source used a scaled index `[eax+edx*2]`, and 1.7 does not fold the `col * 2`
into a scaled index on this formulation. It emits `add edx,edx` (or `shl`,
depending on formulation) and then `[edx]` with no scale.

`row * 128` was also tried, and it produces the same result:

```
8b 44 24 0c c1 e0 07 05 90 7e 07 00 8b 54 24 08 03 d2 03 d0 66 8b 44 24 04 66 89 02 c3
```

That is identical to the game in 22 of 29 bytes, including the whole
`shl eax,7` / `add eax,0x77e90` prologue and the 16-bit `mov ax` / `mov [reg],ax`
epilogue. The only divergence is the middle four instructions:

| | bytes |
|---|---|
| game | `8b 4c 24 08` `d1 e1` `03 c8` (load `ecx`, `shl ecx,1`, `add ecx,eax`) |
| High C 1.7 | `8b 54 24 08` `03 d2` `03 d0` (load `edx`, `add edx,edx`, `add edx,eax`) |

Both compute `eax + col * 2` into a register. The game's compiler chose `ecx`
and `shl`, 1.7 chose `edx` and `add`. That is a register-allocation and
instruction-selection difference on a two-instruction idiom, not a
convention, calling-shape or addressing-family difference.

Two further formulations were tried and both are worse than this one. Giving
the pointer a local variable adds a frame. Using a `short *` base and a scaled
index also adds a frame:

```
55 8b ec 50 b8 90 7e 07 00 89 45 fc 8b 55 10 c1 e2 06 03 55 0c
66 8b 4d 08 66 89 0c 50 c9 c3
```

**Any future calibration must avoid locals**, or the frame-pointer comparison
is measuring the wrong thing.

### What the plot probe can and cannot conclude

It **cannot** separate 1.7 from 2.31, because the spike doc records 2.31
matching the game's shape on a slightly different pointer formulation again.
One leaf function with no division is too weak a probe. This is the mistake the
first version of this page made.

The division probes, below, are what actually discriminate.

## Corrected summary of the compiler question

| question | before | after |
|---|---|---|
| does High C 1.7 emit `idiv` for `/16` | unknown | **yes, exactly as the game** |
| does High C 1.7 emit the naive `/2` halving chain | unknown | **yes, exactly as the game** |
| does High C 2.31 emit either | no | no, it emits a reciprocal at every level |
| is 1.7 the compiler that built the game | "no", from a bad probe | **consistent with yes.** No measured contradiction remains |
| is 2.31 the compiler | "yes, for this routine" | **no.** It fails the division test that 1.7 passes |

The FM Towns High C 1.7 kit is now the leading candidate, and it is the one
that runs on the actual target platform with the vendor's own toolchain.

## What is still not established

- **No whole-function byte match yet.** `plot` is 22 of 29 bytes, with a
  register-allocation difference on one idiom. The division probes match the
  *semantics and instruction choice* exactly but isolate one expression rather
  than a whole function.
- **The 33 frame-pointer exceptions** in each direction from
  `highc-codegen.md` are still unexplained.
- **Whether any source formulation makes 1.7 emit `[eax+edx*2]`** rather than
  the two-instruction `add reg,reg` then `[reg]`. Four formulations were tried
  and none did. This may be a genuine codegen difference between the game's
  build and 1.7, which would reopen the version question again on firmer ground
  than the original bad probe.

## Reproducing

The probes are two-line C files. The recipe is
[compiling-on-fm-towns.md](compiling-on-fm-towns.md), and the mechanism is
[highc-compile-success.md](highc-compile-success.md). `./tools/plot-proof.sh`
runs the plot variant. The division probes are one `mcopy` and one batch line
each, exactly as shown above.
