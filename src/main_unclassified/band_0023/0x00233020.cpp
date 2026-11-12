/* Brute Force original Xbox - bounded scalar SSE reconstruction.
 * Input x86 body SHA-256: 2382652B390516BB996BB81A12D1F0BCAF195D5E559D7A59ADD4AE5B0DD53096
 * Entry: 0x00233020, Ghidra index: 7778, label: FUN_00233020
 * STATUS: X86_OPERANDS_OBSERVED, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_00233_scalar_sse.h"
#include "bf_00233_sse_operations.h"

void bf_00233020_words(uint32_t angle, void *second_stack_output, void *third_stack_output)
{
    using namespace bf_00233_sse;
    const __m128 magnitude = scaled_magnitude(angle);
    const __m128 shifted = add(magnitude, load(one));
    const int32_t shifted_index = truncate(shifted);
    const int32_t base_index = truncate(magnitude);
    const __m128 shifted_integer = convert(shifted_index);
    const __m128 base_integer = convert(base_index);
    const __m128 shifted_fraction = fold(shifted, shifted_index, shifted_integer);
    const __m128 base_fraction = fold(magnitude, base_index, base_integer);

    // Original scalar arithmetic interleaves the two polynomial evaluations.
    const __m128 shifted_square = multiply(shifted_fraction, shifted_fraction);
    const __m128 base_square = multiply(base_fraction, base_fraction);
    __m128 shifted_poly = multiply(shifted_square, load(coefficient_3));
    __m128 base_poly = multiply(base_square, load(coefficient_3));
    shifted_poly = add(shifted_poly, load(coefficient_2));
    base_poly = add(base_poly, load(coefficient_2));
    shifted_poly = multiply(shifted_poly, shifted_square);
    base_poly = multiply(base_poly, base_square);
    shifted_poly = add(shifted_poly, load(coefficient_1));
    base_poly = add(base_poly, load(coefficient_1));
    shifted_poly = multiply(shifted_poly, shifted_square);
    const __m128 signed_shifted = _mm_or_ps(shifted_fraction, load(quadrant_sign(shifted_index)));
    base_poly = multiply(base_poly, base_square);
    const uint32_t base_sign = (angle & sign_mask) ^ quadrant_sign(base_index);
    const __m128 signed_base = _mm_or_ps(base_fraction, load(base_sign));
    shifted_poly = add(shifted_poly, load(coefficient_0));
    base_poly = add(base_poly, load(coefficient_0));
    const uint32_t shifted_word = capture_lane(multiply(shifted_poly, signed_shifted));
    const uint32_t base_word = capture_lane(multiply(base_poly, signed_base));

    // 0x00233142 stores the third stack output before 0x00233148 stores the
    // second. Each store copies exactly one binary32 word, including aliases.
    __builtin_memcpy(third_stack_output, &shifted_word, sizeof(shifted_word));
    __builtin_memcpy(second_stack_output, &base_word, sizeof(base_word));
}

void FUN_00233020(float angle, float *second_stack_output, float *third_stack_output)
{
    bf_00233020_words(bf_00233_sse::capture(angle), second_stack_output, third_stack_output);
}
