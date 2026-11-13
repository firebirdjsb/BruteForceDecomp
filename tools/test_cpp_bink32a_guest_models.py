#!/usr/bin/env python3
"""Authenticate and exercise four Bink32a x86 guest-memory models.

The checker establishes exact XBE body bytes, absence of CALL instructions,
and memory-model trace agreement. It does not prove Xbox ABI or decoder behavior.
Run on Ubuntu with BF_RETAIL_XBE pointing to the private retail default.xbe.
"""
from __future__ import annotations

import hashlib
import os
from pathlib import Path
import shutil
import subprocess
import tempfile
import unittest

from source_layout import source_path

ROOT = Path(__file__).resolve().parents[1]
XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CASES = {
    "0x00365750": (104, "8b7f6591211015adda36ec1ed43993483a835354893ebfbc5134bb5f301dfe61",
                    "src/video_bink/bink32a/0x00365750.cpp"),
    "0x003657c0": (197, "224e44a484547c6616fd6bcbfd491fdc9bd163cac8159353ded61359b46f08da",
                    "src/video_bink/bink32a/0x003657c0.cpp"),
    "0x00365890": (129, "b7d408b74cd1ea708fd3f95a472421235fbc20042e7a54fe6f9f7f15c4623371",
                    "src/video_bink/bink32a/0x00365890.cpp"),
    "0x00365920": (246, "8f83efe7b75936ab26c21c47f03607e7b5965acc80a8d174f10e6fc49723d145",
                    "src/video_bink/bink32a/0x00365920.cpp"),
}
SOURCES = [source_path(ROOT, entry) for entry in CASES]

