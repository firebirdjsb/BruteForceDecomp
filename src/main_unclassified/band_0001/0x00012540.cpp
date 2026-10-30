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

// Brute Force: 0x00012540 | Ghidra label FUN_00012540
// Ghidra function-body SHA-256: 17ECDF624151AA6A24020748FA3D463DCB4EB707EA1E78CB6D33999629EE9522
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x00012540; function index: 21.
// Recorded body SHA256: 17ECDF624151AA6A24020748FA3D463DCB4EB707EA1E78CB6D33999629EE9522
// TODO: Requires <cstdint> and declarations for PTR_FUN_003a4f68
// and FUN_0008f6e0; their types and ABI remain unverified.
// TODO: The pseudocode has no formal parameters and obtains in_ECX from
// incoming ECX. This explicit parameter represents that register value;
// it does not establish the original function signature or calling convention.
void FUN_00012540(uint32_t* in_ECX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    // Write the 32-bit address of PTR_FUN_003a4f68 at byte offset 0.
    *in_ECX = ((uint32_t)(((uintptr_t)(&PTR_FUN_003a4f68))));

    // Test the 32-bit value at byte offset 0x14 (5 * 4).
    if (in_ECX[5] != 0) {
        // TODO: The pseudocode supplies no explicit arguments.
        // Verify any implicit register inputs and calling convention.
        FUN_0008f6e0();
        return;
    }
    return;
}
