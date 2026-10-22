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

// Brute Force: 0x00012600 | Ghidra label FUN_00012600
// Ghidra function-body SHA-256: 0636FAD612D8CF7DF63BBD0E255069EB9AFF32CEBEBD41D494599C4681F63B41
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
#include <stdint.h>

// Entry: 0x00012600.
// TODO: Recover the actual calling convention. These parameters represent
// incoming EAX and ECX values, not a verified C++ parameter list.
void FUN_00012600(uint32_t in_EAX, int32_t in_ECX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    // TODO: Recover the object layout and confirm pointer validity.
    // Treat EAX as a 32-bit address; address additions use 32-bit arithmetic.
    // Offset 0x10: signed 32-bit comparison and conditional replacement.
    int32_t* field_10 =
        ((int32_t*)(in_EAX + ((uint32_t)(0x10))));

    if (*field_10 != in_ECX) {
        *field_10 = in_ECX;

        // Offset 0x18: raw 4-byte store; the field's actual type is unknown.
        *((uint32_t*)(in_EAX + ((uint32_t)(0x18)))) = 0x7f7fffffu;

        // Offset 0x24: raw 4-byte zero store; actual field type is unknown.
        *((uint32_t*)(in_EAX + ((uint32_t)(0x24)))) = 0u;
    }

    return;
}
