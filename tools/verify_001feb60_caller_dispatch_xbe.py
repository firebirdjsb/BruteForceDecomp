#!/usr/bin/env python3
"""Authenticate the original 001FEB60 caller dispatch data and instruction windows.

Run locally with private user-owned XBE; never commit the executable bytes.
"""
import argparse
import hashlib
from pathlib import Path

ORIGINAL_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SPANS = (
    (0x001FEB60,77,"42606ab29f564bc92f0122ffaa816c7872e1284f940d7e44eb260d28ad75a3cc"),
    (0x00205A48,32,"9bcd1da67f4f40d29058833cd143e066f46f6a481d557c12235ecb8470a9d4de"),
    (0x00205A28,32,"03d40de6250dd398a8edf0c11d1752f824d5646f60b3fb406c78307ee219970d"),
    (0x001FF494,43,"e48dfcae8ab8d6cda20056a22f7c0a9d3041f9797806188d88298ba789d74bb9"),
    (0x001FF464,48,"0e09e3b9acff4808073d2b099981f836141dee20c9635d5e47cdb75f3dbd4fd8"),
)
OPCODES = (
    (0x001FF12C,"e82ffaffff"), # CALL 001FEB60
    (0x001FF140,"8b7c2410"),   # matched item output
    (0x001FF144,"8b4708"),     # raw item +8 type
    (0x001FF147,"83c0fe"),     # type -2
    (0x001FF14A,"83f82a"),     # bound 0x2a
    (0x001FF153,"0fb68094f41f00"), # byte index
    (0x001FF15A,"ff248564f41f00"), # jump DWORD table
    (0x0020590F,"e84c92ffff"), # CALL 001FEB60
    (0x00205920,"8b742410"),   # matched item output
    (0x00205924,"8b4608"),     # raw item +8 type
    (0x00205927,"83c0fc"),     # type -4
    (0x0020592A,"83f81f"),     # bound 0x1f
    (0x00205933,"0fb688485a2000"), # byte index
    (0x0020593A,"ff248d285a2000"), # jump DWORD table
)
def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("xbe",type=Path)
    args=ap.parse_args()
    data=args.xbe.read_bytes()
    if hashlib.sha256(data).hexdigest()!=ORIGINAL_SHA:
        ap.error("Pinned original XBE SHA-256 mismatch")
    def at(va,size):
        off=va-0x10000
        if off<0 or off+size>len(data):
            raise ValueError(f"Unmapped guest address {va:08x}")
        return data[off:off+size]
    for va,count,digest in SPANS:
        if hashlib.sha256(at(va,count)).hexdigest()!=digest:
            raise ValueError(f"Original data/body SHA mismatch at {va:08x}")
    for va,encoded in OPCODES:
        expected=bytes.fromhex(encoded)
        if at(va,len(expected))!=expected:
            raise ValueError(f"Original instruction changed at {va:08x}")
    print("PASS: original XBE, iterator body, both byte/jump tables, 14 instruction windows")
    print("No guest executable bytes embedded in this verifier; no case-body ABI equivalence claim")

if __name__=="__main__":
    main()
