# The `enter` band: what two measurements established

**Verdict: the band uses `enter` 100 percent and `push ebp` 0 percent, while the rest of the
image is the exact reverse. That is a build-unit boundary, not a selection rule inside one
compiler. Both units come from the same toolchain, and the block is compiler output, not
assembly.**

This is steps 1 and 2 of the plan in `docs/enter-cluster.md`, run.

## Step 1: classify the band by kind

All 41 census entries in `0xfdb9a`-`0xfe46e`, classified by what they actually do:

| kind | count |
|---|---|
| C-shaped, frame reached through `[ebp+N]` | **26** |
| assembly stub (`int`, `pushal`, `in`/`out`, `cli`) | 3 |
| other (tiny accessors, no frame) | 12 |

**Every one of the 27 routines that starts with `enter` is C-shaped**, except `0xfdb9a`. None
of the `enter` routines is an assembly stub. The three stubs are `0xfdee8`, `0xfdfa2` and
`0xfe0f1`, and all three use `pushal`/`int`/`out` and **none** uses `enter`.

So the band is not "a pile of assembly". It is compiled C, plus a few stub routines that were
already classified `not-c`.

## Step 2: the boundary, measured

Counting every census entry by prologue form:

| region | routines | `enter` | `push ebp; mov ebp, esp` |
|---|---|---|---|
| `0xfd000`-`0xfefff` | 69 | **27** | 2 |
| everywhere else | 385 | 2 | 175 |

**And both of those 2 `push ebp` routines in the `0xfd`-`0xfe` pages sit at `0xfd34c` and
`0xfd96c`, both *before* the band begins at `0xfdb9a`.** Inside the band itself the split is:

| inside `0xfdb9a`-`0xfe46e` | count |
|---|---|
| starts with `enter 0,0` | 27 |
| starts with `push ebp; mov ebp, esp` | **0** |

That is not a mix. It is one form for the whole block and the other form for the whole rest of
the image.

## The epilogue does not differ, so it is only the prologue

All 27 `enter` routines end in `leave; ret`. The first 40 `push ebp` routines sampled also end
in `leave; ret`. So the two blocks share a calling convention, an epilogue and a stack layout,
and differ **only** in how the frame is opened.

That matters: a different calling convention would have shown up here. It does not.

## What this establishes, and the one thing it does not

**Established:**

- The band is compiled C, from the same toolchain, with the same convention and epilogue.
- Inside it, `enter 0,0` is used every time and `push ebp` never.
- Outside it, `enter` appears 2 times in 385 and `push ebp` 175.

**Not established:** why two blocks from one toolchain differ in this one instruction. Three
readings remain, and this measurement does not separate them:

1. **Two compilation invocations with different settings**, where one setting is not in the 43
   toggle names. The `hc386set.cnf` `ARGS` line is per-installation, and a second pass run with
   a different config file would do exactly this.
2. **Two assembler passes.** The C compiler emits assembly, and if one block went through an
   assembler configured with a macro that rewrites `push ebp; mov ebp, esp` to `enter 0,0`,
   that is a build-step difference rather than a compiler difference.
3. **Code from a different release of the same toolkit**, which is the reading
   `docs/enter-is-platform.md` left the door open to after refuting "different compiler".

Reading 2 is the most interesting, because it explains the Fujitsu launcher too: Fujitsu's own
build could have used the same macro for part of its code, or not at all.

## What to test next, and what not to

**Worth trying:** recompile a known `enter` routine under a **second** config file. We control
`hc386.cnf` and `hc386set.cnf` on the kit and have never varied them. If `ARGS` or a toggle
inside the config file rather than on the command line changes the prologue, reading 1 is answered.
That is one experiment and we own the file.

**Not worth trying:** more source shapes. The prologue is not source-determined here, or the same
source would not appear in two forms in one image.

**Not worth trying:** a second compiler release. Both binaries carry the same `1983-1988`
runtime banner.

## Related

- `docs/enter-is-platform.md`: refutes the different-compiler reading
- `docs/enter-cluster.md`: the interleaving, and why a linked library was ruled out
- `docs/compiler-toggles.md`: the 43 command-line toggles, all of which are exhausted
- `docs/routines.json`: `0xfdea0`, `0xfde90`, `0xfdebc` remain parked on this
