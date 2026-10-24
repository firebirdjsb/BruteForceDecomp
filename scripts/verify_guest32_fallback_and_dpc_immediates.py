#!/usr/bin/env python3
"""Check two narrowly verified x86 guest32 expressions and isolated C11 syntax.

The user-supplied Xbox XBE is private. With --xbe, check its SHA-256 and
original instruction bytes. Without --xbe, report that opcode verification
was skipped. No guest memory translation, host callback, or ABI is inferred.
"""
import argparse
import hashlib
from pathlib import Path
import shutil
import subprocess

EXPECTED_XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
GUEST_BASE = 0x10000
CASES = (
    (
        "0x000c9610",
        (
            (0x000C967E, "33c0"),       # xor eax,eax
            (0x000C9680, "8b502c"),     # mov edx,[eax+0x2c]
            (0x000C9683, "8d482c"),     # lea ecx,[eax+0x2c]
            (0x000C9686, "ff5210"),     # call [edx+0x10]
        ),
        "*(uint32_t *)(uintptr_t)UINT32_C(0x0000002c)",
        "(iRam0000002c + 0x10)",
    ),
    (
        "0x002f794c",
        (
            (0x002F79ED, "50"),           # push eax: DPC context
            (0x002F79EE, "6825792f00"),   # push guest callback immediate
            (0x002F79F3, "8d45dc"),       # lea eax,[ebp-0x24]
            (0x002F79F7, "ff157c633800"), # call [0x38637c]
        ),
        "KeInitializeDpc(local_28,UINT32_C(0x002f7925),&local_c);",
        "&LAB_002f7925",
    ),
)
FLAGS = (
    "-std=c11", "-fsyntax-only", "-ferror-limit=10",
    "-Wno-implicit-function-declaration", "-Wno-int-conversion",
    "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
    "-Wno-int-to-pointer-cast", "-Wno-return-type",
    "-Wno-deprecated-non-prototype",
)


def verify_original_xbe(xbe):
    data = xbe.read_bytes()
    digest = hashlib.sha256(data).hexdigest()
    if digest != EXPECTED_XBE_SHA256:
        raise AssertionError(f"Original XBE SHA-256 mismatch: {digest}")
    for entry, instructions, _, _ in CASES:
        for address, expected_hex in instructions:
            expected = bytes.fromhex(expected_hex)
            offset = address - GUEST_BASE  # both functions reside in the first XBE code section
            assert 0 <= offset <= len(data) - len(expected), f"{entry}: out-of-bounds XBE address"
            actual = data[offset:offset + len(expected)]
            assert actual == expected, f"{entry}: XBE mismatch at {address:#010x}"
            print(f"PASS original x86 {entry} instruction {address:#010x}")


def verify_sources(root):
    clang = shutil.which("clang")
    if not clang:
        raise RuntimeError("Clang is required for focused C11 checks")
    for entry, _, required, forbidden in CASES:
        digits = entry[2:]
        path = root / "src" / "main_unclassified" / f"band_{digits[:4]}" / f"{entry}.c"
        source = path.read_text(encoding="utf-8")
        assert f"Entry: {entry}" in source, f"{entry}: original entry identity missing"
        assert "Input x86 body SHA-256:" in source, f"{entry}: original body-hash comment missing"
        assert required in source, f"{entry}: evidence-backed expression missing"
        assert forbidden not in source, f"{entry}: unresolved Ghidra symbol remains"
        assert "ABI_UNVERIFIED" in source, f"{entry}: missing ABI caveat"
        command = [clang, *FLAGS, "-I", str(root / "include"), str(path)]
        result = subprocess.run(command, text=True, capture_output=True, check=False)
        if result.returncode:
            raise AssertionError(f"{entry}: focused Clang C11 failed:\n{result.stderr}")
        print(f"PASS isolated Clang C11 {entry}")


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path, help="private matching original Xbox XBE")
    args = parser.parse_args()
    if args.xbe:
        verify_original_xbe(args.xbe)
    else:
        print("Original XBE not supplied: instruction checks SKIPPED.")
    verify_sources(args.root.resolve())
    print("PASS focused syntax; guest memory, callbacks, linking, and runtime remain unverified.")


if __name__ == "__main__":
    main()
