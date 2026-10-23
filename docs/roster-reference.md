# Roster fields, item and spell reference

Every field in `ROSTER1.UT2`, in the order the game writes them, taken from the
format string in the binary rather than from observation. The type is the `printf`
conversion the game uses, so `%d` is an integer and `%c` is a single character.

## How the schema was obtained

A machine state captured with Tsugaru's `SAVESTATE` holds the roster twice. At
offset 494,586 is the `printf` format string the game uses to write the file, and
at 6,285,236 is the data it wrote. The format string is the complete schema, so
every field below is the game's own name for it.

That matters because the alternative is guessing from a save file, which produced
three wrong conclusions in this project before the savestate was looked at.

## Fields 0 to 27, identity and statistics

| # | field | type | |
|---|---|---|---|
| 0 | `LINGUAL` | `%d` | language selector |
| 1 | `NAME` | `%c` | single-character name form |
| 2 | `NAME` | `%s` | string form, prefixed `(slot)` |
| 3 | `MODE` | `%c` | |
| 4 | `LANGAGE` | `%c` | note the spelling, as the game has it |
| 5 | `SHAPE` | `%d` | |
| 6 | `SPID` | `%d` | profession index, `profession * 4 + 2` |
| 7 | `TORCHES` | `%d` | torch count, this one is a quantity |
| 8 | `STRENGTH` | `%d` | |
| 9 | `AGILITY` | `%d` | |
| 10 | `STAMINA` | `%d` | |
| 11 | `CHARISMA` | `%d` | |
| 12 | `WISDOM` | `%d` | |
| 13 | `INTELLIGENCE` | `%d` | |
| 14 | `RACE` | `%c` | `H` `E` `D` `B` |
| 15 | `PROFESSION` | `%c` | `F` `C` `W` `T` |
| 16 | `SEX` | `%c` | `M` `F` |
| 17 | `MAGIC` | `%d` | |
| 18 | `HP` | `%d` | current |
| 19 | `MHP` | `%d` | maximum |
| 20 | `EXPERIENCE` | `%d` | |
| 21 | `FOOD` | `%d` | fixed point, stored times 100 |
| 22 | `GOLD` | `%d` | |
| 23 | `KEY` | `%d` | |
| 24 | `ERA` | `%d` | time period |
| 25 | `TOOLS` | `%d` | |
| 26 | `R_ARMOUR` | `%c` | |
| 27 | `R_WEAPON` | `%c` | |

## Fields 28 to 50, armour and weapons

| # | field | | |
|---|---|---|---|
| 28 | `SKIN` | 29 | `CLOTH` |
| 30 | `LEATHER` | 31 | `CHAIN` |
| 32 | `PLATE` | 33 | `REFLECT` |
| 34 | `POWER` | 35 | `HAND` |
| 36 | `DAGGER` | 37 | `MACE` |
| 38 | `AXE` | 39 | `BOW` |
| 40 | `SWORD` | 41 | `GREAT_SWORD` |
| 42 | `LIGHT_SWORD` | 43 | `PHASER` |
| 44 | `QUICK_SWORD` | 45 | `RING` |
| 46 | `WAND` | 47 | `STAFF` |
| 48 | `BOOTS` | 49 | `CLOAK` |
| 50 | `HELM` | | |

Every one is `%d`, and in practice they hold `0` or `1`. This is a set of flags, not
an inventory with counts. The exception is `TORCHES` at field 7, which counts down as
torches burn out.

## Fields 51 to 60, quest items

| # | field | lore name | what it does |
|---|---|---|---|
| 51 | `GEM` | | |
| 52 | `ANKH` | Ankh | the key to access spaceships |
| 53 | `RED_GEM` | | |
| 54 | `SKULL_KEY` | Skull Key | the key to control an aeroplane |
| 55 | `GREEN_GEM` | | |
| 56 | `BRASS_BUTTON` | Brass Buttons | the ignition button for aeroplanes |
| 57 | `BLUE_TASSLE` | Blue Tassles | authority to commandeer any sailing vessel |
| 58 | `STRANGE_COIN` | Strange Coin | rubbing it negates the passage of time |
| 59 | `GREEN_IDOL` | Green Idol | effective defence against magical sleep |
| 60 | `TRI_LITHIUM` | Tri-Lithium | the mineral required to fuel spaceships |

