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
| 0c clustering | **NEEDS A DECISION** | `d6d4b8a`, `6a378cb` | `tools/cluster.py`, `docs/ledger.json`, `docs/clustering-0c.md` |

Supporting: `tools/look.py` (vision read of the guest screen), `tools/toskey.py` (safe keystroke encoding),
`tools/omflib.py`, and four new gates in `tools/checkall.js`.

## 3. What was claimed, and what checked it

Every claim below has a command behind it, and every gate was broken on purpose once to confirm it can fail.

**The atlas's never-emits list is real.** Measured over 37 compiled probes, disassembled from bytes the real
High C 1.73 driver emitted. Gate: `forward idiom atlas` in `checkall.js`, which asserts the probe count, a
non-empty never-emits list, the `xor`/`sub` headline in both directions, doc cross-references, and a
too-narrow-corpus tripwire. **Seen to fail** when the `xor` predicate was made unconditional.

**Two of the atlas's own early conclusions were wrong, and probes caught both.** This is the most important
thing in the report, because both would have corrupted an attribution.

- "`test` never appears." Refuted by A34: `if ((a & b) == 0)` compiles to `test dword ptr [esp + 8], eax`. The
  clustering pass had already counted 43 game functions using `test`, and under the uncorrected atlas those 43
  would have been labelled hand-written assembly on evidence that was really an unprobed source shape.
- "`and reg,reg` as a truthiness test is an unexplained shape in 220 functions." Refuted by A37: `while (p)`
  compiles to `and edi, edi; je`. Ordinary compiler output.

Both corrections are recorded on the page as corrections rather than quietly applied. The surviving claim is
narrower and stronger: the discriminator is the **shape** of the test, not the presence of the instruction.

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

## 4. What is outstanding, by plan item

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

**Two atlas gaps remain unprobed**, both surfaced by the census: 41 functions zero with `xor reg,reg` and 25
use a string op, neither of which any probe produced. These are the strongest live `hand-asm-positive`
candidates and they are worth probing harder before being used, for the reason the `test` episode just
demonstrated.

## 5. What this made stale or false elsewhere

- `AGENTS.md` known-good row on the `sar`/`sub` halving chain: **corrected in place**. High C 1.73 does not
  emit a `sar 1` chain for a division by 2^n; it emits one wide `sar 3` with a bias. The chain is reachable
  only from a source that halves explicitly.
- `docs/compiler-generation.md`: the seven-or-ten sentence now carries a dated correction pointing at the page
  that owns the count.
- `docs/plan-attribution.md`: 0a and 0b rewritten with what is now known, 0c rewritten as NEEDS A DECISION.
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
./tools/atlas-build.py                     # ~20 min, seven boots, 37 probes
./tools/atlas-report.py                    # the atlas table and both lists
./tools/cluster.py --write docs/ledger.json
node tools/checkall.js                     # every gate, including the four new ones
```

`atlas-build.py` needs `saves/hc.img`, `saves/hc.ccd`, `saves/scratch-tos11en.h0` and `saves/CMOS.BIN`. It
works on a copy of the hard image under `/var/tmp/atlas/` and never writes to a pristine image.
