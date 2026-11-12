#ifndef BF_002B3CC0_ADD_OPERATION_H
#define BF_002B3CC0_ADD_OPERATION_H
/* Bounded native memory operation for original 0x002b3cc0, body SHA-256:
 * A8EC695777DE4EF1C9E6389D84A07A1AF70D214CF5A961E877EEB5DFA8A3374F.
 * GNU/Clang x86-64 Linux SysV, native SSE and IEEE binary32 float required.
 * destination and source each cover three live, alignof(float)-aligned float
 * objects. Any whole-float overlap is allowed. All MXCSR exceptions masked.
 * Preserves load/load/add/store ordering and destination/source NaN order.
 * Existing MXCSR controls govern ADDPS; exception flags accumulate normally.
 * No x87 instruction or C++ floating arithmetic. No guest32 stack/register ABI,
 * guest return transport, EFLAGS/FIP/FDP equivalence, unmasked exceptions,
 * invalid memory, faults, MMIO, concurrent access or original-CPU claim.
 */
#if !defined(__x86_64__) || !defined(__linux__) || !defined(__SSE__) || !(defined(__GNUC__) || defined(__clang__))
#error "002b3cc0 requires GNU/Clang x86-64 Linux SysV native SSE"
#endif
#ifdef __FAST_MATH__
#error "002b3cc0 must not be built with fast math"
#endif
#include <cfloat>
static_assert(FLT_RADIX == 2 && FLT_MANT_DIG == 24 && FLT_MAX_EXP == 128 &&
              FLT_MIN_EXP == -125 && sizeof(float) == 4,
              "002b3cc0 requires IEEE binary32 float objects");
__attribute__((always_inline)) static inline void
bf_002b3cc0_add_operation(float *destination, const float *source)
{
    __asm__ volatile(
        "movss 0(%[destination]), %%xmm1\n\t"
        "movhps 4(%[destination]), %%xmm1\n\t"
        "movss 0(%[source]), %%xmm2\n\t"
        "movhps 4(%[source]), %%xmm2\n\t"
        "addps %%xmm2, %%xmm1\n\t"
        "movss %%xmm1, 0(%[destination])\n\t"
        "movhps %%xmm1, 4(%[destination])"
        : : [destination] "r"(destination), [source] "r"(source)
        : "xmm1", "xmm2", "memory");
}
#endif
