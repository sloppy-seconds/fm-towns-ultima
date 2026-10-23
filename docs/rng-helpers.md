# The random number helpers

Two functions wrap the generator at `0x101a40`, and both are small enough to read completely.
They are what any formula in the game uses to get a random number in a range.

## `0xe3d4c`: `randRange(lo, hi)`

```asm
0x0E3D4C  push ebp / mov ebp,esp / push edi
0x0E3D50  mov  edi,[ebp+0x8]      ; edi = lo
0x0E3D53  call 0x101a40           ; eax = RNG, 0..32767
0x0E3D58  mov  ecx,[ebp+0xc]      ; ecx = hi
0x0E3D5B  sub  ecx,edi            ; ecx = hi - lo
0x0E3D5D  inc  ecx                ; ecx = hi - lo + 1
0x0E3D5E  cdq
0x0E3D5F  idiv ecx                ; edx = RNG % (hi - lo + 1)
0x0E3D61  add  edx,edi            ; edx = lo + (RNG % span)
0x0E3D63  xchg eax,edx            ; return in eax
```

**`randRange(lo, hi)` returns `lo + (rand() % (hi - lo + 1))`, inclusive of both ends.**

The `inc ecx` after the subtraction is what makes the high end inclusive rather than exclusive.
That matters for evaluating any formula: a call with `(0, 9)` yields 0 to 9, ten values, not
0 to 8.

## `0xe1c5c`: `randMod(n)`

```asm
0x0E1C5C  push ebp / mov ebp,esp / push edi
0x0E1C60  mov  edi,[ebp+0x8]      ; edi = n
0x0E1C63  and  edi,edi
0x0E1C65  jnz  short nonzero
0x0E1C67  sub  eax,eax            ; n == 0, return 0 without calling the RNG
0x0E1C69  jmp  short done
nonzero:
0x0E1C6B  call 0x101a40           ; eax = RNG
0x0E1C70  lea  ecx,[edi+0x1]      ; ecx = n + 1
0x0E1C73  cdq
0x0E1C74  idiv ecx                ; edx = RNG % (n + 1)
0x0E1C76  xchg eax,edx
done:
0x0E1C77  pop edi / leave / ret
```

**`randMod(n)` returns `rand() % (n + 1)`, in other words an inclusive range of `0` to `n`.**
When `n` is zero it returns zero without consuming a random number, which is a guard against
the divide.

Note the asymmetry with `randRange`: `randMod` takes one argument and implicitly has a low
bound of zero, and it computes `n + 1` rather than `n`.

## Why this matters for the combat formulas

Every random roll in the game goes through one of these two functions, and both are now exactly
characterised:

| function | formula | range |
|---|---|---|
| `0x101a40` | `state = state * 0x41c64e6d + 0x3039` | 15 bits, `0` to `32767` |
| `0xe3d4c` | `lo + (rng % (hi - lo + 1))` | `lo` to `hi`, inclusive |
| `0xe1c5c` | `rng % (n + 1)` | `0` to `n`, inclusive |

So a combat formula that calls `0xe3d4c` with `(0, strength)` does **not** produce
`0..strength-1`, it produces `0..strength` inclusive. That is one more value than a naive
reading would give, and it is exactly the kind of off-by-one that would make a measured formula
fail to fit.

**The earlier TypeScript U3 reference has the same shape** in one place: `rng.range(0, p.strength | 1)`.
Whether that range is inclusive in that port was not checked, so it is not used as evidence
here. What matters is that the FM Towns function is now read directly.

## What is still needed to state U2's combat formulas

**The callers.** The four call sites of `0x101a40` are at `0xe1793`, `0xe1c8b`, `0xe3d73` and
`0xe3dad`. The third is inside `0xe3d4c` and the second inside `0xe1c5c`, which accounts for
two. The other two are in functions that do something before and after calling the RNG.

What has not been done is finding the callers of `0xe3d4c` and `0xe1c5c`, which is where the
actual game formulas will be. `tools/msgcallers.js --target 0xe3d4c` collects them.

**This is now a bounded task with a known shape.** The arithmetic is no longer the obstacle.

---

**[More core routines](more-routines.md)** **[Plan](plan.md)** **[Open status](open-status.md)**
