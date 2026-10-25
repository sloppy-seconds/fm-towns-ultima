# AGENTS.md: measured effectiveness, and what it costs

An audit of `AGENTS.md` as an operating document: does it change agent
behaviour, and what does it cost in context per session. Every number here was
measured with a command, not estimated.

## The measurements

```
$ wc -l AGENTS.md && wc -c AGENTS.md
644 lines, 33,616 bytes
```

Roughly **5,498 words**, which is about **7,500 tokens** injected into every
single session before the agent reads anything. For a local model with a small
window this is a large fixed cost. It is paid on every session including the
ones that cannot act on most of it.

Word count per top-level section:

| words | section |
|---|---|
| 1068 | Read these first (incl. docs-in-four-places, planning, platform support) |
| 881 | Copyrighted material never enters git |
| 548 | Never quote bytes, addresses or counts from memory |
| 483 | What not to do |
| 378 | Known-good findings |
| 373 | Hard-won technical constraints |
| 368 | Goal |
| 351 | Platform versus U2-specific |
| 349 | Environment |
| 222 | Open problems, cheapest first |
| 201 | Answer questions, do not act on them |
| 177 | The central lesson of this project |
| 99 | Repository conventions |

## What is demonstrably effective

These sections changed behaviour in ways that were observed, not assumed.

