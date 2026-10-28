## The state variables, by name and address

The save writer prints every global it stores, with a format string naming it, and the string's address is pushed
immediately after the operand it reports. That makes the whole state block readable as a table rather than by
guessing at each address.

**How it was derived, because the method is the finding.** The format strings sit at `0x2748`–`0x2cf8` in the guest
frame, of the form `NAME=%d`. The writer is at `0xeb300`–`0xeb980`. For each `push <imm32>` whose immediate is one of
those format strings, the operand it reports is the nearest four-byte value in `0xcde00`–`0xce100` in the bytes
before it. Eighty of them resolve, and the pattern is visible in the output: a `push [ebx+disp]`, then the format
string, then the print call at `0x101748`.

### The character sheet, and the global state behind it

| name | address | name | address |
|---|---|---|---|
| `WISDOM` | `0xcde72` | `GOLD` | `0xcde91` |
| `INTELLIGENCE` | `0xcde76` | `KEY` | `0xcde95` |
| `MAGIC` | `0xcde7d` | `ERA` | `0xcde99` |
| `HP` | `0xcde81` | `TOOLS` | `0xcde9d` |
| `MHP` | `0xcde85` | `SKIN` | `0xcdea2` |
| `EXPERIENCE` | `0xcde89` | `CLOTH` | `0xcdea6` |
| `FOOD` | `0xcde8d` | `LEATHER` | `0xcdeaa` |
| `CHAIN` | `0xcdeae` | `PLATE` | `0xcdeb2` |
| `REFLECT` | `0xcdeb6` | `POWER` | `0xcdeba` |
| `HAND` | `0xcdebf` | `DAGGER` | `0xcdec3` |
| `MACE` | `0xcdec7` | `AXE` | `0xcdecb` |
| `BOW` | `0xcdecf` | `SWORD` | `0xcded3` |
| `GREAT_SWORD` | `0xcded7` | `LIGHT_SWORD` | `0xcdedb` |
| `PHASER` | `0xcdedf` | `QUICK_SWORD` | `0xcdee3` |
| `RING` | `0xcdee7` | `WAND` | `0xcdeeb` |
| `STAFF` | `0xcdeef` | `BOOTS` | `0xcdef3` |
| `CLOAK` | `0xcdef7` | `HELM` | `0xcdefb` |
| `GEM` | `0xcdeff` | `ANKH` | `0xcdf03` |
| `RED_GEM` | `0xcdf07` | `SKULL_KEY` | `0xcdf0b` |
| `GREEN_GEM` | `0xcdf0f` | `BRASS_BUTTON` | `0xcdf13` |
| `BLUE_TASSLE` | `0xcdf17` | `STRANGE_COIN` | `0xcdf1b` |
| `GREEN_IDOL` | `0xcdf1f` | `TRI_LITHIUM` | `0xcdf23` |
| `NONE` | `0xcdf27` | `LIGHT` | `0xcdf2b` |
| `DOWN` | `0xcdf2f` | `UP` | `0xcdf33` |
| `PASSWALL` | `0xcdf37` | `SURFACE` | `0xcdf3b` |
| `PRAYER` | `0xcdf3f` | `MISSILE` | `0xcdf43` |
| `BLINK` | `0xcdf47` | `KILL` | `0xcdf4b` |
| `SCORE` | `0xcdf53` | `MAP` | `0xcdf57` |
| `MAP_X` | `0xcdf5b` | `MAP_Y` | `0xcdf5f` |
| `DUNG_X` | `0xcdf63` | `DUNG_Y` | `0xcdf67` |
| `PLAYER_X` | `0xcdf6b` | `PLAYER_Y` | `0xcdf6f` |
| `TORCH` | `0xcdf73` | `SPELL` | `0xcdf77` |
| `VEHICLE` | `0xcdf7b` | `SEED` | `0xcdf7f` |
| `FUEL` | `0xcdf87` | `FOUND` | `0xcdf8b` |
| `WORLD` | `0xcdf8f` | `ARM` | `0xcdf93` |
| `FOOT` | `0xcdf97` | `SLEEP` | `0xcdf9b` |
| `GATE_X` | `0xcdf9f` | `GATE_Y` | `0xcdfa3` |
| `GATE_TIME` | `0xcdfa7` | | |

`TORCHES`, `STRENGTH`, `AGILITY`, `STAMINA`, `CHARISMA` and the `R_WEAPON`/`R_ARMOUR` report through
`PROFESSION`/`RACE`-style character bytes and come out as `(register)` in this pass because their operands are loaded
through an index rather than a fixed displacement. They are not missing, they are addressed differently.

### Two strides, and they are different structures

The code reaches this block two ways, and mixing them up is the trap this table exists to remove:

- **95 bytes per character** (`lea edx,[eax+eax*4]`, `lea edx,[eax+edx*2]`, `shl edx,5`, `sub edx,eax` gives
  `eax*351`; the 95 appears elsewhere in the roster code, `index * 95` at `0xec4f2`). The character sheet.
- **351 bytes per player** (`0x15f`, the sequence above), indexed by the value at `0xceca0`. That is the block the
  time gate and the gold arithmetic walk.

### Two corrections to the plan, both measured

- **`MAP_X`/`MAP_Y` are `0xcdf5b`/`0xcdf5f`.** Item 5b's note said `0xcdf63`/`0xcdf67`, and those are `DUNG_X` and
  `DUNG_Y`. The item's open question "what `MAP_X`/`MAP_Y` are, given that `PLAYER_X`/`PLAYER_Y` are what the clamp
  uses" therefore had a wrong premise in its addresses as well as its meaning.
- **`0xcdf53` is `SCORE`, not a map id**, and **`0xcdf57` is `MAP` itself**, not "the flag at `0xcdf57`" that item 5b
  said was set when the party stands on an edge. What is at `0xcdf57` is the map number, and the gate code reads it
  directly as a map test.

### Reproducing it

The extractor is a byte scan, not a disassembly of the whole image, so it does not depend on alignment: find each
`68 <imm32>` push in `0xeb300`–`0xeb980` whose immediate lies in `0x2700`–`0x2d00`, read the label out of the data at
that address, and take the nearest `0xcde00`–`0xce100` dword in the preceding 26 bytes as the operand. The first
attempt returned nothing twice for its own reasons, recorded here because both are the kind of thing that looks like
"no data": the label regex forgot `=` was part of `NAME=%d`, and a disassembly starting mid-instruction never
produced the pushes at all.
