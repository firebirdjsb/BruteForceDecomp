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

// Brute Force: 0x0001a760 | Ghidra label FUN_0001a760
// Ghidra function-body SHA-256: 9FAF11106865B95EB62BF6FC94AA3954D8FBD483F2CABAAC548AEBC50CEC8B7A
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
#include <stdint.h>

// Function entry: 0x0001a760; index: 77.
// Recorded body SHA256:
// 9FAF11106865B95EB62BF6FC94AA3954D8FBD483F2CABAAC548AEBC50CEC8B7A
//
// TODO: Supply float10 with the evidenced x87 extended-precision behavior.
// Do not assume the target compiler's long double provides that behavior.
// TODO: Establish the calling convention and return ABI.
// TODO: Resolve entry-register placeholders in_ECX (int32_t) and
// in_AL (char). Their origins are unknown; they are not established globals.
// TODO: Supply verified declarations for FUN_00232520 and FUN_00223780.
// Their implementations and complete ABI contracts are not provided.

float10 /* TODO: The in_ECX parameter(s) explicitly MODEL incoming register/FS or post-call values.
   They are NOT established original stack parameters or ABI declarations. */
FUN_0001a760(int32_t param_1, float param_2, uint32_t in_ECX, char in_AL)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(float) == 4, "Requires 32-bit float storage.");
#endif

    // Address arithmetic below uses unsigned 32-bit values to retain the
    // target's 32-bit address calculation without signed C++ overflow.
    // Offset 0x228 holds a pointer to 32-bit signed integer storage.
    int32_t* piVar1 =
        *((int32_t**)(((uint32_t)(in_ECX)) + 0x228u));

    if ((in_AL != '\0') &&
        ((*((uint8_t*)(((uint32_t)(*((int32_t*)(((uint32_t)(param_1)) + 0x0cu)))) +
              0x1a8u)) & 1u) != 0) &&
        (*piVar1 == 0))
    {
        return ((float10)(50.0));
    }

    float10 fVar2 = ((float10)(FUN_00232520()));

    // Index 0x0d denotes byte offset 0x34 in 32-bit integer storage.
    if (piVar1[0x0d] == 2)
    {
        // Index 6 denotes byte offset 0x18.
        // Preserve extended-precision arithmetic and explicit float narrowing.
        float10 fVar3 = ((float10)(FUN_00223780(
                piVar1[6],
                ((float)(((float10)(1.0)) -
                    ((float10)(param_2)) / fVar2)))));

        if (fVar3 < ((float10)(1.0)))
        {
            return ((float10)(0.0));
        }

        fVar2 = ((float10)(((float)(fVar2))));
    }

    return fVar2;
}
