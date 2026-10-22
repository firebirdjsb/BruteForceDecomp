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

// Brute Force: 0x00012650 | Ghidra label FUN_00012650
// Ghidra function-body SHA-256: DEBEE5D52D081D080F59330972F8698A24CA49929257AACD17FD740B5F29BD03
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x00012650.
// TODO: Requires <cstdint> and <bit> (C++20).
// TODO: Confirm the original ABI. This draft uses an explicit __fastcall
// parameter to represent the incoming ECX value; no parameter was recovered.
// TODO: The pointed-to structure and its members remain unidentified.
uint32_t __fastcall FUN_00012650(const void* in_ECX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    const uint8_t* base = ((const uint8_t*)(in_ECX));

    // Evidence reads a signed 32-bit value at byte offset +4.
    if (*((const int32_t*)(base + 4)) != 0) {
        // Preserve 32-bit subtraction bits without C++ signed-overflow UB,
        // then interpret the result as signed for division by 0x18.
        if (BF_BITS_TO_I32(((uint32_t)(*((const int32_t*)(base + 8)))) -
                ((uint32_t)(*((const int32_t*)(base + 4))))) /
                0x18 != 0) {
            return 0;
        }
    }

    return 0xffffffffU;
}
