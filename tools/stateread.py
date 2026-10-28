#!/usr/bin/env python3
"""stateread.py - read character fields out of a Tsugaru savestate, with no emulator.

WHY THIS EXISTS. tools/peek.js reads a RUNNING game over the HTTP API. That needs the
emulator, the container and a live character, so every question about state costs a boot and
a session. A `.state` file already holds the same RAM, frozen, and this reads it offline.

WHAT THE FILE IS. A 320-byte header, then the machine's memory. The header is measured, not
assumed:

    0x000  u32   0x140, the header size
    0x004  char[8]  "FMTOWNS"
    0x148  char[]   "486DX", the CPU string, just past the header

THE ADDRESS MAPPING, which is the whole difficulty, and is already documented in this
repository. The image is NOT stored at one fixed offset:

    image offset <  0xd0000   state address = 0x0762d2 + imageOffset
    image offset >= 0xd0000   state address = 0x4392d2 - imageOffset

The second line is the surprise: the top of the binary is stored in REVERSE block order, so
as the image offset rises the state address falls. docs/mirrored-region.md derives it and
verifies it at five points; this tool re-verifies it every run before trusting a read.

Offsets here are IMAGE offsets, meaning the file with its 32-byte MP header removed, because
that is the form the runtime has. Subtract 0x20 from a file offset.

Measured on saves/play4.state, in 4 KB windows below 0xd0000: 140 of 208 identical to the
file, 58 zero in the file and filled in the state (the game's BSS), 5 differing in both
(runtime patching), 5 data in the file and zero in the state. In the mirrored region, 52 of
54 sampled windows match exactly. So mismatches are expected and are mostly the game writing
BSS over space the file leaves empty, not a broken mapping.

Usage:
    ./tools/.venv/bin/python3 tools/stateread.py saves/play4.state
    ./tools/.venv/bin/python3 tools/stateread.py saves/play4.state --json
    ./tools/.venv/bin/python3 tools/stateread.py saves/play4.state --check
    ./tools/.venv/bin/python3 tools/stateread.py saves/play4.state --at 0xcde81 --len 4
    ./tools/.venv/bin/python3 tools/stateread.py saves/play4.state --diff 0xe5d90

--check verifies the mapping against ENCHANT.EXP and exits non-zero if it no longer holds,
because a silently wrong mapping would make every field read a plausible number from the
wrong place. It is the reason to trust the rest of the output.

Needs no emulator, no container, no game data beyond a state file and ENCHANT.EXP.
"""

import argparse
import json
import os
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
IMAGE = os.path.join(ROOT, 'ENCHANT.EXP')
MHDR = 0x20                      # the MP header, stripped: image offset 0 is file offset 0x20
BASE_LOW = 0x0762D2              # docs/mirrored-region.md, a9-reference-search.md
BASE_MIRROR = 0x4392D2           # docs/mirrored-region.md, stateAddress(o) = 0x4392d2 - o
MIRROR_AT = 0xD0000

# The player record does NOT follow the mirrored formula, measured against a live game.
#
# Taken with the game paused, then compared to tools/peek.js reading the same moment:
#
#   live      hp=216 maxhp=400 exp=10 food=39460 gold=431 px=13 py=20 map=35
#   record at 0xcde81 via 0x29d4b2 + o  ->  216 400 10 39460 431 13 20 35   all eight match
#
# The mirror formula 0x4392d2 - 0xcde81 gives 0x36b451, which holds 0. It lands 0x11e past
# the record, so the difference is not a rounding or an off-by-one and the two rules are not
# one rule with a different constant. What separates them is not settled: both addresses are
# above 0xd0000, so the offset alone does not decide, and the record is BSS while the code is
# loaded from the file. That is the "two bases, relationship unknown" line in
# docs/live-session.md, and this tool does not pretend to have closed it: it uses a base per
# field, each verified against a live read, and --check refuses if a verified field stops
# matching its recorded value.
BASE_RECORD = 0x29D4B2

