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

// Brute Force: 0x00012580 | Ghidra label FUN_00012580
// Ghidra function-body SHA-256: D6AE4EF79DDFFB82A65842393A312D0E5F9F6D8539293EE1A8DDBDE9E3819976
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// TODO: Requires <cstdint> and declarations for the referenced symbol/functions.
// TODO: The original ABI supplies in_ECX through ECX; this explicit parameter
// is only a reconstruction aid, not a verified callable signature.
void FUN_00012580(uint32_t* in_ECX, uint8_t param_1)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    // Store the address of the symbol, whose declaration/type remains unknown.
    in_ECX[0] = ((uint32_t)(&PTR_FUN_003a4f68));

    // Index 5 is a 32-bit value at byte offset 0x14 from incoming ECX.
    if (in_ECX[5] != 0) {
        // TODO: Any implicit register arguments and calling convention are unknown.
        FUN_0008f6e0();
    }

    if ((param_1 & 1) != 0) {
        // TODO: Ghidra warns that this subroutine does not return; unverified.
        // Any implicit register arguments and calling convention are unknown.
        thunk_FUN_00237ec0();
    }

    return;
}
