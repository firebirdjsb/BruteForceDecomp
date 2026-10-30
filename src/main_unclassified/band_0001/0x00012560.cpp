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
extern void FUN_00058b60(void);

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

// Brute Force: 0x00012560 | Ghidra label FUN_00012560
// Ghidra function-body SHA-256: A4987E9DD603D07022A8978F9FE6B6B5D9C515265BFEEE1C4D44B4C427E7FF00
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x00012560. Unverified source reconstruction.
// TODO: Requires <cstdint> and evidence-correct declarations for
// PTR_FUN_003a4f68 and FUN_00058b60; the latter's ABI is unknown.
void FUN_00012560(void)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    // TODO: Bind this pointer to EAX on function entry using the actual ABI.
    // Ghidra supplies an implicit register input; this declaration alone
    // leaves it uninitialized and is not an executable implementation.
    uint32_t* in_EAX;

    // Store the address of PTR_FUN_003a4f68 at byte offset 0.
    *in_EAX = ((uint32_t)(&PTR_FUN_003a4f68));

    // Store a 32-bit zero at byte offset 0x14.
    in_EAX[5] = 0;

    FUN_00058b60();
    return;
}
