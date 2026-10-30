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
extern void FUN_000124f0(float param_1, int32_t in_ECX);

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

// Brute Force: 0x0001ad50 | Ghidra label FUN_0001ad50
// Ghidra function-body SHA-256: 570B82CEEA69C96148C24E6D056FED5AAD343FDFEC02C651E953D50EFAA3A756
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Function index 82; entry 0x0001ad50.
// Recorded body SHA256:
// 570B82CEEA69C96148C24E6D056FED5AAD343FDFEC02C651E953D50EFAA3A756
//
// TODO: Requires <cstdint>, <cmath>, and declarations for the external calls.
// TODO: Confirm the original calling convention and float argument placement.
void FUN_0001ad50(float param_1)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(float) == 4, "Requires 32-bit float storage.");
#endif

    // TODO: Ghidra identifies an incoming, otherwise undefined ESI value.
    // This local is deliberately unresolved and must be bound to that register
    // value through the correct ABI before this draft can be used.
    // Its unsigned type represents a 32-bit address, not an inferred object type.
    uint32_t unaff_ESI;

    // TODO: Confirm this external function's declaration and return ABI.
    const int32_t iVar1 = FUN_000120f0();

    if ((iVar1 != 0) &&
        (*((int32_t*)(unaff_ESI + 0x934u)) != 0) &&
        // Offsets 0x938 and 0x934 contain signed 32-bit values.
        // Preserve signed subtraction and division by 0x18 (24).
        // TODO: Confirm overflow behavior of the original subtraction;
        // ordinary C++ signed overflow would be undefined.
        ((*((int32_t*)(unaff_ESI + 0x938u)) -
          *((int32_t*)(unaff_ESI + 0x934u))) /
             0x18 != 0) &&
        // Offset 0x1a8 contains a 32-bit pointer to a signed 32-bit value.
        (2 < **((int32_t**)(unaff_ESI + 0x1a8u))) &&
        // Offset 0x488 is relative to the address returned by FUN_000120f0.
        // TODO: Confirm Ghidra's ABS operation matches fabs for all
        // relevant floating-point values and the original x87 environment.
        (2.5 < fabs(*((float*)(((uint32_t)(iVar1)) + 0x488u)))))
    {
        // Offset 0x35c is read and written as a 32-bit float here.
        param_1 = param_1 + *((float*)(unaff_ESI + 0x35cu));
        *((float*)(unaff_ESI + 0x35cu)) = param_1;

        if (param_1 <= 1.0)
        {
            return;
        }

        **((int32_t**)(unaff_ESI + 0x1a8u)) = 2;

        // Preserve the literal argument; its parameter type/ABI is unknown.
        // TODO: Confirm whether these bits are passed as an integer or float.
        FUN_000124f0(0x3f800000);
    }

    // Ghidra writes an undefined4 zero: preserve the raw 32-bit store.
    // TODO: Resolve storage typing/aliasing for this offset, also used as float.
    *((uint32_t*)(unaff_ESI + 0x35cu)) = 0u;
    return;
}
