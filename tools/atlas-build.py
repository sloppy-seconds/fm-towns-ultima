r"""tools/atlas-build.py - compile the idiom-atlas corpus with High C 1.73 and
collect the emitted code for every probe.

WHY THIS EXISTS. Plan item 0a (docs/plan-attribution.md) needs a labelled
compiler-emitted population: what High C 1.73 emits, and what it never emits.
Nothing can be called `hand-asm-positive` until the never-emits list exists, and
the bulk compile-and-diff of the recomp track is gated on it. This is the
instrument that produces it.

THE ROUTE, and why this one. docs/highc-authentic-toolchain.md established that
the authentic generator is the driver `Q:\HC386\BIN\HC386.EXE` run from a DOS
prompt reached by booting with the SDK CD seated. That route engages the
optimiser and reproduced seven routines byte for byte. The older real-mode
`HCD386.EXE` route that tools/cserve.js drives does not engage the optimiser at
all, so an atlas built on it would record the route's limits as if they were the
compiler's. This script uses the driver route only.

WHAT THIS DOS WILL NOT DO. Five constraints, each found by running into it
rather than assumed:

1. The CD wins the boot, so the hard image's AUTOEXEC.BAT never runs and
   patching it changes nothing. docs/driving-the-townsos-prompt.md says this in
   those words; the first attempt here patched the HDD AUTOEXEC, booted, and got
   `Q:\>` from the CD exactly as predicted. One command therefore has to be
   typed, and the colon does survive /api/keys (keycodes ["d", ":"]).
2. Redirection is not supported. Every `> FILE` in a batch prints `Sorry,
   redirection and pipe are not supported yet.` and runs the command without
   it, so no log file and no progress marker can be written from inside the
   guest. Completion is detected from the host by watching for the output files
   the compiler itself leaves on the image.
3. Filenames are 8.3. A source named A04_PARAMS8.C is stored as A04_PA~1.C and
   DOS answers `file not found` to the long name. Probe stems are therefore
   three characters, A01 to A99, and the descriptive name stays in the corpus
   directory where a person can read it.
4. The driver leaks file handles. Seven `HC386.EXE` invocations succeed and the
   eighth fails with `Error in opening configuration file
   Q:\HC386\BIN\hc386set.cnf: too many files are open.` even though the CD's
   CONFIG.SYS says FILES=20, because TownsOS itself holds most of the table. So
   the corpus cannot be compiled in one batch: it is split into chunks of
   COMPILES_PER_BOOT and the guest is reset between chunks. Measured on the
   first full run, which produced A01 to A07 and nothing after.
5. The driver writes its .EXP and .MAP into the current directory, not beside
   the source. Staging therefore lives at the image root and the batch runs from
   there, so sources and outputs share one place the host can read.
6. `mmd` cannot be used by a harness at all. It opens /dev/tty to ask a question
   when the target directory exists, and closing stdin does not stop it because
   it opens the terminal directly, so it sleeps in wait_woken forever. Every
   mtools call now also carries a hard timeout for the same reason: a call that
   never returns would otherwise stall the build silently rather than failing.

FUNCTION EXTENTS come from the linker map, not from a scan for `ret`. Each
compile leaves NAME.MAP whose Segment map line carries the module segment's
Size, and the code segment starts at 0x200 in the P3 image. So a probe's extent
is asserted by the linker rather than inferred, which is the standard item 12a
will require.

USAGE
  ./tools/atlas-build.py                 stage, boot, compile, collect
  ./tools/atlas-build.py --stage-only    write the image and stop
  ./tools/atlas-build.py --collect-only  read back from an image already run
  ./tools/atlas-build.py --image PATH    work image (default /var/tmp/atlas/work.h0)
  ./tools/atlas-build.py --per-boot 6    compiles before each reset

The work image must be a copy. saves/scratch-tos11en.h0 is never written to.
"""

import argparse
import json
import os
import re
import shutil
import subprocess
import time

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CORPUS = os.path.join(ROOT, 'tools', 'atlas-corpus')
PRISTINE = os.path.join(ROOT, 'saves', 'scratch-tos11en.h0')
DEFAULT_IMAGE = '/var/tmp/atlas/work.h0'
DEFAULT_OUT = os.path.join(ROOT, 'analysis', 'atlas')

# The TownsOS hard image is a raw UNZ image with a 1536-byte partition offset.
# mtools takes that as `@@1536` and needs the FAT sanity check skipped, which
# docs/driving-the-townsos-prompt.md records as the working invocation.
OFFSET = 1536
MTOOL_ENV = dict(os.environ, MTOOLS_SKIP_CHECK='1')

