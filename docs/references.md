# Reference implementations

> **Both of these are Ultima III, not Ultima II.** They are references only. Nothing
> here is evidence about Ultima II, and no number from these repos goes into this
> project's findings without a U2 measurement to back it. U2 and U3 are different
> games with different formulas, different tables and different record layouts. A
> value that matches on U3 tells you about U3.

Two third-party reimplementations are cloned into `references/` purely to read.
Both are gitignored. Neither is part of this project's build or tests, and neither
produces anything this project ships.

```bash
git clone --depth 1 https://github.com/synthwave-pixel/ultima3 references/u3-typescript
git clone --depth 1 https://github.com/pantinor/gdx-exodus  references/u3-gdx
```

## What is in each

| | `u3-typescript` | `u3-gdx` |
|---|---|---|
| by | synthwave-pixel | pantinor |
| language | TypeScript plus the original LairWare C | Java, libGDX |
| size | 43 MB | 38 MB |
| Ultima III only | yes | yes |

`u3-typescript` is the more valuable of the two, for one specific reason:
it vendors **LairWare's C source**, which is a reverse-engineering of the Apple II
binary rather than a reimplementation from the manual. That source keeps the original
zero-page addressing (`zp[0x..]`) and the original code labels (`$8672`, `c8777`), so a
claim taken from it can be traced to an address in the real game.

`u3-gdx` is a from-scratch Java remake. Useful for behaviour, not for provenance,
because there is no address to trace back to.

## Why this matters and what it does not solve

**What it helps with.** Reading the shape of a shared design. The Ultima games of this
era share a family resemblance, so seeing how U3 lays out a monster table or rolls a
melee attack is a hint about where to look in U2, and what a plausible answer looks
like once found.

**What it does not help with.** Anything specific to the FM Towns port: the `MP`/`P3`
container, the `0xEB` font index, the Shift-JIS text, the `.TIF` artwork container, the
disk format. A U3 remake has no opinion on any of those.

**What it cannot do at all.** Substitute for measurement. Everything below about
combat is **U3's formula**. U2's has not been measured. The correct use of what
follows is as a hypothesis to test against U2 data, and nothing else.

## Recorded: the U3 melee formulas

**These are Ultima III's numbers. They are recorded so the shape is known, not so they
can be assumed for U2.**

**Player attacks a monster**, at label `plrhit` in `Lairware/Sources/UltimaSpellCombat.c`:

```c
// Random from 0 to armour+16 -- less than 8 is a hit.
temp = RandNum(0, Player[...][40] + 0x10);
if (temp < 8) goto plrhit;
```

Field 40 of the player record is armour. So the to-hit roll is uniform on
`[0, armour+16]` and succeeds when the result is below 8. Higher armour means a wider
range, which means a lower hit probability. That is the whole mechanic.

**Monster attacks a player**, from `c8777`:

```c
temp = ((Player[...][28] * 256) + Player[...][29]) / 100;   // max HP / 100
temp = ((monhpstart[(gMonType / 2) & 0x0F] / 8) + temp) | 1;
temp = RandNum(0, temp) + 1;
HPSubtract(...);
```

Monster damage is a roll against a value built from the monster's base HP divided by
eight, plus the target's max HP divided by a hundred, forced odd.

**The modern TypeScript port** states the player-side damage roll explicitly, in
`web/src/game/combat.ts`:

```ts
damage  = rng.range(0, strength | 1);
damage += strength >> 1;
damage += weapon * 3;
damage += 4;
```

and its own to-hit check as `rng.range(0,255) < 128 && dexterity < rng.range(0,99)`.
Note that this differs from the C above. The TypeScript port is not claiming to be
byte-exact, so where the two disagree **the C wins**, and where the C has no answer the
TypeScript is only a suggestion.

## The monster record

The TypeScript port documents the 256-byte monster table as a struct-of-arrays: 32
monsters, six fields, each field a 32-byte column.

| column | offset | meaning |
|---|---|---|
| type | 0 | map value of the monster, 0 means the slot is unused |
| tileUnder | 32 | terrain the monster stands on |
| x | 64 | |
| y | 96 | |
| hp | 128 | top two bits are behaviour in towns, low nibble is dialogue index |
| variant | 160 | 0, 1 or 2, selects Orc/Goblin/Troll style variants |

The behaviour field decoded from the hp column's top two bits:
`0x00` stationary, `0x40` wander, `0x80` follow, `0xC0` attack.

**This is a U3 layout and must not be assumed for U2.** It is recorded because it shows
the shape these ports use, and because U2's `WORLD*.UT2` may well hold a similar table.

## The cheat menus are not comparable

`u3-typescript/web/src/game/cheats.ts` has a cheat menu, and its own header says:
"None of this existed in the original; it is a convenience for testing and for players
who want one."

So the five modes in the FM Towns Ultima II build (`debug-modes.md`) are a different
thing entirely. Those are original and named in the game's own Japanese text. Do not
treat the U3 repo's cheats as evidence about them.

---

**[The game text](game-text.md)** **[The code](code-analysis.md)** **[Open questions](open-questions.md)**
