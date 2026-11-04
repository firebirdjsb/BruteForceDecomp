/* Authored synthetic native instruction oracle; no extracted bytes execute. */
#include "bf_00314c76_norm_operation.h"
#include <array>
#include <cstdio>
#include <cstdint>
#include <cstring>
#include <vector>
#include <emmintrin.h>
#include <new>
#include <sys/mman.h>
#include <unistd.h>

struct alignas(16) State { unsigned char bytes[512]; };
static void save(State &state) { __asm__ volatile("fxsave %0" : "=m"(state) : : "memory"); }
// This POSIX harness is tested on x86-64 SysV. FXRSTOR overwrites every
// x87/XMM register: compiler-visible clobbers are mandatory, even for integer
// test code whose buffers the optimizer may keep in vector registers.
#if defined(__x86_64__)
#define BF_TEST_XMM_CLOBBERS "xmm0", "xmm1", "xmm2", "xmm3", "xmm4", "xmm5", "xmm6", "xmm7", "xmm8", "xmm9", "xmm10", "xmm11", "xmm12", "xmm13", "xmm14", "xmm15"
#else
#define BF_TEST_XMM_CLOBBERS "xmm0", "xmm1", "xmm2", "xmm3", "xmm4", "xmm5", "xmm6", "xmm7"
#endif
#define BF_TEST_X87_CLOBBERS "st", "st(1)", "st(2)", "st(3)", "st(4)", "st(5)", "st(6)", "st(7)"
static void restore(const State &state) {
    __asm__ volatile("fxrstor %0" : : "m"(state)
                     : BF_TEST_XMM_CLOBBERS, BF_TEST_X87_CLOBBERS, "memory");
}
static void reset_x87() {
    __asm__ volatile("fninit" : : : BF_TEST_X87_CLOBBERS, "memory");
}
static unsigned word16(const State &state, unsigned offset) {
    std::uint16_t word; std::memcpy(&word,state.bytes+offset,2); return word;
}
static void set16(State &state, unsigned offset, std::uint16_t word) {
    std::memcpy(state.bytes+offset,&word,2);
}
// The C++ canonical wrapper is separately compiled, preserving its interface.
long double FUN_00314c76(float *);
extern "C" __attribute__((noinline)) long double bf_norm_candidate(const float *input) {
    return FUN_00314c76(const_cast<float *>(input));
}
using NormFunction=long double (*)(const float *);
extern "C" long double bf_norm_oracle(const float *);
extern "C" void bf_norm_capture(NormFunction,const float *,State *,const State *);
// Authored SysV assembly boundary: normal callee-saved RBX and stack alignment.
// FXRSTOR and all FP activity are inside this out-of-line call, whose ABI exposes
// x87/XMM register values as caller-clobbered. The caller's full FP state is
// saved/restored around measurement, preserving callee-saved CW/MXCSR controls
// and leaving no unexpected x87 result on this void-return boundary.
// FXSAVE of the measured result occurs before any C++ spill.
// The oracle is independently transcribed native instructions, not game bytes.
__asm__(
    ".text\n"
    ".globl bf_norm_capture\n.type bf_norm_capture,@function\n"
    "bf_norm_capture:\n"
    "pushq %rbx\n"
    "subq $512,%rsp\n"
    "fxsave (%rsp)\n"
    "movq %rdx,%rbx\n"
    "movq %rdi,%rax\n"
    "movq %rsi,%rdi\n"
    "fxrstor (%rcx)\n"
    "call *%rax\n"
    "fxsave (%rbx)\n"
    "fxrstor (%rsp)\n"
    "addq $512,%rsp\n"
    "popq %rbx\n"
    "ret\n.size bf_norm_capture,.-bf_norm_capture\n"
    ".globl bf_norm_oracle\n.type bf_norm_oracle,@function\n"
    "bf_norm_oracle:\n"
    "flds 8(%rdi)\n"
    "flds 4(%rdi)\n"
    "flds (%rdi)\n"
    "fld %st(0)\n"
    "fmul %st(1),%st(0)\n"
    "fld %st(2)\n"
    "fmul %st(3),%st(0)\n"
    "faddp %st(0),%st(1)\n"
    "fld %st(3)\n"
    "fmul %st(4),%st(0)\n"
    "faddp %st(0),%st(1)\n"
    "fsqrt\n"
    "fstp %st(3)\n"
    "fstp %st(0)\n"
    "fstp %st(0)\n"
    "ret\n.size bf_norm_oracle,.-bf_norm_oracle\n"
);
static bool equal_state(const State &a, const State &b) {
    // x87 control/status/tag and all active data survive identically. Original
    // instruction/data pointers differ between the two authored implementations.
    if (std::memcmp(a.bytes,b.bytes,5)!=0 || std::memcmp(a.bytes+24,b.bytes+24,4)!=0) return false;
    const unsigned top=(word16(a,2)>>11)&7;
    for(unsigned slot=0;slot<8;++slot)
        if(a.bytes[4] & (1u<<((slot+top)&7)))
            if(std::memcmp(a.bytes+32+slot*16,b.bytes+32+slot*16,10)!=0) return false;
    return true;
}
static std::uint64_t random_state=UINT64_C(0x00314c76cafe3851);
static std::uint32_t random_word() {
    random_state^=random_state<<13;random_state^=random_state>>7;random_state^=random_state<<17;
    return static_cast<std::uint32_t>(random_state>>11);
}


