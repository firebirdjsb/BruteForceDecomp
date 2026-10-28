#!/usr/bin/env python3
"""Evidence-limited 0x002CBA20 original F32 vector and guest stack cross-product.

Checks the unchanged original XBE body digest, raw source storage, isolated
host C11 syntax, and (with --xbe) exact original opcode bytes. This does
NOT establish native calling/register/guest-pointer ABI, full SIMD/x87
rounding parity, or runtime behavior.
"""
import argparse
import hashlib
from pathlib import Path
import subprocess

SOURCE = "src/main_unclassified/band_002c/0x002cba20.c"
BODY_SHA = "B10539555D2E830DD17D22749AC683C54AC7FB9FB15D75A6D47B8FCF3E4DA44A"
XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
OPCODES = {
    0x002CBCDA: "f30f1008",      # MOVSS XMM1,[EAX]
    0x002CBCDE: "0f164804",      # MOVHPS XMM1,[EAX+4]
    0x002CBCEE: "0f5cca",        # SUBPS XMM1,XMM2
    0x002CBCF5: "f30f1108",      # MOVSS [EAX],XMM1
    0x002CBCF9: "0f174804",      # MOVHPS [EAX+4],XMM1
    0x002CBD2D: "d99c24bc000000", # FSTP m32fp
    0x002CBD46: "d99c24c0000000", # FSTP m32fp
    0x002CBD5F: "d99c24c4000000", # FSTP m32fp
    0x002CBD6D: "e85eb6feff",   # CALL 0x002B73D0
}

def at(data, address, n):
    assert data[:4] == b"XBEH", "not an XBE"
    base = int.from_bytes(data[0x104:0x108], "little")
    count = int.from_bytes(data[0x11c:0x120], "little")
    table = int.from_bytes(data[0x120:0x124], "little") - base
    for i in range(count):
        o = table + 56 * i
        va = int.from_bytes(data[o+4:o+8], "little")
        off = int.from_bytes(data[o+12:o+16], "little")
        size = int.from_bytes(data[o+16:o+20], "little")
        if va <= address and address+n <= va+size:
            p = off + address - va
            return data[p:p+n]
    raise AssertionError(f"Original VA unmapped: {address:#x}")

def check(root, xbe):
    s = (root / SOURCE).read_text(encoding="utf8")
    assert f"Input x86 body SHA-256: {BODY_SHA}" in s
    assert "Entry: 0x002cba20" in s
    for part in (
        "float local_b5c[2];", "float guest_cross[3];",
        "fVar15 = local_b70[1] - local_b5c[0];",
        "fVar17 = local_b70[2] - local_b5c[1];",
        "guest_cross[0] =", "guest_cross[1] =", "guest_cross[2] =",
        "FUN_002b73d0(param_5[2] + 0x10,guest_cross,&local_b98);",
        "local_b84[0] = param_3;",
        "local_b84[1] = param_3 + ",
    ):
        assert part in s, part
    for forbidden in ("local_b70._4_8_", "(float)local_b5c", "local_b84[0] = (uint *)(fVar15"):
        assert forbidden not in s, forbidden
    subprocess.run([
        "clang", "-std=c11", "-fsyntax-only", "-ferror-limit=0",
        "-Wno-implicit-function-declaration", "-Wno-int-conversion",
        "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
        "-Wno-int-to-pointer-cast", "-Wno-return-type",
        "-Wno-deprecated-non-prototype", "-I", str(root/"include"),
        str(root/SOURCE),
    ], check=True)
    if xbe:
        b = xbe.read_bytes()
        assert hashlib.sha256(b).hexdigest() == XBE_SHA, "Incorrect game build"
        for a, blob in OPCODES.items():
            assert at(b,a,len(blob)//2) == bytes.fromhex(blob), hex(a)
    print("PASS original 0x002CBA20 SIMD XYZ and x87 F32 cross output; isolated C11")
    print("XBE instruction bytes verified" if xbe else "private original XBE not checked in public CI")
    print("Guest pointer translation, other stack aliases and linked ABI remain UNVERIFIED")

if __name__ == "__main__":
    p = argparse.ArgumentParser()
    p.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe", type=Path)
    a = p.parse_args()
    check(a.root, a.xbe)
