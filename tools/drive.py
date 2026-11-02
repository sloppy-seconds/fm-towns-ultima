#!/usr/bin/env python3
"""tools/drive.py - drive the port over its control socket and report what the guest did.

WHY THIS EXISTS. Two jobs needed the same instrument and neither had one. The first is finding
which input reaches a given routine: an unverified shadow is worthless, and a route invented to
make a gate pass is worse than none, so the route has to be discovered by pressing keys and
watching. The second is the differential itself, which needs the same scripted input twice with
different shadow settings.

It reports shadow entry because U2_SHADOW_TRACE makes the port print a line per entry on stderr.
Without that count a comparison cannot distinguish "the two runs agree" from "neither run reached
the code", which is the vacuous version of this test.

IT ALWAYS WORKS ON A COPY. The named image is never driven: saves/userdisk.hdm holds irreplaceable
state and is not in git, so a key sweep that writes to it would be unrecoverable.

USAGE
  ./tools/drive.py --keys "space,Down,Return"                    boots and sends those keys
  ./tools/drive.py --keys "..." --shots /var/tmp/shots            also a PNG per key
  ./tools/drive.py --keys "..." --sweep a,b,c,...                 hits reported per swept key
  ./tools/drive.py --keys "..." --shadow-off                      the pre-strangler baseline
  ./tools/drive.py --keys "..." --json                            machine-readable summary

Keys are the port's own names: letters as themselves, plus space Down Up Left Right Return Esc.
"""

import argparse
import hashlib
import json
import os
import re
import shutil
import socket
import subprocess
import sys
import tempfile

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DEFAULT_PORT = os.path.join(ROOT, 'build', 'port', 'b', 'u2port')
DEFAULT_DISK = os.path.join(ROOT, 'saves', 'userdisk.hdm')
ALPHABET = list('ABCDEFGHIJKLMNOPQRSTUVWXYZ') + list('0123456789') + \
           ['space', 'Down', 'Up', 'Left', 'Right', 'Return', 'Esc']


