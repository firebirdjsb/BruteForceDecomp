#!/usr/bin/env python3
"""Authenticate 0x00269600 x87 decision loop and its three CALL/RET contracts.

Input must be the user's private original Xbox XBE; no executable bytes
are copied to the repository. Does not claim Xbox hardware FPU parity.
"""
import argparse
import hashlib
from pathlib import Path

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
FUNCTIONS = (
    (0x00269600, 0xfa, "d63f242d7a88b7197e71685503b5910015dd45667965943a7d55cb4e81a85727"),
    (0x001f3aa0, 0x12d, "2799e1de683050265d1fd694276a459a7f7f777c1c6e6fb1f19635691ce6c948"),
    (0x0026a780, 0x88, "2e3f69e58906705fb693da7ff568ed43f814ccf0bfeac043799486d1e7fed2fa"),
    (0x0026a810, 0xe6, "8b28ca66b84826c0bbce3323287a85c919ba60d41f1d3c3c87f2c517eedcbc81"),
)
WINDOWS = {
    0x00269637: "8d442460",
    0x0026963b: "50",
    0x0026963c: "f3a5",
    0x0026963e: "8d4c2414",
    0x00269642: "89942474050000",
    0x00269649: "89942478050000",
    0x00269650: "51",
    0x00269651: "8d942480050000",
    0x00269658: "52",
    0x00269659: "53",
    0x0026965a: "e811020000",
    0x0026965f: "8b550c",
    0x00269662: "c70200000000",
    0x00269668: "8b8314050000",
    0x00269674: "d9448c10",
    0x00269678: "dc1d00513a00",
    0x0026967e: "dfe0",
    0x00269680: "f6c405",
    0x00269683: "7a0a",
    0x00269685: "c7448c1000000000",
    0x0026968f: "d905784f3a00",
    0x00269695: "8b02",
    0x00269697: "d8748c10",
    0x0026969b: "40",
    0x0026969c: "8902",
    0x0026969e: "d95c8c10",
    0x002696a2: "8b8314050000",
    0x002696ad: "8d442460",
    0x002696b1: "50",
    0x002696b2: "8d8c24940a0000",
    0x002696b9: "51",
    0x002696ba: "8d5c2418",
    0x002696be: "e8bd100000",
    0x002696c3: "8d942480050000",
    0x002696ca: "52",
    0x002696cb: "8d84249c0a0000",
    0x002696d2: "50",
    0x002696d3: "8d8c24b80f0000",
    0x002696da: "51",
    0x002696db: "e830110000",
    0x002696e5: "83c414",
    0x002696ef: "f3a5",
    0x0026a778: "c21000",        # callee 00269870 RET 0x10
    0x0026a807: "c3",            # 0026A780 plain RET
    0x0026a8f5: "c3",            # 0026A810 plain RET
}
def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("xbe",type=Path)
    args=p.parse_args()
    data=args.xbe.read_bytes()
    if hashlib.sha256(data).hexdigest()!=XBE_SHA:
        p.error("Authenticated original XBE digest mismatch")
    def read(addr,size):
        off=addr-0x10000
        if off<0 or off+size>len(data):
            raise ValueError(f"Unmapped original code VA: {addr:08x}")
        return data[off:off+size]
    for addr,size,digest in FUNCTIONS:
        if hashlib.sha256(read(addr,size)).hexdigest()!=digest:
            raise ValueError(f"Original function-body mismatch: 0x{addr:08x}")
    for addr,hexbytes in WINDOWS.items():
        expected=bytes.fromhex(hexbytes)
        if read(addr,len(expected))!=expected:
            raise ValueError(f"Original instruction mismatch: 0x{addr:08x}")
    print(f"PASS {len(FUNCTIONS)} original XBE function bodies and {len(WINDOWS)} opcode windows")
    print("No virtual target, x87 backend, guest SEH or full caller correctness inferred.")
if __name__=="__main__":
    main()
