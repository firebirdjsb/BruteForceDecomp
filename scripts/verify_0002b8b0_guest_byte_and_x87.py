#!/usr/bin/env python3
"""Focused 0x0002b8b0 source/Clang regression; optional private original XBE check.

The original executable must never be checked into the public repository.
This checks only three observed instructions and C11 syntax, NOT the Xbox ABI.
"""
import argparse
import hashlib
from pathlib import Path
import subprocess

EXPECTED_XBE_SHA256 = "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721"
ENTRY = "0x0002b8b0"
BODY_SHA256 = "D5CDAB3151F5EF0347BF1019835EF5C8AC8D467E47563B51BC31F0EB1E551FD8"
INSTRUCTIONS = {
    0x0002BA23: "d95c2414",  # fstp dword [esp+0x14]
    0x0002BA38: "d9442414",  # fld dword [esp+0x14]
    0x0002BC5C: "8b4c24140fb6491481e101ffffff",  # byte [stack-pointer+0x14] & 1
}
REQUIRED_SOURCE = (
    "bVar6 = *((byte *)local_154 + 0x14) & 1;",
    "fStack_154 = (float)fVar7;",
    "(float10)fStack_154 <= fVar7 * (float10)3.5",
)


def read_xbe_va(data: bytes, address: int, size: int) -> bytes:
    if data[:4] != b"XBEH":
        raise AssertionError("not an XBEH executable")
    base = int.from_bytes(data[0x104:0x108], "little")
    count = int.from_bytes(data[0x11c:0x120], "little")
    table = int.from_bytes(data[0x120:0x124], "little") - base
    for i in range(count):
        off = table + 56 * i
        va = int.from_bytes(data[off+4:off+8], "little")
        raw_off = int.from_bytes(data[off+12:off+16], "little")
        raw_size = int.from_bytes(data[off+16:off+20], "little")
        if va <= address and address + size <= va + raw_size:
            start = raw_off + address - va
            return data[start:start+size]
    raise AssertionError(f"unmapped original Xbox VA {address:#x}")


def verify(root: Path, xbe: Path | None) -> None:
    source = root / "src/main_unclassified/band_0002/0x0002b8b0.c"
    text = source.read_text(encoding="utf-8")
    assert f"Entry: {ENTRY}" in text
    assert f"Input x86 body SHA-256: {BODY_SHA256}" in text
    for expression in REQUIRED_SOURCE:
        assert expression in text, f"lost verified source expression: {expression}"
    assert "bRam00000014" not in text
    assert "(int *)(float)fVar7" not in text
    assert "(float)local_154" not in text
    cmd = ["clang", "-std=c11", "-fsyntax-only", "-ferror-limit=0",
           "-Wno-implicit-function-declaration", "-Wno-int-conversion",
           "-I", str(root / "include"), str(source)]
    subprocess.run(cmd, check=True)
    if xbe is not None:
        data = xbe.read_bytes()
        assert hashlib.sha256(data).hexdigest().upper() == EXPECTED_XBE_SHA256
        for address, hex_bytes in INSTRUCTIONS.items():
            expected = bytes.fromhex(hex_bytes)
            assert read_xbe_va(data, address, len(expected)) == expected, (
                f"original instruction drift at {address:#x}"
            )
    print("0x0002b8b0 focused C11/source checks PASS"
          + ("; original XBE instructions PASS" if xbe else "; XBE not present in CI"))


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parent.parent)
    parser.add_argument("--xbe", type=Path, help="private original XBE path; never commit")
    args = parser.parse_args()
    verify(args.root, args.xbe)
