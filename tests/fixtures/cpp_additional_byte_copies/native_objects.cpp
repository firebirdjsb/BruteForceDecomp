// Initialized host-only operation seams, never canonical functions or original bytes.
// Test bindings do not propose a register or stack ABI or preserve register poststate.
#include <array>
#include <cstdint>
#include <cstring>
#include <iostream>
#include <random>
#include <cstdlib>
#include <climits>
#include <type_traits>
#include "bf_ghidra_types.h"
static_assert(CHAR_BIT == 8 && sizeof(undefined4) == 4, "byte/DWORD widths");
static_assert(std::is_same<undefined1, unsigned char>::value, "unsigned byte alias");
#include "001ca330.test-seam.inc"
#include "001d0b20.test-seam.inc"
#include "001d1f40.test-seam.inc"
#include "001d8ad0.test-seam.inc"
#include "001d2330.test-seam.inc"
using Memory = std::array<std::uint32_t, 256>;
static unsigned long cases = 0;
static constexpr unsigned Extent[] = {60,60,64,60,72};
static constexpr unsigned DstStride[] = {0,60,0,60,0};
static constexpr unsigned SrcStride[] = {0,0,0,60,0};
static bool is_loop(unsigned kind) { return kind == 1 || kind == 3; }
static void transfer(Memory &mem, unsigned dst, unsigned src, unsigned width) {
    unsigned char tmp[4];
    auto *bytes = reinterpret_cast<unsigned char *>(mem.data());
    // Load then store each original operation, so overlapping objects are live.
    std::memcpy(tmp, bytes + src, width);
    std::memcpy(bytes + dst, tmp, width);
}
static void model(Memory &mem, unsigned kind, unsigned dst, unsigned src, unsigned n) {
    for (unsigned i = 0; i < n; ++i, dst += DstStride[kind], src += SrcStride[kind]) {
        transfer(mem,dst,src,4);
        transfer(mem,dst+4,src+4,4);
        transfer(mem,dst+8,src+8,4);
        transfer(mem,dst+12,src+12,1);
        transfer(mem,dst+13,src+13,1);
        for (unsigned offset = 16; offset <= 24; offset += 4)
            transfer(mem,dst+offset,src+offset,4);
        if (kind == 0 || kind == 1 || kind == 3) {
            for (unsigned offset = 28; offset <= 52; offset += 4)
                transfer(mem,dst+offset,src+offset,4);
            transfer(mem,dst+56,src+56,1);
        } else if (kind == 2) {
            transfer(mem,dst+28,src+28,1);
            for (unsigned offset = 32; offset <= 60; offset += 4)
                transfer(mem,dst+offset,src+offset,4);
        } else {
            transfer(mem,dst+28,src+28,1);
            for (unsigned offset = 32; offset <= 40; offset += 4)
                transfer(mem,dst+offset,src+offset,4);
            transfer(mem,dst+44,src+44,1);
            for (unsigned offset = 48; offset <= 64; offset += 4)
                transfer(mem,dst+offset,src+offset,4);
            transfer(mem,dst+68,src+68,1);
            transfer(mem,dst+69,src+69,1);
            transfer(mem,dst+70,src+70,1);
        }
    }
}
static void check(unsigned kind,unsigned dst,unsigned src,unsigned n,std::uint32_t salt,
                  int explicit_byte = -1,unsigned explicit_offset = 13,
                  bool null_destination = false,bool null_source = false) {
    Memory actual, expected;
    for (unsigned i = 0; i < actual.size(); ++i)
        actual[i] = (0x9e3779b9u * (i + salt)) ^ (0xa5c39e71u + i * 19u);
    if (explicit_byte >= 0)
        reinterpret_cast<unsigned char *>(actual.data())[src + explicit_offset] = static_cast<unsigned char>(explicit_byte);
    expected = actual;
    model(expected,kind,dst,src,n);
    auto *d = null_destination ? nullptr : actual.data() + dst / 4;
    auto *s = null_source ? nullptr : actual.data() + src / 4;
    switch (kind) {
    case 0: FUN_001ca330(d,s); break;
    case 1: FUN_001d0b20(d,d ? d + n * 15 : nullptr,s); break;
    case 2: FUN_001d1f40(d,s); break;
    case 3: FUN_001d8ad0(s,s ? s + n * 15 : nullptr,d); break;
    case 4: FUN_001d2330(d,s); break;
    default: std::exit(2);
    }
    if (actual != expected) {
        std::cerr << "Mismatch kind=" << kind << " dst=" << dst << " src=" << src << " n=" << n << '\n';
        std::exit(1);
    }
    ++cases;
}
int main() {
    for (unsigned kind = 0; kind < 5; ++kind) {
        // Whole-storage equality checks all untouched bytes and padding.
        // Aligned bases cover disjoint objects, exact alias and both overlap directions.
        for (unsigned dst = 0; dst <= 256; dst += 4)
            for (unsigned src = 0; src <= 256; src += 4)
                for (unsigned n = is_loop(kind) ? 0 : 1; n <= (is_loop(kind) ? 7 : 1); ++n)
                    check(kind,dst,src,n,17u+dst+src+n);
        // Exhaust every value separately at each changed byte, including 0x45/0x46.
        for (unsigned offset : {13u,69u,70u}) {
            if (offset != 13 && kind != 4) continue;
            for (unsigned value = 0; value < 256; ++value)
                for (unsigned dst : {32u,60u,64u,68u,72u})
                    check(kind,dst,64u,is_loop(kind) ? 3u : 1u,value+99u,static_cast<int>(value),offset);
        }
        std::mt19937 rng(0x001ca330u + kind);
        for (unsigned j = 0; j < 3000; ++j) {
            const unsigned n = is_loop(kind) ? rng() % 8u : 1u;
            const unsigned dsize = n ? (n-1)*DstStride[kind]+Extent[kind] : 0;
            const unsigned ssize = n ? (n-1)*SrcStride[kind]+Extent[kind] : 0;
            const unsigned dbound = kind == 1 ? n*60 : dsize;
            const unsigned sbound = kind == 3 ? n*60 : ssize;
            const unsigned dst = (rng() % ((1024u-dbound)/4u+1u))*4u;
            const unsigned src = (rng() % ((1024u-sbound)/4u+1u))*4u;
            check(kind,dst,src,n,rng());
        }
        // Empty ranges must not dereference the otherwise unused unbound input.
        if (kind == 1) {
            check(kind,0,0,0,3,-1,13,false,true);
            check(kind,0,0,0,5,-1,13,true,true);
        }
        if (kind == 3) {
            check(kind,0,0,0,4,-1,13,true,false);
            check(kind,0,0,0,6,-1,13,true,true);
        }
    }
    std::cout << cases << " bounded-native-object cases passed; test seams only, no guest ABI/runtime proof\n";
}
