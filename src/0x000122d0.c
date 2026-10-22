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

// Brute Force: 0x000122d0 | Ghidra label FUN_000122d0
// Ghidra function-body SHA-256: 37ED1F33991EBC143041D39338E1A2DD09A0F97812E20B41DE03AC95C45457C1
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x000122d0.
// TODO: Requires <cstdint> and declarations for PTR_FUN_003a479c and
// PTR_FUN_003a4f64. Their types and contents are unknown.
// TODO: Verify the original calling convention. The explicit in_EAX parameter
// below represents the pointer supplied in EAX by the pseudocode; it does not
// establish an additional original stack argument or a callable ABI.
void FUN_000122d0(uint32_t param_1, uint32_t* in_EAX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(uint32_t) == 4, "Requires 4-byte words.");
#endif

    // Word indices below represent byte offsets of index * 4.
    in_EAX[0] = ((uint32_t)(&PTR_FUN_003a479c));
    in_EAX[4] = 0;
    in_EAX[9] = 0;
    in_EAX[2] = 0;
    in_EAX[1] = ((uint32_t)(&PTR_FUN_003a4f64));
    in_EAX[7] = 0;
    in_EAX[6] = 0;
    in_EAX[5] = 0;
    in_EAX[0xb] = 0;
    in_EAX[0xc] = 0;
    in_EAX[0xd] = 0;
    in_EAX[10] = 0;

    // Single-byte read/modify/write at byte offset 0x38.
    *((unsigned char*)(in_EAX + 0xe)) =
        *((unsigned char*)(in_EAX + 0xe)) & 0xfe;

    // Single-byte read/modify/write at byte offset 0x3c.
    *((unsigned char*)(in_EAX + 0xf)) =
        *((unsigned char*)(in_EAX + 0xf)) & 0xfe;

    in_EAX[2] = param_1;
    return;
}
