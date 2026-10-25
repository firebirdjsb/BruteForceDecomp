#!/usr/bin/env python3
"""Source-only CI guard and optional original-XBE proof for FUN_0015ba40.

No Xbox executable is stored in the repository. Syntax/operand checks do not
establish host guest-memory translation, register ABI, or runtime equivalence.
"""
from __future__ import annotations

import argparse
import hashlib
from pathlib import Path
import shutil
import struct
import subprocess

ENTRY = 0x0015BA40
END = 0x0015BAF5
XBE_SHA256 = "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721"
BODY_SHA256 = "9632AB80A7C1959FF9D061EA238899F4EA6FE695A253F7B857DDDDED69AF0F22"
SOURCE = Path("src/main_unclassified/band_0015/0x0015ba40.c")
INSTRUCTIONS = {
    0x0015BA49: "8d4c2410",     # LEA ECX,[ESP+10h] -> entry ESP-4
    0x0015BA50: "893b",         # MOV [EBX],EDI (EDI is zero)
    0x0015BA55: "897c2410",     # MOV [ESP+10h],EDI -> entry ESP-12
    0x0015BA59: "ff500c",       # first ESI vtable callback +0x0c
    0x0015BA5C: "f644241010",   # TEST BYTE [ESP+10h],10h
    0x0015BA7D: "ff501c",       # flag-set path callback +0x1c
    0x0015BA98: "ff5018",       # flag-clear path callback +0x18
    0x0015BAAD: "897c2414",     # zero entry ESP-8 output before callback
    0x0015BAB4: "ff5210",       # selected object callback +0x10
    0x0015BABF: "ff5220",       # selected object callback +0x20
    0x0015BACA: "894500",       # MOV [EBP],EAX: guest DWORD output
    0x0015BAD0: "ff5104",       # addref on selected output +0x04
    0x0015BADE: "ff5208",       # release selected output +0x08
    0x0015BAEC: "ff5108",       # release current object +0x08
    0x0015BAF4: "c3",           # plain RET (caller pops one DWORD)
}
CALL_SITES = (0x0015BEDB, 0x0015C9A7, 0x0015DFCD)
FLAGS = (
    "-std=c11", "-fsyntax-only", "-ferror-limit=3",
    "-Wno-implicit-function-declaration", "-Wno-int-conversion",
    "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
    "-Wno-int-to-pointer-cast", "-Wno-return-type",
    "-Wno-deprecated-non-prototype",
)


def verify_source(source: str) -> None:
    assert "Entry: 0x0015ba40" in source
    assert f"Input x86 body SHA-256: {BODY_SHA256}" in source
    assert "ABI_UNVERIFIED" in source
    assert "guest32" in source
    assert "s_23_23_ISchema_00406e3c._0_4_" not in source
    assert "uint32_t guest_flags;" in source  # not invented zero initialization
    assert "int *guest_current = (int *)0;" in source
    assert "int *guest_selected;" in source
    assert source.count("*unaff_EBX = 0;") == 1
    assert source.count("(**(code **)(*unaff_ESI + 0x0c))(unaff_ESI, &guest_flags);") == 1
    assert "if ((guest_flags & UINT32_C(0x10)) != 0)" in source
    branch = source.split("if ((guest_flags & UINT32_C(0x10)) != 0)", 1)[1]
    assert "} else {" in branch
    flag_set, flag_clear = branch.split("} else {", 1)
    assert "(*unaff_ESI + 0x1c))(unaff_ESI, &guest_current)" in flag_set
    assert "(*unaff_ESI + 0x18))(unaff_ESI, &guest_current)" in flag_clear
    assert source.count("guest_current = (int *)0;") == 3
    assert source.count("(*guest_current + 0x08))(guest_current)") == 3
    assert source.count("(*guest_selected + 0x08))(guest_selected)") == 1
    assert source.count("guest_selected = (int *)0;") == 1
    callback = "(*guest_current + 0x10))\n        (guest_current, s_23_23_ISchema_00406e3c, &guest_selected)"
    assert callback in source
    assert source.count("(*guest_current + 0x20))(guest_current, unaff_EBX)") == 1
    assert source.index(callback) < source.index("(*guest_current + 0x20))")
    assert "*param_1 = (uint32_t)(uintptr_t)guest_selected;" in source
    assert "(*guest_selected + 0x04))(guest_selected)" in source
    assert source.index("*param_1 = (uint32_t)") < source.index("(*guest_selected + 0x04))")
    assert source.index("(*guest_selected + 0x04))") < source.index("(*guest_selected + 0x08))")


