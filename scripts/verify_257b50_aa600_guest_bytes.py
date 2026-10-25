#!/usr/bin/env python3
"""Verify recovered Xbox stream-header stores and guest format address.

The private original XBE is optional in CI. Its supplied copy is hash-pinned
and instruction-checked locally. Source-only checks do not establish the ABI.
"""
import argparse
import hashlib
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
OPCODES = {
    0x00257B8C: "8a4f1c",     # mov cl,[edi+0x1c]
    0x00257BA0: "884c2416",   # mov [esp+0x16],cl
    0x00257BC6: "c644241c01", # mov byte [esp+0x1c],1
    0x00257BCB: "c644241d01", # mov byte [esp+0x1d],1
    0x000AA76D: "be50d74000", # mov esi,guest 0x0040D750
}

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path("."))
    ap.add_argument("--xbe", type=Path)
    args = ap.parse_args()
    header = (args.root / "src/main_unclassified/band_0025/0x00257b50.c").read_text()
    assert "local_118 = UINT16_C(0x0101);" in header
    assert "*(uint8_t *)&uStack_116 = *(const uint8_t *)(unaff_EDI + 7);" in header
    assert "_local_118 =" not in header
    fmt = (args.root / "src/main_unclassified/band_000a/0x000aa600.c").read_text()
    assert "pwVar10 = (wchar_t *)(uintptr_t)UINT32_C(0x0040D750);" in fmt
    assert "pwVar10 = u__s__d__0040d750;" not in fmt
    if args.xbe:
        data = args.xbe.read_bytes()
        assert hashlib.sha256(data).hexdigest() == XBE_SHA256, "Wrong XBE"
        for address, hex_bytes in OPCODES.items():
            expected = bytes.fromhex(hex_bytes)
            offset = address - 0x10000
            assert data[offset:offset+len(expected)] == expected, hex(address)
    print("PASS: guest header word, flag byte and format-string address")

if __name__ == "__main__":
    main()
