#!/usr/bin/env python3
"""Evidence-limited guest DWORD address checks. XBE stays local; no host ABI claim."""
import argparse
import hashlib
from pathlib import Path
import re
import shutil
import struct
import subprocess

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
FLAGS = (
    "-std=c11", "-fsyntax-only", "-ferror-limit=4",
    "-Wno-implicit-function-declaration", "-Wno-int-conversion",
    "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
    "-Wno-int-to-pointer-cast", "-Wno-return-type",
    "-Wno-deprecated-non-prototype",
)
# Entry, end-exclusive, original body hash, instruction bytes, E8 call destinations,
# source invariants. All three retain unverified original register ABI contracts.
CHECKS = (
    (0x00122900, 0x0012293D,
     "E0827CBAD16EBFCE2E888572839B5933FC337D20CCC9AF37BEB06E68F91F1C36",
     ((0x00122900, "535657"), (0x00122914, "8d442410"),
      (0x00122918, "50"), (0x0012293A, "c20400")),
     ((0x0012291C, 0x000FF730),),
     ("void FUN_00122900(undefined4 guest_incoming_word)",
      "FUN_000ff730(in_EAX + 0x558,iVar1,*(undefined4 *)(iVar1 + 4),&guest_incoming_word);"),
     "&stack0x00000004"),
    (0x002864F0, 0x00286525,
     "D2240C44D169A02A2B3A50C4FED769EE9EDC56F6CAB66A588D9481836C707F24",
     ((0x002864F0, "535657"), (0x002864FC, "8d442410"),
      (0x00286500, "50"), (0x00286522, "c20400")),
     ((0x00286504, 0x000FF730),),
     ("void FUN_002864f0(undefined4 guest_incoming_word)",
      "FUN_000ff730(in_ECX + 0x10,iVar1,*(undefined4 *)(iVar1 + 4),&guest_incoming_word);"),
     "&stack0x00000004"),
    (0x002B55C0, 0x002B55EB,
     "423FF3DD83B013290E0AC8CBBE860510B2535C35AEFAB5FF9B12E8B6FCCF9CD2",
     ((0x002B55C0, "558bec"), (0x002B55CD, "897dfc"),
      (0x002B55DD, "8d45fc"), (0x002B55E0, "50ff12")),
     (),
     ("undefined4 guest_edi_word = (undefined4)unaff_EDI;", "(&guest_edi_word);"),
     "&stack0xfffffff8"),
)
CALLEE_BYTES = (
    (0x000FF777, "8b4d14"), (0x000FF77A, "8b11"),
    (0x000FF77C, "895008"), (0x000FF796, "c21000"),
)

def guest_bytes(data: bytes, va: int, count: int) -> bytes:
    off = va - 0x10000
    if off < 0 or off + count > len(data):
        raise ValueError(f"XBE address out of range: {va:#x}")
    return data[off:off + count]

def verify_xbe(data: bytes) -> None:
    if hashlib.sha256(data).hexdigest() != XBE_SHA256:
        raise ValueError("original Xbox XBE identity mismatch")
    for entry, end, digest, opcodes, calls, _, _ in CHECKS:
        actual = hashlib.sha256(guest_bytes(data, entry, end - entry)).hexdigest().upper()
        if actual != digest:
            raise ValueError(f"{entry:#x}: original body hash mismatch")
        for va, hex_bytes in opcodes:
            b = bytes.fromhex(hex_bytes)
            if guest_bytes(data, va, len(b)) != b:
                raise ValueError(f"{entry:#x}: opcode mismatch at {va:#x}")
        for va, target in calls:
            b = guest_bytes(data, va, 5)
            if b[0] != 0xE8 or va + 5 + struct.unpack("<i", b[1:])[0] != target:
                raise ValueError(f"{entry:#x}: call target mismatch at {va:#x}")
    for va, hex_bytes in CALLEE_BYTES:
        b = bytes.fromhex(hex_bytes)
        if guest_bytes(data, va, len(b)) != b:
            raise ValueError(f"callee DWORD-copy instruction mismatch at {va:#x}")
    print("PASS: three original body hashes, 12 instruction signatures, two direct calls, four callee checks")

def verify_source(root: Path, clang: str) -> None:
    for entry, _, digest, _, _, required, forbidden in CHECKS:
        path = root / "src" / "main_unclassified" / f"band_{entry >> 16:04x}" / f"0x{entry:08x}.c"
        source = path.read_text(encoding="utf-8")
        if f"Input x86 body SHA-256: {digest}" not in source or f"Entry: 0x{entry:08x}," not in source:
            raise ValueError(f"{entry:#x}: original function provenance changed")
        if "ABI_UNVERIFIED" not in source:
            raise ValueError(f"{entry:#x}: missing ABI limitation")
        code = re.sub(r"/\*.*?\*/|//[^\n]*", "", source, flags=re.S)
        for token in required:
            if token not in code:
                raise ValueError(f"{entry:#x}: missing C11 storage contract: {token}")
        if forbidden in code:
            raise ValueError(f"{entry:#x}: unresolved Ghidra guest stack token")
        run = subprocess.run(
            (clang, *FLAGS, "-I", str(root / "include"), str(path)),
            capture_output=True, text=True, check=False, timeout=45,
        )
        if run.returncode:
            raise ValueError(f"{entry:#x}: focused C11 syntax failure:\n{run.stderr[-1800:]}")
        print(f"PASS 0x{entry:08x}: C11 storage and syntax; ABI unverified")

def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path, help="User-owned XBE; never commit")
    args = parser.parse_args()
    clang = shutil.which("clang")
    if not clang:
        parser.error("Clang is required")
    verify_source(args.root.resolve(), clang)
    if args.xbe:
        verify_xbe(args.xbe.read_bytes())
    else:
        print("XBE unavailable in CI: source-only verification; no instruction claim")
    print("Guest32 memory translation, implicit register ABIs and runtime equivalence remain unverified")

if __name__ == "__main__":
    main()
