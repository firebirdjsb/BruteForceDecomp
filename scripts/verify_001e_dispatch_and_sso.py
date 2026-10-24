#!/usr/bin/env python3
"""Verify x86 dispatcher contracts against the private original default.xbe."""
import argparse
import hashlib
import struct
from pathlib import Path

SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
DELTA = 0x10000
FACTS = {
    0x001E1B30: "83ec5c8b41048b49085333db3bc155",
    0x001E1DC0: "83ec408b41048b49085333db3bc156",
    0x001E1F40: "83f906530f8782000000ff248dd01f1e00",
    0x001E1F89: "8bc85be99ffbffff",
    0x001E1F91: "8bc85be927feffff",
    0x001E1CF4: "5db0015b83c45cc3",
    0x001E1F29: "5eb0015b83c440c3",
    0x001E1C51: "837c2430108b54241c73048d54241c",
}
TARGETS = (0x001E1F99, 0x001E1F89, 0x001E1F51, 0x001E1F63,
           0x001E1F91, 0x001E1F75, 0x001E1FBA)


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("xbe", type=Path)
    args = parser.parse_args()
    blob = args.xbe.read_bytes()
    if hashlib.sha256(blob).hexdigest() != SHA256:
        parser.error("XBE SHA-256 mismatch")
    for address, hex_bytes in FACTS.items():
        expected = bytes.fromhex(hex_bytes)
        actual = blob[address - DELTA:address - DELTA + len(expected)]
        if actual != expected:
            raise SystemExit(f"FAIL 0x{address:08x}: {actual.hex()} != {expected.hex()}")
        print(f"PASS x86 0x{address:08x}")
    actual = struct.unpack_from("<7I", blob, 0x001E1FD0 - DELTA)
    if actual != TARGETS:
        raise SystemExit(f"FAIL jump table: {actual!r}")
    print("PASS seven-case jump table")
    print("Exact instruction evidence verified; C11 semantic equivalence not established.")


if __name__ == "__main__":
    main()
