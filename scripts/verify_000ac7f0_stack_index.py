#!/usr/bin/env python3
"""Check 0x000AC7F0's indexed five-word local against original x86 evidence."""
from __future__ import annotations
import argparse
import hashlib
from pathlib import Path
import shutil
import subprocess

ENTRY = 0x000AC7F0
END = 0x000AC884
XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_SHA256 = "04c1c0ff9b5faf2ceac4e72171be2b4cae005ce485428aa7be3982ab80547743"
SIGNATURES = {
    0x000AC7F0: "83ec14",       # reserve five 32-bit words
    0x000AC801: "89442410",     # first array element at ESP+0x10 after saves
    0x000AC84D: "8b4cb410",     # load local_14[ESI]
    0x000AC849: "8bd6",         # EDX=ESI before indexed load
    0x000AC856: "8b44940c",     # load [ESP+EDX*4+0x0C]
    0x000AC860: "4a",           # decrement EDX after indexed load
}

def verify_source(source: str) -> None:
    for fragment in (
        "Entry: 0x000ac7f0",
        "Input x86 body SHA-256: " + BODY_SHA256.upper(),
        "int local_14 [5];",
        "iVar7 = local_14[iVar3];",
        "iVar5 = iVar5 + -1;",
        "*(int *)(local_14[iVar5] + 0x7c)",
        "*(int *)(local_14[iVar5] + 0x80)",
    ):
        if fragment not in source:
            raise ValueError("missing source contract: " + fragment)
    if source.count("local_14[iVar5]") != 2:
        raise ValueError("both indexed node reads must use the same local array")
    if "stack0xffffffe8" in source:
        raise ValueError("unresolved stack placeholder remains")
    if source.index("iVar5 = iVar5 + -1;") > source.index("*(int *)(local_14[iVar5] + 0x7c)"):
        raise ValueError("decrement must precede the indexed load")
    for old_index in range(1, 5):
        assert 0x0C + old_index * 4 == 0x10 + (old_index - 1) * 4

def verify_xbe(xbe: bytes) -> None:
    if hashlib.sha256(xbe).hexdigest() != XBE_SHA256:
        raise ValueError("original XBE SHA-256 mismatch")
    if xbe[:4] != b"XBEH":
        raise ValueError("invalid XBE header")
    base = int.from_bytes(xbe[0x104:0x108], "little")
    count = int.from_bytes(xbe[0x11c:0x120], "little")
    headers = int.from_bytes(xbe[0x120:0x124], "little") - base
    sections = []
    for i in range(count):
        off = headers + 0x38 * i
        va, size, raw, rawsize = (
            int.from_bytes(xbe[off+j:off+j+4], "little")
            for j in (4, 8, 12, 16)
        )
        sections.append((va, min(size, rawsize), raw))

    def at(va: int, size: int) -> bytes:
        for start, length, raw in sections:
            if start <= va and va + size <= start + length:
                return xbe[raw + va - start:raw + va - start + size]
        raise ValueError(f"unmapped original XBE address: {va:#x}")

    if hashlib.sha256(at(ENTRY, END - ENTRY)).hexdigest() != BODY_SHA256:
        raise ValueError("original function-body hash mismatch")
    for va, opcode in SIGNATURES.items():
        expected = bytes.fromhex(opcode)
        if at(va, len(expected)) != expected:
            raise ValueError(f"instruction mismatch at {va:#x}")

def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe", type=Path, help="original XBE, local only; never commit")
    args = ap.parse_args()
    root = args.root.resolve()
    source = root / "src/main_unclassified/band_000a/0x000ac7f0.c"
    content = source.read_text(encoding="utf-8")
    verify_source(content)
    for mutated in (
        content.replace("local_14[iVar5] + 0x7c", "local_14[iVar5 + 1] + 0x7c", 1),
        content.replace("local_14[iVar5] + 0x80", "local_14[iVar5 + 1] + 0x80", 1),
    ):
        try:
            verify_source(mutated)
        except ValueError:
            pass
        else:
            raise SystemExit("negative source-index mutation was not detected")
    clang = shutil.which("clang")
    if clang is None:
        raise SystemExit("clang is required")
    flags = ["-std=c11", "-fsyntax-only", "-ferror-limit=3",
             "-Wno-implicit-function-declaration", "-Wno-int-conversion",
             "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
             "-Wno-int-to-pointer-cast", "-Wno-return-type",
             "-Wno-deprecated-non-prototype"]
    subprocess.run([clang, *flags, "-I", str(root / "include"), str(source)], check=True)
    if args.xbe:
        verify_xbe(args.xbe.read_bytes())
        print("0x000AC7F0: original XBE, body hash, six opcodes, stack index and C11 PASS")
    else:
        print("0x000AC7F0: source index and C11 PASS (original XBE not available in CI)")

if __name__ == "__main__":
    main()
