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

// Brute Force: 0x000129f0 | Ghidra label FUN_000129f0
// Ghidra function-body SHA-256: 09036DB276DC921F509E9673909FFE4F6A6CB07EC493A79889455AF83A2F94DB
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
#include <stdint.h>

// Entry: 0x000129f0.
// TODO: Confirm the original calling convention and parameter types.
// uint32_t represents opaque 4-byte undefined4 storage here.
void FUN_000129f0(uint32_t* param_1,
                  uint32_t param_2,
                  uint32_t* param_3)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(uint32_t) == 4, "Requires 4-byte words.");
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(uint8_t) == 1, "Requires 8-bit bytes.");
#endif

    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;

    *param_1 = param_2; // Write 4 bytes at destination offset 0x00.

    if (param_3 != NULL) {
        // Preserve the observed load/store order; overlap is unspecified.
        uVar2 = param_3[1]; // Read 4 bytes at source offset 0x04.
        uVar3 = param_3[2]; // Read 4 bytes at source offset 0x08.
        uVar4 = param_3[3]; // Read 4 bytes at source offset 0x0C.
        uVar1 = param_3[8]; // Read 4 bytes at source offset 0x20.
        uVar5 = param_3[4]; // Read 4 bytes at source offset 0x10.
        uVar6 = param_3[5]; // Read 4 bytes at source offset 0x14.
        uVar7 = param_3[6]; // Read 4 bytes at source offset 0x18.
        uVar8 = param_3[7]; // Read 4 bytes at source offset 0x1C.

        param_1[1] = *param_3; // Read source +0x00; write destination +0x04.
        param_1[2] = uVar2;    // Write 4 bytes at destination offset 0x08.
        param_1[3] = uVar3;    // Write 4 bytes at destination offset 0x0C.
        param_1[4] = uVar4;    // Write 4 bytes at destination offset 0x10.
        param_1[9] = uVar1;    // Write 4 bytes at destination offset 0x24.
        param_1[5] = uVar5;    // Write 4 bytes at destination offset 0x14.
        param_1[6] = uVar6;    // Write 4 bytes at destination offset 0x18.
        param_1[7] = uVar7;    // Write 4 bytes at destination offset 0x1C.
        param_1[8] = uVar8;    // Write 4 bytes at destination offset 0x20.

        // 0x0C words * 4 bytes = destination byte offset 0x30.
        // Read/write exactly one byte, setting bit 0.
        *((unsigned char*)(param_1 + 0x0C)) =
            *((unsigned char*)(param_1 + 0x0C)) | 1;
        return;
    }

    // Read/write exactly one byte at destination offset 0x30,
    // clearing bit 0 with the observed mask 0xFE.
    *((unsigned char*)(param_1 + 0x0C)) =
        *((unsigned char*)(param_1 + 0x0C)) & 0xFE;
    return;
}