CONTAINER = 'atlas-tos'
API_PORT = 8098
INNER_API_PORT = 8080
NOVNC_PORT = 6084
VNC_PORT = 5904

# Seven compiles fit before the handle table is exhausted; six leaves a margin
# for a probe that opens an extra file.
COMPILES_PER_BOOT = 6
BOOT_WAIT_S = 90

MDER = None


def mtools_spec(image):
    return '%s@@%d' % (image, OFFSET)


def run(cmd, timeout=90, **kw):
    """Run an mtools command with a hard timeout.

    Two hazards, both hit on the first runs of this script. mtools prompts on
    /dev/tty for some operations, and closing stdin does not stop it because it
    opens the terminal directly, so a prompt is a hang rather than an error. And
    an mtools call against an image the emulator holds open can simply not
    return. Either one would stall the whole build silently, so every call is
    bounded and a timeout is reported as a failure the caller can see. Output is
    decoded with errors='replace' because mexists() reads the compiler's binary
    .EXP through mtype, and a strict decode raised UnicodeDecodeError in the
    middle of a poll loop.
    """
    try:
        return subprocess.run(cmd, env=MTOOL_ENV, capture_output=True, text=True,
                              errors='replace',
                              stdin=subprocess.DEVNULL, timeout=timeout, **kw)
    except subprocess.TimeoutExpired:
        class _R:
            returncode = 124
            stdout = ''
            stderr = 'TIMED OUT after %ds: %s' % (timeout, ' '.join(cmd))
        return _R()


def mdir(image, path='::'):
    r = run(['mdir', '-i', mtools_spec(image), path])
    return r.stdout + r.stderr


def mcopy(image, src, dest):
    r = run(['mcopy', '-o', '-i', mtools_spec(image), src, dest])
    if r.returncode != 0:
        raise SystemExit('mcopy %s -> %s failed: %s' % (src, dest, r.stderr.strip()))


def mmd(image, path):
    """Unused. Kept so the reason is not lost.

    mmd opens /dev/tty to ask a question when the directory already exists, and
    that question cannot be answered from a harness, so it hangs. Staging lives
    at the image root instead, which needs no directory creation at all.
    """
    r = run(['mmd', '-i', mtools_spec(image), path])
    if r.returncode != 0 and 'exist' not in (r.stderr or '').lower():
        print('  mmd %s: %s' % (path, (r.stderr or '').strip()))
    return r


def mdel_bin():
    """The delete command's name differs across mtools builds.

    Debian and this host ship `mdel`; other builds ship `mdelete`. A hardcoded
    name is a FileNotFoundError in the middle of a staging run, which is what
    happened on the first run here, so resolve it once and fail with a sentence
    rather than a traceback.
    """
    global MDER
    if MDER is None:
        for name in ('mdel', 'mdelete'):
            if shutil.which(name):
                MDER = name
                return MDER
        raise SystemExit('neither mdel nor mdelete is on PATH; mtools is incomplete')
    return MDER


def mdelete(image, pattern):
    """Delete a wildcard, and fail loudly if the delete did not work.

    A silent no-op here is worse than a crash: a stale .EXP from an earlier run
    would be read as this run having produced it. The caller re-checks for
    survivors, so this only has to avoid swallowing a missing binary.
    """
    r = run([mdel_bin(), '-i', mtools_spec(image), pattern])
    if r.returncode != 0 and 'not found' not in (r.stderr or '').lower():
        raise SystemExit('%s %s failed: %s' % (mdel_bin(), pattern, r.stderr.strip()))
    return r


def mread(image, path):
    r = run(['mtype', '-i', mtools_spec(image), path])
    if r.returncode != 0:
        return None
    return r.stdout


def mexists(image, path):
    return mread(image, path) is not None


def mread_bytes(image, path, local):
    r = run(['mcopy', '-i', mtools_spec(image), path, local])
    if r.returncode != 0:
        return None
    with open(local, 'rb') as fh:
        return fh.read()


def crlf(lines):
    return ''.join(l + '\r\n' for l in lines)


