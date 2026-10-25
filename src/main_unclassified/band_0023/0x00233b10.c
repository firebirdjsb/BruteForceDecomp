/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4911F4E987F45DF85A910E477357C52F90778B138EED1EC08B40AB9D5839C479
 * Entry: 0x00233b10, Ghidra index: 7789, label: FUN_00233b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>

/* SSE lane order and scalar reduction follow the verified original instructions.
 * The four-float pointer extents and caller-provided ABI remain unverified. */
float *FUN_00233b10(float *param_1, float *param_2, float *param_3, float param_4)
{
    __m128 q = _mm_loadu_ps(param_2);
    __m128 p = _mm_loadu_ps(param_3);
    __m128 alpha = _mm_set1_ps(param_4);
    __m128 dot_lanes = _mm_mul_ps(q, p);
    __m128 dot_high = _mm_movehl_ps(dot_lanes, dot_lanes);
    __m128 weighted_p = _mm_mul_ps(p, alpha);
    __m128 dot_pairs = _mm_add_ps(dot_lanes, dot_high);
    __m128 weighted_q = _mm_mul_ps(q, alpha);
    __m128 subtracted_q = _mm_sub_ps(q, weighted_q);
    __m128 dot_lane1 = _mm_shuffle_ps(dot_pairs, dot_pairs, 1);
    float dot = _mm_cvtss_f32(_mm_add_ss(dot_pairs, dot_lane1));
    /* COMISS/JAE leaves unordered values on the sign-flip path. */
    if (!(dot >= 0.0f)) {
        const __m128 sign_bits = _mm_castsi128_ps(_mm_set1_epi32((int)0x80000000u));
        weighted_p = _mm_xor_ps(weighted_p, sign_bits);
    }
    __m128 blended = _mm_add_ps(subtracted_q, weighted_p);
    __m128 squared = _mm_mul_ps(blended, blended);
    __m128 square_high = _mm_movehl_ps(squared, squared);
    __m128 square_pairs = _mm_add_ps(squared, square_high);
    __m128 square_lane1 = _mm_shuffle_ps(square_pairs, square_pairs, 1);
    float length_sq = _mm_cvtss_f32(_mm_add_ss(square_lane1, square_pairs));
    __m128 reciprocal = _mm_rsqrt_ss(_mm_set_ss(length_sq));
    __m128 normalized = _mm_mul_ps(blended, _mm_shuffle_ps(reciprocal, reciprocal, _MM_SHUFFLE(0, 0, 0, 0)));
    _mm_storeu_ps(param_1, normalized);
    return param_1;
}
