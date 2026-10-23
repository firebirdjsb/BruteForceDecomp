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

// Brute Force: 0x000182c0 | Ghidra label FUN_000182c0
// Ghidra function-body SHA-256: 53F0FA7D65AC336A387ED801D9CC45D8266F57DFA13580BD8338EE684F76327E
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x000182c0; function index: 63.
// TODO: Requires <cstdint> and <bit> (C++20).
// TODO: Establish the actual calling convention and bind the unresolved
// identifier unaff_EDI to the incoming 32-bit EDI register value. Ghidra's
// unaff_EDI does not establish a normal parameter or global variable.
// TODO: Supply the evidence-supported declaration/ABI for FUN_00012680.
// TODO: Confirm memory validity, alignment, and aliasing for these raw accesses.
void /* TODO: The unaff_EDI parameter(s) explicitly MODEL incoming register/FS or post-call values.
   They are NOT established original stack parameters or ABI declarations. */
FUN_000182c0(uint32_t unaff_EDI)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    const uint32_t base = unaff_EDI;

    // Offset 0x58: signed 32-bit comparison.
    if (*((int32_t*)(base + 0x58u)) != 7) {
        FUN_00012680();

        int32_t iVar1;

        // Offsets 0x934 and 0x938: signed 32-bit values in the pseudocode.
        // Express subtraction with 32-bit wrapping, then interpret its bits
        // as signed for division by 0x18 (24), truncating toward zero.
        // TODO: Confirm this arithmetic interpretation against instructions.
        if ((*((int32_t*)(base + 0x934u)) == 0) ||
            (BF_BITS_TO_I32(((uint32_t)(*((int32_t*)(base + 0x938u)))) -
                 ((uint32_t)(*((int32_t*)(base + 0x934u))))) /
                 ((int32_t)(0x18)) == 0)) {
            iVar1 = -1;
        }
        else {
            iVar1 = 0;
        }

        // Offset 0x940: signed 32-bit comparison and conditional store.
        if (*((int32_t*)(base + 0x940u)) != iVar1) {
            *((int32_t*)(base + 0x940u)) = iVar1;

            // Raw four-byte stores; the underlying field types are unknown.
            *((uint32_t*)(base + 0x948u)) = 0x7f7fffffu;
            *((uint32_t*)(base + 0x954u)) = 0u;
        }

        // Preserve the four-byte copy and subsequent store order.
        *((uint32_t*)(base + 0x5cu)) =
            *((uint32_t*)(base + 0x58u));
        *((uint32_t*)(base + 0x58u)) = 7u;
        return;
    }

    return;
}
