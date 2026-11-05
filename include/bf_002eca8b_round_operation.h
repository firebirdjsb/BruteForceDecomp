#ifndef BF_002ECA8B_ROUND_OPERATION_H
#define BF_002ECA8B_ROUND_OPERATION_H
/* Bounded native x87 operation for original 0x002eca8b. Body SHA-256:
 * B2ACFB60D9432E4AD64781AC801918ADA55D9C22650B1504C4EE039ED85DA31F.
 * Requires GNU/Clang x86-64 Linux SysV and native binary80 long double.
 * input points to one live, readable, alignof(double)-aligned binary64 object.
 * All x87 exceptions must be masked; PC must be a valid 00/10/11 encoding.
 * The next push destination ((TOP - 1)
 * modulo 8) must be empty. The result is returned in native ST0; preceding live
 * x87 entries survive. Original FLD64, FRNDINT, FSTP64 and FLD64 order is retained,
 * including the binary64 scratch store/reload. No C++ FP arithmetic or fallback.
 * Always-inline is needed to avoid a Clang -O0 wrapper-call result duplication
 * that could overflow a stack with seven preceding live entries. The canonical
 * wrapper's native codegen is separately checked at both -O0 and -O2.
 * Guest stack/ECX/RET transport, integer EFLAGS, FIP/FDP/FOP, unmasked traps,
 * faults, MMIO/concurrent observers and complete CPU-context parity are excluded.
 */
#if !defined(__x86_64__) || !defined(__linux__) || !(defined(__GNUC__) || defined(__clang__))
#error "002eca8b requires GNU/Clang x86-64 Linux SysV native x87"
#endif
#ifdef __FAST_MATH__
#error "002eca8b must not be built with fast math"
#endif
#include <cfloat>
static_assert(LDBL_MANT_DIG == 64 && LDBL_MAX_EXP == 16384 && LDBL_MIN_EXP == -16381,
              "002eca8b requires native binary80 long double");
static_assert(FLT_RADIX == 2 && DBL_MANT_DIG == 53 && DBL_MAX_EXP == 1024 &&
              DBL_MIN_EXP == -1021 && sizeof(double) == 8,
              "002eca8b requires IEEE binary64 input objects");
__attribute__((always_inline)) static inline long double
bf_002eca8b_round_operation(const double *input)
{
    long double result;
    double rounded;
    __asm__ volatile("fldl %2\n\tfrndint\n\tfstpl %1\n\tfldl %1"
                     : "=t"(result), "=m"(rounded) : "m"(*input) : "memory");
    return result;
}
#endif
