#!/usr/bin/env python3
"""Original guest32 caller 0x00058D40: mock-only memory/register contract.

Verifies allocation size, ordered guest WORD writes and the actual ECX/EDX
handoff, without treating guest VA as a host pointer or claiming a linked game.
"""
import shutil
import subprocess
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CLANG = shutil.which("clang++")
SOURCES = [
    ROOT / "src/main_unclassified/band_0006/0x00067cd0.cpp",
    ROOT / "src/main_unclassified/band_002e/0x002ea01d.cpp",
    ROOT / "src/main_unclassified/band_0005/0x00058d40.cpp",
]
TEST = r"""
#include <cassert>
#include <cstdint>
#include "bf_002ea01d_allocator_guest32.h"
#include "bf_00058d40_guest_handoff.h"
struct Event {uint32_t op, address, value;};
static Event events[12];
static uint32_t count, allocated;
uint32_t bf_xbox_guest_import_call1_u32(uint32_t slot, uint32_t size) {
    events[count++] = {1, slot, size}; return allocated;
}
void bf_00058d40_guest_write_u32(uint32_t address,uint32_t value) {
    events[count++] = {2, address, value};
}
void bf_00058d40_call_001aaa90(uint32_t ecx,uint32_t edx) {
    events[count++] = {3, ecx, edx};
}
int main() {
    allocated=UINT32_C(0xf0010000);
    FUN_00058d40(0x4000, 7);
    assert(count==6 && events[0].op==1);
    assert(events[0].address==BF_XBOX_ALLOCATOR_IMPORT_SLOT);
    assert(events[0].value==0x10);
    for(uint32_t i=1;i<=3;i++) {
        assert(events[i].op==2 && events[i].value==0);
        assert(events[i].address==allocated+i*4);
    }
    assert(events[4].op==2 && events[4].address==0x4000);
    assert(events[4].value==allocated);
    assert(events[5].op==3 && events[5].address==7);
    assert(events[5].value==allocated);
    count=0; allocated=0;
    FUN_00058d40(0x5000, 42);
    assert(count==3);
    assert(events[0].op==1 && events[0].value==0x10);
    assert(events[1].op==2 && events[1].address==0x5000);
    assert(events[1].value==0);
    assert(events[2].op==3 && events[2].address==42);
    assert(events[2].value==0);
}
"""


@unittest.skipUnless(CLANG, "clang++ required")
class OriginalGuest32CallerTests(unittest.TestCase):
    def test_allocator_success_and_null_original_handoff(self):
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory)
            main = path / "caller_probe.cpp"
            exe = path / "caller_probe"
            main.write_text(TEST, encoding="utf-8")
            run = subprocess.run(
                [CLANG, "-std=c++17", "-Werror", "-Wall", "-Wextra",
                 "-I", str(ROOT / "include"), *map(str, SOURCES),
                 str(main), "-o", str(exe)],
                capture_output=True, text=True)
            self.assertEqual(run.returncode, 0, run.stderr)
            run = subprocess.run([str(exe)], capture_output=True, text=True)
            self.assertEqual(run.returncode, 0, run.stderr)


if __name__ == "__main__":
    unittest.main()
