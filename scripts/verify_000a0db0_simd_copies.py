#!/usr/bin/env python3
"""Pin FUN_000a0db0's 16-byte guest copies to matching-XBE instructions.

No XBE is stored in Git. Run locally with the original user's XBE:
  python scripts/verify_000a0db0_simd_copies.py default.xbe --source src/main_unclassified/band_000a/0x000a0db0.cpp

This proves instruction bytes and source-label consistency, NOT 1:1 C behavior.
"""
import argparse
import hashlib
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
# Original x86 VA -> expected complete instruction encoding.
# Each group reads guest [0x3ffe28..0x3ffe67] in 4x16-byte MOVUPS loads,
# then writes the 4 lanes to EAX+0x3c, EAX+0x7c, EAX+0xbc respectively.
INSTRUCTIONS = {
    0x000a0db9: "b938fe3f00", 0x000a0dbe: "0f1001",
    0x000a0dc1: "ba48fe3f00", 0x000a0dc6: "0f100a",
    0x000a0dc9: "b958fe3f00", 0x000a0dce: "0f1011",
    0x000a0dd1: "ba28fe3f00", 0x000a0dd6: "0f101a",
    0x000a0dd9: "0f11583c", 0x000a0ddd: "0f11404c",
    0x000a0de1: "0f11485c", 0x000a0de5: "0f11506c",
    0x000a0df2: "ba38fe3f00", 0x000a0df7: "0f1002",
    0x000a0dfa: "b948fe3f00", 0x000a0dff: "0f1009",
    0x000a0e02: "ba58fe3f00", 0x000a0e07: "0f1012",
    0x000a0e0a: "b928fe3f00", 0x000a0e0f: "0f1019",
    0x000a0e12: "0f11587c", 0x000a0e16: "0f11808c000000",
    0x000a0e1d: "0f11889c000000", 0x000a0e24: "0f1190ac000000",
    0x000a0e3d: "b938fe3f00", 0x000a0e42: "0f1001",
    0x000a0e45: "ba48fe3f00", 0x000a0e4a: "0f100a",
    0x000a0e4d: "b958fe3f00", 0x000a0e52: "0f1011",
    0x000a0e55: "ba28fe3f00", 0x000a0e5a: "0f101a",
    0x000a0e5d: "0f1198bc000000", 0x000a0e64: "0f1180cc000000",
    0x000a0e6b: "0f1188dc000000", 0x000a0e72: "0f1190ec000000",
}
GUEST_DWORDS = tuple(range(0x003ffe28, 0x003ffe68, 4))


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("xbe", type=Path)
    parser.add_argument("--source", type=Path, help="Optional checked-out C source")
    args = parser.parse_args()
    data = args.xbe.read_bytes()
    actual_hash = hashlib.sha256(data).hexdigest()
    if actual_hash != XBE_SHA256:
        parser.error("XBE SHA-256 mismatch; refusing to validate another binary")
    for va, encoding in INSTRUCTIONS.items():
        expected = bytes.fromhex(encoding)
        offset = va - 0x10000  # matching XBE's .text raw offset
        if data[offset:offset + len(expected)] != expected:
            raise SystemExit(f"FAIL original instruction at 0x{va:08x}")
    if args.source:
        source = args.source.read_text(encoding="utf-8")
        for guest_va in GUEST_DWORDS:
            label = (f"_DAT_{guest_va:08x}" if guest_va % 16 == 8
                     else f"uRam{guest_va:08x}")
            # The four aligned base labels are _DAT_003ffe28/38/48/58.
            if f"extern uint32_t {label};" not in source:
                raise SystemExit(f"FAIL source missing guest DWORD: {label}")
        if "Entry: 0x000a0db0" not in source or "8BA96B83EE8C6365563CF48BA0EDFFD487BD9E4591EF9C4DF34083396BD54F91" not in source:
            raise SystemExit("FAIL original entry/body-hash provenance")
        if "ABI_UNVERIFIED" not in source:
            raise SystemExit("FAIL source lost ABI_UNVERIFIED status")
    print(f"PASS: matching-XBE SHA-256 and {len(INSTRUCTIONS)} x86 instruction encodings")
    if args.source:
        print(f"PASS: {len(GUEST_DWORDS)} guest DWORD labels and provenance in C source")
    print("Not verified: native guest storage mapping, Xbox ABI, linking, or 1:1 behavior")


if __name__ == "__main__":
    main()
