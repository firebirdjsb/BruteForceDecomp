#!/usr/bin/env python3
"""0x002C5660 pinned x86 guest-address DWORD storage and host C11 syntax.

Only source and bit-preservation contracts are established by this check.
The original executable, when supplied privately with --xbe, must match
its repository-pinned SHA-256 and exact instruction bytes below.
Guest-address translation to host pointers and cross-function ABI remain
ABI_UNVERIFIED, especially on 64-bit native hosts.
"""
import argparse
import hashlib
import struct
import subprocess
from pathlib import Path

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_SHA = "C65C0BB414E868C24D9BCC97FEF7810A7DE6204FB08D752C3E15F7F97E15DBD3"
SOURCE = "src/main_unclassified/band_002c/0x002c5660.c"
OPS = {
    0x002C566D: "f6c20c",    # TEST DL,0x0c
    0x002C5672: "894160",    # MOV [ECX+0x60],EAX
    0x002C567D: "894864",    # MOV [EAX+0x64],ECX
    0x002C5682: "894164",    # MOV [ECX+0x64],EAX
    0x002C568D: "894260",    # MOV [EDX+0x60],EAX
    0x002C5694: "8b4860",    # MOV ECX,[EAX+0x60]
    0x002C5697: "8b5064",    # MOV EDX,[EAX+0x64]
    0x002C56F5: "8b4160",    # MOV EAX,[ECX+0x60]
    0x002C5782: "8b4164",    # MOV EAX,[ECX+0x64]
    0x002C5866: "8b4060",    # MOV EAX,[EAX+0x60]
    0x002C58B1: "8b4064",    # MOV EAX,[EAX+0x64]
    0x002C5907: "8b4160",    # MOV EAX,[ECX+0x60]
}

def original_bytes(data, addr, size):
    assert data[:4] == b"XBEH", "Not an XBE"
    base = int.from_bytes(data[0x104:0x108], "little")
    count = int.from_bytes(data[0x11c:0x120], "little")
    table = int.from_bytes(data[0x120:0x124], "little") - base
    for i in range(count):
        o = table + 56*i
        va = int.from_bytes(data[o+4:o+8], "little")
        raw = int.from_bytes(data[o+12:o+16], "little")
        length = int.from_bytes(data[o+16:o+20], "little")
        if va <= addr and addr+size <= va+length:
            k = raw + addr - va
            return data[k:k+size]
    raise AssertionError(f"Unmapped guest VA {addr:#x}")

def check(root, xbe):
    src = (root / SOURCE).read_text(encoding="utf-8")
    assert f"Input x86 body SHA-256: {BODY_SHA}" in src
    assert "Entry: 0x002c5660" in src
    for token in (
        "static uint32_t bf_2c5660_guest_word(",
        "static void bf_2c5660_store_guest_pointer(",
        "memcpy(slot,&bits,sizeof(bits));",
        "memcpy(&param_1[0x18],&param_2,sizeof(uint32_t));",
        "memcpy(&param_1[0x19],&param_2,sizeof(uint32_t));",
        "guest_ptr3 = bf_2c5660_guest_word(&param_1[0x18]);",
        "guest_ptr3 = bf_2c5660_guest_word(&param_1[0x19]);",
    ):
        assert token in src, token
    for token in ("(float)param_3", "(int)param_1[0x18]", "(int)param_1[0x19]", "(int)fVar3"):
        assert token not in src, f"Stale Ghidra float-address cast: {token}"
    # Raw guest DWORDs must round-trip even when IEEE-754-decoded floats do not.
    for word in (0, 0x3f800000, 0x7f800001, 0x80000001, 0xffffffff):
        assert struct.unpack("<I", struct.pack("<I", word))[0] == word
    subprocess.run([
        "clang", "-std=c11", "-fsyntax-only", "-ferror-limit=0",
        "-Wno-implicit-function-declaration", "-Wno-int-conversion",
        "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
        "-Wno-int-to-pointer-cast", "-Wno-return-type",
        "-Wno-deprecated-non-prototype",
        "-I", str(root / "include"), str(root / SOURCE)
    ], check=True)
    if xbe is not None:
        data = xbe.read_bytes()
        assert hashlib.sha256(data).hexdigest() == XBE_SHA, "Incorrect original game build"
        for addr, sequence in OPS.items():
            assert original_bytes(data, addr, len(sequence)//2) == bytes.fromhex(sequence), hex(addr)
    print("PASS 0x002C5660 original guest 32-bit address slots and isolated Clang C11")
    print("Private XBE instructions verified" if xbe else "Source only; XBE intentionally not in CI")
    print("ABI_UNVERIFIED: native host pointer translation and linked gameplay")

if __name__ == "__main__":
    p = argparse.ArgumentParser()
    p.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe", type=Path)
    a = p.parse_args()
    check(a.root, a.xbe)
