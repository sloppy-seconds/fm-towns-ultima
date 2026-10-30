# The text path: everything established, and the one thing that is not

**The character cell, the draw call, the background fill and the window record are all read and
measured. What `0xEB` means in the strings is not, and four readings of it have failed.**

## What is established

| | |
|---|---|
| character cell | **8 by 16 pixels** |
| text window | a **57-byte record** at `0x7aee4 + n * 57` |
| draw call | `0xe6fd5` -> `0xc7d` -> TBIOS **AH 0x60** |
| the blit | `TBIOS.BIN 0x3568`, installing `0xf538` or `0xf5e0` by attribute |
| background fill | `0xe6e48` -> `0x8b6` -> TBIOS **AH 0x2b**, rectangle at `0x7add8` |
| text attributes | four, through a table at `TBIOS.BIN 0xfad0` |
| pixel handling | a `not` cascade over a byte count, so a plain bitmap inverted on merge |
| `0xEB` in strings | **resolved**: an ASCII escape with two letter offsets (`+1` up to `0x59`, `+7` above) and four punctuation payloads: `0x74` `!`, `0x75` `?`, `0x94` `)`, `0x92` `,` |

## The cell size, from two independent statements

The layout engine `0xe6eb0` computes a character position from the window record:

```
0xe6ebf  lea eax, [eax+eax*2]        3 * arg
0xe6ec2  lea edx, [eax+eax*8]        27 * arg
0xe6ec5  lea edx, [eax+edx*2]        57 * arg
0xe6ec8  lea ebx, [edx+0x7aee4]      a 57-byte window record
0xe6ee6  mov edx, [ebx+0x19]         the column
0xe6ee9  shl edx, 3                  column * 8    <- width
0xe6efd  mov edx, [ebx+0x1d]         the row
0xe6f00  shl edx, 4                  row * 16      <- height
```

**Correction, recorded rather than quietly applied.** This page said 55 for both the stride
and the multiplier. The chain is `3n`, then `27n`, then `3n + 54n`, which is 57. Checked on
the raw bytes with `xxd -s 0xe6ebf -l 12 ENCHANT.EXP`, giving
`8d 04 40 8d 14 c0 8d 14 50 8d 9a e4`, where `8d 14 50` is `lea edx,[eax+edx*2]`. The
independent check came from `0xe74ac` in `docs/rectangle-cluster.md`, which computes the same
chain and whose cell geometry then differs by exactly 7 and 15, an 8 by 16 cell less a
one-pixel border. The field offsets `+0x19` and `+0x1d` are unaffected, so the layout
conclusions on this page stand.

and the TBIOS handler that draws a character states the height again:

```
0x339d  mov byte [gs:ebp+0x378], 0x10     16
```

Two independent statements of 16, in two different files.

## The draw chain

```
0xe6eb0  select the window record, compute x and y
  0xe6f25..         take one character, testing Shift-JIS lead and trail ranges
  0xe6f90           a 0x0A advances the line, a 0x00 ends the string
  0xe6fc4           width = the number of bytes consumed
  0xe6fcb           push the struct at 0xcda78, then the context at 0x7a7d8
  0xe6fd5           call 0xc7d
  0xe6fe2           advance the cursor, and when the row is full call 0xe6dc8
```

`0xc7d` is `mov ah,0x60` then the usual `push fs`, `push 0x110`, `pop fs`, `lcall fs:[0x20]`, so
character rendering is **TBIOS function `0x60`** and not game code. The handler at `TBIOS.BIN 0x336c`
reads the struct with `lodsd` and `lodsw`, stores x to `[ebp+0x344]`, width to `[ebp+0x348]` and the
glyph pointer to `[ebp+0x33c]`, then calls the blit at `0x3568`.

**That stub was missed by the first thunk scan**, which required a preceding `ret`. `0xc7d` continues
from `8b 74 24 10`, so the 70-stub count in [tbios-thunks.md](tbios-thunks.md) is a **floor, not a
total**.

## The background rectangle

When the row is full, `0xe6dc8` fills the window background:

```
0xe6df1  [0x7add8] = window.x + 2
0xe6e02  [0x7adda] = window.y + 2
0xe6e1a  [0x7addc] = window.x + width - 3
0xe6e32  [0x7adde] = window.y + height - 3
0xe6e48  call 0x8b6            TBIOS AH 0x2b, a rectangle primitive
```