HARNESS = r'''
#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include <unordered_map>
#include <vector>
#include "bf_xbe_guest32_record_model.h"
std::uint32_t FUN_00365750(std::uint32_t,std::uint32_t);
std::uint32_t FUN_003657c0(std::uint32_t,std::uint32_t);
std::uint32_t FUN_00365890(std::uint32_t,std::uint32_t);
std::uint32_t FUN_00365920(std::uint32_t,std::uint32_t);

struct Access { char op; std::uint32_t va,value;
    bool operator==(const Access& x) const { return op==x.op&&va==x.va&&value==x.value; }
};
struct Machine {
    std::unordered_map<std::uint32_t,std::uint8_t> bytes;
    std::vector<Access> log;
    std::uint8_t read8(std::uint32_t a) {
        const auto it=bytes.find(a); const auto v=it==bytes.end()?0u:it->second;
        log.push_back({'r',a,v}); return v;
    }
    std::uint32_t read32(std::uint32_t a) {
        std::uint32_t v=0;
        for(unsigned i=0;i<4;++i) { const auto it=bytes.find(a+i); if(it!=bytes.end())v|=std::uint32_t(it->second)<<(8u*i); }
        log.push_back({'R',a,v}); return v;
    }
    void write32(std::uint32_t a,std::uint32_t v) {
        log.push_back({'W',a,v});
        for(unsigned i=0;i<4;++i)bytes[a+i]=std::uint8_t(v>>(8u*i));
    }
};
static Machine actual;
std::uint32_t bf_guest_read_u32(std::uint32_t a) { return actual.read32(a); }
std::uint8_t bf_guest_read_u8(std::uint32_t a) { return actual.read8(a); }
void bf_guest_write_u32(std::uint32_t a,std::uint32_t v) { actual.write32(a,v); }
std::uint8_t bf_guest_read_u8(std::uint32_t);
void bf_guest_write_u8(std::uint32_t,std::uint8_t) { std::abort(); }

static void put32(Machine& m,std::uint32_t a,std::uint32_t v) {
    for(unsigned i=0;i<4;++i)m.bytes[a+i]=std::uint8_t(v>>(8u*i));
}
static void setup(Machine& m,unsigned count,bool two_streams) {
    m=Machine{};
    put32(m,0x004be768u,0x1000u); put32(m,0x004be778u,0x1100u);
    put32(m,0x004be760u,0x2000u); put32(m,0x004be7a4u,0xfffff000u);
    put32(m,0x004be76cu,0x1200u); put32(m,0x004be77cu,0x1300u);
    put32(m,0x004be764u,0x3000u);
    for(unsigned i=0;i<count;++i) {
        const auto a=std::uint8_t(3u+5u*i), b=std::uint8_t(19u+7u*i);
        m.bytes[0x1000u+i]=a; m.bytes[0x1100u+i]=std::uint8_t(0x40u+i);
        put32(m,0x004be360u+std::uint32_t(a)*4u,0x10203000u+std::uint32_t(i));
        if(two_streams) {
            m.bytes[0x1200u+i]=b; m.bytes[0x1300u+i]=std::uint8_t(0x80u+i);
            put32(m,0x004be360u+std::uint32_t(b)*4u,0x50607000u+std::uint32_t(i));
        }
    }
}
static void ref65750(Machine& m,std::uint32_t count) {
    while(count!=0) {
        const auto ip=m.read32(0x004be768u); const auto idx=m.read8(ip);
        const auto hp=m.read32(0x004be778u); const auto hi=m.read8(hp);
        const auto value=m.read32(0x004be360u+std::uint32_t(idx)*4u)|(std::uint32_t(hi)<<24);
        m.write32(0x004be768u,ip+1u); const auto out=m.read32(0x004be760u);
        m.write32(0x004be778u,hp+1u); m.write32(out,value);
        const auto plane_out=m.read32(0x004be760u); const auto base=m.read32(0x004be7a4u);
        m.write32(base+plane_out,value); m.write32(0x004be760u,m.read32(0x004be760u)+4u);
        --count;
    }
}
static void ref65890(Machine& m,std::uint32_t count) {
    while(count!=0) {
        const auto ip=m.read32(0x004be768u); const auto idx=m.read8(ip);
        const auto hp=m.read32(0x004be778u); const auto hi=m.read8(hp);
        const auto value=m.read32(0x004be360u+std::uint32_t(idx)*4u)|(std::uint32_t(hi)<<24);
        m.write32(0x004be768u,ip+1u);
        const auto out=m.read32(0x004be760u);
        m.write32(0x004be778u,hp+1u);
        m.write32(out,value);
        m.write32(m.read32(0x004be760u)+4u,value);
        auto p=m.read32(0x004be760u); auto base=m.read32(0x004be7a4u); m.write32(base+p,value);
        p=m.read32(0x004be760u); base=m.read32(0x004be7a4u); m.write32(base+4u+p,value);
        m.write32(0x004be760u,m.read32(0x004be760u)+8u); --count;
    }
}
static void ref657c0(Machine& m,std::uint32_t count) {
    do {
        auto ip=m.read32(0x004be768u); auto idx=m.read8(ip); auto hp=m.read32(0x004be778u); auto hi=m.read8(hp);
        auto value=m.read32(0x004be360u+std::uint32_t(idx)*4u)|(std::uint32_t(hi)<<24);
        m.write32(0x004be768u,ip+1u); auto out=m.read32(0x004be760u); m.write32(0x004be778u,hp+1u);
        m.write32(out,value); out=m.read32(0x004be760u); auto base=m.read32(0x004be7a4u); m.write32(base+out,value);
        ip=m.read32(0x004be76cu); idx=m.read8(ip); hp=m.read32(0x004be77cu); hi=m.read8(hp);
        value=m.read32(0x004be360u+std::uint32_t(idx)*4u)|(std::uint32_t(hi)<<24);
        m.write32(0x004be76cu,ip+1u); out=m.read32(0x004be764u); m.write32(0x004be77cu,hp+1u);
        m.write32(out,value); out=m.read32(0x004be764u); base=m.read32(0x004be7a4u); m.write32(out+base,value);
        const auto out1=m.read32(0x004be760u)+4u;
        const auto out2=m.read32(0x004be764u)+4u;
        --count; m.write32(0x004be760u,out1); m.write32(0x004be764u,out2);
    } while(count!=0);
}
static void ref65920(Machine& m,std::uint32_t count) {
    do {
        auto ip=m.read32(0x004be768u); auto idx=m.read8(ip); auto hp=m.read32(0x004be778u); auto hi=m.read8(hp);
        auto value=m.read32(0x004be360u+std::uint32_t(idx)*4u)|(std::uint32_t(hi)<<24);
        m.write32(0x004be778u,hp+1u); m.write32(0x004be768u,ip+1u);
        auto out=m.read32(0x004be760u); m.write32(out,value); m.write32(m.read32(0x004be760u)+4u,value);
        out=m.read32(0x004be760u); auto base=m.read32(0x004be7a4u); m.write32(base+out,value);
        out=m.read32(0x004be760u); base=m.read32(0x004be7a4u); m.write32(base+4u+out,value);
        ip=m.read32(0x004be76cu); idx=m.read8(ip); hp=m.read32(0x004be77cu); hi=m.read8(hp);
        value=m.read32(0x004be360u+std::uint32_t(idx)*4u)|(std::uint32_t(hi)<<24);
        m.write32(0x004be76cu,ip+1u); out=m.read32(0x004be764u); m.write32(0x004be77cu,hp+1u);
        m.write32(out,value); m.write32(m.read32(0x004be764u)+4u,value);
        out=m.read32(0x004be764u); base=m.read32(0x004be7a4u); m.write32(out+base,value);
        out=m.read32(0x004be764u); base=m.read32(0x004be7a4u); m.write32(out+base+4u,value);
        const auto out1=m.read32(0x004be760u)+8u;
        const auto out2=m.read32(0x004be764u)+8u;
        --count; m.write32(0x004be760u,out1); m.write32(0x004be764u,out2);
    } while(count!=0);
}
static bool same(const Machine& a,const Machine& e,const char* name) {
    if(a.log!=e.log) { std::fprintf(stderr,"%s access trace differs (%zu vs %zu)\n",name,a.log.size(),e.log.size()); return false; }
    if(a.bytes!=e.bytes) { std::fprintf(stderr,"%s guest bytes differ\n",name); return false; }
    return true;
}
int main() {
    for(unsigned count=0;count<=2;++count) {
        Machine expected; setup(expected,count,false); ref65750(expected,count);
        setup(actual,count,false); const auto eax_00365750=FUN_00365750(0xabcdu,count);
        if(count==0 && eax_00365750!=0xabcdu)return 14;
        if(!same(actual,expected,"65750"))return 10;
        setup(expected,count,false); ref65890(expected,count);
        setup(actual,count,false); const auto eax_00365890=FUN_00365890(0xabcdu,count);
        if(count==0 && eax_00365890!=0xabcdu)return 14;
        if(!same(actual,expected,"65890"))return 11;
    }
    for(unsigned count=1;count<=2;++count) {
        const std::uint32_t a=count,b=0xfffffffdu;
        Machine expected; setup(expected,count,true); ref657c0(expected,count);
        setup(actual,count,true); const auto ret_a=FUN_003657c0(a,b);
        if(ret_a!=a+b||!same(actual,expected,"657c0"))return 12;
        setup(expected,count,true); ref65920(expected,count);
        setup(actual,count,true); const auto ret_b=FUN_00365920(a,b);
        if(ret_b!=a+b||!same(actual,expected,"65920"))return 13;
    }
    return 0;
}
'''


