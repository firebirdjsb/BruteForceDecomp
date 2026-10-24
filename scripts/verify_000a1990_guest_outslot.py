#!/usr/bin/env python3
"""Verify the original 0x000a1990 guest out-slot and reference operations."""
from __future__ import annotations
import argparse
import hashlib
from pathlib import Path
import shutil
import subprocess

ENTRY = 0x000A1990
END = 0x000A1A32
XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_SHA256 = "1a5b46495ecc500ab07fc5f7a097a172aa1eabbd8b25e0c93736e33811c38102"
# Original retail x86 opcodes at virtual addresses (not Ghidra pseudo-C).
SIGNATURES = {
    0x000A1991: "8b5c2408",       # preserve original argument in EBX
    0x000A19B1: "897c2414",       # zero incoming ESP+4 argument slot
    0x000A19C6: "8b442410",       # read same slot
    0x000A19D4: "897c2410",       # zero slot after optional release
    0x000A19DA: "8d4c2410",       # take address of slot
    0x000A19DE: "516a0056ff5030", # pass &slot to vtable+0x30
    0x000A19E5: "8b7c2410",       # read replacement reference
    0x000A19F2: "50ff5208",       # release old field reference
    0x000A19FA: "c7430c00000000", # transient clear before replacement store
    0x000A1A03: "897b0c",         # assign replacement to field +0xc
    0x000A1A0A: "57ff5004",       # addref replacement
    0x000A1A18: "56ff5108",       # release service reference
    0x000A1A27: "57ff5208",       # release temporary reference
    0x000A1A2F: "c20400",         # ret 4
}
REQUIRED = (
    "int *replacement_ref;",
    "replacement_ref = (int *)0x0;",
    "(**(code **)(*piVar3 + 0x30))(piVar3,0,&replacement_ref);",
    "*(undefined4 *)(param_1 + 0xc) = 0;",
    "*(int **)(param_1 + 0xc) = replacement_ref;",
    "(**(code **)(*replacement_ref + 4))(replacement_ref);",
    "(**(code **)(*replacement_ref + 8))(replacement_ref);",
    "(**(code **)(*piVar3 + 8))(piVar3);",
)

def verify_source(source: str) -> None:
    for fragment in REQUIRED:
        if fragment not in source:
            raise ValueError(f"missing source contract: {fragment}")
    for placeholder in ("&stack0x00000000", "unaff_retaddr"):
        if placeholder in source:
            raise ValueError(f"unresolved source placeholder: {placeholder}")
    if source.count("(**(code **)(*replacement_ref + 8))(replacement_ref);") != 2:
        raise ValueError("two distinct temporary-reference release sites required")
    ordered = (
        "replacement_ref = (int *)0x0;",
        "piVar3 = (int *)FUN_000a7770",
        "(**(code **)(*piVar3 + 0x30))(piVar3,0,&replacement_ref);",
        "piVar1 = *(int **)(param_1 + 0xc);",
        "*(undefined4 *)(param_1 + 0xc) = 0;",
        "*(int **)(param_1 + 0xc) = replacement_ref;",
        "(**(code **)(*replacement_ref + 4))(replacement_ref);",
        "(**(code **)(*piVar3 + 8))(piVar3);",
    )
    positions = [source.find(fragment) for fragment in ordered]
    if positions != sorted(positions):
        raise ValueError("reference ownership operation order changed")
    if BODY_SHA256.upper() not in source:
        raise ValueError("original x86 body provenance label missing")

def verify_xbe(xbe: bytes) -> None:
    if hashlib.sha256(xbe).hexdigest() != XBE_SHA256:
        raise ValueError("original XBE SHA-256 mismatch")
    if xbe[:4] != b"XBEH":
        raise ValueError("invalid XBE header")
    base = int.from_bytes(xbe[0x104:0x108], "little")
    section_va = int.from_bytes(xbe[0x120:0x124], "little")
    section_count = int.from_bytes(xbe[0x11c:0x120], "little")
    sections = []
    for i in range(section_count):
        off = section_va - base + i * 0x38
        va = int.from_bytes(xbe[off+4:off+8], "little")
        vsize = int.from_bytes(xbe[off+8:off+12], "little")
        raw = int.from_bytes(xbe[off+12:off+16], "little")
        rsize = int.from_bytes(xbe[off+16:off+20], "little")
        sections.append((va, vsize, raw, rsize))
    def at(va: int, size: int) -> bytes:
        for start, vsize, raw, rsize in sections:
            if start <= va and va + size <= start + min(vsize, rsize):
                return xbe[raw+va-start:raw+va-start+size]
        raise ValueError(f"VA {va:#x} is not mapped in original raw XBE")
    if hashlib.sha256(at(ENTRY, END-ENTRY)).hexdigest() != BODY_SHA256:
        raise ValueError("original function body hash mismatch")
    for va, opcode in SIGNATURES.items():
        if at(va, len(bytes.fromhex(opcode))) != bytes.fromhex(opcode):
            raise ValueError(f"original instruction bytes mismatch at {va:#x}")

def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe", type=Path, help="local original retail XBE, never commit")
    args = ap.parse_args()
    root = args.root.resolve()
    source_path = root/"src/main_unclassified/band_000a/0x000a1990.c"
    source = source_path.read_text(encoding="utf-8")
    verify_source(source)
    # Negative controls: missing out-argument address or lost field store must fail.
    for bad in (
        source.replace("&replacement_ref);", "replacement_ref);", 1),
        source.replace("*(int **)(param_1 + 0xc) = replacement_ref;",
                       "*(int **)(param_1 + 0xc) = (int *)0;", 1),
    ):
        try:
            verify_source(bad)
        except ValueError:
            pass
        else:
            raise SystemExit("source mutation unexpectedly passed")
    clang = shutil.which("clang")
    if not clang:
        raise SystemExit("clang is required")
    flags = ["-std=c11", "-fsyntax-only", "-ferror-limit=3",
             "-Wno-implicit-function-declaration", "-Wno-int-conversion",
             "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
             "-Wno-int-to-pointer-cast", "-Wno-return-type",
             "-Wno-deprecated-non-prototype"]
    subprocess.run([clang, *flags, "-I", str(root/"include"), str(source_path)], check=True)
    if args.xbe:
        verify_xbe(args.xbe.read_bytes())
        print("0x000a1990: 14 XBE instruction signatures, body hash, source and C11 PASS")
    else:
        print("0x000a1990: source-only contracts and C11 PASS (XBE not present in CI)")

if __name__ == "__main__":
    main()
