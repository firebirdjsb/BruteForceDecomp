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

// Brute Force: 0x00012920 | Ghidra label FUN_00012920
// Ghidra function-body SHA-256: C96E85F4C4E21460A2382F55511172EE15CD7E85A7C1B9A2FE8727451C0D66C4
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x00012920; function index: 34.
// TODO: Requires <cstdint> and the evidence-backed declaration of PTR_LAB_003a4024.
// TODO: The pseudocode receives its pointer in EAX. This explicit parameter only
// represents that register input; the original calling convention is unresolved.
void FUN_00012920(uint32_t* in_EAX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(uint32_t) == 4, "Requires 4-byte words.");
#endif

    // Word indices below address 4-byte slots; byte accesses modify only one byte.
    in_EAX[6] = 0;       // +0x18
    in_EAX[0x12] = 0;    // +0x48

    // Store the address of the named symbol, not its contents.
    // TODO: Confirm the symbol's type and relocation representation.
    in_EAX[0x14] = ((uint32_t)(((uintptr_t)(&PTR_LAB_003a4024)))); // +0x50

    in_EAX[0x17] = 0;    // +0x5C
    in_EAX[0x15] = 0;    // +0x54
    *((unsigned char*)(in_EAX + 0x16)) =
        ((unsigned char)((*((unsigned char*)(in_EAX + 0x16)) & 0xFA) | 2)); // +0x58

    *in_EAX = 0;         // +0x00
    in_EAX[1] = 0;       // +0x04
    in_EAX[0xD] = 0;     // +0x34
    in_EAX[0xC] = 0;     // +0x30
    in_EAX[0xB] = 0;     // +0x2C
    in_EAX[0x10] = 0;    // +0x40
    in_EAX[0xF] = 0;     // +0x3C
    in_EAX[0xE] = 0;     // +0x38

    *((unsigned char*)(in_EAX + 10)) =
        ((unsigned char)(*((unsigned char*)(in_EAX + 10)) & 0xFE)); // +0x28

    in_EAX[0x18] = 0;    // +0x60
    in_EAX[9] = 0;       // +0x24
    in_EAX[8] = 0;       // +0x20
    in_EAX[7] = 0;       // +0x1C
    in_EAX[4] = 0;       // +0x10
    in_EAX[3] = 0;       // +0x0C
    in_EAX[2] = 0;       // +0x08
    in_EAX[0x13] = 0;    // +0x4C
    return;
}
