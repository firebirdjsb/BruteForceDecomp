#!/usr/bin/env python3
"""Verify the original 0x0017ADB0 EAX return DWORD stack store/reload."""
import argparse
import hashlib
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE = "src/main_unclassified/band_0017/0x0017adb0.c"
OPCODES = {
    0x0017ADB0: "81ecc0060000",    # 0x6C0-byte local frame
    0x0017AE7D: "e82ed50b00",      # call FUN_002383B0, EAX output
    0x0017AE82: "898424b4000000",  # mov [esp+0xb4], eax
    0x0017AEF2: "8b8c24b4000000",  # mov ecx, [esp+0xb4]
    0x0017AEFC: "89486c",          # mov [eax+0x6c], ecx
}

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", nargs="?", type=Path)
    ap.add_argument("--root", type=Path, default=Path("."))
    args = ap.parse_args()
    source = (args.root / SOURCE).read_text(encoding="utf-8")
    for snippet in (
        "#include <string.h>",
        "undefined1 auStack_61c [4];",
        "undefined4 returned_guest_word;",
        "returned_guest_word = FUN_002383b0();",
        "memcpy(auStack_61c, &returned_guest_word, sizeof(returned_guest_word));",
        "memcpy(&puVar4[0x1b], auStack_61c, sizeof(puVar4[0x1b]));",
        "puVar16 = (undefined4 *)(auStack_61c + 3);",
    ):
        assert snippet in source, "missing source contract: " + snippet
    assert "auStack_61c = (undefined1  [4])" not in source
    assert "puVar4[0x1b] = auStack_61c;" not in source
    if args.xbe:
        image = args.xbe.read_bytes()
        assert hashlib.sha256(image).hexdigest() == XBE_SHA256
        for va, expected in OPCODES.items():
            raw = bytes.fromhex(expected)
            assert image[va - 0x10000:va - 0x10000 + len(raw)] == raw, hex(va)
    print("PASS: 0x0017ADB0 original returned EAX DWORD store/reload (ABI unverified)")

if __name__ == "__main__":
    main()
