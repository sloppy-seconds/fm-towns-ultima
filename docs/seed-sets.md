# Seed sets for all three games, derived rather than curated

**U1 and U3 now have seed sets, built by the same method, and the method was validated against
U2 first where the answer is known. The derived sets are clean but small, and combining them with
the curated U2 set gives the best result.**

## Why derivation was needed

`docs/corpus.json` is a seed set for `ENCHANT.EXP` and took many sessions to build. `DARKNESS.EXP`
and `EXODUS.EXP` had nothing, so the guarded walk could not run on them and no cross-game
comparison was possible.

Neither binary carries a symbol table: `SYM1` is absent from both, checked by searching the file.
The disc carries no map or listing files for them either. So the starts have to be derived.

## The method, in `tools/seeds.js`

1. Scan every byte for `E8` (`call rel32`) and `E9` (`jmp rel32`) and record the target.
2. Reject targets outside the image, or inside a zero region, because a target in zero fill is
   decoding `add [eax], al`.
3. Reject targets named only once, which is the over-count correction: an `0xE8` inside an operand
   produces a plausible target that no other site agrees with.
4. Walk from each survivor **alone**, and keep it only if that walk produces zero conflicts.

Step 4 is the one that matters and the first two attempts got it wrong. Testing a candidate by
adding it to the full seed set measures nothing, because the candidate is already in that walk and
changes no conflict count. Measuring each seed in isolation is what exposes the bad ones.

Addresses are raw file offsets. For these images file offset equals virtual address, proved in
[two-frames-of-reference.md](two-frames-of-reference.md) by the pixel writer at `0xf3e24`.
`tools/funcs.js` works in the header-stripped frame and reports that function at `0xf3e04`, so its
output cannot be fed to the walker without conversion, which is why this is a separate tool.

## Validation against U2, where the answer is known

The derived candidates agree with the curated corpus, and the disagreement is informative:

| | |
|---|---|
| derived seeds | 430 |
| corpus C-shaped rows | 681 |
| in both | **333 (49%)** |
| derived only | 97 |
| corpus only | 348 |

Half the corpus is not a direct call target. Those functions are reached through tables, exported,
or called indirectly, and no `rel32` scan will find them. **So a derived set alone cannot be
complete**, and pretending otherwise would be the same error as trusting the pointer scan.

## Per-seed isolation exposes the bad seeds

Of the 430 derived candidates, **86 produce conflicts on their own and 344 do not.** A handful are
catastrophic:

| seed | conflicts alone | instructions |
|---|---|---|
| `0xec126` | 388 | 18,953 |
| `0xec11f` | 388 | 18,953 |
| `0xebf8f` | 388 | 18,953 |
| `0xf0c80` | 238 | 11,004 |

A seed that spawns 18,953 instructions and 388 conflicts is not a function start. Keeping only the
clean ones gives:

| binary | candidates | clean | rejected | functions | bytes | conflicts |
|---|---|---|---|---|---|---|
| `ENCHANT.EXP` | 430 | **344** | 86 | 461 | 44,076 | **0** |
| `DARKNESS.EXP` | 505 | **406** | 99 | 527 | 53,197 | **0** |
| `EXODUS.EXP` | 446 | **345** | 101 | 459 | 51,509 | **0** |

**All three now walk with zero conflicts.** That is the first time either U1 or U3 has been walked
at all, and it is clean, which says the compiler's output and the container assumptions hold in
both.

## The derived sets are clean but small

U2 with the derived set reaches 44,076 bytes. The curated set reaches 127,239. The derived set is
much purer and much less complete, which is what the 49 percent overlap predicts.

Combining them beats either:

| seeds | functions | instructions | bytes | conflicts |
|---|---|---|---|---|
| curated only (672) | 709 | 40,943 | 127,239 | 366 |
| derived-clean only (344) | 461 | 14,419 | 44,076 | 0 |
| **union (747)** | **768** | **41,108** | **127,698** | 366 |

The union adds 59 functions and 459 bytes over curated alone. The conflicts come with the curated
set, so they are the next thing to look at and are not caused by the derivation.

## What this does and does not establish

**Established:** a method that derives function starts from a Pharlap `MP` binary with no symbols,
validated against a hand-built corpus, and three clean seed sets where there was one.

**Established:** U1 and U3 walk with zero conflicts, so the zero mask, the container facts and the
decoder assumptions transfer across the trilogy.

**Not established:** that any of these sets is complete. The 49 percent overlap says the derivation
sees only direct call targets. Neither U1 nor U3 has a corpus to check against, so their coverage
figures mean nothing yet, and the honest status for both is "walks cleanly from what can be found".
