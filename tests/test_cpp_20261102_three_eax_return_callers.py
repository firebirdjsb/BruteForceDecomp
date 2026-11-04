"""Bounded source-only C++17 gates for three retail-EAX caller contracts.

Retail XBE bytes are never included. Syntax does not certify Xbox ABI or behavior.
"""
from __future__ import annotations
import shutil
import subprocess
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CALLERS = (
    ("src/main_unclassified/band_0005/0x0005d2b0.cpp",
     "extern undefined4 * FUN_0005d410(uint *param_1);",
     "7988AD4057F55ABE582DEBA36ECCFA7C73BB421F10CAA4F4FC42A1FF3695D06C"),
    ("src/main_unclassified/band_0007/0x00075010.cpp",
     "extern undefined4 * FUN_00075410(uint *param_1);",
     "B3138AF391A68C8257C8C3A67E3257B6AD98E3A8708B5B542CDAED739809C058"),
    ("src/main_unclassified/band_0007/0x00073b20.cpp",
     "extern float * FUN_002334b0(void);",
     "71DCAAF3FC7DBBFF75887D90B2A3BE839DD5A22F27CE7599796E6C8EBC1FE021"),
)
CALLEES = (
    ("src/main_unclassified/band_0005/0x0005d410.cpp",
     "undefined4 * FUN_0005d410(uint *param_1)",
     "6CD9BCC4772BF370C89463BEB64154F25794956A35477FED65798152237CEB8C"),
    ("src/main_unclassified/band_0007/0x00075410.cpp",
     "undefined4 * FUN_00075410(uint *param_1)",
     "7AAA2121EAFB2E38F982D32A1AF4E21C3D81E4CE7F0BE1A0694F5B44709369AB"),
)

def check() -> None:
    clang = shutil.which("clang++")
    if clang is None:
        raise RuntimeError("clang++ required")
    for path, decl, digest in CALLERS:
        src = (ROOT / path).read_text()
        assert "Input x86 body SHA-256: " + digest in src, path
        assert src.count(decl) == 1, path
        assert "ABI_UNVERIFIED" in src, path
        bad_decl = decl.replace("extern undefined4 *", "extern void").replace("extern float *", "extern void")
        assert bad_decl != decl
        for opt in ("-O0", "-O2"):
            cmd = [clang, "-std=c++17", opt, "-fsyntax-only", "-I" + str(ROOT / "include")]
            with tempfile.TemporaryDirectory() as td:
                good = Path(td) / "good.cpp"
                bad = Path(td) / "bad.cpp"
                good.write_text(src)
                bad.write_text(src.replace(decl, bad_decl))
                p = subprocess.run(cmd + [str(good)], capture_output=True, text=True)
                assert p.returncode == 0, (path, opt, p.stderr)
                n = subprocess.run(cmd + [str(bad)], capture_output=True, text=True)
                assert n.returncode != 0, (path, opt, "negative unexpectedly compiled")
    for path, signature, digest in CALLEES:
        src = (ROOT / path).read_text()
        assert "Input x86 body SHA-256: " + digest in src, path
        assert src.count(signature) == 1, path
        assert src.count("return unaff_EDI;") == 3, path
        assert "ABI_UNVERIFIED" in src, path
    print("PASS: three exact-source C++17 callers at O0/O2; six negative controls; two return contracts")

if __name__ == "__main__":
    check()
