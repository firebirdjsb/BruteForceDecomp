#ifndef BF_002B6640_MIXED_OPERATION_H
#define BF_002B6640_MIXED_OPERATION_H
/* ISOLATED PROPOSAL, not admitted implementation or original-CPU equivalence.
 * Original entry 0x002b6640, 103 bytes/30 instructions, body SHA-256:
 * F6340C78D440C62731EA5178275001795009B2411379533260958D483F53376F.
 * GNU/Clang x86-64 Linux SysV; IEEE binary32; native x87/SSE, no fast math.
 * b/c each designate three initialized live float objects, float-aligned,
 * readable and stable during this call. out designates three live writable
 * float-aligned float objects; prior output contents need not be initialized.
 * Any whole-float
 * overlap is permitted within those object/span conditions. Exactly 12 bytes
 * each; all b/c reads precede both out writes. No alias with private scratch.
 * All raw binary32 patterns are admitted. CW masks all exceptions; PC is
 * 00/10/11; RC arbitrary. MXCSR masks all exceptions, with independent RC,
 * supported DAZ/FTZ, arbitrary initial sticky flags. Entry is consistent and
 * has no pending exception (ES/B clear); valid historical SF with IE allowed.
 * Physical slots TOP-1 and TOP-2 are empty; other six slots may be live.
 * Controls, TOP, original occupancy/live80 values survive; new flags OR into
 * sticky flags. Final C1 is architecture-defined only where specified by
 * FSTP32; NaN equal-significand/sign ties and undefined condition bits are NOT
 * assigned a portable deterministic result. Hardware follows its own rules.
 * Excludes guest memory/stack/cleanup/register ABI, FIP/FDP/FOP, inactive
 * payload/padding, memory faults/MMIO/concurrency, unmasked/pending traps,
 * original Pentium-III equivalence, and byte-identical rebuilding.
 */
#if !defined(__x86_64__) || !defined(__linux__) || !defined(__SSE__) || !(defined(__GNUC__) || defined(__clang__))
#error "002b6640 requires GNU/Clang x86-64 Linux SysV native x87/SSE"
#endif
#ifdef __FAST_MATH__
#error "002b6640 must not be compiled with fast math"
#endif
#include <cfloat>
static_assert(FLT_RADIX==2 && FLT_MANT_DIG==24 && FLT_MAX_EXP==128 &&
              FLT_MIN_EXP==-125 && sizeof(float)==4, "IEEE binary32 required");
__attribute__((always_inline)) static inline void
bf_002b6640_mixed_operation(float *out, const float *b, const float *c)
{
    float scratch;
    __asm__ volatile(
        "flds 8(%[b])\n\t"
        "fmuls 8(%[c])\n\t"
        "flds 4(%[b])\n\t"
        "fmuls 4(%[c])\n\t"
        "faddp %%st, %%st(1)\n\t"
        "flds 0(%[b])\n\t"
        "fmuls 0(%[c])\n\t"
        "faddp %%st, %%st(1)\n\t"
        "fchs\n\t"
        "fstps %[scratch]\n\t"
        "movss %[scratch], %%xmm3\n\t"
        "movss 0(%[c]), %%xmm2\n\t"
        "movhps 4(%[c]), %%xmm2\n\t"
        "shufps $0, %%xmm3, %%xmm3\n\t"
        "movss 0(%[b]), %%xmm1\n\t"
        "movhps 4(%[b]), %%xmm1\n\t"
        "mulps %%xmm3, %%xmm2\n\t"
        "addps %%xmm2, %%xmm1\n\t"
        "movss %%xmm1, 0(%[out])\n\t"
        "movhps %%xmm1, 4(%[out])\n\t"
        : [scratch] "=m"(scratch)
        : [out] "r"(out), [b] "r"(b), [c] "r"(c)
        : "st", "st(1)", "xmm1", "xmm2", "xmm3", "memory");
}
#endif
