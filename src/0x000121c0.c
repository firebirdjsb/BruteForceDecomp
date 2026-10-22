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

// Brute Force: 0x000121c0 | Ghidra label FUN_000121c0
// Ghidra function-body SHA-256: 9C401A0D0DCE3C6F513F25707A23EED551B1F731B8DDA84F21A641EEE28904A0
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
#include <stdint.h>

// Entry: 0x000121c0.
// TODO: The pseudocode obtains in_EAX from incoming EAX. This explicit parameter
// represents that value; the original calling convention remains unresolved.
// TODO: Supply the evidenced declaration of PTR_FUN_003a4f64 before this function.
// Its address is stored below; its type and contents are not established here.
void FUN_000121c0(uint32_t* in_EAX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    in_EAX[3] = 0;  // Byte offset 0x0C.
    in_EAX[8] = 0;  // Byte offset 0x20.
    in_EAX[1] = 0;  // Byte offset 0x04.
    in_EAX[0] = ((uint32_t)(&PTR_FUN_003a4f64));
    in_EAX[6] = 0;  // Byte offset 0x18.
    in_EAX[5] = 0;  // Byte offset 0x14.
    in_EAX[4] = 0;  // Byte offset 0x10.
    in_EAX[10] = 0; // Byte offset 0x28.
    in_EAX[0xB] = 0; // Byte offset 0x2C.
    in_EAX[0xC] = 0; // Byte offset 0x30.
    in_EAX[9] = 0;  // Byte offset 0x24.

    // A 13-element displacement in 32-bit words selects byte offset 0x34.
    // Only that byte is modified, using the evidenced mask 0xFE.
    *((unsigned char*)(in_EAX + 0xD)) =
        ((unsigned char)(*((unsigned char*)(in_EAX + 0xD)) & 0xFE));

    return;
}
