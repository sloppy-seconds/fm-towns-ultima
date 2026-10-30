# Why this is hard, and what each obstacle cost

The question this page answers is the one people ask after they find the port: could this be turned into readable C,
and if it is possible, why has it not happened. The short answer is that nothing about this binary is guessable, and
none of the machinery that makes a 1990 binary tractable exists for this one.

Each obstacle below is a measured finding on another page, and this page links to it instead of copying it. That is
deliberate. A number quoted in two places is a number that will eventually disagree with itself, which has already
happened here more than once. Where an obstacle needs a figure to make sense, the linked page owns the figure.

The order is the order a person trying this meets them, not the order of importance.

## 1. The compiler, and which version of it

The game was built with MetaWare High C, and the version is load-bearing rather than a curiosity: the candidate that
looked right by date produces a different division idiom from the one in the image, and the version that produces the
idiom in the image was found later, on the same disc, in a form nobody had tried. Two compilers were calibrated before
that was settled and one of them is recorded as a measured negative.

Read [the negative result](highc-negative-result.md) for the discrimination, [the V1.7 kit](highc-v17.md) for what
was found, and [the generation question](compiler-generation.md) for the part that stayed open afterwards. The
reproducible result, seven routines from the authentic toolchain, is
[here](highc-authentic-toolchain.md).

## 2. Getting a compiler onto an FM Towns at all

A decompiler needs the compiler's output to calibrate against, so the compiler has to run. It runs inside the
emulator, from media built by this project's own tools, and the route has a long tail of traps: an environment
variable with a different name than the modern one, a prebuilt library where the other version shipped sources, a
DOS boot disk that will not run the Windows-era installer, and an installer that does not install.

[The frozen recipe](compiling-on-fm-towns.md) is the page to read, and it exists precisely because none of it is
reconstructible. [Why the DOS route became the default](compile-route-dos.md), [the two-floppy toolchain](two-floppy-toolchain.md)
and [the negative on running High C under plain DOS](highc-dos-negative.md) are the detours.

## 3. No symbols, and a trap where symbols do exist

The three game binaries carry no symbol table. The menu program on the same disc does, and it is parseable, which is
the trap: it names the Fujitsu library layer, and every attempt to propagate those names into the game produced a
measured negative, because the two are different builds of different programs that happen to call the same library.

[The discovery and the record format](palette.md) covers the table itself, and
[name propagation, tried and negative](name-propagation.md) is the obstacle. The consequence for a decompile is that
the library layer is known by name and the game's own functions are not.

## 4. Function boundaries, and a prologue that is only half a signal

There is no reliable way to spot a function start by looking at its first bytes. The frame prologue is a real signal
and it is also a partial one, and the earlier claim on this project's own pages was too strong in the other direction
and had to be corrected by measurement. A prologue byte pair also occurs inside data, so a scan finds starts that are
not starts.

[The re-test](function-recovery.md) has the measured share and the correction, and [the call graph page](call-graph.md)
owns the count of call targets that is the working set instead. The census that classifies those targets is
[here](corpus-census.md). The honest summary: the `call` target is the signal that works, and the set of them is a
body of work rather than a solution.

## 5. Zero padding, and why a byte scan lies

A large part of the image is zero fill, which is BSS rather than code. A pattern match can land in it, a descent that
reaches it decodes as an instruction anyway, and a sweep of the whole image with either available disassembler produces
an enormous disagreement that means nothing, because both tools are walking through data.

[The padding trap](code-analysis.md), [why the decoder sweep failed](capstone-gate.md),
[the two decoders compared](decoder-comparison.md) and [the walk that refuses seeds inside zero fill](cfgwalk.md) are
the four pages. The rule that came out of them is in [the tooling policy](tooling-policy.md): decoding starts from a
seed, always.

## 6. Seeds, and what unlocks them

Given the above, everything depends on where you start decoding, and the binary cannot supply that. A Phar Lap image
normally gets its function starts from the linker, and there is nothing here to read them from. So the seeds are this
project's own inference, which means a share of them is wrong before it is used, and the wrongness shows up as
recompiler conflicts rather than as an error message.

[What the toolkit needs and the game cannot give](fmtownskit-and-seeds.md) is the framing,
[the reach figure](guarded-walk-coverage.md) is what one small seed set buys,
[the two walks compared](walk-comparison.md) is the conflict count, and
[what the conflicts turned out to be](recompilation-conflicts.md) is the answer: a diffuse-looking number that sits in
a handful of functions. [Seeds for the other two games](seed-sets.md) is the cross-validation.

## 7. Indirect transfers, which were not a wall

Jump tables and computed branches look like the hard part of any 32-bit decompile, and a session was spent resolving
them statically before the measurement said something more useful: the recompiler emits an unresolved transfer as a
dynamic call, and it works. The static problem was the wrong problem.

[The branch census](indirect-branches.md) and [what the runtime captures resolved](indirect-resolution.md) carry it,
including the part where the remaining unresolved sites turned out to be the C runtime rather than game logic.

## 8. The runtime, which is where the time actually went

None of the above stops a program from running. The runtime does. Getting the recompiled module to boot this game meant
reconstructing what TownsOS hands a program at start-up: descriptors, a memory map, a disc layer, a floppy drive, a
keyboard, a screen, a font, and a heap limit that is not a constant but a value read out of a descriptor at run time.
Every one of those was invented wrong first, and every one had to be right before a single screen matched.

[The plan page with the divergences](recomp-plan.md) records the descriptors, the allocator and the floppy.
[The missing text](port-missing-text.md) is the deepest of them, and its answer is that the font is a file on the disc
rather than in any ROM, which is why the boxes drew and the glyphs did not. [The result](recompilation-result.md) is
that it plays.

## 9. Why a Borland-era binary would be easier

This section is reasoning rather than measurement, and it is marked as such because the rest of the page is not.

A Borland-era target would arrive with help. A Turbo Link map file or a Borland symbol table names functions. Borland
binaries have uniform prologues that a scanner can rely on. The runtime library is identifiable, so a large fraction of
the image is recognised rather than decoded. Published tools expect the format, and a decompiler project would have
tested on it.

None of those helpers exist for a Phar Lap `MP` image built by MetaWare High C on an FM Towns. That is the actual
answer to "why is this hard": not that the code is clever, but that every shortcut a decompiler normally leans on is
absent, so the shortcuts had to be built. The toolkit that made the port possible came out of a different FM Towns
project for that reason, and [what transfers from it](fmtownskit-and-seeds.md) is the record of how much did not.

The same absence is why the obvious tools do not work here. [Ghidra's viability was tested](ghidra-viability.md) and it
is real but seed-hungry: an import with no entry points under-decodes badly, so it reads code rather than finding it.
Reko has no Phar Lap loader at all, which is a known upstream gap rather than a configuration problem.

## What this adds up to

The corpus is complete enough to run the game, and the port is the proof of that. It is not complete enough to
reimplement the game from, and the measured distance is [the gap page](reimplementation-gap.md). The obstacle that
matters most from here is not any of the nine above, it is that most routines have never been read, which is
[the call graph](call-graph.md) and the plan's Phase 1 to 5.

Reading order for someone who wants to judge the project rather than reproduce it: [the goal, stated](goal-behavioural-faithfulness.md),
[this page](why-this-is-hard.md), [the gap](reimplementation-gap.md), [the port plan](recomp-plan.md).
