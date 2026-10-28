# Resident NPC dialogue: a 139-entry pointer table

The town residents are not the class speakers. `A guard says:` and `A merchant says:` live in the `0xeb`
string table at `0x61d0` and are dispatched from `0xf1cac`. Residents are a **separate system** with
their names written into the dialogue itself, and they are selected through a pointer table.

## The table

**139 entries, 4 bytes each, at segment `0xd8e00` (image `0xd8a00`).** Each dword points at a
NUL-terminated `0xeb`-encoded string.

Decoded with `tools/ebdecode.py`, entry 55 onward:

| index | pointer | text |
|---|---|---|
| 55 | `0x0cd54` | `John Mayer orders: Take out the trash!!!` |
| 56 | `0x0cda0` | `Gerry Mayer proclaims: We know small computers!` |
| 57 | `0x0cdfc` | `Keith says: No thanks,trying to cut down!` |

Reported from play: talking to one resident gave the John Mayer line, and the one standing next to him
gave the Gerry Mayer line. **The two are adjacent in the table**, which is the first evidence that map
placement and table order correspond. That is one observation and not yet a rule.

## The reader: a switch that selects a group of five

The dispatch is at `0xfd061` and its neighbours. Each case loads a table address into `ecx` and jumps to
a common handler:

```
0xfd061  mov ecx, 0xd8ed8
0xfd066  jmp 0xfd109
0xfd06b  mov esi, 0xd8eec
0xfd070  mov ecx, 0xd8f00
0xfd075  jmp 0xfd109
0xfd07a  mov esi, 0xd8f14
0xfd07f  mov ecx, 0xd8f28
0xfd084  jmp 0xfd109
```

The handler at `0xfd109` copies **five dwords from `ecx`** into `[0xd8d5c + 0..0x10]`, and **five from
`esi`** into `[0xd8d5c + 0x14..0x24]`. So a case does not select one line. It selects a **group of five
entries**, and there are two pointers per case because a case can carry two groups.

`0x0xfd061` loads `0xd8ed8`, and `[0xd8ed8]` holds the pointer to `0x0ccf4`, which is **Ithilian**, not
John. So the group is indices 54 to 58:

| index | address | text |
|---|---|---|
| 54 | `0x0ccf4` | `Ithilian the wench calls: Make me an offer sailor!` |
| 55 | `0x0cd54` | `John Mayer orders: Take out the trash!!!` |
| 56 | `0x0cda0` | `Gerry Mayer proclaims: We know small computers!` |
| 57 | `0x0cdfc` | `Keith says: No thanks,trying to cut down!` |
| 58 | `0x0ce4a` | blank |

**An earlier version of this page numbered John at 55 as though it were the first of a group.** Counting
from the table base at `0xd8e00` gave that number correctly, but the dispatch does not start groups
there, so the group boundary was wrong. The index is 55, the group starts at 54, and both statements are
true together.

**What selects a case is not established.** The cases are contiguous `mov ecx, imm32` pairs, which is a
switch, but the switch variable has not been read. The map-position-to-case link that the John/Gerry
adjacency suggested is still only an observation.

## The format

Each string is **name, verb, quoted speech**, with newlines inside it:

```
Waren Beatty\nasks:\nHave you seen\nDiane Keaton?
Chuckles the\nbumble cries:\nCan I look yet,is\nit o...
The village idiot suggests:\nOffer the Hotel\nClerc...
Red the pirate\nboasts:\nI've a broken\nUltima...,\nwa...
```

So the game does not compose "John Mayer orders:" from a name table and a verb table. The whole line is
authored. Two residents share the surname `Mayer`, which is consistent with authored entries rather
than generated ones, though two samples do not settle it.

## The Japanese block is a parallel table

The same block exists in Japanese at `0x0ce04` onward, and the two are offset copies:

| Japanese | offset | English | offset |
|---|---|---|---|
| `ジョン メイヤーが言った` | `0x0ce3c` | `John Mayer orders` | `0x0cf54` |
| `ゲリー メイヤーが言った` | `0x0ce78` | `Gerry Mayer proclaims` | `0x0cfa0` |
| `キースが言った` | `0x0cec4` | `Keith says` | `0x0cffc` |

That is the same bilingual-pair pattern already recorded for NPC dialogue elsewhere in this project,
and it is what makes the `0xeb` decode verifiable: a line whose English is uncertain can be checked
against a Japanese twin whose meaning is plain.

## Why this was not found earlier

The `0xeb` transform was demonstrated on the class-speaker table at `0x61d0` to `0x6600`, because that
region is contiguous and its boundaries were measurable. The resident strings sit at `0x0c000` and
`0x0cf00`, far outside it, and the words `Mayer`, `trash` and `orders` appear in **none of the 140 disc
files** as plain ASCII, so a byte search for the text found nothing. They were located only by sweeping
every `0xeb` run in the whole image, 1,394 of them, and decoding each.

**The lesson is about search scope, not about the decoder.** Searching the region where a thing was
last found is not searching for the thing.

## The code

The instructions that push the John Mayer pointer are at `0xd8ed8`, five of them, which is the usual
`push imm32` pattern. The town capture taken did **not** reach them, because the run ended before this
resident was spoken to.

What selects the index, and how the index relates to a map position, is **not established**. The next
measurement is a capture of the conversation with John or Gerry, which would show the read of the table
and the computation of the offset.

## What is established

| claim | evidence |
|---|---|
| A 139-entry pointer table exists at `0xd8e00` | walked until entries stopped pointing into the string block |
| Each entry is 4 bytes and NUL-terminated text | decoded all 139 |
| John, Gerry and Keith are indices 55, 56, 57 | measured |
| The text is authored, not composed | each string contains its own name and verb |
| A Japanese parallel block exists at `0x0ce04` | decoded, offsets recorded |
| The dialogue text is `0xeb`-encoded | `tools/ebdecode.py` decodes it |

## What is not

- which index a given map position selects
- whether the index is the only selector, or whether a resident can have several lines
- what the gold-offer path does. Reported as answering "thank you", consistent with `Thank you!` at
  `0x08574` and `0x08b18`, but neither string was observed being pushed
- any of the 139 lines beyond the three seen in play, which are decoded but not confirmed as reachable

**[Text encoding](text-encoding.md)** **[CFG findings](cfg-findings.md)** **[Plan](plan.md)**
