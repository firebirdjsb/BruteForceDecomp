#include "bf_00233_scalar_sse.h"

namespace {

void set_mxcsr(uint32_t value)
{
    __asm__ volatile("ldmxcsr %0" : : "m"(value) : "memory");
}

uint32_t get_mxcsr()
{
    uint32_t value;
    __asm__ volatile("stmxcsr %0" : "=m"(value) : : "memory");
    return value;
}

struct anchor {
    uint32_t input, second, third;
};

constexpr anchor anchors[] = {
    {0x00000000, 0x00000000, 0x3f7ff5b9},
    {0x80000000, 0x80000000, 0x3f7ff5b9},
    {0x3f800000, 0x3f576a77, 0x3f0a513f},
    {0xbf800000, 0xbf576a77, 0x3f0a513f},
    {0x3fc90fdb, 0x3f7ff5b9, 0x80000000},
    {0x40490fdb, 0x80000000, 0xbf7ff5b9},
    {0x4096cbe4, 0xbf7ff5b9, 0x00000000},
    {0x40c90fdb, 0x00000000, 0x3f7ff5b9},
    {0x00000001, 0x00000002, 0x3f7ff5b9},
    {0x80000001, 0x80000002, 0x3f7ff5b9},
};

bool equal(const unsigned char *a, const unsigned char *b, unsigned count)
{
    for (unsigned i = 0; i < count; ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int check_anchors()
{
    const uint32_t entry_mxcsr = get_mxcsr();
    for (const auto &value : anchors) {
        set_mxcsr(0x1f80);
        uint32_t second, third;
        bf_00233020_words(value.input, &second, &third);
        if (second != value.second || third != value.third ||
            bf_00233150_word(value.input) != value.second ||
            bf_002331f0_word(value.input) != value.third) {
            return 1;
        }
        uint32_t shared;
        bf_00233020_words(value.input, &shared, &shared);
        if (shared != value.second) {
            return 2;
        }
        unsigned char overlap[8]{}, expected[8]{};
        __builtin_memcpy(expected + 1, &value.third, 4);
        __builtin_memcpy(expected + 3, &value.second, 4);
        bf_00233020_words(value.input, overlap + 3, overlap + 1);
        if (!equal(overlap, expected, sizeof(overlap))) {
            return 3;
        }
    }
    set_mxcsr(0x1f80);
    if (bf_00233290_word(0) != 0 || bf_00233290_word(0x80000000) != 0x80000000) {
        return 10;
    }
    set_mxcsr(entry_mxcsr);
    return 0;
}

} // namespace

#ifdef BF_RETAIL_I386_ORACLE
extern "C" void retail_233020(uint32_t, void *, void *);
extern "C" void observe_retail_233150(uint32_t, unsigned char *, uint16_t *);
extern "C" void observe_cpp_233150(uint32_t, unsigned char *, uint16_t *);
extern "C" void observe_retail_2331f0(uint32_t, unsigned char *, uint16_t *);
extern "C" void observe_cpp_2331f0(uint32_t, unsigned char *, uint16_t *);
extern "C" void observe_retail_233290(uint32_t, unsigned char *, uint16_t *);
extern "C" void observe_cpp_233290(uint32_t, unsigned char *, uint16_t *);

// A freestanding i386 test can still emit a copy for initialized local arrays.
extern "C" void *memcpy(void *dst, const void *src, unsigned count)
{
    auto *out = static_cast<volatile unsigned char *>(dst);
    auto *in = static_cast<const volatile unsigned char *>(src);
    for (unsigned i = 0; i < count; ++i) {
        out[i] = in[i];
    }
    return dst;
}

extern "C" void *memset(void *dst, int value, unsigned count)
{
    auto *out = static_cast<volatile unsigned char *>(dst);
    for (unsigned i = 0; i < count; ++i) {
        out[i] = static_cast<unsigned char>(value);
    }
    return dst;
}

using observe_result = void (*)(uint32_t, unsigned char *, uint16_t *);

static bool compare_extended(uint32_t input, uint32_t mxcsr, observe_result original,
                             observe_result model, uint32_t &original_mxcsr)
{
    unsigned char retail_st0[10], cpp_st0[10];
    uint16_t retail_status, cpp_status;
    __asm__ volatile("fninit" : : : "memory");
    set_mxcsr(mxcsr);
    original(input, retail_st0, &retail_status);
    original_mxcsr = get_mxcsr();
    __asm__ volatile("fninit" : : : "memory");
    set_mxcsr(mxcsr);
    model(input, cpp_st0, &cpp_status);
    // Compare TOP and the architecturally defined FLD exception/status bits.
    constexpr uint16_t status_mask = 0x3abf;
    return equal(retail_st0, cpp_st0, sizeof(retail_st0)) &&
           ((retail_status ^ cpp_status) & status_mask) == 0 && original_mxcsr == get_mxcsr();
}

static int compare(uint32_t input, uint32_t mxcsr)
{
    uint32_t retail_second, retail_third, cpp_second, cpp_third;
    set_mxcsr(mxcsr);
    retail_233020(input, &retail_second, &retail_third);
    const uint32_t pair_status = get_mxcsr();
    set_mxcsr(mxcsr);
    bf_00233020_words(input, &cpp_second, &cpp_third);
    if (retail_second != cpp_second || retail_third != cpp_third || pair_status != get_mxcsr()) {
        return 4;
    }

    uint32_t retail_alias, cpp_alias;
    set_mxcsr(mxcsr);
    retail_233020(input, &retail_alias, &retail_alias);
    set_mxcsr(mxcsr);
    bf_00233020_words(input, &cpp_alias, &cpp_alias);
    if (retail_alias != cpp_alias || retail_alias != retail_second) {
        return 5;
    }

    uint32_t single_status;
    if (!compare_extended(input, mxcsr, observe_retail_2331f0, observe_cpp_2331f0, single_status)) {
        return 6;
    }
    set_mxcsr(mxcsr);
    if (bf_002331f0_word(input) != retail_third || single_status != get_mxcsr()) {
        return 7;
    }
    if (!compare_extended(input, mxcsr, observe_retail_233150, observe_cpp_233150, single_status)) {
        return 8;
    }
    set_mxcsr(mxcsr);
    if (bf_00233150_word(input) != retail_second || single_status != get_mxcsr()) {
        return 9;
    }
    if (!compare_extended(input, mxcsr, observe_retail_233290, observe_cpp_233290, single_status)) {
        return 11;
    }
    return 0;
}

extern "C" int verify_retail()
{
    if (const int result = check_anchors()) {
        return result;
    }
    constexpr uint32_t special[] = {
        0x00000000, 0x80000000, 0x00000001, 0x80000001, 0x007fffff, 0x00800000,
        0x3f800000, 0xbf800000, 0x3fc90fda, 0x3fc90fdb, 0x3fc90fdc, 0x40490fdb,
        0x4096cbe4, 0x40c90fdb, 0x4f490fda, 0x4f490fdb, 0x4f490fdc, 0x7f7fffff,
        0xff7fffff, 0x7f800000, 0xff800000, 0x7fc12345, 0xffc54321, 0x7fa00001, 0xff800001,
    };
    uint32_t random = 0x842cfab1u;
    for (uint32_t mode = 0; mode < 16; ++mode) {
        const uint32_t mxcsr = 0x1f80u | ((mode & 3u) << 13) |
                               ((mode & 4u) << 4) | ((mode & 8u) << 12);
        for (uint32_t input : special) {
            if (const int result = compare(input, mxcsr)) {
                return result;
            }
        }
        for (unsigned i = 0; i < 4096; ++i) {
            random ^= random << 13;
            random ^= random >> 17;
            random ^= random << 5;
            const uint32_t sticky = i & 0x3fu;
            if (const int result = compare(random, mxcsr | sticky)) {
                return result;
            }
        }
    }
    return 0;
}
#else
int main()
{
    return check_anchors();
}
#endif
