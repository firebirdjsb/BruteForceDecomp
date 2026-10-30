#!/usr/bin/env python3
"""Clang C++17 smoke checks for original-instruction-scoped memory helpers.

These tests validate only host C++ syntax and exact function availability.
They do not establish the original Xbox register ABI, guest memory mapping,
x87/FP behavior or any game execution.
"""
from __future__ import annotations

import shutil
import subprocess
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CONTRACTS = ROOT / "src" / "contracts"
COMPILER = shutil.which("clang++")


@unittest.skipUnless(COMPILER, "clang++ required")
class CppMemoryHelperSyntax(unittest.TestCase):
    def compile(self, code: str) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = Path(tmp) / "contract_probe.cpp"
            path.write_text(code, encoding="utf-8")
            cmd = [COMPILER, "-std=c++17", "-fsyntax-only", "-Wall", "-Werror",
                   "-I", str(CONTRACTS), str(path)]
            proc = subprocess.run(cmd, capture_output=True, text=True, check=False)
            self.assertEqual(proc.returncode, 0, proc.stderr)

    def test_normalize_contract(self):
        self.compile(
            '#include "bf_0001fd40_normalize_operation.h"\n'
            'void probe(float *x) { bf_0001fd40_normalize(x); }\n'
        )

    def test_index_zero_copy_contract(self):
        self.compile(
            '#include "bf_00232180_index0_copy.h"\n'
            'void probe(void *esi, void *edi, const void *ebx) {\n'
            '  bf_00232180_index0_copy(esi, edi, ebx);\n'
            '}\n'
        )

    def test_matrix_contract(self):
        self.compile(
            '#include "bf_002334b0_matrix_operation.h"\n'
            'void probe(void *eax, const void *ecx, const void *edx) {\n'
            '  bf_002334b0_produce(eax, ecx, edx);\n'
            '}\n'
        )


if __name__ == "__main__":
    unittest.main()
