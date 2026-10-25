/* Host SSE scalar-lane regression only; NOT Xbox ABI or native game validation.
 * XBE 0x00214923 MOVSS, 0x00214929 MAXSS, 0x0021492F MOVSS.
 * MAXSS chooses its second operand on qNaN and equal signed-zero inputs.
 */
#include <xmmintrin.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static float from_bits(uint32_t word) {
    float value;
    memcpy(&value, &word, sizeof value);
    return value;
}

static uint32_t bits(float value) {
    uint32_t word;
    memcpy(&word, &value, sizeof word);
    return word;
}

static float original_maxss_low_lane(float first, float second) {
    return _mm_cvtss_f32(_mm_max_ss(_mm_set_ss(first), _mm_set_ss(second)));
}

int main(void) {
    const struct {
        uint32_t first, second, expected;
    } cases[] = {
        {UINT32_C(0x3f800000), UINT32_C(0x40000000), UINT32_C(0x40000000)},
        {UINT32_C(0x40000000), UINT32_C(0x3f800000), UINT32_C(0x40000000)},
        {UINT32_C(0x80000000), UINT32_C(0x00000000), UINT32_C(0x00000000)},
        {UINT32_C(0x00000000), UINT32_C(0x80000000), UINT32_C(0x80000000)},
        {UINT32_C(0x7fc00001), UINT32_C(0x3f800000), UINT32_C(0x3f800000)},
        {UINT32_C(0x3f800000), UINT32_C(0x7fc00001), UINT32_C(0x7fc00001)},
    };
    for (unsigned i = 0; i < sizeof cases / sizeof cases[0]; ++i) {
        const uint32_t actual = bits(original_maxss_low_lane(
            from_bits(cases[i].first), from_bits(cases[i].second)));
        if (actual != cases[i].expected) {
            fprintf(stderr, "MAXSS case %u: got %08x expected %08x\n",
                    i, (unsigned)actual, (unsigned)cases[i].expected);
            return 1;
        }
    }
    puts("PASS: MAXSS operand order, signed zero, and quiet NaN");
    return 0;
}
