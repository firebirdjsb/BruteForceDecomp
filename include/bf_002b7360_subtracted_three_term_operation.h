#ifndef BF_002B7360_THREE_TERM_OPERATION_H
#define BF_002B7360_THREE_TERM_OPERATION_H
/* Bounded native memory operation for original 0x002b7360, body SHA-256:
 * 8951BF145B71ABAD31FE514396FBA371A104DDBC96CD73C9B6406736AF29284B.
 * GNU/Clang x86-64 Linux SysV, native SSE and IEEE binary32 float required.
 * terms covers fifteen live alignof(float)-aligned float objects; only indices
 * 0..2, 4..6, 8..10 and 12..14 are read. vector and output each cover three live floats.
 * All whole-float native overlaps allowed: every load precedes both stores.
 * All MXCSR exceptions masked; controls and accumulated status remain live.
 * Preserves the original twenty-three ordered SSE operations, all four packed lanes,
 * destination/source NaN ordering, individual rounding and 12-byte output.
 * No x87 or C++ floating arithmetic. This is not a guest32 mapping or ABI;
 * guest registers/stack/cleanup/aliasing, original32 wrapping, faults, MMIO,
 * concurrency, unmasked exceptions and original-CPU equivalence are excluded.
 */
#if !defined(__x86_64__) || !defined(__linux__) || !defined(__SSE__) || !(defined(__GNUC__) || defined(__clang__))
#error "002b7360 requires GNU/Clang x86-64 Linux SysV native SSE"
#endif
#ifdef __FAST_MATH__
#error "002b7360 must not be built with fast math"
#endif
#include <cfloat>
static_assert(FLT_RADIX == 2 && FLT_MANT_DIG == 24 && FLT_MAX_EXP == 128 &&
              FLT_MIN_EXP == -125 && sizeof(float) == 4,
              "002b7360 requires IEEE binary32 float objects");
__attribute__((always_inline)) static inline void
bf_002b7360_subtracted_three_term_operation(const float *terms, const float *vector, float *output)
{
    __asm__ volatile(
        "movss 48(%[terms]), %%xmm1\n\t"
        "movhps 52(%[terms]), %%xmm1\n\t"
        "movss 0(%[vector]), %%xmm3\n\t"
        "movhps 4(%[vector]), %%xmm3\n\t"
        "movss 0(%[terms]), %%xmm0\n\t"
        "movhps 4(%[terms]), %%xmm0\n\t"
        "subps %%xmm1, %%xmm3\n\t"
        "movaps %%xmm3, %%xmm4\n\t"
        "shufps $0, %%xmm4, %%xmm4\n\t"
        "movss 16(%[terms]), %%xmm1\n\t"
        "movhps 20(%[terms]), %%xmm1\n\t"
        "mulps %%xmm4, %%xmm0\n\t"
        "movaps %%xmm3, %%xmm5\n\t"
        "shufps $170, %%xmm5, %%xmm5\n\t"
        "mulps %%xmm5, %%xmm1\n\t"
        "movss 32(%[terms]), %%xmm2\n\t"
        "movhps 36(%[terms]), %%xmm2\n\t"
        "shufps $255, %%xmm3, %%xmm3\n\t"
        "addps %%xmm1, %%xmm0\n\t"
        "mulps %%xmm3, %%xmm2\n\t"
        "addps %%xmm2, %%xmm0\n\t"
        "movss %%xmm0, 0(%[output])\n\t"
        "movhps %%xmm0, 4(%[output])"
        : : [terms] "r"(terms), [vector] "r"(vector), [output] "r"(output)
        : "xmm0", "xmm1", "xmm2", "xmm3", "xmm4", "xmm5", "memory");
}
#endif
