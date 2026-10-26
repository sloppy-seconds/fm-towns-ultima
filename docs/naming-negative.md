# Naming by string reference does not scale, and the reason is structural

**Verdict: NEGATIVE.** Running `tools/fnstrings.js` across all 738 call targets finds
exactly **two** routines that reference any string, and both reference glyph runs
rather than text. 736 reference no strings at all.

This closes the plan that `docs/plan.md` described as "mostly mechanical scaling of
`tools/fnstrings.js`". The scaling was tried and does not work, for a reason that is
worth understanding rather than just recording.

## What was measured

`tools/namecand.js` runs `fnstrings.js` over every address in
`docs/corpus.json` and classifies each hit as decodable text or a `0xEB` glyph run.

| result | count |
|---|---|
| call targets scanned | 738 |
| reference at least one decodable string | 0 |
| reference only `0xEB` glyph runs | 2 |
| reference no strings at all | 736 |

Runtime 15 seconds. Full table reproducible with
`node tools/namecand.js --json`.

## Why it fails, and it is not the tool

`fnstrings.js` works. On `0xeb354` it prints, after a fix described below:

```
"A:\WORLD3.UT2"
"Roster data:ULTIMA II for FM-TOWNS\n"
"LINGUAL=%d\n"
"INTELLIGENCE=%d\n"
"TORCHES=%d\n"
```

That is the roster save routine, named unambiguously from its own strings. The
method is sound.

**The problem is the population.** Both routines this project named from strings
are called **zero times**:

| routine | what it was named from | call sites |
|---|---|---|
| `0xf6ebc` | the town names, `ト・ボニフィス` and others | **0** |
| `0xeb354` | `Roster data:ULTIMA II for FM-TOWNS` | **0** |

Neither appears in the 738 call targets, because neither is reached by `E8`. They
are interior addresses or jump-reached code. So string-referencing routines sit
**outside** the census, and sweeping the census for them was asking the wrong
population. The two hits that did appear are real entries that happen to use the
`0xEB` glyph encoding.

## The tool defect found on the way, which is real and fixed

`fnstrings.js` reported many hits as `(0xEB run, N markers)` placeholders. Two
distinct causes were being conflated:

- a **pure glyph run** (`eb 42 eb 5a ...`), which is genuinely not Shift-JIS and is
  what `ebcorpus.js` handles
- **readable text with one `0xEB` in it**, where the string decoded fine up to that
  byte and the whole thing was discarded

`0x2698` is the second case: `b6 82 c9 8e b8 94 73 ...` decodes to real Japanese
and ends with `eb 91`. The old `render()` bailed out on any `0xEB` without trying.

A second and more damaging defect: a reference can point into the **middle** of a
string. `push 0x2950` gave `"UAL=%d\n"` when the real string begins at `0x294c` as
`"LINGUAL=%d\n"`. A truncated left edge is actively misleading when naming, because
`UAL=` reads as a different field from `LINGUAL=`. `printableAt` now walks back to
the preceding NUL and returns the whole string.

Both fixes are kept: they make the tool correct, and the negative above was
measured after them, so it is not an artefact of the old renderer.

## What this changes about the plan

`docs/reimplementation-gap.md` measures the distance as 738 functions, 38 named,
5.1%. This result says that number cannot be improved by string sweeping, because
the string-bearing routines are not in the 738.

Two consequences.

**The census is not the whole game.** 284 call targets are interior addresses, and
the routines named by text are outside even that set. Whatever the skeleton should
enumerate, a distinct-call-target scan does not capture all of it. That is the same
gap `docs/corpus-census.md` recorded when it found `not-entry` to be 38.5% of
targets, seen now from the naming side.

**The skeleton has to come from the call graph, not from text.** Which is what
`docs/call-graph.md` already argues, and `0xe97c0` the game loop is already found.
The productive next step is reading routines outward from the loop, not sweeping for
strings.

## What was not tried

- String references inside routines found by **jump** rather than by call. That is
  where `0xf6ebc` and `0xeb354` live, and it would need an entry set built from `E9`
  and near jumps rather than from `E8`. Untested, and the obvious follow-up if the
  naming route is pursued.
- Decoding the `0xEB` runs. `docs/eb-renderer.md` and `tools/ebcorpus.js` cover that
  separately and it was not attempted here.

## Related

- `docs/call-graph.md`: owns the named-routine count and argues for the call-graph route
- `docs/eb-renderer.md`: the `0xEB` glyph encoding
- `docs/corpus-census.md`: the 284 interior addresses and what they mean
