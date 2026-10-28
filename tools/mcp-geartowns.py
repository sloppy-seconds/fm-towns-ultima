#!/usr/bin/env python3
"""tools/mcp-geartowns.py - MCP client for the Geartowns container, over stdio.

WHY THIS EXISTS. Geartowns exposes ~106 debugger tools over MCP and Tsugaru exposes a
console and a screenshot. That is the reason the container was built: "set a breakpoint
at EGB_palette and read the palette" becomes a structured call rather than keystrokes
into a VNC session and a PNG round trip. It also boots the Ultima Trilogy disc to the
Towns OS CD browser and can launch a numbered game, which is what --launch does.

TRANSPORT IS STDIO. HTTP on a non-loopback address enforces a Host-header DNS-rebinding
guard: the accepted socket's local address under podman NAT is the container IP, never
the client's Host, so every request is rejected with a bare 403. stdio has no such check.
`--headless --mcp-stdio` is the working combination; `--mcp-stdio` alone dies trying to
open a GUI.

THE MODEL IS THE WHOLE BALLGAME. The disc's IPL4 boot sector runs a timed delay loop
that reads the free-running timer at I/O port 0x26. Geartowns only decodes that port on
machine profiles carrying GT_MACHINE_FEATURE_FREE_RUN_TIMER, which model1_2 does NOT.
On model1_2 the timer reads a constant, the loop never expires, and the BIOS hangs at
"システムが遅いです" with the CD head stuck at LBA 59. Use a model that has the timer:
`hr` (default) or `hg`. See docs/geartowns.md.

HEADLESS STARTS PAUSED. A headless instance boots with the CPU paused at the reset
vector. Nothing runs, and get_screenshot is black, until debug_continue is issued. --launch
and the boot helpers do this for you.

Usage:
  python3 tools/mcp-geartowns.py --list
  python3 tools/mcp-geartowns.py --find palette
  python3 tools/mcp-geartowns.py --describe get_palettes
  python3 tools/mcp-geartowns.py --call get_palettes
  python3 tools/mcp-geartowns.py --call read_memory '{"address":"0x77e90","length":16}'
  python3 tools/mcp-geartowns.py --launch 2                 boot disc, launch Ultima II
  python3 tools/mcp-geartowns.py --screenshot out.png       boot disc, save a browser shot

Env:
  GEARTOWNS_IMAGE   image name (default geartowns)
  GEARTOWNS_MODEL   machine model (default hr)
  GT_CONFIG         writable config dir (default <repo>/saves/geartowns)
  PODMAN            container runner (default "podman")
"""

import argparse
import base64
import json
import os
import queue
import subprocess
import sys
import threading
import time

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
IMAGE = os.environ.get('GEARTOWNS_IMAGE', 'geartowns')
MODEL = os.environ.get('GEARTOWNS_MODEL', 'hr')
PODMAN = os.environ.get('PODMAN', 'podman').split()
CONFIG = os.environ.get('GT_CONFIG', '/var/tmp/geartowns-config')

DISC_CUE = 'Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).cue'
DISC_IMG = 'Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).img'
DISC_FD = 'Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[UserDisk].hdm'


def disc_dir():
    """A scratch dir holding the .cue, its .img and the save floppy together.

    The .cue references the .img by relative filename, so all three must sit in one
    directory that the container mounts as /cdrom. Mounting the whole repo instead would
    make podman relabel every file under it, which fails on any root-owned path. Hardlink
    where possible (free for the 141 MB .img), copy only across filesystems.
    """
    d = os.environ.get('GT_DISC_DIR', '/var/tmp/geartowns-disc')
    os.makedirs(d, exist_ok=True)
    for name in (DISC_CUE, DISC_IMG, DISC_FD):
        src = os.path.join(ROOT, name)
        dst = os.path.join(d, name)
        if os.path.exists(dst):
            continue
        try:
            os.link(src, dst)
        except OSError:
            subprocess.run(['cp', src, dst], check=True)
    return d