def corpus_probes(only=None):
    """Every aNN_*.c in the corpus, sorted, with its 8.3-safe stem and source.

    The stem is the leading A<digits> of the file name and nothing else, because
    DOS cannot see a name longer than eight characters and a silently truncated
    short name is indistinguishable from a missing file.

    `only` is a comma-separated stem list for re-running a few probes without
    recompiling the whole corpus, which costs a boot per six probes.
    """
    out = []
    want = set(s.upper() for s in only.split(',')) if only else None
    for name in sorted(os.listdir(CORPUS)):
        if not name.endswith('.c'):
            continue
        m = re.match(r'^([a-z]\d\d)_', name)
        if not m:
            raise SystemExit('%s does not start with a two-digit stem like a01_' % name)
        stem = m.group(1).upper()
        if want is not None and stem not in want:
            continue
        with open(os.path.join(CORPUS, name), 'r') as fh:
            out.append({'stem': stem, 'file': name, 'source': fh.read()})
    if want:
        missing = want - set(p['stem'] for p in out)
        if missing:
            raise SystemExit('--only named stems not in the corpus: %s' % ', '.join(sorted(missing)))
        return out
    if len(out) < 20:
        raise SystemExit('corpus has %d probes; item 0a needs at least 20' % len(out))
    stems = [p['stem'] for p in out]
    if len(set(stems)) != len(stems):
        raise SystemExit('duplicate stems in corpus')
    return out


def chunks(probes, size):
    return [probes[i:i + size] for i in range(0, len(probes), size)]


def build_batch(probes):
    r"""One batch, one boot, one chunk of the corpus.

    No redirection anywhere: the CD's DOS refuses it and prints a warning, and a
    line like `HC386.EXE A01.C > A01.LOG` still runs the compile but creates
    nothing, which is worse than not writing it. Progress is observed from the
    host by listing the directory the compiler writes into.

    `CD \ATLAS` matters: the driver writes into the current directory, so
    without it the outputs land on the image root mixed in with TownsOS.
    """
    lines = ['@ECHO OFF']
    for p in probes:
        lines.append('Q:\\HC386\\BIN\\HC386.EXE %s.C' % p['stem'])
    lines.append('ECHO CHUNKCOMPLETE')
    return crlf(lines)


def stage(image, probes, work, per_boot):
    """Write the corpus and one batch per boot-chunk into the work image."""
    if not os.path.exists(image):
        print('  no work image at %s, copying pristine' % image)
        os.makedirs(os.path.dirname(image), exist_ok=True)
        shutil.copyfile(PRISTINE, image)
    if not os.path.exists(PRISTINE):
        raise SystemExit('pristine image missing at %s' % PRISTINE)

    os.makedirs(work, exist_ok=True)
    stage_dir = os.path.join(work, 'stage')
    os.makedirs(stage_dir, exist_ok=True)

    # Clear last run's outputs. A surviving first .EXP would be read as this run
    # having started and a surviving last .EXP as it having finished. Only the
    # probes about to be compiled: a --only run must not erase the rest.
    for p in probes:
        for ext in ('EXP', 'MAP', 'OBJ'):
            mdelete(image, '::%s.%s' % (p['stem'], ext))
    mdelete(image, '::CH*.BAT')

    for p in probes:
        local = os.path.join(stage_dir, p['stem'] + '.C')
        with open(local, 'w', newline='') as fh:
            fh.write(p['source'].replace('\n', '\r\n'))
        mcopy(image, local, '::%s.C' % p['stem'])
        if not mexists(image, '::%s.C' % p['stem']):
            raise SystemExit('%s did not land on the image' % p['stem'])

    groups = chunks(probes, per_boot)
    for i, grp in enumerate(groups):
        local = os.path.join(stage_dir, 'CH%d.BAT' % i)
        with open(local, 'w', newline='') as fh:
            fh.write(build_batch(grp))
        # Batches sit at the image root so each typed command is one short word
        # with no path and no colon in it.
        mcopy(image, local, '::CH%d.BAT' % i)

    for p in probes:
        if mexists(image, '::%s.EXP' % p['stem']):
            raise SystemExit('stale %s.EXP survived deletion; refusing to boot' % p['stem'])
    print('  staged %d probes in %d chunks of <=%d into %s'
          % (len(probes), len(groups), per_boot, image))
    return groups


def podman(*args):
    return subprocess.run(['podman'] + list(args), capture_output=True, text=True)


def container_running():
    r = podman('ps', '--format', '{{.Names}}')
    return CONTAINER in r.stdout.split()


