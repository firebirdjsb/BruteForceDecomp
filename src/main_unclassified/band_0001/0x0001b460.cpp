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
extern void FUN_0001c5d0(void);

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

// Brute Force: 0x0001b460 | Ghidra label FUN_0001b460
// Ghidra function-body SHA-256: B12940C17163949D88C584A998D26D211159CCC0D42631FCFDE38DEFCEA4D578
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x0001b460; function index: 86.
// TODO: Requires <cstdint>, a 32-bit x86 target, and the original ABI.
// TODO: Provide an ABI-specific binding named in_EAX for the incoming
// int32_t EAX value. The apparent void signature does not describe
// this register input; do not substitute an ordinary uninitialized local.
// TODO: Supply the declaration and correct ABI for FUN_0001c5d0.

int32_t /* TODO: The in_EAX parameter(s) explicitly MODEL incoming register/FS or post-call values.
   They are NOT established original stack parameters or ABI declarations. */
FUN_0001b460(uint32_t in_EAX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    int32_t* piVar1 =
        *((int32_t**)(*((int32_t*)(in_EAX + 0x358)) + 4));

    int32_t* piVar2 =
        ((int32_t*)(*piVar1));

    int32_t iVar3 = 0;

    while (piVar2 != piVar1)
    {
        // [4]: byte offset 0x10.
        // +0x23 int32_t elements: byte offset 0x8c; inspect one byte.
        // [0x1c]: byte offset 0x70.
        if ((piVar2[4] != 0) &&
            ((*((uint8_t*)(piVar2 + 0x23)) & 4) != 0) &&
            (piVar2[0x1c] == 1))
        {
            iVar3 = iVar3 + 1;
        }

        // TODO: The pseudocode shows no update to piVar2. Any hidden
        // register effects, missing arguments, or omitted traversal remain
        // unresolved; this loop may not terminate as written.
        FUN_0001c5d0();
    }

    return iVar3;
}
