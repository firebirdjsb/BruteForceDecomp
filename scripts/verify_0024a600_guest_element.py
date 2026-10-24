#!/usr/bin/env python3
"""Verify the 0x0024a600 incoming DWORD and byte-only callee read.

Proves a narrow guest-stack operand contract, not full EAX/ECX ABI or behavior.
"""
from __future__ import annotations
import argparse
import hashlib
from pathlib import Path
import struct

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE = Path("src/main_unclassified/band_0024/0x0024a600.c")
OPCODES = (
    (0x0024A600, "56"),          # push esi
    (0x0024A608, "57"),          # push edi
    (0x0024A625, "8d44240c"),    # lea eax,[esp+0xc] = entry ESP+4
    (0x0024A629, "50"),          # push eax (pointer to guest DWORD)
    (0x0024A63C, "c20400"),      # ret 4
    (0x0024A669, "c20400"),      # ret 4
    (0x00071D43, "8b4510"),      # mov eax,[ebp+0x10] = third arg pointer
    (0x00071D46, "8a08"),        # mov cl,byte ptr [eax]
)

def check_x86(data: bytes) -> None:
    for va, hexbytes in OPCODES:
        expected = bytes.fromhex(hexbytes)
        offset = va - 0x10000
        if data[offset:offset + len(expected)] != expected:
            raise ValueError(f"opcode mismatch at {va:#010x}")
    call_va = 0x0024A635
    offset = call_va - 0x10000
    if data[offset] != 0xE8:
        raise ValueError("missing direct call at 0x0024a635")
    displacement = struct.unpack_from("<i", data, offset + 1)[0]
    if (call_va + 5 + displacement) & 0xFFFFFFFF != 0x00071D20:
        raise ValueError("unexpected direct callee")

def check_source(source: str) -> None:
    for token in (
        "void FUN_0024a600(undefined4 guest_element_word)",
        "FUN_00071d20(*(undefined4 *)(in_ECX + 8),in_EAX - iVar2,&guest_element_word);",
        "at entry ESP+4",
        "ABI_UNVERIFIED",
    ):
        if token not in source:
            raise ValueError(f"missing source invariant: {token}")
    if "stack0x00000004" in source:
        raise ValueError("unresolved guest stack symbol")

def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--xbe", type=Path)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    args = parser.parse_args()
    source = (args.root / SOURCE).read_text(encoding="utf-8")
    check_source(source)
    if args.xbe:
        data = args.xbe.read_bytes()
        if hashlib.sha256(data).hexdigest() != XBE_SHA256:
            parser.error("wrong Xbox executable SHA-256")
        check_x86(data)
        bad = bytearray(data)
        bad[0x00071D46 - 0x10000] ^= 1
        try:
            check_x86(bad)
        except ValueError:
            pass
        else:
            raise ValueError("negative original-byte control failed")
    try:
        check_source(source.replace("&guest_element_word);", "&wrong_word);"))
    except ValueError:
        pass
    else:
        raise ValueError("negative source-identity control failed")
    print("PASS: 0x0024a600 guest input DWORD, 0x00071d20 low-byte read, direct edge")
    print("LIMITATION: guest register ABI and complete callee behavior unverified")

if __name__ == "__main__":
    main()
