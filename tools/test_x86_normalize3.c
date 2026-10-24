/* Compare the shared C operation with the original SSE instruction sequence
 * on the current x64 CPU. This does not compare Xbox hardware RSQRT accuracy,
 * packed exception state, full functions, implicit register ABI or x87 math.
 */
#include "bf_x86_normalize3.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>

extern int bf_reference_normalize3(float *, const uint32_t *, const uint32_t *, const float *);
extern void bf_reference_movss_load(uint32_t *, const float *, const uint32_t *);

typedef struct {
    uint32_t before[2];
    float lanes[3];
    uint32_t after[2];
} guarded_lanes;

static int check_case(const uint32_t bits[3], unsigned ordinal)
{
    const uint32_t seed0[4] = {0x12345678U, 0x7fc12345U, 0xdeadbeefU, 0x3f800000U};
    const uint32_t seed1[4] = {0xff800000U, 0x80000000U, 0x76543210U, 0x7f800001U};
    const float threshold = 0x1.4f8b58p-16f;
    guarded_lanes actual, expected;
    int actual_result, expected_result;
    memset(&actual, 0xa5, sizeof(actual));
    memcpy(actual.lanes, bits, sizeof(actual.lanes));
    memcpy(&expected, &actual, sizeof(actual));
    actual_result = bf_x86_normalize3(actual.lanes);
    expected_result = bf_reference_normalize3(expected.lanes, seed0, seed1, &threshold);
    if (actual_result != expected_result || memcmp(&actual, &expected, sizeof(actual)) != 0) {
        (void)fprintf(stderr, "SSE mismatch case %u: %08x %08x %08x (%d/%d)\n",
                      ordinal, (unsigned)bits[0], (unsigned)bits[1], (unsigned)bits[2],
                      actual_result, expected_result);
        return 1;
    }
    return 0;
}

int main(void)
{
    const uint32_t special[] = {
        0, 0x80000000U, 1, 0x007fffffU, 0x00800000U, 0x3b928b09U,
        0x3b928b0aU, 0x3b928b0bU, 0x3f800000U, 0xbf800000U,
        0x7f7fffffU, 0x7f800000U, 0xff800000U, 0x7fc12345U, 0x7f800001U
    };
    const unsigned saved_mxcsr = _mm_getcsr();
    const size_t count = sizeof(special) / sizeof(special[0]);
    uint32_t random_state = UINT32_C(0x12345678);
    unsigned ordinal = 0;
    int failed = 0;
    {
        const uint32_t seed[4] = {1U, 2U, 3U, 4U};
        const uint32_t expected[4] = {0x3f800000U, 0, 0, 0};
        const float input = 1.0f;
        uint32_t actual[4];
        bf_reference_movss_load(actual, &input, seed);
        if (memcmp(actual, expected, sizeof(actual)) != 0) {
            (void)fputs("Memory-source MOVSS upper-lane semantics mismatch\n", stderr);
            return 1;
        }
    }
    /* Mask FP exceptions and disable FTZ/DAZ for this isolated process test. */
    _mm_setcsr(0x1f80U);
    for (size_t i = 0; i < count && !failed; ++i) {
        for (size_t j = 0; j < count && !failed; ++j) {
            for (size_t k = 0; k < count && !failed; ++k) {
                const uint32_t bits[3] = {special[i], special[j], special[k]};
                failed = check_case(bits, ordinal++);
            }
        }
    }
    for (unsigned i = 0; i < 8192U && !failed; ++i) {
        uint32_t bits[3];
        for (unsigned j = 0; j < 3U; ++j) {
            random_state ^= random_state << 13;
            random_state ^= random_state >> 17;
            random_state ^= random_state << 5;
            bits[j] = random_state;
        }
        failed = check_case(bits, ordinal++);
    }
    _mm_setcsr(saved_mxcsr);
    if (failed) return 1;
    (void)printf("PASS %u host SSE instruction-reference cases; full Xbox behavior unverified\n", ordinal);
    return 0;
}
