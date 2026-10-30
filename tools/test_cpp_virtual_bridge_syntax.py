#!/usr/bin/env python3
"""C++ syntax contract for recorded original-XBE virtual-dispatch bridges.

Passing these probes does not identify a C++ class, MSVC vtable layout,
the full Xbox thiscall ABI, or original runtime behavior.
"""
from __future__ import annotations
import shutil
import subprocess
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
COMPILER = shutil.which("clang++")


@unittest.skipUnless(COMPILER, "clang++ required")
class CppVirtualBridgeTests(unittest.TestCase):
    def test_existing_guest32_bridges_parse_as_cpp17(self):
        code = r"""
#include <cstdint>
#include "bf_00155840_concrete_virtual.h"
#include "bf_0011c810_concrete_virtual.h"
bool probe_matrix(void *ctx, std::uint32_t target,
                  std::uint32_t ecx, std::uint32_t *eax) {
  return bf_00155840_known_matrix_virtual(ctx, target, ecx, eax);
}
bool probe_scalar(void *ctx, const bf_0011c810_virtual_request *req,
                  bf_0011c810_virtual_response *resp) {
  return bf_0011c810_concrete_virtual_executor(ctx, req, resp);
}
"""
        with tempfile.TemporaryDirectory() as tmp:
            path = Path(tmp) / "virtual_bridge.cpp"
            path.write_text(code, encoding="utf-8")
            proc = subprocess.run(
                [COMPILER, "-std=c++17", "-fsyntax-only", "-I",
                 str(ROOT / "include"), str(path)],
                capture_output=True, text=True, check=False
            )
            self.assertEqual(proc.returncode, 0, proc.stderr)


if __name__ == "__main__":
    unittest.main()