# Towns OS CD browser icon centres, in 640x480 screenshot pixels. The FM Towns font
# renders "II" as "] [" and "III" as "II[", so the second and third cells are Ultima
# II and III. Positions measured from a live TownsMENU V1.1L20 capture.
ICONS = {
    '1': (91, 160),   # ULTIMA I
    '2': (203, 160),  # ULTIMA ] [   = Ultima II
    '3': (315, 160),  # ULTIMA II[   = Ultima III
}


def seed_config():
    """Geartowns reads the firmware folder from config.ini and nowhere else. Seed it."""
    cfgdir = os.path.join(CONFIG, '.local', 'share', 'Geardome', 'Geartowns')
    os.makedirs(cfgdir, exist_ok=True)
    ini = os.path.join(cfgdir, 'config.ini')
    if not os.path.exists(ini):
        with open(ini, 'w') as fh:
            fh.write('[General]\nVersion = 7\n\n[Firmware]\nDefault = /roms\nmodel1_2 = /roms\n'
                     '\n[Machine]\nModel = %s\n'
                     '\n[Debug]\nDebug = false\n'
                     '\n[Emulator]\nStartPaused = false\nPowerOnAtStartup = true\nPauseWhenInactive = false\n' % MODEL)


class Session:
    """A Geartowns stdio MCP session with a persistent stdin.

    The previous client wrote the whole request batch and closed stdin, so Geartowns
    exited before it could answer a tools/call that needed the emulator to run frames.
    This keeps stdin open, sends requests on demand, and reads replies on a background
    thread so a slow call still returns.
    """

    def __init__(self, with_media=True):
        media = ''
        if with_media:
            media = ' --cd "/cdrom/%s" --fd1 "/cdrom/%s"' % (DISC_CUE, DISC_FD)
        inner = 'HOME=/config exec geartowns --headless --mcp-stdio --model %s%s' % (MODEL, media)
        self.proc = subprocess.Popen(
            PODMAN + ['run', '-i', '--rm', '--name', 'geartowns-mcp',
                      '-v', CONFIG + ':/config:z',
                      '-v', os.path.join(ROOT, 'vendor', 'roms') + ':/roms:ro,z',
                      '-v', disc_dir() + ':/cdrom:ro,z',
                      '--entrypoint', '/bin/sh', IMAGE, '-c', inner],
            stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.DEVNULL,
            text=True, bufsize=1)
        self.q = queue.Queue()
        threading.Thread(target=self._pump, daemon=True).start()
        self._id = 0

    def _pump(self):
        for line in self.proc.stdout:
            self.q.put(line.rstrip('\n'))

    def _send(self, obj):
        self.proc.stdin.write(json.dumps(obj) + '\n')
        self.proc.stdin.flush()

    def _recv(self, timeout):
        end = time.time() + timeout
        while time.time() < end:
            try:
                line = self.q.get(timeout=0.3)
            except queue.Empty:
                continue
            line = line.strip()
            if not line:
                continue
            try:
                return json.loads(line)
            except json.JSONDecodeError:
                continue
        return None

    def handshake(self):
        self._send({'jsonrpc': '2.0', 'id': 1, 'method': 'initialize',
                    'params': {'protocolVersion': '2025-11-25', 'capabilities': {},
                               'clientInfo': {'name': 'fm-family-tooling', 'version': '2'}}})
        r = self._recv(20)
        self._send({'jsonrpc': '2.0', 'method': 'notifications/initialized'})
        return r

    def list_tools(self):
        self._id += 1
        i = self._id
        self._send({'jsonrpc': '2.0', 'id': i, 'method': 'tools/list'})
        r = self._recv(20)
        if r and 'result' in r:
            return r['result']['tools']
        return []

    def call(self, name, args=None, timeout=40):
        self._id += 1
        i = self._id
        self._send({'jsonrpc': '2.0', 'id': i, 'method': 'tools/call',
                    'params': {'name': name, 'arguments': args or {}}})
        r = self._recv(timeout)
        if not r:
            return None
        return r.get('result', r)

    def call_text(self, name, args=None, timeout=40):
        res = self.call(name, args, timeout)
        if not res:
            return None
        parts = []
        for c in res.get('content', []):
            if c.get('type') == 'text':
                parts.append(c['text'])
            elif c.get('type') == 'image':
                parts.append('<image %s %d bytes>' % (c.get('mimeType'), len(c.get('data', ''))))
        return '\n'.join(parts) if parts else json.dumps(res)

    def screenshot(self, path):
        res = self.call('get_screenshot')
        if not res:
            return False
        for c in res.get('content', []):
            if c.get('type') == 'image' and c.get('data'):
                with open(path, 'wb') as fh:
                    fh.write(base64.b64decode(c['data']))
                return True
        return False

    def boot(self, settle=45):
        """Power the CPU and wait for the Towns OS CD browser to appear."""
        self.call('debug_continue')
        time.sleep(settle)

    def launch(self, game):
        xy = ICONS.get(str(game))
        if not xy:
            raise SystemExit('game must be 1, 2 or 3')
        self.call('mouse_click', {'x': xy[0], 'y': xy[1], 'button': 'left',
                                  'action': 'double_click'}, timeout=60)

    def close(self):
        try:
            self.proc.stdin.close()
            self.proc.wait(timeout=5)
        except Exception:
            self.proc.kill()


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--list', action='store_true')
    ap.add_argument('--find')
    ap.add_argument('--describe')
    ap.add_argument('--call')
    ap.add_argument('--args', default='{}', help='JSON object of arguments for --call')
    ap.add_argument('--launch', choices=['1', '2', '3'],
                    help='boot the disc and double-click Ultima I/II/III in the CD browser')
    ap.add_argument('--screenshot', metavar='PATH', help='boot the disc and write a browser screenshot')
    ap.add_argument('--settle', type=int, default=45, help='seconds to let the CD IPL load before acting')
    a = ap.parse_args()

    seed_config()
    need_media = bool(a.launch or a.screenshot or a.call)
    s = Session(with_media=need_media or a.list or a.find or a.describe)
    try:
        s.handshake()

        if a.list or a.find or a.describe:
            tools = s.list_tools()
            if a.list:
                for t in tools:
                    print(t['name'])
            elif a.find:
                needle = a.find.lower()
                for t in tools:
                    if needle in t['name'].lower() or needle in (t.get('title', '')).lower():
                        print('%-28s %s' % (t['name'], t.get('title', '')))
            elif a.describe:
                match = [t for t in tools if t['name'] == a.describe]
                if not match:
                    sys.exit('no such tool: %s' % a.describe)
                print(json.dumps(match[0], indent=1))
            return

        if a.call:
            try:
                parsed = json.loads(a.args)
            except json.JSONDecodeError as exc:
                sys.exit('arguments must be JSON: %s' % exc)
            if a.call in ('get_screenshot', 'debug_continue'):
                pass  # no boot needed for a raw call; caller drives state
            print(json.dumps(s.call(a.call, parsed), indent=1))
            return

        if a.screenshot:
            s.boot(settle=a.settle)
            if s.screenshot(a.screenshot):
                print('wrote', a.screenshot)
            else:
                sys.exit('no image in get_screenshot response')
            return

        if a.launch:
            s.boot(settle=a.settle)
            s.launch(a.launch)
            time.sleep(30)
            out = os.path.join(ROOT, 'analysis', 'geartowns-u%d.png' % int(a.launch))
            os.makedirs(os.path.dirname(out), exist_ok=True)
            if s.screenshot(out):
                print('launched Ultima %s, screenshot: %s' % (a.launch, out))
            return
    finally:
        s.close()


if __name__ == '__main__':
    main()
