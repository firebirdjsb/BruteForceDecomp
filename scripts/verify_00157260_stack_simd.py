#!/usr/bin/env python3
"""Bounded current-host sum/scale comparison; full entry ABI remains unverified."""
import argparse
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path
ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / "src/main_unclassified/band_0015/0x00157260.c"
TEST = ROOT / "tests/test_00157260_stack_simd.c"
ASM = ROOT / "tests/x86_157260_reference.S"

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
    # Compile the exact file-local helper definitions without linking the
    # unresolved entry/callees. This is a bounded helper test, not an entry build.
    command = [clang, "-std=c11", "-ffp-contract=off", "-I", str(ROOT / "include")]
    source = SOURCE.read_text(encoding="utf-8")
    test = TEST.read_text(encoding="utf-8")
    with tempfile.TemporaryDirectory() as directory:
        folder = Path(directory)
        exe = folder / ("test.exe" if sys.platform == "win32" else "test")
        include = '#include "../src/main_unclassified/band_0015/0x00157260.c"'
        entry = "void FUN_00157260(byte param_1)"
        if source.count(entry) != 1 or test.count(include) != 1:
            raise ValueError("Missing or ambiguous helper/entry test boundary")
        helper = folder / "helper.h"
        helper.write_text(source[:source.index(entry)], encoding="utf-8")
        altered = folder / "test.c"
        altered.write_text(test.replace(include, '#include "' + helper.as_posix() + '"'),
                           encoding="utf-8")
        for opt in ("-O0", "-O2"):
            subprocess.run(command + [opt, str(altered), str(ASM), "-o", str(exe)], check=True)
            subprocess.run([str(exe)], check=True)
        mutants = (
            ("numeric conversion of float words", "  return value;",
             "  uint32_t bits; memcpy(&bits, &value, 4); return (float)bits;"),
            ("overwritten trailing scratch words", "  memcpy(scratch, scaled, 12);",
             "  memcpy(scratch, scaled, 12); scratch[3] = 0; scratch[4] = 0;")
        )
        for name, before, after in mutants:
            if source.count(before) != 1:
                raise ValueError("Missing or ambiguous mutation site: " + name)
            mutated = source.replace(before, after)
            helper.write_text(mutated[:mutated.index(entry)], encoding="utf-8")
            subprocess.run(command + ["-O2", str(altered), str(ASM), "-o", str(exe)], check=True)
            result = subprocess.run([str(exe)], capture_output=True, text=True)
            if result.returncode != 1 or "Mismatch alias=" not in result.stderr:
                raise ValueError("Negative control did not report a mismatch: " + name)
            print("PASS rejected negative control:", name)
    print("PASS bounded helper comparisons; full entry, Xbox environment and ABI unverified")

if __name__ == "__main__":
    main()
