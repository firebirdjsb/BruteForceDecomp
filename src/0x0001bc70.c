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

// Brute Force: 0x0001bc70 | Ghidra label FUN_0001bc70
// Ghidra function-body SHA-256: 6673464EE542E9C79B331DC17745A78C949275EABD1C9BD25C822089FE12F741
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x0001bc70. Unverified source reconstruction, not recovered original code.
// TODO: Requires <cstdint> and a 32-bit x86 target.
void FUN_0001bc70(void)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    // TODO: Obtain these incoming register values through the original ABI.
    // These declarations are unresolved inputs; using them as written is invalid.
    uint32_t* in_EAX;
    uint32_t* unaff_EDI;

    // TODO: The indirect callee's return type, parameter types, calling
    // convention, and any implicit register arguments are unknown.
    // This function-pointer type is only a provisional rendering of code**.
    typedef void (*UnknownCallee)(int32_t);

    for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 6) {
        // Read the 32-bit value at offset +0, treat it as the address of
        // a function-pointer slot, and call through that slot with literal 0.
        // Each iteration advances by six 4-byte elements (24 bytes).
        (**((UnknownCallee*)(((uintptr_t)(*in_EAX)))))(0);
    }
    return;
}
