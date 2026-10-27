#!/usr/bin/env python3
"""Instruction-backed audit for three disjoint storage/call-site repairs.

These tests recover source storage and call arguments but do not certify
Xbox register preservation, indirect callee signatures, object lifetimes
or host/guest pointer translation. Use --xbe for original private binary
byte validation; CI runs source and isolated Clang C11 without the XBE.
"""
import argparse
import hashlib
import re
import subprocess
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CASES = (
    {
        "entry": "001597d0",
        "source": "src/main_unclassified/band_0015/0x001597d0.c",
        "must": (
            "float guest_y_delta;",
            "guest_y_delta = *(float *)(iVar6 + 0x28) - (float)in_ECX[100];",
            "guest_y_delta * guest_y_delta",
            "FUN_000dddd0(in_ECX[2],&guest_y_delta,0x42480000,in_ECX);",
        ),
        "must_not": ("(undefined4 *)(*(float *)(iVar6 + 0x28)", "&param_1,0x42480000"),
        "sites": (
            (0x001597d0, "83ec40", "reserve original guest local space"),
            (0x001597e2, "89442448", "store incoming pointer DWORD on guest stack"),
            (0x0015988b, "d95c2408", "store original Z difference"),
            (0x0015989c, "894c2414", "preserve Z float DWORD bits"),
            (0x001598a0, "d95c2448", "overwrite original caller argument with Y float"),
            (0x001598f0, "56", "push original object input"),
            (0x001598f1, "6800004842", "push original f32-distance constant"),
            (0x001598f6, "8d4c2454", "address overwritten original Y float word"),
            (0x00159906, "e8c544f8ff", "call FUN_000DDDD0 with that address"),
            (0x00159953, "c20400", "callee pops one original argument"),
        ),
    },
    {
        "entry": "00257da0",
        "source": "src/main_unclassified/band_0025/0x00257da0.c",
        "must": (
            "int *piStack_8;",
            "int iStack_4;",
            "piStack_8 = (int *)0x0;",
            "(**(code **)(*local_c + 0x18))(local_c,&piStack_8);",
            "piVar4 = piStack_8;",
            "(DAT_0046990c,&iStack_4,local_10);",
            "if (0 < iStack_4)",
            "while (iVar3 < iStack_4)",
        ),
        "must_not": ("stack0xffffffe4", "stack0xffffffe8"),
        "sites": (
            (0x00257da0, "83ec10", "reserve four local DWORDs"),
            (0x00257da3, "53", "save EBX"),
            (0x00257da4, "55", "save EBP"),
            (0x00257da9, "56", "save ESI"),
            (0x00257daa, "57", "save EDI"),
            (0x00257dab, "89442414", "preserve input object at stable ESP+0x14"),
            (0x00257dde, "8d542418", "initial +0x20 factory stack output layout"),
            (0x00257df8, "8d542418", "output of vtable+0x18 at stable ESP+0x18"),
            (0x00257e07, "8b742418", "reload same interface into ESI"),
            (0x00257e27, "8d442414", "QI output at the other local slot"),
            (0x00257e55, "8d442420", "count output at stable ESP+0x1C"),
            (0x00257e5e, "8b44241c", "read exact returned count"),
            (0x00257e75, "8d542418", "per-item output is prior interface slot"),
            (0x00257e80, "896c2424", "zero per-item interface output"),
            (0x00257ef7, "c20c00", "callee cleanup of three guest argument DWORDs"),
        ),
    },
    {
        "entry": "00116340",
        "source": "src/main_unclassified/band_0011/0x00116340.c",
        "must": (
            "uint32_t word_at_minus_54;",
            "uint32_t word_at_minus_50;",
            "float float_at_minus_4c;",
            "_Static_assert(sizeof(guest_output_triplet)==12,",
            "guest_output_triplet.float_at_minus_4c = (float)fVar3;",
            "(auStack_24,&guest_output_triplet.word_at_minus_50);",
            "(auStack_38 + 8,&guest_output_triplet);",
        ),
        "must_not": ("stack0xffffffa4",),
        "sites": (
            (0x00116340, "83ec54", "original 0x54-byte guest local space"),
            (0x00116353, "d9542408", "initialize S-0x4C F32 before register pushes"),
            (0x00116391, "8d54240c", "first output at S-0x50"),
            (0x00116396, "8d54243c", "first call other output at S-0x24"),
            (0x0011639b, "ff90ac000000", "first virtual+0xAC"),
            (0x001163bb, "8d442408", "second output overlaps S-0x54 through S-0x49"),
            (0x001163c0, "8d4c2430", "second call other output at S-0x30"),
            (0x001163c7, "ff92ac000000", "second virtual+0xAC"),
            (0x001163d6, "8d54242c", "source of subsequent transform"),
            (0x001163da, "8d442444", "destination of subsequent transform"),
            (0x001163de, "e82d31f2ff", "call original FUN_00039510"),
            (0x00116469, "c20800", "callee pops two input DWORDs"),
        ),
    },
)

def without_comments(text):
    return re.sub(r"/\*.*?\*/|//[^\n]*", "", text, flags=re.S)

def check_sources(root):
    for case in CASES:
        content = (root / case["source"]).read_text(encoding="utf8")
        active = without_comments(content)
        assert f'Entry: 0x{case["entry"]},' in content, case["entry"]
        assert "Input x86 body SHA-256:" in content
        assert "ABI_UNVERIFIED" in content
        for phrase in case["must"]:
            assert phrase in active, (case["entry"], "missing", phrase)
        for phrase in case["must_not"]:
            assert phrase not in active, (case["entry"], "ghost remains", phrase)
        print("PASS original source/dataflow contract:", case["entry"])

def check_clang(root):
    for case in CASES:
        cmd = ["clang", "-std=c11", "-fsyntax-only", "-ferror-limit=3",
               "-Wno-implicit-function-declaration", "-Wno-int-conversion",
               "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
               "-Wno-int-to-pointer-cast", "-Wno-return-type",
               "-Wno-deprecated-non-prototype", "-I", str(root / "include"),
               str(root / case["source"])]
        p = subprocess.run(cmd, capture_output=True, text=True)
        assert p.returncode == 0, (case["entry"], p.stderr[:2200])
        print("PASS isolated Clang C11:", case["entry"])

def check_xbe(path):
    raw = path.read_bytes()
    digest = hashlib.sha256(raw).hexdigest()
    assert digest == XBE_SHA256, ("wrong original XBE", digest)
    n = 0
    for case in CASES:
        for va, hx, description in case["sites"]:
            want = bytes.fromhex(hx)
            got = raw[va - 0x10000: va - 0x10000 + len(want)]
            assert got == want, (case["entry"], hex(va), description, got.hex(), hx)
            n += 1
        print("PASS original XBE opcode windows:", case["entry"], len(case["sites"]))
    print("PASS authenticated original XBE instruction windows:", n)

def main():
    p = argparse.ArgumentParser()
    p.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe", type=Path, help="Private original matching default(2).xbe")
    p.add_argument("--clang", action="store_true")
    a = p.parse_args()
    check_sources(a.root)
    if a.clang:
        check_clang(a.root)
    if a.xbe:
        check_xbe(a.xbe)
    else:
        print("NOTE: original private XBE not shipped to GitHub Actions")

if __name__ == "__main__":
    main()
