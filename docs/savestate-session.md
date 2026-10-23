# Savestate session: the run sheet

One session at the emulator. Everything it produces unblocks six plan items at once, which is why it is worth
doing before any further static work.

**This page is the procedure. Follow it in order. Every step has a command and a check.**

## What it is for

A savestate taken **during play**, not at a menu. Both existing states are menus: `title.state` and
`death.state` differ in only 305 bytes, all of them in the header, and every character in every save is at
`MAP=0`, `WORLD=0`.

From one good state the following become answerable:

| item | what the state settles |
|---|---|
| `3a` | the whole item: segment registers, RNG seed, object record size, world contents |
| `1b` | whether the tick counter is on the roster fields or elsewhere |
| `4c` | the layout of a populated `WORLD*.UT2` |
| `4b` | a live RNG to verify combat arithmetic against |
| `2a` / `2b` | the map buffer as drawn, to compare against tile indices |
| top-of-image mapping | the segment registers again |

## Prerequisites, verified

Checked before writing this, not assumed:

| thing | state |
|---|---|
| container image | `localhost/u2-novnc`, 623 MB. **The plan said `localhost/fmtowns`, which is wrong** |
| container running | **no.** `container-run.sh start` brings it up |
| emulator vendored | `vendor/emulator`, `vendor/roms`, `vendor/freetownsos` |
| driver tooling | `tools/container-run.sh`, `tools/debug-session.sh`, `tools/u2flow.py`, `tools/vncclick.py` |
| savestate tooling | `tools/statefind.js`, `tools/mirror.js`, `tools/savetext.py`, `tools/statesegments.js` |
| save disks | a dozen 1,261,568-byte 2HD images in `saves/`, including `fresh_game.hdm` and `maxed_four.hdm` |
| sudo | required for podman on this host. Test with `sudo -n echo SUCCESS` first |

## Step 1: start the container

```
./tools/container-run.sh start
```

Check: `./tools/container-run.sh status` reports running, and `curl -s localhost:8080/api/status` returns
JSON with a command count.

**If the ports do not come up, stop and report.** Previous sessions note `tools/try.sh` tears down before
starting and refuses to move ports for good reason: a stale container on 6080 looks like a working one.

## Step 2: boot to the game

Open `http://<host>:6080/vnc.html` in a browser. This is the part that needs a human, and it is the only part
that does.

The sequence is the same as the quickstart: boot TownsOS, run the trilogy launcher, choose Ultima II, load
`fresh_game.hdm` or make a character.

**Every keypress must be explicitly requested as it happens.** That is a standing rule in `AGENTS.md`, and it
exists because a stray key can overwrite a save. Do not batch a sequence and hope.

## Step 3: get past the menus

**This is the whole point.** The state must be taken when a character is standing in the world, because:

- `MAP=0` and `WORLD=0` in every existing save, so a menu state carries no world
- the RNG at `0xdfc78` is never called at a menu, so a menu state has a dead seed
- `0x7a7d0`, the object array, is all zeros at a menu, which is why the 57-versus-69 record size is unresolved

So: create or load a character, **and walk at least a few steps**. Then the state means something.

## Step 4: take the state

```
curl -s -X POST localhost:8080/api/cmd -H 'Content-Type: application/json' \
  -d '{"line":"SAVESTATE /data/play.state"}'
```

`/data` inside the container is bind-mounted to **`saves/` in the repository**, so the file lands on the host
at `saves/play.state`. Verified in `tools/container-run.sh`: the mount is `"$ROOT/saves -> /data"` with `:z`
for SELinux.

Check the response says it wrote, then confirm the size on the host is about **7,607,281 bytes**, which is
what both existing states are. A different size means a different Tsugaru build or a truncated write, and is
worth stopping over.

**Take a second one after a second action.** `SAVESTATE /data/play2.state`, which lands at `saves/play2.state`, after another step or after
opening the inventory. **Two states a known action apart are worth far more than one**, because a diff shows
exactly which bytes a turn touches. That is the measurement item 1b needs.

## Step 5: the checks, which are the reason to take two

Run these on the host once both states exist.

```
node tools/statefind.js saves/play.state
node tools/savetext.py saves/play.state --ascii
diff <(xxd saves/play.state) <(xxd saves/play2.state) | head -60
```

What each tells you:

- **`statefind`** confirms the image is in the state and at what base. If it reports nonsense, the state was
  taken too early.
- **`savetext`** should now show world text rather than only menu text.
- **the diff** is the important one. Bytes that change between two states a step apart are the tick and the
  position. Bytes that do not change are display copies.

## Step 6: record before doing anything else

Write the findings into the pages that own them, in the same session, before the emulator is torn down.
Specifically:

- segment registers into `jump-tables.md` and `addressing-limits.md`
- the RNG seed and its delta per action into `rng-helpers.md`
- the object record size into `record-arrays.md`
- world file contents into `world-format.md`
- the tick diff into `the-tick.md`

## What not to do

- **Do not take a state at a menu.** Both existing ones are, and that is why six items are blocked.
- **Do not run `PAUSE`.** It freezes the VM and silently breaks every later click.
- **Do not batch keypresses.** One at a time, requested.
- **Do not draw conclusions from one state.** Two states a known action apart are the measurement; one state
  is just a snapshot.
- **Do not tear the container down before the states are copied to the host.** `container-run.sh stop`
  removes the container, and if `/data` was not mounted the states go with it.

## Honest expectation

**This may not settle everything.** The segment registers were searched for in both existing states and not
found in a recognisable form, so they may not be in the savestate at all. If they are absent from a play
state too, that is a real negative and worth recording, and the remaining route is the Tsugaru state format
documentation rather than more searching.

The items this will most likely settle are the ones that need data rather than registers: the RNG, the tick,
the object array, and the world file. Those four are worth the session on their own.

---

**[Plan](plan.md)** **[The tick](the-tick.md)** **[Jump tables](jump-tables.md)** **[World format](world-format.md)**
