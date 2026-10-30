#!/usr/bin/env python3
"""Test XBE-recovered allocation size, import slot and 32-bit EAX forwarding.

The only import dispatch definition is inside this test. In the actual project
the original Xbox indirect target is unresolved, and native linking must fail
rather than silently using a made-up allocator or host pointer.
"""
from __future__ import annotations
import shutil
import subprocess
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CLANG = shutil.which("clang++")
SOURCE = [
    ROOT / "src/main_unclassified/band_0006/0x00067cd0.cpp",
    ROOT / "src/main_unclassified/band_002e/0x002ea01d.cpp",
]
TEST = r"""
#include <cassert>
#include <cstdint>
#include "bf_002ea01d_allocator_guest32.h"
static uint32_t size_seen, slot_seen, calls, guest_result;
uint32_t bf_xbox_guest_import_call1_u32(uint32_t slot, uint32_t size)
{
    ++calls;
    slot_seen = slot;
    size_seen = size;
    return guest_result;
}
int main()
{
    guest_result = UINT32_C(0xf123abcd);
    assert(FUN_002ea01d(0x10) == guest_result);
    assert(calls == 1 && slot_seen == BF_XBOX_ALLOCATOR_IMPORT_SLOT);
    assert(size_seen == 0x10);
    assert(FUN_002ea01d(0x38) == guest_result);
    assert(calls == 2 && size_seen == 0x38);
    guest_result = 0;
    assert(FUN_00067cd0(0x24) == 0);
    assert(calls == 3 && size_seen == 0x24);
    return 0;
}
"""


@unittest.skipUnless(CLANG, "clang++ required")
class AllocatorGuest32Tests(unittest.TestCase):
    def test_original_address_sources_forward_import_eax(self):
        with tempfile.TemporaryDirectory() as tmp:
            source = Path(tmp) / "allocator_probe.cpp"
            output = Path(tmp) / "allocator_probe"
            source.write_text(TEST, encoding="utf-8")
            cmd = [CLANG, "-std=c++17", "-Werror", "-Wall", "-Wextra",
                   "-I", str(ROOT / "include"),
                   *map(str, SOURCE), str(source), "-o", str(output)]
            p = subprocess.run(cmd, capture_output=True, text=True)
            self.assertEqual(p.returncode, 0, p.stderr)
            p = subprocess.run([str(output)], capture_output=True, text=True)
            self.assertEqual(p.returncode, 0, p.stderr)

    def test_missing_actual_import_fails_native_link(self):
        # Do not accidentally supply a no-op implementation to the game.
        with tempfile.TemporaryDirectory() as tmp:
            source = Path(tmp) / "unbound.cpp"
            source.write_text(
                '#include "bf_002ea01d_allocator_guest32.h"\n'
                'int main(){return (int)FUN_002ea01d(1);}\n', encoding="utf-8")
            p = subprocess.run(
                [CLANG, "-std=c++17", "-I", str(ROOT / "include"),
                 *map(str, SOURCE), str(source), "-o", str(Path(tmp) / "unbound")],
                capture_output=True, text=True)
            self.assertNotEqual(p.returncode, 0)
            self.assertIn("bf_xbox_guest_import_call1_u32", p.stderr)


if __name__ == "__main__":
    unittest.main()
