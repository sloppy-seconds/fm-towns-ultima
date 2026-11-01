#!/usr/bin/env python3
"""tools/toskey.py - type one line into the TownsOS guest, safely.

WHY THIS EXISTS. Every documented failure on this route is a quoting or keyboard
failure, and docs/driving-the-townsos-prompt.md says to build JSON with an
encoder rather than printf because a hand-built payload once put a bare \\p into
the body and the command silently never ran. This takes the text as an argv
string, encodes it properly, and sends the carriage return as a separate named
key, because a CR inside the text does not reliably submit.

USAGE
  ./tools/toskey.py "d:"
  ./tools/toskey.py --no-enter "dir"
  ./tools/toskey.py --port 8098 --char-delay 0.4 "d" ":"
"""

import argparse
import json
import subprocess
import sys
import time


def post(port, path, payload):
    r = subprocess.run(
        ['curl', '-s', '-m', '30', '-o', '/dev/null', '-w', '%{http_code}',
         '-X', 'POST', 'http://127.0.0.1:%d%s' % (port, path),
         '-H', 'Content-Type: application/json', '--data-binary', json.dumps(payload)],
        capture_output=True, text=True)
    return r.stdout.strip()


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('text', nargs='+')
    ap.add_argument('--port', type=int, default=8098)
    ap.add_argument('--char-delay', type=float, default=0.0)
    ap.add_argument('--no-enter', action='store_true')
    args = ap.parse_args()

    text = ' '.join(args.text)
    if args.char_delay > 0:
        code = 'n/a'
        for ch in text:
            code = post(args.port, '/api/keys', {'text': ch})
            time.sleep(args.char_delay)
    else:
        code = post(args.port, '/api/keys', {'text': text})
    if not args.no_enter:
        time.sleep(0.6)
        rcode = post(args.port, '/api/key', {'keys': 'Return'})
    else:
        rcode = 'skipped'
    print('typed %r http=%s return=%s' % (text, code, rcode))
    return 0


if __name__ == '__main__':
    sys.exit(main())
