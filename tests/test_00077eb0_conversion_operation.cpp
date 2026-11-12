/* Authored synthetic native instruction oracle; no extracted bytes execute. */
#include "bf_00077eb0_conversion_operation.h"
#include <array>
#include <cstdio>
#include <cstring>
#include <vector>
#include <emmintrin.h>
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
__attribute__((noinline)) static std::uint32_t oracle(std::uint32_t kind, std::uint32_t raw, void *out) {
    const std::uint32_t threshold=0x358637bd;
    std::uint32_t result;
    // Independent monolithic instruction/branch transcription, not the helper.
    __asm__ volatile(
        "movl %[kind], %%eax\n\t"
        "decl %%eax\n\t"
        "jz 1f\n\t"
        "decl %%eax\n\t"
        "jz 2f\n\t"
        "decl %%eax\n\t"
        "jnz 9f\n\t"
        "flds %[raw]\n\t"
        "fabs\n\t"
        "fcomps %[threshold]\n\t"
        "fnstsw %%ax\n\t"
        "testb $5, %%ah\n\t"
        "jp 3f\n\t"
        "movl $1, %%eax\n\t"
        "testb %%al, %%al\n\t"
        "setz %%al\n\t"
        "movb %%al, (%[out])\n\t"
        "jmp 9f\n\t"
        "3: xorl %%eax, %%eax\n\t"
        "testb %%al, %%al\n\t"
        "setz %%al\n\t"
        "movb %%al, (%[out])\n\t"
        "jmp 9f\n\t"
        "2: cvttss2sil %[raw], %%eax\n\t"
        "movl %%eax, (%[out])\n\t"
        "jmp 9f\n\t"
        "1: movl %[raw], %%eax\n\t"
        "movl %%eax, (%[out])\n\t"
        "9:"
        : "=&a"(result)
        : [kind] "r"(kind), [raw] "m"(raw), [threshold] "m"(threshold), [out] "r"(out)
        : "st", "cc", "memory");
    return result;
}
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
static std::uint64_t random_state=UINT64_C(0x00077eb0cafe3851);
static std::uint32_t random_word() {
    random_state^=random_state<<13;random_state^=random_state>>7;random_state^=random_state<<17;
    return static_cast<std::uint32_t>(random_state>>11);
}


static bool restore_clobber_anchor() {
    State base;
    save(base);
#if defined(__x86_64__)
    std::memset(base.bytes+160,0,16*16);
#else
    std::memset(base.bytes+160,0,8*16);
#endif
    __m128i live=_mm_set1_epi32(0x12345678);
    // Hide the vector's value from constant propagation. A missing FXRSTOR
    // register clobber now loses it, as opposed to merely risking UB in a test.
    __asm__ volatile("" : "+x"(live));
    restore(base);
    __asm__ volatile("" : "+x"(live));
    return _mm_cvtsi128_si32(live)==0x12345678;
}

