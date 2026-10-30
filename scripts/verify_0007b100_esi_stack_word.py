#!/usr/bin/env python3
"""Pin the 0x0007B100 original guest stack DWORD write; not an ABI proof."""
import argparse
import hashlib
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE = "src/main_unclassified/band_0007/0x0007b100.cpp"
# Original bytes: 0x10C-byte frame, second allocation return in ESI,
# ESI pushed for callback, then stored as DWORD at ESP+0x18.
OPCODES = {
    0x0007B100: "81ec0c010000",
    0x0007B2B9: "e802010000",
    0x0007B2C4: "56",
    0x0007B2C5: "8d44241c",
    0x0007B2C9: "89742418",
    0x0007B2CD: "e8deb00000",
    0x0007B2F5: "8d442414",
}

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("xbe", nargs="?", type=Path, help="Original hash-pinned Xbox XBE (optional in CI)")
    parser.add_argument("--root", type=Path, default=Path("."))
    args = parser.parse_args()
    source = (args.root / SOURCE).read_text(encoding="utf-8")
    assert "#include <string.h>" in source
    assert source.count("memcpy(local_108, &iVar5, sizeof(iVar5));") == 1
    assert "local_108 = (undefined1  [4])iVar5" not in source
    assert "undefined1 local_108 [4];" in source
    if args.xbe:
        image = args.xbe.read_bytes()
        assert hashlib.sha256(image).hexdigest() == XBE_SHA256, "Original XBE hash mismatch"
        for va, expected in OPCODES.items():
            raw = bytes.fromhex(expected)
            # First XBE executable section: guest VA 0x12000 -> file offset 0x2000.
            assert image[va - 0x10000:va - 0x10000 + len(raw)] == raw, hex(va)
    print("PASS: 0x0007B100 ESI DWORD stack write and four-byte source storage")

if __name__ == "__main__":
    main()
