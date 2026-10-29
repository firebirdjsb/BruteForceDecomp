#!/usr/bin/env python3
"""Read-only original-XBE verification of Xbox x86 stack probe and callers.

This tool never copies copyrighted executable data into the repository.
"""
import argparse
import hashlib
from pathlib import Path

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
PROBE_SHA = "b77ad187f6f3db2a5ae4f8e214b023d7c62ce25a38ce769a993d2a8c81643760"
BODY_LEN = 0x41
OPCODES = {
    0x002EBEA0: "85c07414",           # TEST EAX,EAX / JE RET
    0x002EBEA4: "3d00100000730e",     # CMP EAX,0x1000 / JAE large
    0x002EBEAB: "f7d803c483c0048500", # -size+entry ESP+4, TEST
    0x002EBEB4: "948b0050c3",         # swap ESP,EAX / restore ret / RET
    0x002EBEB9: "518d4c2408",         # PUSH ECX / ECX = original ESP+4
    0x002EBEBE: "81e9001000002d001000008501", # 4 KiB page walk
    0x002EBECB: "3d0010000073ec",     # looping branch
    0x002EBED2: "2bc88bc485018be1",  # final TEST and MOV ESP,ECX
    0x002EBEDA: "8b088b400450c3",     # restore ECX and return
    0x001F3AA6: "b8a8200000e8f0830f00", # allocation 0x20A8
    0x00269606: "b8b4140000e890280800", # allocation 0x14B4
    0x001F3B4A: "8d8424b0000000b900010000c7000000000083c0204975f4", # 256 sparse DWORD writes
    0x001F3B18: "5051",           # two temporary args to 002B7970
    0x001F3B2C: "e83f3e0c00",   # CALL 002B7970
    0x002B7AED: "c20800",       # callee RET 8
    0x001F3B45: "e816520c00",   # CALL 002B8D60
    0x002B8DD9: "c3",           # callee plain RET
}

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("xbe", type=Path)
    args = parser.parse_args()
    xbe = args.xbe.read_bytes()
    if hashlib.sha256(xbe).hexdigest() != XBE_SHA:
        parser.error("Original XBE identity mismatch")
    # Source section 0 maps guest 0x00012000 to file offset 0x2000.
    def read(va: int, n: int) -> bytes:
        off = va - 0x10000
        if off < 0 or off+n > len(xbe):
            raise ValueError(f"Unmapped guest VA 0x{va:08X}")
        return xbe[off:off+n]
    if hashlib.sha256(read(0x002ebea0, BODY_LEN)).hexdigest() != PROBE_SHA:
        raise ValueError("Original 0x002EBEA0 routine changed")
    for va, opcodes in OPCODES.items():
        expected = bytes.fromhex(opcodes)
        if read(va, len(expected)) != expected:
            raise ValueError(f"Instruction mismatch at 0x{va:08X}")
    print("PASS authenticated original 0x002EBEA0 65-byte probe body")
    print(f"PASS {len(OPCODES)} instruction windows, including 001F3AA0 and 00269600 caller sizes")
    print("Guest EFLAGS/ESP and return address identity modeled; complete caller ABI remains unverified")

if __name__ == "__main__":
    main()