**`0x7add8` is a rectangle.** [recompilation-conflicts.md](recompilation-conflicts.md) recorded a
retraction saying it was not, and that retraction was itself wrong: it followed the AH `0x46`
handler, which is a different routine reaching the same buffer. Two callers, two purposes, one
buffer.

## What `0xEB` is: two offsets, split by the payload

**Resolved.** `EB xx` is an ASCII escape whose transform depends on `xx`, and the split was found
by decoding dialogue against its Japanese twin rather than by arithmetic on labels.

| payload | transform | result |
|---|---|---|
| `≤ 0x59` | `+ 1` | capitals and the first punctuation block |
| `≥ 0x5a` | `+ 7` | lowercase |
| `0x74` | `!` | the commonest line ending, 21 uses |
| `0x75` | `?` | 8 uses |

All other bytes pass through unchanged and the result is decoded as Shift-JIS, because these
strings sit next to plain Shift-JIS entries and sometimes mix the two.

**Why the earlier single `+1` rule survived so long.** It is correct for the system string table,
which is where `STRENGTH` lives at `0x1528`, and that string was the evidence for it. Every payload
there happens to be `≤ 0x59`, so the rule never had to be wrong. Fed real dialogue it produces
`_llilu` and `EatsdeathScumu`, which is what stopped six readings of this byte from reaching the
text.

**The measurement that settled it.** Three NPC lines have a plain Shift-JIS twin in the same table,
so their wording is not in doubt:

| address | English (`0xEB`) | Japanese (plain Shift-JIS) |
|---|---|---|
| `0x61d0` | `Eat death Scum!` | `くたばれ!ひとでなし!` |
| `0x6204` | `A guard says：` | `衛兵が言う：` |
| `0x622c` | `Pay your taxes!` | `税金を払えよ!` |

Eighteen payload-to-character pairs came out of those three and **every one obeys the split with
no exceptions**. `tools/ebdecode.py` implements it and `--search scum` returns `0x61d0`.

### `0x94` is `)` and `0x92` is `,`

The two payloads outside both letter ranges are ordinary punctuation after all. **`0x94` is the
closing parenthesis `)` and `0x92` is the comma `,`.**

The parenthesis is the one that matters, because it is how the game marks a command key. Every
option in this game is written `A)ttack`, `E)nter`, `Z)tat`, and the race menu on the character
creation screen is the same shape:

| address | raw | decoded |
|---|---|---|
| `0x3368` | `eb 47 eb 94 eb 6e eb 66 eb 5a eb 67` | **`H)uman`** |
| `0x3380` | `eb 44 eb 94 eb 65 eb 5f` | **`E)lf`** |
| `0x3398` | `eb 43 eb 94 eb 70 eb 5a eb 6b eb 5f` | **`D)warf`** |
| `0x33b4` | `eb 41 eb 94 eb 68 eb 5b eb 5b eb 62 eb 6d` | **`B)obbit`** |

Each is followed by the same entry in Japanese, and the Japanese carries the same letter and the
same `0x94`: `0x3375` is `eb 47 eb 94 90 6c 20 20 8a d4`, which is `H)` then `人間`, the kanji for
human. That pairing is what proves `0x94` is a rendered character and not a marker: it appears in
both halves of a bilingual pair at the same position.

The header above them confirms the screen: `0x334c` decodes to `［Race］` and `0x3359` to `［ 種 族 ］`.

**`0x92` is a comma**, giving `Ugh,me tough!` and `Psst,wanna buy a watch?`. The missing space after
the comma is consistent across every use, so the comma is stored without one and the text relies on
the following word starting a new field, or the spacing is simply absent in the original.

**A wrong reading, kept, because it was convincing.** `0x94` was first recorded here as a
zero-width marker, on the evidence that dropping it produced `Human`, `Elf` and `Dwarf`. Dropping
it does produce those words, which is exactly why the error was plausible. What ruled it out was
looking at the Japanese twin, where `0x94` sits where a `)` must be: no marker could occupy that
position in both languages. Paul suggested the `H)uman` reading directly, having seen the command
list format elsewhere in the game.

**So punctuation is all table payloads, not code.** `0x74` is `!`, `0x75` is `?`, `0x94` is `)`,
`0x92` is `,`. The fullwidth colon `81 46` and the fullwidth space `81 40` are not escaped at all;
they are plain Shift-JIS sitting in the same string, which is why a decoder must handle both.

**What is still not explained.** The full stop has not been found as a payload in these tables.
`tools/ebdecode.py` implements all four punctuation payloads.

