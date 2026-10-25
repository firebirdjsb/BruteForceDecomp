#!/usr/bin/env python3
"""Verify two recovered recursive Xbox return-register contracts.

The original XBE is private and optional: source checks always run in CI,
while the local --xbe check hashes the source binary and checks instructions.
"""
import argparse
import hashlib
from pathlib import Path

EXPECTED_XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
OPS = {
    0x00236956: "b001",       # mov al,1: found
    0x0023695a: "32c0",       # xor al,al: not found
    0x0023696c: "e8cfffffff", # recursive child call
    0x00236978: "5f5ec3",     # return AL preserved
    0x00236e5c: "33c0",       # xor eax,eax: not found
    0x00236e6c: "890a",       # write current ECX into output
    0x00236e85: "e8a6ffffff", # recursive child call
    0x00236e8a: "85c0",       # test returned EAX
    0x00236e96: "5f5e5dc20800", # return EAX preserved
}
def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    boolean = (args.root / "src/main_unclassified/band_0023/0x00236940.c").read_text()
    match = (args.root / "src/main_unclassified/band_0023/0x00236e30.c").read_text()
    assert "uint8_t FUN_00236940(void)" in boolean
    assert "cVar2 = FUN_00236940()" in boolean
    assert "return (uint8_t)cVar2;" in boolean
    assert "undefined4 FUN_00236e30(int *param_1,undefined4 *param_2)" in match
    assert "iVar3 = FUN_00236e30(param_1,param_2)" in match
    assert "return (undefined4)(uintptr_t)piVar2;" in match
    assert "return piVar2 == (int *)0x0 ? (undefined4)iVar3" in match
    if args.xbe:
        binary = args.xbe.read_bytes()
        assert hashlib.sha256(binary).hexdigest() == EXPECTED_XBE_SHA256
        for va, opcode in OPS.items():
            raw = bytes.fromhex(opcode)
            assert binary[va-0x10000:va-0x10000+len(raw)] == raw, hex(va)
    print("PASS: two Xbox recursive AL/EAX return contracts")

if __name__ == "__main__":
    main()
