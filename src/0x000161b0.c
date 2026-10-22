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

// Brute Force: 0x000161b0 | Ghidra label FUN_000161b0
// Ghidra function-body SHA-256: 3894195F122FA28333B8EAE48D7D9A0CF5D9D465EFCA9CA0C02E5077EFBCA6B0
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Function index: 46; entry: 0x000161b0.
// Recorded body SHA256:
// 3894195F122FA28333B8EAE48D7D9A0CF5D9D465EFCA9CA0C02E5077EFBCA6B0
//
// TODO: Requires <cstdint> and a 32-bit x86 target.
// TODO: Confirm the actual calling convention. Parameters below model the
// incoming EAX, EBX, and ESI register values; they are not a recovered ABI.
// TODO: Recover object layouts and pointer validity requirements.
// Uses C++20 integer conversion and signed right-shift semantics to express
// 32-bit wrapping subtraction followed by arithmetic right shift.

void FUN_000161b0(
    int32_t* in_EAX,
    uint32_t unaff_EBX,
    uint32_t unaff_ESI)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(int32_t) == 4, "Requires 32-bit integers.");
#endif

    int32_t iVar1;
    uint32_t uVar2 = 0;

    while (true) {
        // Read signed 32-bit fields at ESI + 8 and ESI + 0xC.
        // Preserve short-circuiting, subtraction before shifting by 2,
        // and the unsigned comparison against uVar2.
        if ((*((int32_t*)(unaff_ESI + 8u)) == 0) ||
            (((uint32_t)(((int32_t)(((uint32_t)(*((int32_t*)(unaff_ESI + 0xCu)))) -
                     ((uint32_t)(*((int32_t*)(unaff_ESI + 8u))))))
                 >> 2)) <= uVar2)) {
            *in_EAX = *((int32_t*)(unaff_ESI + 0xCu));
            return;
        }

        // Read a 4-byte entry from the address stored at ESI + 8.
        // Address arithmetic wraps to 32 bits.
        iVar1 = *((int32_t*)(((uint32_t)(*((int32_t*)(unaff_ESI + 8u)))) +
            uVar2 * 4u));

        // Preserve field comparisons and their short-circuit evaluation.
        if (((*((int32_t*)(((uint32_t)(iVar1)) + 4u)) ==
              *((int32_t*)(unaff_EBX + 4u))) &&
             (*((int32_t*)(((uint32_t)(iVar1)) + 0x24u)) ==
              *((int32_t*)(unaff_EBX + 0x24u)))) &&
            ((*((int32_t*)(((uint32_t)(iVar1)) + 0x24u)) != 2) ||
             (*((int32_t*)(((uint32_t)(iVar1)) + 0xCu)) ==
              *((int32_t*)(unaff_EBX + 0xCu))))) {
            break;
        }

        uVar2 = uVar2 + 1u;
    }

    // Store the 32-bit address of the selected 4-byte entry.
    *in_EAX = ((int32_t)(((uint32_t)(*((int32_t*)(unaff_ESI + 8u)))) +
        uVar2 * 4u));
    return;
}
