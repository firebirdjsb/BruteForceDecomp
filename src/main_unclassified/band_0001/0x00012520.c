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

// Brute Force: 0x00012520 | Ghidra label FUN_00012520
// Ghidra function-body SHA-256: B6E9B38830E77DD7F97200DC70D71A3C045C05489DB632936111745DEB3C11FB
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// TODO: Include <cstdint> and define float10 to represent Ghidra's
// extended-precision floating-point type; its C++/ABI mapping is unverified.
// TODO: The parameter explicitly models the incoming EAX register bits.
// Ghidra shows no formal parameters; the actual calling convention is unknown.
float10 FUN_00012520(uint32_t incoming_eax_bits)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(float) == 4, "Requires 32-bit float storage.");
#endif

    // Ghidra typed EAX as int. Treat its bits as a 32-bit address here;
    // additions model x86 address calculation modulo 2^32.
    if ((*((const uint8_t*)(incoming_eax_bits + ((uint32_t)(8)))) & 1) != 0)
    {
        return ((float10)(*((const float*)(incoming_eax_bits + ((uint32_t)(4))))));
    }

    return ((float10)(0.0));
}
