/* Compare the actual reconstructed function with its instruction-based scalar
 * SSE oracle on this host CPU. Xbox RCPSS accuracy, upper XMM state, exception
 * flags/traps and the original x87 return ABI are outside this test. */
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <xmmintrin.h>
#include "../src/main_unclassified/band_0023/0x00232be0.c"
extern void bf_reference_232be0(uint32_t *, const uint32_t *, const uint32_t *);
static const uint32_t constants[68] = {
    [0] = 0xbf800000U, [20] = 0x3fc90fdbU, [36] = 0x80000000U,
    [60] = 0xbdbbb0f6U, [61] = 0xbfb2a61fU, [62] = 0xc2bcc9b1U,
    [63] = 0x414e36d1U, [64] = 0x3fa3cf0fU, [65] = 0x400c9f34U,
    [66] = 0x40da37c2U, [67] = 0x41e1a443U
};
static int check(uint32_t bits, unsigned control)
{
    float input, value;
    uint32_t actual, expected;
    memcpy(&input, &bits, sizeof input);
    _mm_setcsr(control);
    value = (float)FUN_00232be0(input);
    memcpy(&actual, &value, sizeof actual);
    _mm_setcsr(control);
    bf_reference_232be0(&expected, &bits, constants);
    if (actual != expected) {
        fprintf(stderr, "input=%08x control=%04x actual=%08x expected=%08x\n",
                (unsigned)bits, control, (unsigned)actual, (unsigned)expected);
        return 1;
    }
    return 0;
}
int main(void)
{
    const uint32_t edge[] = {
        0U, 0x80000000U, 1U, 0x80000001U, 0x007fffffU, 0x00800000U,
        0x3f000000U, 0xbf000000U, 0x3f7fffffU, 0x3f800000U,
        0x3f800001U, 0xbf7fffffU, 0xbf800000U, 0xbf800001U,
        0x40000000U, 0xc0000000U, 0x7f7fffffU, 0xff7fffffU,
        0x7f800000U, 0xff800000U, 0x7fc12345U, 0xffc12345U
    };
    const unsigned modes[] = {0x1f80U, 0x3f80U, 0x5f80U, 0x7f80U,
                              0x9fc0U, 0xbfc0U, 0xdfc0U, 0xffc0U};
    unsigned saved = _mm_getcsr();
    unsigned cases = 0;
    for (unsigned m=0; m<sizeof modes/sizeof *modes; ++m) {
        for (unsigned i=0; i<sizeof edge/sizeof *edge; ++i) {
            if (check(edge[i],modes[m])) { _mm_setcsr(saved); return 1; }
            ++cases;
        }
        uint32_t seed = 0x92e153abU;
        for (unsigned i=0; i<20000; ++i) {
            seed = seed * 1664525U + 1013904223U;
            /* Keep randomized inputs finite; quiet NaN cases are explicit. */
            uint32_t bits = (seed & 0x7f800000U) == 0x7f800000U
                              ? seed ^ 0x00800000U : seed;
            if (check(bits,modes[m])) { _mm_setcsr(saved); return 1; }
            ++cases;
        }
    }
    _mm_setcsr(saved);
    printf("PASS %u scalar SSE result comparisons on current CPU\n", cases);
    return 0;
}
