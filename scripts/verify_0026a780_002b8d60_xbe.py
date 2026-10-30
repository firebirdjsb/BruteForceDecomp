#!/usr/bin/env python3
"""Read-only original XBE verification of 26A780, 2B8D60, and callers.
No game executable bytes are stored in this repository.
"""
import argparse
import hashlib
from pathlib import Path

XBE_SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODIES=(
 (0x26a780,0x88,"2e3f69e58906705fb693da7ff568ed43f814ccf0bfeac043799486d1e7fed2fa"),
 (0x2b8d60,0x7a,"e10ff4f6c4d1b02768c5ea17a970b2c996d18356bc42c5fe5bb0756b77ebb76f"))
WINDOWS={
 0x26a780:"81ec1c050000",0x26a7c4:"d90493",0x26a7c8:"d80c0e",
 0x26a7d0:"d959fc",0x26a7d5:"8bb42430050000",0x26a7dc:"8b44240c",
 0x26a7f2:"b946010000",0x26a7fd:"f3a5",0x26a7ff:"5f5e81c41c050000c3",
 0x2b8d60:"8906",0x2b8d7f:"ff1550c63b00",0x2b8d92:"f3ab",
 0x2b8d99:"f3aa",0x2b8d9b:"8b3e",0x2b8da1:"89560c",
 0x2b8da4:"ff1550c63b00",0x2b8db7:"f3ab",0x2b8dbe:"f3aa",
 0x2b8dc0:"8b06",0x2b8dc2:"83c408",0x2b8dc9:"895604",
 0x2b8dcc:"894e08",0x2b8dcf:"c7461000000000",
 0x2b8dd6:"8bc65bc3",
 0x1f3b31:"b808000000",0x1f3b36:"8db42490000000",
 0x1f3b3d:"c7442440c8ef3900",0x1f3b45:"e816520c00",
 0x2696ad:"8d442460",0x2696b1:"50",0x2696b2:"8d8c24940a0000",
 0x2696b9:"51",0x2696ba:"8d5c2418",0x2696be:"e8bd100000"
}
def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("xbe",type=Path)
    b=p.parse_args().xbe.read_bytes()
    if hashlib.sha256(b).hexdigest()!=XBE_SHA:
        p.error("Original Xbox executable SHA-256 mismatch")
    def read(va,n):
        offset=va-0x10000
        if offset<0 or offset+n>len(b):
            raise ValueError(f"Invalid original guest VA {va:08x}")
        return b[offset:offset+n]
    for va,n,digest in BODIES:
        if hashlib.sha256(read(va,n)).hexdigest()!=digest:
            raise ValueError(f"Original function changed at {va:08x}")
    for va,encoded in WINDOWS.items():
        expected=bytes.fromhex(encoded)
        if read(va,len(expected))!=expected:
            raise ValueError(f"Original instruction changed at {va:08x}")
    print(f"PASS {len(BODIES)} complete original bodies and {len(WINDOWS)} x86 instruction windows")
    print("Guest allocator identity, complete x87 status and Xbox SEH remain unverified")
if __name__=="__main__":
    main()
