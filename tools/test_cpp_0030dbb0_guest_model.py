#!/usr/bin/env python3
"""Focused C++17/XBE evidence check for the guest-only 0x0030dbb0 model.

This does not establish the Xbox entry ABI, runtime guest-memory faults, or game behavior.
"""
from __future__ import annotations

import hashlib
import os
from pathlib import Path
import shutil
import subprocess
import tempfile
import unittest

from check_cpp_direct_call_batches import ROOT, XBE_SHA256, file_offset, sections
from source_layout import source_path

ENTRY = "0x0030dbb0"
SOURCE = source_path(ROOT, ENTRY)
BODY_SHA = "37eb4291eee6e188552dbed5919ad976c3e3e41e2d1923a7667cb2e772aec62e"
BODY_LENGTH = 58

HARNESS = r'''
#include <cstdint>
#include <cstdio>
#include <unordered_map>
#include <vector>
#include "bf_0030dbb0_guest_model.h"
struct Access { char kind; std::uint32_t va, value; };
static std::unordered_map<std::uint32_t,std::uint32_t> mem;
static std::vector<Access> log_access;
std::uint32_t bf_guest_read_u32(std::uint32_t va) {
    auto it=mem.find(va); const auto value=it==mem.end()?0u:it->second;
    log_access.push_back({'R',va,value}); return value;
}
void bf_guest_write_u32(std::uint32_t va,std::uint32_t value) {
    log_access.push_back({'W',va,value}); mem[va]=value;
}
static bool run(std::uint32_t count,std::uint32_t limit,std::uint32_t flags) {
    mem.clear(); log_access.clear(); mem[0x40f0a0u]=count; mem[0x40f0a4u]=limit;
    const auto result=FUN_0030dbb0();
    const auto slot=0x40eca0u+count*4u;
    std::vector<Access> expected={{'R',0x40f0a0u,count},{'R',0x40f0a4u,limit},
        {'W',0x40f0a0u,count+1u},{'W',slot,0x3b68b0u},
        {'W',0x40e888u,count},{'W',0x3b68b4u,count}};
    if(limit<32u)expected.push_back({'W',0x40f0a4u,32u});
    if(log_access.size()!=expected.size())return false;
    for(std::size_t i=0;i<expected.size();++i)
        if(log_access[i].kind!=expected[i].kind||log_access[i].va!=expected[i].va||log_access[i].value!=expected[i].value)return false;
    if(result.eax!=count||result.ecx!=32u||result.edx!=limit||result.eflags_defined!=0x8d5u||result.eflags_values!=flags)return false;
    auto oracle=std::unordered_map<std::uint32_t,std::uint32_t>{{0x40f0a0u,count},{0x40f0a4u,limit}};
    for(const auto& access:expected)if(access.kind=='W')oracle[access.va]=access.value;
    for(const auto& item:oracle)if(mem[item.first]!=item.second)return false;
    return true;
}
int main() {
    const std::uint32_t counts[]={0,31,32,255,256,257,0xffffffffu};
    // CMP with 32 covers borrow, parity, zero and signed overflow.
    const std::uint32_t limits[] = {0, 31, 32, 0xffffffffu, 0x80000000u};
    const std::uint32_t cmp_flags[] = {0x81u, 0x85u, 0x44u, 0x80u, 0x800u};
    for (auto count : counts) {
        for (unsigned i = 0; i < sizeof(limits) / sizeof(limits[0]); ++i) {
            if (!run(count, limits[i], cmp_flags[i])) {
                std::fprintf(stderr, "case failed: %08x %08x\n", count, limits[i]);
                return 1;
            }
        }
    }
    return 0;
}
'''


class GuestModelEvidence(unittest.TestCase):
    def test_source_hash_label(self):
        text = SOURCE.read_text(encoding="utf-8")
        self.assertIn(BODY_SHA.upper(), text)
        self.assertIn("0x0030dbb0", text)

    def test_private_retail_xbe_if_available(self):
        path = os.environ.get("BF_RETAIL_XBE")
        if not path:
            self.skipTest("set BF_RETAIL_XBE to authenticate the private retail XBE")
        data = Path(path).read_bytes()
        self.assertEqual(hashlib.sha256(data).hexdigest(), XBE_SHA256)
        offset = file_offset(sections(data), int(ENTRY, 16), BODY_LENGTH)
        self.assertEqual(hashlib.sha256(data[offset:offset + BODY_LENGTH]).hexdigest(), BODY_SHA)

    def test_guest_memory_order_aliases_and_flags(self):
        compilers = [shutil.which(name) for name in ("clang++", "g++")]
        compilers = [compiler for compiler in compilers if compiler]
        self.assertTrue(compilers, "clang++ or g++ required")
        with tempfile.TemporaryDirectory(prefix="bf-0030dbb0-") as td:
            work = Path(td)
            harness = work / "harness.cpp"
            harness.write_text(HARNESS, encoding="utf-8")
            for compiler in compilers:
                for optimization in ("-O0", "-O2"):
                    exe = work / (Path(compiler).name.replace("+", "p") + optimization[1:])
                    command = [compiler, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra", "-Werror", optimization,
                               "-I", str(ROOT / "include"), str(SOURCE), str(harness), "-o", str(exe)]
                    subprocess.run(command, check=True, cwd=work, timeout=60)
                    subprocess.run([str(exe)], check=True, cwd=work, timeout=60)


if __name__ == "__main__":
    unittest.main()
