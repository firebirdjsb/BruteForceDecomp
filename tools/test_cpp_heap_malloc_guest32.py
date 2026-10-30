#!/usr/bin/env python3
"""Check recorded 0x00237EA0 allocation fast-path and 3-word guest call.

The downstream allocator is stubbed ONLY in this test. These tests do not
verify Xbox allocation, register preservation, guest memory, or SEH.
Source of the original instruction windows:
scripts/verify_002b8c60_heap_xbe.py (requires the user's pinned private XBE).
"""
from __future__ import annotations
import shutil
import subprocess
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CLANG = shutil.which("clang++")
MALLOC = ROOT / "src/main_unclassified/band_0023/0x00237ea0.cpp"
HANDLE = ROOT / "src/main_unclassified/band_002f/0x002f77f3.cpp"
HEADER = ROOT / "include/bf_00237ea0_heap_malloc_guest32.h"
PROBE = r"""
#include <cassert>
#include <cstdint>
#include "bf_00237ea0_heap_malloc_guest32.h"
uint32_t DAT_004a90d4 = UINT32_C(0xcdef1234);
static uint32_t heap_seen, flags_seen, size_seen, calls, guest_result;
uint32_t bf_xbox_guest_call_002f6e31_u32(
    uint32_t heap, uint32_t flags, uint32_t size)
{
    ++calls;
    heap_seen = heap;
    flags_seen = flags;
    size_seen = size;
    return guest_result;
}
int main()
{
    guest_result = UINT32_C(0xf123abcd);
    assert(FUN_00237ea0(0) == 0);
    assert(calls == 0);
    assert(FUN_00237ea0(0x28) == guest_result);
    assert(calls == 1 && heap_seen == DAT_004a90d4);
    assert(flags_seen == 0 && size_seen == 0x28);
    guest_result = 0;
    assert(FUN_00237ea0(UINT32_C(0xfffffffc)) == 0);
    assert(calls == 2 && size_seen == UINT32_C(0xfffffffc));
    return 0;
}
"""


@unittest.skipUnless(CLANG, "clang++ required")
class HeapMallocGuest32Tests(unittest.TestCase):
    def test_source_cpp17_syntax(self):
        for source in (MALLOC, HANDLE):
            result = subprocess.run(
                [CLANG, "-std=c++17", "-fsyntax-only",
                 "-I", str(ROOT / "include"), str(source)],
                capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, result.stderr)

    def test_null_fast_path_three_words_and_eax_result(self):
        with tempfile.TemporaryDirectory() as tmp:
            path = Path(tmp) / "probe.cpp"
            output = Path(tmp) / "probe"
            path.write_text(PROBE, encoding="utf-8")
            result = subprocess.run(
                [CLANG, "-std=c++17", "-Wall", "-Wextra", "-Werror",
                 "-I", str(ROOT / "include"),
                 str(MALLOC), str(HANDLE), str(path), "-o", str(output)],
                capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, result.stderr)
            result = subprocess.run([str(output)], capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, result.stderr)

    def test_guest_allocator_is_not_host_linked(self):
        with tempfile.TemporaryDirectory() as tmp:
            path = Path(tmp) / "unbound.cpp"
            path.write_text(
                '#include <cstdint>\n'
                '#include "bf_00237ea0_heap_malloc_guest32.h"\n'
                'uint32_t DAT_004a90d4 = 1;\n'
                'int main(){return (int)FUN_00237ea0(4);}\n',
                encoding="utf-8")
            result = subprocess.run(
                [CLANG, "-std=c++17", "-I", str(ROOT / "include"),
                 str(MALLOC), str(HANDLE), str(path),
                 "-o", str(Path(tmp) / "unbound")],
                capture_output=True, text=True)
            self.assertNotEqual(result.returncode, 0)
            self.assertIn("bf_xbox_guest_call_002f6e31_u32", result.stderr)

    def test_no_host_pointer_conversion_in_allocation_wrapper(self):
        source = MALLOC.read_text(encoding="utf-8")
        self.assertIn("bf_xbox_guest_call_002f6e31_u32(", source)
        self.assertIn("if (guest_size == 0)", source)
        self.assertNotIn("(uintptr_t)", source)
        self.assertNotIn("malloc(", source)
        self.assertIn("ABI_UNVERIFIED", HEADER.read_text(encoding="utf-8"))


if __name__ == "__main__":
    unittest.main()
