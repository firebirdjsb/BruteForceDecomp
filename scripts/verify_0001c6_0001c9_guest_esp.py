#!/usr/bin/env python3
"""Pin two original Xbox SEH/guest-ESP save contracts without guessing host C pointers."""
import argparse
import hashlib
from pathlib import Path

EXPECTED_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
# Entry, exact prologue through REP MOVSD, draft file, unresolved Ghidra stack token.
CASES = (
    (0x0001C630, "558bec6aff68107a300064a100000000506489250000000083ec505356578965f08bd9b9050000008bf28d7ddcf3a5", "0x0001c630.c", "stack0xffffff94"),
    (0x0001C980, "558bec6aff68007f300064a100000000506489250000000083ec7c5356578965f08bd9b9100000008bf28d7db0f3a5", "0x0001c980.c", "stack0xffffff68"),
)

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("xbe", type=Path, help="Original user-provided default.xbe")
    parser.add_argument("source_dir", type=Path, help="Directory containing both original-address C files")
    args = parser.parse_args()
    data = args.xbe.read_bytes()
    if hashlib.sha256(data).hexdigest() != EXPECTED_SHA256:
        parser.error("original XBE SHA-256 mismatch")
    for entry, encoded, name, unresolved in CASES:
        expected = bytes.fromhex(encoded)
        actual = data[entry - 0x10000:entry - 0x10000 + len(expected)]
        if actual != expected:
            raise SystemExit(f"FAIL: {entry:#010x} instruction bytes mismatch: {actual.hex()}")
        source = (args.source_dir / name).read_text(encoding="utf-8")
        if unresolved not in source:
            raise SystemExit(f"REVIEW REQUIRED: {name} no longer contains {unresolved}; check its guest-ESP representation")
        if "ABI_UNVERIFIED" not in source:
            raise SystemExit(f"FAIL: {name} missing original ABI uncertainty label")
        print(f"PASS {entry:#010x}: original SEH, ESP save, and REP MOVSD prologue verified; source remains unresolved")
    print("No claim of native-PC guest-stack compatibility or C11 syntax success.")

if __name__ == "__main__":
    main()
