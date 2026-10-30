#!/usr/bin/env python3
"""Verify the 0x00102300 local stack byte offset (optional original XBE).

Without --xbe, CI checks source invariants and isolated Clang C11 only.
This does not verify the indirect-call ABI or 1:1 runtime behavior.
Never commit the user-owned XBE.
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

SOURCE = Path("src/main_unclassified/band_0010/0x00102300.c")
XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
ENTRY = 0x00102300
BODY_SIZE = 0xAE
BODY_SHA256 = "932d47c2b7ff30163c71b601c28a23da26e259c6514d69d3554db3f87ccb613a"
OPCODES = {
    0x00102300: "83ec14",       # reserve 20 bytes
    0x00102321: "8d442418",     # entry ESP-16: start of local_10
    0x0010235e: "895c2414",     # write at entry ESP-8
    0x00102374: "55",           # temporary push
    0x0010238a: "50",           # temporary push
    0x00102394: "50",           # temporary push
    0x00102399: "8d54242c",     # entry ESP-8: local_10 + 8
    0x0010239d: "52",           # pass that pointer
    0x001023a0: "ff5034",       # indirect call, ABI unverified
}
FLAGS = ("-std=c11", "-fsyntax-only", "-ferror-limit=5",
         "-Wno-implicit-function-declaration", "-Wno-int-conversion",
         "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
         "-Wno-int-to-pointer-cast", "-Wno-return-type",
         "-Wno-deprecated-non-prototype")


def verify_source(source):
    for fragment in (
        "Entry: 0x00102300",
        "Input x86 body SHA-256: " + BODY_SHA256.upper(),
        "ABI_UNVERIFIED",
        "undefined1 local_10 [16];",
        "))(local_10,param_1,param_2);",
        "))(local_10 + 8,uVar4);",
    ):
        if fragment not in source:
            raise ValueError("missing 0x102300 source contract: " + fragment)
    if "stack0xffffffe8" in source or source.count("local_10 + 8") != 1:
        raise ValueError("guest stack pointer mapping regressed")


def section_read(image, va, length):
    if image[:4] != b"XBEH":
        raise ValueError("not an XBE image")
    base = int.from_bytes(image[0x104:0x108], "little")
    count = int.from_bytes(image[0x11c:0x120], "little")
    headers = int.from_bytes(image[0x120:0x124], "little") - base
    for i in range(count):
        off = headers + 0x38 * i
        start = int.from_bytes(image[off + 4:off + 8], "little")
        virtual_size = int.from_bytes(image[off + 8:off + 12], "little")
        raw = int.from_bytes(image[off + 12:off + 16], "little")
        raw_size = int.from_bytes(image[off + 16:off + 20], "little")
        if start <= va and va + length <= start + min(virtual_size, raw_size):
            offset = raw + va - start
            return image[offset:offset + length]
    raise ValueError(f"XBE address not raw-backed: {va:#x}")


def verify_xbe(image):
    if hashlib.sha256(image).hexdigest() != XBE_SHA256:
        raise ValueError("original XBE SHA-256 mismatch")
    if hashlib.sha256(section_read(image, ENTRY, BODY_SIZE)).hexdigest() != BODY_SHA256:
        raise ValueError("original 0x102300 body SHA-256 mismatch")
    for va, signature in OPCODES.items():
        expected = bytes.fromhex(signature)
        if section_read(image, va, len(expected)) != expected:
            raise ValueError(f"original opcode mismatch at {va:#x}")
    # 0x102321 LEA: entry ESP-0x28+0x18 = -0x10.
    # 0x102399 LEA: entry ESP-0x34+0x2c = -0x08.
    assert -0x28 + 0x18 == -0x10
    assert -0x34 + 0x2c == -0x08
    assert -0x08 - (-0x10) == 8


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path, help="local user-owned original XBE")
    args = parser.parse_args()
    root = args.root.resolve()
    path = root / SOURCE
    source = path.read_text(encoding="utf-8")
    verify_source(source)
    for wrong in ("local_10 + 4,uVar4", "local_10 + 12,uVar4"):
        mutated = source.replace("local_10 + 8,uVar4", wrong)
        try:
            verify_source(mutated)
        except ValueError:
            pass
        else:
            raise SystemExit("offset mutation unexpectedly passed")
    clang = shutil.which("clang")
    if not clang:
        raise SystemExit("clang is required")
    subprocess.run([clang, *FLAGS, "-I", str(root / "include"), str(path)], check=True)
    if args.xbe:
        verify_xbe(args.xbe.read_bytes())
        print("PASS 0x102300: XBE SHA, body SHA, nine opcodes, local offset and Clang")
    else:
        print("PASS 0x102300: source offset and Clang only (XBE unavailable in CI)")
    print("Indirect-call ABI and 1:1 runtime behavior remain unverified")


if __name__ == "__main__":
    main()
