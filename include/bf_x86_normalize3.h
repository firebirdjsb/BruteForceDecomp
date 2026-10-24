/* Observed SSE block shared by 0x000330b0 and 0x00033b00.
 * Three memory floats occupy XMM lanes 0,2,3 through MOVSS/MOVHPS.
 * Memory-source MOVSS clears upper 96 bits, so lane 1 is zero after MOVHPS.
 * SHUFPS also reads inherited XMM1 low lanes; packed exceptions are unmodeled.
 * This is an internal storage operation, not either original entry ABI.
 */
#ifndef BF_X86_NORMALIZE3_H
#define BF_X86_NORMALIZE3_H
#include <xmmintrin.h>

static inline int bf_x86_normalize3(float *p)
{
    __m128 v = _mm_load_ss(p);
    v = _mm_loadh_pi(v, (const __m64 *)(p + 1));
    __m128 squared = _mm_mul_ps(v, v);
    __m128 sum = _mm_shuffle_ps(_mm_undefined_ps(), squared, 0x80);
    sum = _mm_add_ps(sum, squared);
    sum = _mm_shuffle_ps(sum, sum, 0x03);
    sum = _mm_add_ss(sum, squared);
    /* Exact binary32 word at guest 0x003a4018: 0x37a7c5ac.
     * COMISS/JAE accepts equality and rejects unordered inputs. */
    if (!_mm_comige_ss(sum, _mm_set_ss(0x1.4f8b58p-16f))) return 0;
    sum = _mm_rsqrt_ss(sum);
    sum = _mm_shuffle_ps(sum, sum, 0);
    v = _mm_mul_ps(v, sum);
    _mm_store_ss(p, v);
    _mm_storeh_pi((__m64 *)(p + 1), v);
    return 1;
}
#endif
