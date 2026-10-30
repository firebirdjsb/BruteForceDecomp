#!/usr/bin/env python3
"""Verify isolated original 00155840 scalar SSE sites against private Xbox XBE."""
import argparse
import hashlib
from pathlib import Path

XBE_SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_SHA="f7b7ffd8d854213afa2ef6ffe9ce142c332cd7ec3a27b05bcce526f83a1a78c6"
PAIRS=(
    (0x001559ea,"f30f5245e4",0x001559ef,"f30f1145e8"),
    (0x00155a36,"f30f5245e4",0x00155a3b,"f30f1145e8"),
    (0x00155aea,"f30f5245e4",0x00155aef,"f30f1145e8"),
    (0x00155b4a,"f30f5245e4",0x00155b4f,"f30f1145e8"),
    (0x00155bab,"f30f5145e8",0x00155bb0,"f30f1145f0"),
    (0x00155c28,"f30f5245e4",0x00155c2d,"f30f1145e8"),
    (0x00155ca9,"f30f5245e4",0x00155cae,"f30f1145f0"),
)
def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("xbe",type=Path)
    args=p.parse_args()
    image=args.xbe.read_bytes()
    if hashlib.sha256(image).hexdigest()!=XBE_SHA:
        p.error("Private XBE SHA-256 mismatch")
    if hashlib.sha256(image[0x00155840-0x10000:0x00155840-0x10000+1500]).hexdigest()!=BODY_SHA:
        raise ValueError("Original caller body mismatch")
    for pc,ins,store_pc,store in PAIRS:
        for va,hexbytes in ((pc,ins),(store_pc,store)):
            expected=bytes.fromhex(hexbytes)
            got=image[va-0x10000:va-0x10000+len(expected)]
            if got!=expected:
                raise ValueError(f"Invalid original scalar instruction 0x{va:08x}")
    print("PASS: original XBE / caller SHA-256 and 14 scalar SSE opcode windows")
    print("Upper 96 bits of XMM0 and guest numeric approximation remain backend-owned.")
if __name__=="__main__":
    main()
