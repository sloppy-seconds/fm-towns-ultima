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

WHAT THE CD'S DOS WILL NOT DO, measured on the first run rather than assumed.
Three constraints, each of which broke an attempt:

1. The CD wins the boot, so the hard image's AUTOEXEC.BAT never runs and
   patching it changes nothing. docs/driving-the-townsos-prompt.md says this in
   those words; the first attempt here patched the HDD AUTOEXEC, booted, and got
   `Q:\>` from the CD exactly as predicted. One command therefore has to be
   typed, and the colon does survive /api/keys (keycodes ["d", ":"]).
2. Redirection is not supported. Every `> FILE` in a batch prints `Sorry,
   redirection and pipe are not supported yet.` and runs the command without
   it, so no log file and no progress marker can be written from inside the
   guest. Completion is detected from the host instead, by watching for the
   output files the compiler itself leaves on the image.
3. Filenames are 8.3. A source named A04_PARAMS8.C is stored as A04_PA~1.C and
   DOS answers `file not found` to the long name. Probe stems are therefore
   three characters, A01 to A99, and the descriptive name stays in the corpus
   directory where a person can read it.

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

The work image must be a copy. saves/scratch-tos11en.h0 is never written to.
"""

import argparse
import json
import os
import re
import shutil
import subprocess
import sys
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
NOVNC_PORT = 6084
VNC_PORT = 5904


def mtools_spec(image):
    return '%s@@%d' % (image, OFFSET)


def run(cmd, **kw):
    return subprocess.run(cmd, env=MTOOL_ENV, capture_output=True, text=True, **kw)


def mdir(image, path='::'):
    r = run(['mdir', '-i', mtools_spec(image), path])
    return r.stdout + r.stderr


def mcopy(image, src, dest):
    r = run(['mcopy', '-o', '-i', mtools_spec(image), src, dest])
    if r.returncode != 0:
        raise SystemExit('mcopy %s -> %s failed: %s' % (src, dest, r.stderr.strip()))


def mmd(image, path):
    run(['mmd', '-i', mtools_spec(image), path])


MDER = None


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
    would be read as this run having produced it. The stage step re-checks for
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


def corpus_probes():
    """Every aNN_*.c in the corpus, sorted, with its 8.3-safe stem and source.

    The stem is the leading A<digits> of the file name and nothing else, because
    DOS cannot see a name longer than eight characters and a silently truncated
    short name is indistinguishable from a missing file.
    """
    out = []
    for name in sorted(os.listdir(CORPUS)):
        if not name.endswith('.c'):
            continue
        m = re.match(r'^([a-z]\d\d)_', name)
        if not m:
            raise SystemExit('%s does not start with a two-digit stem like a01_' % name)
        stem = m.group(1).upper()
        with open(os.path.join(CORPUS, name), 'r') as fh:
            out.append({'stem': stem, 'file': name, 'source': fh.read()})
    if len(out) < 20:
        raise SystemExit('corpus has %d probes; item 0a needs at least 20' % len(out))
    stems = [p['stem'] for p in out]
    if len(set(stems)) != len(stems):
        raise SystemExit('duplicate stems in corpus')
    return out


def build_batch(probes):
    r"""The batch that compiles every probe.

    No redirection anywhere: the CD's DOS refuses it and prints a warning, and a
    line like `HC386.EXE D:\ATLAS\A01.C > D:\ATLAS\A01.LOG` still runs the
    compile but creates nothing, which is worse than not writing it. Progress is
    observed from the host by listing the directory the compiler writes into.
    """
    lines = ['@ECHO OFF']
    for p in probes:
        lines.append('Q:\\HC386\\BIN\\HC386.EXE D:\\ATLAS\\%s.C' % p['stem'])
    lines.append('ECHO ATLASCOMPLETE')
    return crlf(lines)


def stage(image, probes, work):
    """Write the corpus and the batch into the work image."""
    if not os.path.exists(image):
        print('  no work image at %s, copying pristine' % image)
        os.makedirs(os.path.dirname(image), exist_ok=True)
        shutil.copyfile(PRISTINE, image)
    if not os.path.exists(PRISTINE):
        raise SystemExit('pristine image missing at %s' % PRISTINE)

    os.makedirs(work, exist_ok=True)
    stage_dir = os.path.join(work, 'stage')
    os.makedirs(stage_dir, exist_ok=True)

    # Clear last run's outputs first. A surviving A01.EXP would be read as this
    # run having started, and a surviving A30.EXP as it having finished.
    for ext in ('EXP', 'MAP', 'OBJ', 'C', 'BAT'):
        mdelete(image, '::ATLAS/*.%s' % ext)
    mmd(image, '::ATLAS')

    for p in probes:
        local = os.path.join(stage_dir, p['stem'] + '.C')
        with open(local, 'w', newline='') as fh:
            fh.write(p['source'].replace('\n', '\r\n'))
        mcopy(image, local, '::ATLAS/%s.C' % p['stem'])
        if not mexists(image, '::ATLAS/%s.C' % p['stem']):
            raise SystemExit('%s did not land on the image' % p['stem'])

    local = os.path.join(stage_dir, 'ATLAS.BAT')
    with open(local, 'w', newline='') as fh:
        fh.write(build_batch(probes))
    # The batch sits at the image root so the single typed command is one short
    # word with no path and no colon in it.
    mcopy(image, local, '::ATLAS.BAT')

    for p in probes:
        if mexists(image, '::ATLAS/%s.EXP' % p['stem']):
            raise SystemExit('stale %s.EXP survived deletion; refusing to boot' % p['stem'])
    print('  staged %d probes into %s' % (len(probes), image))


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
        '-p', '%d:6080' % NOVNC_PORT, '-p', '%d:5900' % VNC_PORT, '-p', '%d:8098' % API_PORT,
        '-v', '%s/vendor/emulator:/emulator:ro,z' % ROOT,
        '-v', '%s/vendor/roms:/roms:ro,z' % ROOT,
        '-v', '%s/saves:/sdk:ro,z' % ROOT,
        '-v', os.path.dirname(DEFAULT_IMAGE) + ':/data:z',
        '-e', 'RESOLUTION=1024x768x24',
        '-e', 'ROM_DIR=/roms',
        '-e', 'API_PORT=8080',
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


def keys(text):
    return api_post('/api/keys', {'text': text})


def press_return():
    return api_post('/api/key', {'keys': 'Return'})


def wait_api(timeout_s=120):
    """Wait until the supervisor answers. Booting the container is not instant."""
    deadline = time.time() + timeout_s
    while time.time() < deadline:
        r = subprocess.run(['curl', '-s', '-m', '5', '-o', '/dev/null', '-w', '%{http_code}',
                            'http://127.0.0.1:%d/api/status' % API_PORT],
                           capture_output=True, text=True)
        if r.stdout.strip() == '200':
            return True
        time.sleep(3)
    return False


def launch(image, probes):
    """Switch to D: and start the batch, then prove it started.

    The proof is the first probe's .EXP appearing on the image, not a screenshot.
    Both documented forms of the drive switch are offered because the colon is
    the character this keyboard has historically mangled.
    """
    first = '::ATLAS/%s.EXP' % probes[0]['stem']
    for form in ('d:', "d'"):
        print('  typing drive switch %r' % form, flush=True)
        keys(form)
        time.sleep(0.6)
        press_return()
        time.sleep(1.5)
        keys('atlas')
        press_return()
        for _ in range(24):
            time.sleep(5)
            if mexists(image, first):
                print('  batch is running (drive switch %r worked)' % form, flush=True)
                return True
        print('  no output after %r, trying the next form' % form, flush=True)
    return False


def wait_for_compile(image, probes, timeout_s=1500):
    """Poll the image until the last probe's output exists."""
    last = '::ATLAS/%s.EXP' % probes[-1]['stem']
    deadline = time.time() + timeout_s
    seen = -1
    while time.time() < deadline:
        done = sum(1 for p in probes if mexists(image, '::ATLAS/%s.EXP' % p['stem']))
        if done != seen:
            print('  %d/%d probes produced an .EXP' % (done, len(probes)), flush=True)
            seen = done
        if mexists(image, last):
            # The batch's own final line, so give the last write a moment to land.
            time.sleep(6)
            return True
        time.sleep(8)
    return False