Fourteen quest items have their own field. The rest of the set, with the functions
as the game describes them:

| item | field | function |
|---|---|---|
| Boots | `BOOTS` | protection against paralysis of the lower body |
| Cloak | `CLOAK` | protection against paralysis of the upper body |
| Helm | `HELM` | a mystical vision of the land as a whole |
| Quicksword | `QUICK_SWORD` | the sword Enilno, double attack speed |
| Ring | `RING` | protection from magical fields |
| Tools | `TOOLS` | the devices required for escape from traps |
| Torch | `TORCH` | illumination in deepest darkness |

Note that `TORCH` (field 79) and `TORCHES` (field 7) are different fields. One is a
state, the other a count.

## Fields 61 to 70, spells

| # | field | spell | dungeon bar command |
|---|---|---|---|
| 61 | `NONE` | | |
| 62 | `LIGHT` | Light | `B)LIGHT` |
| 63 | `DOWN` | Down Ladder | `C)DOWN LADDER` |
| 64 | `UP` | Up Ladder | `D)UP LADDER` |
| 65 | `PASSWALL` | Pass Wall | `E)PASS WALL` |
| 66 | `SURFACE` | Surface | `F)SURFACE` |
| 67 | `PRAYER` | Prayer | `G)PRAYER` |
| 68 | `MISSILE` | Magic Missile | `H)MAGIC MISSILE` |
| 69 | `BLINK` | Blink | |
| 70 | `KILL` | Kill | |

The spell names line up exactly with the commands on the dungeon command bar, which
is in the same savestate as rendered text. `BLINK` and `KILL` have no bar command,
so they are cast from the `C)ast` menu.

## Fields 71 to 91, position and state

| # | field | |
|---|---|---|
| 71 | `SCORE` | |
| 72 | `MAP` | map **type**, not a number. See below |
| 73 | `MAP_X` | |
| 74 | `MAP_Y` | |
| 75 | `DUNG_X` | dungeon coordinates, separate from the overworld ones |
| 76 | `DUNG_Y` | |
| 77 | `PLAYER_X` | |
| 78 | `PLAYER_Y` | |
| 79 | `TORCH` | |
| 80 | `SPELL` | the spell currently readied |
| 81 | `VEHICLE` | |
| 82 | `SEED` | |
| 83 | `FUEL` | |
| 84 | `FOUND` | |
| 85 | `WORLD` | which map set, separate from `ERA` |
| 86 | `ARM` | |
| 87 | `FOOT` | |
| 88 | `SLEEP` | |
| 89 | `GATE_X` | moongate position for the current world |
| 90 | `GATE_Y` | |
| 91 | `GATE_TIME` | |

`MAP` is an index into a list of names the game also carries in memory:

| value | type |
|---|---|
| 0 | OUTSIDE |
| 1 | VILLAGE |
| 2 | TOWN |
| 3 | CASTLE |
| 4 | TOWER |
| 5 | DUNGEON |

So a save in the wilderness has `MAP=0` forever, which is not evidence that the
field is unused. It took a wrong reading of exactly that to notice.

`WORLD` and `ERA` are both location and they are independent. A moongate changes
both, which is why the position diff of a moongate looked like a time jump only
until `WORLD` was spotted.

## Reproducing the schema

```bash
# capture and search
python3 - <<'EOF'
d = open('/var/tmp/death.state','rb').read()
i = d.find(b'Roster data:ULTIMA II')
print(d[i:i+4000].decode('latin1', 'replace'))
EOF
```

The savestate is 7,607,281 bytes and begins `F M T O W N S`. It is reproducible by
loading a save and running `SAVESTATE /data/name.state` in the emulator console.

---

**[World save format](world-format.md)** **[Open questions](open-questions.md)**
