# How this project plans and works the plan

One document covering how the plan is written, what each item must carry, how it is maintained, and why it
is one file rather than many. It exists because "keep the docs up to date" is not an instruction an agent
can follow. This is.

The plan drifted three times in one session before this existed. Each time the mistake was the same shape: a
number or a claim written correctly, then invalidated by the next commit, with nothing forcing the older
text to be revisited.

## Part 1: what a good plan looks like

A plan is not a list. A list says what is unfinished. A plan has four properties.

**1. Sequenced.** Every item has a position relative to the others, and the ordering has a stated reason.
"The map is last because it is the last file-side unknown" is a reason. Nine items in a bullet list is not a
plan.

**2. Every item is workable.** See Part 3. An item with no state, no autonomy value and no acceptance
criteria cannot be picked up without reading its whole prose.

**3. Numbers are derivable, not asserted.** Any count must be reproducible by a command, and owned by one
page. The named-routine count lives in `call-graph.md`. If a number cannot be re-derived, it does not belong
in the plan.

**4. It has a closed list.** A plan that only lists what is open invites reopening settled questions. The
plan carries an explicit table of closed items with the reason each is closed, so reopening one requires a
new method rather than a new attempt.

## Part 2: one file, and the measurements behind that

The question is whether to keep one `plan.md`, one file per workstream, or one file per item with
frontmatter like local GitHub issues. The answer is **one file**, and the reason is measured rather than a
preference.

### The measurements

| measurement | value | implication |
|---|---|---|
| items under `###` headings in `plan.md` | **9** | a file-per-item scheme solves a scale problem this project does not have |
| commits in the last 60 touching a planning doc | **29 of 60** | planning changes constantly |
| of those, commits touching **only** planning | **6 of 60** | bookkeeping is 10 percent |
| commits touching a subject page | 53 of 60 | findings and planning move together |
| correction-style vs discovery-style commits | **30 vs 35** | nearly half the work is revision |

Two are decisive. **Nine items** is not a scale problem. And **29 of 60 commits touch a planning doc while
only 6 touch planning and nothing else**, which means planning text changes *in the same commit* as the
finding that invalidates it. Any scheme separating an item from the page recording its result forces two
edits in two places, and this project has already proved it cannot keep two places in sync: the
named-routine count drifted three times in one session.

**Half the commits are corrections**, so a structure optimised for appending to a backlog is optimised for
the wrong activity.

### Why not one file per workstream

The workstreams already are the documentation. `plan-track-a.md` would duplicate the opening of
`call-graph.md`, and `AGENTS.md` already warns that duplicated facts drift apart. Adding a second layer of
the same facts multiplies the problem.

The one split worth having already exists: `overnight.md` holds the subset that needs no human, because
that is a different consumer with a different constraint.

### Why not one file per item with frontmatter

Attractive on paper, and it breaks the two things that work.

**It splits every item from its evidence.** An item is not a unit of text. `0xf29f0` being the chest
opening is a finding in `inside-a-turn.md` *and* the reason a combat item is unblocked. A file per item
either duplicates the finding or links to it, and links rot here: the count drifted three times.

**Frontmatter is a second source of truth for state.** The moment `status: done` in a file disagrees with a
sentence in `plan.md`, there are two answers and no rule for which wins.

**It has no good place for the most valuable content here:** "this finding was wrong, here is why, and the
next attempt needs a different method". That lives in prose on subject pages, with correction banners.

A local issue tracker also buys less than it looks:

| benefit | already have it |
|---|---|
| per-item history | **`git log` on the subject page, better than a comment thread** |
| discussion | **`NEEDS A DECISION` items carrying options and costs** |
| linking work to a result | **same-commit edits** |
| stable IDs | nothing has needed one in 129 commits |

The one genuine gap is stable IDs. "plan.md item 3a" is stable enough.

### The trigger to revisit this

Split only when one of these is true, and check rather than guess:

1. **`plan.md` passes about 40 open items**, or its per-item metadata exceeds roughly five lines each so
   scanning the order of work stops being possible. Count with `node tools/plancheck.js`. Then split by
   phase, not by item.
2. **Two items keep disagreeing about the same finding.** That is the signal the finding needs a page and
   both items should link to it, which is a `docs/` problem rather than a planning-structure problem.

