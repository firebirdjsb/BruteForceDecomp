#!/usr/bin/env python3
"""Gate source-matched C++ declarations, not original Xbox ABI/behavior."""
from __future__ import annotations
import re
import shutil
import subprocess
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CLANGXX = shutil.which("clang++")
# Callee address -> (Ghidra draft return type, single-error caller addresses).
SOURCE_MATCHED = {
    "001611d0": ("void", "000ff9e0 00149d00 001e8010"),
    "001327c0": ("void", "00132660 001326c0 00132850"),
    "001d2cf0": ("void", "001d0fb0 001d1ac0 001d8f30"),
    "001d2e90": ("void", "001d1590 001d15c0 001d9520"),
    "0023c960": ("void", "0023ca30 0023cb10 00249460"),
    "00249d40": ("void", "00249260 0024ab60 0024ab90"),
    "00249a20": ("void", "002492c0 0024abe0 0024bab0"),
    "0023d3e0": ("void", "00117480 001174d0"),
    "0015a140": ("uint", "0015a480 0015a500"),
}

def source_path(addr: str) -> Path:
    return ROOT / "src" / "main_unclassified" / f"band_{addr[:4]}" / f"0x{addr}.cpp"

class SourceMatchedDeclarationBatch(unittest.TestCase):
    def test_25_provenance_preserving_source_declarations(self):
        callers = [c for _, group in SOURCE_MATCHED.values() for c in group.split()]
        self.assertEqual(len(callers), 25)
        self.assertEqual(len(set(callers)), 25)
        for target, (ret, addrs) in SOURCE_MATCHED.items():
            callee = source_path(target).read_text(encoding="utf-8")
            self.assertIn(f"{ret} FUN_{target}(void)", callee)
            for addr in addrs.split():
                with self.subTest(callee=target, caller=addr):
                    caller = source_path(addr).read_text(encoding="utf-8")
                    self.assertIn(f"Entry: 0x{addr}", caller)
                    self.assertRegex(caller, r"Input x86 body SHA-256: [0-9A-F]{64}")
                    self.assertIn("ABI_UNVERIFIED", caller)
                    self.assertIn(f"extern {ret} FUN_{target}(void);", caller)
                    self.assertIn(f"FUN_{target}();", caller)

    @unittest.skipUnless(CLANGXX, "Clang++17 required for isolated syntax tests")
    def test_25_callers_compile_in_isolation(self):
        for _, (_, addrs) in SOURCE_MATCHED.items():
            for addr in addrs.split():
                with self.subTest(caller=addr):
                    result = subprocess.run(
                        [CLANGXX, "-std=c++17", "-fsyntax-only", "-I",
                         str(ROOT / "include"), str(source_path(addr))],
                        capture_output=True, text=True, check=False, timeout=60,
                    )
                    self.assertEqual(result.returncode, 0, result.stderr)

if __name__ == "__main__":
    unittest.main()
