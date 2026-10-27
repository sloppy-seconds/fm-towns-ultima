# What the shared `enter` routines are: TBIOS trap stubs

**Verdict: the shared core that uses `enter` 44 percent of the time is the FM Towns BIOS
interface layer. Those routines are thin wrappers around `int 0x90` and a trap dispatcher at
`0xfe13c`. That identifies the *code* but still not the *compiler trigger*.**

This answers the three questions `docs/enter-census.md` raised, and it changes what the parked
routines are.

## The shared routines, listed

`ENCHANT` and `DARKNESS` share 30 `enter`-framed routines byte for byte. Size distribution:

```
15:1  16:2  21:7  23:1  26:9  28:2  29:1  31:3  34:1  37:1  54:1  154:1
```

Typical members, in full:

```
0x249   enter 0,0
        mov ah, 0x4
        mov al, [ebp+0x8]
        int 0x90
        movzx eax, ah
        leave
        ret

0x269   enter 0,0
        mov ah, 0x5
        mov al, [ebp+0x8]
        int 0x90
        movzx eax, ah
        leave
        ret

0x28b   enter 0,0
        mov ax, 0x600
        int 0x90
        movzx eax, ah
        leave
        ret
```

**`int 0x90` is the FM Towns BIOS interrupt.** Each stub loads a TBIOS function number into
`ah`, passes a byte argument in `al`, traps, and sign-extends the result. They are the boundary
between the C game and the hardware.

## The dispatcher they funnel through

`0xfe13c` is called by 19 of the `enter`-framed routines, more than any other target. It is:

```
push fs
push gs
push edi
lgs edi, [0xdea2c]
push ax
mov ax, 0x110
mov fs, eax
pop ax
call [0x80]
pop edi
pop gs
pop fs
ret
```

That is a trap dispatcher: load a segment selector from `0xdea2c`, set `fs`, then `call [0x80]`.
Every hardware-touching `enter` routine goes through it.

## And `0xfe211` is the same kind of routine

The routine parked as `not-c` all session, now recognisable:

```
0xfe211  enter 0,0
         push ebx
         mov bl, [ebp+0x8]
         mov ah, 0x46
         call 0xfe25d      <- the same trap dispatcher, different entry
         movzx eax, al
         pop ebx
         leave
         ret
```

Same `enter`, same `mov ah,imm`, same byte argument, same `movzx` on return, same
`leave; ret`, same trap call. **It is one of this family**, which is why three tests failed to
reproduce it from ordinary C: it is a BIOS stub, not ordinary C.

## What this establishes

- The high-`enter` population is **the hardware interface layer**, identified by what the code
  does rather than by a statistic.
- `0xfe211` belongs to it, so its park reason is now explained: not a compiler anomaly, a stub.
- The 12.5 percent `enter` rate in game-specific code is the rate among *actual game logic*.

## What it still does not explain

**Why these stubs use `enter` and the C routines mostly do not.** Both came out of the same
compiler, and the stubs are written in C (they take an argument at `[ebp+8]`, return through
`eax`, and end `leave; ret`, which is the compiler's own convention, not a hand-written epilogue).

So a plausible reading is now available that was not before: the trigger is **a C function whose
only side effect is a hardware trap**, or more generally a function shape the compiler treats
specially. That is a specific hypothesis with a specific test, which is to write a C function that does
nothing but load a register and trap, and see whether the compiler chooses `enter`.

That test **cannot be run with this kit**, which is now measured.

**High C 1.73 has no usable inline assembly here.** Four spellings were tried through the
TownsOS driver:

| spelling | result |
|---|---|
| `__asm { mov ah,4 }` | no object file produced |
| `#pragma asm ... #pragma endasm` | no object file produced, under `-on asm`, `-on ASM`, `-pragma asm`, `-on inline_asm` and no flag |
| `_asm mov ah,4;` | no object file produced |
| `asm("mov ah,4")` | **compiles, but emits the text as data**: the tail of the object is `6d 6f 76 20 61 68 2c 34`, which is the ASCII string `mov ah,4`. Not an instruction. |

**And the kit ships no assembler.** `DIR Q:\HC386\BIN\*.EXE` lists `386LINK`, `AUTOCFIG`,
`CONFIG`, `HC386`, `HCD386`, `HCXREF`, `XREF`, `XREFP`. There is no `386ASM` and no `MASM`.

So the trap body cannot be produced on this toolchain by any route: not from C, and not from
assembly, because there is no assembler to assemble it with. The stubs in the game were built
with something this kit does not contain, or with a source form it does not document.

That is a real limit and it should stop the inquiry rather than send it round again. It also
explains the shape of every failure in this investigation: the thing being reproduced is a
construct the available tooling cannot express.

## Correction to carry forward

`docs/enter-band-boundary.md` recorded the band in `ENCHANT` as C-shaped and distinct from the
surrounding assembly stubs. That is still true at the instruction level, but the distinction was
the wrong one: these are **C wrappers around assembly traps**, so they are C at the frame and
hardware at the leaf. The band is the BIOS interface layer, and its boundaries are the boundaries
of that layer.

## Related

- `docs/enter-census.md`: the rate measurements this page explains
- `docs/enter-compiler-emitted.md`: the local-size evidence
- `docs/enter-band-boundary.md`: the band, reinterpreted here
- `docs/addressing-limits.md`: the BIOS gateway and segment handling
