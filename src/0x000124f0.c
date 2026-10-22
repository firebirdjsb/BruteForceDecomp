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

// Brute Force: 0x000124f0 | Ghidra label FUN_000124f0
// Ghidra function-body SHA-256: BBAECFB8F22ECFA11B389C9B2C6CCE9ADA43F5E256F99CE836CB30ADB884567F
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x000124f0; function index: 19.
// Recorded body SHA256:
// BBAECFB8F22ECFA11B389C9B2C6CCE9ADA43F5E256F99CE836CB30ADB884567F
// TODO: Requires <cstdint>.
// TODO: Recover the actual calling convention. The explicit in_ECX parameter
// below represents the incoming ECX register; it is not an evidenced stack
// parameter. The original ABI must supply this value through ECX.
void FUN_000124f0(float param_1, int32_t in_ECX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(float) == 4, "Requires 32-bit float storage.");
#endif

    // Preserve the unsuffixed comparison literal from the pseudocode.
    // TODO: Verify the executable's comparison precision and exact constant.
    if (1.1920929e-07 < param_1) {
        // Byte offsets from incoming ECX; each store writes four bytes.
        // TODO: Recover the underlying object layout. Signed address arithmetic
        // follows the pseudocode; its overflow behavior remains unresolved.
        *((float*)(in_ECX + 0x0c)) = param_1;
        *((float*)(in_ECX + 0x04)) = param_1;

        // One-byte read/modify/write at offset 0x08: clear bits 1 and 2,
        // set bit 0, and preserve the other bits.
        *((uint8_t*)(in_ECX + 0x08)) =
            (*((uint8_t*)(in_ECX + 0x08)) & 0xf9) | 1;
    }
    return;
}
