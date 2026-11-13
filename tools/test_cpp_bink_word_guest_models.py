#!/usr/bin/env python3
"""XBE-authenticated C++17 guest-memory checks for four Bink WORD loops.

Checks exact contiguous XBE bodies, absence of CALL, ordered guest access width,
memory effects, and EAX projections. Xbox ABI, faults, flags, and stack aliases
are not modeled. Set BF_RETAIL_XBE to the private retail XBE path.
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
CASES = {
    "0x00367f30": (209, "99c6aa4245b889e3c442a438171612aa2a4a3718a6e41ffd6c201c0eef65453c"),
    "0x00368150": (137, "646000a07998377a6c5df4a81758a758fd504b8fb7ecd718ce4a56e17e9b7b92"),
    "0x003681e0": (262, "79f6f5d99aa4fe77b68c2ad0a3452103f493eabba60a2762dcf804ffe0bc2a76"),
    "0x00369620": (139, "db71f588232c0156e19bb809e93a56d2c43711f65e21053be27d655071ac4a78"),
}
SOURCES = [source_path(ROOT, entry) for entry in CASES]

HARNESS = r'''
#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include <unordered_map>
#include <vector>
#include "bf_xbe_guest32_word_model.h"
std::uint32_t FUN_00367f30(std::uint32_t,std::uint32_t);
std::uint32_t FUN_00368150(std::uint32_t,std::uint32_t,std::uint32_t);
std::uint32_t FUN_003681e0(std::uint32_t,std::uint32_t);
std::uint32_t FUN_00369620(std::uint32_t,std::uint32_t,std::uint32_t);
struct Access { char op; std::uint32_t va,value;
    bool operator==(const Access& x) const {return op==x.op&&va==x.va&&value==x.value;}
};
struct Machine {
    std::unordered_map<std::uint32_t,std::uint8_t> bytes;
    std::vector<Access> log;
    std::uint8_t r8(std::uint32_t a) {
        auto it=bytes.find(a); const auto v=it==bytes.end()?0u:it->second;
        log.push_back({'r',a,v}); return v;
    }
    std::uint16_t r16(std::uint32_t a) {
        std::uint16_t v=0;
        for(unsigned i=0;i<2;++i) {auto it=bytes.find(a+i);if(it!=bytes.end())v|=std::uint16_t(std::uint16_t(it->second)<<(8u*i));}
        log.push_back({'H',a,v}); return v;
    }
    std::uint32_t r32(std::uint32_t a) {
        std::uint32_t v=0;
        for(unsigned i=0;i<4;++i) {auto it=bytes.find(a+i);if(it!=bytes.end())v|=std::uint32_t(it->second)<<(8u*i);}
        log.push_back({'R',a,v}); return v;
    }
    void w16(std::uint32_t a,std::uint16_t v) {
        log.push_back({'h',a,v});for(unsigned i=0;i<2;++i)bytes[a+i]=std::uint8_t(v>>(8u*i));
    }
    void w32(std::uint32_t a,std::uint32_t v) {
        log.push_back({'W',a,v});for(unsigned i=0;i<4;++i)bytes[a+i]=std::uint8_t(v>>(8u*i));
    }
};
static Machine actual;
std::uint8_t bf_guest_read_u8(std::uint32_t a){return actual.r8(a);}
std::uint16_t bf_guest_read_u16(std::uint32_t a){return actual.r16(a);}
std::uint32_t bf_guest_read_u32(std::uint32_t a){return actual.r32(a);}
void bf_guest_write_u16(std::uint32_t a,std::uint16_t v){actual.w16(a,v);}
void bf_guest_write_u32(std::uint32_t a,std::uint32_t v){actual.w32(a,v);}
void bf_guest_write_u8(std::uint32_t,std::uint8_t){std::abort();}
static void put32(Machine& m,std::uint32_t a,std::uint32_t v){for(unsigned i=0;i<4;++i)m.bytes[a+i]=std::uint8_t(v>>(8u*i));}
static void put16(Machine& m,std::uint32_t a,std::uint16_t v){for(unsigned i=0;i<2;++i)m.bytes[a+i]=std::uint8_t(v>>(8u*i));}
static void setup(Machine& m,unsigned n,bool two) {
    m=Machine{};
    put32(m,0x004be778u,0x1100u);put32(m,0x004be768u,0x1000u);
    put32(m,0x004be77cu,0x1300u);put32(m,0x004be76cu,0x1200u);
    put32(m,0x004be760u,0x2000u);put32(m,0x004be764u,0x3000u);
    put32(m,0x004be7a4u,0xfffff000u);
    for(unsigned i=0;i<n;++i) {
        const std::uint8_t hi=std::uint8_t(3u+7u*i),ix=std::uint8_t(11u+9u*i);
        m.bytes[0x1100u+i]=hi;m.bytes[0x1000u+i]=ix;
        put16(m,0x004b6ac0u+std::uint32_t(hi)*4u,std::uint16_t(0x1200u+i));
        put16(m,0x004bdb60u+std::uint32_t(ix)*4u,std::uint16_t(0x2100u+i));
        if(two) {
            const auto hi2=std::uint8_t(17u+5u*i),ix2=std::uint8_t(29u+3u*i);
            m.bytes[0x1300u+i]=hi2;m.bytes[0x1200u+i]=ix2;
            put16(m,0x004b6ac0u+std::uint32_t(hi2)*4u,std::uint16_t(0x3200u+i));
            put16(m,0x004bdb60u+std::uint32_t(ix2)*4u,std::uint16_t(0x4300u+i));
        }
    }
}
static std::uint16_t table_pair(Machine& m,std::uint32_t high_idx,std::uint32_t index) {
    const auto a=m.r16(0x004b6ac0u+high_idx*4u);
    const auto b=m.r16(0x004bdb60u+index*4u);
    return std::uint16_t(a|b);
}
static std::uint32_t ref67f30(Machine& m,std::uint32_t arg1,std::uint32_t arg2) {
    auto n=arg1;
    do {
        auto hp=m.r32(0x004be778u);auto hi=m.r8(hp);auto ip=m.r32(0x004be768u);auto ix=m.r8(ip);
        auto value=table_pair(m,hi,ix);
        m.w32(0x004be778u,hp+1u);auto out=m.r32(0x004be760u);m.w32(0x004be768u,ip+1u);
        m.w16(out,value);out=m.r32(0x004be760u);auto base=m.r32(0x004be7a4u);m.w16(base+out,value);
        hp=m.r32(0x004be77cu);hi=m.r8(hp);ip=m.r32(0x004be76cu);ix=m.r8(ip);
        value=table_pair(m,hi,ix);
        m.w32(0x004be77cu,hp+1u);out=m.r32(0x004be764u);m.w32(0x004be76cu,ip+1u);
        m.w16(out,value);out=m.r32(0x004be764u);base=m.r32(0x004be7a4u);m.w16(out+base,value);
        const auto out1=m.r32(0x004be760u)+2u;const auto out2=m.r32(0x004be764u)+2u;
        --n;m.w32(0x004be760u,out1);m.w32(0x004be764u,out2);
    } while(n!=0u);
    return arg1+arg2;
}
static std::uint32_t ref68150(Machine& m,std::uint32_t entry_eax,std::uint32_t count) {
    auto eax=entry_eax;
    while(count!=0u) {
        const auto hp=m.r32(0x004be778u);const auto hi=m.r8(hp);
        const auto ip=m.r32(0x004be768u);const auto ix=m.r8(ip);
        const auto value=table_pair(m,hi,ix);eax=value;
        m.w32(0x004be778u,hp+1u);auto out=m.r32(0x004be760u);
        m.w32(0x004be768u,ip+1u);m.w16(out,value);
        out=m.r32(0x004be760u);m.w16(out+2u,value);
        out=m.r32(0x004be760u);auto base=m.r32(0x004be7a4u);m.w16(base+out,value);
        out=m.r32(0x004be760u);base=m.r32(0x004be7a4u);m.w16(base+2u+out,value);
        const auto next=m.r32(0x004be760u)+4u;--count;m.w32(0x004be760u,next);
    }
    return eax;
}
static std::uint32_t ref681e0(Machine& m,std::uint32_t arg1,std::uint32_t arg2) {
    auto n=arg1;
    do {
        auto hp=m.r32(0x004be778u);auto hi=m.r8(hp);auto ip=m.r32(0x004be768u);auto ix=m.r8(ip);
        auto value=table_pair(m,hi,ix);
        m.w32(0x004be778u,hp+1u);auto out=m.r32(0x004be760u);m.w32(0x004be768u,ip+1u);
        m.w16(out,value);out=m.r32(0x004be760u);m.w16(out+2u,value);
        out=m.r32(0x004be760u);auto base=m.r32(0x004be7a4u);m.w16(base+out,value);
        out=m.r32(0x004be760u);base=m.r32(0x004be7a4u);m.w16(base+2u+out,value);
        hp=m.r32(0x004be77cu);hi=m.r8(hp);ip=m.r32(0x004be76cu);ix=m.r8(ip);
        value=table_pair(m,hi,ix);
        m.w32(0x004be77cu,hp+1u);out=m.r32(0x004be764u);m.w32(0x004be76cu,ip+1u);
        m.w16(out,value);out=m.r32(0x004be764u);m.w16(out+2u,value);
        out=m.r32(0x004be764u);base=m.r32(0x004be7a4u);m.w16(out+base,value);
        out=m.r32(0x004be764u);base=m.r32(0x004be7a4u);m.w16(out+base+2u,value);
        const auto out1=m.r32(0x004be760u)+4u;const auto out2=m.r32(0x004be764u)+4u;
        --n;m.w32(0x004be760u,out1);m.w32(0x004be764u,out2);
    } while(n!=0u);
    return arg1+arg2;
}
static std::uint32_t ref69620(Machine& m,std::uint32_t entry_eax,std::uint32_t count) {
    auto eax=entry_eax;
    while(count!=0u) {
        const auto hp=m.r32(0x004be778u);const auto high=m.r8(hp);
        const auto ip=m.r32(0x004be768u);const auto ix=m.r8(ip);
        const auto table=m.r16(0x004bdb60u+ix*4u);
        const auto value=std::uint16_t(table|std::uint16_t((high&0x80u)<<8));eax=value;
        m.w32(0x004be768u,ip+1u);auto out=m.r32(0x004be760u);m.w32(0x004be778u,hp+1u);
        m.w16(out,value);out=m.r32(0x004be760u);m.w16(out+2u,value);
        out=m.r32(0x004be760u);auto base=m.r32(0x004be7a4u);m.w16(base+out,value);
        out=m.r32(0x004be760u);base=m.r32(0x004be7a4u);m.w16(base+2u+out,value);
        const auto next=m.r32(0x004be760u)+4u;--count;m.w32(0x004be760u,next);
    }
    return eax;
}
static bool same(const Machine& a,const Machine& e,const char* name) {
    if(a.log!=e.log){std::fprintf(stderr,"%s access trace differs: %zu vs %zu\n",name,a.log.size(),e.log.size());return false;}
    if(a.bytes!=e.bytes){std::fprintf(stderr,"%s guest bytes differ\n",name);return false;}
    return true;
}
int main() {
    for(unsigned count=1;count<=2;++count) {
        const std::uint32_t b=0xfffffffeu;
        Machine expected;setup(expected,count,true);const auto e1=ref67f30(expected,count,b);
        setup(actual,count,true);const auto r1=FUN_00367f30(count,b);
        if(r1!=e1||!same(actual,expected,"67f30"))return 10;
        setup(expected,count,true);const auto e2=ref681e0(expected,count,b);
        setup(actual,count,true);const auto r2=FUN_003681e0(count,b);
        if(r2!=e2||!same(actual,expected,"681e0"))return 11;
    }
    for(unsigned count=0;count<=2;++count) {
        constexpr std::uint32_t entry_eax=0xdeadbeefu;
        Machine expected;setup(expected,count,false);const auto e1=ref68150(expected,entry_eax,count);
        setup(actual,count,false);const auto r1=FUN_00368150(entry_eax,0xabcdef01u,count);
        if(r1!=e1||!same(actual,expected,"68150"))return 12;
        setup(expected,count,false);const auto e2=ref69620(expected,entry_eax,count);
        setup(actual,count,false);const auto r2=FUN_00369620(entry_eax,0xabcdef01u,count);
        if(r2!=e2||!same(actual,expected,"69620"))return 13;
    }
    return 0;
}
'''


class BinkWordModelTests(unittest.TestCase):
    def test_exact_retail_bodies_are_no_call(self):
        if not os.environ.get("BF_RETAIL_XBE"):
            self.skipTest("set BF_RETAIL_XBE to authenticate the private image")
        xbe_path = Path(os.environ["BF_RETAIL_XBE"])
        self.assertTrue(xbe_path.is_file(), "set BF_RETAIL_XBE to private retail default.xbe")
        raw = xbe_path.read_bytes()
        self.assertEqual(hashlib.sha256(raw).hexdigest(), XBE_SHA256)
        layout = sections(raw)
        objdump = shutil.which("objdump")
        self.assertIsNotNone(objdump, "objdump is required for no-CALL disassembly")
        with tempfile.TemporaryDirectory(prefix="bf-bink-word-xbe-") as td:
            for entry, (length, digest) in CASES.items():
                va = int(entry, 16)
                offset = file_offset(layout, va, length)
                body = raw[offset:offset + length]
                self.assertEqual(hashlib.sha256(body).hexdigest(), digest, entry)
                self.assertIn(digest.upper(), source_path(ROOT, entry).read_text(encoding="utf-8"))
                binary = Path(td) / (entry + ".bin")
                binary.write_bytes(body)
                disasm = subprocess.run(
                    [objdump, "-D", "-b", "binary", "-m", "i386", f"--adjust-vma={va:#x}", str(binary)],
                    check=True, capture_output=True, text=True, timeout=30,
                ).stdout
                calls = [line for line in disasm.splitlines() if "\tcall" in line.lower()]
                self.assertEqual(calls, [], entry)
                self.assertRegex(disasm.lower(), r"\bret\b", entry)

    def test_word_guest_accesses_and_eax(self):
        compilers = [shutil.which(name) for name in ("clang++", "g++")]
        compilers = [compiler for compiler in compilers if compiler]
        self.assertTrue(compilers, "clang++ or g++ required")
        with tempfile.TemporaryDirectory(prefix="bf-bink-word-model-") as td:
            work = Path(td)
            harness = work / "harness.cpp"
            harness.write_text(HARNESS, encoding="utf-8")
            for compiler in compilers:
                for optimization in ("-O0", "-O2"):
                    exe = work / ("bink_word_model.exe" if os.name == "nt" else "bink_word_model")
                    command = [compiler, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra", "-Werror",
                               optimization, "-I", str(ROOT / "include"),
                               *(str(path) for path in SOURCES), str(harness), "-o", str(exe)]
                    subprocess.run(command, check=True, cwd=work, timeout=60)
                    subprocess.run([str(exe)], check=True, cwd=work, timeout=60)


if __name__ == "__main__":
    unittest.main()
