#!/usr/bin/env python3
"""0x002AC100: test shared guest output backing; authenticated bytes if XBE given.

Caller-side contract only. Virtual target writes and 1:1 behavior unverified.
"""
import argparse
import hashlib
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
WINDOWS = (
    (0x2ac109, "53 56"),
    (0x2ac110, "57"),
    (0x2ac111, "6a 00 6a 04"),
    (0x2ac115, "8d 4c 24 20"),
    (0x2ac11b, "c7 44 24 28 cd cc 8c 3f"),
    (0x2ac23a, "8d 4c 24 20"),
    (0x2ac23e, "51 53 57 ff 50 38"),
    (0x2ac246, "6a 00 6a 08"),
    (0x2ac24a, "8d 44 24 28"),
    (0x2ac24e, "50 56 ff 52 14"),
)

def check_frame():
    assert 0x20 - 2 * 4 == 0x28 - 4 * 4 == 0x18
    assert 0x20 == 0x28 - 2 * 4
    assert (0x20 - 0x18) // 4 == 2

def check_source(path):
    source = path.read_text(encoding="utf-8")
    required = (
        "piStack_74 = (int *)&local_38[2];",
        "(**(code **)(*piVar2 + 0x38))(piVar2,(uint)pcVar4,&local_38[2]);",
        "(*(code *)(*param_2)[5])(param_2,&local_38[2],8,0);",
    )
    for needle in required:
        if needle not in source:
            raise ValueError("Missing shared output/serialization contract: " + needle)
    if "stack0xffffffb0" in source:
        raise ValueError("Unresolved guest-stack output alias")
    print("PASS source: +0x38 output and +0x14 eight-byte writer share local_38[2..3]")

def check_xbe(path):
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest() != XBE_SHA256:
        raise ValueError("Original XBE SHA-256 mismatch")
    for addr, hex_bytes in WINDOWS:
        expected = bytes.fromhex(hex_bytes)
        if data[addr - 0x10000:addr - 0x10000 + len(expected)] != expected:
            raise ValueError("Original x86 byte mismatch at 0x%08x" % addr)
    print("PASS original XBE: %d exact instruction windows" % len(WINDOWS))

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path, help="Private original XBE; never commit it")
    args = parser.parse_args()
    check_frame()
    check_source(args.root / "src/main_unclassified/band_002a/0x002ac100.cpp")
    if args.xbe:
        check_xbe(args.xbe)
    else:
        print("CI has no private XBE; no original-byte verification claimed")

if __name__ == "__main__":
    main()
