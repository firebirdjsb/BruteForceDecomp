#!/usr/bin/env python3
"""Verify original Xbox formatter-wrapper instruction evidence (not ABI correctness).

Run with private original XBE: python scripts/verify_002eaa86_formatter_contract.py /path/to/default.xbe
Never add the copyrighted binary to Git.
"""
from __future__ import annotations

import argparse
import hashlib
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_SHA256 = "a3af5b889aaeddff70dfc7be5796fd4586fc4832b162617acd8666392181e1c1"
ENTRY = 0x002EAA86
BODY_SIZE = 88
IMAGE_BASE_DELTA = 0x10000  # This authenticated XBE's observed VA-to-file mapping.
WINDOWS = {
    0x002EAA86: "55 8b ec 83 ec 20",     # stack frame, 32-byte allocation
    0x002EAA8C: "56 8b 75 08 57",        # saves; first argument from [EBP+8]
    0x002EAA91: "8d 45 10 50",           # address of incoming word [EBP+0x10]
    0x002EAA95: "ff 75 0c",              # second incoming argument
    0x002EAA98: "8d 45 e0 50",           # address of local stream state
    0x002EAAB0: "e8 29 31 00 00",       # near call to formatter
    0x002EAAB5: "83 c4 0c",              # caller removes three argument words
    0x002EAAD8: "8b c7 5f 5e c9 c3",    # EAX from EDI; plain RET
}

def verify(xbe: bytes) -> None:
    if hashlib.sha256(xbe).hexdigest() != XBE_SHA256:
        raise ValueError("Original XBE SHA-256 mismatch")
    offset = ENTRY - IMAGE_BASE_DELTA
    body = xbe[offset:offset + BODY_SIZE]
    if len(body) != BODY_SIZE or hashlib.sha256(body).hexdigest() != BODY_SHA256:
        raise ValueError("Original 88-byte function-body SHA-256 mismatch")
    for va, encoding in WINDOWS.items():
        expected = bytes.fromhex(encoding)
        actual = xbe[va - IMAGE_BASE_DELTA:va - IMAGE_BASE_DELTA + len(expected)]
        if actual != expected:
            raise ValueError(f"Original x86 instruction mismatch at 0x{va:08X}")
    call_va = 0x002EAAB0
    position = call_va - IMAGE_BASE_DELTA + 1
    displacement = int.from_bytes(xbe[position:position + 4], "little", signed=True)
    if call_va + 5 + displacement != 0x002EDBDE:
        raise ValueError("Original direct call does not target formatter 0x002EDBDE")

def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("xbe", type=Path, help="Private original Xbox executable")
    args = parser.parse_args()
    verify(args.xbe.read_bytes())
    print("PASS: XBE, original function-body SHA, eight opcode windows and call target.")
    print("UNRESOLVED: host representation of 32-bit incoming variadic words, ABI and runtime.")

if __name__ == "__main__":
    main()
