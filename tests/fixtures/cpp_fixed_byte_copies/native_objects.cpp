// Host-only operation model. Generated seams bind pseudo-registers explicitly.
// These initialized seams are not production signatures or guest ABI proposals.
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
#include "001dce30.test-seam.inc"
#include "001dd130.test-seam.inc"
#include "001dcde0.test-seam.inc"
#include "001d05d0.test-seam.inc"
#include "001e07e0.test-seam.inc"
using Memory = std::array<std::uint32_t, 128>;
static unsigned long cases = 0;
static constexpr unsigned Extent[] = {10,14,24,14,10};
static constexpr unsigned DstStride[] = {0,0,0,16,12};
static constexpr unsigned SrcStride[] = {0,0,0,0,12};
static void transfer(Memory &mem, unsigned dst, unsigned src, unsigned width) {
    unsigned char tmp[4];
    auto *bytes = reinterpret_cast<unsigned char *>(mem.data());
    // Preserve each original load before its corresponding store. Do not batch.
    std::memcpy(tmp, bytes + src, width);
    std::memcpy(bytes + dst, tmp, width);
}
static void model(Memory &mem, unsigned kind, unsigned dst, unsigned src, unsigned n) {
    for (unsigned i = 0; i < n; ++i, dst += DstStride[kind], src += SrcStride[kind]) {
        transfer(mem,dst,src,4);
        transfer(mem,dst+4,src+4,4);
        if (kind == 0 || kind == 4) {
            transfer(mem,dst+8,src+8,1);
            transfer(mem,dst+9,src+9,1);
        } else {
            transfer(mem,dst+8,src+8,4);
            transfer(mem,dst+12,src+12,1);
            transfer(mem,dst+13,src+13,1);
            if (kind == 2) {
                transfer(mem,dst+16,src+16,4);
                transfer(mem,dst+20,src+20,4);
            }
        }
    }
}
static void check(unsigned kind,unsigned dst,unsigned src,unsigned n,std::uint32_t salt,
                  int explicit_byte = -1,bool null_destination = false,bool null_source = false) {
    Memory actual, expected;
    for (unsigned i = 0; i < actual.size(); ++i)
        actual[i] = (0x9e3779b9u * (i + salt)) ^ (0xa5c39e71u + i * 19u);
    if (explicit_byte >= 0) {
        const unsigned offset = (kind == 0 || kind == 4) ? 9 : 13;
        reinterpret_cast<unsigned char *>(actual.data())[src + offset] = static_cast<unsigned char>(explicit_byte);
    }
    expected = actual;
    if (!null_destination) model(expected,kind,dst,src,n);
    auto *d = null_destination ? nullptr : actual.data() + dst / 4;
    auto *s = null_source ? nullptr : actual.data() + src / 4;
    switch (kind) {
    case 0: FUN_001dce30(d,s); break;
    case 1: FUN_001dd130(d,s); break;
    case 2: FUN_001dcde0(d,s); break;
    case 3: FUN_001d05d0(d,d + n * 4,s); break;
    case 4: FUN_001e07e0(s,s + n * 3,d); break;
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
        // Exhaustive 4-byte aligned base pairs include equality and partial overlap.
        for (unsigned dst = 0; dst <= 256; dst += 4)
            for (unsigned src = 0; src <= 256; src += 4)
                for (unsigned n = kind < 3 ? 1 : 0; n <= (kind < 3 ? 1 : 7); ++n)
                    check(kind,dst,src,n,17u+dst+src+n);
        // All source-byte patterns, disjoint/equal/forward/backward overlapping.
        for (unsigned value = 0; value < 256; ++value)
            for (unsigned dst : {32u,60u,64u,68u,72u})
                check(kind,dst,64u,kind < 3 ? 1u : 3u,value+99u,static_cast<int>(value));
        std::mt19937 rng(0x1dce30u + kind);
        for (unsigned j = 0; j < 3000; ++j) {
            const unsigned n = kind < 3 ? 1 : rng() % 8u;
            const unsigned dsize = n ? (n-1)*DstStride[kind]+Extent[kind] : 0;
            const unsigned ssize = n ? (n-1)*SrcStride[kind]+Extent[kind] : 0;
            // Also keep loop end pointers inside or one past the real array.
            const unsigned dbound = kind == 3 ? n*16 : dsize;
            const unsigned sbound = kind == 4 ? n*12 : ssize;
            const unsigned dst = (rng() % ((512u-dbound)/4u+1u))*4u;
            const unsigned src = (rng() % ((512u-sbound)/4u+1u))*4u;
            check(kind,dst,src,n,rng());
        }
        if (kind < 3) {
            // Destination null bypasses every source read, even if source is null.
            check(kind,0,0,1,1,-1,true,false);
            check(kind,0,0,1,2,-1,true,true);
        } else if (kind == 3) {
            // Empty destination range does not read an otherwise invalid source.
            check(kind,0,0,0,3,-1,false,true);
        } else {
            // Empty source range never dereferences a null destination.
            check(kind,0,0,0,4,-1,true,false);
        }
    }
    std::cout << cases << " bounded-native-object cases passed; test seams only, no guest ABI/runtime proof\n";
}
