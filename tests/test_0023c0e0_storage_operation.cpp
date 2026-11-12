/* Authored synthetic native instruction oracle; no extracted bytes execute. */
#include "bf_0023c0e0_storage_operation.h"
#include <array>
#include <cstdio>
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
__attribute__((noinline)) static std::uint32_t oracle(std::uint32_t word, std::uint32_t selector, void *output) {
    std::uint32_t result;
    __asm__ volatile(
        "movl %[word], %%ecx\n\t"
        "movl %[selector], %%eax\n\t"
        "cmpl $0xeee373be, %%eax\n\t"
        "ja 4f\n\t"
        "je 3f\n\t"
        "cmpl $0x00a38d8e, %%eax\n\t"
        "je 2f\n\t"
        "cmpl $0x1d3e389e, %%eax\n\t"
        "je 1f\n\t"
        "cmpl $0xeda5d734, %%eax\n\t"
        "movb $1, %%al\n\t"
        "jne 9f\n\t"
        "movl %%ecx, (%[out])\n\t"
        "jmp 9f\n\t"
        "1: fildl %[word]\n\t"
        "movb $1, %%al\n\t"
        "fstps 12(%[out])\n\t"
        "fildl %[word]\n\t"
        "fstps 8(%[out])\n\t"
        "fildl %[word]\n\t"
        "fsts 4(%[out])\n\t"
        "fstps (%[out])\n\t"
        "jmp 9f\n\t"
        "2: fildl %[word]\n\t"
        "movb $1, %%al\n\t"
        "fstps (%[out])\n\t"
        "jmp 9f\n\t"
        "3: movb %%cl, (%[out])\n\t"
        "movb $1, %%al\n\t"
        "jmp 9f\n\t"
        "4: cmpl $0xf05d9dab, %%eax\n\t"
        "je 6f\n\t"
        "cmpl $0xf95aad3d, %%eax\n\t"
        "jne 8f\n\t"
        "fildl %[word]\n\t"
        "fstps 8(%[out])\n\t"
        "6: fildl %[word]\n\t"
        "fsts 4(%[out])\n\t"
        "fstps (%[out])\n\t"
        "8: movb $1, %%al\n\t"
        "9:"
        : "=&a"(result)
        : [word] "m"(word), [selector] "r"(selector), [out] "r"(output)
        : "ecx", "st", "cc", "memory");
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
static std::uint64_t random_state=UINT64_C(0x0023c0e0cafe3851);
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

static bool anchors_and_spans() {
    const std::uint32_t selectors[]={0xeee373be,0xeda5d734,0x00a38d8e,0x1d3e389e,0xf95aad3d,0xf05d9dab,0};
    const unsigned extents[]={1,4,4,16,12,8,0};
    const long page=sysconf(_SC_PAGESIZE);
    if(page<=0)return false;
    auto *mapping=static_cast<unsigned char *>(mmap(nullptr,static_cast<std::size_t>(page)*2,
        PROT_READ|PROT_WRITE,MAP_PRIVATE|MAP_ANONYMOUS,-1,0));
    if(mapping==MAP_FAILED)return false;
    if(mprotect(mapping+page,static_cast<std::size_t>(page),PROT_NONE)!=0)return false;
    for(unsigned precision: {0u,2u,3u})for(unsigned rounding=0;rounding<4;++rounding) {
        reset_x87();
        const std::uint16_t control=static_cast<std::uint16_t>(0x007f|(precision<<8)|(rounding<<10));
        __asm__ volatile("fldcw %0" : : "m"(control) : "memory");
        struct Anchor { std::uint32_t input, nearest, down, up, zero; };
        const Anchor anchors[]={
          {0xffffffff,0xbf800000,0xbf800000,0xbf800000,0xbf800000},
          {0x80000000,0xcf000000,0xcf000000,0xcf000000,0xcf000000},
          {0x7fffffff,0x4f000000,0x4effffff,0x4f000000,0x4effffff},
          {0x01000001,0x4b800000,0x4b800000,0x4b800001,0x4b800000},
          {0xfeffffff,0xcb800000,0xcb800001,0xcb800000,0xcb800000}};
        for(const auto &a: anchors) {
            const std::uint32_t expected[]={a.nearest,a.down,a.up,a.zero};
            std::uint32_t actual;
            bf_0023c0e0_storage_operation(a.input,0x00a38d8e,&actual);
            if(actual!=expected[rounding])return false;
        }
        // A valid buffer ends exactly at an inaccessible page. No path may
        // write beyond its documented extent; the default path accepts null.
        for(unsigned i=0;i<7;++i) {
            void *destination=extents[i]?mapping+page-extents[i]:nullptr;
            const auto result=bf_0023c0e0_storage_operation(0x7f812345,selectors[i],destination);
            if(result!=((selectors[i]&0xffffff00u)|1u))return false;
        }
    }
    return munmap(mapping,static_cast<std::size_t>(page)*2)==0;
}

static std::uint32_t snapshot_operation(const void *input, const void *key, void *output) {
    std::uint32_t word,selector;
    std::memcpy(&word,input,4);std::memcpy(&selector,key,4);
    return bf_0023c0e0_storage_operation(word,selector,output);
}
static bool overlap_snapshots() {
    const std::uint32_t selectors[]={0xeee373be,0xeda5d734,0x00a38d8e,0x1d3e389e,0xf95aad3d,0xf05d9dab,0};
    reset_x87();
    State base;save(base);
    for(unsigned offset=0;offset<33;++offset)for(unsigned alignment=0;alignment<4;++alignment)
      for(std::uint32_t selector: selectors) {
        std::array<unsigned char,64> actual{},expected{};
        for(unsigned i=0;i<actual.size();++i)actual[i]=static_cast<unsigned char>(i*7+0x73);
        const std::uint32_t input=0xfeffffff;
        std::memcpy(actual.data()+8+alignment,&input,4);
        std::memcpy(actual.data()+20+alignment,&selector,4);
        expected=actual;
        std::uint32_t captured,key;
        std::memcpy(&captured,expected.data()+8+alignment,4);
        std::memcpy(&key,expected.data()+20+alignment,4);
        restore(base);const auto wanted=oracle(captured,key,expected.data()+offset);
        State wanted_state;save(wanted_state);
        restore(base);const auto got=snapshot_operation(actual.data()+8+alignment,actual.data()+20+alignment,actual.data()+offset);
        State got_state;save(got_state);
        if(got!=wanted||actual!=expected||!equal_state(got_state,wanted_state))return false;
      }
    return true;
}

int main() {
    State saved; save(saved);
    struct Guard { State &state; ~Guard(){restore(state);} } guard{saved};
    if(!restore_clobber_anchor()||!anchors_and_spans()||!overlap_snapshots())return 2;
    std::vector<std::uint32_t> words={0,1,2,0x7fffffff,0x80000000,0xffffffff,
        0x00ffffff,0x01000000,0x01000001,0x01000003,0xfeffffff,0xfefffffd,
        0x3f800000,0x80000001,0x7f800000,0xff800000,0x7fc12345,0x7f812345};
    for(unsigned i=0;i<4096;++i)words.push_back(random_word());
    const std::uint32_t selectors[]={0xeee373be,0xeda5d734,0x00a38d8e,0x1d3e389e,
        0xf95aad3d,0xf05d9dab,0,0xffffffff,0xeee373bd,0xeee373bf,0x00a38d8d,
        0x1d3e389f,0xf95aad3c,0xf05d9dac};
    std::uint64_t cases=0;
    for(unsigned precision: {0u,2u,3u})for(unsigned rounding=0;rounding<4;++rounding)
      for(unsigned depth: {0u,1u,4u,7u})for(unsigned sticky: {0u,0x3fu,0x4700u,0x473fu}) {
        reset_x87();
        const std::uint16_t control=static_cast<std::uint16_t>(0x007f|(precision<<8)|(rounding<<10));
        __asm__ volatile("fldcw %0" : : "m"(control) : "memory");
        for(unsigned i=0;i<depth;++i) {
            const std::int32_t seed=static_cast<std::int32_t>(12345+i*17);
            __asm__ volatile("fildl %0" : : "m"(seed) : BF_TEST_X87_CLOBBERS, "memory");
        }
        State base;save(base);set16(base,2,static_cast<std::uint16_t>(word16(base,2)|sticky));
        for(std::uint32_t word: words) for(std::uint32_t selector: selectors) {
            std::array<unsigned char,48> actual{},expected{};
            for(unsigned i=0;i<actual.size();++i)actual[i]=expected[i]=static_cast<unsigned char>(0xa5+i*3);
            const unsigned offset=static_cast<unsigned>((word^selector)%17);
            restore(base);const auto expected_return=oracle(word,selector,expected.data()+offset);
            State expected_state;save(expected_state);
            restore(base);const auto actual_return=bf_0023c0e0_storage_operation(word,selector,actual.data()+offset);
            State actual_state;save(actual_state);
            ++cases;
            if(actual!=expected || actual_return!=expected_return || !equal_state(actual_state,expected_state)) {
                std::fprintf(stderr,"Mismatch word=%08x selector=%08x cw=%04x depth=%u sticky=%02x sw=%04x/%04x\n",
                    word,selector,control,depth,sticky,word16(actual_state,2),word16(expected_state,2));
                return 1;
            }
        }
      }
    std::printf("%llu raw-memory/return/x87-state/MXCSR comparisons passed\n",static_cast<unsigned long long>(cases));
}
