#ifndef BF_002B3E60_MULTIPLY_ADD_OPERATION_H
#define BF_002B3E60_MULTIPLY_ADD_OPERATION_H
/* Bounded native memory operation for original 0x002b3e60, body SHA-256:
 * 0C046A8D9C3832CBC34F31651612C806541EAB290BA348CD2B3EE787BA9EFDAF.
 * GNU/Clang x86-64 Linux SysV, native SSE and IEEE binary32 float required.
 * destination, base and vector each cover three live, alignof(float)-aligned
 * float objects. All whole-float overlap is allowed. Scalar is an initialized
 * by-value binary32 argument. All MXCSR exceptions masked. Compiler-private
 * scalar storage must not alias supplied buffers. Preserves scalar/vector/base
 * read order, all four packed lanes, nonfused multiply then add, NaN operand
 * order and exact 12-byte stores. MXCSR controls and sticky flags remain live.
 * No x87 instruction or C++ floating arithmetic. No guest32 stack/register ABI,
 * guest return transport, EFLAGS/FIP/FDP equivalence, unmasked exceptions,
 * invalid memory, faults, MMIO, concurrent access or original-CPU claim.
 */
#if !defined(__x86_64__) || !defined(__linux__) || !defined(__SSE__) || !(defined(__GNUC__) || defined(__clang__))
#error "002b3e60 requires GNU/Clang x86-64 Linux SysV native SSE"
#endif
#ifdef __FAST_MATH__
#error "002b3e60 must not be built with fast math"
#endif
#include <cfloat>
static_assert(FLT_RADIX == 2 && FLT_MANT_DIG == 24 && FLT_MAX_EXP == 128 &&
              FLT_MIN_EXP == -125 && sizeof(float) == 4,
              "002b3e60 requires IEEE binary32 float objects");
__attribute__((always_inline)) static inline void
bf_002b3e60_multiply_add_operation(float *destination, const float *base,
                                  const float *vector, float scalar)
{
    __asm__ volatile(
        "movss %[scalar], %%xmm3\n\t"
        "movss 0(%[vector]), %%xmm2\n\t"
        "movhps 4(%[vector]), %%xmm2\n\t"
        "shufps $0, %%xmm3, %%xmm3\n\t"
        "movss 0(%[base]), %%xmm1\n\t"
        "movhps 4(%[base]), %%xmm1\n\t"
        "mulps %%xmm3, %%xmm2\n\t"
        "addps %%xmm2, %%xmm1\n\t"
        "movss %%xmm1, 0(%[destination])\n\t"
        "movhps %%xmm1, 4(%[destination])"
        : : [destination] "r"(destination), [base] "r"(base),
            [vector] "r"(vector), [scalar] "m"(scalar)
        : "xmm1", "xmm2", "xmm3", "memory");
}
#endif