The evidence is a string whose meaning is already known from its plain twin:

```
0x1640   20 20 81 6d eb 42 eb 4e eb 4c eb 4c eb 40 eb 4d eb 43 eb 52 81 6e
  EB -> +1:  20 20 81 6d 43 4f 4d 4d 41 4e 44 53 81 6e
  Shift-JIS:      [ C O M M A N D S ]
```

`0x81 0x6d` and `0x81 0x6e` are the full-width brackets, passing through untouched. The eight
`EB` pairs in the middle are `COMMANDS`, each one less than its ASCII code.

### The attribute labels prove it independently

The character sheet has each attribute twice, once as Shift-JIS and once as `0xEB` text:

| address | decoded |
|---|---|
| `0x153d` | `　＜強　さ＞　：　` (plain Shift-JIS) |
| `0x1528` | `EB 52 EB 53 EB 51 EB 44 EB 4D EB 46 EB 53 EB 47 81 46 81 40` |

The second decodes with `+1` as `52 53 51 44 4D 46 53 47` → `S T R E N G T H`, then
`81 46` = the full-width colon and `81 40` = full-width space. So `0x1528` is
`STRENGTH：　`, the English label for the Japanese `<Strength>` at `0x153d`.

Six further labels confirm the same rule, and all were checked by decoding rather than by
eye:

```
AGILITY   EB 40 EB 46 EB 48 EB 4B EB 48 EB 53 EB 58  -> AGILITY
WISDOM    EB 56 EB 48 EB 52 EB 43 EB 4E EB 4C        -> WISDOM
CHARISMA  EB 42 EB 47 EB 40 EB 51 EB 48 EB 52 EB 4C EB 40 -> CHARISMA
STAMINA   EB 52 EB 53 EB 40 EB 4C EB 48 EB 4D EB 40  -> STAMINA
```

And a whole message:

```
0x149a  ... ->  PCMデ－タのロ－ドに失敗しました
```

`PCM data load failed`, which is a string `docs/` already quotes from a different routine.

### Why the earlier readings failed

All six previous readings treated `0xEB` as a property of the *following byte's value*, either
an escape to a glyph index, a lead byte, or a marker for gaiji. It is none of those: it is a
**marker that the next byte is to be incremented**, which is why

- stripping the `0xEB` gave `OBL CZmZ eh`: the bytes are each one below the intended character
- a standard decoder rejected every pair: `EB` is not a valid Shift-JIS lead
- the frequency count ruled out a lead byte: correct, because it is not one

### A caveat this does not explain

The `+0x2D` rule for payloads at or above `0x60` is right for every sentence ending and wrong
for at least one string. `0x36cc` contains eight consecutive `EB 91` pairs where `+0x2D` gives
`ｾ` eight times, and a run of eight of the same character in the middle of text is more likely
to be padding. No transform tried (`+0x2D`, `+0x41`, `+0x40`, `+0x0B`) makes that run read as
spaces, so the rule holds for the ends of sentences and is not settled for every payload in
that range.

One string also does not decode cleanly under either rule:

```
0x1474  EB 4F EB 42 EB 4C 20 EB 43 EB 5A EB 6D EB 5A ...
  ->    PCM D[n[ fi[^ _llilu
```

`PCM` is right and the rest is not, though `0x149a` renders the same kind of message correctly
as `PCMデ－タのロ－ドに失敗しました`. Recorded rather than explained.

Both are recorded as open. What is not open is the direction: payloads below `0x60` are ASCII
one below the character, which is confirmed by six independent labels.

### What this unlocks

539 strings in `0x1348` to `0x6000` contain `0xEB`, all of them previously unreadable and all
previously blocking the naming of every routine that referenced them. `tools/fnstrings.js`
reports those references as `(0xEB run, N markers)`; with this transform they become text, and
the routines holding most of them become nameable.

### Resident NPCs are a separate table, with names baked into the string

Reported from play: talking to an NPC in a town gave "john mayer orders... take the trash out", and
offering 1 gold gave "thank you".

**No such text exists in the `0xEB` NPC table at `0x61d0` to `0x6600`**, and the words `Mayer`, `trash`
and `orders` appear in **none of the 140 disc files** as plain ASCII. A sweep of every `0xEB` run in the
whole image (1,394 of them) found them at `0x0cf54`:

```
John Mayer\norders:\nTake out the\ntrash!!!
```

