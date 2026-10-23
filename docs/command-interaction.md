# Commands, and what follows them

The command bar lists what can be done. It does not say what each command then asks for, and that gap matters
for a bot: **a command is rarely one keypress.** This page records the interaction model the player described,
and marks what is established from the binary versus what is observation.

## A command is a key plus a response

Several commands take a **direction** after the letter. The player's examples: `A)ttack` and `T)rans-` both do.
The letter opens the command, then the game waits for a direction, and only then is the turn spent.

**Others take a choice from a list.** Talking to a merchant, and the other scripted interactions, open a menu
the player picks from rather than taking a single key.

So there are **at least three interaction shapes**:

| shape | example | what the bot must do |
|---|---|---|
| letter only | `P)ass`, `Z)tat` | one keypress |
| letter then direction | `A)ttack`, `T)rans-` | letter, then an arrow key |
| letter then list | merchant, talking | letter, then move a highlight and confirm |

`E)nter` and `X)-it` are probably letter-only. `G)et` may take a direction for which item. **None of these are
confirmed individually yet.**

## What is established, and what is not

**Established from the binary:**

- the 25 commands, extracted at `save-files.md` 8.0.1.1
- the key for each is the letter before the `)`
- the dispatcher at `0xf6ebc` indexes a ten-entry table by control codes 1 to 10, so movement is arrows and
  letters reach a different path

**Not established from the binary:**

- **what each command prompts for.** No prompt string is findable as ASCII: `Who?`, `Y/N`, `Direction`,
  `How many` and eight other candidates all return not found. They are in the `0xEB` private character set,
  which is why the same wall that blocked the action window blocks this.

**Therefore the prompts are only readable off the screen**, which is what `tools/u2read.py` is being built
for, and what the vision model already does successfully.

## Why this changes the bot plan

An earlier framing had the bot's key layer as "press a letter", with `choose(re)` from the U3 bot dropped because
U2 has no cursor menu. **That was half right and half wrong.**

- U2 has **no cursor menu for the command bar**. The letter is the command.
- U2 **does** have cursor menus, for lists the scripted interactions present. So `choose(re)` is still needed,
  just not where the U3 bot uses it.

**Three primitives, not one:**

```
press(letter)                 a command
press(direction)              a direction, when one is asked for
choose(re)                    pick a line from a list, when the game shows one
```

and an `idle` that knows **which** of those the game is waiting for, which is the `waiting` flag problem in
`gameplayer-plan.md` and is now more urgent, because the shape differs.

## What the first bot actually needs

Only two commands need their prompt shape confirmed to start, because the scope is walk plus attack:

| command | shape assumed | confirmed? |
|---|---|---|
| movement | arrow key, no prompt | **yes**, measured: one west step moved `PLAYER_X` by one |
| `A)ttack` | letter, then a direction | **no** |

**So there is exactly one unknown standing between us and a working bot: what `A` asks for after it is pressed.**
Everything else in the first target is established.

That is a single observation, and it can be made by a person pressing `A` once in a fight while a screenshot is
taken.

## What would establish the prompts

**Observe them.** The approach that has not failed yet: watch the game while a person does each command once,
and record the prompt. That is a short session, one command at a time, and the vision model reads the text.

**The result is a table of 25 rows: command, prompt shape, and what a valid response looks like.**
That is a direct input to the bot and it is the kind of thing a reimplementation needs anyway.

## Not to be assumed

- **That every command takes one response.** Some may take two, such as `T)rans-` asking a direction and then
  whether to travel.
- **That the prompt is always in the same place on screen.** The action window moves; a prompt line may too.
- **That a direction is always an arrow key.** `A)ttack` may accept a compass letter instead, which the
  dispatcher's control codes suggest is not the case but do not prove.

---

**[Command dispatch](command-dispatch.md)** **[Plan for a game-playing bot](gameplayer-plan.md)** **[Action window](action-window.md)**
