#!/usr/bin/env python3
"""Portable golden storage tests; no Xbox ABI or complete FP equivalence claim."""
import argparse
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--clang", default=shutil.which("clang"))
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    if not args.clang:
        parser.error("Clang is required")
    root = args.root.resolve()
    source = root / "tests/test_20261028_memory_operations.c"
    with tempfile.TemporaryDirectory(prefix="bf_memory_operations_") as temporary:
        for optimization in ("-O0", "-O2"):
            executable = Path(temporary) / ("golden" + (".exe" if sys.platform == "win32" else ""))
            subprocess.run([
                args.clang, "-std=c11", "-Wall", "-Wextra", "-Werror",
                "-pedantic-errors", "-ffp-contract=off", optimization,
                str(source), "-o", str(executable),
            ], check=True)
            subprocess.run([str(executable)], check=True)
    if args.xbe:
        subprocess.run([
            sys.executable, str(root / "scripts/verify_stack_storage_repairs.py"),
            str(args.xbe), "--root", str(root),
        ], check=True)
    print("PASS scoped golden memory operations at O0/O2; ABI/x87/runtime unverified")


if __name__ == "__main__":
    main()
