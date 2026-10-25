#!/usr/bin/env python3
"""omf_code.py - extract code bytes from an OMF object file (High C 1.7, 80386 OMF).

Walks the record chain and prints every LEDATA (0xa0) record's raw body, plus
the data slice under the two plausible field layouts, so the caller can see
exactly what the compiler emitted without trusting one framing guess.

Framing note (measured on HELLO.OBJ, 267 bytes): the walk that consumes the
file exactly and yields only valid record ids uses record size = 3 + length
(the length field counts the checksum byte). Under that framing LEDATA32
bodies read cleanly as index u16 + offset u32 + data.

Usage:
  python3 tools/omf_code.py PLOT.OBJ
  python3 tools/omf_code.py PLOT.OBJ --find 8b44240cc1e007...   # hex search
"""
import sys

def records(d):
    i = 0
    while i + 3 <= len(d):
        t = d[i]
        ln = d[i+1] | (d[i+2] << 8)
        yield t, ln, d[i+3:i+3+ln-1]
        i += 3 + ln

def main():
    args = sys.argv[1:]
    path = args[0]
    d = open(path, 'rb').read()
    if '--find' in args:
        needle = bytes.fromhex(args[args.index('--find') + 1])
        pos = d.find(needle)
        print(f"needle {len(needle)} bytes: {'FOUND at offset ' + str(pos) if pos >= 0 else 'NOT FOUND'}")
        return
    print(f"file {len(d)} bytes")
    for t, ln, body in records(d):
        if t == 0xa0:
            idx = body[0] | (body[1] << 8)
            off = body[2] | (body[3] << 8)
            grp = body[4]
            print(f"LEDATA idx={idx} off={off} group={grp} len={ln}")
            print(f"  raw body : {body.hex(' ')}")
            print(f"  data     : {body[5:].hex(' ')}")

if __name__ == '__main__':
    main()
