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

// Brute Force: 0x00012680 | Ghidra label FUN_00012680
// Ghidra function-body SHA-256: C66B021C0B6083655CF55F91FB1020B5454C1FFCC4FA98C342802D48EF6206B4
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x00012680; function index: 29.
// TODO: Requires <cstdint> and the correct declaration of FUN_00058c50.
// TODO: The decompiler reports void(void), with inputs in ESI and EAX.
// These explicit parameters represent those register inputs for this draft;
// they do not establish the original calling convention or function signature.
void FUN_00012680(int32_t unaff_ESI, uint32_t in_EAX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    // TODO: Confirm FUN_00058c50's ABI and the interpretation of the EAX bits.
    FUN_00058c50(unaff_ESI, in_EAX);

    // Preserve the 32-bit address bits supplied through ESI.
    unsigned char* base = ((unsigned char*)(((uint32_t)(unaff_ESI))));

    // TODO: Object layout, pointer validity, alignment, and aliasing are unknown.
    // Offsets are byte offsets; each accessed field is exactly 32 bits.
    // TODO: Signed subtraction follows the pseudocode. Overflow behavior needs
    // instruction-level verification; C++ signed overflow is undefined.
    if ((*((int32_t*)(base + 0x04)) == 0) ||
        ((*((int32_t*)(base + 0x08)) -
          *((int32_t*)(base + 0x04))) / 0x18 == 0))
    {
        if (*((int32_t*)(base + 0x10)) != -1)
        {
            *((uint32_t*)(base + 0x10)) = 0xffffffffu;
            // Preserve raw bits; the field's semantic type is unknown.
            *((uint32_t*)(base + 0x18)) = 0x7f7fffffu;
            *((uint32_t*)(base + 0x24)) = 0u;
        }
    }
    else if (*((int32_t*)(base + 0x10)) != 0)
    {
        *((uint32_t*)(base + 0x10)) = 0u;
        *((uint32_t*)(base + 0x18)) = 0x7f7fffffu;
        *((uint32_t*)(base + 0x24)) = 0u;
        return;
    }

    return;
}
