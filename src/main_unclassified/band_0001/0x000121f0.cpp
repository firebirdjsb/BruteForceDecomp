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
extern void FUN_0008f6e0(std::uint32_t guest_edx);

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

// Brute Force: 0x000121f0 | Ghidra label FUN_000121f0
// Ghidra function-body SHA-256: 3246E5F66F7F172FD466411DEE384DB3C2D26430FB637211F7476F32D3DE5410
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x000121f0
// Recorded body SHA256: 3246E5F66F7F172FD466411DEE384DB3C2D26430FB637211F7476F32D3DE5410
// TODO: Provide <cstdint> and the evidence-supported external declarations.
// TODO: Resolve the original calling convention. The explicit parameter below
// models the pointer supplied implicitly in ECX; it does not establish the ABI.
void FUN_000121f0(uint32_t* in_ECX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(uint32_t) == 4, "Requires 4-byte storage words.");
#endif

    // Offset +0x00: store the 32-bit address of PTR_FUN_003a4f64.
    // TODO: Resolve this external object's type; no table semantics are assumed.
    *in_ECX = ((uint32_t)(&PTR_FUN_003a4f64));

    // Offset +0x20: test the 4-byte word without interpreting its contents.
    if (in_ECX[8] != 0) {
        // TODO: Resolve the callee ABI and any implicit register arguments.
        FUN_0008f6e0();
    }

    // Offset +0x0C: read after the preceding call, preserving possible side effects.
    if (in_ECX[3] != 0) {
        // TODO: Resolve the callee ABI and any implicit register arguments.
        FUN_0008f6e0();
        return;
    }

    return;
}
