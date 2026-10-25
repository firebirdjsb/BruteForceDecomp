#!/usr/bin/env python3
"""Pin the 0x000AEC10 original x87 outgoing m32fp word store."""
import argparse
import hashlib
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
OPS = {
    0x000aec5f: "d98690000000", # fld DWORD PTR [esi+0x90]
    0x000aec65: "d80d78523a00", # fmul DWORD PTR [0x3a5278]
    0x000aec6b: "6800004040",   # push 0x40400000
    0x000aec75: "d91c24",       # fstp DWORD PTR [esp]
}
def main():
    p = argparse.ArgumentParser()
    p.add_argument("--root", type=Path, default=Path("."))
    p.add_argument("--xbe", type=Path)
    args = p.parse_args()
    c = (args.root / "src/main_unclassified/band_000a/0x000aec10.c").read_text()
    assert "float guest_scaled_word =" in c
    assert "uint32_t guest_scaled_bits;" in c
    assert "memcpy(&guest_scaled_bits, &guest_scaled_word, sizeof guest_scaled_bits);" in c
    assert "puStack_60 = (undefined4 *)(uintptr_t)guest_scaled_bits;" in c
    if args.xbe:
        data = args.xbe.read_bytes()
        assert hashlib.sha256(data).hexdigest() == XBE_SHA256
        for va, opcode in OPS.items():
            raw = bytes.fromhex(opcode)
            assert data[va-0x10000:va-0x10000+len(raw)] == raw, hex(va)
    print("PASS: 0x000AEC10 original x87 32-bit outgoing stack word")

if __name__ == "__main__":
    main()
