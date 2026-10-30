#!/usr/bin/env python3
"""Verify observed caller-slot DWORD at 0x00090630; not an ABI proof."""
import argparse
import hashlib
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE = Path("src/main_unclassified/band_0009/0x00090630.cpp")
REQUIRED = (
    "uint32_t guest_constant_word; /* Reused original guest caller-argument slot. */",
    "guest_constant_word = UINT32_C(0x1d3e389e);",
    "&guest_constant_word,*(undefined4 *)(iVar3 + 0x14)",
    "TODO: lifetime/aliasing of this guest stack slot",
)
X86 = (
    (0x0009071D, "bd9e383e1d"),   # MOV EBP,0x1D3E389E
    (0x0009072E, "51"),           # PUSH ECX, fourth argument
    (0x0009072F, "8d4c2418"),     # LEA ECX,[ESP+0x18], original parameter slot
    (0x00090733, "51"),           # PUSH ECX, third argument
    (0x00090734, "50"),           # PUSH EAX, second argument
    (0x00090735, "57"),           # PUSH EDI, first argument
    (0x00090736, "896c2424"),     # MOV [ESP+0x24],EBP, same parameter slot
    (0x0009073A, "ff5270"),       # CALL [EDX+0x70]
    (0x00090746, "c20400"),       # RET 4, original caller stack contract
)


def main() -> None:
    p = argparse.ArgumentParser()
    p.add_argument("--root", type=Path, default=Path("."))
    p.add_argument("--xbe", type=Path)
    a = p.parse_args()
    source = (a.root / SOURCE).read_text(encoding="utf-8")
    for token in REQUIRED:
        if token not in source:
            raise SystemExit("Missing guest caller-slot invariant: " + token)
    if "&stack0xfffffff4" in source:
        raise SystemExit("Regressed unresolved guest stack address")
    if a.xbe:
        data = a.xbe.read_bytes()
        if hashlib.sha256(data).hexdigest() != XBE_SHA256:
            raise SystemExit("Original Brute Force XBE SHA-256 mismatch")
        for address, hex_bytes in X86:
            expected = bytes.fromhex(hex_bytes)
            if data[address - 0x10000:address - 0x10000 + len(expected)] != expected:
                raise SystemExit(f"Original x86 opcode mismatch at {address:#010x}")
    print("PASS: 0x00090630 guest DWORD source" +
          (" and nine original instruction fingerprints" if a.xbe else " (XBE not checked)"))
    print("NOTE: guest stack aliasing and indirect virtual-call ABI unverified")


if __name__ == "__main__":
    main()
