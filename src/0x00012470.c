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

// Brute Force: 0x00012470 | Ghidra label FUN_00012470
// Ghidra function-body SHA-256: 769BD46305C5E88C8BBD58B6FF6C6C9A6FEA903184208C14F8CB2424BFBFB15D
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
#include <stdint.h>

// Entry: 0x00012470.
// TODO: Recover the actual ABI. The second parameter below is a synthetic
// reconstruction input representing Ghidra's incoming ECX, not an evidenced
// stack argument. Only param_1 appears in the decompiled parameter list.
void FUN_00012470(uint32_t param_1, int32_t in_ECX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    // TODO: Recover the indirect target's return type, calling convention,
    // and any implicit register arguments. This type is provisional.
    typedef void (*UnverifiedCode)(uint32_t);

    // Read the pointer stored at incoming ECX + 8 bytes.
    uint32_t* puVar1 =
        *((uint32_t**)(in_ECX + 8));

    // Read the comparison pointer at incoming ECX + 12 bytes.
    if (puVar1 != *((uint32_t**)(in_ECX + 0xC)))
    {
        do
        {
            // Preserve the evidenced indirection:
            // current 32-bit entry -> pointer -> first 32-bit code address.
            // TODO: Recover the types of these referenced structures.
            ((UnverifiedCode)(**((uint32_t**)(*puVar1))))(param_1);

            // Advance by one 32-bit entry (4 bytes).
            puVar1 = puVar1 + 1;
        }
        // Reload the comparison pointer after each indirect call.
        while (puVar1 !=
               *((uint32_t**)(in_ECX + 0xC)));
    }

    return;
}
