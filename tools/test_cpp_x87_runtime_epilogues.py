#!/usr/bin/env python3
"""Compile and check the three original-address x87 guest-state models."""
import os
import shutil
import subprocess
import tempfile
from pathlib import Path

from source_layout import source_path


ROOT = Path(__file__).resolve().parents[1]
ENTRIES = ("0x002f04d0", "0x002f060d", "0x002f0696")


def main():
    clang = shutil.which("clang++")
    if not clang:
        raise RuntimeError("clang++ is required")
    sources = [source_path(ROOT, entry) for entry in ENTRIES]
    with tempfile.TemporaryDirectory() as directory:
        executable = Path(directory) / ("epilogues.exe" if os.name == "nt" else "epilogues")
        for optimization in ("-O0", "-O2"):
            subprocess.run(
                [clang, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra", "-Werror",
                 optimization, "-I", str(ROOT / "include"),
                 str(ROOT / "tests/test_x87_runtime_epilogues.cpp"), *map(str, sources),
                 "-o", str(executable)],
                check=True,
            )
            subprocess.run([str(executable)], check=True)
    print("PASS x87 guest epilogues at O0/O2: 65,536 restore inputs, prepare modes, "
          "stack wrap, and callback failures")


if __name__ == "__main__":
    main()
