# Tsugaru as a build harness: what the console actually offers

The idea is right and the mechanism is different. This page records the real command set, because a proposed
harness was built on four flags that **this Tsugaru build does not have**, and the difference changes the design.

## The proposed flags that do not exist

A harness design was drafted around these Tsugaru options:

```
-FASTMODE  -AUTOTYPE  -QUITAT "COMPILATION_COMPLETE"  -HOSTDIR ${WORKSPACE_DIR}
```

**None of them exists.** `HELP` over the emulator console lists 282 commands and there is no `FASTMODE`,
`AUTOTYPE`, `QUITAT` or `HOSTDIR`. Building on them would have produced a script that fails immediately with an
unknown-option error and reads as a broken emulator.

## What the console does offer

Queried live from the running instance, the relevant commands are:

| need | command | evidence |
|---|---|---|
| type keystrokes | `TYPE characters` | present |
| run until something | `WAIT` | present |
| leave the emulator | `QUIT` / `Q` | present |
| send a host file into the VM | `XMODEMTOVM filename` | **verified**: replies `Ready to send /data/TEST_DIV.C` and `Start XMODEM in FM TOWNS!` |
| bring a VM file back to the host | `XMODEMFROMVM filename` | present |
| swap the CD | `CDLOAD filename`, `CDEJECT`, `CDOPENCLOSE` | present |
| debug traces | `DBLOG`, `CDBLOG` | present |

**`XMODEMTOVM` is the real equivalent of `-HOSTDIR`, and it is verified rather than assumed.** It is a
send-and-receive handshake: the emulator announces it is ready, and a receiver inside the guest has to be started.
That is a different design from a shared folder, because it needs a guest-side command to run, so it needs a shell.

## The prerequisite that has not changed

**Every route needs a DOS prompt inside TownsOS.** `XMODEMTOVM` waits for a guest-side receiver. `TYPE` types into
whatever has focus. Neither does anything useful from the graphical shell.

So the harness cannot be built around a boot flag. It has to start with getting to a command prompt, and that is
the step currently unsolved.

## The geometry, measured, because it decides every click

```
Tsugaru window      640x496 at screen position (2,40)
desktop paints      top-left 640x520 of a 1024x768 root capture
```

A screenshot is therefore **not** a 1024x768 desktop. Treating it as one aims every synthetic click at the wrong
pixel, which is exactly what happened repeatedly. A coordinate read from a capture maps to a window coordinate by
subtracting the window origin, with no scaling.

Better still, avoid coordinates entirely. `TYPE` through the console needs none.

## What a working harness would look like

1. boot the compiler CD as `Q:` under Tsugaru, which is verified to reach the TownsOS desktop
2. reach a command prompt
3. `XMODEMTOVM` the source
4. `TYPE` the compiler command line
5. `XMODEMFROMVM` the object
6. `QUIT`

Steps 1 and 2 are the problem. Steps 3 to 6 are all confirmed present.

## The open question for anyone picking this up

**Is there a TownsOS keyboard shortcut that opens a command console from the graphical shell?** The file manager
offers a `コマンドモード` icon, and the CD carries `console.exe`. If a shortcut exists, the whole harness becomes
`TYPE`-driven and needs no mouse at all. That is the cheapest thing to try next, and it is a question for the
TownsOS manual rather than for more clicking.
