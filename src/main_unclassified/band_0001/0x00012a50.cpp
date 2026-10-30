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

// Brute Force: 0x00012a50 | Ghidra label FUN_00012a50
// Ghidra function-body SHA-256: 0B8920E9FD39778488BFC3422420B51B045A3559D028CC5D2237A6547EE905A8
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
#include <stdint.h>

// Entry: 0x00012a50.
// TODO: Resolve the original calling convention. The explicit in_ECX parameter
// below represents the incoming ECX register, not an evidenced stack argument.
// TODO: Supply declarations for PTR_FUN_003a402c, FUN_0008f6e0,
// and thunk_FUN_00237ec0; their types, ABIs, and implicit operands are unresolved.
void FUN_00012a50(uint32_t* in_ECX, uint8_t param_1)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    // Store the 32-bit address of PTR_FUN_003a402c at ECX + 0x00.
    *in_ECX = ((uint32_t)(&PTR_FUN_003a402c));

    // Element 4 is the 32-bit value at ECX + 0x10.
    if (in_ECX[4] != 0u) {
        FUN_0008f6e0();
        // Preserve the second read after the external call.
        if (in_ECX[4] != 0u) {
            FUN_0008f6e0();
        }
    }

    if ((param_1 & 1) != 0) {
        // Ghidra warns that this subroutine does not return.
        // TODO: Verify that property and the call's implicit ABI operands.
        thunk_FUN_00237ec0();
    }

    return;
}