def start_container():
    if container_running():
        print('  container %s already running' % CONTAINER)
        return
    podman('rm', '-f', CONTAINER)
    cmd = [
        'podman', 'run', '--name', CONTAINER, '--rm', '-d',
        # The container side of the API port is INNER_API_PORT, which is the
        # API_PORT the entrypoint is given inside. A first version typed the
        # host port twice here and produced a mapping to a port nothing listens
        # on, which looked like a supervisor that never came up.
        '-p', '%d:6080' % NOVNC_PORT, '-p', '%d:5900' % VNC_PORT,
        '-p', '%d:%d' % (API_PORT, INNER_API_PORT),
        '-v', '%s/vendor/emulator:/emulator:ro,z' % ROOT,
        '-v', '%s/vendor/roms:/roms:ro,z' % ROOT,
        '-v', '%s/saves:/sdk:ro,z' % ROOT,
        '-v', os.path.dirname(DEFAULT_IMAGE) + ':/data:z',
        '-e', 'RESOLUTION=1024x768x24',
        '-e', 'ROM_DIR=/roms',
        '-e', 'API_PORT=%d' % INNER_API_PORT,
        '-e', 'CD_IMAGE=/sdk/hc.ccd',
        '-e', 'CMOS=/data/CMOS.BIN',
        '-e', 'TSUGARU_EXTRA=-HD0 /data/%s' % os.path.basename(DEFAULT_IMAGE),
        'localhost/fmtowns:latest',
    ]
    out = subprocess.run(cmd, capture_output=True, text=True)
    if out.returncode != 0:
        raise SystemExit('podman run failed: %s' % out.stderr.strip())
    print('  container %s started (noVNC :%d, api :%d)' % (CONTAINER, NOVNC_PORT, API_PORT))


def api_post(path, payload):
    """POST to the supervisor.

    urllib gets `Connection reset by peer` from this supervisor while curl
    succeeds against the same route, so this shells out to curl rather than
    carrying a client that cannot talk to the only server it is aimed at.
    """
    r = subprocess.run(
        ['curl', '-s', '-m', '30', '-o', '/dev/null', '-X', 'POST',
         'http://127.0.0.1:%d%s' % (API_PORT, path),
         '-H', 'Content-Type: application/json', '--data-binary', json.dumps(payload)],
        capture_output=True, text=True)
    return r.returncode == 0


def api_cmd(line):
    return api_post('/api/cmd', {'line': line})


def keys(text):
    return api_post('/api/keys', {'text': text})


def press_return():
    return api_post('/api/key', {'keys': 'Return'})


def wait_api(timeout_s=180):
    """Wait until the supervisor answers. Starting the container is not instant."""
    deadline = time.time() + timeout_s
    while time.time() < deadline:
        r = subprocess.run(['curl', '-s', '-m', '5', '-o', '/dev/null', '-w', '%{http_code}',
                            'http://127.0.0.1:%d/api/status' % API_PORT],
                           capture_output=True, text=True)
        if r.stdout.strip() == '200':
            return True
        time.sleep(3)
    return False


def run_batch(batch, image, expect, wait_s):
    r"""Type the drive switch and a batch name, then wait for its outputs.

    The proof is files on the image, not a screenshot. The apostrophe form goes
    first because it is the one that works: docs/driving-the-townsos-prompt.md
    records that the colon is the apostrophe key on this keyboard, and measured
    here `d'` switches to D:\ while a literal `d:` answers `Wrong Command or
    File Name`. A screenshot taken immediately after typing can still show the
    old prompt, so the check is the filesystem and it is polled rather than
    sampled once.
    """
    last = '::%s.EXP' % expect[-1]
    have = lambda: sum(1 for s in expect if mexists(image, '::%s.EXP' % s))
    for attempt in range(3):
        for form in ("d'", 'd:'):
            keys(form)
            time.sleep(0.6)
            press_return()
            time.sleep(1.5)
            keys(batch)
            press_return()
            # Stall detection matters more than it looks. If the handle table is
            # already exhausted the batch runs to completion and simply fails
            # every remaining compile, so the last .EXP never arrives and a plain
            # timeout sits out its whole budget on a chunk that can never finish.
            base = have()
            since = time.time()
            deadline = time.time() + wait_s
            while time.time() < deadline:
                if mexists(image, last):
                    time.sleep(5)
                    return True
                n = have()
                if n != base:
                    base, since = n, time.time()
                elif time.time() - since > 100:
                    print('    stalled at %d/%d outputs, moving on' % (n, len(expect)), flush=True)
                    return False
                time.sleep(5)
        print('    attempt %d: chunk did not complete, resetting and retrying'
              % (attempt + 1), flush=True)
        api_cmd('RESET')
        time.sleep(BOOT_WAIT_S)
    return False


MAP_SEG_RE = re.compile(r'^(\S+)\s+CGROUP\s+CODE\s+\S+\s+([0-9A-Fa-f]{8})\s+([0-9A-Fa-f]{8})\s*$', re.M)


