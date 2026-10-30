#!/usr/bin/env python3
"""0x002AC280 original guest-stack stream/version and +0x4C output identity.

Original byte checks require private --xbe. CI checks only frame and source
contracts; neither proves the dynamically dispatched virtual implementations.
"""
from __future__ import annotations
import argparse
import hashlib
from pathlib import Path

HASH = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
WINDOWS = (
    (0x2ac293, "57"),
    (0x2ac296, "53 6a 04"),
    (0x2ac299, "8d 4c 24 24"),
    (0x2ac2a4, "53 6a 04"),
    (0x2ac2a7, "8d 44 24 20"),
    (0x2ac2b0, "39 5c 24 18"),
    (0x2ac313, "c6 44 24 68 00"),
    (0x2ac387, "d9 44 24 1c"),
    (0x2ac39b, "6a 0c 8d 54 24 60"),
    (0x2ac3a3, "ff 51 10"),
    (0x2ac3ab, "8d 4c 24 6c"),
    (0x2ac3b1, "ff 50 10"),
    (0x2ac3b6, "8d 44 24 58"),
    (0x2ac3bb, "57 ff 52 4c"),
)

def check(root: Path):
    assert 0x24 - 8 == 0x1c and 0x20 - 8 == 0x18
    assert 0x60 - 8 == 0x58 and 0x6c - 8 == 0x64
    assert 0x68 - 24 == 0x50
    text = (root / "src/main_unclassified/band_002a/0x002ac280.cpp").read_text()
    required = (
        "(param_2,local_154,4,0);",
        "(param_2,&auStack_178[0],4,0);",
        "memcpy(&original_format_version,local_154,sizeof(original_format_version));",
        "(param_2,&auStack_150[8],0xc,0);",
        "(param_2,&auStack_150[20],4,0);",
        "(piVar3,&auStack_150[8]);",
    )
    for snippet in required:
        if snippet not in text:
            raise ValueError("Missing original caller-side storage contract: " + snippet)
    if "stack0xfffffe98" in text or "stack0xfffffe90" in text:
        raise ValueError("Original pseudo-stack alias not removed")
    print("PASS source guest32 stream storage, binary32 version and 16-byte producer input")

def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe", type=Path, help="Private original XBE; never commit")
    args = ap.parse_args()
    check(args.root)
    if args.xbe:
        data = args.xbe.read_bytes()
        if hashlib.sha256(data).hexdigest() != HASH:
            raise ValueError("Private original XBE hash mismatch")
        for address, expected_text in WINDOWS:
            expected = bytes.fromhex(expected_text)
            if data[address-0x10000:address-0x10000+len(expected)] != expected:
                raise ValueError("Original instruction mismatch: %08x" % address)
        print("PASS original XBE: %d instruction windows" % len(WINDOWS))
    else:
        print("Original XBE not in CI; machine-code windows not checked")

if __name__ == "__main__":
    main()
