#!/usr/bin/env python3
"""Verify the original x86 caller-frame output contract at 0x00063650.

Usage: python tools/verify_stack_output_63650.py /path/to/default.xbe
No copyrighted binary is stored in the repository.
"""
import hashlib
import sys
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
ENTRY = 0x00063650
# First XBE section: VA 0x12000 maps to raw file offset 0x2000.
def file_offset(va):
    if not 0x12000 <= va < 0x31f8b0:
        raise ValueError("address outside verified first XBE section")
    return va - 0x10000

# The instructions are checked in sequence, without inventing a host C ABI.
SITES = (
    (0x63650, "56", "PUSH ESI"),
    (0x6368e, "8b06", "MOV EAX,[ESI]"),
    (0x63690, "6a0456ff5034", "PUSH 4; PUSH ESI; CALL [EAX+0x34]"),
    (0x63696, "8b0e", "MOV ECX,[ESI]"),
    (0x63698, "8d542408", "LEA EDX,[ESP+8]"),
    (0x6369c, "526a0056ff5114", "PUSH EDX; PUSH 0; PUSH ESI; CALL [ECX+0x14]"),
    (0x636a3, "8b44240c", "MOV EAX,[ESP+0x0c]"),
    (0x636a7, "8930", "MOV [EAX],ESI"),
    (0x636a9, "5ec3", "POP ESI; RET"),
)

def main():
    if len(sys.argv) != 2:
        raise SystemExit("usage: verify_stack_output_63650.py default.xbe")
    xbe = Path(sys.argv[1]).read_bytes()
    actual_hash = hashlib.sha256(xbe).hexdigest()
    if actual_hash != XBE_SHA256:
        raise SystemExit(f"XBE hash mismatch: {actual_hash}")
    for va, hexbytes, description in SITES:
        expected = bytes.fromhex(hexbytes)
        actual = xbe[file_offset(va):file_offset(va) + len(expected)]
        if actual != expected:
            raise SystemExit(f"FAIL {va:#010x} {description}: {actual.hex()} != {hexbytes}")
        print(f"PASS {va:#010x}: {description}")
    print("PASS: original guest stack and indirect-call instruction evidence")
    print("NOT VERIFIED: indirect callee ABI, guest/host memory translation, C11 syntax")

if __name__ == "__main__":
    main()
