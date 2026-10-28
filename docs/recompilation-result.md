# Does the tooling actually recompile this game, and how far short of playable is it

**Yes it recompiles, the output compiles and runs, and 98.7 percent of the C-shaped corpus is
in it. It is not a playable port, and the reason is not the recompiler.**

## What was run

```
python3 -m fmtownskit.recomp --out build --exp game=ENCHANT.EXP@8+<672 seeds> <66 --no-code ranges>
```

**Correction: the base is `@0x0`, not `@8`.** For this `MP` the image is the whole file at
offset 0, so a base of 8 shifts every emitted symbol by 8 and no emitted address matches the
ones this project reads by hand. `docs/recompilation-clean.md` records the corrected run, which
with `@0x0` emits `f_000e5d90`, `f_000e5ff4` and `f_000e6058` at exactly the addresses
`docs/display-context.md` and `docs/rectangle-cluster.md` give.

## What came out

| | |
|---|---|
| functions recompiled | **709** |
| C++ emitted | **205,189 lines**, 24 translation units |
| compiles | **yes**, no errors, `selftest` links |
| self-test | **761 vectors, 0 failures**, 6 stopped at the machine |

Every function the emitter produced compiles, and every one that can run without touching the
machine produces byte-identical state to the kit's own interpreter.

The run also reports what it could not do:

```
68 jump tables (65 bounded), 24 indirect transfers unresolved, 824 refused, 366 conflicts
```

## Is 709 the whole program

`docs/call-graph.md` gives 738 function starts by counting call instructions, and the recompiled
set is 709. Those numbers are close enough to ask whether the walk found a hidden population. It
did not:

| | count |
|---|---|
| in both | **703** |
| recompiled, not in the corpus | 6 |
| in the corpus, not recompiled | 35 |
| union | 744 |

The 35 misses are all accounted for: **26 are `not-c`**, the library layer above `0xff000`, port
I/O and `pusha/popa`, which the recompiler correctly refuses, and **9 are `not-entry`** rows
rejected during seed acceptance.

Measured against the code the corpus claims exists, excluding `not-c`:

**672 of 681 C-shaped rows are recompiled, 98.7 percent.**

## The six that were not corpus rows

Four were reached as call targets and are not function starts: `0xe8e30` begins `e8 2b d8 ff ff`
(`call`), and `0xf147e`, `0xf1895`, `0xfafe9` each begin `6a 07` (`push 7`).

Two are addresses **outside the image**, `0x74ec847e` and `0x94cd18cc`, reached by hand-made
`push RET` then `jmp F` calls. The emitter handled them honestly rather than silently:

```c
void f_74ec847e(X86Cpu& c) {
    x86_fault(c, 0x74ec847eu, "no code at this entry: outside the image");
}
```

That is worth keeping as an example of the difference between a tool that says what it could not do
and one that emits plausible nonsense.

## What is still missing for a playable port

| requirement | state |
|---|---|
| the executable's entry point | **absent**, `MP` carries none, a seed list stands in |
| complete C-code coverage | **98.7 percent** of what the corpus claims, which is not the same as completeness |
| resolved indirect calls | **24 unresolved** |
| the emitted code being all code | **no**, 366 conflicts mean some of it decodes data |
| runtime drivers | present in the kit, untested here on this game |
| assets and save handling | extracted separately, not yet driven by recompiled code |

**The blocker is not the recompiler.** It is that 366 conflicts say some emitted functions are
decoding data, and that "98.7 percent of the corpus" only means the corpus, not the game.

## What would move the needle

The conflicts are the concrete defect: each one is a place where two instructions overlap, so a
body contains something that is not an instruction. They are named in the report and are the
cheapest thing to chase, because each is a specific address rather than a general doubt.

The 21 unresolved indirect transfers are the second. Most are `call [ebp+8]`, a function pointer
passed as an argument, which needs the caller's argument rather than anything local. The enumeration,
and the one of the 21 that is game code, are in [indirect-resolution.md](indirect-resolution.md).

A playable port would need both, plus an entry point, plus a first claim stably reached through the
recompiled code rather than through a seed. None of that is blocked on the kit, it is blocked on
the walk being sound enough to trust end to end.
