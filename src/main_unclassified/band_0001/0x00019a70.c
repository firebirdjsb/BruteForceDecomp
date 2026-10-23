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

// Brute Force: 0x00019a70 | Ghidra label FUN_00019a70
// Ghidra function-body SHA-256: AAEB7CF149F79BE9CC2937F8C1D77AABB4F0F436F02441292A3E23045CAFC9D6
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// TODO: Supply float10 with the evidenced x87 extended-precision semantics;
// do not assume the host's long double is equivalent.
// TODO: Confirm the original 32-bit x86 calling/return ABI and the precision
// of the comparison constant shown by Ghidra as 0.51.
float10 FUN_00019a70(float param_1, float param_2, float param_3)
{
    float10 fVar1 = ((float10)(2.0));

    if ((param_1 < 0.51) != (param_1 == 0.51)) {
        fVar1 = ((float10)(4.0));
    }

    return (((float10)(param_3)) * fVar1
            + ((float10)(param_2)))
           / (fVar1 + ((float10)(1.0)));
}