def mutation_controls(source: str) -> None:
    mutations = (
        ("*unaff_EBX = 0;", "*unaff_EBX = 1;"),
        ("UINT32_C(0x10)", "UINT32_C(0x08)"),
        ("(*unaff_ESI + 0x1c))", "(*unaff_ESI + 0x18))"),
        ("(*unaff_ESI + 0x18))", "(*unaff_ESI + 0x1c))"),
        ("guest_selected = (int *)0;", "guest_selected = (int *)1;"),
        ("*param_1 = (uint32_t)(uintptr_t)guest_selected;", "*param_1 = 0;"),
        ("(*guest_selected + 0x04))", "(*guest_selected + 0x08))"),
        ("(*guest_selected + 0x08))", "(*guest_selected + 0x04))"),
        ("(guest_current, s_23_23_ISchema_00406e3c, &guest_selected)",
         "(guest_current, guest_current, &guest_selected)"),
        ("(*guest_current + 0x20))(guest_current, unaff_EBX)",
         "(*guest_current + 0x24))(guest_current, unaff_EBX)"),
    )
    for before, after in mutations:
        assert before in source, f"missing negative-control anchor: {before}"
        try:
            verify_source(source.replace(before, after, 1))
        except AssertionError:
            continue
        raise AssertionError(f"source mutation was not rejected: {before}")


def verify_xbe(path: Path) -> None:
    data = path.read_bytes()
    assert hashlib.sha256(data).hexdigest().upper() == XBE_SHA256
    assert data[:4] == b"XBEH"
    image_base = struct.unpack_from("<I", data, 0x104)[0]
    section_count, section_headers = struct.unpack_from("<II", data, 0x11C)
    assert section_count > 0
    def at(va: int, count: int) -> bytes:
        for i in range(section_count):
            sh = section_headers - image_base + i * 56
            _, start, _, raw, raw_len = struct.unpack_from("<5I", data, sh)
            if start <= va and va + count <= start + raw_len:
                return data[raw + va - start:raw + va - start + count]
        raise AssertionError(f"XBE address not file-backed: {va:08x}")
    assert hashlib.sha256(at(ENTRY, END - ENTRY)).hexdigest().upper() == BODY_SHA256
    for va, encoded in INSTRUCTIONS.items():
        assert at(va, len(encoded) // 2).hex() == encoded, f"x86 mismatch at {va:08x}"
    for va in CALL_SITES:
        op = at(va, 5)
        assert op[0] == 0xE8
        dest = va + 5 + struct.unpack_from("<i", op, 1)[0]
        assert dest == ENTRY, f"call {va:08x} unexpectedly targets {dest:08x}"
    # Representative caller register and output-slot preparation instructions.
    assert at(0x0015BED3, 4).hex() == "8d5c2414"  # EBX = &caller word
    assert at(0x0015C9A5, 2).hex() == "8bf5"      # ESI = EBP
    assert at(0x0015DFC1, 4).hex() == "8d5c2420"  # EBX = &caller word


def compile_source(root: Path) -> None:
    clang = shutil.which("clang")
    if clang is None:
        raise RuntimeError("Clang is required for this focused source gate")
    for opt in ("-O0", "-O2"):
        subprocess.run(
            [clang, *FLAGS, opt, "-I", str(root / "include"), str(root / SOURCE)],
            check=True, capture_output=True, text=True,
        )


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path, help="private original XBE, never committed")
    args = parser.parse_args()
    root = args.root.resolve()
    source = (root / SOURCE).read_text(encoding="utf-8")
    verify_source(source)
    mutation_controls(source)
    compile_source(root)
    if args.xbe is not None:
        verify_xbe(args.xbe)
    print("0x0015BA40: source and Clang O0/O2 pass; 10 negative controls rejected; "
          + ("XBE body, 15 instruction sites, 3 call sites verified" if args.xbe else
             "original XBE not supplied (source-only CI)"))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
