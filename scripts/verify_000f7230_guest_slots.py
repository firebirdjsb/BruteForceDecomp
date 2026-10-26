#!/usr/bin/env python3
"""Verify pinned 0x000F7230 guest stack-word aliases and isolated C11 syntax.

Only an explicitly supplied, authenticated original Xbox XBE enables opcode
verification. CI must never contain the game executable.
"""
import argparse
import hashlib
from pathlib import Path
import shutil
import struct
import subprocess

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_SHA = "37C8ECF2C406507ACCD19270FF8F4F96FB6FC4EF144D57E0DBB99F8538F7E8E8"
SOURCE = Path("src/main_unclassified/band_000f/0x000f7230.c")
WINDOWS = {
    0x000F7230: bytes.fromhex("83ec24"),
    0x000F7233: bytes.fromhex("535556"),
    0x000F7281: bytes.fromhex("8d4c2410"),
    0x000F729D: bytes.fromhex("8d442410"),
    0x000F72A4: bytes.fromhex("ff92bc010000"),
    0x000F72AE: bytes.fromhex("c744241445e86d0a"),
    0x000F72D2: bytes.fromhex("8d442414"),
    0x000F72D7: bytes.fromhex("8d4c2414"),
}
CALLS = {0x000F728A: 0x00102300, 0x000F72B6: 0x00102120,
         0x000F72DC: 0x00102210}


def verify_source(source):
    required = (
        "Entry: 0x000f7230",
        "Input x86 body SHA-256: " + BODY_SHA,
        "STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED",
        "uint32_t guest_output_dword;",
        "undefined4 ***pppuStack_20;",
        "FUN_00102300(ppppuVar4,0,&guest_output_dword)",
        "(*piVar1 + 0x1bc))(&guest_output_dword)",
        "FUN_00102210(&guest_output_dword,&pppuStack_20)",
    )
    if any(fragment not in source for fragment in required):
        raise ValueError("lost provenance or verified guest output-word alias")
    if source.count("&guest_output_dword") != 3:
        raise ValueError("expected three references to the shared output word")
    if "&stack0xffffffd4" in source or "&stack0xffffffd8" in source:
        raise ValueError("unresolved guest stack operand returned")


def section_bytes(data, va, size):
    base = struct.unpack_from("<I", data, 0x104)[0]
    count = struct.unpack_from("<I", data, 0x11C)[0]
    table = struct.unpack_from("<I", data, 0x120)[0] - base
    for i in range(count):
        flags, section_va, virtual_size, raw, raw_size = struct.unpack_from(
            "<IIIII", data, table + i * 0x38)
        if section_va <= va and va + size <= section_va + min(virtual_size, raw_size):
            off = raw + va - section_va
            return data[off:off + size]
    raise ValueError("XBE address not in a stored section: " + hex(va))


def verify_xbe(path):
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest() != XBE_SHA:
        raise ValueError("original XBE SHA-256 does not match")
    for address, expected in WINDOWS.items():
        if section_bytes(data, address, len(expected)) != expected:
            raise ValueError("x86 bytes differ at " + hex(address))
    for address, target in CALLS.items():
        instruction = section_bytes(data, address, 5)
        displacement = struct.unpack("<i", instruction[1:])[0]
        if instruction[0] != 0xE8 or address + 5 + displacement != target:
            raise ValueError("x86 direct-call destination differs at " + hex(address))
    # SUB ESP,0x24 and PUSH EBX,EBP,ESI yield ESP=S-0x30.
    # With PUSH EDI, LEA [ESP+0x10] is S-0x24.
    # LEA [ESP+0x14] is adjacent S-0x20; after PUSH it again names S-0x24.
    print("Authenticated original XBE: 8 opcode windows, 3 calls PASS")


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path,
                        default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path,
                        help="Private original Xbox XBE path; never commit it")
    args = parser.parse_args()
    source = (args.root / SOURCE).read_text(encoding="utf-8")
    verify_source(source)
    mutants = (
        source.replace("&guest_output_dword", "&stack0xffffffd4", 1),
        source.replace("FUN_00102210(&guest_output_dword,&pppuStack_20)",
                       "FUN_00102210(&guest_output_dword,&guest_output_dword)"),
    )
    for mutant in mutants:
        try:
            verify_source(mutant)
        except ValueError:
            pass
        else:
            raise RuntimeError("regression guard accepted invalid stack alias")
    clang = shutil.which("clang")
    if not clang:
        raise RuntimeError("Clang required")
    flags = ["-std=c11", "-fsyntax-only", "-ferror-limit=3",
             "-Wno-implicit-function-declaration", "-Wno-int-conversion",
             "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
             "-Wno-int-to-pointer-cast", "-Wno-return-type",
             "-Wno-deprecated-non-prototype"]
    for opt in ("-O0", "-O2"):
        result = subprocess.run(
            [clang, *flags, opt, "-I", str(args.root / "include"),
             str(args.root / SOURCE)], capture_output=True, text=True)
        if result.returncode:
            raise RuntimeError(f"isolated Clang {opt} failed: {result.stderr}")
        print(f"0x000F7230 isolated Clang C11 {opt}: PASS")
    if args.xbe is not None:
        verify_xbe(args.xbe)
    else:
        print("Original x86 verification unavailable in CI without --xbe")
    print("Whole-function ABI, native linking and Xbox runtime NOT verified")


if __name__ == "__main__":
    main()
