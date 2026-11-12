# The locale tables

The three demos' narration is Shift-JIS text inside the executable rather than artwork
([why](docs/port-demos.md)), so it can be replaced. This directory is where the replacements live, one directory per
language, one table per demo.

```
locale/en/u1demo.tsv    Ultima I's demo, English
locale/en/u2demo.tsv
locale/en/u3demo.tsv
locale/de/…             German would go here, and needs no code
```

A table is tab separated, with this header row:

| column | what it is |
|---|---|
| `idx` | which string, counting from 0 |
| `file_offset` | where it sits in the executable, for a reader |
| `runtime_addr` | what the code holds, `file_offset − 0x200` |
| `room` | how many bytes a replacement may occupy |
| `sha8` | first 8 hex digits of sha256 over the original bytes |
| `text` | the translation, or empty to keep the original |

`--template` writes the first five columns from your own executable and leaves `text` empty for a translator. The
`room` and `sha8` columns are what make a table safe: the patcher refuses a translation that overruns its span, and
refuses any row whose hash does not match the executable, which is how a table built on one rip is stopped from being
applied to another.

```bash
node tools/demopatch.js --demo u1demo --template --locale en   # once, from your disc
$EDITOR locale/en/u1demo.tsv                                   # fill the text column
node tools/demopatch.js --demo u1demo --locale en --check      # validate, write nothing
./play.sh u1demo --locale en                                   # patch into build/ and run it
```

## What may be in a table, and what may not

**The translations are this project's own work and are committed.** Paul decided that on 2026-11-12. **The original
Japanese is not, and a table never carries it**: rows are keyed by index, address and a hash, so no column holds the
game's dialogue. That is the line: a translation is ours to publish, the text it replaces is not.

Adding a language means adding a directory and filling in tables. It costs no code, which was the point of doing this
as tables rather than as a patched executable.

## The constraint that shapes the text

A string cannot be longer than the span reserved for it. Each is followed by `00 00` and the next begins two to four
bytes later, and the draw routine reads to the NUL, so there is no length field to enlarge. Measured over Ultima I's
demo: 18 to 82 bytes per line, 1,370 bytes across 21 strings.

What does **not** constrain it is the visible line: the renderer wraps to the panel's own column count
(`0x8d7b7`), so a translation may be any length that fits the bytes and will still be laid out correctly.

Characters must be printable ASCII. The renderer handles ASCII and Shift-JIS, and only ASCII has been demonstrated in
that panel, and a language needing accented or non-Latin letters would need Shift-JIS encoding and has not been tested.
