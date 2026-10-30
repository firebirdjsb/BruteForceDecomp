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

// Brute Force: 0x0001bd30 | Ghidra label FUN_0001bd30
// Ghidra function-body SHA-256: 77DE8B9889C1C4BD16F53F4E010BEEA5AF68D4BD14786B723A261BF7663430CD
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Function index: 99; entry: 0x0001bd30.
// TODO: Requires <cstdint> and <bit> (C++20).
// TODO: The decompiler exposes an incoming ESI value, not a recovered parameter.
// This explicit parameter is a draft representation; the original calling
// convention and ESI binding remain unknown.
// TODO: Supply the actual declaration and ABI of thunk_FUN_00237ec0.
// Ghidra marks both calls as non-returning; verify that property.
void FUN_0001bd30(uint32_t unaff_ESI)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(int32_t) == 4);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(uint32_t) == 4);
#endif

    // All offsets are bytes. Unsigned address arithmetic retains the low
    // 32 bits of x86 address calculations.
    int32_t iVar1 =
        *((int32_t*)(unaff_ESI + 0x10u));

    while (iVar1 != 0) {
        if (*((int32_t*)(unaff_ESI + 0x10u)) != 0) {
            // Reload, decrement, store, then compare, as in the pseudocode.
            // Preserve 32-bit decrement bits without C++ signed-overflow UB.
            iVar1 = BF_BITS_TO_I32(BF_BITS_TO_U32(*((int32_t*)(unaff_ESI + 0x10u)))
                - 1u);
            *((int32_t*)(unaff_ESI + 0x10u)) = iVar1;

            if (iVar1 == 0) {
                // undefined4: the field's interpretation is unknown.
                *((uint32_t*)(unaff_ESI + 0x0cu)) = 0u;
            }
        }

        iVar1 = *((int32_t*)(unaff_ESI + 0x10u));
    }

    if (*((int32_t*)(unaff_ESI + 0x08u)) != 0) {
        // Address: [ESI + 4] - 4 + [ESI + 8] * 4.
        // The multiplier scales by four bytes; no element semantics inferred.
        // TODO: Verify the original arithmetic instructions and call target.
        // WARNING: Ghidra identifies this call as non-returning.
        thunk_FUN_00237ec0(
            *((uint32_t*)(((uint32_t)(*((int32_t*)(unaff_ESI + 0x04u))))
                - 4u
                + ((uint32_t)(*((int32_t*)(unaff_ESI + 0x08u))))
                    * 4u)));
    }

    // WARNING: Ghidra identifies this call as non-returning.
    // TODO: Fallthrough from the preceding call is not established.
    thunk_FUN_00237ec0(
        *((uint32_t*)(unaff_ESI + 0x04u)));
}
