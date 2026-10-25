#!/usr/bin/env python3
"""Check 0x0034877B return high-byte OR; not a complete Xbox ABI test.

With --xbe, also check the exact retail XBE, original function-body hash
and fourteen instruction windows. Public CI has no copyrighted executable.
"""
from __future__ import annotations
import argparse
import hashlib
import re
import shutil
import struct
import subprocess
import tempfile
from pathlib import Path

ENTRY = 0x0034877B
BODY_SIZE = 243
BODY_SHA = "286708EAB1064E1E19895956777AED206ED2C5ACACEA7689389B7A21D7568841"
XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE = Path("src/platform/network_xnet/0x0034877b.c")
HARNESS = Path("tests/test_0034877b_guest_flags.c")
EXPR = "uVar3 = (ushort)(uVar3 | UINT16_C(0x8000));"
SITES = {
    0x0034878A: "8b5508",           # output pointer from incoming stack slot
    0x00348797: "f3ab",             # initialize nine output DWORDs
    0x003487B6: "897508",           # overwrite incoming slot with zero flags
    0x003487C9: "c7450804000000",   # return flag = 4
    0x003487F0: "c7450808000000",   # return flag = 8
    0x003487FF: "834d0820",         # OR return flags with 0x20
    0x0034880B: "834d0840",         # OR return flags with 0x40
    0x0034882A: "894a04",           # output pointer remains separate
    0x00348836: "66894a08",         # 16-bit output field store
    0x00348844: "804d0880",         # OR LOW flag byte with 0x80
    0x0034884E: "f683730a000080",   # test network-state high bit
    0x00348857: "804d0980",         # OR HIGH flag byte with 0x80
    0x00348864: "8b4508",           # EAX = full return flag DWORD
    0x0034886B: "c20400",           # RET 4 guest argument cleanup
}
FLAGS = (
    "-std=c11", "-fsyntax-only", "-ferror-limit=10",
    "-Wno-implicit-function-declaration", "-Wno-int-conversion",
    "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
    "-Wno-int-to-pointer-cast", "-Wno-return-type",
    "-Wno-deprecated-non-prototype",
)

def check_source(source: str) -> None:
    body = re.sub(r"/\*.*?\*/|//[^\n]*", "", source, flags=re.S)
    for marker in (
        f"Entry: 0x{ENTRY:08x},",
        f"Input x86 body SHA-256: {BODY_SHA}",
        "ABI_UNVERIFIED",
    ):
        if marker not in source:
            raise ValueError(f"Provenance changed: {marker}")
    for marker in (
        "ushort FUN_0034877b(undefined4 *param_1)",
        "puVar5 = param_1;",
        "*param_1 = *(undefined4 *)(in_ECX + 0x268);",
        "param_1[1] = *(undefined4 *)(*piVar1 + 0xd8);",
        "uVar3 = 0;",
        "uVar3 = uVar3 | 0x20;",
        "uVar3 = uVar3 | 0x40;",
        "uVar3 = uVar3 | 0x80;",
        "if ((*(byte *)(in_ECX + 0xa73) & 0x80) != 0)",
        EXPR, "KfLowerIrql();", "return uVar3;",
    ):
        if marker not in body:
            raise ValueError(f"Source contract changed: {marker}")
    if body.count(EXPR) != 1:
        raise ValueError("High-byte OR must occur exactly once")
    for bad in ("param_1._0_2_", "uVar3 = (ushort)param_1;"):
        if bad in body:
            raise ValueError(f"Pointer/flag alias regression: {bad}")