// Independent integer bit arithmetic for output anchors. No host float casts.
static std::uint32_t trunc_bits(std::uint32_t raw) {
    const unsigned exponent=(raw>>23)&255;
    const bool negative=(raw>>31)!=0;
    if(exponent<127)return 0;
    if(exponent>158)return 0x80000000;
    const unsigned shift=exponent-127;
    const std::uint64_t significand=(raw&0x007fffff)|0x00800000;
    const std::uint64_t magnitude=shift>=23 ? significand<<(shift-23) : significand>>(23-shift);
    if(magnitude>(negative?UINT64_C(0x80000000):UINT64_C(0x7fffffff)))return 0x80000000;
    const auto word=static_cast<std::uint32_t>(magnitude);
    return negative?0u-word:word;
}
static std::uint32_t expected_return(std::uint32_t raw, std::uint32_t kind) {
    if(kind==1)return raw;
    if(kind==2)return trunc_bits(raw);
    if(kind==3)return (raw&0x7fffffff)<0x358637bd?0:1;
    return kind-3;
}
static bool anchors_and_spans() {
    const std::uint32_t kinds[]={0,1,2,3,4,0x80000000,0xffffffff};
    const unsigned extents[]={0,4,4,1,0,0,0};
    const std::uint32_t words[]={0,0x80000000,0x3f800000,0xbf800000,0x3fc00000,0xbfc00000,
        0x7f800000,0xff800000,0x7fc12345,0x7f812345,0xffc12345,0xff812345,
        0x4f000000,0xcf000000,0x4effffff,0xceffffff,0xcf000001,0x4f000001,
        1,0x80000001,0x007fffff,0x807fffff,0x358637bc,0x358637bd,0x358637be,
        0xb58637bc,0xb58637bd,0xb58637be};
    const long page=sysconf(_SC_PAGESIZE);
    if(page<=0)return false;
    auto *mapping=static_cast<unsigned char *>(mmap(nullptr,static_cast<std::size_t>(page)*2,
        PROT_READ|PROT_WRITE,MAP_PRIVATE|MAP_ANONYMOUS,-1,0));
    if(mapping==MAP_FAILED)return false;
    if(mprotect(mapping+page,static_cast<std::size_t>(page),PROT_NONE)!=0)return false;
    reset_x87();const std::uint32_t mx=0x1f80;
    __asm__ volatile("ldmxcsr %0" : : "m"(mx) : "memory");
    for(std::uint32_t raw:words)for(unsigned i=0;i<7;++i) {
        void *destination=extents[i]?mapping+page-extents[i]:nullptr;
        if(extents[i])std::memset(destination,0xa5,extents[i]);
        const auto result=bf_00077eb0_conversion_operation(kinds[i],raw,destination);
        const auto wanted=expected_return(raw,kinds[i]);
        if(result!=wanted)return false;
        if(extents[i]) {
            std::uint32_t stored=0;std::memcpy(&stored,destination,extents[i]);
            if(stored!=wanted)return false;
        }
    }
    return munmap(mapping,static_cast<std::size_t>(page)*2)==0;
}
static std::uint32_t snapshot_operation(const void *input,const void *key,void *output) {
    std::uint32_t raw,kind;
    std::memcpy(&raw,input,4);std::memcpy(&kind,key,4);
    return bf_00077eb0_conversion_operation(kind,raw,output);
}
static bool overlap_snapshots() {
    reset_x87();State base;save(base);
    for(unsigned offset=0;offset<33;++offset)for(unsigned alignment=0;alignment<4;++alignment)
      for(std::uint32_t kind:{0u,1u,2u,3u,4u})for(std::uint32_t raw:{0x7f812345u,0xb58637bcu,0xcf000001u}) {
        std::array<unsigned char,64> actual,expected;
        for(unsigned i=0;i<actual.size();++i)actual[i]=static_cast<unsigned char>(i*7+0x73);
        std::memcpy(actual.data()+8+alignment,&raw,4);
        std::memcpy(actual.data()+20+alignment,&kind,4);expected=actual;
        std::uint32_t captured,key;std::memcpy(&captured,expected.data()+8+alignment,4);
        std::memcpy(&key,expected.data()+20+alignment,4);
        restore(base);const auto wanted=oracle(key,captured,expected.data()+offset);
        State wanted_state;save(wanted_state);
        restore(base);const auto got=snapshot_operation(actual.data()+8+alignment,actual.data()+20+alignment,actual.data()+offset);
        State got_state;save(got_state);
        if(got!=wanted||actual!=expected||!equal_state(got_state,wanted_state))return false;
      }
    return true;
}
static bool exception_anchors_and_full_stack() {
    reset_x87();State clean;save(clean);
    const std::uint32_t mx=0x1f80;std::memcpy(clean.bytes+24,&mx,4);
    struct Anchor {std::uint32_t word, result, flags;};
    const Anchor integer_cases[]={
        {0xcf000000,0x80000000,0}, {0x4f000000,0x80000000,1},
        {0x7fc12345,0x80000000,1}, {0x7f812345,0x80000000,1},
        {0x7f800000,0x80000000,1}, {0xff800000,0x80000000,1},
        {0x3fc00000,1,0x20}, {0xbfc00000,0xffffffff,0x20},
        {0x3f800000,1,0}, {0x80000000,0,0}};
    for(const auto &a:integer_cases) {
        std::uint32_t out;
        restore(clean);const auto got=bf_00077eb0_conversion_operation(2,a.word,&out);
        State after;save(after);
        std::uint32_t state_mx;std::memcpy(&state_mx,after.bytes+24,4);
        if(got!=a.result||out!=a.result||state_mx!=(mx|a.flags))return false;
    }
    const Anchor compare_cases[]={
        {0x358637bc,0,0x0100},{0x358637bd,1,0x4000},{0x358637be,1,0},
        {0xb58637bc,0,0x0100},{0xb58637bd,1,0x4000},{0xb58637be,1,0},
        {0x7fc12345,1,0x4501},{0x7f812345,1,0x4501},
        {1,0,0x0102},{0x80000001,0,0x0102},{0x80000000,0,0x0100}};
    for(const auto &a:compare_cases) {
        unsigned char out;
        restore(clean);const auto got=bf_00077eb0_conversion_operation(3,a.word,&out);
        State after;save(after);
        if(got!=a.result||out!=a.result||word16(after,2)!=a.flags)return false;
    }
    reset_x87();
    for(std::int32_t seed=1;seed<=8;++seed)
        __asm__ volatile("fildl %0" : : "m"(seed) : BF_TEST_X87_CLOBBERS, "memory");
    State full;save(full);
    for(std::uint32_t kind:{0u,1u,2u,4u,0xffffffffu})for(std::uint32_t raw:{0x7f812345u,0xcf000000u,0x3fc00000u}) {
        std::array<unsigned char,4> expected,actual;
        expected.fill(0xa5);actual=expected;
        restore(full);const auto wanted=oracle(kind,raw,expected.data());
        State expected_state;save(expected_state);
        restore(full);const auto got=bf_00077eb0_conversion_operation(kind,raw,actual.data());
        State actual_state;save(actual_state);
        if(wanted!=got||actual!=expected||!equal_state(expected_state,actual_state))return false;
    }
    return true;
}
int main() {
    State saved;save(saved);
    struct Guard {State &state;~Guard(){restore(state);}} guard{saved};
    if(!restore_clobber_anchor()||!anchors_and_spans()||!overlap_snapshots()||!exception_anchors_and_full_stack())return 2;
    std::vector<std::uint32_t> words={0,1,2,0x7fffffff,0x80000000,0xffffffff,
      0x007fffff,0x00800000,0x00800001,0x807fffff,0x80800000,0x80800001,
      0x3f000000,0xbf000000,0x3f7fffff,0xbf7fffff,0x3f800000,0xbf800000,
      0x3fc00000,0xbfc00000,0x4effffff,0xceffffff,0x4f000000,0xcf000000,
      0x4f000001,0xcf000001,0x7f7fffff,0xff7fffff,0x7f800000,0xff800000,
      0x7fc12345,0xffc12345,0x7f812345,0xff812345,0x7fffffff,0xffffffff,
      0x358637bb,0x358637bc,0x358637bd,0x358637be,0x358637bf,
      0xb58637bb,0xb58637bc,0xb58637bd,0xb58637be,0xb58637bf};
    for(unsigned i=0;i<512;++i)words.push_back(random_word());
    const std::uint32_t kinds[]={0,1,2,3,4,5,0x80000000,0xffffffff};
    std::uint64_t cases=0;
    for(unsigned precision:{0u,2u,3u})for(unsigned rounding=0;rounding<4;++rounding)
      for(unsigned mxmode=0;mxmode<16;++mxmode)for(unsigned depth:{0u,1u,4u,7u})
      for(unsigned sticky:{0u,0x3fu,0x0200u,0x4700u,0x473fu,0x477fu}) {
        reset_x87();
        const std::uint16_t control=static_cast<std::uint16_t>(0x007f|(precision<<8)|(rounding<<10));
        __asm__ volatile("fldcw %0" : : "m"(control) : "memory");
        for(unsigned i=0;i<depth;++i) {
            const std::int32_t seed=static_cast<std::int32_t>(12345+i*17);
            __asm__ volatile("fildl %0" : : "m"(seed) : BF_TEST_X87_CLOBBERS, "memory");
        }
        State base;save(base);set16(base,2,static_cast<std::uint16_t>(word16(base,2)|sticky));
        const std::uint32_t mx=0x1f80|((mxmode&3)<<13)|((mxmode&4)?0x40:0)|((mxmode&8)?0x8000:0)|(sticky&0x3f);
        std::memcpy(base.bytes+24,&mx,4);
        for(std::uint32_t raw:words)for(std::uint32_t kind:kinds) {
            std::array<unsigned char,48> actual,expected;
            for(unsigned i=0;i<actual.size();++i)actual[i]=expected[i]=static_cast<unsigned char>(0xa5+i*3);
            const unsigned offset=static_cast<unsigned>((raw^kind)%17);
            restore(base);const auto wanted=oracle(kind,raw,expected.data()+offset);
            State expected_state;save(expected_state);
            restore(base);const auto got=bf_00077eb0_conversion_operation(kind,raw,actual.data()+offset);
            State actual_state;save(actual_state);
            ++cases;
            if(actual!=expected||got!=wanted||!equal_state(actual_state,expected_state)) {
                std::fprintf(stderr,"Mismatch raw=%08x kind=%08x cw=%04x mx=%08x depth=%u sticky=%04x sw=%04x/%04x\n",
                    raw,kind,control,mx,depth,sticky,word16(actual_state,2),word16(expected_state,2));
                return 1;
            }
            if(got!=expected_return(raw,kind))return 3;
        }
      }
    std::printf("%llu raw-memory/EAX-word/x87-state/MXCSR comparisons passed\n",static_cast<unsigned long long>(cases));
}