class BinkGuestModelTests(unittest.TestCase):
    def test_exact_retail_body_and_no_call_instruction(self):
        xbe_path = Path(os.environ.get("BF_RETAIL_XBE", ""))
        if not os.environ.get("BF_RETAIL_XBE"):
            self.skipTest("set BF_RETAIL_XBE to authenticate the private image")
        self.assertTrue(xbe_path.is_file(), "private retail XBE does not exist")
        raw = xbe_path.read_bytes()
        self.assertEqual(hashlib.sha256(raw).hexdigest(), XBE_SHA)
        sys_path = str(ROOT / "scripts")
        import sys
        sys.path.insert(0, sys_path)
        from verify_nine_cpp_call_edges_xbe import file_offset, sections
        layout = sections(raw)
        objdump = shutil.which("objdump")
        self.assertIsNotNone(objdump, "objdump is required for no-CALL disassembly check")
        with tempfile.TemporaryDirectory(prefix="bf-bink32a-xbe-") as td:
            for entry, (length, digest, _) in CASES.items():
                va = int(entry, 16)
                off = file_offset(layout, va, length)
                body = raw[off:off + length]
                self.assertEqual(hashlib.sha256(body).hexdigest(), digest, entry)
                self.assertIn(digest.upper(), source_path(ROOT, entry).read_text(encoding="utf-8"))
                blob = Path(td) / (entry + ".bin")
                blob.write_bytes(body)
                disassembly = subprocess.run(
                    [objdump, "-D", "-b", "binary", "-m", "i386", f"--adjust-vma={va:#x}", str(blob)],
                    check=True, capture_output=True, text=True, timeout=30,
                ).stdout
                calls = [line for line in disassembly.splitlines()
                         if "\tcall" in line.lower() or "\tcallq" in line.lower()]
                self.assertEqual(calls, [], f"CALL found in original body {entry}")
                self.assertRegex(disassembly.lower(), r"\bret\b", entry)

    def test_cpp17_guest_access_order_and_state(self):
        compilers = [shutil.which(name) for name in ("clang++", "g++")]
        compilers = [compiler for compiler in compilers if compiler]
        self.assertTrue(compilers, "clang++ or g++ required")
        with tempfile.TemporaryDirectory(prefix="bf-bink32a-model-") as td:
            work = Path(td)
            harness = work / "harness.cpp"
            harness.write_text(HARNESS, encoding="utf-8")
            for compiler in compilers:
                for optimization in ("-O0", "-O2"):
                    exe = work / (Path(compiler).name.replace("+", "p") + optimization[1:])
                    command = [compiler, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra", "-Werror", optimization,
                               "-I", str(ROOT / "include"), *(str(path) for path in SOURCES),
                               str(harness), "-o", str(exe)]
                    subprocess.run(command, check=True, cwd=work, timeout=60)
                    subprocess.run([str(exe)], check=True, cwd=work, timeout=60)


if __name__ == "__main__":
    import sys
    unittest.main()
