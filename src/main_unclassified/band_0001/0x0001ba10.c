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

// Brute Force: 0x0001ba10 | Ghidra label FUN_0001ba10
// Ghidra function-body SHA-256: B71FC57047A148FDED2D83A9EB8EC06548C0344CFEF0F0C7224292D19814C4CD
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Unverified source reconstruction for entry 0x0001ba10.
// TODO: Requires <cstdint> and <bit> (C++20).
// TODO: Recover the actual calling convention. Ghidra reports void parameters;
// the parameter below models the unexplained incoming ESI register value,
// not a verified explicit argument.
// TODO: Supply the evidenced declaration/ABI for FUN_0001d4c0.
// TODO: Validate memory layout, alignment, and aliasing assumptions.
uint32_t FUN_0001ba10(uint32_t unaff_ESI)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    uint8_t* const base = ((uint8_t*)(unaff_ESI));

    if (*(base + 0x11) != 0)
    {
        // Read 32-bit signed values at byte offsets +8 and +4.
        // Express subtraction as 32-bit bit-vector arithmetic to avoid
        // introducing C++ signed-overflow undefined behavior.
        const uint32_t difference =
            ((uint32_t)(*((int32_t*)(base + 8)))) -
            ((uint32_t)(*((int32_t*)(base + 4))));

        // Preserve masking followed by interpretation as a signed 32-bit value.
        if (((int32_t)(4)) <
            BF_BITS_TO_I32(difference & ((uint32_t)(0xfffffffcU))))
        {
            FUN_0001d4c0(
                *((int32_t*)(base + 4)),
                *((int32_t*)(base + 8)),
                *(base + 0x10),
                0,
                0);
        }

        *(base + 0x11) = 0;
    }

    // Reload after the possible call and byte write, as in the evidence.
    // The returned undefined4 is represented as an uninterpreted 32-bit value.
    return *((uint32_t*)(base + 4));
}
