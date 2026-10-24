#!/usr/bin/env python3
"""Focused C11 and optional original-XBE evidence gate for four low-address reads/writes.

Original Xbox XBE is user-provided and private; never add it to the repository.
A syntax pass plus exact instruction bytes is NOT full ABI or behavioral equivalence.
"""
import argparse
import hashlib
from pathlib import Path
import shutil
import subprocess

EXPECTED_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
OFFSET_DELTA = 0x10000
# Each opcode sequence is a complete original low-address access path.
CASES = (
    ("0x0005be70", 0x0005BEA0, "33c08b4014c3",
     "return *(volatile undefined4 *)(uintptr_t)UINT32_C(0x14);",
     "uRam00000014"),
    ("0x0005c040", 0x0005C055, "33c08b4004c3",
     "return *(volatile undefined4 *)(uintptr_t)UINT32_C(0x4);",
     "uRam00000004"),
    ("0x0005c070", 0x0005C085, "33c08b4004c3",
     "return *(volatile undefined4 *)(uintptr_t)UINT32_C(0x4);",
     "uRam00000004"),
    ("0x0005c150", 0x0005C1A0, "33c089401c5ec3",
     "*(volatile undefined4 *)(uintptr_t)UINT32_C(0x1c) = 0;",
     "uRam0000001c"),
)
FLAGS = (
    "-std=c11", "-fsyntax-only", "-ferror-limit=3",
    "-Wno-implicit-function-declaration", "-Wno-int-conversion",
    "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
    "-Wno-int-to-pointer-cast", "-Wno-return-type",
    "-Wno-deprecated-non-prototype",
)


def verify_xbe(path):
    data = path.read_bytes()
    digest = hashlib.sha256(data).hexdigest()
    if digest != EXPECTED_SHA256:
        raise AssertionError(f"Original XBE hash mismatch: {digest}")
    for entry, va, hex_bytes, _, _ in CASES:
        expected = bytes.fromhex(hex_bytes)
        got = data[va - OFFSET_DELTA:va - OFFSET_DELTA + len(expected)]
        assert got == expected, f"{entry}: original instruction mismatch at {va:#x}"
        print(f"PASS original x86 {entry} at {va:#x}")


def verify_sources(root):
    clang = shutil.which("clang")
    if not clang:
        raise RuntimeError("clang is required for focused C11 verification")
    for entry, _, _, replacement, removed in CASES:
        addr = entry[2:]
        path = root / "src" / "main_unclassified" / f"band_{addr[:4]}" / f"{entry}.c"
        # Source layout uses the high 16 bits of the eight-digit entry as its band.
        # E.g. 0x0005be70 -> band_0005.
        source = path.read_text(encoding="utf-8")
        assert f"Entry: {entry}" in source, f"{entry}: original identity missing"
        assert "Input x86 body SHA-256:" in source, f"{entry}: body provenance missing"
        assert replacement in source, f"{entry}: verified guest access missing"
        assert removed not in source, f"{entry}: unresolved decompiler symbol remains"
        cmd = [clang, *FLAGS, "-I", str(root / "include"), str(path)]
        result = subprocess.run(cmd, text=True, capture_output=True)
        if result.returncode:
            raise AssertionError(f"{entry}: Clang C11 failed:\n{result.stderr}")
        print(f"PASS focused Clang C11 {entry}")


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path, help="Private original XBE for instruction checks")
    args = parser.parse_args()
    if args.xbe:
        verify_xbe(args.xbe)
    else:
        print("Original XBE unavailable: opcode checks SKIPPED, not claimed.")
    verify_sources(args.root.resolve())
    print("PASS focused syntax; no 1:1 ABI, linking, or runtime claim.")


if __name__ == "__main__":
    main()
