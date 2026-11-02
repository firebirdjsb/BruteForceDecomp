#!/usr/bin/env python3
"""Exact-source C++17 declaration checks; no Xbox ABI/behavior claims."""
import argparse
import hashlib
import re
import shutil
import subprocess
import tempfile
from pathlib import Path

BLOCK_NOTE = "/* ABI_UNVERIFIED: callee source-draft signatures only; Xbox CALL/RET not checked. */\n"
CALLERS = {
    "000e4570": ("702e05e40e01fa6f79ced5d772e908e4b93f3c10", "B02E4FC2E233427C3A79B0FBDD675A55EADDF8BB898CE62DAF932DAD3C3A6562", (
        "extern void FUN_00056aa0(void);", "extern uint32_t FUN_002ea01d(uint32_t guest_size);")),
    "0012bf40": ("7cf8ab89b10c5c28f55240ec3826ecf90d3e3e28", "8203B59C0042E593FC14B5135E89ECBEAF739E9E0D04AC4C68C9817904D9925B", (
        "extern undefined1 FUN_0012eab0(char param_1);", "extern void FUN_0012bfa0(void);")),
    "0013eb70": ("7970f826e4875903bb1b902f76535f0bc100b981", "466089C61754CEF0A98E359E0C6F49CB34871E9516A4FC93B223428AD03F451F", (
        "extern undefined1 FUN_0012eab0(char param_1);", "extern void FUN_0013ec30(void);")),
    "0013f240": ("2ececb9a131ce1964e9d503ebf2e04235f65aea7", "AABB064808FD9E699CF2E0BED02BBFD8C41FCC5AA0BB692C06160250636E2CEA", (
        "extern void FUN_0013e410(int param_1);", "extern undefined4 FUN_0010e470(void);")),
    "00174320": ("c49079eaad209bd1fefd85e81fd4ffc10dafde9b", "5C40802EFA8127450605D3209861D9A7049CC96EA8435D8D9ED0522621B10064", (
        "extern void FUN_00174aa0(int param_1);", "extern void FUN_0012aba0(void);")),
}
CALLEES = {
    "00056aa0": ("78b000e79e3ac3e1297fa3bbd5419fcfb8b2f57c", "void FUN_00056aa0(void)"),
    "002ea01d": ("8fd179c6586b56e2a433c6d73a9b1d83525d0d54", "uint32_t FUN_002ea01d(uint32_t guest_size)"),
    "0012eab0": ("3c66c31866607106639953a188ddc8b1aad61cf8", "undefined1 FUN_0012eab0(char param_1)"),
    "0012bfa0": ("97329f45cc85da9bd62580fcd0119228b685952a", "void FUN_0012bfa0(void)"),
    "0013ec30": ("d1cc6e7e7d47a902dd86d1576c27a94df9aae800", "void FUN_0013ec30(void)"),
    "0013e410": ("40729d3b956a8815729da3a43d6d23b907d4eb4a", "void FUN_0013e410(int param_1)"),
    "0010e470": ("7bad91bd220f3eb9aa95c074ad58a9b8beb89239", "undefined4 FUN_0010e470(void)"),
    "00174aa0": ("96a0c750cd6a0d355f08ed40698ce359f8a7cb2f", "void FUN_00174aa0(int param_1)"),
    "0012aba0": ("4e3c6c2d5514e7b317f4c0f21611ac67e2a2c0c8", "void FUN_0012aba0(void)"),
}
HEADER_BLOB = "dd77bc872c0f6240d6035f775b1d64df7cc33094"


def blob_sha(data: bytes) -> str:
    return hashlib.sha1(b"blob " + str(len(data)).encode() + b"\0" + data).hexdigest()


def source_path(root: Path, ident: str) -> Path:
    return root / "src" / "main_unclassified" / ("band_" + ident[:4]) / ("0x" + ident + ".cpp")


def assert_source_only(root: Path) -> None:
    assert blob_sha((root / "include/bf_ghidra_types.h").read_bytes()) == HEADER_BLOB
    for ident, (original_sha, body_sha, declarations) in CALLERS.items():
        text = source_path(root, ident).read_text(encoding="utf-8")
        block = BLOCK_NOTE + "\n".join(declarations) + "\n"
        assert text.count(block) == 1, f"{ident}: missing or duplicated declaration block"
        old = text.replace(block, "", 1)
        assert blob_sha(old.encode()) == original_sha, f"{ident}: original caller changed"
        assert f"Entry: 0x{ident}" in old and f"Input x86 body SHA-256: {body_sha}" in old
        assert old.count('#include "bf_ghidra_types.h"') == 1
        assert text.index(block) == text.index('#include "bf_ghidra_types.h"') + len('#include "bf_ghidra_types.h"\n')
    for ident, (sha, signature) in CALLEES.items():
        content = source_path(root, ident).read_bytes()
        assert blob_sha(content) == sha, f"{ident}: callee source drift"
        assert signature in content.decode().splitlines(), f"{ident}: callee signature drift"


def clang_check(root: Path) -> None:
    compiler = shutil.which("clang++")
    assert compiler, "clang++ unavailable"
    with tempfile.TemporaryDirectory() as directory:
        temp = Path(directory) / "test.cpp"
        for ident, (_, _, declarations) in CALLERS.items():
            original = source_path(root, ident).read_text(encoding="utf-8")
            for opt in ("-O0", "-O2"):
                proc = subprocess.run([compiler, "-std=c++17", "-x", "c++", "-fsyntax-only",
                                       "-ferror-limit=3", opt, "-I", str(root / "include"),
                                       str(source_path(root, ident))], capture_output=True, text=True)
                assert proc.returncode == 0, f"{ident} {opt}: {proc.stderr[-1800:]}"
            for declaration in declarations:
                missing = re.search(r"FUN_[0-9a-f]+", declaration).group(0)
                temp.write_text(original.replace(declaration + "\n", "", 1), encoding="utf-8")
                proc = subprocess.run([compiler, "-std=c++17", "-x", "c++", "-fsyntax-only",
                                       "-ferror-limit=3", "-I", str(root / "include"), str(temp)],
                                      capture_output=True, text=True)
                assert proc.returncode != 0 and missing in proc.stderr, f"{ident}: negative control {missing}"


def self_test() -> None:
    assert blob_sha(b"") == "e69de29bb2d1d6434b8b29ae775ad8c2e48c5391"
    assert blob_sha(b"x") != blob_sha(b"X")
    assert len(CALLERS) == 5 and len(CALLEES) == 9
    assert len({item for _, _, lines in CALLERS.values() for item in lines}) == 9


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--self-test", action="store_true")
    args = parser.parse_args()
    self_test()
    if not args.self_test:
        assert_source_only(args.root)
        clang_check(args.root)
    print("PASS: five source-only declarations, pinned callee drafts, negative controls; Xbox ABI unverified")


if __name__ == "__main__":
    main()
