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
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern void FUN_00160da0(void);

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

// Brute Force: 0x00017f80 | Ghidra label FUN_00017f80
// Ghidra function-body SHA-256: 99DEE2D9EB7B28E832576666E75C01EF7843738538442D2888107E78AD9C5E1F
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x00017f80; function index: 58.
// Recorded body SHA256:
// 99DEE2D9EB7B28E832576666E75C01EF7843738538442D2888107E78AD9C5E1F
//
// TODO: Requires <cstdint> and evidence-based declarations for
// FUN_000120f0 and FUN_00160da0; their signatures and ABIs are unresolved.
// TODO: unaff_EDI below represents the incoming 32-bit EDI register value.
// It is intentionally unresolved: recover its ABI binding before use.
// Do not substitute an ordinary global or an uninitialized local for it.

void /* TODO: The unaff_EDI parameter(s) explicitly MODEL incoming register/FS or post-call values.
   They are NOT established original stack parameters or ABI declarations. */
FUN_00017f80(uintptr_t unaff_EDI)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    char cVar1;
    int32_t iVar2;

    // TODO: The indirect call's return type, calling convention, and hidden
    // inputs are unverified. This models only Ghidra's char result and its
    // lack of explicit arguments; preserve any required register context.
    typedef char (*IndirectFunction)();

    iVar2 = FUN_000120f0();

    // Read a 32-bit value at byte offset 0x2e8.
    iVar2 = *((int32_t*)(iVar2 + 0x2e8));

    // Read the 32-bit value at +0x144, then call through its +0x20 slot.
    cVar1 = (*((IndirectFunction*)(*((int32_t*)(iVar2 + 0x144)) + 0x20)))();

    // Preserve short-circuit evaluation, the assignment at +0x164,
    // and the repeated nonzero check.
    if ((((cVar1 != '\0') &&
          (iVar2 = *((int32_t*)(iVar2 + 0x164)),
           iVar2 != 0)) &&
         // Follow the 32-bit value at +0x0c; compare its +4 field.
         (*((int32_t*)(*((int32_t*)(iVar2 + 0x0c)) + 4)) == 0x14)) &&
        ((iVar2 != 0 &&
          // Follow the 32-bit value at +0x228; compare its +0x40 field.
          (*((int32_t*)(*((int32_t*)(iVar2 + 0x228)) + 0x40)) == 2))))
    {
        // TODO: Confirm parameter types; retain the 0xffffffff bit pattern.
        iVar2 = FUN_00160da0(0xffffffffu, 1);

        // Test bit 0x10 in the single byte at +0xa8.
        if ((iVar2 != 0) &&
            ((*((uint8_t*)(iVar2 + 0xa8)) & 0x10) == 0))
        {
            // OR bit 0x2000 into the 32-bit unsigned field at EDI + 0x3c4.
            // TODO: This write requires the unresolved incoming EDI value.
            *((uint32_t*)(unaff_EDI + 0x3c4)) =
                *((uint32_t*)(unaff_EDI + 0x3c4)) |
                0x2000;
        }
    }

    return;
}
