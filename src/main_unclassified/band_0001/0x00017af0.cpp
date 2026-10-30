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
extern void FUN_002185a0(void);
extern void FUN_00050b40(void);

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

// Brute Force: 0x00017af0 | Ghidra label FUN_00017af0
// Ghidra function-body SHA-256: BCB790A5AAB12CD73DCB380E976F71944B75711186082E2EEDE77CAD3FAEFBB9
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
void FUN_00017af0()
{
    // TODO: Requires <cstdint> and declarations for all external functions.
    // TODO: Confirm the original calling convention and external function types.
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    // TODO: Ghidra exposes an unresolved EAX register value. Its provenance and
    // relationship to the calls below are unknown; this local does not model
    // register state and must be resolved before this draft can be used.
    int32_t in_EAX;

    // Neutral 32-bit storage for Ghidra's undefined4 values.
    // TODO: Neither local has an evidenced initialization. Their reads below
    // are unresolved; executing this C++ draft would read indeterminate values.
    uint32_t local_8;
    uint32_t local_4;

    FUN_002185a0();
    FUN_00050b40();
    FUN_002185a0();
    FUN_0001c120(&local_4, local_4, local_8);

    // Preserve the evidenced signed address expression and four-byte load
    // at byte offset +4. TODO: Confirm pointer validity and loaded value type.
    // Ghidra warning: the following subroutine does not return.
    // TODO: Confirm that contract; no return path is supplied by the evidence.
    thunk_FUN_00237ec0(
        *((uint32_t*)(in_EAX + 4)));
}
