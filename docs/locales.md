# Translations, one table per language

The three demos' narration is text in their executables, not artwork, so it can be translated. This page is the
scheme: where a translation lives, what a table may and may not contain, and what the tooling refuses.

The measurement behind all of it is on [The three demos, running](port-demos.md). The format reference, with the
columns and the workflow, is below and in `locale/README.md` in the tree, which is the copy a translator sees when they
open the directory.

## The shape

```
locale/en/u1demo.tsv    one table per demo, one directory per language
locale/en/u2demo.tsv
locale/en/u3demo.tsv
locale/de/…             a new language is a new directory, and no code
```

Each row keys one string by its index, its file offset, its runtime address, the number of bytes a replacement may
occupy, and a short hash of the original bytes. The translation goes in the `text` column. An empty `text` keeps the
original, which is how a partial translation is expressed: the patcher translates what is there and leaves the rest
in Japanese rather than refusing to run.

**A table never contains the Japanese.** That is the licensing line, decided by Paul on 2026-11-12: a translation is
this project's own work and is committed, and the dialogue it replaces is not. Rows are keyed by index and by a hash, so
nothing in a table reproduces the text it stands in for.

## The workflow

```bash
# once, against your own copy of the disc
node tools/getfile.js UT1DEMO.EXP --disc <image>
node tools/demopatch.js --demo u1demo --template --locale en

# then, per language
$EDITOR locale/en/u1demo.tsv
node tools/demopatch.js --demo u1demo --locale en --check   # does everything fit
./play.sh u1demo --locale en                               # patch and play
```

`--check` writes nothing and prints, per row, the length against the room. The patch itself goes to
`build/play/<title>/i18n/<EXECUTABLE>` and is passed to the port positionally, so the copy you own stays untouched.

## What the tooling refuses, and why each one matters
| refusal | the failure it prevents |
|---|---|
| a line longer than its `room` | the next string's bytes being overwritten, which plays and is wrong in a way nothing reports |
| a row whose `sha8` does not match | a table built from a different rip being applied to yours, where the offsets point at different text |
| a row whose `room` does not match | the same, caught from the other side |
| an index the executable does not have | a table for a different demo, or an executable with a different string count |
| a character outside printable ASCII | a glyph the renderer has not been shown to draw in that panel |
| any problem at all | a half-patched executable, which is worse than an unpatched one |

Nothing is written unless every row passes. A partial patch is the one outcome worth being strict about, because it
runs, and some of its narration is in the wrong language with nothing saying which lines.

## Why ASCII, and what a language with accents would need

The renderer walks the string a byte at a time and understands two encodings: ASCII below `0x80`, and Shift-JIS pairs.
ASCII has been demonstrated in that panel by patching every string and photographing the result. Accented and non-Latin
letters would need Shift-JIS encoding, which has not been tried there, so the patcher refuses them rather than emitting
them and hoping.

## The panel is 72 columns, and English wraps mid-word

Measured 2026-11-13: two independent long lines break after exactly **72 characters**, so that is the panel's width.
The renderer wraps on the column count and has no notion of a word, because it was written for Japanese, which needs no
spaces. A translation longer than 72 characters therefore breaks mid-word, `stran` then `ge`, and that is what the
screen does with it.

The Japanese never triggered this: a 116-byte string is 58 characters, which is under the panel, so the original always
fitted on one line. English of the same meaning usually does not, so this is a difference the original does not show.

It is **not** a refusal, because a wrapped line still draws correctly. `--check` reports the count and names the rows,
which makes "shorten it until it fits the screen" a decision rather than a surprise:

| table | rows over 72 columns |
|---|---|
| `locale/en/u1demo.tsv` | 7 of 21 |
| `locale/en/u2demo.tsv` | 16 of 20 |
| `locale/en/u3demo.tsv` | 15 of 24 |

Shortening one costs words, so it is a translation decision and not a tool setting. The alternative is to accept the
breaks, which read as a hyphen-less line split rather than as an error.

## What is not translated this way

The three games. Their text is a different mechanism in a different program, and the demos are the case that has been
measured. `./play.sh u3 --locale en` is refused by name for that reason, because quietly running an untranslated game
while claiming to have applied a locale is the failure mode this page exists to avoid.
