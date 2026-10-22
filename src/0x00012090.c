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

// Brute Force: 0x00012090 | Ghidra label FUN_00012090
// Ghidra function-body SHA-256: 235FCF69BE230A5F1819EB3C1FD332A6502769F76638871A2D4BC4969770C599
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// TODO: Requires <cstdint>. This draft assumes the original 32-bit x86 ABI.
// TODO: The parameters expose Ghidra's incoming AL and unaffiliated ESI.
// The original callable signature and register setup remain unknown.
uint32_t FUN_00012090(int8_t in_AL, int32_t* unaff_ESI)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    // TODO: Confirm the indirect callees' return types, calling conventions,
    // arguments, and implicit register inputs. This type is provisional.
    typedef uint32_t (*UnresolvedCall)();

    uint8_t bVar1;
    uint32_t uVar2; // Ghidra undefined4; used here as a 32-bit bit pattern.
    uint32_t uVar3;

    // int32_t element 5 is byte offset 0x14.
    uint8_t* byteAt14 = ((uint8_t*)(unaff_ESI + 5));

    // Convert the sign-extended AL bit pattern to unsigned before shifting,
    // avoiding C++ undefined behavior for a left shift of a negative value.
    *byteAt14 = ((uint8_t)(*byteAt14 ^
        (((((uint32_t)(((int32_t)(in_AL)))) << 1) ^
          *byteAt14) & 2U)));

    if (in_AL != 0) {
        // Read a 32-bit indirect-call address at (*unaff_ESI + 0x0c).
        uVar2 = (*((UnresolvedCall*)(((uintptr_t)(((uint32_t)(*unaff_ESI)) + 0x0cU)))))();

        // CONCAT31 preserves uVar2's upper 24 bits and replaces its low byte
        // with (char)unaff_ESI[5]; retain only that cast's low eight bits.
        uVar3 = ((uVar2 & 0xffffff00U) |
                 ((uint8_t)(unaff_ESI[5]))) &
                0xfffffffbU;

        bVar1 = ((uint8_t)(uVar3));
        *byteAt14 = bVar1;

        return ((uVar3 & 0xffffff00U) |
                ((uint32_t)(bVar1 >> 1))) &
               0xffffff01U;
    }

    // Read a 32-bit indirect-call address at (*unaff_ESI + 0x10).
    uVar2 = (*((UnresolvedCall*)(((uintptr_t)(((uint32_t)(*unaff_ESI)) + 0x10U)))))();

    return ((uVar2 & 0xffffff00U) |
            ((uint32_t)(*byteAt14 >> 1))) &
           0xffffff01U;
}
