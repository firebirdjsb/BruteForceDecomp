#!/usr/bin/env python3
"""Verify three 0x00042280 EAX-return flag clears against original XBE."""
import argparse
import hashlib
from pathlib import Path

SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE = "src/main_unclassified/band_0004/0x00042280.cpp"
OPS = (
    (0x00042324, "e8a7ee1100"),
    (0x00042330, "836028fb"),
    (0x00042342, "e889ee1100"),
    (0x0004234e, "836028fb"),
    (0x0004238d, "e83eee1100"),
    (0x00042399, "836028fb"),
)
def main():
    p = argparse.ArgumentParser()
    p.add_argument("xbe", nargs="?", type=Path)
    p.add_argument("--root", type=Path, default=Path("."))
    a = p.parse_args()
    source = (a.root / SOURCE).read_text()
    assert source.count("returned_object = FUN_001611d0();") == 3
    assert source.count("*(uint *)(returned_object + 0x28) = *(uint *)(returned_object + 0x28) & 0xfffffffb;") == 3
    assert "iRamfffffffc" not in source
    if a.xbe:
        image = a.xbe.read_bytes()
        assert hashlib.sha256(image).hexdigest() == SHA
        for addr, raw in OPS:
            b = bytes.fromhex(raw)
            assert image[addr - 0x10000:addr - 0x10000 + len(b)] == b, hex(addr)
    print("PASS: three EAX-return object flag clears match original instruction contract")
if __name__ == "__main__":
    main()
