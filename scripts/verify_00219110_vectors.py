#!/usr/bin/env python3
"""Bounded vector arithmetic comparison, not verification of the entry ABI."""
import argparse
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / "src/main_unclassified/band_0021/0x00219110.c"
TEST = ROOT / "tests/test_00219110_vectors.c"
ASM = ROOT / "tests/x86_219110_reference.S"


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    clang = shutil.which("clang")
    if not clang:
        parser.exit(1, "clang required\n")
    if args.xbe:
        subprocess.run([sys.executable, str(ROOT / "scripts/verify_stack_storage_repairs.py"),
                        str(args.xbe), "--root", str(ROOT)], check=True)
    else:
        print("Original XBE absent: original instruction provenance not rechecked")
    source = SOURCE.read_text(encoding="utf-8")
    test = TEST.read_text(encoding="utf-8")
    entry = "void FUN_00219110(float *param_1)"
    include = '#include "../src/main_unclassified/band_0021/0x00219110.c"'
    if source.count(entry) != 1 or test.count(include) != 1:
        raise ValueError("Missing or ambiguous helper/entry boundary")
    command = [clang, "-std=c11", "-ffp-contract=off", "-I", str(ROOT / "include")]
    with tempfile.TemporaryDirectory() as directory:
        folder = Path(directory)
        helper = folder / "helper.h"
        driver = folder / "test.c"
        exe = folder / ("test.exe" if sys.platform == "win32" else "test")
        # Test the exact source prefix. The unresolved register-entry wrapper
        # is independently syntax-checked, and is never replaced with a stub.
        driver.write_text(test.replace(include, '#include "' + helper.as_posix() + '"'),
                          encoding="utf-8")

        def build_run(text, opt, capture=False):
            helper.write_text(text[:text.index(entry)], encoding="utf-8")
            link = [] if sys.platform == "win32" else ["-lm"]
            subprocess.run(command + [opt, str(driver), str(ASM), "-o", str(exe)] + link,
                           check=True)
            return subprocess.run([str(exe)], capture_output=capture, text=True,
                                  check=not capture)

        for opt in ("-O0", "-O2"):
            build_run(source, opt)
        mutants = (
            ("rounded FST-retained components",
             "  out_edx[2] = (float)first_z;",
             "  out_edx[2] = (float)first_z;\n"
             "  first_x = (long double)out_edx[0];\n"
             "  first_y = (long double)out_edx[1];\n"
             "  first_z = (long double)out_edx[2];"),
            ("division instead of RCPSS",
             "_mm_rcp_ss(_mm_set_ss(length))",
             "_mm_div_ss(_mm_set_ss(1.0f), _mm_set_ss(length))"),
        )
        for name, before, after in mutants:
            if source.count(before) != 1:
                raise ValueError("Missing or ambiguous mutation site: " + name)
            result = build_run(source.replace(before, after), "-O2", capture=True)
            if result.returncode != 1 or "Mismatch alias=" not in result.stderr:
                raise ValueError("Negative control did not report a mismatch: " + name)
            print("PASS rejected negative control:", name)
    print("PASS bounded helper comparisons; full entry, Xbox environment and ABI unverified")


if __name__ == "__main__":
    main()