def test_negative_controls(source: str) -> int:
    changes = (
        (EXPR, "uVar3 = (ushort)(uVar3 | UINT16_C(0x0080));"),
        (EXPR, "uVar3 = (ushort)(uVar3 | UINT16_C(0x4000));"),
        (EXPR, "uVar3 = (ushort)(uVar3 & UINT16_C(0x8000));"),
        (EXPR, EXPR + "\n      param_1._0_2_ = 0;"),
        ("return uVar3;", "return 0;"),
        ("in_ECX + 0xa73", "in_ECX + 0xa72"),
        ("uVar3 = uVar3 | 0x80;", "uVar3 = uVar3 | 0x8000;"),
        ("param_1[1] = *(undefined4 *)(*piVar1 + 0xd8);", "param_1[1] = 0;"),
        ("Input x86 body SHA-256: " + BODY_SHA,
         "Input x86 body SHA-256: " + "0" * 64),
    )
    for before, after in changes:
        if before not in source:
            raise ValueError(f"Negative control anchor missing: {before}")
        try:
            check_source(source.replace(before, after, 1))
        except ValueError:
            continue
        raise ValueError(f"Incorrect source mutation accepted: {before}")
    return len(changes)

def verify_xbe(path: Path) -> None:
    data = path.read_bytes()
    if data[:4] != b"XBEH" or hashlib.sha256(data).hexdigest() != XBE_SHA:
        raise ValueError("Original retail XBE header or SHA-256 mismatch")
    base = struct.unpack_from("<I", data, 0x104)[0]
    count, table = struct.unpack_from("<II", data, 0x11C)
    if not 0 < count < 128:
        raise ValueError("Invalid XBE section count")
    sections = []
    for i in range(count):
        offset = table - base + i * 0x38
        if not 0 <= offset <= len(data) - 20:
            raise ValueError("Invalid XBE section descriptor")
        _, va, vsize, raw, rsize = struct.unpack_from("<IIIII", data, offset)
        sections.append((va, min(vsize, rsize), raw))
    def read(va: int, size: int) -> bytes:
        for start, span, raw in sections:
            if start <= va and va + size <= start + span:
                if raw + va - start + size > len(data):
                    raise ValueError("Truncated XBE section")
                return data[raw + va - start:raw + va - start + size]
        raise ValueError(f"Unmapped XBE address 0x{va:08x}")
    if hashlib.sha256(read(ENTRY, BODY_SIZE)).hexdigest().upper() != BODY_SHA:
        raise ValueError("Original 243-byte function body digest mismatch")
    for va, encoded in SITES.items():
        expected = bytes.fromhex(encoded)
        if read(va, len(expected)) != expected:
            raise ValueError(f"Original instruction mismatch at 0x{va:08x}")

def verify_source(root: Path) -> int:
    source = (root / SOURCE).read_text(encoding="utf-8")
    check_source(source)
    negatives = test_negative_controls(source)
    clang = shutil.which("clang")
    if not clang:
        raise RuntimeError("Clang required")
    for opt in ("-O0", "-O2"):
        run = subprocess.run(
            [clang, *FLAGS, opt, "-I", str(root / "include"), str(root / SOURCE)],
            capture_output=True, text=True, timeout=60,
        )
        if run.returncode:
            raise ValueError(f"Isolated Clang {opt}: {run.stderr[:1200]}")
        with tempfile.TemporaryDirectory() as tmp:
            exe = Path(tmp) / "flags"
            run = subprocess.run(
                [clang, "-std=c11", opt, "-Wall", "-Wextra", "-Werror",
                 "-pedantic-errors", str(root / HARNESS), "-o", str(exe)],
                capture_output=True, text=True, timeout=60,
            )
            if run.returncode:
                raise ValueError(f"Flag harness Clang {opt}: {run.stderr[:1200]}")
            run = subprocess.run([str(exe)], capture_output=True, text=True, timeout=60)
            if run.returncode or "PASS: 65536 guest return flag patterns" not in run.stdout:
                raise ValueError(f"Flag harness {opt}: {run.stderr[:1200]}")
    return negatives

def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    negatives = verify_source(args.root.resolve())
    if args.xbe:
        verify_xbe(args.xbe)
    print(f"PASS: 0x{ENTRY:08X}, {len(SITES)} original instruction sites "
          f"{'verified' if args.xbe else 'not checked (no XBE)'}, "
          f"{negatives} source-mutation controls, Clang O0/O2, "
          "65536-case host flags. Guest ABI/linkage/runtime unverified.")

if __name__ == "__main__":
    main()
