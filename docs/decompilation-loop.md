# The decompilation loop: strategy, with the Andon Cord

A hybrid approach to reconstructing the 32-bit FM Towns port of Ultima II. The
goal is maximum certainty at routine level, with hard thresholds that stop
whole-image attempts before they consume the project.

This is the strategy as agreed, amended where the experiment in
[decompilation-experiment.md](decompilation-experiment.md) contradicted it. The
amendments are marked, because two of them invert what the first draft said.

## The three levels, defined

The first draft used "Level 1" and "Level 3" without defining either. All three:

| level | what is compared | verdict |
|---|---|---|
| **Level 1** | one routine's `LEDATA` against its bytes in the image | **in scope** |
| **Level 2** | a contiguous region (a module, a table plus its accessors) | out of scope |
| **Level 3** | a whole linked `ENCHANT.EXP` | **out of scope permanently** |

Level 1 needs no linker. The `LEDATA` in an `.OBJ` is the final code for a
self-contained routine, which is why leaves are the work.

## The loop

```
[ candidate routine ]
        │
        ▼
[ pre-flight gate ]  ── interior address? ──────────► skip, no C written
        │            ── calls out (EXTDEF)? ────────► Trigger 1, no C written
        ▼
[ draft C ]
        │
        ▼
[ Level-1 byte check via the compile API ]
        │
   ┌────┴────┐
   ▼         ▼
 match   divergence
   │         │
   ▼         ▼
 lock    [ Andon check ]
 into           │
 corpus   ┌─────┴─────┐
          ▼           ▼
   fixable shape   unfixable
          │           │
          ▼           ▼
      iterate     PULL CORD
      (≤20 min)        │
                       ▼
              mark behaviourally
              verified, move on
```

## The pre-flight gate

Added after the experiment: it eliminates most work before any C is written.

**Question 1: is it a real function start?**
Work backwards from the address, strip alignment padding (`8b c0`, `90`, `cc`),
require a `ret` before it. `cfgwalk --check` answers a *different* question and
returns true for interior addresses as well, so both are asked.

Measured: of 738 `E8` call targets, **454 are real starts**.

**Question 2: does it call out?**
A routine containing an `E8` or an indirect call has external references, so its
`OBJ` carries `EXTDEF` and `FIXUPP` and its `LEDATA` is not final. Trigger 1
fires immediately; do not write C.

Measured: of those 454, **103 are leaves**.

`node tools/preflight.js <addr>` asks both. `--scan` lists candidates.

## The Andon Cord

### Trigger 1: relocation and link-order noise

**Symptom:** instruction choices match but displacement bytes differ, typically
`00 00 00 00` where the image has a real address.

**Confirmed by the experiment.** `int g; int f(void){return g;}` compiles to
`a1 00 00 00 00 c3` where the image has `a1 3c ea 0d 00 c3`. The `.OBJ`
contains a `FIXUPP` record. The displacement is filled in by the linker, against
a base this build never had.

**Action:** pull. Mark *Logic Verified (Relocation Divergent)*. No C will ever
match these bytes as emitted.

### Trigger 2: register allocation and stack shuffle

> **Amended. The first draft defined this too broadly and would have locked in
> a wrong rule.**

The draft said: pull if locals land in a different register pair, or if stack
slots swap.

**That was wrong for this compiler.** The experiment produced the case directly.
`int f(int p){ return *(short *)(p+0x36); }` emits `83 c0 36 0f bf 00`, add
then dereference, where the target has `0f bf 40 36`, a folded displacement.
The instruction *shapes* differ, not just the registers. Changing `int p` to
`char *p` produced a byte match.

Under the draft's wording that divergence looks like allocator noise and the
cord comes out. It was a source-form signal.

**The corrected test:** pull only when instruction **count and shape** are
identical and only the register names differ. If the shapes differ, the C is
wrong, not the compiler.

Measured evidence that this rule is load-bearing: four compiler flag sweeps
earlier in the project produced byte-identical output. Four *pointer types* here
produced two different sequences. **Source form is the dominant variable.**

### Trigger 3: whole-image and linker blocks

**Symptom:** linking multiple objects yields container differences (`P3` versus
`MP`), library version mismatches, or symbol alignment drift.

**Diagnosis:** this is 1990 build-system archaeology, not game logic. Measured:
`386LINK` produces `P3`; `ENCHANT.EXP` is `MP` with its header verified.

**Action:** pull permanently for Level 2 and Level 3.

> **Amended.** The draft said "the second High C or `386LINK` demands
> build-system archaeology", implying the toolchain is fragile. **The opposite is
> true.** High C compiles in 12 seconds through the API and `386LINK` works,
> resolving `printf` from `HCE.LIB`. Only *container matching* is archaeology,
> and Trigger 3 already rules that out.

## Timeboxes

| task | max | on expiry |
|---|---|---|
| pre-flight | 1 minute | skip the routine |
| Level-1 C drafting | 45 min | flag for deeper Ghidra reading |
| byte-match fine-tuning | 20 min | pull the cord |
| linker flag experiments | **0** | never attempt |

## Post-cord verification: what actually exists

The draft described a dual-execution harness: run the reconstructed C against a
memory snapshot and assert `S_C == S_Tsugaru`.

> **Amended. This does not exist and should not be described as if it does.**
> There is no 32-bit host harness, no memory map, and no way to call one
> reconstructed function with the right calling convention.

What exists today:

| capability | how |
|---|---|
| read live guest memory | `POST /api/cmd {"line":"MD 14:addr"}` |
| snapshot and restore the VM | `SAVESTATE` / `LOADSTATE` |
| captured input | the supervisor API |

So the achievable post-cord check is **snapshot-diff on the real binary**: take
`S_0`, drive a scripted input, take `S_1`, and record which state variables
changed. That confirms what a routine *does* without pretending to run your C.

Anything stronger needs the harness built first. Until then, a routine marked
"behaviourally verified" means **its effect on game state is recorded and
understood**, not that two engines were compared.

## Summary policy

Level-1 matches where the source form cooperates. When a divergence is not a
source-form fix, the cord comes out within 20 minutes and the routine is
recorded with its state effect instead of its bytes.

The work queue is the 103 leaves, not 738 routines.
