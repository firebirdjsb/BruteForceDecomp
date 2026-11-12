#ifndef BF_002337A0_ORDERED_MATRIX_OPERATION_H
#define BF_002337A0_ORDERED_MATRIX_OPERATION_H
/* Bounded native operation for original 0x002337a0, body SHA-256:
 * 9845F4400F31673C8FFC0EC92B60D421983004F32EEE8BC70A60F9061E3EB58B.
 * GNU/Clang x86-64 Linux SysV; native SSE and IEEE binary32, no fast math.
 * left/right each cover 16 initialized live float objects, float-aligned.
 * out covers 64 initialized writable bytes and is at least 8-byte aligned.
 * Whole-float overlap is allowed subject to those lifetimes/alignments.
 * Preserve the full ordered memory/arithmetic event graph: left[12] is read
 * BETWEEN row2's low/high stores; left[13] is already captured beforehand.
 * Every MULPS destination is the left coefficient, including NaN priority.
 * All six MXCSR exceptions masked; valid live RC/DAZ/FTZ/sticky bits retained.
 * No guest32 mapping, guest ABI/stack slots/register preservation, fault or
 * trap behavior, MMIO/concurrent observers, or original-CPU claim. Inputs
 * cannot alias compiler-private stack or original guest argument slots.
 */
#if !defined(__x86_64__) || !defined(__linux__) || !defined(__SSE__) || !(defined(__GNUC__) || defined(__clang__))
#error "002337a0 requires GNU/Clang x86-64 Linux SysV native SSE"
#endif
#ifdef __FAST_MATH__
#error "002337a0 must not be built with fast math"
#endif
#include <cfloat>
static_assert(FLT_RADIX == 2 && FLT_MANT_DIG == 24 && FLT_MAX_EXP == 128 &&
              FLT_MIN_EXP == -125 && sizeof(float) == 4,
              "002337a0 requires IEEE binary32 float objects");
__attribute__((always_inline)) static inline void
bf_002337a0_ordered_matrix_operation(void *out, const float *left, const float *right)
{
    __asm__ volatile(
        "movss 0(%[left]), %%xmm0\n\t"
        "movups 0(%[right]), %%xmm1\n\t"
        "shufps $0, %%xmm0, %%xmm0\n\t"
        "movss 4(%[left]), %%xmm2\n\t"
        "mulps %%xmm1, %%xmm0\n\t"
        "shufps $0, %%xmm2, %%xmm2\n\t"
        "movups 16(%[right]), %%xmm3\n\t"
        "movss 8(%[left]), %%xmm7\n\t"
        "mulps %%xmm3, %%xmm2\n\t"
        "shufps $0, %%xmm7, %%xmm7\n\t"
        "addps %%xmm2, %%xmm0\n\t"
        "movups 32(%[right]), %%xmm4\n\t"
        "movss 12(%[left]), %%xmm2\n\t"
        "mulps %%xmm4, %%xmm7\n\t"
        "shufps $0, %%xmm2, %%xmm2\n\t"
        "addps %%xmm7, %%xmm0\n\t"
        "movups 48(%[right]), %%xmm5\n\t"
        "movss 16(%[left]), %%xmm6\n\t"
        "mulps %%xmm5, %%xmm2\n\t"
        "movss 20(%[left]), %%xmm7\n\t"
        "shufps $0, %%xmm6, %%xmm6\n\t"
        "addps %%xmm2, %%xmm0\n\t"
        "shufps $0, %%xmm7, %%xmm7\n\t"
        "movlps %%xmm0, 0(%[out])\n\t"
        "movhps %%xmm0, 8(%[out])\n\t"
        "mulps %%xmm3, %%xmm7\n\t"
        "movss 24(%[left]), %%xmm0\n\t"
        "mulps %%xmm1, %%xmm6\n\t"
        "shufps $0, %%xmm0, %%xmm0\n\t"
        "addps %%xmm7, %%xmm6\n\t"
        "mulps %%xmm4, %%xmm0\n\t"
        "movss 36(%[left]), %%xmm2\n\t"
        "addps %%xmm0, %%xmm6\n\t"
        "movss 28(%[left]), %%xmm0\n\t"
        "movss 32(%[left]), %%xmm7\n\t"
        "shufps $0, %%xmm0, %%xmm0\n\t"
        "shufps $0, %%xmm7, %%xmm7\n\t"
        "mulps %%xmm5, %%xmm0\n\t"
        "mulps %%xmm1, %%xmm7\n\t"
        "addps %%xmm0, %%xmm6\n\t"
        "shufps $0, %%xmm2, %%xmm2\n\t"
        "movlps %%xmm6, 16(%[out])\n\t"
        "movhps %%xmm6, 24(%[out])\n\t"
        "mulps %%xmm3, %%xmm2\n\t"
        "movss 40(%[left]), %%xmm6\n\t"
        "addps %%xmm2, %%xmm7\n\t"
        "shufps $0, %%xmm6, %%xmm6\n\t"
        "movss 44(%[left]), %%xmm2\n\t"
        "mulps %%xmm4, %%xmm6\n\t"
        "shufps $0, %%xmm2, %%xmm2\n\t"
        "addps %%xmm6, %%xmm7\n\t"
        "mulps %%xmm5, %%xmm2\n\t"
        "movss 52(%[left]), %%xmm0\n\t"
        "addps %%xmm2, %%xmm7\n\t"
        "shufps $0, %%xmm0, %%xmm0\n\t"
        "movlps %%xmm7, 32(%[out])\n\t"
        "movss 48(%[left]), %%xmm2\n\t"
        "movhps %%xmm7, 40(%[out])\n\t"
        "mulps %%xmm3, %%xmm0\n\t"
        "shufps $0, %%xmm2, %%xmm2\n\t"
        "movss 56(%[left]), %%xmm6\n\t"
        "mulps %%xmm1, %%xmm2\n\t"
        "shufps $0, %%xmm6, %%xmm6\n\t"
        "addps %%xmm0, %%xmm2\n\t"
        "mulps %%xmm4, %%xmm6\n\t"
        "movss 60(%[left]), %%xmm7\n\t"
        "shufps $0, %%xmm7, %%xmm7\n\t"
        "addps %%xmm6, %%xmm2\n\t"
        "mulps %%xmm5, %%xmm7\n\t"
        "addps %%xmm7, %%xmm2\n\t"
        "movups %%xmm2, 48(%[out])\n\t"
        : : [out] "r"(out), [left] "r"(left), [right] "r"(right)
        : "xmm0", "xmm1", "xmm2", "xmm3", "xmm4", "xmm5", "xmm6", "xmm7", "memory");
}
#endif
