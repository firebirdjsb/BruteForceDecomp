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

// Brute Force: 0x00018000 | Ghidra label FUN_00018000
// Ghidra function-body SHA-256: BA3F88D0ABF5D4D17589E1EC4F4CE0BDB9DA7F07C9C4C74EB1E3D599EE7B8B26
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// TODO: Requires <cstdint> and a 32-bit x86 target.
// TODO: Ghidra reports void(void) with an implicit input in EAX.
// The explicit parameter below represents that register input; it does not
// establish the original calling convention or function signature.
void FUN_00018000(int32_t in_EAX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    // Preserve the incoming 32-bit register bits as a memory address.
    uint8_t* base = ((uint8_t*)(((uintptr_t)(((uint32_t)(in_EAX))))));

    // Read four bytes at byte offset 0x58.
    // TODO: The original field type is unknown (Ghidra: undefined4).
    switch (*((uint32_t*)(base + 0x58)))
    {
    case 0:
    case 4:
        // Update one byte at byte offset 0x464.
        *(base + 0x464) = ((uint8_t)(*(base + 0x464) | 3));

        // Update an unsigned 32-bit value at byte offset 0x3c4.
        *((uint32_t*)(base + 0x3c4)) =
            *((uint32_t*)(base + 0x3c4)) & 0xfffffffeu;
        return;

    case 1:
    case 3:
    case 5:
        // Update one byte at byte offset 0x464.
        *(base + 0x464) = ((uint8_t)(*(base + 0x464) & 0xfc));
    }

    return;
}
