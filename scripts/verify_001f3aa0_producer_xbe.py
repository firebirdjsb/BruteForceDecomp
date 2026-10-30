#!/usr/bin/env python3
"""Read-only XBE verification of 001F3AA0 x87 producer and two callees."""
import argparse
import hashlib
from pathlib import Path

XBE_SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
FUNCTIONS=(
    (0x001f3aa0,0x12d,"2799e1de683050265d1fd694276a459a7f7f777c1c6e6fb1f19635691ce6c948"),
)
OPCODES={
    0x001f3ae5:"d94004",
    0x001f3ae8:"d805784f3a00",
    0x001f3afe:"d95c241c",
    0x001f3b06:"d94004",
    0x001f3b11:"d86008",
    0x001f3b18:"50",
    0x001f3b19:"51",
    0x001f3b1a:"d805784f3a00",
    0x001f3b20:"c744244400000000",
    0x001f3b28:"d95c2440",
    0x001f3b2c:"e83f3e0c00",
    0x002b7aed:"c20800",
    0x001f3b31:"b808000000",
    0x001f3b36:"8db42490000000",
    0x001f3b3d:"c7442440c8ef3900",
    0x001f3b45:"e816520c00",
    0x002b8dd9:"c3",
}
def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("xbe",type=Path)
    x=p.parse_args().xbe.read_bytes()
    if hashlib.sha256(x).hexdigest()!=XBE_SHA:
        p.error("Pinned original XBE digest mismatch")
    def original(va,length):
        start=va-0x10000
        if start<0 or start+length>len(x):
            raise ValueError(f"Out of range original VA {va:08x}")
        return x[start:start+length]
    for addr,n,digest in FUNCTIONS:
        if hashlib.sha256(original(addr,n)).hexdigest()!=digest:
            raise ValueError(f"Original body mismatch {addr:08x}")
    for addr,hexstr in OPCODES.items():
        b=bytes.fromhex(hexstr)
        if original(addr,len(b))!=b:
            raise ValueError(f"Original instruction mismatch {addr:08x}")
    print(f"PASS pinned original Xbox body and {len(OPCODES)} x87/callee opcode sites")
    print("Callee data effects, XMM/x87 precision and Xbox SEH are not asserted.")
if __name__=="__main__":
    main()
