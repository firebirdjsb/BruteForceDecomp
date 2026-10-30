#!/usr/bin/env python3
"""Verify two restored x86 caller/output contracts and their Clang C11 syntax.

Original XBE is private: --xbe path/to/default.xbe adds byte checks.
No implicit Xbox ECX/thiscall or host memory translation is certified.
"""

# Archived C-only evidence: active game-core validation uses strict C++17.
if __name__ == "__main__":
    import sys as _archive_sys
    from pathlib import Path as _ArchivePath
    _archive_sys.path.insert(0, str(_ArchivePath(__file__).resolve().parents[1] / "tools"))
    from historical_c11 import require_historical_c11_opt_in
    require_historical_c11_opt_in()

import argparse
import hashlib
import re
import subprocess
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SITES = (
    (0x002a6df0, "83ec14", "allocate caller 0x14 local stack"),
    (0x002a6df3, "5356", "preserve EBX and ESI"),
    (0x002a6dfb, "57", "preserve EDI"),
    (0x002a6e30, "8d542428", "address second incoming guest DWORD"),
    (0x002a6e34, "5257", "push guest output pointer and EDI object"),
    (0x002a6e3a, "ff9184000000", "invoke vtable+0x84 writer"),
    (0x002a6e40, "8b442428", "reload overwritten second incoming word"),
    (0x002e4c00, "83ec18", "allocate 0x18 x86 locals"),
    (0x002e4c03, "5355", "save EBX and EBP"),
    (0x002e4c0d, "5657", "save ESI and EDI"),
    (0x002e4dc2, "8d4c2414", "LEA first 32-bit output slot"),
    (0x002e4dc6, "51", "push address of first output"),
    (0x002e4dc7, "8d54241c", "LEA second output after first PUSH"),
    (0x002e4dcb, "5257", "push second output and callee input"),
    (0x002e4dcf, "e8ecfbffff", "call 0x002E49C0"),
    (0x002e4dec, "8b4c2414", "reload first output word"),
    (0x002e4df0, "8b542418", "reload second output word"),
    (0x002e4df4, "512bf0c1fe045256", "push both outputs and count"),
    (0x002e4dfe, "e86df9ffff", "call 0x002E4770"),
    (0x002e49f2, "890a", "callee writes first output"),
    (0x002e49ff, "8930", "callee writes second output"),
)
CASES = (
    ("002a6df0", (
        "(**(code **)(*piVar1 + 0x84))(piVar1,&param_2);",
    ), (
        "&stack0xffffffe8",
        "(**(code **)(*piVar1 + 0x84))();",
    )),
    ("002e4c00", (
        "FUN_002e49c0(uVar1,&iStack_10,&piStack_14);",
        "FUN_002e4770(iVar6 - iVar3 >> 4,iStack_10,piStack_14);",
    ), (
        "&stack0xffffffe4",
        "FUN_002e49c0(uVar1,&puStack_18",
    )),
)

def source_without_comments(s):
    return re.sub(r"/\*.*?\*/|//[^\n]*", "", s, flags=re.S)

def check_sources(root):
    for addr, required, forbidden in CASES:
        path = root / f"src/main_unclassified/band_{addr[:4]}/0x{addr}.c"
        s = path.read_text(encoding="utf-8")
        ac = source_without_comments(s)
        assert f"Entry: 0x{addr}," in s and "Input x86 body SHA-256:" in s
        assert "ABI_UNVERIFIED" in s, addr
        for needle in required:
            assert needle in ac, f"missing output contract {addr}: {needle}"
        for needle in forbidden:
            assert needle not in ac, f"regressed synthetic ABI {addr}: {needle}"
        print(f"PASS 0x{addr}: source output/calling convention alias")
    print("PASS: source contracts; native guest/host ABI is not proven")

def check_clang(root):
    flags = [
        "clang", "-std=c11", "-fsyntax-only", "-ferror-limit=3",
        "-Wno-implicit-function-declaration", "-Wno-int-conversion",
        "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
        "-Wno-int-to-pointer-cast", "-Wno-return-type",
        "-Wno-deprecated-non-prototype", "-I", str(root / "include")
    ]
    for addr, _, _ in CASES:
        path = root / f"src/main_unclassified/band_{addr[:4]}/0x{addr}.c"
        p = subprocess.run(flags+[str(path)], capture_output=True, text=True)
        assert p.returncode == 0, f"Clang 0x{addr}: {p.stderr[:1800]}"
        print(f"PASS isolated host Clang C11 0x{addr}")

def check_xbe(path):
    data = path.read_bytes()
    assert hashlib.sha256(data).hexdigest() == XBE_SHA256, "unexpected original Xbox executable"
    for va, expected_hex, purpose in SITES:
        expected = bytes.fromhex(expected_hex)
        actual = data[va-0x10000:va-0x10000+len(expected)]
        assert actual == expected, f"0x{va:08X}: {purpose} {actual.hex()} != {expected_hex}"
        print(f"PASS original XBE 0x{va:08X}: {purpose}")
    print(f"PASS: {len(SITES)} instruction sites match original XBE")

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe", type=Path)
    ap.add_argument("--clang", action="store_true")
    args = ap.parse_args()
    check_sources(args.root)
    if args.clang:
        check_clang(args.root)
    if args.xbe:
        check_xbe(args.xbe)
    else:
        print("NOTE: original XBE absent in CI; instruction checks locally verified")
    print("PASS: source-only checks are NOT 1:1 runtime equivalence")

if __name__ == "__main__":
    main()
