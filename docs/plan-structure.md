# One plan file, or a file per item

Should the plan be one file, one file per workstream, or one file per item with frontmatter, treated like
local GitHub issues?

This page answers with measurements from this repository rather than preference. The measurements say
**one plan file**, and the reason is not that the alternatives are bad in general.

## The measurements

Taken at the time of writing.

| measurement | value | what it implies |
|---|---|---|
| items under `###` headings in `plan.md` | **9** | well within one file |
| files in `docs/` | 68 | already a large pile to navigate |
| commits | 129, all within about a month | high churn |
| commits in the last 60 that touch a planning doc | **29 of 60** | planning changes constantly |
| of those, commits that touch **only** planning | **6 of 60** | **bookkeeping is 10 percent** |
| commits touching a subject page | 53 of 60 | findings and planning move together |
| correction-style commits vs discovery-style | 30 vs 35 | **nearly half the work is revision** |

Two of these are decisive.

**9 items.** A file-per-item scheme is a solution to a scale problem this project does not have. Nine
records with frontmatter is more overhead than the work it tracks.

Counted by `grep -cE '^### [0-9]' docs/plan.md`, so it is re-derivable rather than asserted. An earlier
draft of this page said 11 from a hand-written list; the file itself says 9, and the file wins.

**29 of 60 commits touch a planning doc, and only 6 touch nothing else.** That means planning text changes
*in the same commit* as the finding that invalidates it. Any scheme that separates an item from the page
recording its result forces those to be two edits in two places, and this project has already proved it
cannot keep two places in sync: the named-routine count drifted three times in one session.

**Half the commits are corrections.** A structure optimised for appending new items to a backlog is
optimised for the wrong activity. This project's work is mostly revisiting what was already written.

## Option 1: one plan file

**Verdict: yes, and it is what `plan.md` now is.**

Why it fits:

- 9 items, four phases, one clear order. It stays readable.
- A change to an item is one edit in one file, in the same commit as the finding.
- **A single file makes contradictions visible.** Reading top to bottom, a stale claim and its correction
  are a scroll apart. Across eleven files they are invisible to each other, which is exactly how
  `open-questions.md` came to assert a claim that `eb-renderer.md` had disproved.
- It can be read end to end by a session starting cold, which is the most common reader here.

What it costs, honestly: at roughly 40 to 50 items it would become unwieldy. **That is the trigger to
split, and it is measurable rather than a feeling.**

## Option 2: one file per workstream

**Verdict: no, because the workstreams are already the documentation.**

The four phases map onto pages that exist: the call graph, the map, Track B, the corpus. Splitting the plan
by workstream would produce `plan-track-a.md` and `plan-track-b.md` that duplicate the first paragraph of
`call-graph.md` and `game-loop.md`.

**That duplication is the specific failure this project keeps repeating.** `AGENTS.md` already warns that
four documents carry the same facts and drift apart. Adding a second layer of the same facts multiplies the
problem rather than solving it.

The one thing worth splitting out already is: `overnight.md` holds the subset that needs no human, because
that is a genuinely different consumer with a genuinely different constraint.

## Option 3: one file per item with frontmatter

**Verdict: no, and the reason is not effort. It breaks the two things that work.**

Attractive on paper: `items/0007-cell-high-nibble.md` with `status:`, `phase:`, `blocked_by:` resolves the
state vocabulary in code rather than prose, and a query replaces a hand-maintained list.

Three concrete problems here:

**It splits every item from its evidence.** An item is not a unit of text. `0xf29f0` being the chest
opening is a finding in `inside-a-turn.md` *and* the reason a combat item is unblocked. A file per item
either duplicates the finding or links to it, and this project has measured that links rot: the count
drifted three times.

**Frontmatter is a second source of truth for state.** The moment `status: done` in a file disagrees with a
sentence in `plan.md`, there are two answers and no rule for which wins. `plan-process.md` already
establishes `plan.md` as the plan of record, and a per-item store would need the same rule, plus a check to
enforce it.

**It optimises for a backlog, and this is not a backlog project.** Half the commits here are corrections to
earlier claims. A per-item store has no good place for "this item's finding was wrong, here is why, and the
next attempt needs a different method". That content is the most valuable thing in the repository and it
lives in prose on subject pages, with correction banners.

## What a local issue tracker would actually buy, and what it would not

Worth separating real benefits from ceremony:

| benefit | already have it |
|---|---|
| stable IDs to reference | no, and nothing has needed one in 129 commits |
| queryable state | no, but 9 items in a table is queryable by eye |
| assignment | no, one agent |
| history per item | **yes, and better: `git log` on the subject page** |
| comments and discussion | **yes: `NEEDS A DECISION` items with options** |
| linking work to a result | **yes, and stronger: same-commit edits** |

**The one genuine gap is stable IDs.** If a decision needs to be referenced across sessions, "plan.md phase
3a" is stable enough. Nothing in 129 commits has needed an issue number.

## The recommendation, with a trigger

**Keep one `plan.md`.** Add per-item files only when one of these becomes true, and check rather than guess:

1. **`plan.md` exceeds about 250 lines** where it is today at 193, and the growth is items rather than
   prose. Then split by phase, not by item.
2. **More than 20 distinct open items.** At that point the ordering argument stops fitting on one screen.
3. **Two items need the same finding as evidence and keep disagreeing about it.** That is the signal that
   the finding should get a page and both items link to it, which is a `docs/` problem rather than a
   planning-structure problem.

**Until then, the failure mode to fix is not structure, it is staleness.** The three wrong counts this
project produced were not caused by the number of files. They were caused by a count living in two places.
One file with one owner per fact fixes that. Twelve files would not.

## The rule this page adds

**Findings and items are different things and must not share storage.**

- A **finding** is a measured fact. It lives in a subject page in `docs/`, with its evidence, and is
  asserted in `tools/verify.js` where possible.
- An **item** is a unit of remaining work. It lives in `plan.md`, with a state and a stopping rule, and
  **links to** the findings rather than restating them.

That separation is what makes one plan file work, and it is what a per-item store conflates.

---

**[Plan](plan.md)** **[How the plan is maintained](plan-process.md)** **[Unattended queue](overnight.md)**
