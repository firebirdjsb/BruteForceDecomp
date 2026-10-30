#!/usr/bin/env python3
"""Verify original Xbox 001F3AA0 tail, conditional callees and 002B8DE0.

Run against the user's private original XBE. The Xbox game executable
must never be committed to this repository. Opcode evidence alone does
not certify original x87, SEH, allocator or full runtime behavior.
"""
import argparse
import hashlib
from pathlib import Path

ORIGINAL_XBE = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODIES = {
    (0x001f3aa0,0x12d): "2799e1de683050265d1fd694276a459a7f7f777c1c6e6fb1f19635691ce6c948",
    (0x001f35b0,0x157): "3e7d18910aab35a23ed5e3edc448ae54a4b9c87ee9dba44a74cfb5f02a706fad",
    (0x002b8c60,0x4a): "45044552c47c60822ffc7fb5b55ef43725b60a3ea810014aeb8184c35affc9ba",
    (0x002b8de0,0x6b): "3c4f05dfa1620b34b71f2d0b2509ecf872c03d2f5ea10c6ad9afc4faaf6838cb",
}
WINDOWS = {
    0x001f3b62:"8b4708",0x001f3b67:"750c",0x001f3b69:"680000803f",
    0x001f3b6e:"8bf7",0x001f3b70:"e83bfaffff",0x001f3b75:"8b4708",
    0x001f3b7a:"7409",0x001f3b7c:"8d742440",0x001f3b80:"e8db500c00",
    0x001f3b85:"8b942494000000",0x001f3b8c:"8b4204",
    0x001f3b93:"8b400c",0x001f3b9a:"8b4f38",0x001f3b9d:"d94104",
    0x001f3ba0:"d805784f3a00",0x001f3ba6:"d8601c",0x001f3ba9:"d95c2414",
    0x001f3bad:"8dbc2490000000",0x001f3bb4:"c7442440c8ef3900",
    0x001f3bbc:"e81f520c00",0x001f3bc1:"d9442414",
    0x001f3bc5:"5f",0x001f3bc6:"5e",0x001f3bc7:"8be5",
    0x001f3bc9:"5d",0x001f3bca:"c20800",
    0x001f3704:"c20400",0x002b8ca9:"c3",
    0x002b8de0:"8b07",0x002b8de2:"53",0x002b8de9:"56",
    0x002b8df0:"8b470c",0x002b8df3:"8b0498",0x002b8e00:"8b30",
    0x002b8e03:"e810120300",0x002b8e08:"83c404",0x002b8e11:"8b07",
    0x002b8e18:"5e",0x002b8e19:"8b470c",0x002b8e1e:"5b",
    0x002b8e22:"ff1554c63b00",0x002b8e28:"83c404",
    0x002b8e2b:"c7470c00000000",0x002b8e32:"8b4704",
    0x002b8e3a:"ff1554c63b00",0x002b8e40:"83c404",
    0x002b8e43:"c7470400000000",0x002b8e4a:"c3",
}
def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("xbe",type=Path)
    image=p.parse_args().xbe.read_bytes()
    if hashlib.sha256(image).hexdigest()!=ORIGINAL_XBE:
        p.error("Authenticated original XBE digest mismatch")
    def original(va,n):
        off=va-0x10000
        if off<0 or off+n>len(image):
            raise ValueError(f"Unmapped original code VA 0x{va:08x}")
        return image[off:off+n]
    for (va,length),digest in BODIES.items():
        if hashlib.sha256(original(va,length)).hexdigest()!=digest:
            raise ValueError(f"Original Xbox function-body mismatch 0x{va:08x}")
    for va,pattern in WINDOWS.items():
        expected=bytes.fromhex(pattern)
        if original(va,len(expected))!=expected:
            raise ValueError(f"Original Xbox opcode mismatch 0x{va:08x}")
    print(f"PASS {len(BODIES)} original function bodies, {len(WINDOWS)} opcode windows")
    print("Original RET 4, plain RET, plain RET and final RET 8 authenticated.")
    print("Xbox FPU, allocator/free, guest SEH and full caller parity not implied.")
if __name__=="__main__":
    main()
