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

// Brute Force: 0x00012250 | Ghidra label FUN_00012250
// Ghidra function-body SHA-256: C163367CD5660605F6EF9E6E595330B0080582F54B72C123E6E18BBDE0C43E30
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
#include <stdint.h>

// TODO: Recover the original ABI. These explicit parameters represent the
// incoming EAX address bits and signed ECX value; they are draft parameters.
// TODO: Supply the declaration and ABI for FUN_0008f6a0. Its apparent lack
// of arguments does not establish whether it consumes register values.
void FUN_00012250(uint32_t in_EAX, int32_t in_ECX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    // Evidence: signed 32-bit reads at byte offsets 0x0C and 0x24.
    // TODO: Recover the containing type and confirm pointer validity/alignment.
    int32_t* const field_0c =
        ((int32_t*)(in_EAX + ((uint32_t)(0x0C))));
    int32_t* const field_24 =
        ((int32_t*)(in_EAX + ((uint32_t)(0x24))));

    if (in_ECX == 0)
    {
        if ((*field_0c != 0) && (*field_24 == 2))
        {
            // Evidence: four-byte store of zero.
            *field_24 = 0;
        }
    }
    else
    {
        // Evidence: four-byte store of two.
        *field_24 = 2;
    }

    if (*field_0c != in_ECX)
    {
        FUN_0008f6a0();
    }

    return;
}
