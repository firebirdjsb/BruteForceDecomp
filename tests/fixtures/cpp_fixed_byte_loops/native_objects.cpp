// Host-only operation model. The generated test seams bind the original
// uninitialized ECX pseudo-register explicitly, solely for testing.
// Neither seam is proposed as a production signature or a guest ABI.
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
static_assert(std::is_same<undefined1, unsigned char>::value, "preserve unsigned-byte alias");
#include "001cf1d0.test-seam.inc"
#include "001cf0f0.test-seam.inc"

using Memory = std::array<std::uint32_t, 128>;
static unsigned long cases = 0;
static void transfer(Memory &mem, unsigned dst, unsigned src, unsigned width) {
    unsigned char tmp[4];
    auto *bytes = reinterpret_cast<unsigned char *>(mem.data());
    std::memcpy(tmp, bytes + src, width); // one original load before its store
    std::memcpy(bytes + dst, tmp, width);
}
static void model(Memory &mem, unsigned dst, unsigned src, unsigned n, unsigned stride) {
    for (unsigned i = 0; i < n; ++i, dst += stride) {
        transfer(mem, dst, src, 4);
        transfer(mem, dst + 4, src + 4, 4);
        if (stride == 12) {
            transfer(mem, dst + 8, src + 8, 1);
            transfer(mem, dst + 9, src + 9, 1);
        } else {
            transfer(mem, dst + 8, src + 8, 4);
            transfer(mem, dst + 12, src + 12, 1);
            transfer(mem, dst + 13, src + 13, 1);
            transfer(mem, dst + 16, src + 16, 4);
            transfer(mem, dst + 20, src + 20, 4);
        }
    }
}
static void check(unsigned dst, unsigned src, unsigned n, unsigned stride, std::uint32_t salt) {
    Memory actual, expected;
    for (unsigned i = 0; i != actual.size(); ++i)
        actual[i] = (0x9e3779b9u * (i + salt)) ^ (0xa5c39e71u + i * 19u);
    expected = actual;
    model(expected, dst, src, n, stride);
    auto *p = actual.data() + dst / 4;
    auto *end = p + n * stride / 4;
    auto *input = actual.data() + src / 4;
    if (stride == 12) FUN_001cf1d0(p, end, input);
    else FUN_001cf0f0(p, end, input);
    if (actual != expected) {
        std::cerr << "Mismatch stride=" << stride << " dst=" << dst << " src=" << src << " n=" << n << '\n';
        std::exit(1);
    }
    ++cases;
}
int main() {
    for (unsigned stride : {12u, 24u}) {
        for (unsigned dst = 0; dst <= 256; dst += 4)
            for (unsigned src = 0; src <= 256; src += 4)
                for (unsigned n = 0; n <= 7; ++n)
                    check(dst, src, n, stride, 17u + dst + src + n);
        std::mt19937 rng(0x1cf1d0u + stride);
        for (unsigned j = 0; j < 10000; ++j) {
            const unsigned src = (rng() % 120u) * 4u;
            const unsigned n = rng() % 8u;
            const unsigned dst = (rng() % ((512u - n * stride) / 4u + 1u)) * 4u;
            check(dst, src, n, stride, rng());
        }
    }
    std::cout << cases << " bounded-native-object cases passed; explicit test-only ECX seam, not guest ABI/runtime proof\n";
}
