# The game's text, and where it lives

The Japanese text of the FM Towns release is in the binary and can be read out of a
machine state with `tools/savetext.py`, with no emulator running and no gameplay.

This answers a question the project had recorded as open and had been looking for in
the wrong language. The string search for creature names came back empty because it
searched for English. The names are Japanese, and they were there all along.

## Counts

From the death-screen snapshot (`/var/tmp/death.state`, 7,607,281 bytes):

| | count |
|---|---|
| Shift-JIS runs of 6 characters or more | **1,162** |
| of those, inside the game's own text region `0x79300`-`0x81000` | **147** |
| ASCII runs of 16 or more | 6,159 |

The ASCII count is mostly the Phar Lap extender, the MetaWare runtime and TownsOS.
The Japanese count contains the game.

## The game text region

The game's strings are contiguous from about `0x79300` to `0x81000`. Ordering:

| offset | content |
|---|---|
| `0x79377` | monster names, 16 entries |
| `0x79597` | save and load menus, character sheet |
| `0x7a523` | player select |
| `0x7a9a2` | Strange Coin message |
| `0x7af2b` | view commands, spell list |
| `0x7b7b3` | debug mode names |
| `0x7b9aa` | NPC dialogue prefixes |
| `0x7c86e` | chest and combat messages |
| `0x7dbee` | the ending, line by line |
| `0x7fd5a` | town names |
| `0x80036` | movement directions |

## Monster names

Sixteen, at `0x79377`. Each is stored **twice**: once in a custom font encoding where
every glyph is the two bytes `0xEB <index>`, and once in standard Shift-JIS. They sit
adjacent, so the font encoding can be recovered by aligning the two copies. That
encoding is what the game actually draws with, which makes it more useful than the
names alone.

```
商人             merchant            オ−ク            orc
道化師            jester            ゴブリン           goblin
衛兵             guard             ガ−ゴイル          gargoyle
放浪戦士           wandering warrior    ネス湖の恐竜         Loch Ness dinosaur
悪の遊騎兵          evil ranger       ドラゴンタ−トル       dragon turtle
僧兵             warrior monk      ドラゴン           dragon
死霊使い           necromancer        ウォ−ロック          warlock
魔法使い           wizard
盗賊             thief
```

## Town names

At `0x7fd5a`, which maps the world:

```
タウン・リンダ       Towne Linda
ニュ−・サン・アントニオ  New San Antonio
マ−ズ・タウン       Towne Mary
タウン・マクラ−      Towne Makler
タウン・バスコ       Towne Basko
バラディンズ・タウン   Baradin's Town
ル・ジェスタ−       Le Jester
ポ−ト・ボニフィス     Port Boniface
オジス・プレイス      Ozy's Place
```

## The ending

At `0x7dbee`, as consecutive 34 to 38 byte lines. It is the game's actual ending
text, not a placeholder, and it refers to Minax and to Britannia, ending with
`〜 新たなる冒険へ続く 〜` ("to be continued in a new adventure"), which is a reference
to Ultima III.

Sixteen lines, then the credits path. Reproducible with:

```bash
python3 tools/savetext.py /var/tmp/death.state --japanese --min 6 \
  | grep -E '^0x007d[b-f]'
```

## Debug and cheat modes

Four, at `0x7b7b3` onward. These are named in the game itself:

| Japanese | meaning |
|---|---|
| `デバッグ・モ−ド` | debug mode |
| `ダンジョンマスタ−` | dungeon master |
| `ウルティママスタ−` | Ultima master |
| `ゾンビモ−ド` | zombie mode |
| `お金持ちモ−ド` | rich mode |

They are not documented anywhere in the project's other sources. How they are
activated is unknown, and is a promising open question because a save editor could
plausibly set whatever flag they read.

## NPC dialogue prefixes

At `0x7b9aa`, one per speaker:

```
サントレは言った：        Santre said
名もなき老人は言った：      the nameless old man said
フロップは言った：        Flop said
衛兵が言う：            the guard says
道化師が歌っている：       the jester is singing
商人が言った：           the merchant said
戦士が言った：           the warrior said
僧侶が言った：           the cleric said
魔法使いが言った：         the wizard said
泥棒が言った：           the thief said
店の主人が言った：         the shopkeeper said
自動操縦装置が言った：      the autopilot said
金属性の声が響いた：       a metallic voice rang out
```

The autopilot lines imply the space sequence has recorded dialogue, and the metallic
voice is presumably the computer on the planets.

## Gameplay text that documents mechanics

Several strings state rules directly:

| Japanese | meaning | what it tells us |
|---|---|---|
| `船の乗組員はあなたの乗船を拒否し` | the crew refuse your boarding | the blue tassle check is enforced |
| `その方向には誰もいない` | there is nobody in that direction | attack with no target |
| `ソ−サリアの地表でしかセ−ブで` | you can only save on Sosaria's surface | confirms the no-save-in-space rule |
| `自動操縦装置に座標を入れよ：` | enter coordinates into the autopilot | the space grid takes typed coordinates |
| `巡航速度で航行中です` | cruising at speed | vehicle state |
| `乗り物に乗っている` | you are riding a vehicle | |

The save restriction is worth noting because the research doc asserted the same rule
from DOS evidence, and here it is in this build's own text.

## Caveat

This is RAM, not the file format. What is extracted is what was loaded when the
snapshot was taken. Strings used only in scenes not yet visited may be absent. The
amount found suggests most of the game's text is resident at once, but that is an
inference, not a measurement.

The proper extraction is from `ENCHANT.EXP` directly, at the offsets above. This page
records where they are so that work can start from a map rather than a search.

---

**[Roster reference](roster-reference.md)** **[Open questions](open-questions.md)**