def parse_map(text):
    """Pull the module's CODE segment offset and size out of a linker map.

    The offset is not always zero. A probe with file-scope data gets a DATA
    segment ahead of it in the group, so `int m[16][16]` puts the code at group
    offset 0x400 and reading from 0x200 returns a run of zero padding that
    disassembles into confident nonsense. The map states the offset, so use it
    rather than assuming.
    """
    m = MAP_SEG_RE.search(text or '')
    if not m:
        return None
    return {'segment': m.group(1), 'offset': int(m.group(2), 16), 'size': int(m.group(3), 16)}


def p3_code(exp_bytes, seg):
    """The code bytes of a P3 image, at the offset the linker declares.

    docs/highc-authentic-toolchain.md: the P3 header is 384 bytes, a DX block
    sits at 0x180 and the first byte of the group is at 0x200. Within the group
    the code segment sits wherever the map says. The map's size fixes the
    extent, so this asserts rather than scanning for a terminator.
    """
    if exp_bytes[:2] != b'P3':
        return None
    start = 0x200 + seg['offset']
    end = start + seg['size']
    if end > len(exp_bytes):
        return None
    return exp_bytes[start:end]


def collect(image, probes, out, merge=True):
    """Read the compiled probes back.

    With --only, only a subset is on the image this run, so the previous
    build.json is merged rather than replaced. Without merging, a two-probe
    follow-up would silently discard the other twenty-eight.
    """
    os.makedirs(out, exist_ok=True)
    prev = {}
    prior_path = os.path.join(out, 'build.json')
    if merge and os.path.exists(prior_path):
        try:
            with open(prior_path) as fh:
                prev = {r['stem']: r for r in json.load(fh)}
        except (ValueError, OSError):
            prev = {}
    results = []
    for p in probes:
        s = p['stem']
        row = dict(p)
        maptext = mread(image, '::%s.MAP' % s)
        row['map'] = parse_map(maptext)
        exp = mread_bytes(image, '::%s.EXP' % s, os.path.join(out, s + '.EXP'))
        if exp is not None:
            row['exp_size'] = len(exp)
            row['sig'] = exp[:2].decode('latin1')
            if row['map']:
                code = p3_code(exp, row['map'])
                if code is not None:
                    row['code'] = code.hex()
                    row['code_len'] = len(code)
        results.append(row)
    by_stem = dict(prev)
    by_stem.update({r['stem']: r for r in results})
    results = [by_stem[k] for k in sorted(by_stem)]
    with open(os.path.join(out, 'build.json'), 'w') as fh:
        json.dump(results, fh, indent=1)
    ok = sum(1 for r in results if r.get('code'))
    print('  collected %d/%d probes with code bytes -> %s' % (ok, len(results), out))
    return results


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--image', default=DEFAULT_IMAGE)
    ap.add_argument('--out', default=DEFAULT_OUT)
    ap.add_argument('--stage-only', action='store_true')
    ap.add_argument('--collect-only', action='store_true')
    ap.add_argument('--per-boot', type=int, default=COMPILES_PER_BOOT)
    ap.add_argument('--chunk-timeout', type=int, default=300)
    ap.add_argument('--only', default=None,
                    help='comma-separated stems to compile, leaving the rest alone')
    args = ap.parse_args()

    probes = corpus_probes(args.only)
    work = os.path.join(os.path.dirname(args.out) or '.', 'atlas-work')
    print('atlas-build: %d probes, image %s' % (len(probes), args.image))

    if args.collect_only:
        # Staging deletes the previous outputs on purpose, so collecting must
        # never stage or it would destroy the thing it is about to read.
        collect(args.image, probes, args.out, merge=False)
        return

    groups = stage(image=args.image, probes=probes, work=work, per_boot=args.per_boot)
    if args.stage_only:
        return

    start_container()
    if not wait_api():
        print('  supervisor never answered on :%d' % API_PORT)

    for i, grp in enumerate(groups):
        # A reset before every chunk, including the first. The handle table is
        # per-boot and anything done to the guest earlier counts against it, so a
        # chunk that starts on a dirty table can never finish. That is what cost
        # chunk 1 five of its six probes on the run before this comment.
        print('  reset before chunk %d/%d' % (i + 1, len(groups)), flush=True)
        api_cmd('RESET')
        time.sleep(BOOT_WAIT_S)
        print('  chunk %d/%d: %s' % (i + 1, len(groups),
                                     ','.join(p['stem'] for p in grp)), flush=True)
        ok = run_batch('ch%d' % i, args.image, [p['stem'] for p in grp], args.chunk_timeout)
        print('    %s' % ('complete' if ok else 'INCOMPLETE'), flush=True)

    collect(args.image, probes, args.out)


if __name__ == '__main__':
    main()
