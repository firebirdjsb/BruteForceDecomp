#!/usr/bin/env python3
"""Read-only verification of complete 0x002B7970 and caller 0x001F3B2C.

Requires the user's private original Xbox XBE, which is never stored in
source control. Instruction presence does not imply full hardware
floating-point/exception equivalence.
"""
import argparse
import hashlib
from pathlib import Path

ORIGINAL_XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
FUNCTION_002B7970_SHA256 = "0c66011a1ef28b7d259dc354572bad0594545ba5b2d1a1b9006420e2753d3d72"
ORIGINAL_WINDOWS = {
    0x001F3B18: "50",
    0x001F3B19: "51",
    0x001F3B2C: "e83f3e0c00",  # CALL 0x002B7970
    0x001F3B31: "b808000000",  # next original instruction
    0x002B7970: "83ec10",      # SUB ESP,0x10
    0x002B7A2D: "8b442414",    # MOV EAX,[ESP+0x14]
    0x002B7A31: "d94004",      # FLD m32fp [EAX+4]
    0x002B7A37: "d80d744f3a00", # FMUL m32fp [0x003A4F74]
    0x002B7A48: "d95c240c",    # FSTP m32fp [ESP+0xC]
    0x002B7A50: "f30f105c240c", # MOVSS XMM3,[ESP+0xC]
    0x002B7A5A: "f30f1010",    # MOVSS XMM2,[EAX]
    0x002B7A5E: "0f165004",    # MOVHPS XMM2,[EAX+4]
    0x002B7A62: "0fc6db00",    # SHUFPS XMM3,XMM3,0
    0x002B7A6A: "f30f1008",    # MOVSS XMM1,[EAX]
    0x002B7A6E: "0f164804",    # MOVHPS XMM1,[EAX+4]
    0x002B7A72: "0f59d3",      # MULPS XMM2,XMM3
    0x002B7A75: "0f58ca",      # ADDPS XMM1,XMM2
    0x002B7A7C: "f30f1108",    # MOVSS [EAX],XMM1
    0x002B7A80: "0f174804",    # MOVHPS [EAX+4],XMM1
    0x002B7AA4: "f30f105c2400",
    0x002B7AAE: "f30f1010",
    0x002B7AB2: "0f165004",
    0x002B7AB6: "0fc6db00",
    0x002B7ABE: "f30f1008",
    0x002B7AC2: "0f164804",
    0x002B7AC6: "0f59d3",
    0x002B7AC9: "0f58ca",
    0x002B7AD0: "f30f1108",
    0x002B7AD4: "0f174804",
    0x002B7ADC: "89482c",
    0x002B7AE3: "894a0c",
    0x002B7AEA: "83c410",      # ADD ESP,0x10
    0x002B7AED: "c20800",      # RET 8
}
def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("xbe", type=Path)
    image = parser.parse_args().xbe.read_bytes()
    if hashlib.sha256(image).hexdigest() != ORIGINAL_XBE_SHA256:
        parser.error("Original Brute Force XBE SHA-256 mismatch")
    def original(va, n):
        # Authenticated original XBE .text maps VA -> file offset VA-0x10000.
        start = va - 0x10000
        if start < 0 or start+n > len(image):
            raise ValueError(f"Unmapped original guest VA: 0x{va:08x}")
        return image[start:start+n]
    body = original(0x002B7970, 0x180)
    if hashlib.sha256(body).hexdigest() != FUNCTION_002B7970_SHA256:
        raise ValueError("Original 0x002B7970 384-byte body changed")
    for va, opcode in ORIGINAL_WINDOWS.items():
        expected = bytes.fromhex(opcode)
        if original(va, len(expected)) != expected:
            raise ValueError(f"Original opcode contract mismatch: 0x{va:08x}")
    print(f"PASS authenticated original XBE and {len(ORIGINAL_WINDOWS)} opcode windows")
    print("PASS full 0x002B7970 body SHA-256 including RET 8")
    print("Xbox MXCSR/x87 status, host ABI, and exception restart not implied.")

if __name__ == "__main__":
    main()
