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
extern void FUN_000e1150(int param_1,undefined4 *param_2,int *param_3,int *param_4);

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

// Brute Force: 0x00012140 | Ghidra label FUN_00012140
// Ghidra function-body SHA-256: B41F5E57DD95D9D7FD50C405664C79D502AD2C419BAE3759363645D2FE195A73
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x00012140.
// TODO: Requires <cstdint> and a 32-bit x86 target.
// TODO: Ghidra declares no parameters, but reads an incoming ESI value.
// The explicit parameter below represents that value; the actual ABI is unknown.
// TODO: Supply evidence-based declarations and calling conventions for the
// external functions. Their implementations are not reconstructed here.
void FUN_00012140(int32_t unaff_ESI)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    uint32_t* puVar1;
    uint32_t uVar2;
    uint8_t local_4[4]; // Uninitialized, as shown in the pseudocode.

    // Read a 32-bit pointer at incoming ESI + 4 bytes.
    // Retain the decompiler's signed address arithmetic.
    puVar1 = *((uint32_t**)(unaff_ESI + 4));

    if (puVar1 == NULL) {
        uVar2 = 0;
    } else {
        uVar2 = *puVar1;
    }

    FUN_000e1150(unaff_ESI, local_4, uVar2, puVar1);

    // Reload the 32-bit value at ESI + 4 after the preceding call.
    // TODO: Ghidra warns that this subroutine does not return.
    // That behavior has not been independently verified.
    thunk_FUN_00237ec0(
        *((uint32_t*)(unaff_ESI + 4)));
}
