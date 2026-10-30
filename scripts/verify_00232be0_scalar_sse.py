#!/usr/bin/env python3
"""Compare reconstructed scalar SSE results with an instruction-derived oracle.

Current-host scalar results only, not an original Xbox execution/ABI test.
"""

# Archived C-only evidence: active game-core validation uses strict C++17.
if __name__ == "__main__":
    import sys as _archive_sys
    from pathlib import Path as _ArchivePath
    _archive_sys.path.insert(0, str(_ArchivePath(__file__).resolve().parents[1] / "tools"))
    from historical_c11 import require_historical_c11_opt_in
    require_historical_c11_opt_in()

import argparse
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / "src/main_unclassified/band_0023/0x00232be0.c"
TEST = ROOT / "tests/test_00232be0_scalar_sse.c"
ASM = ROOT / "tests/x86_232be0_reference.S"

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    clang = shutil.which("clang")
    if not clang:
        parser.exit(1, "clang is required\n")
    if args.xbe:
        # The shared verifier checks the pinned whole XBE, source body digest,
        # relevant scalar instruction windows and original constant words.
        subprocess.run([sys.executable, str(ROOT / "scripts/verify_stack_storage_repairs.py"),
                        str(args.xbe), "--root", str(ROOT)], check=True)
    else:
        print("Original XBE absent: original instruction provenance not rechecked")
    command = [clang, "-std=c11", "-ffp-contract=off", "-I", str(ROOT / "include")]
    test = TEST.read_text(encoding="utf-8")
    source = SOURCE.read_text(encoding="utf-8")
    with tempfile.TemporaryDirectory() as directory:
        folder = Path(directory)
        for opt in ("-O0", "-O2"):
            exe = folder / ("scalar" + (".exe" if sys.platform == "win32" else ""))
            subprocess.run(command + [opt, str(TEST), str(ASM), "-o", str(exe)], check=True)
            subprocess.run([str(exe)], check=True)
        mutants = (
            ("exact division in place of reciprocal approximation",
             "__m128 reciprocal = _mm_rcp_ss(input);",
             "__m128 reciprocal = _mm_div_ss(_mm_set_ss(1.0f), input);"),
            ("forced small branch", " & 1;", " & 0;")
        )
        for name, before, after in mutants:
            if source.count(before) != 1:
                raise ValueError("Mutation site is missing or ambiguous: " + name)
            mutant = folder / "mutant.c"
            mutant.write_text(source.replace(before, after), encoding="utf-8")
            altered_test = folder / "test.c"
            include = '#include "../src/main_unclassified/band_0023/0x00232be0.c"'
            altered_test.write_text(test.replace(include, '#include "' + mutant.as_posix() + '"'),
                                    encoding="utf-8")
            subprocess.run(command + ["-O2", str(altered_test), str(ASM), "-o", str(exe)], check=True)
            result = subprocess.run([str(exe)], capture_output=True, text=True)
            if result.returncode != 1 or "input=" not in result.stderr:
                raise ValueError("Negative control did not report a scalar mismatch: " + name)
            print("PASS rejected negative control:", name)
    print("PASS current-CPU scalar comparisons; flags, upper lanes, Xbox accuracy and ABI unverified")

if __name__ == "__main__":
    main()