**Line count is the wrong trigger and was measured to be wrong.** An earlier version of this page said
"about 250 lines". Adding per-item autonomy and acceptance metadata took `plan.md` to 286 lines without
adding a single item, so the threshold fired while its own condition did not. Item count is the signal,
line count is noise.

## Part 3: every item carries three pieces of metadata

State alone is not enough to work an item. Three fields, always present, always in the same order:

```markdown
### 3b. Which key is which command

**State:** OPEN · **Autonomy:** BLOCKED ON HUMAN

| field | value |
|---|---|
| autonomy | blocked, needs keypresses |
| done when | `command-dispatch.md` maps each key code to a command |
| blocked by | a human pressing keys one at a time |
```

`node tools/plancheck.js` verifies all three are present and that the vocabulary is respected. It exits
non-zero if an item is incomplete, so it can gate a commit.

### State: four values, no synonyms

| state | meaning | obliges |
|---|---|---|
| **OPEN** | not started, or in progress | nothing beyond its stopping rule |
| **DONE** | finished and recorded | a page recording the result, an assertion in `tools/verify.js` where assertable, and a line saying what is now known |
| **CUT** | deliberately not doing it | state why, so it is not re-proposed |
| **NEEDS A DECISION** | cannot proceed without a human choosing | the options and what each costs |

### Autonomy: can an agent do this alone?

| value | meaning | obliges |
|---|---|---|
| **AUTONOMOUS** | an agent can finish it start to finish | nothing |
| **PARTLY AUTONOMOUS** | the reading can be done alone, the verification cannot | say which half closes how |
| **NEEDS A DECISION** | work can proceed, but one choice must be made first | name the options and their costs |
| **BLOCKED ON HUMAN** | cannot start without a person acting | name exactly what the person must do |
| **BLOCKED ON INPUT** | needs an artefact that does not exist yet | name who produces it and how |

**Why this field matters more than state.** `plan.md` had nine items, eight with a stated "done when", and
**one** saying whether an agent could attempt it. A queue with no autonomy field cannot be picked up: an
agent has to read every item's prose to discover which need a human, which is the reading the field saves.

**`BLOCKED ON HUMAN` is not a failure state.** Four of nine items need a person, and saying so plainly is
what makes the other five actionable. The alternative, used until this existed, was one paragraph saying
"Track B needs a human", which buried the fact that Phase 1 and most of Phase 2 do not.

**An AUTONOMOUS item can still be held back by ordering.** Item 4a is autonomous but depends on 1a, so it
is not startable now. The tool accounts for that; prose does not.

### Done when: acceptance criteria, not a description of the work

A stopping rule must be checkable **by someone who did not do the work**. Three tests:

1. **It names an artefact.** A page, a table, a tool, an assertion. Not "understand X".
2. **It states the failure case.** Most items here finish equally well as a recorded negative, and an item
   whose only success condition is a positive finding will be worked past its value.
3. **It is falsifiable.** If no observation could show it unmet, it is not acceptance criteria.

| weak | strong |
|---|---|
| "read the tick" | "names each timer, its interval and its effect, or records that it could not be determined statically" |
| "understand the map" | "the nibble's meaning is established, or the neighbour-correlation tests are recorded negative with measurements" |
| "investigate combat" | "to-hit and damage stated exactly, and marked read-versus-verified" |

Where a number is the criterion, the number must be derivable. "All 90 fields present" is checkable. "Most
routines named" is not.

## Part 4: the three documents, and what each is for

Confusing their jobs is what caused most of the drift.

| document | job | changes when |
|---|---|---|
| `plan.md` | the plan of record: phases, items, states, autonomy, acceptance, closed list | the order of work changes, or an item changes state |
| `open-questions.md` | the unknown, with what would resolve it | an answer is found or a question is retired |
| `overnight.md` | the subset that needs no human, as a queue | Track A work is queued or completed |

**`plan.md` is the plan of record.** The other two are views of it. If `plan.md` and `open-questions.md`
disagree, **`plan.md` wins and the other is the bug.**

**What must never appear in more than one of them: counts, phase names, and item states.** A count lives in
one place and the others link to it.

**Findings and items are different things and must not share storage.** A finding is a measured fact and
lives in a subject page with its evidence and a `verify.js` assertion. An item is a unit of remaining work
and lives in `plan.md`, linking to findings rather than restating them. A per-item store conflates the two,
which is why this project does not use one.

## Part 5: the sync rule

`AGENTS.md` has a table for the four public documents. This extends it to the planning documents.

