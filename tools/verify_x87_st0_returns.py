#!/usr/bin/env python3
"""Verify four extended-precision x87 ST(0) return lanes without XBE uploads.

Checks provenance identity and specific return instructions, NOT host-call ABI,
rounding, or 1:1 gameplay semantics. Use --xbe with the user's local XBE only.
"""
from __future__ import annotations
import argparse
import hashlib
import struct
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
# Original contiguous Ghidra function spans and *original*, not C, SHA256.
FUNCTIONS = {
    0x0005A6E0: (0xE5, "939038D081069C28ED30FD5C500A7ADF498E9A32A43F7739AC6087A24D6930D5"),
    0x0006EEE0: (0x09, "376079C0E5508DF0C9C0CFAACD3A66245EB98199D9E5878756049E208142B4E8"),
    0x001552A0: (0x38, "3081F4F4606622612238AD225AF181039F904326496359464995AB8A821A40B2"),
    0x002F05F8: (0x15, "2DCE0BC1EC224128643A743B9A3CAB6795651B19324AE7B387A872B7D615AB3B"),
}
# Extended-precision x87 FP operation followed by bare RET (no CPU int return).
WINDOWS = {
    0x0005A7BF: "d9 f3 83 c4 14 c3",
    0x0006EEE0: "d9 44 24 04 d9 f2 dd d8 c3",
    0x001552D2: "d9 f3 83 c4 10 c3",
    0x002F05F8: "d9 c0 d9 fc dc e1 d9 c9 d9 e0 d9 f0",
    0x002F0604: "d9 e8 de c1 d9 fd dd d9 c3",
}
# None of these return a C integer/pointer value. Preserve the draft x87 math
# body; only resolve the missing 80-bit return-storage alias.
SRCS = {
    0x0005A6E0: "src/main_unclassified/band_0005/0x0005a6e0.cpp",
    0x0006EEE0: "src/main_unclassified/band_0006/0x0006eee0.cpp",
    0x001552A0: "src/main_unclassified/band_0015/0x001552a0.cpp",
    0x002F05F8: "src/main_unclassified/band_002f/0x002f05f8.cpp",
}

def source_check(root: Path) -> None:
    aliases = (root / "include/bf_ghidra_types.h").read_text(encoding="utf-8")
    assert "typedef float10 unkbyte10;" in aliases
    for entry, path in SRCS.items():
        content = (root / path).read_text(encoding="utf-8")
        assert "unkbyte10 FUN_%08x" % entry in content, path
        assert "unkbyte10 Var" in content, path
        assert FUNCTIONS[entry][1] in content, path
    print("PASS: four x87 return types have original-body identity labels.")

def xbe_check(path: Path) -> None:
    raw = path.read_bytes()
    if hashlib.sha256(raw).hexdigest() != XBE_SHA256:
        raise ValueError("Wrong original XBE SHA256")
    if raw[:4] != b"XBEH":
        raise ValueError("Invalid XBE magic")
    base, = struct.unpack_from("<I", raw, 0x104)
    count, table_va = struct.unpack_from("<II", raw, 0x11c)
    if not (0 < count <= 256 and 0 <= table_va - base <= len(raw) - count * 56):
        raise ValueError("Corrupt XBE section header table")
    sections = [struct.unpack_from("<5I", raw, table_va-base+56*i) for i in range(count)]
    def get(va: int, size: int) -> bytes:
        for flags, start, virtual_size, offset, raw_size in sections:
            delta = va - start
            if 0 <= delta and delta+size <= min(virtual_size, raw_size):
                if offset+delta+size <= len(raw):
                    return raw[offset+delta:offset+delta+size]
        raise ValueError("XBE RVA unavailable: %#x" % va)
    for entry, (length, digest) in FUNCTIONS.items():
        actual = hashlib.sha256(get(entry, length)).hexdigest().upper()
        if actual != digest:
            raise ValueError("Original body digest mismatch: %#x" % entry)
    for va, opcodes in WINDOWS.items():
        expected = bytes.fromhex(opcodes)
        if get(va, len(expected)) != expected:
            raise ValueError("Original x87 instruction mismatch: %#x" % va)
    print("PASS: four original bodies, five x87 ST(0) instruction windows.")

def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe", type=Path, help="Local original XBE; never upload")
    args = ap.parse_args()
    source_check(args.root)
    if args.xbe:
        xbe_check(args.xbe)

if __name__ == "__main__":
    main()
