#!/usr/bin/env python3
"""Verify one 0x001E4E30 original guest out-DWORD alias; never claim full 1:1."""

# Archived C-only evidence: active game-core validation uses strict C++17.
if __name__ == "__main__":
    import sys as _archive_sys
    from pathlib import Path as _ArchivePath
    _archive_sys.path.insert(0, str(_ArchivePath(__file__).resolve().parents[1] / "tools"))
    from historical_c11 import require_historical_c11_opt_in
    require_historical_c11_opt_in()

import argparse
import hashlib
from pathlib import Path
import shutil
import struct
import subprocess

XBE_SHA = "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721"
BODY_SHA = "925663FE25ABAFA5F1CA8C0D3CD6710CBF1A7302A0B202B9863C8E5239F916AB"
ENTRY, BODY_SIZE = 0x001E4E30, 815
# Exact original opcodes establishing caller-provided out-DWORD address and read.
OPCODES = {
    0x001E4FAE: "8d 4c 24 1c",
    0x001E4FB2: "51",
    0x001E4FB3: "68 0c 02 00 00",
    0x001E4FB8: "8d 8c 24 f0 03 00 00",
    0x001E4FBF: "51",
    0x001E4FC0: "50",
    0x001E4FC1: "ff 52 10",
    0x001E4FC4: "81 7c 24 1c 0c 02 00 00",
}

def source_check(path):
    s = path.read_text(encoding="utf-8")
    if "Input x86 body SHA-256: " + BODY_SHA not in s or "ABI_UNVERIFIED" not in s:
        raise ValueError("Original identity or unverified label changed")
    for bad in ("unaff_EBP", "stack0xfffff80c"):
        if bad in s:
            raise ValueError("The disconnected out-slot alias reappeared: " + bad)
    for good in ("undefined4 bytes_read_word;",
                 "(ppiVar7,&iStack_428,0x20c,&bytes_read_word);",
                 "if (((bytes_read_word == 0x20c) && (iStack_428 == 0))"):
        if s.count(good) != 1:
            raise ValueError("Original out-DWORD source flow mismatch: " + good)

def original_check(raw):
    if raw[:4] != b"XBEH" or hashlib.sha256(raw).hexdigest().upper() != XBE_SHA:
        raise ValueError("Supplied original Xbox executable identity mismatch")
    base, = struct.unpack_from("<I", raw, 0x104)
    count, table = struct.unpack_from("<II", raw, 0x11C)
    offset = table - base
    if not 1 <= count <= 256 or not 0 <= offset <= len(raw) - count*56:
        raise ValueError("Invalid XBE section table")
    found = []
    for i in range(count):
        _, va, vsize, foff, fsize, _ = struct.unpack_from("<6I", raw, offset+i*56)
        delta = ENTRY-va
        if 0 <= delta and delta+BODY_SIZE <= min(vsize, fsize):
            pos = foff+delta
            if pos+BODY_SIZE <= len(raw):
                found.append(raw[pos:pos+BODY_SIZE])
    if len(found) != 1:
        raise ValueError("Original file-backed body not unique")
    body, = found
    if hashlib.sha256(body).hexdigest().upper() != BODY_SHA:
        raise ValueError("Original 815-byte body hash mismatch")
    for addr, hexcode in OPCODES.items():
        op = bytes.fromhex(hexcode)
        if body[addr-ENTRY:addr-ENTRY+len(op)] != op:
            raise ValueError(f"Original byte window mismatch at 0x{addr:08X}")

def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe", type=Path, help="Private original XBE, never commit")
    p.add_argument("--xbox-only", action="store_true")
    args = p.parse_args()
    if not args.xbox_only:
        source_check(args.root/"src/main_unclassified/band_001e/0x001e4e30.c")
        print("PASS original 0x001E4E30 out-DWORD source alias")
        clang = shutil.which("clang")
        if not clang:
            raise RuntimeError("Clang required for isolated C11 syntax verification")
        flags = ["-std=c11","-fsyntax-only","-ferror-limit=3",
                 "-Wno-implicit-function-declaration","-Wno-int-conversion",
                 "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
                 "-Wno-int-to-pointer-cast","-Wno-return-type",
                 "-Wno-deprecated-non-prototype"]
        cmd = [clang, *flags, "-I", str(args.root/"include"),
               str(args.root/"src/main_unclassified/band_001e/0x001e4e30.c")]
        test = subprocess.run(cmd, capture_output=True, text=True)
        if test.returncode:
            raise ValueError("Isolated host C11 still fails:\n" + test.stderr[:3000])
        print("PASS isolated host Clang C11 syntax (not Xbox behavior)")
    if args.xbe:
        original_check(args.xbe.read_bytes())
        print(f"PASS pinned original XBE, {BODY_SIZE}-byte body, {len(OPCODES)} opcode windows")
    elif args.xbox_only:
        p.error("--xbox-only requires --xbe")
    print("ABI, virtual dispatch, x87, guest memory and runtime remain unverified")

if __name__ == "__main__":
    main()
