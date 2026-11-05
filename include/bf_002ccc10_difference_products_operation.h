#ifndef BF_002CCC10_DIFFERENCE_PRODUCTS_OPERATION_H
#define BF_002CCC10_DIFFERENCE_PRODUCTS_OPERATION_H
/* Bounded native memory operation for original 0x002ccc10, body SHA-256:
 * 75A9A41869FF7B7C222C6F80344F3B6D42D3271ECBF3C1924643EBC9EBF61C05.
 * GNU/Clang x86-64 Linux SysV, native SSE and IEEE binary32 float required.
 * Each pointer covers three live, alignof(float)-aligned float objects.
 * All whole-float overlaps among the four spans are allowed. MXCSR exceptions
 * must be masked. Preserves original read order, every packed lane, separate
 * binary32 rounding, NaN operand order and exact 12-byte stores. Live MXCSR
 * controls and sticky flags are not reset. No C++ FP arithmetic or x87.
 * Excludes guest32 ABI/stack aliasing/return transport/registers/EFLAGS,
 * invalid memory, faults, MMIO, concurrent access and original-CPU equivalence.
 */
#if !defined(__x86_64__) || !defined(__linux__) || !defined(__SSE__) || !(defined(__GNUC__) || defined(__clang__))
#error "002ccc10 requires GNU/Clang x86-64 Linux SysV native SSE"
#endif
#ifdef __FAST_MATH__
#error "002ccc10 must not be built with fast math"
#endif
#include <cfloat>
static_assert(FLT_RADIX == 2 && FLT_MANT_DIG == 24 && FLT_MAX_EXP == 128 &&
              FLT_MIN_EXP == -125 && sizeof(float) == 4,
              "002ccc10 requires IEEE binary32 float objects");
__attribute__((always_inline)) static inline void
bf_002ccc10_difference_products_operation(float *destination, const float *base,
                                         const float *third, const float *fourth)
{
    __asm__ volatile(
        "movss 0(%[base]), %%xmm3\n\t"
        "movhps 4(%[base]), %%xmm3\n\t"
        "movss 0(%[fourth]), %%xmm1\n\t"
        "movhps 4(%[fourth]), %%xmm1\n\t"
        "movss 0(%[third]), %%xmm2\n\t"
        "subps %%xmm3, %%xmm1\n\t"
        "movhps 4(%[third]), %%xmm2\n\t"
        "subps %%xmm3, %%xmm2\n\t"
        "movaps %%xmm1, %%xmm0\n\t"
        "shufps $50, %%xmm0, %%xmm0\n\t"
        "shufps $131, %%xmm2, %%xmm2\n\t"
        "mulps %%xmm2, %%xmm0\n\t"
        "shufps $131, %%xmm1, %%xmm1\n\t"
        "shufps $131, %%xmm2, %%xmm2\n\t"
        "mulps %%xmm2, %%xmm1\n\t"
        "subps %%xmm1, %%xmm0\n\t"
        "movss %%xmm0, 0(%[destination])\n\t"
        "movhps %%xmm0, 4(%[destination])"
        : : [destination] "r"(destination), [base] "r"(base),
            [third] "r"(third), [fourth] "r"(fourth)
        : "xmm0", "xmm1", "xmm2", "xmm3", "memory");
}
#endif
