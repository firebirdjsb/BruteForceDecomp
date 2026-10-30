#!/usr/bin/env python3
"""C++17 syntax/linkage regression for the XBE-evidenced heap-free thunk boundary.

Only tests the forwarded guest DWORD and original indirect slot. A fake
adapter is defined inside the test, never the reconstructed game. These
tests cannot certify the original Xbox guest ESP, register or heap behavior.
"""
from __future__ import annotations

import shutil
import subprocess
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CLANG = shutil.which("clang++")
THUNK = ROOT / "src/main_unclassified/band_002e/0x002ea018.cpp"
INDIRECT = ROOT / "src/main_unclassified/band_0006/0x00067bf0.cpp"
CALLER = ROOT / "src/main_unclassified/band_0008/0x00087630.cpp"
HEADER = ROOT / "include/bf_002ea018_heap_free_guest32.h"
TEST = r"""
#include <cassert>
#include <cstdint>
#include "bf_002ea018_heap_free_guest32.h"
static uint32_t slot_seen, word_seen, calls;
uint32_t bf_xbox_guest_tailjump1_u32(uint32_t slot, uint32_t word) {
    ++calls;
    slot_seen = slot;
    word_seen = word;
    return calls == 1 ? UINT32_C(0x80) : UINT32_C(0xff);
}
int main() {
    assert(thunk_FUN_00237ec0(UINT32_C(0xf123abcd)) == UINT32_C(0x80));
    assert(calls == 1 && slot_seen == BF_XBOX_HEAP_FREE_INDIRECT_SLOT);
    assert(word_seen == UINT32_C(0xf123abcd));
    assert(thunk_FUN_00067bf0(0) == UINT32_C(0xff));
    assert(calls == 2 && word_seen == 0);
    return 0;
}
"""


@unittest.skipUnless(CLANG, "clang++ is required")
class HeapFreeGuest32Tests(unittest.TestCase):
    def test_original_address_thunk_and_caller_parse(self):
        with tempfile.TemporaryDirectory() as tmp:
            for path in (INDIRECT, THUNK, CALLER):
                result = subprocess.run(
                    [CLANG, "-std=c++17", "-fsyntax-only",
                     "-I", str(ROOT / "include"), str(path)],
                    capture_output=True, text=True, check=False)
                self.assertEqual(result.returncode, 0, result.stderr)

    def test_forwarding_of_one_guest_word_and_original_slot(self):
        with tempfile.TemporaryDirectory() as tmp:
            path = Path(tmp) / "test.cpp"
            exe = Path(tmp) / "test"
            path.write_text(TEST, encoding="utf-8")
            result = subprocess.run(
                [CLANG, "-std=c++17", "-Werror", "-Wall", "-Wextra",
                 "-I", str(ROOT / "include"), str(INDIRECT), str(THUNK), str(path),
                 "-o", str(exe)],
                capture_output=True, text=True, check=False)
            self.assertEqual(result.returncode, 0, result.stderr)
            result = subprocess.run([str(exe)], capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, result.stderr)

    def test_missing_guest_runtime_adapter_prevents_game_link(self):
        with tempfile.TemporaryDirectory() as tmp:
            path = Path(tmp) / "unbound.cpp"
            path.write_text(
                '#include "bf_002ea018_heap_free_guest32.h"\n'
                'int main(){thunk_FUN_00237ec0(1);return 0;}\n',
                encoding="utf-8")
            result = subprocess.run(
                [CLANG, "-std=c++17", "-I", str(ROOT / "include"),
                 str(INDIRECT), str(THUNK), str(path), "-o", str(Path(tmp) / "unbound")],
                capture_output=True, text=True, check=False)
            self.assertNotEqual(result.returncode, 0)
            self.assertIn("bf_xbox_guest_tailjump1_u32", result.stderr)

    def test_no_host_pointer_cast_or_fabricated_runtime_implementation(self):
        thunk = THUNK.read_text(encoding="utf-8")
        indirect = INDIRECT.read_text(encoding="utf-8")
        header = HEADER.read_text(encoding="utf-8")
        self.assertIn("thunk_FUN_00067bf0(", thunk)
        self.assertIn("bf_xbox_guest_tailjump1_u32(", indirect)
        self.assertNotIn("(*(code *)", indirect)
        self.assertNotIn("free(", thunk)
        self.assertNotIn("free(", indirect)
        self.assertIn("0x003bc654", header.lower())
        self.assertIn("ABI_UNVERIFIED", thunk)


if __name__ == "__main__":
    unittest.main()
