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

// Brute Force: 0x000122a0 | Ghidra label FUN_000122a0
// Ghidra function-body SHA-256: 530F9549D550357BBE1C2EE1A4C9F1DD7302F7B672EE9D2E6271C0F49B115603
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x000122a0; function index: 13.
// TODO: Requires <cstdint> and the correct declaration/ABI of FUN_00055650.
// TODO: in_ECX models the incoming ECX register explicitly; it is not an
// evidenced second formal parameter. The original calling convention is unknown.
void FUN_000122a0(int32_t param_1, int32_t in_ECX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    // TODO: Signed address additions follow the pseudocode. Confirm overflow
    // behavior against instructions; signed overflow is undefined in C++.
    if (in_ECX + 4 != param_1 + 4)
    {
        // TODO: Confirm implicit register arguments, calling convention,
        // and side effects from the executable.
        FUN_00055650();
    }

    // Both byte accesses use the evidenced offset 0x3c.
    uint8_t* destination = ((uint8_t*)(in_ECX + 0x3c));
    uint8_t* source = ((uint8_t*)(param_1 + 0x3c));

    *destination = ((uint8_t)(*destination ^ ((*source ^ *destination) & 1)));

    return;
}