One string, with newlines. The format is **name, verb, quoted speech**, and its neighbours in the same
NUL-separated block confirm the shape:

| address | decoded |
|---|---|
| `0x0cf00` | `...an the\nwench calls:\nMake me an offer\nsailor!` |
| `0x0cf54` | `John Mayer\norders:\nTake out the\ntrash!!!` |
| `0x0cfa0` | `Gerry Mayer\nproclaims:\nWe know small\ncomputers!` |
| `0x0cffc` | `Keith says:\nNo thanks,trying\nto cut down!` |

The code that pushes the `John Mayer` string is at `0xd8ed8`, five references in the usual pattern, and
that address was **not** reached by the capture taken, because the run ended before this NPC was spoken to.

**So there are two dialogue systems, not one.** The class speakers (`A guard says:`, `A merchant says:`
and the rest) live in the `0xeb` table and are dispatched from `0xf1cac` upward. The residents are a
separate block at `0x0cf00`, with a **name in the string itself** rather than a speaker label. They were
not previously documented together because the `0xeb` region is where the transform was demonstrated and
these strings sit well outside it.

**What is not established:** how the name is chosen, whether the verb varies with the NPC, the gold offer
path, and what `0xd8ed8`'s function does with the pointer. Two entries share the surname `Mayer`, which
suggests the table is authored rather than generated per utterance, but that is an inference from two
samples. The anecdotal "thank you" after offering gold is consistent with `Thank you!` at `0x08574` and
`0x08b18`, but neither string was observed being pushed.

### The first routine this named: the town dialogue dispatcher

A differential capture of talking to a guard in a town (the `T` key, then a direction) showed the
encoded string "Pay your taxes!" being referenced at `0xf1fbc`, and that address was reached during the
talk. The string decodes with `tools/ebdecode.py` from image `0x622c`, which is segment `0x602c`.

The code around it is a **message dispatch**: each case pushes a string address and jumps to a common
display path at `0xf2063`.

```
0xf1fa9  push 0x6004     ; "A guard says:"
0xf1fbc  push 0x602c     ; "Pay your taxes!"
0xf1fc6  push 0x6058     ; "A jester sings:"
0xf1fc6 ...  jmp 0xf2063
```

Scanning `0xf1d00` to `0xf2100` for `push imm32` with an address in the string region finds **25 sites**,
and every one decodes. They are the whole town NPC dialogue set:

| speaker | line |
|---|---|
| A guard says: | Pay your taxes! |
| A jester sings: | HO HO HO! |
| A merchant says: | Will you buy my apples? |
| A fighter says: | Ugh, me tough! |
| A cleric says: | Believe! |
| A wizard says: | Hee-e-poo-hex-on-you |
| A thief says: | Psst, wanna buy a watch? |

The remainder are non-dialogue replies on the same path: `Denied!`, `Not enough money!`, `Welcome my
child`, `First my GP tribute!`, `Thou are greater`, `Eat death Scum!`, and three spellings of
`Funny, no response!`.

**So this is confirmation that the transform works on real code, not just on strings fetched by
search.** The routine was found by capture, named by decoding, and the naming then exposed the whole
table rather than one entry. That is the use the section above predicted, arriving.

**What is not established:** which of the 25 sites a given NPC type takes, and whether the branching
is on NPC class, on a random roll, or on something else. The capture of one guard showed one path.

## The superseded readings

Kept because the history of being wrong is the useful part, and because each removal records
the test that ruled it out.

The strings at `0x42dc`, `0x1474` and `0x4334` are full of `0xEB xx` pairs, and four readings of
them failed on a measurable test.

| reading | how it failed |
|---|---|
| ASCII with `0xEB` as an escape to a glyph code | stripping the `0xEB` bytes gives `OBL CZmZ eh`, not words |
| the pairs are Shift-JIS | a standard decoder rejects every one |
| `0xEB` is a Shift-JIS lead byte | 3,652 uses against `0xE1` at 2 is not a character distribution |
| `0xEB` marks gaiji characters | 155 distinct pairs over 14,214 occurrences is far too many for a gaiji set |

The frequency count, over `0x1348` to `0x6000`:

```
0x81  1032     0x82  908     0x83  437     0xEB  3652     0xE1  2
```

`0x81` to `0x83` have the frequencies of Shift-JIS punctuation and katakana. **No character block has
one member outnumbering its neighbours by three orders of magnitude**, so `0xEB` is not a lead byte.

And stripping it does not work either:

