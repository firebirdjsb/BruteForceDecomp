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

// Brute Force: 0x00016200 | Ghidra label FUN_00016200
// Ghidra function-body SHA-256: FFC7B0728B56316B0C6461235B21A40DD2071DFDC56FC490305B8F5D1426436B
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
#include <stdint.h>

// Unverified source reconstruction of entry 0x00016200.
// TODO: Recover the original ABI. The second parameter explicitly represents
// the incoming ECX register; it is not an evidenced stack parameter.
// TODO: Supply declarations for PTR_FUN_003a4f70 and the external functions.
// Their calling conventions, implicit register inputs, and signatures are unknown.
extern void FUN_00015fe0(void);

void FUN_00016200(uint8_t param_1, uint32_t* in_ECX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    // Write the 32-bit address of the referenced symbol at ECX + 0x00.
    *in_ECX = ((uint32_t)(((uintptr_t)(&PTR_FUN_003a4f70))));

    // TODO: Preserve any implicit register arguments once the ABI is established.
    FUN_00015fe0();

    if (in_ECX[2] != 0) { // 32-bit value at ECX + 0x08.
        // TODO: Ghidra marks this call as non-returning. Verify that annotation;
        // the following writes are reachable on this branch only if it returns.
        thunk_FUN_00237ec0(in_ECX[2]);
    }

    in_ECX[2] = 0; // ECX + 0x08.
    in_ECX[3] = 0; // ECX + 0x0C.
    in_ECX[4] = 0; // ECX + 0x10.

    if ((param_1 & 1) != 0) {
        // TODO: Ghidra also marks this call as non-returning, but shows no
        // explicit argument here. Resolve the conflicting call signatures
        // and any implicit register/stack inputs without inventing an argument.
        thunk_FUN_00237ec0();
    }

    return;
}
