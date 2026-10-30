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

// Brute Force: 0x000162c0 | Ghidra label FUN_000162c0
// Ghidra function-body SHA-256: CC08EA1CC975D14E9A464E5FCD52CBF6FB28217D83BAC808FFBE8FE71E979E53
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// TODO: Requires <cstdint> and the original 32-bit x86 ABI.
// TODO: Ghidra shows no explicit arguments; in_EAX represents the incoming
// EAX register value. This parameter does not establish the original ABI.
// TODO: The validity and alignment of the referenced memory are unknown.
uint32_t FUN_000162c0(int32_t in_EAX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(float) == 4, "Requires 32-bit float storage.");
#endif

    if (0.1 <=
        *((float*)(in_EAX + 0x1d4)) *
            *((float*)(in_EAX + 0x1d4)) +
        *((float*)(in_EAX + 0x1d0)) *
            *((float*)(in_EAX + 0x1d0)) +
        *((float*)(in_EAX + 0x1cc)) *
            *((float*)(in_EAX + 0x1cc)))
    {
        return 1;
    }
    return 0;
}
