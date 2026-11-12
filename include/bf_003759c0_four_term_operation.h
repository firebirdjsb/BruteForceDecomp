#ifndef BF_003759C0_FOUR_TERM_OPERATION_H
#define BF_003759C0_FOUR_TERM_OPERATION_H
/* Bounded native memory operation for original 0x003759c0, body SHA-256:
 * 8D9A9D11F07D18B9B216AB210508D8F0E36AF65D001346642B3F9B5FF5D914FA.
 * GNU/Clang x86-64 Linux SysV, native SSE and IEEE binary32 required.
 * destination covers >=12 writable initialized bytes, aligned to 8 bytes;
 * vector covers three live float objects, aligned to alignof(float);
 * rows covers sixteen live float objects, aligned to 16 bytes for MULPS.
 * All whole-float overlap satisfying these alignment requirements is allowed.
 * scalar is initialized binary32; its compiler-private spill cannot alias
 * supplied buffers. MXCSR exceptions must be masked. Preserve all four lanes,
 * source read order, separate rounding, NaN operand priority and 12-byte store.
 * Live MXCSR controls/sticky flags remain live. No C++ floating arithmetic/x87.
 * Excludes guest32 ABI/stack aliasing/registers/EFLAGS, invalid memory, faults,
 * MMIO, concurrency, unmasked exceptions and original-CPU equivalence.
 */
#if !defined(__x86_64__) || !defined(__linux__) || !defined(__SSE__) || !(defined(__GNUC__) || defined(__clang__))
#error "003759c0 requires GNU/Clang x86-64 Linux SysV native SSE"
#endif
#ifdef __FAST_MATH__
#error "003759c0 must not be built with fast math"
#endif
#include <cfloat>
static_assert(FLT_RADIX == 2 && FLT_MANT_DIG == 24 && FLT_MAX_EXP == 128 &&
              FLT_MIN_EXP == -125 && sizeof(float) == 4,
              "003759c0 requires IEEE binary32 float objects");
__attribute__((always_inline)) static inline void
bf_003759c0_four_term_operation(void *destination, const float *vector,
                              float scalar, const float *rows)
{
    __asm__ volatile(
        "movss 0(%[vector]), %%xmm2\n\t"
        "shufps $0, %%xmm2, %%xmm2\n\t"
        "mulps 0(%[rows]), %%xmm2\n\t"
        "movss 4(%[vector]), %%xmm1\n\t"
        "shufps $0, %%xmm1, %%xmm1\n\t"
        "mulps 16(%[rows]), %%xmm1\n\t"
        "addps %%xmm1, %%xmm2\n\t"
        "movss 8(%[vector]), %%xmm1\n\t"
        "shufps $0, %%xmm1, %%xmm1\n\t"
        "mulps 32(%[rows]), %%xmm1\n\t"
        "addps %%xmm1, %%xmm2\n\t"
        "movss %[scalar], %%xmm1\n\t"
        "shufps $0, %%xmm1, %%xmm1\n\t"
        "mulps 48(%[rows]), %%xmm1\n\t"
        "addps %%xmm1, %%xmm2\n\t"
        "movlps %%xmm2, 0(%[destination])\n\t"
        "shufps $2, %%xmm2, %%xmm2\n\t"
        "movss %%xmm2, 8(%[destination])"
        : : [destination] "r"(destination), [vector] "r"(vector),
            [scalar] "m"(scalar), [rows] "r"(rows)
        : "xmm1", "xmm2", "memory");
}
#endif
