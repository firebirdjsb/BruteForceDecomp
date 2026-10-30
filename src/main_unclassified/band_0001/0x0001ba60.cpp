/* The original 32-bit x86 ABI is not established by this C11 translation. */
#include <stdint.h>
#include "bf_external_symbols.h"
/* Historical Ghidra scalar and guest32 aliases (syntax only).
 * Guest storage, x86 calling conventions and native linkage unverified. */
#include "bf_ghidra_types.h"
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

// Brute Force: 0x0001ba60 | Ghidra label FUN_0001ba60
// Ghidra function-body SHA-256: F0B9B68124F2A41EBC665EF1F961A0FF8E1A58DF296B8BC137679FBB1DABE455
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
#include <stdint.h>
#include <stdint.h>

// Entry: 0x0001ba60.
// TODO: The pseudocode consumes an incoming ESI value without defining it.
// This explicit parameter represents that register value for the draft only;
// the original calling convention and parameter list remain unresolved.
// TODO: Supply evidence-based declarations for FUN_0001d4c0 and FUN_0001d7a0.
// Their complete argument types, return types, and calling conventions are unknown.
// Requires C++20 for bit_cast and defined arithmetic signed right shift.
extern void FUN_0001d4c0(int param_1,int param_2,undefined4 param_3);
extern void FUN_0001d7a0(int param_1);

void FUN_0001ba60(uint32_t unaff_ESI)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    // ESI-relative fields: two 32-bit values at +4 and +8,
    // followed by individual bytes at +0x10 and +0x11.
    int32_t* field_04 = ((int32_t*)(((uintptr_t)(unaff_ESI + 0x04u))));
    int32_t* field_08 = ((int32_t*)(((uintptr_t)(unaff_ESI + 0x08u))));
    uint8_t* field_10 = ((uint8_t*)(((uintptr_t)(unaff_ESI + 0x10u))));
    uint8_t* field_11 = ((uint8_t*)(((uintptr_t)(unaff_ESI + 0x11u))));

    // Unsigned subtraction preserves 32-bit wraparound. bit_cast then
    // interprets the resulting bits as signed for the evidenced comparisons.
    if (*field_11 != 0)
    {
        if (4 < BF_BITS_TO_I32((((uint32_t)(*field_08)) -
                     ((uint32_t)(*field_04))) &
                    0xfffffffcu))
        {
            FUN_0001d4c0(*field_04, *field_08, *field_10, 0, 0);
        }

        *field_11 = 0;
    }

    const uint8_t uVar1 = *field_10;
    const int32_t iVar2 = *field_08;
    uint32_t* puVar3 = ((uint32_t*)(((uintptr_t)(((uint32_t)(*field_04))))));

    if (4 < BF_BITS_TO_I32((((uint32_t)(iVar2)) -
                 ((uint32_t)(((uintptr_t)(puVar3))))) &
                0xfffffffcu))
    {
        // Address iVar2 - 4, wrapping within the 32-bit address space.
        uint32_t* address_minus_04 = ((uint32_t*)(((uintptr_t)(((uint32_t)(iVar2)) - 4u))));

        const uint32_t uVar4 = *address_minus_04;
        *address_minus_04 = *puVar3;
        FUN_0001d7a0(puVar3, uVar4, uVar1);
    }

    // Reload fields after external calls, as in the supplied pseudocode.
    // Preserve the signed arithmetic right shift by two bits.
    if ((*field_04 != 0) &&
        ((BF_BITS_TO_I32(((uint32_t)(*field_08)) -
              ((uint32_t)(*field_04))) >> 2) != 0))
    {
        *field_08 = BF_BITS_TO_I32(((uint32_t)(*field_08)) - 4u);
    }

    return;
}
