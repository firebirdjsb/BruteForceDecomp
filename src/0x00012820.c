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

// Brute Force: 0x00012820 | Ghidra label FUN_00012820
// Ghidra function-body SHA-256: DA40E838350FC6BD3F4EC4AD43993C8482B7E26CA2473E2B9ECD0EA64B7E4BEC
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
#include <stdint.h>

// TODO: The pseudocode takes its destination pointer from incoming EAX.
// This explicit parameter represents that register value; the original ABI
// and callable signature remain unknown.
void FUN_00012820(uint32_t* in_EAX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(uint32_t) == 4, "Requires 4-byte words.");
#endif

    // TODO: Confirm the declaration and linkage of PTR_LAB_003a4024.
    // This opaque byte declaration is used only to represent its address.
    extern unsigned char PTR_LAB_003a4024;

    // All indexed stores below write 4 bytes at the indicated byte offset.
    in_EAX[0xf] = ((uintptr_t)(&PTR_LAB_003a4024)); // +0x3c
    in_EAX[0x12] = 0;                                                // +0x48
    in_EAX[0x10] = 0;                                                // +0x40

    // Read and write only the byte at +0x44; preserve the other three bytes.
    *((unsigned char*)(in_EAX + 0x11)) =
        ((unsigned char)((*((unsigned char*)(in_EAX + 0x11)) & 0xfa) | 2));

    in_EAX[0x13] = ((uintptr_t)(&PTR_LAB_003a4024)); // +0x4c
    in_EAX[0x16] = 0;                                                // +0x58
    in_EAX[0x14] = 0;                                                // +0x50

    // Read and write only the byte at +0x54; preserve the other three bytes.
    *((unsigned char*)(in_EAX + 0x15)) =
        ((unsigned char)((*((unsigned char*)(in_EAX + 0x15)) & 0xfa) | 2));

    in_EAX[0x18] = 0; // +0x60
    in_EAX[0x19] = 0; // +0x64
    in_EAX[0x1a] = 0; // +0x68
    in_EAX[0x1c] = 0; // +0x70
    in_EAX[0x1d] = 0; // +0x74
    in_EAX[0x1e] = 0; // +0x78
    in_EAX[0x1f] = 0; // +0x7c
    *in_EAX = 0;      // +0x00
    in_EAX[1] = 0;    // +0x04
    in_EAX[8] = 0;    // +0x20
    in_EAX[7] = 0;    // +0x1c
    in_EAX[6] = 0;    // +0x18
    in_EAX[2] = 0;    // +0x08
    in_EAX[5] = 0;    // +0x14
    in_EAX[4] = 0;    // +0x10
    in_EAX[3] = 0;    // +0x0c

    // Preserve the raw 32-bit constant; the field's semantic type is unknown.
    in_EAX[0xc] = 0xbf800000;         // +0x30
    in_EAX[9] = in_EAX[9] & 0xfffffe00; // +0x24: 32-bit read and write
    in_EAX[10] = 0;                   // +0x28
    in_EAX[0xb] = 0;                  // +0x2c
    in_EAX[0xd] = 0;                  // +0x34
    in_EAX[0xe] = 0;                  // +0x38
    return;
}
