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

// Brute Force: 0x00015fe0 | Ghidra label FUN_00015fe0
// Ghidra function-body SHA-256: D914CDF5F37B6C496336A51874676FF4B86B2521D3F60CDB4E57A32134CD48EB
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Unverified source reconstruction of FUN_00015fe0 at 0x00015fe0.
// TODO: Requires <cstdint> and the missing external declaration.
void FUN_00015fe0(void)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    int32_t iVar1;
    uint32_t* puVar2;
    uint32_t uVar3 = 0;

    // TODO: Bind this value to ESI on entry using the original x86 ABI.
    // The pseudocode provides no parameter or initialization for unaff_ESI.
    // This local is intentionally unresolved; using it as written is undefined.
    int32_t unaff_ESI;

    while (true) {
        // Byte offset +0x08 from the unresolved incoming ESI value.
        iVar1 = *((int32_t*)(unaff_ESI + 0x08));

        // Preserve signed 32-bit subtraction, signed right shift by 2,
        // and conversion to unsigned 32-bit before comparison.
        // TODO: Verify overflow and negative-right-shift behavior against
        // the executable; this expression is not portable C++ arithmetic.
        if ((iVar1 == 0) ||
            (((uint32_t)((*((int32_t*)(unaff_ESI + 0x0c))
                 - iVar1) >> 2)) <= uVar3)) {
            break;
        }

        // Read a 32-bit pointer from the table at byte offset uVar3 * 4.
        puVar2 = *((uint32_t**)(iVar1 + uVar3 * ((uint32_t)(4))));

        if (puVar2 != NULL) {
            // Read the table pointer at puVar2 + 0 bytes, then call its
            // first function pointer with the sole explicit argument 1.
            // TODO: Return type, calling convention, and implicit register
            // arguments are unknown. This function-pointer type is provisional.
            typedef void (*UnknownCode)(int32_t);
            (*((UnknownCode*)(*puVar2)))(1);
        }

        uVar3 = uVar3 + ((uint32_t)(1));
    }

    if (*((int32_t*)(unaff_ESI + 0x08)) != 0) {
        // TODO: Missing external declaration and ABI.
        // Ghidra warns this subroutine does not return. If accurate, the
        // stores below are unreachable on this branch; retain that uncertainty.
        thunk_FUN_00237ec0(
            *((int32_t*)(unaff_ESI + 0x08)));
    }

    // Preserve the three 4-byte zero stores at the recorded byte offsets.
    *((uint32_t*)(unaff_ESI + 0x08)) = 0;
    *((uint32_t*)(unaff_ESI + 0x0c)) = 0;
    *((uint32_t*)(unaff_ESI + 0x10)) = 0;
    return;
}
