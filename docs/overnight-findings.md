# Overnight campaign, attribution groundwork

Run on branch `overnight-attribution` from `fc8e00b`, unattended. Seven commits, all gates green at every one
of them, nothing pushed.

## 1. What was asked

The attribution groundwork that gates the recomp track, in dependency order: item 0a the forward idiom atlas,
item 0b the labelled-sample inventory, item 12a the byte-identity equivalence rule as code, and item 0c
clustering if 0a finished clean.

## 2. What was done

| item | state | commits | artefacts |
|---|---|---|---|
| 0a forward idiom atlas | **DONE** | `78afdb3`, `fffdb50`, `6a378cb` | `tools/atlas-corpus/` (37 probes), `tools/atlas-build.py`, `tools/atlas-report.py`, `docs/idiom-atlas.md` |
| 0b labelled-sample inventory | **DONE** | `868b963` | `tools/omflib.py`, `docs/attribution-samples.md`, seven-or-ten count settled |
| 12a byte-identity rule | **DONE** | `0a17b5b` | `tools/byteid.js`, `docs/byte-identity-rule.md` |
| 0c clustering | **DONE** (accepted as a negative, 2026-11-02) | `d6d4b8a`, `6a378cb` | `tools/cluster.py`, `docs/ledger.json`, `docs/clustering-0c.md` |

Supporting: `tools/look.py` (vision read of the guest screen), `tools/toskey.py` (safe keystroke encoding),
`tools/omflib.py`, and four new gates in `tools/checkall.js`.

## 3. What was claimed, and what checked it

Every claim below has a command behind it, and every gate was broken on purpose once to confirm it can fail.

**The atlas's never-emits list is real.** Measured over 37 compiled probes, disassembled from bytes the real
High C 1.73 driver emitted. Gate: `forward idiom atlas` in `checkall.js`, which asserts the probe count, a
non-empty never-emits list, the `xor`/`sub` headline in both directions, doc cross-references, and a
too-narrow-corpus tripwire. **Seen to fail** when the `xor` predicate was made unconditional.

**Three of the atlas's own conclusions were wrong, and probes caught all three before any of them corrupted an
attribution.** This is the most important thing in the report, because each one was a ready-made mislabelled
function set.

- "`test` never appears." Refuted by A34: `if ((a & b) == 0)` compiles to `test dword ptr [esp + 8], eax`. The
  clustering pass had already counted 43 game functions using `test`, and under the uncorrected atlas those 43
  would have been labelled hand-written assembly on evidence that was really an unprobed source shape.
- "`and reg,reg` as a truthiness test is an unexplained shape in 220 functions." Refuted by A37: `while (p)`
  compiles to `and edi, edi; je`. Ordinary compiler output, and a fifth of the module.
- "No string op, ever." Refuted by A39: `memcpy(d, s, n)` inlines to
  `shrd; shr; rep movsd; shld; rep movsb`. The census had found 25 game functions using a string op and they
  looked like the strongest hand-asm candidate in the module. They are ordinary inlined library code.

All three corrections are recorded on the page as corrections rather than quietly applied. What survived is
narrower and stronger than what was there: the discriminator is the **shape** of a test or a copy, not the
presence of an instruction, and the one exclusion signal that withstood being probed is `xor reg,reg` for
zeroing, which A33 and A40 both refused to produce.

**The byte-identity rule does not buy its verdicts with masking.** Gate: `byte-identity equivalence rule`,
asserting self-comparison identity on a sample, that a one-byte flip differs, that a truncated candidate does
not verify, that an unasserted address is refused, and that the L1 and L2 predicates reject non-addresses and
accept a backward displacement. **Seen to fail** when `L1` was made unconditional. Independently verified
against real toolchain output: the standalone build of `0xe9e2c` comes out `byte-identical` with **zero**
exemptions applied.

**One honest negative on the rule.** Measured with its own predicates, the per-site demonstrations refuse **0 of
1,288** sites on a 150-function sample, so they are validity guards rather than discriminators and the
narrowing comes from the encoding predicate. An earlier draft claimed 19-of-6,243 refusals, counted with a
different classifier than the rule uses; that number was a paraphrase of a different measurement and is
corrected on the page.

**The 0b inventory is a walk, not a scan.** `tools/omflib.py` only reports EXACT when
`body = modules + padding + index` closes to the byte, and the padding was checked to be actually zero. All
four libraries close: 1,095 members, 224,972 code bytes. The `hc.img` versus pristine-kit difference is 50
bytes in a 74-byte span and reads out as exactly the three documented `AUTOEXEC.BAT` patches.

**The seven-or-ten count is settled.** Ten routines are classed `matched` in `docs/routines.json`; seven of
those ten are the driver-route re-verification. Both numbers were always right and the sentence that put them
side by side was the bug. Gate: `matched-routine count`, **seen to fail** when the expected count was changed.

## 4. Two follow-ups completed past the stated scope

**The three DOS-route matches were re-run through the authentic driver**, because item 0b's own report said
they should be before being cited as 1.73 output. Result: `0xe552c` is **byte-identical** with zero exemptions
applied, so the driver-verified count goes from seven to **eight of ten**. `0xe52c8` comes out 64 B against an
asserted 58 B, which is not a refutation but an independent reproduction of the `esp`-versus-`ebp` gap
`highc-authentic-toolchain.md` already describes. `0xe5304` comes out 192 B against 189 B and is the one
genuinely open case.

