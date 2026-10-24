#!/usr/bin/env python3
"""Focused 0x000d0c20 incoming guest-word layout regression.

Checks source and host C11 syntax; optional private XBE bytes verify the
observed LEA, fourth-word read, callee offsets and RET 10h. No ABI claim.
"""
import argparse
import hashlib
from pathlib import Path
import subprocess

EXPECTED_SHA256 = "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721"
BODY_SHA256 = "71D8C7BB9D95913384304E77FE83833A2DFCF86074E7F9705FF48011548B9F2E"
INSTRUCTIONS = {
    0x000D0C4C: "8d542410",  # first incoming DWORD address
    0x000D0C92: "8b44241c",  # fourth incoming DWORD read
    0x000D0CA6: "c21000",    # original callee pops 16 bytes
    0x000D0D41: "8b45148b08",  # callee loads record pointer and word 0
    0x000D0D49: "8b5004",      # word +4
    0x000D0D56: "8b400c",      # word +12
}
REQUIRED = (
    "typedef struct {",
    "undefined4 word_04;",
    "undefined4 word_08;",
    "undefined4 word_0c;",
    "undefined4 word_10;",
    "_Static_assert(sizeof(bf_000d0c20_incoming_words) == 16",
    "_Static_assert(offsetof(bf_000d0c20_incoming_words, word_10) == 12",
    "void FUN_000d0c20(bf_000d0c20_incoming_words guest_words)",
    "in_EAX - iVar2,&guest_words);",
    "if (guest_words.word_10 != 0)",
)


def original_bytes(data: bytes, va: int, length: int) -> bytes:
    assert data[:4] == b"XBEH"
    base = int.from_bytes(data[0x104:0x108], "little")
    sections = int.from_bytes(data[0x11c:0x120], "little")
    table = int.from_bytes(data[0x120:0x124], "little") - base
    for i in range(sections):
        p = table + i * 56
        start = int.from_bytes(data[p+4:p+8], "little")
        raw = int.from_bytes(data[p+12:p+16], "little")
        size = int.from_bytes(data[p+16:p+20], "little")
        if start <= va and va + length <= start + size:
            return data[raw+va-start:raw+va-start+length]
    raise AssertionError(f"unmapped original Xbox VA {va:#x}")


def verify(root: Path, xbe: Path | None) -> None:
    path = root / "src/main_unclassified/band_000d/0x000d0c20.c"
    source = path.read_text(encoding="utf-8")
    assert "Entry: 0x000d0c20" in source
    assert f"Input x86 body SHA-256: {BODY_SHA256}" in source
    for token in REQUIRED:
        assert token in source, f"missing guest-record evidence: {token}"
    assert "stack0x00000004" not in source
    assert "in_stack_00000010" not in source
    subprocess.run(["clang", "-std=c11", "-fsyntax-only", "-ferror-limit=0",
                    "-Wno-implicit-function-declaration", "-Wno-int-conversion",
                    "-I", str(root / "include"), str(path)], check=True)
    if xbe:
        data = xbe.read_bytes()
        assert hashlib.sha256(data).hexdigest().upper() == EXPECTED_SHA256
        for va, hexdump in INSTRUCTIONS.items():
            expected = bytes.fromhex(hexdump)
            assert original_bytes(data, va, len(expected)) == expected, (
                f"original instruction mismatch at {va:#x}"
            )
    print("0x000d0c20 guest-word record/Clang PASS"
          + ("; original XBE PASS" if xbe else "; XBE absent in CI"))


if __name__ == "__main__":
    p = argparse.ArgumentParser()
    p.add_argument("--root", type=Path, default=Path(__file__).resolve().parent.parent)
    p.add_argument("--xbe", type=Path, help="private original XBE path; never commit")
    a = p.parse_args()
    verify(a.root, a.xbe)