```
0x1474  EB 4F EB 42 EB 4C EB 5A EB 5A EB 6D EB 5A
        O    B    L    Z    Z    m    Z
```

`OBL CZmZ eh` contains word-shaped fragments and reads as neither Japanese nor English.

## Two further readings, and what they rule out

The payload byte after each `0xEB` ranges over `0x42` to `0x68` in the samples read, and seven
distinct values appear in one eight-character run. Two arithmetic transforms were then tried
against the known text, and both produce halfwidth katakana rather than nonsense, which is the
first evidence that the payload really is a character code rather than a glyph index.

**`payload + 0x80`.** For `EB 4F EB 42 EB 4C` this gives `ｦd`'s neighbours `0xCF 0xC2 0xCC`,
which decode as `ﾏﾂﾌ`. That reads as "matsufu", a plausible romanisation, and the first three
characters of the run come out sensible. It fails on payloads above `0x5F`: `0x6D + 0x80` is
`0xED`, outside the halfwidth range `0xA1` to `0xDF`.

**`payload | 0x80` below `0x60`, `payload + 0x40` above.** This keeps every byte in range, since
`0x65 + 0x40` is `0xA5`. It yields `ﾏﾂﾌ ﾃﾚｭﾚ ･ｨﾚﾝ ﾞｫ` for the same run, which is all valid
halfwidth katakana and still not a word.

So the payload is **in the right range to be a halfwidth katakana code with a two-part
transform**, and neither transform tried recovers readable text. That narrows the problem from
"unknown encoding" to "known family, wrong arithmetic", which is a better position than before
and is where this stops for now.

**What is needed to settle it.** A single message present in both forms, so the mapping can be
read off rather than guessed. The run at `0x85fe` and the run at `0xd2158` are *similar but not
the same text*: they differ at the second payload (`0x61` against `0x62`) and in their spacing
(`0x20` literal in one, `0x81 0x40` in the other), so they are two different strings and cannot
be aligned. Finding one string that exists in both encodings is the next step, and it is a
search rather than a reading.

## The contradiction, which is the next thing to read

**`0xe6eb0` tests Shift-JIS lead and trail ranges** and is fed this `0xEB` stream. Both cannot be
true of the same input, so one of two things holds:

- those strings never pass through `0xe6eb0`, or
- `0xEB` is handled by a branch at `0xe6f37` onwards that this reading has not followed

The second is more likely. The tests at `0xe6f37` to `0xe6f8b` accept `0xEB` as a lead and read one
more byte, so **what `0xe6f4d` does with the accepted pair is the answer**, and it has not been read.

## Failures kept, because they cost time

Five searches for a glyph table in `ENCHANT.EXP` and `TBIOS.BIN` all failed, and they are recorded in
the commit history rather than repeated here:

- distinct 32-byte chunks per window scored near maximum everywhere, because random code is distinct
  too. The metric cannot separate a font from code.
- rows with a zero low nibble scored high at two places. Rendering them as glyphs gave vertical
  repetition and noise, not letterforms.
- `TBIOS.BIN` is 63 to 86 percent non-zero throughout with no code and data boundary.
- blank first and last rows per 16-byte unit picked windows inside zero fill.
- rendering the best candidate, `0x0dba00`, gave all-zero units.

`GAI.TIF` is not a character sheet: `tools/fontgrid.js` reports **one ink run per axis** on it, a
single 168 by 249 picture, which is a title graphic. `GAIJI2.COM` is a driver, 6,849 bytes, whose
dense data region is 193 bytes of code and whose system calls are `int 21h AH=09` and `AH=3e`/`3f`.

**The glyph table was found, and it is in neither of those files.** It is `\UTFONT.FNT` on the disc,
and the index to it is computed by TBIOS rather than stored in the game: the renderer at
`0110:0000F190` treats a byte in `0xA1` to `0xEB` as a two-byte lead, converts the pair with
`0110:000101B4`, and indexes the file's glyphs 32 bytes at a time. Every search above was looking
inside the two files that do not contain it. The mechanism, the offsets and the port fix that
confirmed it are in `port-missing-text.md` and plan item 7h.

## Why this page was rewritten

It had grown four `## Status` sections and three successive answers to the same question, each
contradicted by the next, because it was extended rather than revised. The corrections were appended
instead of applied. That is the same defect as a `replace()` that silently no-ops: the page looked
current and was not.

What survives is above. What was wrong is recorded in the commit messages, where it belongs.
