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

// Brute Force: 0x00019ab0 | Ghidra label FUN_00019ab0
// Ghidra function-body SHA-256: 82670D09C08E8A31D1B87CB5361DCAA664750E229DF10470FBD031D6FD45FB51
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x00019ab0; function index: 72.
// TODO: Define float10 with the evidenced x87 extended-precision semantics;
//       do not assume the compiler's long double provides those semantics.
// TODO: Reconstruct the calling convention and bind in_ECX to the incoming
//       ECX value as a pointer to one writable byte. It is intentionally
//       unresolved here; the evidence does not show an explicit parameter.
// TODO: Require the original 32-bit x86 pointer/ABI model and 32-bit float.
// TODO: Include <cmath> for fabs(float); verify Ghidra ABS semantics.
float10 /* TODO: The in_ECX parameter(s) explicitly MODEL incoming register/FS or post-call values.
   They are NOT established original stack parameters or ABI declarations. */
FUN_00019ab0(float param_1, float param_2, float param_3, uint32_t * in_ECX)
{
    float10 fVar1;

    if (fabs(param_2) < param_3) {
        *in_ECX = 0;
        return -((float10)(param_2));
    }

    *in_ECX = 1;
    fVar1 = ((float10)(param_3));

    if (0.0 <= param_1) {
        fVar1 = -fVar1;
    }

    return fVar1;
}
