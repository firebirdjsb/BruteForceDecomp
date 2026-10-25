/* Four original x86 SSE float lanes to packed 32-bit render-state word.
 * Narrow instruction-sequence model, not guest memory or calling ABI support.
 * Requires x86 SSE for CVTSS2SI and MXCSR rounding behavior.
 */
#ifndef BF_X86_PACKED_COLOR_SSE_H
#define BF_X86_PACKED_COLOR_SSE_H
#include <stdint.h>
#include <string.h>
#include <xmmintrin.h>

static inline uint32_t bf_x86_pack_color_sse(const void *src,
                                              const void *min_operand,
                                              const void *max_operand,
                                              const void *mul_operand)
{
    float src_lane[4], min_lane[4], max_lane[4], mul_lane[4];
    memcpy(src_lane, src, sizeof(src_lane));
    memcpy(min_lane, min_operand, sizeof(min_lane));
    memcpy(max_lane, max_operand, sizeof(max_lane));
    memcpy(mul_lane, mul_operand, sizeof(mul_lane));
    __m128 x = _mm_loadu_ps(src_lane);  /* MOVUPS */
    x = _mm_min_ps(x, _mm_loadu_ps(min_lane)); /* MINPS */
    x = _mm_max_ps(x, _mm_loadu_ps(max_lane)); /* MAXPS */
    x = _mm_mul_ps(x, _mm_loadu_ps(mul_lane)); /* MULPS */
    uint32_t a = (uint32_t)_mm_cvtss_si32(x); /* CVTSS2SI, MXCSR rounding */
    x = _mm_shuffle_ps(x, x, 0x39); /* SHUFPS 0x39 */
    uint32_t b = (uint32_t)_mm_cvtss_si32(x);
    x = _mm_shuffle_ps(x, x, 0x39);
    uint32_t c = (uint32_t)_mm_cvtss_si32(x);
    x = _mm_shuffle_ps(x, x, 0x39);
    uint32_t d = (uint32_t)_mm_cvtss_si32(x);
    return (a << 16) | (b << 8) | c | (d << 24);
}
#endif
