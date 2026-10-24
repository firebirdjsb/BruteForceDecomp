#!/usr/bin/env python3
"""Original-XBE instruction regression for the 0x000A29E0 stack slot.

The original executable is user-owned and must not be committed. This test
checks instruction facts and the corresponding C11 address expressions; it
does NOT establish overall function or native-PC ABI equivalence.
"""
import argparse
import hashlib
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
DELTA = 0x10000
# Each original instruction takes the address [EBP+0x28] and pushes it.
LEA_PUSH = {
    0xA2B2D: "8d452850", 0xA2B50: "8d4d2851",
    0xA2B6E: "8d552852", 0xA2B8C: "8d452850",
    0xA2BAF: "8d4d2851", 0xA2BCD: "8d552852",
    0xA2BE6: "8d452850", 0xA2C18: "8d4d2851",
    0xA2C36: "8d552852", 0xA2C4F: "8d452850",
}
STORES = {
    0xA2B3F: 0, 0xA2B5D: 0x202, 0xA2B7B: 0x10101,
    0xA2B9E: 1, 0xA2BBC: 0x303, 0xA2BDA: 0x302,
    0xA2BEF: 0x1000000, 0xA2C25: 1,
    0xA2C43: 0x302, 0xA2C58: 0x303,
}
CALLS = (0xA2B46, 0xA2B64, 0xA2B82, 0xA2BA5, 0xA2BC3,
         0xA2BE1, 0xA2C2C, 0xA2C4A, 0xA2C68)

def verify(xbe: bytes, source: str):
    assert hashlib.sha256(xbe).hexdigest() == XBE_SHA256, "Wrong original XBE"
    def at(address, count):
        return xbe[address - DELTA:address - DELTA + count]
    assert at(0xA29E0, 6) == bytes.fromhex("558bec83ec68")
    for address, opcode in LEA_PUSH.items():
        assert at(address, 4) == bytes.fromhex(opcode), hex(address)
    for address, value in STORES.items():
        assert at(address, 7) == b"\xc7\x45\x28" + value.to_bytes(4, "little"), hex(address)
    for address in CALLS:
        opcode = at(address, 5)
        assert opcode[:1] == b"\xe8", hex(address)
        assert address + 5 + int.from_bytes(opcode[1:], "little", signed=True) == 0x6A610, hex(address)
    assert "Entry: 0x000a29e0" in source
    assert "Input x86 body SHA-256:" in source
    assert "int in_stack_00000024;" in source
    assert "&stack0x00000024" not in source
    # 10 x86 LEA paths converge into 9 C call sites due to a shared label.
    assert source.count("FUN_0006a610(&in_stack_00000024);") == 9
    print("PASS: XBE hash, 10 address pushes, 10 DWORD stores, 9 calls, 9 C uses")

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("xbe", type=Path)
    parser.add_argument("source", type=Path)
    args = parser.parse_args()
    verify(args.xbe.read_bytes(), args.source.read_text(encoding="utf-8"))
