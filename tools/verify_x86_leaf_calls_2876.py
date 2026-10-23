#!/usr/bin/env python3
"""Verify two instruction-backed stack-call edges in the original Brute Force XBE.

This verifies only the two observed caller argument setups, not the complete ABI.
The copyrighted original XBE is supplied locally and is never stored in Git.
"""
import argparse
import hashlib
import struct
from pathlib import Path

EXPECTED_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
# setup VA, direct E8 call VA, resolved destination
CALLS = ((0x287746, 0x287750, 0x287E30), (0x287787, 0x287791, 0x287DC0))
# push ecx; mov eax,esp; mov [eax],edi; push ecx; mov eax,esp; mov [eax],ebx
SETUP = bytes.fromhex("51 8b c4 89 38 51 8b c4 89 18")


def verify(xbe: Path, root: Path) -> None:
    image = xbe.read_bytes()
    if hashlib.sha256(image).hexdigest() != EXPECTED_SHA256:
        raise ValueError("Original XBE SHA-256 does not match")
    if image[:4] != b"XBEH":
        raise ValueError("Invalid XBE magic")

    image_base = struct.unpack_from("<I", image, 0x104)[0]
    count, section_table_va = struct.unpack_from("<II", image, 0x11C)
    if not (0 < count < 128):
        raise ValueError("Invalid XBE section count")

    def file_offset(va: int, length: int) -> int:
        for index in range(count):
            pos = section_table_va - image_base + index * 0x38
            if not (0 <= pos <= len(image) - 20):
                raise ValueError("Invalid XBE section table")
            _, section_va, virtual_size, raw_offset, raw_size = struct.unpack_from(
                "<IIIII", image, pos
            )
            if section_va <= va and va + length <= section_va + min(virtual_size, raw_size):
                offset = raw_offset + va - section_va
                if offset + length > len(image):
                    raise ValueError("Mapped instruction exceeds file")
                return offset
        raise ValueError(f"Unmapped instruction 0x{va:08X}")

    for setup_va, call_va, target in CALLS:
        off = file_offset(setup_va, len(SETUP))
        if image[off : off + len(SETUP)] != SETUP:
            raise ValueError(f"Unexpected two-word setup at 0x{setup_va:08X}")
        off = file_offset(call_va, 5)
        insn = image[off : off + 5]
        if insn[0] != 0xE8:
            raise ValueError(f"Missing direct call at 0x{call_va:08X}")
        actual_target = call_va + 5 + struct.unpack("<i", insn[1:])[0]
        if actual_target != target:
            raise ValueError(f"Call destination differs: 0x{actual_target:08X}")
        print(f"PASS 0x{call_va:08X} -> 0x{target:08X}: EBX=start, EDI=end")

    source = (root / "src/main_unclassified/band_0028/0x002876a0.c").read_text(
        encoding="utf-8"
    )
    for expression in ("FUN_00287e30(param_1,param_2)", "FUN_00287dc0(param_1,param_2)"):
        if expression not in source:
            raise ValueError(f"Missing caller linkage: {expression}")
    print("PASS both C caller expressions; full ABI and runtime remain unverified")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", required=True, type=Path)
    parser.add_argument("--root", type=Path, default=Path("."))
    args = parser.parse_args()
    verify(args.xbe, args.root)
