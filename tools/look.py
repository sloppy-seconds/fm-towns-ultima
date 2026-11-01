#!/usr/bin/env python3
"""tools/look.py - ask the local vision model what a screenshot shows.

WHY THIS EXISTS. AGENTS.md records that qwen3.8-flash-next reads images and
works, and gives the endpoint and the payload shape, but no tool carried it, so
every session that needed "which screen is this" had to rebuild the call. The
screen-text endpoint is useless on the FM Towns proportional serif font
(docs/compiling-on-fm-towns.md says tools/ocr.py does not match it either), so
this is the only instrument that answers a visual question about the guest.

Two cautions the same page records, and both are reasons to ask a narrow
question rather than "describe this": a model will confidently describe a corrupt
decode as intentional noise, and it will read a real screenshot correctly. The
difference is the image, not the model.

USAGE
  ./tools/look.py path/to.png "what prompt is on screen?"
  ./tools/look.py --model qwen3.8-flash-next shot.png "is there an error line?"

The endpoint, key and model id come from ~/.pi/agent/models.json under
providers.local, so this does not hardcode a host.
"""

import argparse
import base64
import json
import os
import ssl
import sys
import urllib.request

MODELS_JSON = os.path.expanduser('~/.pi/agent/models.json')
DEFAULT_MODEL = 'qwen3.8-flash-next'


def local_provider():
    with open(MODELS_JSON) as fh:
        cfg = json.load(fh)
    p = cfg['providers']['local']
    return p['baseUrl'].rstrip('/'), p['apiKey']


def ask(image, prompt, model=DEFAULT_MODEL, base=None, key=None, max_tokens=600):
    if base is None:
        base, key = local_provider()
    with open(image, 'rb') as fh:
        b64 = base64.b64encode(fh.read()).decode()
    body = {
        'model': model,
        'max_tokens': max_tokens,
        'messages': [{
            'role': 'user',
            'content': [
                {'type': 'text', 'text': prompt},
                {'type': 'image_url', 'image_url': {'url': 'data:image/png;base64,' + b64}},
            ],
        }],
    }
    req = urllib.request.Request(
        base + '/chat/completions',
        data=json.dumps(body).encode(),
        headers={'content-type': 'application/json', 'authorization': 'Bearer ' + key},
        method='POST')
    # litellm on this host presents a certificate the system store does not
    # chain to, and the alternative to not verifying is not having the tool.
    ctx = ssl.create_default_context()
    ctx.check_hostname = False
    ctx.verify_mode = ssl.CERT_NONE
    with urllib.request.urlopen(req, timeout=180, context=ctx) as r:
        return json.load(r)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('image')
    ap.add_argument('prompt', nargs='?', default='Transcribe every line of text visible on this screen, top to bottom.')
    ap.add_argument('--model', default=DEFAULT_MODEL)
    args = ap.parse_args()
    try:
        out = ask(args.image, args.prompt, args.model)
    except Exception as exc:  # noqa: BLE001 - a 500 here is a backend state, not a bug here
        print('ERROR %s' % exc, file=sys.stderr)
        return 1
    for choice in out.get('choices', []):
        print(choice.get('message', {}).get('content', ''))
    return 0


if __name__ == '__main__':
    sys.exit(main())
