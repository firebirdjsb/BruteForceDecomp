#!/usr/bin/env python3
"""Authenticate Xbox 0x0026A810 instruction windows and caller 0x002696DB.

Requires the user's private original XBE on the command line.
Never stores or uploads executable bytes.
"""
import argparse
import hashlib
from pathlib import Path
SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY = "8b28ca66b84826c0bbce3323287a85c919ba60d41f1d3c3c87f2c517eedcbc81"
WINDOWS = {
    0x26a810: "81ec28050000",
    0x26a816: "8b942430050000",
    0x26a81d: "8b8a10050000",
    0x26a823: "85c95657",
    0x26a827: "8bbc243c050000",
    0x26a82e: "8b8710050000",
    0x26a834: "898c2428050000",
    0x26a83b: "8984242c050000",
    0x26a842: "0f8691000000",
    0x26a848: "8bb714050000",
    0x26a84f: "8d5c241c",
    0x26a853: "2bda",
    0x26a856: "8974241c",
    0x26a860: "894c2414",
    0x26a868: "8baa14050000",
    0x26a876: "c70300000000",
    0x26a87e: "d905884f3a00",
    0x26a890: "d902",
    0x26a895: "d849fc",
    0x26a89c: "dec1",
    0x26a8a0: "d91b",
    0x26a8a2: "8b4c2410",
    0x26a8ad: "894c2410",
    0x26a8d1: "894c2414",
    0x26a8d9: "8b842434050000",
    0x26a8e0: "b946010000",
    0x26a8e5: "8d742418",
    0x26a8eb: "f3a5",
    0x26a8ed: "5f",
    0x26a8ee: "5e",
    0x26a8ef: "81c428050000",
    0x26a8f5: "c3",
    0x2696c3: "8d942480050000",
    0x2696ca: "52",
    0x2696cb: "8d84249c0a0000",
    0x2696d2: "50",
    0x2696d3: "8d8c24b80f0000",
    0x2696da: "51",
    0x2696db: "e830110000",
    0x2696e0: "8bf0",
    0x2696e5: "83c414",
    0x2696e8: "b946010000",
    0x2696ed: "8bf8",
    0x2696ef: "f3a5",
}
def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument("xbe", type=Path)
    data=parser.parse_args().xbe.read_bytes()
    if hashlib.sha256(data).hexdigest()!=SHA:
        parser.error("Original XBE file hash differs")
    def code(va,length):
        start=va-0x10000
        if start<0 or start+length>len(data):
            raise ValueError(f"Original Xbox VA out of image: {va:08x}")
        return data[start:start+length]
    if hashlib.sha256(code(0x26a810,230)).hexdigest()!=BODY:
        raise ValueError("Original 0x0026A810 body hash differs")
    for va,encoded in WINDOWS.items():
        expect=bytes.fromhex(encoded)
        if code(va,len(expect))!=expect:
            raise ValueError(f"Original Xbox opcode mismatch at {va:08x}")
    print(f"PASS original 0x0026A810 body and {len(WINDOWS)} XBE instruction windows")
    print("Code identity only; memory, x87 and SEH behavioral parity require separate tests")
if __name__=="__main__":
    main()
