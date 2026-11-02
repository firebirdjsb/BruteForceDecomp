#!/usr/bin/env python3
"""Source-only C++17 XNet forwarder declaration gate (NOT Xbox ABI proof).

The original retail XBE is deliberately NOT consumed by this test.  A full
1:1 claim requires independent original-x86 caller/register/RET evidence.
"""
from __future__ import annotations

import argparse
import hashlib
from pathlib import Path
import re
import subprocess
import sys
import tempfile

# caller, source-draft callee, exact audited original source SHA-256,
# original XBE function-body digest LABEL (not binary reauthentication).
EDGES = (
    ("00344fd9", "00344fb7", "3612b51cc88ea1050ec75deb09eb108f1035509a8f0c063be40fad0f4f0f2052", "48F00414AEBEEFBB087B5EBE7B5AB822D50C06CACF58ABA1B1260C084A00F8D2"),
    ("00344fe4", "00344fc8", "6b891249cf29572c1f0237e1e33243a0fb25ddd0869cbaa7ecf6cf9feda5443c", "62C4D6AE4086E15DDF7FB0CA041052D8846B2C313C931BEAE8D89E475A3005F5"),
    ("00344ffa", "00344f20", "5cc5a3ff6a8cafe059d20e4cd7644a65c051edaa3ffab07f72c5a8216fe11631", "7C00E2862CA59A1A1302AA967CBE2AADDBE1492452F5C8C5770044437D42688F"),
    ("00345005", "00344f31", "c48eecb35474a943cb9fc6c418e4d90fcd75075a1c813a922dd8999940a2a7b4", "8D4CD2B3DE907D2B0752221245684CE46214C9EC0BD787A2106DD98D8AE90576"),
    ("00345010", "00344f42", "b218f2fbda48ec7203d70afd392a2aeb411bf10033df570c1ddbf792778a9cb4", "F3C33503CBBE1906103CF514B3BE6CA6AC54EEFA864788464A1BEBF510EFF206"),
    ("00345049", "00344f7f", "f29c2aadd1007f940fe57a3ec2f0dc42ff300edaa4194e01a97223b50ec30586", "CA4A0C6CCE3CB287F5C70A944A394D76446A795F8A02AFFAB5A574FC80AD2D6C"),
    ("00345054", "00344f90", "edab37ac5bea62799517b2b33ee0600f62ef3758e09f88a36692367fd51e88d5", "C996CA7D20F37C76504AA46870CE1B2AE3E546EF29EB01162E1ED899531E4D21"),
    ("00345063", "00344fa6", "1a41abecb053e442c69b3d33bd8efc7ee80352f1b2e4c225139d9f2b28b5ceb5", "18AE3FB3FAD9865CA53CECCE42A5869F772FB4147E249C2C99A2B4C40D7B5A00"),
    ("0034506e", "00344f70", "e9280733f3b6a5640e055ec012e84c97540999fba9068a0131303e25ea0d7779", "F6AE6AD81C30AA75854CFC934E3D73E1C7FC6C089B11C252526BB16037F7D8AF"),
    ("003451ac", "0034516d", "5313a6506e9422a93847d4a8cadcf7d4ab726f081f7721b555170b2ee5bd2140", "3E9F9C7F8047CE03EE72731174E1D03FBEC694F88CFC9522B0BCFE23196404DA"),
)


def declaration(callee: str) -> str:
    return (
        "/* C++17 draft declaration copied from the original-address callee source.\n"
        " * ABI_UNVERIFIED: source-only prototype; not a verified Xbox calling convention. */\n"
        f"extern undefined4 FUN_{callee}(void);\n"
    )


def check(root: Path, clang: str) -> None:
    include = root / "include"
    assert (include / "bf_ghidra_types.h").is_file(), "missing canonical include"
    for caller, callee, original_source_sha, original_body_sha in EDGES:
        path = root / "src" / "platform" / "network_xnet" / f"0x{caller}.cpp"
        callee_path = path.with_name(f"0x{callee}.cpp")
        raw = path.read_bytes()
        src = raw.decode("utf-8")
        callee_src = callee_path.read_text(encoding="utf-8")
        decl = declaration(callee)
        assert src.count(decl) == 1, f"0x{caller}: missing/duplicate exact declaration"
        assert re.search(rf"\bundefined4\s+FUN_{callee}\s*\(void\)", callee_src), (
            f"0x{caller}: callee draft signature drifted"
        )
        assert f"Input x86 body SHA-256: {original_body_sha}" in src, (
            f"0x{caller}: original XBE body digest LABEL changed"
        )
        assert f"Entry: 0x{caller}" in src and "ABI_UNVERIFIED" in src
        original = src.replace(decl, "", 1)
        assert hashlib.sha256(original.encode()).hexdigest() == original_source_sha, (
            f"0x{caller}: source preimage drift (original body or metadata changed)"
        )
        assert re.search(
            rf"void\s+FUN_{caller}\(void\)\s*\{{\s*FUN_{callee}\(\);\s*return;\s*\}}\s*$",
            src,
        ), f"0x{caller}: forwarder body changed"
        for opt in ("-O0", "-O2"):
            run = subprocess.run(
                [clang, "-std=c++17", "-fsyntax-only", opt, "-I", str(include), str(path)],
                text=True, capture_output=True, check=False,
            )
            assert run.returncode == 0, f"0x{caller} {opt}: {run.stderr}"
        with tempfile.TemporaryDirectory() as tmp:
            negative = Path(tmp) / f"0x{caller}.cpp"
            negative.write_text(original, encoding="utf-8")
            run = subprocess.run(
                [clang, "-std=c++17", "-fsyntax-only", "-I", str(include), str(negative)],
                text=True, capture_output=True, check=False,
            )
            assert run.returncode != 0 and f"undeclared identifier 'FUN_{callee}'" in run.stderr, (
                f"0x{caller}: declaration-removal negative control did not fail as expected"
            )
        print(f"PASS 0x{caller} -> 0x{callee}: exact source, matching callee draft, Clang O0/O2, negative")
    print(f"PASS {len(EDGES)} source-only forwarders; no original-XBE verification claimed")


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--clang", default="clang++")
    args = ap.parse_args()
    check(args.root.resolve(), args.clang)
    return 0


if __name__ == "__main__":
    try:
        sys.exit(main())
    except (AssertionError, OSError) as exc:
        print(f"FAIL: {exc}", file=sys.stderr)
        sys.exit(1)