**The `Remove_BP` blocker is partly cleared.** That page recorded the toggle as unreachable because the
front-end tokenises on the underscore. It is reachable: `HC386.EXE @R1.RSP` with `A42.C -Hoff=Remove_BP` in
the response file compiles and links cleanly, underscore intact. What it does is nothing, the output is
**byte-identical** to the default build, verified by comparing the two `.EXP` files rather than their sizes.
So the state moves from "blocked on the tokenizer" to "accepted by the driver, not yet effective on the code
generator", which is a lookup in `doc/hc17um.doc` rather than an obstacle. `-off Remove_BP` in the answer file
confirms the routing: the driver forwards unrecognised switches to `386LINK`, not to the generator.

**The lookup was done, and it closed the question in the other direction.** The manual confirms the syntax is
`-Hon=`/`-Hoff=` and the toggle is `Remove_BP`, so the spelling was never the problem. The driver's
`HC386SET.CNF` was then edited directly, with the driver copied to a writable directory so it auto-detects
`HCDIR` there. Three variants, each a boot: `-off remove_bp` in `ARGS` reaches the answer file and errors,
which proves the config is read; `-Hoff=Remove_BP` compiles cleanly and is byte-identical to the default; and
`-Hon=Quiet`, the control, fails to suppress the banner. So toggles through `ARGS` are **accepted and inert**,
not misspelled. The remaining explanations are a build where the toggles are compiled out or a route that
applies them elsewhere, and neither is worth another boot. Full table in
`docs/highc-authentic-toolchain.md`.

Both are written up in `docs/highc-authentic-toolchain.md` and `docs/attribution-samples.md`.

## 5. What is outstanding, by plan item

**0c needs a decision from you.** The clustering works and the ledger is committed, but the item's own
acceptance check fails and I did not tune it away. The enter band does not cohere at any granularity: a sweep
over every prefix of the 21 axes peaks at 37% in the largest cluster and falls to 21% across 19 clusters at
full granularity. Coherence gets *worse* as the vectors get richer. Separately, the item's stated band is
self-inconsistent: "41 routines in 2,260 bytes, `0xfdb9a..0x105000`" cannot both hold, since 2,260 bytes from
`0xfdb9a` ends at `0xfe46e` and that band holds 43 functions. I took the byte count as the assertion.

Three readings are open and I did not pick one: the criterion is wrong and 0c is finished by the measurement;
or there is an axis the atlas has not identified and finding it is unplanned work; or the criterion was asking
the wrong question, since the sweep argues against the enter region being one homogeneous thing with one
provenance, which is consistent with all three hypotheses `compiler-generation.md` left open and separates none
of them.

**0d and 12b are blocked on that decision.** 0d depends on 0c, and 12b depends on 0a, 0c and 12a. 0a and 12a
are done, so the block is entirely the 0c question above.

**Two atlas gaps remain unprobed.** 41 functions zero with `xor reg,reg`, which is now the only surviving
exclusion signal and has withstood two targeted probes (A33, A40). It is worth one more pass before it is used
in the ledger, for the reason the other three just demonstrated.

## 6. What this made stale or false elsewhere

- `AGENTS.md` known-good row on the `sar`/`sub` halving chain: **corrected in place**. High C 1.73 does not
  emit a `sar 1` chain for a division by 2^n; it emits one wide `sar 3` with a bias. The chain is reachable
  only from a source that halves explicitly.
- `docs/compiler-generation.md`: the seven-or-ten sentence now carries a dated correction pointing at the page
  that owns the count.
- `docs/plan-attribution.md`: 0a and 0b rewritten with what is now known, 0c rewritten as NEEDS A DECISION.

  **Resolved 2026-11-02, after this report was written.** Paul decided to accept the enter-cohesion result as a
  negative rather than keep hunting for an axis, so 0c is DONE and 0d and 12b are unblocked. `plancheck --todo`
  also gained a real fix: it used to list every item that *declared* a dependency whether or not that
  dependency was satisfied, so items stayed in "held back by item order" after their prerequisites finished.
- `docs/plan-recomp.md`: 12a rewritten with what is now known, including the stated deviation that the
  assertion lives in `checkall.js` rather than `verify.js`, because the rule needs the decoder and `verify.js`
  must stay dependency-free.
- `docs/highc-authentic-toolchain.md` records the working CMOS as md5 `67c07678301ea47d7d795a01c7202b7a`.
  `saves/CMOS.BIN` is now `220b222183c2a168a4b86f9fa90fe40e` and no CMOS file in `saves/` matches the recorded
  hash. The route works with the current file, so this is a stale checksum rather than a broken setup, and the
  page has not been edited because I did not establish which write changed it.
- The plan's enter-band range `0xfdb9a..0x105000` in item 0c is inconsistent with its own byte count and needs
  your ruling before it is edited.

## Reproducing the whole campaign

```
./tools/decode-setup.sh                    # capstone, once
./tools/atlas-build.py                     # ~22 min, eight boots, 40 probes
./tools/atlas-report.py                    # the atlas table and both lists
./tools/cluster.py --write docs/ledger.json
node tools/checkall.js                     # every gate, including the four new ones
```

`atlas-build.py` needs `saves/hc.img`, `saves/hc.ccd`, `saves/scratch-tos11en.h0` and `saves/CMOS.BIN`. It
works on a copy of the hard image under `/var/tmp/atlas/` and never writes to a pristine image.