| changed | update |
|---|---|
| an item's state or autonomy | `plan.md`, then whichever of `open-questions.md` / `overnight.md` listed it |
| any count | the one page that owns it, then grep for the old number |
| a finding that closes a question | the closed list in `plan.md`, and the question's own page |
| a finding that a page contradicts | the page, with a correction banner, not a silent rewrite |
| a new page | `mkdocs.yml` nav, and `docs/index.md` if it is a headline result |

## Part 6: correction banners are not optional

This project keeps its wrong answers visible. A disproved claim gets a banner saying what was claimed, what
is true, and how the error happened. Deleting it loses the most useful information on the page, which is the
shape of the mistake.

```markdown
> **CORRECTION: one line naming what was wrong.** What is true instead, with a link to the page that
> establishes it. One sentence on why the error looked convincing.
```

**A banner on top is not a correction.** Twice a banner was added while the paragraph it retracted still
read as fact underneath. **The body must be edited too.** A banner explains the past, the body states the
present.

## Part 7: the mechanical checks

Run these before each commit. They take seconds.

```bash
# A. every page is in the nav
for f in docs/*.md; do b=$(basename "$f"); grep -q "$b" mkdocs.yml || echo "NOT IN NAV: $b"; done

# B. no prose em-dashes or semicolons (style rule)
grep -rn '—' docs/*.md || true

# C. a count asserted in two places with different numbers
grep -rno '[0-9]\+ of 738' docs/*.md

# D. every plan item is workable
node tools/plancheck.js

# E. the site builds strict
/var/tmp/mkvenv/bin/mkdocs build --strict 2>&1 | grep -E 'WARNING|ERROR'

# F. established facts still hold
node tools/verify.js
```

**Check C catches this project's characteristic failure.** Every drift incident has been a count written in
two places and updated in one. **Check D catches the other one:** an item written without the metadata that
makes it workable.

## Part 8: the closing report, after every unit of work

A session, an overnight run, or a single task. **Not optional, and not a summary of what was done.**

### Run the report first

```
node tools/sessionreport.js
```

It prints what actually changed: commits, files, whether the plan moved with the work, correction commits,
and which items are startable now. **Read it before writing anything**, because the failure this prevents is
reporting from memory. Three times this project reported a number that was wrong in the same session that
produced it.

### Then say five things, in this order

1. **What was asked**, in the user's words. Not a paraphrase that flatters the work.
2. **What was done**, by file or commit.
3. **What was claimed, and which check disproved or confirmed it.** For every assertion of the form "X is
   true", name the command that showed it. If there was none, say so.
4. **What is still outstanding**, by plan item id, from the report's startable list.
5. **What this made stale or false elsewhere.** The question this section used to ask, and it is still the
   one nobody asks unprompted.

### The rule that actually prevents the failure

**A claim without a check is a guess, and must be labelled as one.** This project's characteristic defect is
not being wrong, it is being confidently wrong in a way that reads fluently:

- "four of seven checks print text, three return exit codes" was **six and two**, stated without counting
- "`0xcfe14` is the attack message" was **zero padding**, named from a nearby string
- "both jump tables resolve to code" was **one of two**, asserted from the file without the savestate
- "two independent cases" was **one**, and it changed a stated hypothesis

Each sounded right. Each was a number or an attribution that a single command would have settled.

**So: if the report contains a count, a comparison, or a claim that something does not exist, either a command
in the report produced it or the sentence says "unverified".** No exceptions for small claims, because every
one of the four above was small.

### The other rule, about verification that cannot fail

Four of the six checks in Part 7 cannot fail, and two of those are inverted: they report failure when clean.
Before trusting any check, **break something it should catch and confirm it fails.** Then restore.

A check that was never seen to fail is a comment. This has now happened four times: three tests that returned
their own baseline, and one tool that printed success unconditionally.

## What this process deliberately does not do

- **No dates and no estimates.** They would be invented, and an invented date is worse than no date.
- **No percentages of completion.** A count is fine. "5 percent done" is a fiction, because routines are
  not equal weight.
- **No ticket IDs.** The documents are the tracker. A second tracker would drift from the first, which is
  the problem this page exists to solve.
- **No ceremony for small findings.** A measurement with a page is recorded. Not every probe needs an item.

---

**[Plan](plan.md)** **[Open questions](open-questions.md)** **[Unattended queue](overnight.md)**
