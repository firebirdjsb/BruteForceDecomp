#!/usr/bin/env python3
"""Verify XBE-backed 0x0007A7C0 stack record vs 260-byte format buffer.

CI checks source and isolated Clang syntax. --xbe additionally verifies the
private original XBE bytes. This does not validate register ABI or runtime.
"""
from __future__ import annotations

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
import re
import shutil
import struct
import subprocess

ENTRY = 0x0007A7C0
BODY_SIZE = 420
BODY_HASH = "2A992282CB099F0C253F7ED377C38F5456A649115B4650280998CC3EC143FF7E"
XBE_HASH = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE = Path("src/main_unclassified/band_0007/0x0007a7c0.c")
FLAGS = (
    "-std=c11", "-fsyntax-only", "-ferror-limit=3",
    "-Wno-implicit-function-declaration", "-Wno-int-conversion",
    "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
    "-Wno-int-to-pointer-cast", "-Wno-return-type",
    "-Wno-deprecated-non-prototype",
)


def verify_source(root: Path) -> None:
    source = root / SOURCE
    text = source.read_text(encoding="utf-8")
    if "Entry: 0x0007a7c0," not in text or f"Input x86 body SHA-256: {BODY_HASH}" not in text:
        raise ValueError("original entry/body provenance changed")
    if "ABI_UNVERIFIED" not in text:
        raise ValueError("original guest ABI uncertainty annotation missing")
    stripped = re.sub(r"/\*.*?\*/|//[^\n]*", "", text, flags=re.S)
    required = {
        "undefined1 local_140_record [0x3c];": 1,
        "undefined1 local_104 [260];": 1,
        "FUN_002eaa19(local_104,0x104,s__s_s_s_0040dd8c);": 3,
        "FUN_0023a280(local_104)": 3,
        "DAT_004432f8,local_104)": 3,
        "memset(local_140_record + 0x14,0,4);": 1,
        "memset(local_140_record + 0x04,0,2);": 1,
        "memset(local_140_record + 0x1c,0,4);": 1,
        "memset(local_140_record + 0x38,0,4);": 1,
        "memset(local_140_record + 0x18,0,4);": 1,
        "local_140_record[0x18] = 7;": 1,
        "FUN_000862e0(local_140_record)": 1,
    }
    for token, count in required.items():
        if stripped.count(token) != count:
            raise ValueError(f"expected {count} occurrences of {token!r}")
    if re.search(r"\bstack0x[0-9a-fA-F]+\b|\bauStack_10c\b", stripped):
        raise ValueError("unresolved stack alias or decompiler's 8-byte format buffer remains")
    clang = shutil.which("clang")
    if not clang:
        raise RuntimeError("clang unavailable")
    proc = subprocess.run(
        [clang, *FLAGS, "-I", str(root / "include"), str(source)],
        capture_output=True, text=True, timeout=60, check=False,
    )
    if proc.returncode:
        raise ValueError("isolated Clang C11 failed:\n" + proc.stderr[-3000:])


def verify_xbe(path: Path) -> None:
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest() != XBE_HASH or data[:4] != b"XBEH":
        raise ValueError("original retail XBE hash/header mismatch")
    base = struct.unpack_from("<I", data, 0x104)[0]
    count, table = struct.unpack_from("<II", data, 0x11c)
    if not 0 < count < 128:
        raise ValueError("invalid XBE section count")

    def read(va: int, size: int) -> bytes:
        for i in range(count):
            section = table - base + i * 0x38
            if section < 0 or section + 20 > len(data):
                raise ValueError("invalid XBE section header")
            _, start, virtual_size, raw, raw_size = struct.unpack_from("<IIIII", data, section)
            if start <= va and va + size <= start + min(virtual_size, raw_size):
                offset = raw + va - start
                if offset + size > len(data):
                    raise ValueError("invalid XBE raw extent")
                return data[offset:offset + size]
        raise ValueError(f"XBE address unmapped: 0x{va:08x}")

    if hashlib.sha256(read(ENTRY, BODY_SIZE)).hexdigest().upper() != BODY_HASH:
        raise ValueError("original 420-byte x86 function body mismatch")
    # From the prologue: ESP = entry ESP - 0x140 - 3*4 = entry ESP - 0x14c.
    # Four format arguments make LEA [ESP+0x58] = entry ESP - 0x104.
    # The separate record uses LEA [ESP+0x0c] = entry ESP - 0x140.
    # PUSH record then LEA [ESP+0x4c] = entry ESP - 0x104 (text buffer).
    if (-0x14c - 0x10 + 0x58, -0x14c + 0x0c, -0x14c - 4 + 0x4c) != (
        -0x104, -0x140, -0x104
    ):
        raise ValueError("guest stack region arithmetic regression")
    observed = {
        0x0007A7C0: "81 ec 40 01 00 00",
        0x0007A7F4: "8d 44 24 58",
        0x0007A7F8: "68 04 01 00 00",
        0x0007A80D: "8d 54 24 48",
        0x0007A81E: "8d 44 24 48",
        0x0007A852: "8d 4c 24 58",
        0x0007A856: "68 04 01 00 00",
        0x0007A86B: "8d 4c 24 48",
        0x0007A87C: "8d 54 24 48",
        0x0007A8B0: "8d 44 24 58",
        0x0007A8B4: "68 04 01 00 00",
        0x0007A8C9: "8d 54 24 48",
        0x0007A8D6: "8d 44 24 48",
        0x0007A8E9: "8d 4c 24 0c",
        0x0007A8ED: "89 44 24 20",
        0x0007A8F1: "66 89 44 24 10",
        0x0007A8F6: "89 44 24 28",
        0x0007A8FA: "89 44 24 44",
        0x0007A8FE: "51",
        0x0007A8FF: "8d 44 24 4c",
        0x0007A903: "c7 44 24 28 07 00 00 00",
        0x0007A90B: "e8 d0 b9 00 00",
    }
    for address, encoded in observed.items():
        expected = bytes.fromhex(encoded)
        if read(address, len(expected)) != expected:
            raise ValueError(f"x86 instruction mismatch at 0x{address:08x}")


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path)
    opts = parser.parse_args()
    verify_source(opts.root.resolve())
    if opts.xbe:
        verify_xbe(opts.xbe)
    print("PASS 0x0007A7C0: source stack-region separation and isolated Clang C11" +
          ("; original XBE SHA/body/instructions verified" if opts.xbe else "; XBE not in CI") +
          "; register ABI and runtime unverified")


if __name__ == "__main__":
    main()
