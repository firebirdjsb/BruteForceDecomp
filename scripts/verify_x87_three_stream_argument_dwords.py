#!/usr/bin/env python3
"""Verify x87 second-stack-argument recovery in three serialization methods.

The original x86 instructions prove a separate float32 argument is loaded
from the second incoming stack DWORD after register saves.  Do not cast
the object pointer to float or substitute a guessed host pointer.

No XBE supplied: CI enforces only source invariants. --xbe checks the
private pinned original machine code as well.
"""
import argparse
import hashlib
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
OPCODES = (
    (0x002A6704, "8b6c2410"), # saved object (first stack argument)
    (0x002A6713, "d944241c"), # fld float32 second argument
    (0x002A6724, "6a10"),     # push allocation size=0x10
    (0x002A6753, "8b4c241c"), # forward second argument bits
    (0x002A677F, "d944241c"), # repeated float32 compare
    (0x002A83A5, "8b6c2414"), # saved first object argument
    (0x002A83B4, "d9442420"), # fld second float32 argument
    (0x002A83C5, "6a28"),     # allocation size=0x28
    (0x002A83F8, "8b4c2420"), # forward scalar bits
    (0x002A8424, "d9442420"), # repeated scalar compare
    (0x002A84F5, "8b6c2414"), # saved first object argument
    (0x002A8504, "d9442420"), # fld second float32 argument
    (0x002A8515, "6a28"),     # allocation size=0x28
    (0x002A8548, "8b4c2420"), # forward scalar bits
    (0x002A8574, "d9442420"), # repeated scalar compare
)
SOURCES = (
    ("0x002a6700", "FUN_002a6520", "0x10"),
    ("0x002a83a0", "FUN_002a82a0", "0x28"),
    ("0x002a84f0", "FUN_002a8320", "0x28"),
)
def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--repo", type=Path, default=Path("."))
    parser.add_argument("--xbe", type=Path)
    a = parser.parse_args()
    for entry, callee, alloc_size in SOURCES:
        rel = f"src/main_unclassified/band_002a/{entry}.c"
        source = (a.repo / rel).read_text(encoding="utf-8")
        tokens = (
            f"void FUN_{entry[2:]}(int *param_1,float guest_stack_scalar)",
            "if (guest_stack_scalar == 1.0f)",
            "else if (1.1f <= guest_stack_scalar)",
            f"FUN_002ea01d({alloc_size})",
            f"{callee}(guest_stack_scalar)",
        )
        for token in tokens:
            if token not in source:
                raise SystemExit(f"{entry}: missing source invariant: {token}")
        if "(float)param_1" in source:
            raise SystemExit(f"{entry}: erroneous pointer-to-float conversion remains")
    if a.xbe is None:
        print("PASS: 3 source-only x87 stack argument contracts; XBE not checked")
        return
    xbe = a.xbe.read_bytes()
    if hashlib.sha256(xbe).hexdigest() != XBE_SHA256:
        raise SystemExit("XBE digest mismatch")
    for address, encoding in OPCODES:
        expected = bytes.fromhex(encoding)
        if xbe[address-0x10000:address-0x10000+len(expected)] != expected:
            raise SystemExit(f"x86 opcode mismatch: 0x{address:08x}")
    print(f"PASS: {len(OPCODES)} x86 instruction signatures and 3 source contracts")
    print("Virtual method ABI and full function behavior not yet verified")

if __name__ == "__main__":
    main()
