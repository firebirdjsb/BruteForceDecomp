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

// Brute Force: 0x0001c1a0 | Ghidra label FUN_0001c1a0
// Ghidra function-body SHA-256: 2A63F7E1FB49FE389FB73B82EA7043BDE830031982EB3B6AD2049A3099C97AC0
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x0001c1a0.
// TODO: Requires <cstdint> and the original 32-bit x86 ABI.
// TODO: Calling conventions and external declarations remain unknown.
// FUN_0008f690 must supply the evidenced 32-bit signed result.
// DAT_00414da0 denotes storage whose byte address is used below;
// its declared type, size, and valid index range are unknown.
void FUN_0001c1a0(int32_t param_1)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    int32_t iVar1;
    int32_t* piVar2;
    int32_t* piVar3;
    int32_t iVar4;

    // TODO: Object layout, pointer validity, and signed address-arithmetic
    // behavior require verification. Offsets below are byte offsets.
    if (*((char*)(param_1 + 0xa9)) != '\0') {
        return;
    }

    // The source load is undefined4; retain its 32 bits as the signed
    // argument type shown for this recursive call.
    FUN_0001c1a0(*((int32_t*)(param_1 + 8)));

    // TODO: The evidence shows no arguments for either external call.
    FUN_0001bd30();
    FUN_0001bd30();

    if ((*((uint32_t*)(param_1 + 0x10)) != 0u) &&
        ((*((uint32_t*)(param_1 + 0x10)) & 1u) == 0u)) {
        iVar4 = FUN_0008f690();
        *((uint32_t*)(param_1 + 0x10)) = 0u;

        // Preserve the signed index multiplied by a four-byte entry size.
        iVar1 = *((int32_t*)(((unsigned char*)(&DAT_00414da0)) + iVar4 * 4));
        piVar3 = ((int32_t*)(((unsigned char*)(&DAT_00414da0)) + iVar4 * 4));

        while (iVar1 != 0) {
            // A stored 32-bit value is interpreted as a pointer.
            piVar2 = ((int32_t*)(*piVar3));

            if (piVar2 == ((int32_t*)(param_1 + 0xc))) {
                *piVar3 = *((int32_t*)(*piVar3));
                break;
            }

            piVar3 = piVar2;
            iVar1 = *piVar2;
        }
    }

    // TODO: Ghidra warns that this subroutine does not return.
    // Its actual termination behavior and ABI remain unverified.
    thunk_FUN_00237ec0(param_1);
}
