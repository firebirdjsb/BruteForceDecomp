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
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

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

// Brute Force: 0x00012320 | Ghidra label FUN_00012320
// Ghidra function-body SHA-256: 09DF5F57AB66CA1D79AC7A0FB48234BFAD09EDAA4737F016616473C9F3143917
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x00012320; function index: 15.
// TODO: Requires <cstdint> and declarations for PTR_FUN_003a479c,
// PTR_FUN_003a4f64, and FUN_0008f6a0. Their types and ABI are unresolved.
// TODO: The recorded signature has only one undefined4 argument.
// The extra parameters below represent Ghidra's ECX and EDI live-ins;
// they are draft notation, not evidence of actual stack arguments.
void FUN_00012320(
    uint32_t param_1,
    int32_t in_ECX,
    uint32_t* unaff_EDI)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    // Store the addresses of the named symbols as 32-bit words.
    // TODO: Symbol roles and the destination object's layout are unknown.
    unaff_EDI[0] = ((uint32_t)(((uintptr_t)(&PTR_FUN_003a479c)))); // +0x00
    unaff_EDI[4] = 0;                                       // +0x10
    unaff_EDI[9] = 0;                                       // +0x24
    unaff_EDI[1] = ((uint32_t)(((uintptr_t)(&PTR_FUN_003a4f64)))); // +0x04
    unaff_EDI[2] = 0;                                       // +0x08
    unaff_EDI[7] = 0;                                       // +0x1C
    unaff_EDI[6] = 0;                                       // +0x18
    unaff_EDI[5] = 0;                                       // +0x14

    // Clear bit 0 of the single byte at +0x38; preserve its other bits.
    *((unsigned char*)(unaff_EDI + 0x0E)) =
        ((unsigned char)(*((unsigned char*)(unaff_EDI + 0x0E)) & 0xFE));

    unaff_EDI[0x0B] = 0;                                    // +0x2C
    unaff_EDI[0x0C] = 0;                                    // +0x30
    unaff_EDI[0x0D] = 0;                                    // +0x34
    unaff_EDI[10] = 0;                                      // +0x28

    // Clear bit 0 of the single byte at +0x3C; preserve its other bits.
    *((unsigned char*)(unaff_EDI + 0x0F)) =
        ((unsigned char)(*((unsigned char*)(unaff_EDI + 0x0F)) & 0xFE));

    unaff_EDI[2] = param_1;                                 // +0x08

    // Retain the recorded branches, including the apparently redundant
    // checks following initialization; the original instruction flow is unverified.
    if (in_ECX == 0) {
        if ((unaff_EDI[4] != 0) && (unaff_EDI[10] == 2)) {
            unaff_EDI[10] = 0;                              // +0x28
        }
    }
    else {
        unaff_EDI[10] = 2;                                  // +0x28
    }

    // Compare the raw 32-bit word at +0x10 with ECX's 32-bit bit pattern.
    // TODO: undefined4 does not establish the stored word's semantic signedness.
    if (unaff_EDI[4] != ((uint32_t)(in_ECX))) {
        // TODO: Ghidra shows no explicit arguments; register inputs,
        // calling convention, and side effects remain unresolved.
        FUN_0008f6a0();
    }

    return;
}
