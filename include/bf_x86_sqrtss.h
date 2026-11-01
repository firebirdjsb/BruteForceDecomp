/* Source-only model for original Xbox SQRTSS low-lane operations.
 * This does NOT establish original calling conventions, MXCSR state,
 * register provenance, or cross-platform 1:1 behavior. */
#ifndef BF_X86_SQRTSS_H
#define BF_X86_SQRTSS_H
#include <cmath>
#if defined(__SSE__) || defined(_M_X64) || (defined(_M_IX86_FP) && _M_IX86_FP >= 1)
#include <xmmintrin.h>
#endif
static inline float SQRT(float operand) noexcept
{
#if defined(__SSE__) || defined(_M_X64) || (defined(_M_IX86_FP) && _M_IX86_FP >= 1)
    return _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(operand)));
#else
    /* ABI_UNVERIFIED: portable scalar fallback, not Xbox MXCSR equivalence. */
    return std::sqrt(operand);
#endif
}
#endif
