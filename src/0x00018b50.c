/* The original 32-bit x86 ABI is not established by this C11 translation. */
#include <stdint.h>
#include "bf_external_symbols.h"
#include <limits.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#if defined(__SSE__) || defined(__x86_64__)
#include <xmmintrin.h>
#include <emmintrin.h>
#endif
#ifndef __fastcall
#define __fastcall /* TODO: Calling convention unresolved */
#endif
#ifndef __thiscall
#define __thiscall /* TODO: Calling convention unresolved */
#endif
/* TODO: Ghidra float10 is x87 extended precision; target ABI unverified. */
typedef long double float10;
static inline int32_t BF_u32_to_i32(uint32_t n){int32_t o;memcpy(&o,&n,4);return o;}
static inline uint32_t BF_i32_to_u32(int32_t n){uint32_t o;memcpy(&o,&n,4);return o;}
static inline float BF_u32_to_float(uint32_t n){float o;memcpy(&o,&n,4);return o;}
static inline uint32_t BF_float_to_u32(float n){uint32_t o;memcpy(&o,&n,4);return o;}
static inline int32_t BF_float_to_i32(float n){uint32_t b=BF_float_to_u32(n);return BF_u32_to_i32(b);}
#define BF_BITS_TO_I32(x) _Generic((x), float:BF_float_to_i32, default:BF_u32_to_i32)((x))
#define BF_BITS_TO_U32(x) _Generic((x), float:BF_float_to_u32, default:BF_i32_to_u32)((x))
#define BF_BITS_TO_F32(x) BF_u32_to_float((uint32_t)(uintptr_t)(x))

// Brute Force: 0x00018b50 | Ghidra label FUN_00018b50
// Ghidra function-body SHA-256: 98CF562D59F01C5811091C482555C95F163D7C791E1369BE20CB96AF800D26E3
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x00018b50; function index: 67.
// Recorded body SHA256:
// 98CF562D59F01C5811091C482555C95F163D7C791E1369BE20CB96AF800D26E3
//
// TODO: Requires <cstdint> and <xmmintrin.h>.
// TODO: Recover the actual 32-bit calling convention. The final four
// parameters below explicitly represent decompiler-observed incoming register
// values; they are not established parameters of the original function.
// TODO: Ghidra reported "Restarted to delay deadcode elimination for space:
// stack"; register provenance and stack analysis remain uncertain.
// TODO: Confirm floating-point evaluation and compiler settings; reassociation,
// contraction, or replacing RSQRTSS with a square root could change behavior.
uint32_t FUN_00018b50(
    uint32_t param_1,
    uint32_t param_2,
    const float* in_ECX,
    const float* unaff_ESI,
    const float* unaff_EDI,
    float in_XMM1_Da)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(float) == 4, "Requires 32-bit float storage.");
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(uint32_t) == 4, "Requires 32-bit arguments.");
#endif

    // Float indices 0, 1, and 2 correspond to byte offsets +0, +4, and +8.
    // TODO: Establish pointer validity and accessible extents from the caller.
    if (1.1920929e-07 <
        in_ECX[2] * in_ECX[2] +
        in_ECX[1] * in_ECX[1] +
        *in_ECX * *in_ECX)
    {
        float fVar2 = unaff_ESI[2] - unaff_EDI[2];
        float fVar1 = *unaff_ESI - *unaff_EDI;
        float fVar3 = in_XMM1_Da + fVar1 * fVar1;
        float fVar6 = fVar2 * fVar2 + 0.0;

        // Four 32-bit lanes, ordered here from highest to lowest:
        // byte offsets +12, +8, +4, +0.
        __m128 auVar5 = _mm_set_ps(fVar3, fVar3, fVar3, fVar6);

        // Preserve the upper 12 bytes and replace the low 4-byte float.
        __m128 auVar4 = _mm_move_ss(
            auVar5, _mm_set_ss(fVar6 + fVar1 * fVar1));

        if (2e-05 <= _mm_cvtss_f32(auVar4))
        {
            // RSQRTSS approximates the reciprocal square root of the low
            // float and preserves the upper three lanes from auVar4.
            auVar5 = _mm_rsqrt_ss(auVar4);

            if (0.0 <
                fVar1 * _mm_cvtss_f32(auVar5) * in_ECX[2] -
                fVar2 * _mm_cvtss_f32(auVar5) * *in_ECX)
            {
                return param_1;
            }
            return param_2;
        }
    }
    return 0;
}
