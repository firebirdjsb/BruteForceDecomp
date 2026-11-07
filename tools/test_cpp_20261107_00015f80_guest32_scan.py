#!/usr/bin/env python3
"""Bounded Clang++17 guest32 ordering test for retail-XBE 0x00015F80.

Tests source translation unit with a mock guest VA and independent read trace.
No Xbox ABI, pointer mapping, fault/flags or game behavior is certified.
"""
from __future__ import annotations

import csv
import subprocess
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / 'src/main_unclassified/band_0001/0x00015f80.cpp'
BODY_SHA = '46944BDE93CACAC236E2744F46EC746CA169DC29643CC7D75DE51A78196C9659'

HARNESS = r'''
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <unordered_map>
#include <vector>
#include "bf_xbe_guest32_record_model.h"

std::uint32_t FUN_00015f80(std::uint32_t, std::uint32_t);
struct Read {std::uint32_t va, value;
    bool operator==(const Read& other) const {return va==other.va && value==other.value;}
};
static std::unordered_map<std::uint32_t,std::uint32_t> mem;
static std::vector<Read> actual, expected;
static std::uint32_t plain(std::uint32_t va) {
    auto it = mem.find(va);
    return it == mem.end() ? 0xA1B2C3D4u : it->second;
}
std::uint32_t bf_guest_read_u32(std::uint32_t va) {
    auto value = plain(va); actual.push_back({va,value});
    if(actual.size() > 64u) {std::fputs("Guest32 read budget exceeded (wrong stride)\n",stderr); std::exit(31);}
    return value;
}
void bf_guest_write_u32(std::uint32_t, std::uint32_t) {
    std::fputs("Unexpected guest write\n",stderr); std::abort();
}
static std::uint32_t expected_read(std::uint32_t va) {
    auto value = plain(va); expected.push_back({va,value}); return value;
}
static std::uint32_t x86_model(std::uint32_t eax, std::uint32_t ecx) {
    // Independent execution model, directly following retail x86 instruction order.
    std::uint32_t edx = expected_read(ecx);
    ecx = expected_read(eax + 8u);
    eax = expected_read(eax + 4u);
    if(eax != ecx) {
        do {
            if(expected_read(eax) == edx) break;
            eax += 24u;
        } while(eax != ecx);
    }
    const bool exhausted = eax == ecx;
    return eax & (exhausted ? 0u : 0xffffffffu);
}
static bool check(int n) {
    if (actual == expected) return true;
    std::fprintf(stderr,"Read ordering mismatch in case %d: %zu actual vs %zu expected\n",n,actual.size(),expected.size());
    for (std::size_t i=0;i<actual.size() || i<expected.size();++i) {
        if(i<actual.size()) std::fprintf(stderr,"actual %zu: %08x %08x\n",i,actual[i].va,actual[i].value);
        if(i<expected.size()) std::fprintf(stderr,"expected %zu: %08x %08x\n",i,expected[i].va,expected[i].value);
    }
    return false;
}
int main() {
    for(int i=0;i<8192;i++) {
        mem.clear();actual.clear();expected.clear();
        const std::uint32_t object = 0x61000000u + std::uint32_t(i)*32u;
        const std::uint32_t arg = (i % 31 == 0) ? object + 4u : 0x72000000u + std::uint32_t(i)*16u;
        const std::uint32_t start = i%7==0 ? 0xffffffe8u : 0x12000000u + std::uint32_t(i)*0x100u;
        const int length = i%6;
        const std::uint32_t searched = 0x5a5a0000u ^ std::uint32_t(i);
        const std::uint32_t end = start + 24u * std::uint32_t(length);
        mem[object+4u] = start;
        mem[object+8u] = end;
        if (arg != object+4u) mem[arg]=searched;
        // Every sixth case searches unsuccessfully, otherwise success index
        // varies; empty range never dereferences a record.
        const int matched = (i%6 == 0) ? -1 : (i/6) % (length ? length : 1);
        for (int j=0;j<length;j++) {
            std::uint32_t va=start+24u*std::uint32_t(j);
            mem[va] = j == matched ? plain(arg) : (plain(arg) ^ (0x11111111u + std::uint32_t(j)));
        }
        const auto oracle = x86_model(object,arg);
        const auto observed = FUN_00015f80(object,arg);
        if(observed != oracle) {
            std::fprintf(stderr,"Return mismatch in case %d: %08x vs %08x\n",i,observed,oracle);
            return 20;
        }
        if(!check(i)) return 21;
    }
    return 0;
}
'''


class Guest32RangeScanTests(unittest.TestCase):
    def test_source_provenance_and_unverified_boundary(self) -> None:
        with (ROOT / 'metadata/bulk_13694_inventory.csv').open(newline='') as stream:
            identities = {row['entry']: row['original_body_sha256'] for row in csv.DictReader(stream)}
        self.assertEqual(identities['0x00015f80'], BODY_SHA)
        text = SOURCE.read_text()
        self.assertIn('Input x86 body SHA-256: ' + BODY_SHA, text)
        self.assertIn('ABI_UNVERIFIED', text)
        self.assertIn('#include "bf_xbe_guest32_record_model.h"', text)
        self.assertNotIn('reinterpret_cast', text)
        self.assertNotIn('uintptr_t', text)

    def compile_and_run(self, directory: Path, source: Path, optimization: str) -> subprocess.CompletedProcess[str]:
        out = directory / ('range_scan_' + optimization.replace('-', '') + '_' + source.stem)
        cmd = ['clang++', '-std=c++17', optimization, '-Werror=pointer-to-int-cast',
               '-I', str(ROOT/'include'), str(source), '-x', 'c++', '-', '-o', str(out)]
        compile_result = subprocess.run(cmd, input=HARNESS, text=True, capture_output=True, timeout=50)
        self.assertEqual(compile_result.returncode, 0, compile_result.stderr)
        return subprocess.run([str(out)], text=True, capture_output=True, timeout=25)

    def test_oracle_o0_o2_and_wrong_operand_controls(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            directory = Path(tmp)
            for optimization in ('-O0', '-O2'):
                result = self.compile_and_run(directory, SOURCE, optimization)
                self.assertEqual(result.returncode, 0, result.stderr)
            negative_edits = (
                ('guest_eax + UINT32_C(8)', 'guest_eax + UINT32_C(12)'),
                ('guest_eax + UINT32_C(4)', 'guest_eax + UINT32_C(8)'),
                ('current += UINT32_C(0x18)', 'current += UINT32_C(0x1c)'),
                ('bf_guest_read_u32(guest_ecx)', 'bf_guest_read_u32(guest_ecx + UINT32_C(4))'),
                ('bf_guest_read_u32(current) == value', 'bf_guest_read_u32(current) != value'),
            )
            for number, (original, wrong) in enumerate(negative_edits):
                source = SOURCE.read_text()
                self.assertEqual(source.count(original), 1, original)
                mutant = directory / f'wrong_{number}.cpp'
                mutant.write_text(source.replace(original, wrong, 1))
                result = self.compile_and_run(directory, mutant, '-O0')
                self.assertNotEqual(result.returncode, 0, f'Mutated operand accepted: {original}')


if __name__ == '__main__':
    unittest.main()
