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

// Brute Force: 0x0001bb00 | Ghidra label FUN_0001bb00
// Ghidra function-body SHA-256: 374D662DF1450C529157BC92250DA06168753BD465EC2616BA2C87329EF85708
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// TODO: Requires <cstdint> and <bit>, C++20, and a 32-bit target.
// TODO: Ghidra shows no formal parameters and an incoming EAX value.
// The explicit parameter below represents that register input only;
// the original calling convention and return ABI remain unresolved.
uint32_t FUN_0001bb00(uint32_t in_EAX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(int32_t) == 4, "Requires 32-bit integers.");
#endif

    // TODO: The input object's type, validity, and layout are unknown.
    // Evidence reads signed 32-bit fields at byte offsets +4 and +8.
    if (*((const int32_t*)(in_EAX + 4u)) == 0) {
        return 1u;
    }

    // Preserve 32-bit subtraction bits without C++ signed-overflow UB.
    const int32_t iVar1 = BF_BITS_TO_I32(((uint32_t)(*((const int32_t*)(in_EAX + 8u)))) -
        ((uint32_t)(*((const int32_t*)(in_EAX + 4u)))));

    // Reconstruct CONCAT31: truncate the signed shift result to 24 bits,
    // place it in return bits 8..31, and place the comparison in bits 0..7.
    // Signed right shifts use C++20 arithmetic-shift semantics.
    return ((((uint32_t)(iVar1 >> 10)) & 0x00FFFFFFu) << 8) |
           ((uint32_t)((iVar1 >> 2) == 0));
}
