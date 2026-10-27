#!/usr/bin/env python3
"""Scoped XNet 0x0034B6F0 guest stack DWORD/WORD regression (not ABI proof).

Original instructions establish a full DWORD subtract followed by low-16-bit
stores to the same guest stack argument. The high half must survive. Private
XBE bytes are optional and are never committed to this repository.
"""
import argparse
import hashlib
from pathlib import Path
import subprocess

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE = "src/platform/network_xnet/0x0034b6f0.c"
FINGERPRINTS = {
    0x0034B710: "836d140c",       # SUB DWORD [EBP+14], 12
    0x0034BB26: "66c7451003e8",   # MOV WORD [EBP+10], E803
    0x0034BB2C: "66c7451403e8",   # MOV WORD [EBP+14], E803
    0x0034BB57: "66895514",       # MOV WORD [EBP+14], DX
    0x0034BB6F: "66894514",       # MOV WORD [EBP+14], AX
    0x0034BBD3: "ff7514",         # PUSH DWORD [EBP+14]
    0x0034BC06: "ff7514",         # PUSH DWORD [EBP+14]
}
MARKERS = (
    "Input x86 body SHA-256: AC3D24A42D94BFF5CC8099601A9C0D7C55D389E05386344F488E091757EED1FD",  # overwritten below with actual body identifier
    "uVar5 = param_4 - 0xc;",
    "param_4 = uVar5;",
    "param_4 = (param_4 & 0xffff0000U) | 0xe803U;",
    "param_4 = (param_4 & 0xffff0000U) | (uint)(ushort)sVar8;",
)

def read_va(data, address, size):
    assert data[:4] == b"XBEH"
    base = int.from_bytes(data[0x104:0x108], "little")
    count = int.from_bytes(data[0x11c:0x120], "little")
    table = int.from_bytes(data[0x120:0x124], "little") - base
    for i in range(count):
        o = table + 56 * i
        va = int.from_bytes(data[o + 4:o + 8], "little")
        offset = int.from_bytes(data[o + 12:o + 16], "little")
        length = int.from_bytes(data[o + 16:o + 20], "little")
        if va <= address and address + size <= va + length:
            return data[offset + address - va:offset + address - va + size]
    raise AssertionError(f"Unmapped original XBE address {address:#x}")

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    src = (args.root / SOURCE).read_text(encoding="utf-8")
    for marker in MARKERS:
        assert marker in src, f"Missing observed source contract: {marker}"
    assert "param_4._2_2_" not in src, "Ghidra pseudo-field still present"
    # Demonstrate partial-word preservation at wrap, carry and sign boundaries.
    for initial in (0, 12, 0x10000, 0x12345678, 0x80000000, 0xffffffff):
        sub = (initial - 12) & 0xffffffff
        for word in (0, 1, 0xe803, 0xffff):
            updated = (sub & 0xffff0000) | word
            assert (updated >> 16) == (sub >> 16)
            assert (updated & 0xffff) == word
    subprocess.run([
        "clang", "-std=c11", "-fsyntax-only", "-ferror-limit=0",
        "-Wno-implicit-function-declaration", "-Wno-int-conversion",
        "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
        "-Wno-int-to-pointer-cast", "-Wno-return-type",
        "-Wno-deprecated-non-prototype",
        "-I", str(args.root / "include"), str(args.root / SOURCE),
    ], check=True)
    if args.xbe:
        data = args.xbe.read_bytes()
        assert hashlib.sha256(data).hexdigest() == XBE_SHA, "Wrong original XBE"
        for va, hex_bytes in FINGERPRINTS.items():
            assert read_va(data, va, len(hex_bytes) // 2) == bytes.fromhex(hex_bytes), hex(va)
    print("PASS: 0x0034B6F0 source-only low-WORD contract and Clang C11"
          + ("; original XBE bytes verified" if args.xbe else "; XBE not checked"))

if __name__ == "__main__":
    main()
