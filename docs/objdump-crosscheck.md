# objdump as a second opinion, and the four globals it recovered

**Verdict: POSITIVE, and it was worth doing for a reason I had not predicted.** Using
GNU `objdump` to cross-check the operand classification in `tools/globals.js` found
that the ndisasm-based classifier was **missing whole references**, and the count of
globals went from 118 to 122.

## What was asked, and what was found

The question was whether a different disassembler would help. The motivation was
narrow: `ndisasm`'s continuation-line trap had just cost a routine's length and 99
corpus row sizes, so alternatives were worth surveying.

| tool | status | verdict |
|---|---|---|
| GNU objdump 2.46.1 | installed | worth using, shown below |
| llvm-objdump | not installed | no clear advantage over GNU |
| radare2, rizin, Cutter | not installed | analysis frameworks, not text emitters. Ghidra was already rejected on measurement in `docs/ghidra-viability.md` |
| objconv | not installed | object-format converter, and this project already parses OMF |

The one that mattered is `objdump`, and not because its format is nicer. Because it
prints operands **structurally**:

```
mov    eax,ds:0xceca0                  absolute
add    DWORD PTR [edx+0xcde89],eax     base + displacement
mov    WORD PTR [eax+edx*2+0x77e90],cx base + index*2 + displacement
```

`tools/globals.js` was inferring those three cases by regex on `ndisasm` text. That
inference had already produced a factor-of-three error once. Reading the structure
instead of inferring it removes the guess.

## The measurement

`tools/globals_od.js` classifies operands from objdump and `--compare` runs both
tools over the 76 base-fold routines.

First run: **23 agree, 53 disagree.** That looked damning for `globals.js` and was
wrong, because the comparison itself was broken: it matched `-> 0x...` across the
whole `globals.js` output, including the section headed "code references excluded",
so every correctly-excluded branch target counted as a disagreement. Fixing the
comparison gave **71 agree, 5 disagree**.

The remaining 5 were split into two kinds.

### A real false negative in `globals.js`

`0xe30a0` contains `cmp dword [eax+edx+0x392c8],0x0`. That is base + index with an
implicit scale of 1, and **`ndisasm` prints it with no `*1`**. The classifier required
`/\*\s*[1248]/` to recognise an index, so it saw one register and one displacement and
called it a struct field. Four globals were invisible: `0x392c8`, `0x392cc`, `0x392d0`,
`0x392d4`.

Fixed by counting registers rather than requiring a printed scale: a displacement plus
either a scale or two registers is an index expression. `0xe30a0` went from 3 data
references to 7, and agreement to **73 of 76**.

### The consequence for the published count

| figure | value |
|---|---|
| before this work | 118 distinct globals |
| after the fix | **122** |

`docs/globals-step2-plan.md` and `docs/globals.json` carry the old figure and are
corrected here. The four recovered globals are a per-id table at `0x392c8` with
four-byte fields, consistent with the pair at `0xce408` and `0xce488`.

### Two remaining disagreements, both false positives in `globals.js`

`0xe5578` has `mov dword [0x7b374],0x7b274`: a store to an absolute address whose
**immediate** is also an address. `globals.js` counts both, objdump counts the
destination. The immediate is data being written, not a reference the routine uses.
That over-count is real and not yet fixed.

`0xfdecc` is the reverse and is not yet explained: objdump reports `0xdea48` and
`globals.js` misses it, so there is still at least one false negative in the ndisasm
path.

## What this does not change

The `ndisasm` tools stay. `ndisasm -w` is correct and is now guarded by a check in
`tools/checkall.js`. Rewriting sixteen tools to parse a different text format would
be a large change with a fresh set of parsing bugs.

`objdump` is used **only** as a second opinion on operand classification, where the
two methods disagreeing is itself the signal. That is the value: not a better
disassembler, but an independent one.

## The general lesson

Two independent implementations of the same classification disagreeing is worth more
than either alone, and it found a defect that six checks in `checkall.js` did not,
because none of them compared the classifier against anything. The cost was one
afternoon; the class of bug it catches, a detector quietly missing an operand form,
is the same one that has now appeared five times in this project.

## Related

- `docs/ndisasm-continuation.md`: the `-w` trap and its guard
- `docs/globals-step2-plan.md`: where the 118 figure was published
- `docs/ghidra-viability.md`: why decompilers are used to read, not to find
