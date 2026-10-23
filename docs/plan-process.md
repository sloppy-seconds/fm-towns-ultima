# How this project's plan is maintained

The plan drifted three times in one session, and each time the mistake was the same shape: a number or a
claim written correctly, then invalidated by the next commit, with nothing forcing the older text to be
revisited. This page defines what a good plan looks like here, the vocabulary for item state, and the
mechanical checks that catch drift.

It exists because "keep the docs up to date" is not an instruction an agent can follow. This is.

## What a good plan looks like

A plan is not a list. A list says what is unfinished. A plan has four properties:

**1. Sequenced.** Every item has a position relative to the others, and the ordering has a stated reason.
"The map is last because it is the last file-side unknown" is a reason. Nine items in a bullet list is not
a plan.

**2. Each item has a stopping rule.** Not a description of the work, a statement of when it is *finished*.
"Done when `docs/inside-a-tick.md` names each timer, its interval and its effect, or records that it could
not be determined statically" is a stopping rule. "Read the tick" is not.

**3. Numbers are derivable, not asserted.** Any count in the plan must be reproducible by a command. The
named-routine count is derived by parsing the tables in `call-graph.md` and `inside-a-turn.md` against the
function-start list. If a number cannot be re-derived, it does not belong in the plan.

**4. It has a closed list.** A plan that only lists what is open invites reopening settled questions. This
plan carries an explicit table of closed items with the reason each is closed, so reopening one requires a
new method rather than a new attempt.

## The four states an item can be in

Every item uses exactly one of these words, in a bolded line at the top of its section. No synonyms, no
prose substitutes. The vocabulary is small on purpose.

| state | meaning | what it obliges |
|---|---|---|
| **OPEN** | not started, or in progress | nothing beyond its stopping rule |
| **DONE** | finished and recorded | link the page that records it |
| **CUT** | deliberately not doing it | state why, so it is not re-proposed |
| **NEEDS A DECISION** | cannot proceed without a human choosing | state the options and what each costs |

**`DONE` is not enough on its own.** A done item has three parts, and missing any of them is how drift
starts:

1. a page or a tool that records the result
2. an assertion in `tools/verify.js` if the result is assertable
3. a line in the plan saying what is now known, not merely that work happened

**`NEEDS A DECISION` is the state this project has been missing.** Several items sat for sessions described
as "untouched" when they were really waiting on a choice nobody had framed. Writing them as decisions with
options converts a vague block into something that can be answered in one message.

## The three documents that go stale, and what each is for

The project has three planning documents and confusing their jobs is what caused most of the drift.

| document | job | changes when |
|---|---|---|
| `plan.md` | sequenced phases, stopping rules, closed list | the order of work changes, or an item changes state |
| `open-questions.md` | the unknown, with what would resolve it | an answer is found or a question is retired |
| `overnight.md` | the subset that needs no human, as a queue | Track A work is queued or completed |

**`plan.md` is the plan of record.** The other two are views of it. If `plan.md` and `open-questions.md`
disagree, **`plan.md` wins and `open-questions.md` is the bug.**

### What must never appear in more than one of them

The specific duplication that has already caused three errors: **counts, phase names, and item states.**
A count lives in one place and the others link to it. The named-routine count lives in `call-graph.md` and
everywhere else quotes a link, not a number.

## The sync rule, extending what `AGENTS.md` already says

`AGENTS.md` has a table for the four public documents. This extends it to the planning documents.

| changed | update |
|---|---|
| an item's state | `plan.md`, then whichever of `open-questions.md` / `overnight.md` listed it |
| any count | the one page that owns it, then grep for the old number |
| a finding that closes a question | `plan.md` closed list, and the question's page |
| a finding that a page contradicts | the page, with a correction banner, not a silent rewrite |
| a new page | `mkdocs.yml` nav, and `docs/index.md` if it is a headline result |

## Correction banners, and why they are not optional

This project keeps its wrong answers visible. A claim that was made and then disproved gets a banner
saying what was claimed, what is true, and how the error happened. Deleting it loses the most useful
information on the page, which is the shape of the mistake.

The established form:

```markdown
> **CORRECTION: one line naming what was wrong.** What is true instead, with a link to the page that
> establishes it. One sentence on why the error looked convincing.
```

Three pages already carry these: `command-dispatch.md`, `eb-encoding.md`, `shrine-function.md`.

**A banner on top is not a correction.** Twice this session a banner was added while the paragraph it
retracted still read as fact underneath. **The body must be edited too.** A banner explains the past, the
body must state the present.

## The mechanical checks

Running these before each commit is the whole maintenance process. They take seconds.

```bash
# A. every page is in the nav
for f in docs/*.md; do b=$(basename "$f"); grep -q "$b" mkdocs.yml || echo "NOT IN NAV: $b"; done

# B. no em-dashes or prose semicolons (style rule)
grep -rn '—' docs/*.md | grep -v '^Binary' || true

# C. a claim asserted in two places with different numbers
grep -rno '[0-9]\+ of 738' docs/*.md

# D. the site builds strict
/var/tmp/mkvenv/bin/mkdocs build --strict 2>&1 | grep -E 'WARNING|ERROR'

# E. established facts still hold
node tools/verify.js
```

**Check C is the one that catches this project's characteristic failure.** Every drift incident so far has
been a count written in two places and updated in one.

## The review question, asked after every session

One question, and it is the one that keeps being skipped:

**"What did this session make false?"**

Not "what did I learn" and not "what did I finish". Working forwards from new findings to their
consequences is how a session closes cleanly. The three stale counts found this session were all falsified
by work done in that same session.

## What this process deliberately does not do

- **No dates and no estimates.** They would be invented, and an invented date is worse than no date.
- **No percentages of completion.** "38 of 738 routines named" is a count. "5 percent done" is a fiction,
  because routines are not equal weight.
- **No ticket IDs.** The documents are the tracker. A second tracker would drift from the first, which is
  the problem this page exists to solve.
- **No ceremony for small findings.** A measurement with a page is recorded. Not every probe needs a plan
  entry.

---

**[Plan](plan.md)** **[Open questions](open-questions.md)** **[Unattended queue](overnight.md)**
