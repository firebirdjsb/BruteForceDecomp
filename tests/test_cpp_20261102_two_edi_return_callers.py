"""Exact-source C++17 checks for two retail EDI-backed EAX result contracts.

Host syntax is not Xbox ABI, native linkage, or runtime behavior verification.
"""
from __future__ import annotations
import shutil
import subprocess
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CALLERS = (
    ("src/main_unclassified/band_0027/0x00279280.cpp",
     "extern undefined4 *FUN_00279c40(int *param_1);",
     "532E5233681831960B0FB79CC98EE333B6F591205BF6ECA245EA4538856879DF"),
    ("src/main_unclassified/band_0027/0x0027bf80.cpp",
     "extern undefined4 *FUN_0027c1a0(uint *param_1);",
     "053A5AC2DDF34E37FE67806C650590BF66D41B797729468729A293DC6D8F9C90"),
)
CALLEES = (
    ("src/main_unclassified/band_0027/0x00279c40.cpp",
     "undefined4 *FUN_00279c40(int *param_1)",
     "726401879C58F8EBE6E7FB500D39CCBBC946D4087B060F6694092F25824413C3"),
    ("src/main_unclassified/band_0027/0x0027c1a0.cpp",
     "undefined4 *FUN_0027c1a0(uint *param_1)",
     "C1736663C9DEC382B4D1E5B522B2EB5C25A0506C1E046F72189387FB01F88950"),
)

def check() -> None:
    clang = shutil.which("clang++")
    if not clang:
        raise RuntimeError("clang++ is required")
    for path, decl, digest in CALLERS:
        src = (ROOT / path).read_text()
        assert "Input x86 body SHA-256: " + digest in src, path
        assert src.count(decl) == 1, path
        assert "ABI_UNVERIFIED" in src, path
        bad_decl = decl.replace("extern undefined4 *", "extern void ")
        assert bad_decl != decl
        for opt in ("-O0", "-O2"):
            cmd = [clang, "-std=c++17", opt, "-fsyntax-only", "-I" + str(ROOT / "include")]
            with tempfile.TemporaryDirectory() as td:
                good = Path(td) / "good.cpp"
                bad = Path(td) / "bad.cpp"
                good.write_text(src)
                bad.write_text(src.replace(decl, bad_decl))
                pos = subprocess.run(cmd + [str(good)], capture_output=True, text=True)
                assert pos.returncode == 0, (path, opt, pos.stderr)
                neg = subprocess.run(cmd + [str(bad)], capture_output=True, text=True)
                assert neg.returncode != 0, (path, opt, "negative unexpectedly compiled")
    signed = (ROOT / CALLERS[0][0]).read_text()
    assert "int local_10;" in signed and "undefined4 local_10;" not in signed
    unsigned = (ROOT / CALLERS[1][0]).read_text()
    assert "undefined4 local_14 [5];" in unsigned
    for path, signature, digest in CALLEES:
        src = (ROOT / path).read_text()
        assert "Input x86 body SHA-256: " + digest in src, path
        assert src.count(signature) == 1, path
        assert src.count("return unaff_EDI;") == 3, path
        assert "ABI_UNVERIFIED" in src, path
    print("PASS: 2 C++17 callers O0/O2; 4 negative controls; 2 three-exit EDI returns")

if __name__ == "__main__":
    check()
