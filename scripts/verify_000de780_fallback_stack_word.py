#!/usr/bin/env python3
"""Check FUN_000DE780 fallback stack word. No native ABI equivalence claimed."""
from __future__ import annotations

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
import re
import shutil
import struct
import subprocess

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_COMMENT = "0723BBA9307522B717A5D6AA6775DD360D6FCF2E639A9A113C20789FC8610551"
SOURCE = Path("src/main_unclassified/band_000d/0x000de780.c")
OPCODES = {
    0x000DE7B6: "83780801",  # CMP DWORD [EAX+8],1
    0x000DE7BC: "83c00c",    # object branch ADD EAX,0Ch
    0x000DE7C4: "33d2",      # fallback XOR EDX,EDX
    0x000DE7C6: "89542414",  # write DWORD [ESP+14h]
    0x000DE7CA: "8d442410",  # fallback LEA EAX,[ESP+10h]
    0x000DE7D1: "8b4004",    # shared load DWORD [EAX+4]
    0x000DE80A: "8d7c2410",  # local_10 LEA EDI,[ESP+10h]
}
FLAGS = (
    "-std=c11", "-fsyntax-only", "-ferror-limit=3",
    "-Wno-implicit-function-declaration", "-Wno-int-conversion",
    "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
    "-Wno-int-to-pointer-cast", "-Wno-return-type",
    "-Wno-deprecated-non-prototype",
)

def source_check(source: str) -> None:
    for token in (
        "Entry: 0x000de780, Ghidra index: 2717, label: FUN_000de780",
        "Input x86 body SHA-256: " + BODY_COMMENT,
        "ABI_UNVERIFIED", "XBE 0x000DE7C6 zeroes [ESP+14h]",
        "0x000DE7CA selects", "0x000DE7D1 loads its +4 DWORD",
    ):
        if token not in source:
            raise AssertionError("missing provenance or annotation: " + token)
    code = re.sub(r"/\*.*?\*/|//[^\n]*", "", source, flags=re.S)
    for token in (
        "if (*(int *)(puVar1 + 8) != 1)",
        "local_c = 0;", "iVar2 = local_c;",
        "else {\n        iVar2 = *(int *)(puVar1 + 0x10);\n      }",
    ):
        if token not in code:
            raise AssertionError("branch storage contract changed: " + token)
    if "stack0xffffffe4" in code or code.count("iVar2 = local_c;") != 1:
        raise AssertionError("fallback stack identity regressed")

def va_reader(xbe: bytes):
    if xbe[:4] != b"XBEH" or hashlib.sha256(xbe).hexdigest() != XBE_SHA:
        raise AssertionError("not the verified retail Xbox executable")
    base, = struct.unpack_from("<I", xbe, 0x104)
    count, table = struct.unpack_from("<II", xbe, 0x11C)
    sections = []
    for i in range(count):
        off = table - base + i * 0x38
        _, va, virtual_size, raw, raw_size = struct.unpack_from("<5I", xbe, off)
        sections.append((va, min(virtual_size, raw_size), raw))
    def read(va: int, size: int) -> bytes:
        for start, length, raw in sections:
            if start <= va and va + size <= start + length:
                offset = raw + va - start
                if offset + size <= len(xbe):
                    return xbe[offset:offset + size]
        raise AssertionError(f"guest address unmapped: {va:#x}")
    return read

def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe", type=Path, help="private retail XBE; never commit")
    args = ap.parse_args()
    root = args.root.resolve()
    source = (root / SOURCE).read_text(encoding="utf-8")
    source_check(source)
    for changed in (
        source.replace("iVar2 = local_c;", "iVar2 = 0;", 1),
        source.replace("iVar2 = *(int *)(puVar1 + 0x10);", "iVar2 = local_c;", 1),
        source.replace("Input x86 body SHA-256: " + BODY_COMMENT, "Input x86 body SHA-256: UNKNOWN", 1),
    ):
        try:
            source_check(changed)
        except AssertionError:
            pass
        else:
            raise AssertionError("negative control failed")
    clang = shutil.which("clang")
    if clang is None:
        raise SystemExit("clang required")
    result = subprocess.run([clang, *FLAGS, "-I", str(root / "include"), str(root / SOURCE)],
                            capture_output=True, text=True, check=False)
    if result.returncode:
        raise AssertionError("focused Clang C11 failure:\n" + result.stderr[-2000:])
    print("PASS: source identity, stack branch, three negative controls, Clang C11")
    if args.xbe:
        read = va_reader(args.xbe.read_bytes())
        for va, opcode in OPCODES.items():
            if read(va, len(opcode) // 2) != bytes.fromhex(opcode):
                raise AssertionError(f"retail x86 opcode mismatch at {va:#x}")
        if 0x10 + 4 != 0x14:
            raise AssertionError("stack offset mismatch")
        print(f"PASS: original XBE SHA-256 and {len(OPCODES)} instruction fingerprints")
    else:
        print("No retail XBE in CI; native ABI and runtime remain unverified")

if __name__ == "__main__":
    main()
