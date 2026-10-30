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
extern void FUN_0008f6e0(std::uint32_t guest_edx);

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

// Brute Force: 0x000123f0 | Ghidra label FUN_000123f0
// Ghidra function-body SHA-256: 85C3ADB4857D0D003318E621EF2589E74D08F5372F34930695205DBEF18EF55C
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x000123f0. Unverified source reconstruction, not original code.
// TODO: Requires <cstdint> and declarations for the referenced symbols.
// TODO: Recover the actual calling convention. The explicit in_ECX parameter
// below represents the incoming ECX register, not a proven stack argument.
void FUN_000123f0(uint32_t* in_ECX, uint8_t param_1)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    // TODO: Recover the object layout and referenced symbol types.
    // Index 1 is byte offset 0x04; preserve the symbol's address.
    in_ECX[1] = ((uint32_t)(&PTR_FUN_003a4f64));

    // Index 9 is byte offset 0x24.
    if (in_ECX[9] != 0) {
        // TODO: Recover any implicit register arguments and callee ABI.
        FUN_0008f6e0();
    }

    // Index 4 is byte offset 0x10; read after the preceding call.
    if (in_ECX[4] != 0) {
        // TODO: Recover any implicit register arguments and callee ABI.
        FUN_0008f6e0();
    }

    // Byte offset 0x00; preserve the symbol's address.
    *in_ECX = ((uint32_t)(&PTR_LAB_003a4f50));

    if ((param_1 & 1) != 0) {
        // Ghidra warning: this subroutine does not return.
        // TODO: Verify non-returning behavior and implicit arguments/ABI.
        thunk_FUN_00237ec0();
    }

    return;
}