class Port:
    """The port under a control socket, with its stderr kept so shadow entries can be counted."""

    def __init__(self, binary, disk, errlog, shadow_off=False, frames=200000):
        env = dict(os.environ)
        env.update({'SDL_VIDEODRIVER': 'dummy', 'SDL_AUDIODRIVER': 'dummy',
                    'U2_FONT': os.path.join(ROOT, 'vendor/roms/FMT_FNT.ROM'),
                    'U2_FONT20': os.path.join(ROOT, 'vendor/roms/FMT_F20.ROM'),
                    'U2_SHADOW_TRACE': '1'})
        env.pop('DISPLAY', None)
        if shadow_off:
            env['U2_SHADOW_OFF'] = '1'
        self.errlog = errlog
        self.proc = subprocess.Popen(
            [binary, '--graphics=sdl', f'--frames={frames}', '--control=127.0.0.1:0',
             os.path.join(ROOT, 'ENCHANT.EXP'), os.path.join(ROOT, 'build/port/tbios.bin'),
             os.path.join(ROOT, 'build/port/disc.cue'), disk],
            stdout=subprocess.PIPE, stderr=open(errlog, 'wb'), text=True, env=env)
        bound = None
        while True:
            line = self.proc.stdout.readline()
            if not line:
                sys.exit('drive: the port exited before binding a control socket')
            m = re.match(r'control\s+(\S+)', line)
            if m:
                bound = m.group(1)
                break
        host, port = bound.rsplit(':', 1)
        self.sock = socket.create_connection((host, int(port)), timeout=300)
        self.buf = b''
        self.n = 0

    def recv(self):
        while b'\n' not in self.buf:
            chunk = self.sock.recv(65536)
            if not chunk:
                return {}
            self.buf += chunk
        line, self.buf = self.buf.split(b'\n', 1)
        return json.loads(line.decode())

    def cmd(self, **o):
        self.n += 1
        o['id'] = self.n
        self.sock.sendall((json.dumps(o) + '\n').encode())
        return self.recv()

    def step(self, n):
        while n > 0:
            d = min(200, n)
            self.cmd(cmd='frame', n=d)
            n -= d

    def key(self, k, settle):
        self.cmd(cmd='key', key=k)
        self.step(settle)

    def hits(self):
        """Shadow entries recorded so far. Read fresh each time, so it works between keys."""
        try:
            text = open(self.errlog, 'rb').read().decode('latin1', 'replace')
        except FileNotFoundError:
            return 0
        return len(re.findall(r'entered 0x([0-9a-f]+)', text))

    def shot(self):
        return self.cmd(cmd='shot').get('png', '')

    def close(self):
        try:
            self.cmd(cmd='quit')
        except OSError:
            pass
        try:
            self.proc.wait(timeout=120)
        except subprocess.TimeoutExpired:
            self.proc.kill()
            self.proc.wait(timeout=60)
        # The port prints an "after ..." summary when it exits. Keep it: a run that stopped early and a run that
        # reached its frame budget look identical from the socket, and only this line tells them apart.
        try:
            rest = self.proc.stdout.read() or ''
        except (OSError, ValueError):
            rest = ''
        self.final_stdout = rest.strip().splitlines()[-6:] if rest.strip() else []
        self.returncode = self.proc.returncode


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--port', default=DEFAULT_PORT)
    ap.add_argument('--disk', default=DEFAULT_DISK)
    ap.add_argument('--keys', default='')
    ap.add_argument('--sweep', default='')
    ap.add_argument('--settle', type=int, default=120, help='frames to run after each key')
    ap.add_argument('--boot', type=int, default=400, help='frames before the first key')
    ap.add_argument('--shots', default='', help='directory for one PNG per step')
    ap.add_argument('--shadow-off', action='store_true')
    ap.add_argument('--json', action='store_true')
    args = ap.parse_args()

    if not os.path.exists(args.port):
        sys.exit(f'drive: {args.port} is missing. Run ./tools/port-build.sh first.')

    work = tempfile.mkdtemp(prefix='drive-', dir='/var/tmp')
    disk = os.path.join(work, 'disk.hdm')
    shutil.copyfile(args.disk, disk)          # never the named image
    errlog = os.path.join(work, 'err.log')
    if args.shots:
        os.makedirs(args.shots, exist_ok=True)

    prefix = [k for k in args.keys.split(',') if k]
    sweep = [k for k in args.sweep.split(',') if k] or (ALPHABET if args.sweep == 'all' else [])

    report = {'prefix': prefix, 'sweep': [], 'shadow_hits': 0, 'work': work, 'died_at': None}
    port = Port(args.port, disk, errlog, args.shadow_off)
    try:
        port.step(args.boot)
        for i, k in enumerate(prefix):
            try:
                port.key(k, args.settle)
            except (OSError, json.JSONDecodeError) as e:
                report['died_at'] = {'index': i, 'key': k, 'error': type(e).__name__}
                print(f'  the port stopped accepting commands after key {i} ({k!r}): {e}')
                break
            if args.shots:
                import base64
                try:
                    png = port.shot()
                except (OSError, json.JSONDecodeError):
                    break
                if png:
                    p = os.path.join(args.shots, f'{i:02d}_{k}.png')
                    open(p, 'wb').write(base64.b64decode(png))
                    report.setdefault('shots', []).append(p)

        if report['died_at'] is None:
            before = port.hits()
            report['shadow_hits_before_sweep'] = before
            for k in sweep:
                was = port.hits()
                try:
                    port.key(k, args.settle)
                except (OSError, json.JSONDecodeError) as e:
                    report['died_at'] = {'sweep_key': k, 'error': type(e).__name__}
                    break
                now = port.hits()
                report['sweep'].append({'key': k, 'hits': now - was})
                if now > was:
                    print(f'  HIT  {k!r} entered the shadow {now - was} time(s)')
            report['shadow_hits'] = port.hits()
        disk_hash = hashlib.sha256(open(disk, 'rb').read()).hexdigest()
        report['disk_sha256'] = disk_hash
    finally:
        port.close()

    report['port_exit'] = getattr(port, 'returncode', None)
    report['port_final'] = getattr(port, 'final_stdout', [])

    if args.json:
        print(json.dumps(report, indent=2))
    else:
        print(f'drive: shadow entries total {report["shadow_hits"]} '
              f'({report.get("shadow_hits_before_sweep", 0)} before the sweep)')
        print(f'  disk {disk_hash[:16]}  temp {work}')
        if report['port_final']:
            print('  port said: ' + ' | '.join(report['port_final']))
        if sweep and not any(e['hits'] for e in report['sweep']):
            print(f'  no swept key entered the shadow ({len(sweep)} tried)')


if __name__ == '__main__':
    main()
