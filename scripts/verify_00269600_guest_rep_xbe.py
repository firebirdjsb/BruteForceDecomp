#!/usr/bin/env python3
"""Check original Brute Force guest REP loops using private authenticated XBE.

Does not include original game binary in repository or CI.
"""
import argparse
import hashlib
from pathlib import Path

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
OPCODES = {
    0x00269600: "558bec83e4f8b8b4140000e890280800",
    0x00269613: "8b9314050000",
    0x0026961B: "8bca",
    0x0026961D: "894c2458",
    0x00269621: "33c0",
    0x00269623: "8d7c2410",
    0x00269627: "f3ab",
    0x00269629: "b946010000",
    0x0026962E: "8bf3",
    0x00269630: "8dbc2478050000",
    0x0026963C: "f3a5",
    0x002696E0: "8bf0",
    0x002696E2: "8b4508",
    0x002696E5: "83c414",
    0x002696E8: "b946010000",
    0x002696ED: "8bf8",
    0x002696EF: "f3a5",
}
def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("xbe",type=Path)
    a=p.parse_args()
    b=a.xbe.read_bytes()
    if hashlib.sha256(b).hexdigest()!=XBE_SHA:
        p.error("Pinned original game XBE digest mismatch")
    for address,op in OPCODES.items():
        expected=bytes.fromhex(op)
        off=address-0x10000
        if b[off:off+len(expected)]!=expected:
            raise ValueError(f"Original instruction mismatch at 0x{address:08X}")
    print(f"PASS XBE digest and {len(OPCODES)} original 00269600 REP instruction spans")
    print("Caller receiver ECX, DF bit, memory map and callee outputs remain explicit.")
if __name__=="__main__": main()
