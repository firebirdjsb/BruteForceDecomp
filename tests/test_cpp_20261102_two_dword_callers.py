#!/usr/bin/env python3
"""Exact-source C++17 regression for two retail-instruction-reviewed DWORD callers.

This checks host syntax and bounded source provenance, not Xbox ABI equivalence.
"""
import hashlib
import os
from pathlib import Path
import subprocess
import tempfile

ROOT = Path(os.environ.get("BF_ROOT", Path(__file__).resolve().parents[1]))
CASES = (
    ("0002", "000230a0", "00023010",
     "de22d7fd044c8d59a506aa37dc252b92327430f44ad46caf766f8689da8ca71e",
     "97e60bc7f345c1050b632fc12d40a06d762bbfad60b4d14f93c7e7aa1eb751e1",
     "e2dfc80c7e15a7df6e9c1c1c7ff70f24982748e789ee0932309516dbc9537617",
     "/* Source-matched draft declaration; Xbox ABI_UNVERIFIED. */\nextern int * FUN_00023010(int *param_1,int param_2);\n",
     "int local_4 [1];", "undefined1 local_4 [4];"),
    ("0010", "0010cbb0", "000ee5c0",
     "15809b641247ef784111bae1317e4cd3b8fc998b5fad9f05866999fda0e496e0",
     "edff87f606936bce5f992bfa6dbd1332d4dbef40b87c9c4afc2f76fe7228f7c3",
     "54dbeda9c429f1adf7dcf6de00a30664be1dede6e5c3352b1ef7debfb0213249",
     "/* Original E8 call 0x0010CBC2: bytewise write to local DWORD; Xbox ABI_UNVERIFIED. */\nextern void FUN_000ee5c0(byte *param_1,float param_2);\n",
     "FUN_000ee5c0(reinterpret_cast<byte *>(&local_4),0.5f);",
     "FUN_000ee5c0(&local_4,0x3f000000);"),
)


def sha(data):
    return hashlib.sha256(data).hexdigest()


def clang(source, opt):
    with tempfile.TemporaryDirectory() as temp:
        path = Path(temp) / "probe.cpp"
        path.write_text(source)
        return subprocess.run(["clang++", "-std=c++17", opt, "-fsyntax-only",
                               "-I", str(ROOT / "include"), str(path)],
                              capture_output=True, text=True, check=False).returncode


def main():
    for band, caller, callee, before, after, callee_sha, decl, new, old in CASES:
        path = ROOT / f"src/main_unclassified/band_{band}/0x{caller}.cpp"
        callee_path = ROOT / f"src/main_unclassified/band_{callee[:4]}/0x{callee}.cpp"
        data = path.read_bytes()
        assert sha(data) == after, f"caller drift: {caller}"
        assert sha(callee_path.read_bytes()) == callee_sha, f"callee drift: {callee}"
        source = data.decode("utf-8")
        assert source.count(decl) == 1 and source.count(new) == 1
        original = source.replace(decl, "", 1).replace(new, old, 1)
        assert sha(original.encode()) == before, f"non-reversible edit: {caller}"
        for opt in ("-O0", "-O2"):
            assert clang(source, opt) == 0, f"positive syntax: {caller} {opt}"
            assert clang(source.replace(decl, "", 1), opt) != 0, "missing-declaration negative accepted"
            assert clang(source.replace(new, old, 1), opt) != 0, "wrong-storage negative accepted"
    print("PASS: 2 bounded source repairs, 2 unchanged callees, 4 Clang++17 positives, 8 negative controls")


if __name__ == "__main__":
    main()