MAP_SEG_RE = re.compile(r'^(\S+)\s+CGROUP\s+CODE\s+\S+\s+([0-9A-Fa-f]{8})\s+([0-9A-Fa-f]{8})\s*$', re.M)


def parse_map(text):
    """Pull the module code segment's offset and size out of a linker map."""
    m = MAP_SEG_RE.search(text or '')
    if not m:
        return None
    return {'segment': m.group(1), 'offset': int(m.group(2), 16), 'size': int(m.group(3), 16)}


def p3_code(exp_bytes, size):
    """The code bytes of a P3 image.

    docs/highc-authentic-toolchain.md: the P3 header is 384 bytes, a DX block
    sits at 0x180 and the first code byte is at 0x200. The map's segment size
    fixes the extent, so this asserts rather than scans for a terminator.
    """
    if exp_bytes[:2] != b'P3':
        return None
    end = 0x200 + size
    if end > len(exp_bytes):
        return None
    return exp_bytes[0x200:end]


def collect(image, probes, out):
    os.makedirs(out, exist_ok=True)
    results = []
    for p in probes:
        s = p['stem']
        row = dict(p)
        maptext = mread(image, '::ATLAS/%s.MAP' % s)
        row['map'] = parse_map(maptext)
        exp = mread_bytes(image, '::ATLAS/%s.EXP' % s, os.path.join(out, s + '.EXP'))
        if exp is not None:
            row['exp_size'] = len(exp)
            row['sig'] = exp[:2].decode('latin1')
            if row['map']:
                code = p3_code(exp, row['map']['size'])
                if code is not None:
                    row['code'] = code.hex()
                    row['code_len'] = len(code)
        results.append(row)
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
    ap.add_argument('--timeout', type=int, default=1500)
    args = ap.parse_args()

    probes = corpus_probes()
    work = os.path.join(os.path.dirname(args.out) or '.', 'atlas-work')
    print('atlas-build: %d probes, image %s' % (len(probes), args.image))

    if not args.collect_only:
        stage(image=args.image, probes=probes, work=work)
    if args.stage_only:
        return

    start_container()
    if not wait_api():
        print('  supervisor never answered on :%d' % API_PORT)
    if args.collect_only or launch(args.image, probes):
        if wait_for_compile(args.image, probes, args.timeout):
            print('  batch complete')
        else:
            print('  batch did not finish; collecting whatever landed')
    else:
        print('  NEVER STARTED: no probe produced an .EXP')
    collect(args.image, probes, args.out)


if __name__ == '__main__':
    main()
