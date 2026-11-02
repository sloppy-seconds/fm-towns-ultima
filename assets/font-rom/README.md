# FMT_FNT.ROM, the one platform ROM this repository carries

`FMT_FNT.ROM` is the FM Towns glyph ROM. The game fetches text through segment selector `0138`, whose base on a real
machine is linear `0xC2100000`, and this file is what that window holds. Without it the port runs and draws no text at
all, which reads as a broken renderer rather than as a missing file.

It is committed here, in git, as a deliberate exception to the rule that this repository never hosts platform ROMs.
What follows is everything established about where it came from and what may be done with it, so that a reader can
check the claim rather than take it on trust.

**sha256** `b62399cd7ad504229baa17ebe7260e683da0fb515d6162564e889f705ab07431`
**size** 262,144 bytes
`tools/portcheck.js` asserts both, so the file cannot be swapped for a different ROM without failing a gate.

## Where it came from

`tools/vendor.sh --roms` downloads `https://ysflight.in.coocan.jp/FM/towns/FreeTOWNS/ROMS.zip` and unpacks it into
`vendor/roms/`, which is gitignored. This file was copied from there, byte for byte. The zip is Soji Yamakawa's
(CaptainYS) FreeTOWNS ROM set, the same one Tsugaru, the emulator this project also uses, runs on.

## What it is made of

It is **not** a dump from Fujitsu hardware. The FreeTOWNS `LICENSE.md`, which ships inside that zip, says of it:

> FMT_FNT.ROM is created by a program developed by pinterior (https://github.com/pinterior/FMT_FNT.ROM) from a
> public-domain font.

That program is `16dot.py`, in `github.com/pinterior/FMT_FNT.ROM`. Its README gives the invocation, and the inputs are
BDF font files:

```
python 16dot.py \
   --graphics  ./towns-font/towns16g.bdf \
   --jisx0201  ./xfonts-shinonome/bdf/shnm8x16r.bdf \
   --jisx0208  ./xfonts-shinonome/bdf/shnmk16min.bdf \
   --char8     ./towns-font/ank8.bdf \
   --graphics8 ./towns-font/ank8g.bdf \
   --out FMT_FNT.ROM
```

Shinonome is the public-domain Japanese bitmap font the FreeTOWNS licence is referring to. `towns-font` is pinterior's
own repository. So this file is generated glyph data from public-domain font sources, not Fujitsu ROM content.

## What is not established

There is **no explicit licence grant** for the generated file in either place. The FreeTOWNS `LICENSE.md` states its
provenance ("from a public-domain font") and imposes three conditions, but those conditions are attached to
`FMT_SYS.ROM`, not to this one. The pinterior repository states what the file is generated from and does not attach
terms to the output.

So the position is: the inputs are public domain, the generator is public, the output is a mechanical transformation of
those inputs, and the person who assembled and distributes the set describes it as coming from a public-domain font.
That is strong evidence that redistribution is fine and it is not a licence text. Anyone relying on it should know
that difference, which is why this file exists.

## Why it is committed at all

Because the port needs one ROM and this is the one, and fetching 786 KB over the network on first run is a worse
experience than 256 KB in the repository for a file whose inputs are public domain. Generating it locally was
considered and rejected: it needs Python with numpy and bdflib, plus three BDF font repositories, which is more
machinery than the file is worth.

## What this exception does not cover

The other four files in the FreeTOWNS set stay where they are: `FMT_SYS.ROM`, `FMT_DOS.ROM`, `FMT_DIC.ROM` and
`FMT_F20.ROM` are gitignored under `vendor/` and are not committed. None of them is read by the port. `FMT_SYS.ROM` and
`FMT_DOS.ROM` carry Kasanova's and CaptainYS's terms and are the emulator's business, not this project's, and
`FMT_F20.ROM` has no stated terms anywhere in the set.

`tools/precommit-guard.sh` allows this one path by name and blocks every other `.rom` by extension, so the exception
cannot widen without someone editing that line on purpose.

## If a rights holder objects

Say so at the address in the repository's `README.md` and it comes down. That is the same commitment the repository
makes about the recompiled code, and it applies here more readily, because this is the one file in the tree whose
terms are inferred rather than written.
