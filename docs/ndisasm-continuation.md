# The ndisasm continuation trap, and how it is solved

**Verdict: solved, with `-w`, and it was distorting measurements across the whole
project.** Twelve tools were parsing `ndisasm` text without the one flag that
prevents the problem, and the consequences were wrong routine sizes across most of
the corpus rows that contained a long instruction.

## What the trap is

`ndisasm` wraps a long instruction onto a continuation line that begins with `-`
and carries hex but no mnemonic:

```
000E6B25  C7840849070000FF  mov dword [eax+ecx+0x749],0xffffffff
         -FFFFFF
000E6B30  8D840814070000    lea eax,[eax+ecx+0x714]
```

Any parser that splits lines on whitespace and reads a mnemonic column sees the
continuation as either a malformed instruction or a separate one.

## The fix

`ndisasm -w`, documented as **"wide output (avoids continuation lines)"**:

```
000E6B25  C7840849070000FFFFFFFF            mov dword [eax+ecx+0x749],0xffffffff
000E6B30  8D840814070000                    lea eax,[eax+ecx+0x714]
```

The wrapped line collapses into one and the trap cannot occur. **No tool in this
repository used `-w` before this change.**

## What it was costing

Three measured consequences, all of which produced confident wrong answers:

**1. A false mismatch that nearly became a wrong conclusion about the source.**
`0xef548` was reported as 9 bytes when it is 11. The missing bytes were part of
the immediate `30 00 00 00` and included a `0xc3`, so the routine looked *short*
rather than corrupt, and comparing the truncated target against a correct build
suggested the source was wrong.

**2. Wrong sizes in most corpus rows that contained a long instruction.**
Regenerating with `-w` changed 99 rows, every one of them a size correction (the
total is owned by `docs/call-graph.md` and is not restated here). Classification
did not flip for any routine, so the census's conclusions survive, but every size
it published was potentially wrong.

**3. An analysis performed on truncated input.** `0xe6a58` was recorded as 222
bytes and is **228**. The attempt written against it in
`docs/nonleaf-reopened.md` was made on a partial disassembly, and its 15-store
layout was derived without the final `lea` at `0xe6b30`.

## Why the previous fix was insufficient

An earlier repair to `trycands.py` taught it to join continuation lines by
matching `\s+-([0-9a-f]+)$`. That was correct for that one tool and left the other
eleven exposed, and it left the joining logic to be reimplemented in each. The
flag removes the problem instead of handling it, which is why it is the better
fix.

## The guard

`tools/checkall.js` now asserts that **every** `ndisasm` invocation in `tools/`
passes `-w`. It found eight tools that the manual pass had missed, including two
invocations in `decompile-run.js` and a printed hint in `pharlap.js` telling a
human to run `ndisasm` without the flag.

Verified able to fail by reverting the flag in one tool, which produced
`FAIL ndisasm uses -w (1)`, and passing again once restored.

## The general lesson

This is the third appearance of the same defect class, and the pattern is
consistent: **a tool that silently answers the wrong question is
indistinguishable from one that answers correctly**, and the only reliable
detector is a known case that must produce a specific answer. `0xef548` is 11
bytes, `0xe6a58` is 228, and both are now asserted in
`tools/checkglobals.js` so that a future parser regression fails immediately
rather than six turns later.

## Related

- `docs/nonleaf-reopened.md`: the `0xe6a58` attempt, made on the truncated reading
- `docs/corpus-census.md`: the 738 targets and their classification
- `docs/globals-step2-plan.md`: where `0xef548` was first misread