static bool stack_contract(const State &base,const State &after) {
    const unsigned oldtop=(word16(base,2)>>11)&7,newtop=(oldtop-1)&7;
    if(((word16(after,2)>>11)&7)!=newtop)return false;
    if(after.bytes[4]!=(base.bytes[4]|(1u<<newtop)))return false;
    if(word16(after,2)&0x0200)return false; // final FSTP clears C1.
    if(word16(after,0)!=word16(base,0)||std::memcmp(after.bytes+24,base.bytes+24,4)!=0)return false;
    for(unsigned i=0;i<7;++i)
        if(base.bytes[4]&(1u<<((oldtop+i)&7)))
            if(std::memcmp(base.bytes+32+i*16,after.bytes+32+(i+1)*16,10)!=0)return false;
    return true;
}
static bool anchors_and_span() {
    struct Anchor {std::uint32_t words[3];std::uint64_t significand;std::uint16_t exponent;};
    const Anchor anchors[]={
        {{0,0,0},0,0},{{0x80000000,0x80000000,0x80000000},0,0},
        {{0x3f800000,0,0},UINT64_C(0x8000000000000000),0x3fff},
        {{0x40400000,0x40800000,0},UINT64_C(0xa000000000000000),0x4001},
        {{0xc0400000,0xc0800000,0x41400000},UINT64_C(0xd000000000000000),0x4002},
        {{1,0,0},UINT64_C(0x8000000000000000),0x3f6a},
        {{0,0x80000001,0},UINT64_C(0x8000000000000000),0x3f6a},
        {{0x7f800000,0,0},UINT64_C(0x8000000000000000),0x7fff},
        {{0,0,0xff800000},UINT64_C(0x8000000000000000),0x7fff},
        {{0x7f000000,0,0},UINT64_C(0x8000000000000000),0x407e}};
    const long page=sysconf(_SC_PAGESIZE);if(page<=0)return false;
    auto *mapping=static_cast<unsigned char *>(mmap(nullptr,static_cast<std::size_t>(page)*2,
        PROT_READ|PROT_WRITE,MAP_PRIVATE|MAP_ANONYMOUS,-1,0));
    if(mapping==MAP_FAILED)return false;
    if(mprotect(mapping+page,static_cast<std::size_t>(page),PROT_NONE)!=0)return false;
    auto *input=::new(static_cast<void *>(mapping+page-12)) float[3];
    for(unsigned pc:{0u,2u,3u})for(unsigned rc=0;rc<4;++rc) {
        reset_x87();State base;save(base);set16(base,0,static_cast<std::uint16_t>(0x007f|(pc<<8)|(rc<<10)));
        for(const auto &anchor:anchors) {
            std::memcpy(input,anchor.words,12);
            State got;bf_norm_capture(bf_norm_candidate,input,&got,&base);
            std::uint64_t significand;std::uint16_t exponent;
            std::memcpy(&significand,got.bytes+32,8);std::memcpy(&exponent,got.bytes+40,2);
            if(significand!=anchor.significand||exponent!=anchor.exponent||!stack_contract(base,got))return false;
            if(std::memcmp(input,anchor.words,12)!=0)return false;
        }
    }
    // Independent finite order anchor, PC24 / round-to-nearest. The reversed
    // draft order yields exactly 1; the original order yields 1 + 2^-23.
    reset_x87();State base;save(base);set16(base,0,0x007f);
    const std::uint32_t order_input[]={0x3f800000,0x39800001,0x39800001};
    std::memcpy(input,order_input,12);State got;
    bf_norm_capture(bf_norm_candidate,input,&got,&base);
    const std::uint64_t order_significand=UINT64_C(0x8000010000000000);
    const std::uint16_t order_exponent=0x3fff;
    if(std::memcmp(got.bytes+32,&order_significand,8)||std::memcmp(got.bytes+40,&order_exponent,2))return false;
    return munmap(mapping,static_cast<std::size_t>(page)*2)==0;
}
static bool capture_preserves_caller() {
    reset_x87();
    const std::int32_t live=123;
    __asm__ volatile("fildl %0" : : "m"(live) : BF_TEST_X87_CLOBBERS, "memory");
    const std::uint16_t caller_cw=0x0b7f;
    const std::uint32_t caller_mx=0xbfc0;
    __asm__ volatile("fldcw %0\n\tldmxcsr %1" : : "m"(caller_cw), "m"(caller_mx) : "memory");
    State before;save(before);
    reset_x87();State seed;save(seed);set16(seed,0,0x007f);
    const std::uint32_t seed_mx=0x1f80;std::memcpy(seed.bytes+24,&seed_mx,4);
    restore(before);
    float input[3];const std::uint32_t words[]={0x40400000,0x40800000,0};
    std::memcpy(input,words,12);State measured;
    bf_norm_capture(bf_norm_candidate,input,&measured,&seed);
    State after;save(after);
    return equal_state(before,after)&&stack_contract(seed,measured);
}
int main() {
    State saved;save(saved);struct Guard {State &state;~Guard(){restore(state);}} guard{saved};
    if(!anchors_and_span()||!capture_preserves_caller())return 2;
    using Words=std::array<std::uint32_t,3>;
    std::vector<Words> inputs;
    const std::uint32_t special[]={0,0x80000000,1,0x80000001,0x007fffff,0x807fffff,
      0x00800000,0x80800000,0x00800001,0x3f000000,0xbf000000,0x3f800000,0xbf800000,
      0x3f800001,0xbf800001,0x3f7fffff,0xbf7fffff,0x40400000,0x40800000,
      0x7f7fffff,0xff7fffff,0x7f000000,0xff000000,0x7f800000,0xff800000,
      0x7fc00000,0xffc00000,0x7fc12345,0xffc12345,0x7f800001,0xff800001,
      0x7f812345,0xff812345,0x7fffffff,0xffffffff};
    for(auto raw:special) {
        inputs.push_back({raw,0,0});inputs.push_back({0,raw,0});inputs.push_back({0,0,raw});
        inputs.push_back({raw,raw,raw});inputs.push_back({raw,0x3f800001,0x7fc12345});
    }
    for(unsigned i=0;i<256;++i)inputs.push_back({random_word(),random_word(),random_word()});
    inputs.push_back({0x3f800000,0x39800001,0x39800001});
    std::uint64_t cases=0;
    for(unsigned pc:{0u,2u,3u})for(unsigned rc=0;rc<4;++rc)for(unsigned mxmode=0;mxmode<16;++mxmode)
      for(unsigned pattern=0;pattern<8;++pattern)for(unsigned top=0;top<8;++top)
      for(unsigned sticky:{0u,0x3fu,0x0200u,0x4700u,0x473fu,0x477fu}) {
        reset_x87();
        for(unsigned i=0;i<3;++i) {
            const std::int32_t seed=static_cast<std::int32_t>(12345+i*17);
            __asm__ volatile("fildl %0" : : "m"(seed) : BF_TEST_X87_CLOBBERS, "memory");
        }
        State base;save(base);set16(base,0,static_cast<std::uint16_t>(0x007f|(pc<<8)|(rc<<10)));
        set16(base,2,static_cast<std::uint16_t>(sticky|(top<<11)));
        base.bytes[4]=0;
        for(unsigned i=0;i<3;++i)if(pattern&(1u<<i))base.bytes[4]|=static_cast<unsigned char>(1u<<((top+i)&7));
        const std::uint32_t mx=0x1f80|((mxmode&3)<<13)|((mxmode&4)?0x40:0)|((mxmode&8)?0x8000:0)|(sticky&0x3f);
        std::memcpy(base.bytes+24,&mx,4);
        for(const auto &words:inputs) {
            // Actual float objects with raw bits copied in; no host FP expression.
            std::array<float,5> input;
            const std::uint32_t sentinel=0xa1b2c3d4;
            std::memcpy(&input[0],&sentinel,4);std::memcpy(&input[4],&sentinel,4);
            std::memcpy(input.data()+1,words.data(),12);
            State expected,actual;
            bf_norm_capture(bf_norm_oracle,input.data()+1,&expected,&base);
            bf_norm_capture(bf_norm_candidate,input.data()+1,&actual,&base);
            ++cases;
            if(!equal_state(actual,expected)||!stack_contract(base,actual)) {
                std::fprintf(stderr,"Mismatch inputs=%08x,%08x,%08x pc=%u rc=%u mx=%08x tag_pattern=%u top=%u sticky=%04x sw=%04x/%04x\n",
                    words[0],words[1],words[2],pc,rc,mx,pattern,top,sticky,word16(actual,2),word16(expected,2));return 1;
            }
            if(std::memcmp(input.data()+1,words.data(),12)||std::memcmp(&input[0],&sentinel,4)||std::memcmp(&input[4],&sentinel,4))return 3;
        }
      }
    std::printf("%llu binary80-return/x87-state/MXCSR comparisons passed (%zu input triples)\n",
        static_cast<unsigned long long>(cases),inputs.size());
}
