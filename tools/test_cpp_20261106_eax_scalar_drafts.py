#!/usr/bin/env python3
"""Public bounded C++17 unit tests for original EAX scalar/guest32 models.

Not an Xbox execution oracle: observes only the proven byte-level arithmetic,
non-aliased guest-memory read order and branch outputs; register/stack ABI,
page faults, and cross-function linkage remain ABI_UNVERIFIED.
"""
from __future__ import annotations

import csv
import hashlib
import subprocess
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SOURCES = (
    "src/main_unclassified/band_0001/0x000120f0.cpp",
    "src/main_unclassified/band_0008/0x0008f690.cpp",
)
EXPECTED = {
    "0x000120f0": "9FEFE68C61CEC0943A913B1988495825BFD1E3F128E1F92DB0A3DA5D8376BB9C",
    "0x0008f690": "A2E7B7D3A7DD6A4F5F264C6DEBD3A89E8588ECA8F90B3ED3FE84637F77145138",
}
FIXTURE = r'''
#include <cstdint>
#include <cstdio>
#include <unordered_map>
#include <vector>
#include "bf_xbe_guest32_record_model.h"
std::uint32_t FUN_000120f0(std::uint32_t guest_eax);
std::uint32_t FUN_0008f690(std::uint32_t guest_eax);
struct R { std::uint32_t va, word; bool operator==(const R& r) const { return va==r.va && word==r.word; } };
static std::unordered_map<std::uint32_t,std::uint32_t> mem;
static std::vector<R> got;
std::uint32_t bf_guest_read_u32(std::uint32_t va) {
  auto it=mem.find(va);const auto w=it==mem.end()?0u:it->second;
  got.push_back({va,w});return w;
}
// Neither reconstructed function has a guest32 write or host helper call.
int main() {
  std::uint32_t rng=0xe7a913b5u;
  for (int i=0;i<16384;i++) {
    rng^=rng<<13; rng^=rng>>17; rng^=rng<<5;
    const std::uint32_t input=(i==0?0u:(i==1?0xffffffffu:(i==2?0x80000000u:rng)));
    const std::uint64_t wide=static_cast<std::uint64_t>(input)*0x0019660dull+0x3c6ef35full;
    const std::uint32_t expected=static_cast<std::uint32_t>(wide) >> 21u;
    if(FUN_0008f690(input)!=expected){std::fprintf(stderr,"arithmetic case %d failed\n",i);return 41;}

    rng^=rng<<13; rng^=rng>>17; rng^=rng<<5;
    const std::uint32_t base=(i%7==0 ? 0xfffffff8u : (0x10000000u + static_cast<std::uint32_t>(i)*0x100u));
    const std::uint32_t flag=(i&1)?(rng|1u):0u;
    const std::uint32_t payload=(rng^0x91efcc01u);
    mem.clear();got.clear();
    mem[base+8u]=flag;
    mem[base+16u]=payload;
    const std::uint32_t observed=FUN_000120f0(base);
    const std::uint32_t wanted=flag?0u:payload;
    if(observed!=wanted){std::fprintf(stderr,"return case %d failed: %08x / %08x\n",i,observed,wanted);return 42;}
    if(got.empty() || got[0].va!=base+8u || got[0].word!=flag) {
      std::fprintf(stderr,"input read case %d failed\n",i); return 43;
    }
    if(flag) {if(got.size()!=1) {std::fprintf(stderr,"extra read on nonzero case %d\n",i);return 44;}}
    else if(got.size()!=2 || got[1].va!=base+16u || got[1].word!=payload) {
      std::fprintf(stderr,"result read case %d failed\n",i); return 45;
    }
  }
  return 0;
}
'''


def run_fixture(temp: Path, sources: list[str], opt: str) -> subprocess.CompletedProcess:
    exe = temp / 'bound_guest32'
    built = subprocess.run(
        ['clang++', '-std=c++17', '-Werror=pointer-to-int-cast',
         '-fno-strict-aliasing', opt, '-I', str(ROOT / 'include'),
         *sources, '-x', 'c++', '-', '-o', str(exe)],
        input=FIXTURE, text=True, capture_output=True, timeout=30,
    )
    if built.returncode:
        raise AssertionError(f"Clang++17 {opt} failed:\n{built.stderr}")
    return subprocess.run([str(exe)], text=True, capture_output=True, timeout=30)


class GuestEaxScalarDraftTests(unittest.TestCase):
    def test_original_identity_and_no_native_pointer_truncation(self):
        with (ROOT / 'metadata/bulk_13694_inventory.csv').open(newline='') as stream:
            inventory = {r['entry']: r['original_body_sha256'] for r in csv.DictReader(stream)}
        for source in SOURCES:
            p = ROOT / source
            entry = '0x' + p.stem[2:]
            s = p.read_text()
            self.assertEqual(inventory[entry], EXPECTED[entry])
            self.assertIn('Input x86 body SHA-256: ' + EXPECTED[entry], s)
            self.assertIn('ABI_UNVERIFIED', s)
            self.assertNotIn('reinterpret_cast', s)
            self.assertNotIn('(uintptr_t)', s)
            self.assertNotIn('(std::uintptr_t)', s)

    def test_o0_o2_original_bounded_read_order_and_math(self):
        with tempfile.TemporaryDirectory() as d:
            sources = [str(ROOT / p) for p in SOURCES]
            for opt in ('-O0', '-O2'):
                r = run_fixture(Path(d), sources, opt)
                self.assertEqual(r.returncode, 0, r.stderr)

    def test_wrong_opcode_operand_models_are_rejected(self):
        cases = [
            (0, 'guest_eax + UINT32_C(0x10)', 'guest_eax + UINT32_C(0x14)'),
            (0, 'return UINT32_C(0);', 'return UINT32_C(1);'),
            (1, '0x0019660d', '0x0019660f'),
            (1, '>> 21u', '>> 20u'),
        ]
        with tempfile.TemporaryDirectory() as d:
            for index, (which, original, wrong) in enumerate(cases):
                s = (ROOT / SOURCES[which]).read_text()
                self.assertEqual(s.count(original), 1)
                target = Path(d) / f'bad_{index}.cpp'
                target.write_text(s.replace(original, wrong))
                sources = [str(ROOT / p) for p in SOURCES]
                sources[which] = str(target)
                r = run_fixture(Path(d), sources, '-O0')
                self.assertNotEqual(r.returncode, 0, f'Wrong source operand was accepted: {original}')


if __name__ == '__main__':
    unittest.main()
