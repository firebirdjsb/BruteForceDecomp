#!/usr/bin/env python3
"""Focused bounded, synthetic guest32 ordering gate for two x86-checked drafts.

Mocks observe calls without reproducing FUN_0008f6e0's memory effects. This
checks only each caller's read/write/dispatch order, not Xbox behavior/ABI.
"""
from __future__ import annotations

import csv
import subprocess
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SOURCES = (
    'src/main_unclassified/band_0001/0x00012540.cpp',
    'src/main_unclassified/band_0001/0x0001d470.cpp',
)
HASHES = {
    '0x00012540': '17ECDF624151AA6A24020748FA3D463DCB4EB707EA1E78CB6D33999629EE9522',
    '0x0001d470': '9D9A8EBA1FF910609ABDE98C000B99E3AE58251E5FFEDCEE9E1768D7710C511E',
}

FIXTURE = r'''
#include <cstdint>
#include <cstdio>
#include <unordered_map>
#include <vector>
#include "bf_xbe_guest32_record_model.h"

void FUN_00012540(std::uint32_t);
void FUN_0001d470(std::uint32_t);
struct E {
    char op;
    std::uint32_t va;
    std::uint32_t word;
    bool operator==(const E &rhs) const {
        return op==rhs.op && va==rhs.va && word==rhs.word;
    }
};
static std::vector<E> got, want;
static std::unordered_map<std::uint32_t,std::uint32_t> mem;
static std::uint32_t raw(std::uint32_t va) {
    auto it=mem.find(va);
    return it==mem.end()?0:it->second;
}
std::uint32_t bf_guest_read_u32(std::uint32_t va) {
    const auto word=raw(va);
    got.push_back({'R',va,word});
    return word;
}
void bf_guest_write_u32(std::uint32_t va,std::uint32_t word) {
    got.push_back({'W',va,word});
    mem[va]=word;
}
void FUN_0008f6e0(std::uint32_t edx) {
    // Unimplemented callee represented as a pure dispatch marker, NOT emulated.
    got.push_back({'C',edx,0});
}
static void expect_read(std::uint32_t address) {
    want.push_back({'R',address,raw(address)});
}
static void expect_write(std::uint32_t address,std::uint32_t word) {
    want.push_back({'W',address,word});
    mem[address]=word;
}
static void expect_call(std::uint32_t address) {want.push_back({'C',address,0});}
static bool check(const char *kind,int iteration) {
    if (got==want) return true;
    std::fprintf(stderr,"Mismatch %s test %d: got %zu operations, expected %zu\n",kind,iteration,got.size(),want.size());
    for(unsigned i=0;i<got.size() || i<want.size();i++) {
        if (i<got.size()) std::fprintf(stderr,"  observed %u: %c %08x %08x\n",i,got[i].op,got[i].va,got[i].word);
        if (i<want.size())std::fprintf(stderr,"  expected %u: %c %08x %08x\n",i,want[i].op,want[i].va,want[i].word);
    }
    return false;
}
int main() {
    std::uint32_t state=0x919e3a27u;
    for(int i=0;i<8192;i++) {
        state ^= state<<13; state ^= state>>17; state ^= state<<5;
        std::uint32_t base= i%5==0 ? 0xffffffe0u : (0x10000000u + std::uint32_t(i)*0x100u);
        mem.clear();got.clear();want.clear();
        std::uint32_t v=(i&1)? (state|1u) : 0u;
        mem[base+0x14u]=v;
        // For both cases, snapshot and compute expected read before execution.
        const auto test=v;
        want.push_back({'W',base,0x003a4f68u});
        want.push_back({'R',base+0x14u,test});
        if (test) expect_call(base+0x10u);
        FUN_00012540(base);
        if (!check("0x00012540",i))return 42;

        mem.clear();got.clear();want.clear();
        const std::uint32_t offs[]={0x58u,0x3cu,0x28u,0x14u};
        const std::uint32_t edx[]={0x54u,0x38u,0x24u,0x10u};
        for(int k=0;k<4;k++) {
            state ^= state<<13; state ^= state>>17; state ^= state<<5;
            mem[base+offs[k]]= ((i>>k)&1)? (state|1u) : 0u;
        }
        for(int k=0;k<4;k++) {
            expect_read(base+offs[k]);
            if (raw(base+offs[k]))expect_call(base+edx[k]);
            if(k==0)expect_write(base+0x1cu,0x003a4f64u);
            if(k==2)expect_write(base,0x003a4f68u);
        }
        FUN_0001d470(base);
        if(!check("0x0001d470",i))return 43;
    }
    return 0;
}
'''


class Guest32RecordTests(unittest.TestCase):
    def test_source_identity_provenance_and_interface_boundaries(self):
        with (ROOT / 'metadata/bulk_13694_inventory.csv').open() as stream:
            hashes={x['entry']:x['original_body_sha256'] for x in csv.DictReader(stream)}
        for source in SOURCES:
            p=ROOT / source
            entry='0x'+p.stem[2:]
            raw=p.read_text()
            self.assertEqual(hashes[entry],HASHES[entry])
            self.assertIn('Input x86 body SHA-256: '+HASHES[entry],raw)
            self.assertIn('ABI_UNVERIFIED',raw)
            self.assertIn('#include "bf_xbe_guest32_record_model.h"',raw)
            self.assertNotIn('reinterpret_cast',raw)
            self.assertNotIn('(uintptr_t)',raw)
        self.assertIn('FUN_0008f6e0(std::uint32_t guest_edx)',(ROOT/'include/bf_xbe_guest32_record_model.h').read_text())

    def compile_run(self, tmp: Path, opt: str, sources: list[str]) -> subprocess.CompletedProcess:
        target=tmp/('guest32_record_'+opt.replace('-','')+'.out')
        cmd=['clang++','-std=c++17',opt,'-Werror=pointer-to-int-cast','-I',str(ROOT/'include'),*sources,'-x','c++','-', '-o',str(target)]
        build=subprocess.run(cmd,input=FIXTURE,text=True,capture_output=True,timeout=60)
        self.assertEqual(build.returncode,0,build.stderr)
        return subprocess.run([str(target)],text=True,capture_output=True,timeout=30)

    def test_o0_o2_synthetic_dispatch_order_and_wrong_offset_controls(self):
        with tempfile.TemporaryDirectory() as d:
            tmp=Path(d)
            original=[str(ROOT/s) for s in SOURCES]
            for opt in ('-O0','-O2'):
                result=self.compile_run(tmp,opt,original)
                self.assertEqual(result.returncode,0,result.stderr)
            negatives=(
                (0,'guest_ecx + UINT32_C(0x10)','guest_ecx + UINT32_C(0x14)'),
                (1,'guest_esi + UINT32_C(0x38)','guest_esi + UINT32_C(0x34)'),
                (1,'guest_esi + UINT32_C(0x1c)','guest_esi + UINT32_C(0x20)'),
            )
            for which,before,after in negatives:
                changed=(ROOT/SOURCES[which]).read_text()
                self.assertIn(before,changed)
                altered=changed.replace(before,after,1)
                alternate=tmp/f'broken_{which}_{len(after)}_{after[-4:-1]}.cpp'
                alternate.write_text(altered)
                paths=original.copy();paths[which]=str(alternate)
                result=self.compile_run(tmp,'-O0',paths)
                self.assertNotEqual(result.returncode,0,'Wrong original guest offset was accepted')


if __name__ == '__main__':
    unittest.main()
