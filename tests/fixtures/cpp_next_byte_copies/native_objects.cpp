// Initialized host-only operation seams, never canonical functions or original bytes.
// Test bindings do not propose a register or stack ABI.
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
#include "001d6ab0.test-seam.inc"
#include "001dcf70.test-seam.inc"
#include "001cfbd0.test-seam.inc"
#include "001d7730.test-seam.inc"
using Memory = std::array<std::uint32_t, 128>;
static unsigned long cases = 0;
static constexpr unsigned Extent[] = {24,36,36,36};
static constexpr unsigned DstStride[] = {24,0,36,36};
static constexpr unsigned SrcStride[] = {24,0,0,36};
static void transfer(Memory &mem, unsigned dst, unsigned src, unsigned width) {
    unsigned char tmp[4];
    auto *bytes = reinterpret_cast<unsigned char *>(mem.data());
    // Each original load precedes its own store. Aliasing must not batch reads.
    std::memcpy(tmp, bytes + src, width);
    std::memcpy(bytes + dst, tmp, width);
}
static void model(Memory &mem, unsigned kind, unsigned dst, unsigned src, unsigned n) {
    for (unsigned i = 0; i < n; ++i, dst += DstStride[kind], src += SrcStride[kind]) {
        if (kind == 0) {
            transfer(mem,dst,src,4);
            transfer(mem,dst+4,src+4,4);
            transfer(mem,dst+8,src+8,4);
            transfer(mem,dst+12,src+12,1);
            transfer(mem,dst+13,src+13,1);
            transfer(mem,dst+16,src+16,4);
            transfer(mem,dst+20,src+20,4);
        } else {
            for (unsigned offset = 0; offset <= 24; offset += 4)
                transfer(mem,dst+offset,src+offset,4);
            transfer(mem,dst+28,src+28,1);
            transfer(mem,dst+29,src+29,1);
            transfer(mem,dst+32,src+32,4);
        }
    }
}
static void check(unsigned kind,unsigned dst,unsigned src,unsigned n,std::uint32_t salt,
                  int explicit_byte = -1,bool null_destination = false,bool null_source = false) {
    Memory actual, expected;
    for (unsigned i = 0; i < actual.size(); ++i)
        actual[i] = (0x9e3779b9u * (i + salt)) ^ (0xa5c39e71u + i * 19u);
    if (explicit_byte >= 0) {
        const unsigned offset = kind == 0 ? 13 : 29;
        reinterpret_cast<unsigned char *>(actual.data())[src + offset] = static_cast<unsigned char>(explicit_byte);
    }
    expected = actual;
    if (!null_destination) model(expected,kind,dst,src,n);
    auto *d = null_destination ? nullptr : actual.data() + dst / 4;
    auto *s = null_source ? nullptr : actual.data() + src / 4;
    switch (kind) {
    case 0: FUN_001d6ab0(s,s + n * 6,d); break;
    case 1: FUN_001dcf70(d,s); break;
    case 2: FUN_001cfbd0(d,d + n * 9,s); break;
    case 3: FUN_001d7730(s,s + n * 9,d); break;
    default: std::exit(2);
    }
    if (actual != expected) {
        std::cerr << "Mismatch kind=" << kind << " dst=" << dst << " src=" << src << " n=" << n << '\n';
        std::exit(1);
    }
    ++cases;
}
int main() {
    for (unsigned kind = 0; kind < 4; ++kind) {
        // Full storage equality checks all untouched bytes, including padding.
        // All aligned base pairs cover disjoint, exact alias and both overlaps.
        for (unsigned dst = 0; dst <= 256; dst += 4)
            for (unsigned src = 0; src <= 256; src += 4)
                for (unsigned n = kind == 1 ? 1 : 0; n <= (kind == 1 ? 1 : 7); ++n)
                    check(kind,dst,src,n,17u+dst+src+n);
        for (unsigned value = 0; value < 256; ++value)
            for (unsigned dst : {32u,60u,64u,68u,72u})
                check(kind,dst,64u,kind == 1 ? 1u : 3u,value+99u,static_cast<int>(value));
        std::mt19937 rng(0x1d6ab0u + kind);
        for (unsigned j = 0; j < 3000; ++j) {
            const unsigned n = kind == 1 ? 1 : rng() % 8u;
            const unsigned dsize = n ? (n-1)*DstStride[kind]+Extent[kind] : 0;
            const unsigned ssize = n ? (n-1)*SrcStride[kind]+Extent[kind] : 0;
            const unsigned dbound = kind == 2 ? n*36 : dsize;
            const unsigned sbound = kind == 0 || kind == 3 ? n*SrcStride[kind] : ssize;
            const unsigned dst = (rng() % ((512u-dbound)/4u+1u))*4u;
            const unsigned src = (rng() % ((512u-sbound)/4u+1u))*4u;
            check(kind,dst,src,n,rng());
        }
        if (kind == 1) {
            check(kind,0,0,1,1,-1,true,false);
            check(kind,0,0,1,2,-1,true,true);
        } else if (kind == 2) {
            check(kind,0,0,0,3,-1,false,true);
        } else {
            check(kind,0,0,0,4,-1,true,false);
        }
    }
    std::cout << cases << " bounded-native-object cases passed; test seams only, no guest ABI/runtime proof\n";
}
