#!/usr/bin/env python3
"""Narrow C++17 contract regression for the original Xbox heap-free wrapper.

The archived authenticated-x86 opcode ledger is:
scripts/verify_002b8c60_heap_xbe.py. These tests check argument order and
AL-to-EAX zero extension, NOT the full original runtime, register state, or
heap allocator. The stubbed downstream implementation is test-only.
"""
from __future__ import annotations
import shutil
import subprocess
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CLANG = shutil.which("clang++")
SOURCES = [
    ROOT / "src/main_unclassified/band_0023/0x00237ec0.cpp",
    ROOT / "src/main_unclassified/band_002f/0x002f77dc.cpp",
    ROOT / "src/main_unclassified/band_002f/0x002f77f3.cpp",
]
PROBE = r"""
#include <cassert>
#include <cstdint>
uint32_t DAT_004a90d4 = UINT32_C(0xf123abcd);
static uint32_t heap_seen, flags_seen, ptr_seen, calls;
uint8_t FUN_002f75e8(int heap, uint32_t flags, int allocation)
{
    ++calls;
    heap_seen = (uint32_t)heap;
    flags_seen = flags;
    ptr_seen = (uint32_t)allocation;
    return calls == 1 ? UINT8_C(0x80) : UINT8_C(0xff);
}
uint32_t FUN_00237ec0(uint32_t allocation);
int main()
{
    assert(FUN_00237ec0(UINT32_C(0xdeadbeef)) == UINT32_C(0x80));
    assert(calls == 1 && heap_seen == DAT_004a90d4);
    assert(flags_seen == 0 && ptr_seen == UINT32_C(0xdeadbeef));
    assert(FUN_00237ec0(0) == UINT32_C(0xff));
    assert(calls == 2 && ptr_seen == 0);
    return 0;
}
"""


@unittest.skipUnless(CLANG, "clang++ required")
class CppHeapWrapperCallChain(unittest.TestCase):
    def test_host_cpp17_syntax_per_original_address(self):
        for source in SOURCES:
            result = subprocess.run(
                [CLANG, "-std=c++17", "-fsyntax-only", "-I",
                 str(ROOT / "include"), str(source)],
                capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, source.name + result.stderr)

    def test_heap_word_flags_pointer_order_and_eax_zero_extension(self):
        with tempfile.TemporaryDirectory() as folder:
            probe = Path(folder) / "probe.cpp"
            binary = Path(folder) / "probe"
            probe.write_text(PROBE, encoding="utf-8")
            result = subprocess.run(
                [CLANG, "-std=c++17", "-Wall", "-Wextra", "-Werror",
                 "-I", str(ROOT / "include"), *map(str, SOURCES),
                 str(probe), "-o", str(binary)],
                capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, result.stderr)
            result = subprocess.run([str(binary)], capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, result.stderr)

    def test_actual_heap_without_test_stub_is_not_linked(self):
        with tempfile.TemporaryDirectory() as folder:
            probe = Path(folder) / "unbound.cpp"
            probe.write_text(
                '#include <cstdint>\n'
                'uint32_t DAT_004a90d4 = 0;\n'
                'uint32_t FUN_00237ec0(uint32_t);\n'
                'int main(){return (int)FUN_00237ec0(1);}\n',
                encoding="utf-8")
            result = subprocess.run(
                [CLANG, "-std=c++17", "-I", str(ROOT / "include"),
                 *map(str, SOURCES), str(probe),
                 "-o", str(Path(folder) / "unbound")],
                capture_output=True, text=True)
            self.assertNotEqual(result.returncode, 0)
            self.assertIn("FUN_002f75e8", result.stderr)


if __name__ == "__main__":
    unittest.main()
