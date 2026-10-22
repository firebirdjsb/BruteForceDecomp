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

// Brute Force: 0x00015f80 | Ghidra label FUN_00015f80
// Ghidra function-body SHA-256: 46944BDE93CACAC236E2744F46EC746CA169DC29643CC7D75DE51A78196C9659
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
#include <stdint.h>

// Entry: 0x00015f80; function index: 41.
// TODO: Actual calling convention is unknown. These parameters represent
// implicit EAX and ECX inputs, not confirmed stack arguments.
// TODO: Pointee ownership, validity, and object layout remain unknown.
uint32_t FUN_00015f80(int32_t in_EAX, int32_t* in_ECX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(int) == 4, "Requires 32-bit int arithmetic.");
#endif

    int32_t* piVar1;

    // Offsets +4 and +8 contain 32-bit pointers.
    // TODO: Signed address additions below require overflow review against
    // the original x86 instructions; C++ signed overflow is undefined.
    for (piVar1 = *((int32_t**)(in_EAX + 4));
         (piVar1 != *((int32_t**)(in_EAX + 8))) &&
         (*piVar1 != *in_ECX);
         piVar1 = piVar1 + 6) // Advance six 32-bit integers: 24 bytes.
    {
    }

    // Preserve the pointer-bit mask and the repeated load at offset +8.
    // Equality produces int 0 or 1; subtracting 1 produces -1 or 0.
    return ((uint32_t)(piVar1)) &
           ((uint32_t)((piVar1 == *((int32_t**)(in_EAX + 8))) - 1));
}
