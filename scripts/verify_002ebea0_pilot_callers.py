#!/usr/bin/env python3
"""Compile/run explicit original CALL-boundary fixtures at O0/O2; no private XBE in CI."""

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
import subprocess
import tempfile

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CALLS = {0x002C255B: "e840990200", 0x0033FB4D: "e84ec3faff"}
PROBE_SHA = "b77ad187f6f3db2a5ae4f8e214b023d7c62ce25a38ce769a993d2a8c81643760"


def guest_bytes(xbe, address, length):
    if xbe[:4] != b"XBEH":
        raise ValueError("Not an original Xbox XBE image")
    image_base = int.from_bytes(xbe[0x104:0x108], "little")
    count = int.from_bytes(xbe[0x11c:0x120], "little")
    sections = int.from_bytes(xbe[0x120:0x124], "little") - image_base
    for index in range(count):
        off = sections + index * 56
        guest_va = int.from_bytes(xbe[off+4:off+8], "little")
        raw = int.from_bytes(xbe[off+12:off+16], "little")
        raw_size = int.from_bytes(xbe[off+16:off+20], "little")
        if guest_va <= address and address + length <= guest_va + raw_size:
            return xbe[raw + address - guest_va:raw + address - guest_va + length]
    raise ValueError(f"XBE address not section-backed: 0x{address:08x}")


def validate_private_xbe(path):
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest() != XBE_SHA:
        raise ValueError("Original XBE SHA-256 mismatch")
    for site, opcode in CALLS.items():
        raw = bytes.fromhex(opcode)
        if guest_bytes(data, site, len(raw)) != raw:
            raise ValueError(f"Original CALL bytes differ at 0x{site:08x}")
    if hashlib.sha256(guest_bytes(data, 0x002ebea0, 65)).hexdigest() != PROBE_SHA:
        raise ValueError("Original helper body SHA-256 mismatch")
    print("PASS: private XBE SHA, 2 original CALL encodings, original 65-byte probe")


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe", type=Path, help="Optional private XBE; never uploaded by CI")
    p.add_argument("--clang", default=shutil.which("clang"))
    args = p.parse_args()
    if not args.clang:
        p.error("Clang required")
    if args.xbe:
        validate_private_xbe(args.xbe)
    root = args.root.resolve()
    source = root / "tests/test_002ebea0_pilot_callers.c"
    syntax = root / "tests/test_002ebea0_pilot_callers_syntax.c"
    includes = root / "include"
    flags = ["-std=c11", "-Wall", "-Wextra", "-Werror", "-pedantic", "-I", str(includes)]
    with tempfile.TemporaryDirectory(prefix="bf_2ebea0_callers_") as scratch:
        for target in ("i686-pc-windows-msvc", "x86_64-pc-windows-msvc"):
            subprocess.run([args.clang, *flags, "-target", target,
                            "-fsyntax-only", str(syntax)], check=True)
        for optimization in ("-O0", "-O2"):
            binary = str(Path(scratch) / ("pilot_" + optimization[1:]))
            subprocess.run([args.clang, *flags, optimization, str(source),
                            "-o", binary], check=True)
            subprocess.run([binary], check=True)
    print("NOTE: full caller execution, guest stack translation and Xbox runtime NOT verified")
    if not args.xbe:
        print("NOTE: original XBE instruction fingerprints not reauthenticated here")


if __name__ == "__main__":
    main()
