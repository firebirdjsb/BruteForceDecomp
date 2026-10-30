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

// Brute Force: 0x00016300 | Ghidra label FUN_00016300
// Ghidra function-body SHA-256: 8DDBD702B85386932D251B28C97ACC28DBDBE6693BD6F3FBE782B677F602DE66
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x00016300; function index: 49.
// TODO: Confirm the original calling convention. These parameters explicitly
// represent incoming EAX and ECX values, not verified stack arguments.
// TODO: Confirm external declarations, object layout, and alignment.
#include <stdint.h>

void FUN_00016300(int32_t in_EAX, int32_t in_ECX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    /* TODO: 32-bit x86 width assumption; host build may use 64-bit pointers. */

    // TODO: Verify FUN_0008f6a0's signature, ABI, and implicit register inputs.
    extern void FUN_0008f6a0();

    // Address-only declaration; the actual symbol's type remains unknown.
    // TODO: Resolve this symbol to the object at address 0x003a4024.
    extern unsigned char PTR_LAB_003a4024;

    // Interpret ECX's 32-bit bit pattern as an address.
    uint8_t* const base = ((uint8_t*)(((uintptr_t)(((uint32_t)(in_ECX))))));

    // All offsets below are byte offsets from the incoming ECX address.
    *((uint32_t*)(base + 0x04)) = 0;

    if (in_EAX != 0) {
        FUN_0008f6a0();
    }

    // Preserve the byte read, mask, OR, and byte write.
    *((uint8_t*)(base + 0x18)) =
        ((uint8_t)((*((uint8_t*)(base + 0x18)) & 0xfa) | 2));

    // Store the symbol's address as a 32-bit pointer value.
    // TODO: The destination's actual pointer type is unresolved.
    *((uint32_t*)(base + 0x10)) =
        ((uint32_t)(((uintptr_t)(&PTR_LAB_003a4024))));

    *((uint32_t*)(base + 0x1c)) = 0;
    *((uint32_t*)(base + 0x14)) = 0;

    // Preserve raw 32-bit constants; field types are unknown.
    *((uint32_t*)(base + 0x08)) = 0x3f000000;
    *((uint32_t*)(base + 0x0c)) = 0x3f000000;

    return;
}
