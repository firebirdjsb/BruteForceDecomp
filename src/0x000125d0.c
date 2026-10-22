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

// Brute Force: 0x000125d0 | Ghidra label FUN_000125d0
// Ghidra function-body SHA-256: 0FFC927226D9159F9242157E88A8F77E69B3F8741801DE70B943F09F656F4D2C
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// TODO: Requires <cstdint>. Missing original calling convention: Ghidra shows
// no formal arguments and reads the incoming EAX register. The explicit
// parameter below only represents that register input; it is not a verified ABI.
void FUN_000125d0(int32_t in_EAX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    // TODO: Address expressions retain Ghidra's signed 32-bit representation.
    // Signed-overflow behavior in C++ remains unresolved.
    // Stores use byte offsets and widths exactly as shown in the pseudocode.
    *((uint32_t*)(in_EAX + 0x04)) = 0;
    *((uint32_t*)(in_EAX + 0x08)) = 0;
    *((uint32_t*)(in_EAX + 0x0c)) = 0;
    *((uint32_t*)(in_EAX + 0x14)) = 0;
    *((uint32_t*)(in_EAX + 0x10)) = 0xffffffffu;
    *((uint32_t*)(in_EAX + 0x1c)) = 0;
    *((uint32_t*)(in_EAX + 0x18)) = 0x7f7fffffu;
    *((uint8_t*)(in_EAX + 0x20)) = 0;
    *((uint32_t*)(in_EAX + 0x24)) = 0;
    return;
}
