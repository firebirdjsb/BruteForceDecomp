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

// Brute Force: 0x0001c120 | Ghidra label FUN_0001c120
// Ghidra function-body SHA-256: 2F738009CF1DC855BFA6008CFD431FCB06C029C92FB775A3EE9FC791044981AC
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
#include <stdint.h>

uint32_t* /* TODO: The unaff_ESI parameter(s) explicitly MODEL incoming register/FS or post-call values.
   They are NOT established original stack parameters or ABI declarations. */
FUN_0001c120(uint32_t* param_1,
    int32_t* param_2,
    int32_t* param_3, uint32_t unaff_ESI)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    // TODO: Resolve the calling convention and incoming ESI binding.
    // The unresolved identifier unaff_ESI below represents the decompiler's
    // signed 32-bit incoming register value, not an evidenced argument or global.
    // TODO: Supply evidence-based declarations and ABIs for FUN_0001c1a0,
    // FUN_0001c5d0, and FUN_0001bd90. Their implementations are not provided.

    int32_t* piVar1;
    int32_t* piVar2;
    uint32_t* puVar3;
    int32_t* piVar4;

    piVar4 = param_3;
    puVar3 = param_1;

    // Byte offset +4 from the unresolved ESI base contains a 32-bit pointer.
    piVar1 = *(int32_t**)(unaff_ESI + 4);
    piVar2 = param_2;

    // The first 4-byte word is interpreted as a 32-bit pointer.
    if ((param_2 == (int32_t*)*piVar1) && (param_3 == piVar1)) {
        // Index 1 accesses the signed 32-bit word at byte offset +4.
        FUN_0001c1a0(piVar1[1]);

        // Preserve each load and 4-byte store in the supplied order.
        // Nested +4 and +8 offsets are byte offsets from the loaded address.
        *(int32_t*)(*(int32_t*)(unaff_ESI + 4) + 4) =
            *(int32_t*)(unaff_ESI + 4);

        *(uint32_t*)(unaff_ESI + 8) = 0;

        *(uint32_t*)*(uint32_t*)(unaff_ESI + 4) =
            *(uint32_t*)(unaff_ESI + 4);

        *(int32_t*)(*(int32_t*)(unaff_ESI + 4) + 8) =
            *(int32_t*)(unaff_ESI + 4);

        *puVar3 = **(uint32_t**)(unaff_ESI + 4);
        return puVar3;
    }

    while (piVar2 != piVar4) {
        param_2 = piVar2;

        // TODO: No advancement of param_2 is visible in this pseudocode.
        // Resolve any implicit register/stack effects or decompiler omissions;
        // as written, this loop may make no progress.
        FUN_0001c5d0();
        FUN_0001bd90(unaff_ESI, &param_1, piVar2);

        piVar2 = param_2;
    }

    // Store the pointer's 32-bit representation in the output word.
    *puVar3 = (uint32_t)piVar2;
    return puVar3;
}
