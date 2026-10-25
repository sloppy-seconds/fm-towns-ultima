#!/usr/bin/env python3
"""clean_floppy.py - remove test residue from a FAT image, keeping only the
files that make it boot and compile.

The keep-list is explicit rather than pattern-based, because a pattern-based
delete already cost this project one image: treating the extension column as
part of the name removed BF0 and BH1, which are legitimate DOS boot files.

Usage: clean_floppy.py IMAGE [--dry-run]
"""
import subprocess, sys

KEEP = {
    "IO.SYS", "MSDOS.SYS", "COMMAND.COM", "CONFIG.SYS", "AUTOEXEC.BAT",
    "DOS", "BIN", "BF0", "BH1", "SHARE.EXE", "TGDRV.COM",
}

def mdir_entries(img):
    """Return (name, ext) pairs from mdir, skipping the . and .. rows."""
    out = subprocess.run(["mdir", "-a", "-i", img], capture_output=True
                         ).stdout.decode("cp437", "replace")
    entries = []
    for line in out.split("\n"):
        if not line.strip():
            continue
        if line.lstrip().startswith(("Volume", "Directory", ".")):
            continue
        if "<DIR>" in line:
            name = line.split()[0]
            entries.append((name, ""))
            continue
        parts = line.split()
        if len(parts) >= 2 and parts[1].isdigit():
            entries.append((parts[0], ""))
        elif len(parts) >= 3 and parts[2].isdigit():
            entries.append((parts[0], parts[1]))
    return entries

def main():
    img = sys.argv[1]
    dry = "--dry-run" in sys.argv
    removed = []
    for name, ext in mdir_entries(img):
        full = f"{name}.{ext}" if ext else name
        if full.upper() in KEEP:
            continue
        if name in KEEP:
            continue
        target = f"::{full}"
        if dry:
            print("would remove", full)
            continue
        r = subprocess.run(["mdel", "-i", img, target], capture_output=True)
        if r.returncode == 0:
            removed.append(full)
    if not dry:
        print(f"removed {len(removed)} file(s): {', '.join(removed)}")

if __name__ == "__main__":
    main()
