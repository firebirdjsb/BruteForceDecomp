#!/usr/bin/env python3
"""Verify 0x001252B0's local vcall output slot and isolated C11 syntax.

Without --xbe only source invariants and Clang are checked. The original
copyrighted Xbox executable must remain outside the Git repository.
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
from pathlib import Path
import shutil
import subprocess

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / "src/main_unclassified/band_0012/0x001252b0.c"
XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_SHA256 = "4a15d864ce1c280f3fda149b00ffd5c5ca990fb66481dc6e26db4a6aece7b344"
ENTRY = 0x001252B0
BODY_SIZE = 845
# Verified instruction bytes: first buffer is ESP+0x20, output starts
# at ESP+0x10, the output's first DWORD is zeroed after PUSH changes ESP,
# and the indirect call targets vtable offset +0xC4.
WINDOWS = {
    0x0012541A: "8d4c242051",
    0x00125475: "8d4c2410",
    0x00125479: "51",
    0x0012547A: "8bcf",
    0x0012547C: "895c2414",
    0x00125480: "ff90c4000000",
    0x00125497: "8b442410",
}
REQUIRED = (
    "Entry: 0x001252b0",
    "Input x86 body SHA-256: 4A15D864CE1C280F3FDA149B00FFD5C5CA990FB66481DC6E26DB4A6AECE7B344",
    "ABI_UNVERIFIED",
    "uint32_t guest_out_40[4];",
    "undefined1 auStack_30 [36];",
    "guest_out_40[0] = 0;",
    "(*piVar3 + 0xc4))(guest_out_40);",
)


def check_source(source):
    missing = [piece for piece in REQUIRED if piece not in source]
    if missing or "&stack0xffffffbc" in source:
        raise ValueError(f"0x001252b0 source contract changed: {missing}")


def check_original_xbe(path):
    data = path.read_bytes()
    actual = hashlib.sha256(data).hexdigest()
    if actual != XBE_SHA256:
        raise ValueError(f"original XBE SHA-256 mismatch: {actual}")
    # The verified main XBE code section maps VA to file offset VA-0x10000.
    body_offset = ENTRY - 0x10000
    body = data[body_offset:body_offset + BODY_SIZE]
    if hashlib.sha256(body).hexdigest() != BODY_SHA256:
        raise ValueError("original 0x001252b0 845-byte body hash mismatch")
    for va, encoded in WINDOWS.items():
        expected = bytes.fromhex(encoded)
        offset = va - 0x10000
        if data[offset:offset + len(expected)] != expected:
            raise ValueError(f"original x86 instruction bytes mismatch at {va:#x}")
    print(f"original XBE SHA, body hash, and {len(WINDOWS)} instruction windows PASS")


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--xbe", type=Path, help="authenticated original Xbox XBE")
    args = parser.parse_args()
    source = SOURCE.read_text(encoding="utf-8")
    check_source(source)
    # Negative mutation checks ensure this regression guard can fail.
    for piece in REQUIRED[3:]:
        mutated = source.replace(piece, "", 1)
        try:
            check_source(mutated)
        except ValueError:
            pass
        else:
            raise SystemExit(f"source regression guard failed to reject removal of {piece}")
    if args.xbe is not None:
        check_original_xbe(args.xbe)
    else:
        print("original XBE unavailable in CI: instruction verification NOT performed")
    clang = shutil.which("clang")
    if not clang:
        raise SystemExit("clang required")
    flags = (
        "-std=c11", "-fsyntax-only", "-ferror-limit=3",
        "-Wno-implicit-function-declaration", "-Wno-int-conversion",
        "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
        "-Wno-int-to-pointer-cast", "-Wno-return-type",
        "-Wno-deprecated-non-prototype",
    )
    result = subprocess.run(
        [clang, *flags, "-I", str(ROOT / "include"), str(SOURCE)],
        capture_output=True, text=True, check=False,
    )
    if result.returncode:
        raise SystemExit(f"0x001252b0 isolated Clang C11 FAIL:\n{result.stderr}")
    print("0x001252b0 source contract, mutation guards and isolated Clang C11 PASS")
    print("Full function ABI, vtable callee writes, and native runtime NOT verified")


if __name__ == "__main__":
    main()
