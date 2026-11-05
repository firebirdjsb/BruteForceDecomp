#include "conversion_model.hpp"
#include "native_wrappers.hpp"
#include <array>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
using scalar_conversion::Result;
static std::uint64_t cases = 0, digest = 1469598103934665603ull;
static std::uint32_t read_csr() {
    std::uint32_t v; __asm__ volatile("stmxcsr %0" : "=m"(v)); return v;
}
static void write_csr(std::uint32_t v) {
    __asm__ volatile("ldmxcsr %0" : : "m"(v) : "memory");
}
static std::uint32_t mode(unsigned i, unsigned sticky = 0) {
    return 0x1f80u | ((i & 3u) << 13) | ((i & 4u) << 4) |
           ((i & 8u) << 12) | sticky;
}
static void check(unsigned op, std::uint32_t bits, std::uint32_t csr) {
    const std::uint32_t seed[4] = {0xff800001u, bits ^ 0x7f800001u,
                                 bits ^ 0xffc12345u, bits ^ 0x00000001u};
    const std::uint32_t before = read_csr();
    const Result want = op == 0 ? scalar_conversion::cvttss2si(bits, csr)
                                : scalar_conversion::cvtsi2ss(bits, csr);
    const NativeResult got = op == 0 ? native_tt(bits, csr, seed)
                                     : native_si(bits, csr, seed);
    const std::uint32_t after = read_csr();
    const bool lanes_ok = got.lanes[0] == (op == 0 ? bits : got.bits) &&
                         got.lanes[1] == seed[1] && got.lanes[2] == seed[2] &&
                         got.lanes[3] == seed[3];
    if (got.bits != want.bits || got.after != want.after || before != after || !lanes_ok) {
        std::fprintf(stderr, "FAIL op=%u bits=%08x csr=%08x expected=%08x/%08x got=%08x/%08x restored=%d lanes=%d\n",
                     op, bits, csr, want.bits, want.after, got.bits, got.after,
                     before == after, lanes_ok);
        std::exit(1);
    }
    ++cases;
    digest = (digest ^ bits) * 1099511628211ull;
    digest = (digest ^ csr) * 1099511628211ull;
    digest = (digest ^ want.bits) * 1099511628211ull;
    digest = (digest ^ want.after) * 1099511628211ull;
}
static void phase(const char *name, std::uint64_t before) {
    std::printf("%s cases=%llu cumulative=%llu digest=%016llx\n", name,
        static_cast<unsigned long long>(cases-before),
        static_cast<unsigned long long>(cases), static_cast<unsigned long long>(digest));
    std::fflush(stdout);
}
static void state_check() {
    alignas(16) std::array<unsigned char,512> before{}, after{};
    const auto original = read_csr();
    __asm__ volatile("fxsave %0" : "=m"(before) : : "memory");
    std::uint32_t mask; std::memcpy(&mask, before.data()+28, sizeof(mask));
    if (mask == 0u) mask = 0xffbfu; // Architectural legacy fallback.
    if ((mask & 0xffffu) != 0xffffu) {
        std::fprintf(stderr,"UNSUPPORTED MXCSR_MASK=%08x, DAZ matrix not run\n", mask);
        std::exit(2);
    }
    // Exercise restoration even when caller CSR differs from requested CSR.
    for (unsigned i=0;i<16;++i) for (unsigned sticky=0;sticky<64;++sticky) {
        write_csr(mode(i,sticky));
        check(0, 0x3fc00000u, mode(15u-i,63u-sticky));
        check(1, 0x7fffffffu, mode(15u-i,63u-sticky));
    }
    write_csr(original);
    __asm__ volatile("fxsave %0" : "=m"(after) : : "memory");
    // x87 control/status/tag/opcode/pointers and all 8 x87 data register slots.
    // MXCSR checked separately; XMM are caller-saved and intentionally not claimed preserved.
    if (std::memcmp(before.data(),after.data(),24) != 0 ||
        std::memcmp(before.data()+32,after.data()+32,128) != 0) {
        std::fprintf(stderr,"FAIL x87 state changed\n"); std::exit(1);
    }
    std::printf("state MXCSR_MASK=%08x caller_mxcsr=%08x x87_unchanged=yes\n",mask,original);
}
static std::vector<std::uint32_t> boundaries(unsigned op) {
    std::vector<std::uint32_t> out;
    if(op == 0) {
        const std::uint32_t centers[] = {0u,1u,0x007fffffu,0x00800000u,0x3f000000u,
            0x3f800000u,0x3fc00000u,0x40000000u,0x4affffffu,0x4b000000u,
            0x4b800000u,0x4effffffu,0x4f000000u,0x7f7fffffu,0x7f800000u,
            0x7f800001u,0x7fbfffffu,0x7fc00000u,0x7fffffffu};
        for(auto c:centers) for(int delta=-4;delta<=4;++delta) {
            const std::uint32_t u=c+static_cast<std::uint32_t>(delta);
            out.push_back(u); out.push_back(u^0x80000000u);
        }
        for(unsigned e=0;e<256;++e) for(auto f : {0u,1u,2u,0x3fffffu,0x400000u,
                                                0x400001u,0x7ffffeu,0x7fffffu}) {
            out.push_back((e<<23)|f); out.push_back(0x80000000u|(e<<23)|f);
        }
    } else {
        for(unsigned k=0;k<32;++k) for(int d=-260;d<=260;++d) {
            const std::uint32_t u=(1u<<k)+static_cast<std::uint32_t>(d);
            out.push_back(u); out.push_back(0u-u);
        }
    }
    return out;
}
static void quick() {
    state_check();
    auto before=cases;
    for(unsigned op=0;op<2;++op) {
        const auto b=boundaries(op);
        // All 1024 control/sticky combinations on a boundary subset; all modes
        // on the complete boundary/rounding corpus. This is not all input bits.
        for(unsigned i=0;i<16;++i) for(auto u:b) check(op,u,mode(i));
        for(unsigned i=0;i<16;++i) for(unsigned s=0;s<64;++s)
            for(std::size_t j=0;j<b.size();j+=127) check(op,b[j],mode(i,s));
    }
    phase("boundaries_and_all_sticky_masks",before);
    before=cases;
    std::uint32_t rng=0x9e3779b9u;
    for(unsigned j=0;j<100000;++j) {
        rng ^= rng << 13; rng ^= rng >> 17; rng ^= rng << 5;
        for(unsigned i=0;i<16;++i) {
            check(0,rng,mode(i,j&63u)); check(1,rng,mode(i,(j>>6)&63u));
        }
    }
    phase("deterministic_random_all_modes",before);
}
static void exhaustive() {
    auto before=cases;
    for(std::uint32_t f=0;f<0x800000u;++f) for(auto s:{0u,0x80000000u}) {
        // Full mantissas: subnormal/zero, largest valid positive exponent,
        // signed32 edge, and every infinity / signaling / quiet NaN encoding.
        for(auto e:{0u,157u,158u,255u}) check(0,s|(e<<23)|f,mode(0));
        check(0,s|f,mode(4)); // All subnormal bits with DAZ, both signs.
    }
    phase("exhaustive_tt_significands",before);
    before=cases;
    const unsigned highwords[] = {0u,0x7fu,0x80u,0xffu,0x100u,0x1ffu,0x200u,
        0x3ffu,0x400u,0x7ffu,0x800u,0xfffu,0x1000u,0x1fffu,0x2000u,
        0x3fffu,0x4000u,0x7fffu,0x8000u,0x8001u,0xbfffu,0xc000u,0xffffu};
    for(auto h:highwords) for(unsigned low=0;low<65536;++low)
        for(unsigned rc=0;rc<4;++rc) check(1,(h<<16)|low,mode(rc));
    phase("exhaustive_si_low16_selected_highwords_all_rc",before);
}
int main(int argc,char **argv) {
    if(argc==2 && std::strcmp(argv[1],"--stream")==0) {
        unsigned op,bits,csr;
        while(std::scanf("%u %x %x",&op,&bits,&csr)==3) {
            const Result r=op==0?scalar_conversion::cvttss2si(bits,csr):scalar_conversion::cvtsi2ss(bits,csr);
            check(op,bits,csr);
            std::printf("%u %08x %08x %08x %08x %08x\n",op,bits,csr,r.bits,r.raised,r.after);
        }
        return 0;
    }
    quick();
    if(argc==2 && std::strcmp(argv[1],"--full")==0) exhaustive();
    std::printf("PASS cases=%llu digest=%016llx\n",static_cast<unsigned long long>(cases),
                static_cast<unsigned long long>(digest));
}