**"Answer questions, do not act on them"** (201 words). The cheapest section in
the file and close to the most valuable. It encodes a real failure mode: a
question about process read as an invitation to improve the process. Its own
symptom list ("the reply contains a commit hash, a new file, or a test run
nobody asked for") is what makes it enforceable. Keep, do not touch.

**"Never quote bytes, addresses or counts from memory"** (548 words). Added this
session after the pixel-writer sequence was fabricated twice. It is the only
section with a mechanical check behind it (`tools/checkquoted.js`), and that
check found a second real error on its first run. Expensive, but it is paying
for itself.

**"Copyrighted material never enters git"** (881 words). The most expensive
section and the one where length is defensible: the failure is irreversible, a
force-push does not un-distribute, and the cost of being over-cautious is one
un-ignored line. Length here is insurance, not bloat.

**"What not to do"** (483 words). Each bullet is a probe that failed and cost
real time. This is the highest value-per-word content in the file after the
first section, because it is purely subtractive advice: do not spend a session
on Reko, on MAME, on `-GENFD 640`.

**"Known-good findings"** (378 words, 24 rows). A do-not-re-derive list. Works
as intended.

## What is misfiled, stale, or duplicated

### Stale: the palette is tracked in two vocabularies, and in a third place

`## Open problems` item 1 is "Confirm the palette in-game", a long paragraph
with a fallback procedure. `## Platform versus U2-specific` also discusses the
palette under "Unknown either way".

**Measured, and this is worse than a duplication.** `docs/plan.md` has twelve
items (1a through 4d) and **not one of them mentions the palette**. Neither does
`docs/open-questions.md`. So the palette is tracked *only* in `AGENTS.md`,
in two places, using none of the plan system's State/Autonomy vocabulary and
with no check covering it.

That is the exact failure the plan system exists to prevent: work that is
neither in the plan nor visibly abandoned. `docs/palette.md` 6.15 records that
`PRI PALETTE` was captured and gave a 16-colour table, so the first half of
item 1 is done and only "does it change once U2 is on screen" remains.

The fix is **not** to delete the bullets from this file. It is to give the
palette a real item in `docs/plan.md` with State and Autonomy, then reduce
`AGENTS.md` to one line pointing at it. My first pass at this audit recommended
deletion, which would have thrown away the only record there is.

### Stale: the documented-routine count

Line 35 states a fraction of the routine total. **That exact fraction appears
nowhere in `docs/`**, so either the number has moved on or it was never sourced. This is precisely the defect the
`counts have one owner` check exists to catch, and that check **only scans
`docs/`**, not `AGENTS.md`:

```
$ sed -n 69,80p tools/checkall.js
	for (const f of pages()) {          // pages() = readdirSync(docs)
```

So a count can drift in the file every session reads and no check notices. That
is a real gap, and it is also an argument for removing loose counts from this
file rather than adding a scanner.

### Duplicated: `verify.js` obligations stated four times

Lines 98, 128, 442, 454, 458, 465, 478. The "`DONE` obliges three things"
bullet, the "a format finding goes in `docs/` plus `tools/verify.js`" row, the
Reproducibility section, and the Scripts section each restate that findings
need an assertion. Four restatements of one rule is drift waiting to happen.

### Misfiled: "Read these first" is 1068 words and is four sections wearing a hat

It is the largest section, and under one heading it carries: the file table, the
four-places-of-documentation rules, the entire planning/working process, the
claim-without-a-check rule, the break-your-checks rule, and the platform-support
caveat. Those are five unrelated things. The planning material in particular is
a summary of `docs/plan-process.md`, which the agent is told to read anyway.

### Buried: the highest-value three lines are in the middle of that

"Before trusting a check, break something it should catch and confirm it fails"
sits at line 154, between an item-formatting paragraph and a platform note. It
is arguably the single most useful sentence in the file for an agent's own
error rate, and nothing about its position signals that.

## The structural problem

**There are now two competing instruction systems.** `AGENTS.md` says "run
`node tools/plancheck.js`, part 7 checks, `docs/plan.md` is the plan of record".
`docs/plan-process.md` says the same at much greater length. But the project
also carries `docs/open-questions.md` and `docs/overnight.md` as views, and this
file carries `## Open problems` as a third.

**Measured:** `docs/plan.md` has twelve items, 1a through 4d. Of the five items
in `## Open problems`, **four are already in `plan.md`** (monster table, map
format, roster/save, strings) under different names. The fifth, the palette, is
in `plan.md` nowhere. So this section is 80 percent duplicate and 20 percent the
only record of a live question, which is the worst of both arrangements: too
redundant to trust as the authority and too load-bearing to delete.

The test of whether the file is context-optimised is not its length. It is
whether an agent reading only `AGENTS.md` can act correctly. For process it
cannot: it must also read `docs/plan-process.md`, which is longer still.

## What I would change, in order of value per token saved

1. **Give the palette a real plan item, then shrink its two AGENTS.md bullets to
   one line each.** Not a deletion: measured, `docs/plan.md` and
   `docs/open-questions.md` contain no palette item at all, so this file is the
   only tracker. Saves ~150 words and puts the work under the checks that already
   exist.

2. **Remove loose counts.** The documented-routine fraction on line 35, the
   "called three or more times" figure, and the graphics and sound totals in the
   findings table. Replace with pointers to the
   owning page, or extend `counts have one owner` to scan `AGENTS.md`. A count in
   the always-read file that no check validates is the exact defect this project
   keeps re-discovering.

3. **Hoist the break-your-check rule.** Move it next to the claim-without-a-check
   rule, where it belongs, and let the two reinforce each other instead of being
   40 lines apart.

4. **Collapse the four `verify.js` restatements to one.**

5. **Split `Read these first`.** File table at the top. Process material reduced
   to three sentences plus "see `docs/plan-process.md`". Platform caveat to its
   own short section, or into `README.md` where platform support is actually
   claimed to users.

That is roughly 600 words saved with no loss of enforceable content, and more
importantly it leaves **one** process authority instead of three.

## What I would not change

- The length of the copyright section. Irreversible failure justifies it.
- The tone. Direct second person with named failure cases is why the effective
  sections work. A shorter abstract version would not.
- `What not to do`, as a list rather than prose. It is scanned, not read.

## The honest summary

`AGENTS.md` is **effective where it names a specific failure with a symptom**,
and **expensive where it restates process that lives elsewhere**. The sections
that changed behaviour all share a shape: a concrete wrong thing, a symptom an
agent can recognise in its own output, and a check or rule that follows. The
sections that cost the most without earning it are the ones summarising
`docs/`, because a summary of a document the agent is told to read is paid for
twice.

The single most valuable addition this session was not more words. It was
`tools/checkquoted.js`, which converted 548 words of prose into a command that
fails loudly. That is the pattern worth repeating: **when a rule matters, make
it a check and shorten the prose that explains it.**
