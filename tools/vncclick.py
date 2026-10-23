#!/usr/bin/env python3
"""vncclick.py - inject pointer and key events into a VNC server, stdlib only.

Why this exists: Tsugaru ignores XTEST. `xdotool mousemove/click` reaches the X
server and never arrives at the emulated machine, so a script that clicks the
TownOS launcher appears to succeed and does nothing. A human clicking through
noVNC works, because the browser speaks RFB. This speaks RFB too.

The detail that makes it work: a VNC client MUST keep reading the socket. If it
sends SetPixelFormat and then only writes, x11vnc eventually blocks on a
framebuffer update it cannot flush, the connection stalls, and later pointer
events are never processed. The first version of this file made exactly that
mistake, and the symptom was a pointer that moved but buttons that never
registered. So a reader thread drains the stream continuously and stays out of
the way of the protocol messages.

Two other things learned the hard way:

* Coordinates are framebuffer pixels, origin top-left. Tsugaru's window is 1:1
  with its 640x496 emulated screen, offset by the window origin. Measured here:
  a VM point (x, y) needs VNC (x + 1, y + 20), and the VM clamps at (639, 495).
* The window must have X input focus, or Tsugaru reports
  "Mouse Integration Unavailable" and discards everything. vncclick.py cannot
  fix that from inside the protocol. Call tools/vncfocus first, or run
  `xdotool windowactivate <id>` on the container's DISPLAY.

Usage:
    python3 vncclick.py move  X Y
    python3 vncclick.py click X Y [button]
    python3 vncclick.py dbl   X Y [button]
    python3 vncclick.py key   KEYSYM
    python3 vncclick.py probe

`probe` connects, reads one framebuffer update and prints the geometry, which is
the quickest way to confirm the server is answering.
"""

import socket
import struct
import sys
import threading
import time

HOST = "127.0.0.1"
PORT = 5900


class RFB:
    def __init__(self, host=HOST, port=PORT):
        self.s = socket.create_connection((host, port), timeout=10)
        self.s.settimeout(None)
        self.w = 0
        self.h = 0
        self._alive = True
        self._reader = None
        self._handshake()
        # Drain the socket for the life of the connection. Without this x11vnc
        # stalls and input stops working, which is the bug this file used to have.
        self._reader = threading.Thread(target=self._drain, daemon=True)
        self._reader.start()

    def _recv(self, n):
        buf = b""
        while len(buf) < n:
            chunk = self.s.recv(n - len(buf))
            if not chunk:
                raise RuntimeError("connection closed by server")
            buf += chunk
        return buf

    def _drain(self):
        # Read and discard. We do not need pixels, only for the server's writes
        # to keep flowing.
        try:
            while self._alive:
                if not self.s.recv(65536):
                    break
        except OSError:
            pass

    def _handshake(self):
        version = self._recv(12)
        if not version.startswith(b"RFB "):
            raise RuntimeError("not a VNC server: %r" % version)
        self.s.sendall(b"RFB 003.008\n")

        ntypes = self._recv(1)[0]
        types = self._recv(ntypes)
        if 1 not in types:
            raise RuntimeError("server does not offer security type NONE: %r" % list(types))
        self.s.sendall(bytes([1]))

        result = struct.unpack(">I", self._recv(4))[0]
        if result != 0:
            raise RuntimeError("security handshake failed, result=%d" % result)

        # shared=1, so the human's browser session is not disconnected.
        self.s.sendall(bytes([1]))

        header = self._recv(24)
        self.w, self.h = struct.unpack(">HH", header[:4])
        namelen = struct.unpack(">I", header[20:24])[0]
        if namelen:
            self._recv(namelen)

        # 32-bit true colour. Harmless, and it means every client behaves alike.
        self.s.sendall(struct.pack(">BBBB", 0, 0, 0, 0))
        self.s.sendall(struct.pack(">BBBBHHHBBBxxx",
                                   32, 24, 0, 1, 255, 255, 255, 16, 8, 0))
        # Ask for the whole screen once, so the server has queued an update and we
        # know it is talking to us.
        self._fb_request()

    def _fb_request(self):
        self.s.sendall(struct.pack(">BBHHHH", 3, 0, 0, 0, self.w, self.h))

    def pointer(self, x, y, button_mask=0, settle=0.06):
        x = max(0, min(self.w - 1, int(x)))
        y = max(0, min(self.h - 1, int(y)))
        self.s.sendall(struct.pack(">BBHH", 5, button_mask, x, y))
        if settle:
            time.sleep(settle)

    def move(self, x, y):
        self.pointer(x, y, 0)

    def click(self, x, y, button=1):
        """Press and release at x,y, holding the position across the press.

        The original version sent move, then press, then release with a sleep
        between each. That is long enough for another VNC client (a human in
        noVNC) to take the pointer back, so the button event lands wherever the
        VM's integration has since moved the cursor - not here. Tsugaru reports
        two different coordinates in that situation:

            Last Known Raw Coord:    (199,179)   what this client asked for
            Mouse Integration Coord: (320,240)   what the VM actually has

        Sending the position again as part of every button event means the press
        and release cannot be separated from the coordinate they belong to.
        """
        mask = {1: 1, 2: 2, 3: 4}.get(button, 1)
        self.pointer(x, y, 0, settle=0.04)
        self.pointer(x, y, mask, settle=0.04)   # position repeated with the press
        self.pointer(x, y, 0, settle=0.04)      # released at the same position

    def double_click(self, x, y, button=1, gap=0.12):
        self.click(x, y, button)
        time.sleep(gap)
        self.click(x, y, button)

    def probe_pointer(self):
        """Ask the VM where it thinks the pointer is, for a before/after check."""
        return None  # the supervisor owns this; kept for symmetry in callers

    def key(self, keysym, down=True):
        self.s.sendall(struct.pack(">BBxxI", 4, 1 if down else 0, keysym))

    def tap(self, keysym, hold=0.06):
        self.key(keysym, True)
        time.sleep(hold)
        self.key(keysym, False)

    def close(self):
        self._alive = False
        try:
            self.s.shutdown(socket.SHUT_RDWR)
        except OSError:
            pass
        try:
            self.s.close()
        except OSError:
            pass


