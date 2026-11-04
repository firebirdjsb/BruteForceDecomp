#!/usr/bin/env python3
"""Verify one source-only C++17 declaration; does not establish original Xbox ABI."""
from __future__ import annotations
import argparse
import hashlib
from pathlib import Path
import re
import subprocess
import tempfile

SOURCE = Path("src/main_unclassified/band_0013/0x00137e30.cpp")
CALLEE = Path("src/main_unclassified/band_0013/0x001388d0.cpp")
DECL = b"/* C++17 source-matched declaration only; original Xbox ABI_UNVERIFIED. */\nextern void FUN_001388d0(int,int,uint,int);\n"
PREIMAGE_SHA256 = "30b6ac02c582b8651106d14c8b841fb0d06da930765607d81d17e05ecd45b07b"
RESULT_SHA256 = "43849367e5164ce0d1bc1431fb60c0b9001af36bd22527edc737489ff588f749"
BODY_SHA256 = b"856D9CDE7296D18FB0B48D5129F4F298238D763A43BE2C2127F13BAAA841F3BA"

def sha(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()

def check_clang(data: bytes, root: Path, opt: str):
    with tempfile.TemporaryDirectory(prefix="bf-cpp137e30-") as tmp:
        file = Path(tmp) / "0x00137e30.cpp"
        file.write_bytes(data)
        return subprocess.run(
            ["clang++", "-std=c++17", "-fsyntax-only", "-ferror-limit=0",
             "-Werror=pointer-to-int-cast", opt, "-I", str(root / "include"), str(file)],
            capture_output=True, text=True, check=False)

def verify(root: Path) -> None:
    data = (root / SOURCE).read_bytes()
    callee = (root / CALLEE).read_text(encoding="utf-8")
    assert sha(data) == RESULT_SHA256, "changed source requires fresh review"
    assert data.count(DECL) == 1, "missing/duplicate declaration"
    assert data.count(BODY_SHA256) == 1, "original body hash label changed"
    assert re.search(r"\bvoid\s+FUN_001388d0\s*\(\s*int\s+param_1\s*,\s*int\s+param_2\s*,\s*uint\s+param_3\s*,\s*int\s+param_4\s*\)", callee), "callee draft signature changed"
    assert data.count(b"FUN_001388d0(unaff_EDI,param_2,1,param_3);") == 1
    original = data.replace(DECL, b"")
    assert sha(original) == PREIMAGE_SHA256, "original source not preserved"
    for opt in ("-O0", "-O2"):
        ok = check_clang(data, root, opt)
        assert ok.returncode == 0, f"{opt} failed:\n{ok.stderr}"
        missing = check_clang(original, root, opt)
        assert missing.returncode != 0 and "undeclared identifier" in missing.stderr
        wrong = check_clang(data.replace(b"(int,int,uint,int);", b"(int,int,uint);"), root, opt)
        assert wrong.returncode != 0 and ("no matching function" in wrong.stderr or "too many arguments" in wrong.stderr)
    print("PASS: C++17 O0/O2, callee draft match, original source SHA, negative controls")
    print("ABI_UNVERIFIED: original retail XBE not authenticated by this public test")

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path("."))
    verify(parser.parse_args().root.resolve())
