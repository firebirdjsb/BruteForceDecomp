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
extern uint32_t FUN_0001ba10(uint32_t unaff_ESI);
extern void FUN_0001ba60(uint32_t unaff_ESI);

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

// Brute Force: 0x00016150 | Ghidra label FUN_00016150
// Ghidra function-body SHA-256: 566A49401C9AFA6171DCB84B92247B528DC6E995CA6F0D9C978B7099AA98B77E
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Function index: 44; entry: 0x00016150.
// Recorded body SHA256:
// 566A49401C9AFA6171DCB84B92247B528DC6E995CA6F0D9C978B7099AA98B77E
//
// TODO: Ghidra reports void FUN_00016150(void) with an incoming EAX value.
// This explicit parameter represents that register input for readability;
// it is not evidence of an original stack parameter or calling convention.
// TODO: Supply evidence-based declarations for FUN_0001ba10 and FUN_0001ba60.
void FUN_00016150(int in_EAX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(int) == 4, "Requires 32-bit signed int.");
#endif
    _Static_assert(sizeof(unsigned int) == 4, "Requires 32-bit unsigned int.");

    typedef unsigned int undefined4;

    // TODO: The indirect target's return type and calling convention are
    // unknown. This provisional type expresses only the observed call (1).
    // No implicit object argument is established by the supplied pseudocode.
    typedef void (*UnknownCode)(int);

    undefined4* puVar1;
    int* piVar2;

    // Read signed 32-bit fields at byte offsets 0x08 and 0x0C.
    // Preserve the signed subtraction and right shift by 2.
    // TODO: Confirm overflow behavior and signed-right-shift semantics
    // against the instructions; ordinary C++ signed overflow is undefined.
    if ((*((int*)(in_EAX + 0x08)) != 0) &&
        (((*((int*)(in_EAX + 0x0C)) -
           *((int*)(in_EAX + 0x08))) >> 2) != 0))
    {
        piVar2 = ((int*)(FUN_0001ba10()));

        // Read one 32-bit word and interpret it as an address.
        // The pseudocode contains no null check for piVar2.
        puVar1 = ((undefined4*)(*piVar2));

        FUN_0001ba60();

        if (puVar1 != NULL)
        {
            // Read a 32-bit address from puVar1, then load the function
            // pointer at byte offset 0 of that address and call it with 1.
            (*((UnknownCode*)(*puVar1)))(1);
        }
    }

    return;
}