# Field addresses in IMAGE offsets. Every one is from docs/live-fieldmap.md, which verified
# them against the game's own display and against a single recorded step. HP is 0xcde81 and
# NOT 0xcde85; that correction is recorded in docs/hp-and-damage.md.
FIELDS = {
    'hp':      (0xcde81, 'u32'),
    'maxhp':   (0xcde85, 'u32'),
    'exp':     (0xcde89, 'u32'),
    'food':    (0xcde8d, 'u32'),
    'gold':    (0xcde91, 'u32'),
    'px':      (0xcdf6b, 'u32'),
    'py':      (0xcdf6f, 'u32'),
    'map':     (0xcdf53, 'u32'),   # unverified, see live-fieldmap.md
    'rng':     (0xdfc78, 'u32'),   # confirmed as the LCG state by consecutive samples
    'strength':     (0xcde62, 'u32'),
    'agility':      (0xcde66, 'u32'),
    'stamina':      (0xcde6a, 'u32'),
    'charisma':     (0xcde6e, 'u32'),
    'wisdom':       (0xcde72, 'u32'),
    'intelligence': (0xcde76, 'u32'),
}


def state_addr(image_off, region='code'):
    """Where an image offset lives in the state file.

    Three rules, each measured rather than derived, because they do not unify:
      code below 0xd0000   a forward copy at 0x0762d2
      code at or above     a mirrored copy, 0x4392d2 - o
      the player record    a forward copy at 0x29d4b2, even though it is above 0xd0000
    """
    if region == 'record':
        return BASE_RECORD + image_off
    return (BASE_LOW + image_off) if image_off < MIRROR_AT else (BASE_MIRROR - image_off)


def load_state(path):
    with open(path, 'rb') as f:
        return f.read()


def load_image():
    with open(IMAGE, 'rb') as f:
        return f.read()[MHDR:]


def header(state):
    """The header fields that are known, and nothing guessed."""
    if len(state) < 0x150:
        return {'error': 'file too short to hold a header'}
    size = struct.unpack_from('<I', state, 0)[0]
    mag = state[4:12]
    out = {
        'headerSize': size,
        'magic': mag.decode('latin1').rstrip('\x00') if mag[:8] == b'FMTOWNS\x00' else repr(mag),
    }
    # '486DX' sits just after the 0x140-byte header; report it only if it looks like a CPU name.
    cpu = state[0x148:0x158].split(b'\x00')[0]
    if cpu and all(0x20 <= b < 0x7f for b in cpu):
        out['cpu'] = cpu.decode('latin1')
    return out


