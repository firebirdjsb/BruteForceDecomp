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

// Brute Force: 0x00012290 | Ghidra label FUN_00012290
// Ghidra function-body SHA-256: 6BBE0A35786A275D4F6ABEB7284509C4B59D1E7D9A706C64862D357B3CF7DA70
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x00012290.
// TODO: Requires <cstdint> and the external symbol PTR_FUN_003a4f64;
// its declaration and type are unknown.
// TODO: The pseudocode declares no parameters and reads incoming EAX.
// This explicit parameter represents that register value only; the actual
// calling convention and register binding remain unresolved.
void FUN_00012290(uint32_t* in_EAX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    // Store the address of the external symbol at byte offset 0x00.
    in_EAX[0] = ((uint32_t)(&PTR_FUN_003a4f64));

    // Four-byte stores at byte offsets 0x0C and 0x20, respectively.
    in_EAX[3] = 0;
    in_EAX[8] = 0;
    return;
}
