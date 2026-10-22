# How this was made, and on what

Recorded because it explains several decisions that otherwise look odd, and
because anyone reproducing this deserves to know what the ground truth was.

## The host

Everything was done on a **headless Bazzite Linux host**. No monitor was
attached at any point.

That single fact explains the biggest structural decision in this repository.
Since there was no display, the emulator could not simply be launched and looked
at. Hence the container with Xvfb, x11vnc and noVNC, so the game could be played
in a browser from another machine, and the supervisor HTTP API, so screen state
could be read as text rather than seen. Neither exists because browser play is a
nice feature. They exist because the alternative was nothing.

Bazzite specifically brought two problems, both now handled in
`tools/container-run.sh`:

- SELinux enforcing, so every bind mount needs `:z` or the container gets
  `Permission denied` on host directories. This failed silently the first time.
- podman under sudo. That turned out to be unnecessary on this host, but the
  script probes rather than assuming either way.

## The agents

Written with [pi.dev](https://pi.dev) driving **DeepSeek 4.1 flash**, for under
10 USD of credit. Later work may involve a local **Qwen 3.8 flash** model
instead, which changes nothing about the results but is noted so the record is
complete.

## What that means for trusting this

The interesting part is not that a model wrote it, but that the method was built
to catch a model being wrong, because it was wrong repeatedly and the evidence
is still in these pages.

[The save disk](save-disk.md) documents a week of confident, wrong conclusions,
including a written claim that Ultima II saving was an unfixable emulation defect.
It was not. The actual cause was reading a harmless warning as a hard failure,
and the correction is recorded rather than edited away.

Three defences were built in response, and they are why the numbers here can be
trusted even where the prose was once wrong:

- **`tools/verify.js`** asserts 107 claims against the disc. A doc claim that is
  not asserted should be treated as unverified, and this is stated in the README.
- **Every write is read back and re-parsed** before a tool reports success. This
  is what caught a save-editor bug that was silently deleting character slots.
- **Measurements rather than recall.** The character stat modifiers were measured
  by creating characters with 10 in every attribute, after a published table
  disagreed with the game. The table was wrong for this port in three places.

Where a measurement does not prove what it appears to, the page says so. Where a
probe failed, it is recorded, because a failed probe stops the next person
repeating it.

## What this does not claim

That the analysis is complete, or that every conclusion will survive. It claims
that each one is reproducible from the archive.org zip, and that the ones which
are wrong are marked as corrected rather than deleted.