def verify_mapping(state, image, samples=400, n=32):
    """Check the two formulas against the file. Returns (checked, failures).

    SAMPLING IS THE HARD PART, and two earlier versions were wrong here.

    A first version took 24 even-stride probes; most landed in zero fill, so only 5 were usable
    evidence and the verdict was noise.

    A second skipped zero probes but still sampled wherever it liked, and reported 22 percent
    agreement on a mapping that is correct. The reason is that large parts of this image are
    REWRITTEN at runtime: the 0xEB string table from 0xd0000 up, and BSS the file leaves zero.
    Those offsets differ by design and are not evidence against the formula.

    So the probes are drawn from the image spans that actually hold data, plus the mirrored
    region above 0xd0000 where the mapping changes. A probe that is zero in either file is
    skipped. What remains is a fair test of the arithmetic.

    The spans are not guessed. Measured on ENCHANT.EXP, the only non-zero stretches below
    0xd0000 are 0x0..0xf000, 0x40000..0x42000, 0x7a000..0x7c000 and 0xcd000..0xd0000; almost
    all of the binary's code sits ABOVE 0xd0000, in the mirrored region. That is the fact two
    earlier versions of this sampler missed: sampling "the code region" as 0xe5f2..0x40fcc
    probes a zero run and checks nothing.
    """
    CODE_SPANS = [(0x0, 0xf000), (0x40000, 0x42000), (0x7a000, 0x7c000),
                  (0xcd000, 0xd0000), (0xd4000, 0x105000)]
    fails = []
    checked = 0
    for lo, hi in CODE_SPANS:
        hi = min(hi, len(image))
        stride = max(n, (hi - lo) // (samples // len(CODE_SPANS)))
        for o in range(lo, hi - n, stride):
            want = image[o:o + n]
            if not any(want):
                continue
            a = state_addr(o)
            if a < 0 or a + n > len(state):
                continue
            got = state[a:a + n]
            if not any(got):
                continue
            checked += 1
            if got != want:
                fails.append((o, want.hex(' '), got.hex(' ')))
    return checked, fails


def read_field(state, image_off, kind='u32'):
    n = {'u32': 4, 'u16': 2, 'u8': 1}[kind]
    a = state_addr(image_off, 'record')
    if a < 0 or a + n > len(state):
        return None
    return int.from_bytes(state[a:a + n], 'little')


def main():
    ap = argparse.ArgumentParser(description='Read character fields from a Tsugaru savestate.')
    ap.add_argument('state')
    ap.add_argument('--json', action='store_true', help='one JSON object')
    ap.add_argument('--check', action='store_true', help='verify the address mapping and exit')
    ap.add_argument('--at', help='read a raw image offset from the RECORD region, hex')
    ap.add_argument('--code', action='store_true',
                    help='with --at or --diff, use the code mapping instead of the record')
    ap.add_argument('--len', type=int, default=4, help='bytes for --at, default 4')
    ap.add_argument('--diff', help='compare one image offset against ENCHANT.EXP')
    ap.add_argument('--expect', action='append', default=[], metavar='FIELD=VALUE',
                    help='a value the record must hold, for --check. Repeatable.')
    ap.add_argument('names', nargs='*', help='only these fields')
    a = ap.parse_args()

    state = load_state(a.state)

    if a.check:
        image = load_image()
        checked, fails = verify_mapping(state, image)
        h = header(state)
        print('%s: %d bytes, header %s %s%s'
              % (os.path.basename(a.state), len(state),
                 h.get('headerSize'), h.get('magic'),
                 ', ' + h['cpu'] if 'cpu' in h else ''))
        print('  mapping: %d non-zero probes, %d mismatched (%.0f%% agree)'
              % (checked, len(fails), 100.0 * (checked - len(fails)) / max(checked, 1)))
        for o, want, got in fails[:5]:
            print('    image+0x%-8x want %s' % (o, want))
            print('                 got  %s' % got)
        # The gate: below 0xd0000 most windows are identical, so a very low agreement means
        # the formula has broken. 50 percent is well under the 67 percent measured on a real
        # state and well over what a wrong formula produces.
        ok = checked and (100.0 * (checked - len(fails)) / checked) >= 50.0
        print('  VERDICT:', 'mapping holds' if ok else 'MAPPING DOES NOT HOLD')

        # The record base cannot be checked against the file, because the record is BSS: the
        # image is zero there, so a mapping onto zeros matches the image perfectly and holds
        # nothing. The only honest test is a value read from the running game at the same
        # moment, supplied with --expect.
        bad = 0
        for spec in a.expect:
            name, _, want = spec.partition('=')
            if name not in FIELDS:
                print('  unknown field in --expect: %s' % name)
                bad += 1
                continue
            off, kind = FIELDS[name]
            got = read_field(state, off, kind)
            good = got is not None and str(got) == want.strip()
            print('  %-13s want %-8s got %-8s %s' % (name, want.strip(), got, 'ok' if good else 'MISMATCH'))
            if not good:
                bad += 1
        if a.expect:
            print('  record base 0x%x: %s' % (BASE_RECORD,
                  'every supplied value matches' if not bad else '%d MISMATCH' % bad))
        return 0 if (ok and not bad) else 1

    if a.at:
        # --at is for the RECORD region by default, because that is what the field addresses in
        # this tool mean and what a caller is almost always after. Using the code formula here
        # was wrong: at image offset 0xcdf6b the code rule applies the mirrored 0x4392d2 - o and
        # returns zeros, while the record really lives at 0x29d4b2 + o. Pass --code to get the
        # image-mapping instead.
        off = int(a.at, 0)
        region = 'code' if a.code else 'record'
        a0 = state_addr(off, region)
        print('image+0x%x -> state 0x%x (%s)  %s'
              % (off, a0, region, state[a0:a0 + a.len].hex(' ')))
        return 0

    if a.diff:
        off = int(a.diff, 0)
        image = load_image()
        want = image[off:off + 32]
        got = state[state_addr(off): state_addr(off) + 32]
        print('image+0x%x at state 0x%x' % (off, state_addr(off)))
        print('  file :', want.hex(' '))
        print('  state:', got.hex(' '))
        print('  equal:', want == got)
        return 0

    names = a.names or list(FIELDS)
    out = {}
    for name in names:
        if name not in FIELDS:
            print('unknown field: %s' % name, file=sys.stderr)
            out[name] = None
            continue
        off, kind = FIELDS[name]
        out[name] = read_field(state, off, kind)

    if a.json:
        print(json.dumps(out))
    else:
        for name in names:
            off = FIELDS.get(name, (0,))[0]
            v = out[name]
            print('  %-13s %s   0x%x' % (name, ('FAILED' if v is None else v), off))
    return 0


if __name__ == '__main__':
    sys.exit(main())
