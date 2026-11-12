#ifndef BF_00314C76_NORM_OPERATION_H
#define BF_00314C76_NORM_OPERATION_H
/* Bounded native x87 operation for original 0x00314c76. Body SHA-256:
 * 5F4549C0BEC7A3DC6CC1E1BCD1796F1271D397160F7620A1898D617AA5B1EB2B.
 * Requires GNU/Clang x86-64 Linux SysV and native binary80 long double.
 * input points to three live, readable, alignof(float)-aligned binary32 objects.
 * All x87 exceptions must be masked. The five next push destinations
 * ((TOP - 1)..(TOP - 5)) modulo 8 must be empty; an arbitrary five holes do not
 * suffice. The function returns one binary80 value in native ST0, preserving
 * preceding live x87 entries. No C++ FP expression, sqrt call or fallback.
 * Guest address/EAX/RET4 transport, integer EFLAGS, FIP/FDP/FOP, unmasked traps,
 * faults, MMIO/concurrent observers and complete CPU-context parity are excluded.
 */
#if !defined(__x86_64__) || !defined(__linux__) || !(defined(__GNUC__) || defined(__clang__))
#error "00314c76 requires GNU/Clang x86-64 Linux SysV native x87"
#endif
#ifdef __FAST_MATH__
#error "00314c76 must not be built with fast math"
#endif
#include <cfloat>
static_assert(LDBL_MANT_DIG == 64 && LDBL_MAX_EXP == 16384 && LDBL_MIN_EXP == -16381,
              "00314c76 requires native binary80 long double");
static_assert(FLT_RADIX == 2 && FLT_MANT_DIG == 24 && FLT_MAX_EXP == 128 && sizeof(float) == 4,
              "00314c76 requires IEEE binary32 input objects");
static inline long double bf_00314c76_norm_operation(const float *input)
{
    long double result;
    __asm__ volatile(
        "flds 8(%1)\n\tflds 4(%1)\n\tflds (%1)\n\t"
        "fld %%st(0)\n\tfmul %%st(1), %%st(0)\n\t"
        "fld %%st(2)\n\tfmul %%st(3), %%st(0)\n\tfaddp %%st(0), %%st(1)\n\t"
        "fld %%st(3)\n\tfmul %%st(4), %%st(0)\n\tfaddp %%st(0), %%st(1)\n\t"
        "fsqrt\n\tfstp %%st(3)\n\tfstp %%st(0)\n\tfstp %%st(0)"
        : "=t"(result) : "r"(input)
        : "st(1)", "st(2)", "st(3)", "st(4)", "memory");
    return result;
}
#endif
