# The two walks, compared

Two independent control-flow walks now exist over the same 1,071,886-byte image, and until
`tools/recondiff.js` nobody had put their answers side by side. They disagree, and the disagreement is the
useful part: it names work we were not seeing and work that is not there.

- **Ours.** `tools/cfgwalk.js`, seeded from every `E8 rel32` call target in the image. That is the same rule
  `docs/call-graph.md` counts with, and it gives the 738 starts the queue is built on.
- **fmtownskit's.** The recompiler in `build/port/recomp`, seeded from the MP header entry plus the rules in
  [fmtownskit-and-seeds.md](fmtownskit-and-seeds.md). It reports 0 refused and 0 conflicts and emits 818
  functions.

## The frames, and the one that would have produced a fake answer

This project tracks four frames of reference ([two-frames-of-reference.md](two-frames-of-reference.md),
plus the guest frame the module uses). fmtownskit's emitted names are guest addresses: `void f_00000009` is
guest `0x9`, which is file `0x209`. `tools/cfgwalk.js` strips 0x20 rather than 0x200, so its addresses are
**guest + 0x1E0**.

Converting one side without the other produces a clean empty intersection, which reads as "the two walks
share nothing" rather than as an error. So the delta is one named constant in `tools/recondiff.js`, and it
is checked at run time against two anchors that are call targets in both walks: guest `0x9` and guest
`0x105a78`, the first and last functions the module emits. If either anchor is missing after conversion the
tool exits 2 without printing a comparison, because every number below would be a lie.

## The measurement

Run `node tools/recondiff.js`.

| | ours | theirs | in both | theirs only | ours only |
|---|---|---|---|---|---|
| instruction starts | 39,190 | 41,847 | 36,658 | 5,189 | 2,532 |
| function starts | 738 | 818 | 697 | 121 | 41 |

The instruction overlap is 87.6 percent of their set and 93.5 percent of ours. The function overlap is 697,
which is most of both, so the two walks broadly agree and the differences are the question.

## Their 121 extra function starts, classified

| class | count | what it means |
|---|---|---|
| inside a run of zero bytes | 0 | the collision failure this project already had once. Zero is the result that matters |
| an instruction boundary our walk decoded but no CALL reaches | 77 | jump-table entries and indirect targets, which is a coherent explanation and not a defect |
| an address our walk never reached | 44 | a reachability fact about our seeds, **not** a disagreement about the bytes |

The third row needs care, and the first version of this tool got it wrong by calling it "not a boundary". It
means only that our walk never arrived there. Guest `0xe7238` is one of the 44 and begins `ff 05 e0 ae 07 00`,
which decodes cleanly as `inc dword ptr [0x7aee0]`. The address is very likely a real function head that no
`E8` in the image points at, so our seed rule cannot find it and theirs can. `node tools/recondiff.js --verbose`
lists all 44 with their bytes.

## Our 41, and the seven that are not routines

Of the 41 call targets the module does not emit as functions, 30 it never decodes at all and 4 are decoded as
instructions but not emitted as starts. The remaining **seven land inside runs of zero bytes**, which no
routine can:

```
0x17309  0x9829b  0x9b26b  0xcfc34  0xd295b  0xd29c5  0xd2c47
```

These are `0xE8` bytes that occur inside data and happen to point at zero fill. They are the collisions this
project suspected in its own seed set, and the count is now exact: seven entries in the queue are not
routines. The queue still counts them, because the queue is derived by the same byte rule, so 738 is an upper
bound on the number of routines and 731 is the figure the image supports.

That is a correction to the denominator used in the recovered fraction, not a change to the numerator.

## What this comparison cannot do

fmtownskit emits instructions, not source, so it cannot say whether a recovered routine is semantically
right. It says where code is, where an instruction starts, and where a function starts, and those are the
three things this project's collisions came from. It is a boundary check, not a meaning check.

Two further limits worth stating:

- the instruction comparison is between two decoders but not between two independent readings of the same
  address, because overlap is counted on addresses. Where both walks call an address an instruction start,
  they agree by construction, since the bytes are the same. What the difference measures is coverage.
- a count agreeing is not a placement agreeing. Nothing here compares the length assigned to an instruction.

## How it is checked

`node tools/checkall.js` runs the comparison as the gate `walk comparison`. It asserts the eight counts
above and the seven addresses by name, so a new bad seed fails loudly instead of quietly lowering a
percentage. `tools/recondiff.js` exits 1 for exactly that reason, and a run that exits 0 while reporting call
targets in zero fill is itself a failure.

The gate was tested in both directions before being trusted:

- a module copy with one emitted file removed drops the function count from 818 to 780 and the shared count
  from 697 to 663, so a missing or stale module cannot pass silently
- deleting the file that holds the first anchor makes the tool exit 2 with the anchor named

## What is now known

- The two walks agree on 697 function starts and 36,658 instruction starts, so neither is badly wrong.
- Seven of the 738 queue entries are `0xE8` bytes in data, listed above. The queue's denominator is
  therefore 731 routines, and this is the first exact measurement of the collision count.
- 77 of the module's extra starts are instruction boundaries no CALL reaches, which is what a jump-table
  member or an indirect-only target looks like from our side.
- 44 of them are addresses our seed rule cannot reach, and at least one of those decodes cleanly as a real
  function head. So our seed coverage has a measurable hole, and it is now enumerated rather than suspected.