def vm_pointer(port):
    """Read the emulated machine's own pointer position from the supervisor log.

    Returns (last_known_raw, mouse_integration) or None. The two disagree when
    another client has taken the pointer, which is the failure this whole file
    exists to work around.
    """
    import json
    import re
    import urllib.request
    try:
        with urllib.request.urlopen("http://127.0.0.1:%d/api/log" % port, timeout=10) as r:
            log = json.load(r)
    except Exception:
        return None
    raw = None
    integ = None
    for e in log:
        line = e.get("line", "")
        m = re.search(r"Last Known Raw Coord[^:]*:\s*\((\d+),(\d+)\)", line)
        if m:
            raw = (int(m.group(1)), int(m.group(2)))
        m = re.search(r"Mouse Integration Coord:\s*\((\d+),(\d+)\)", line)
        if m:
            integ = (int(m.group(1)), int(m.group(2)))
    return raw, integ


def usage():
    print(__doc__)
    return 2


def main(argv):
    if len(argv) < 2:
        return usage()
    # Pull the flags out first so the action and its positional arguments are
    # not shifted by them. "--verify dbl 200 199" used to read action="--verify".
    port = 8080
    if "--port" in argv:
        i = argv.index("--port")
        port = int(argv[i + 1])
        del argv[i:i + 2]
    verify = "--verify" in argv
    if verify:
        argv.remove("--verify")

    if len(argv) < 2:
        return usage()
    action = argv[1]
    v = RFB()
    try:
        if verify:
            st = vm_pointer(port)
            if st:
                print("before: Last Known Raw %s / Mouse Integration %s" % st)
        if action == "probe":
            print("framebuffer %dx%d" % (v.w, v.h))
            time.sleep(0.4)
        elif action in ("move", "click", "dbl") and len(argv) >= 4:
            x, y = int(argv[2]), int(argv[3])
            if action == "move":
                v.move(x, y)
            elif action == "click":
                v.click(x, y, int(argv[4]) if len(argv) > 4 else 1)
            else:
                v.double_click(x, y, int(argv[4]) if len(argv) > 4 else 1)
            print("%s %d,%d  (framebuffer %dx%d)" % (action, x, y, v.w, v.h))
            time.sleep(0.15)
        elif action == "key" and len(argv) >= 3:
            v.tap(int(argv[2], 0))
            print("tap 0x%x" % int(argv[2], 0))
            time.sleep(0.15)
        else:
            return usage()
        if verify:
            time.sleep(0.5)
            st = vm_pointer(port)
            if st:
                print("after : Last Known Raw %s / Mouse Integration %s" % st)
    finally:
        time.sleep(0.1)
        v.close()
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
