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

// Brute Force: 0x00015f30 | Ghidra label FUN_00015f30
// Ghidra function-body SHA-256: 5025E23714D954A90E4EDA5E48801637DFC420DC50917CCD30AE480A336323DD
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// TODO: Requires <cstdint>, an x86 compiler supporting __thiscall, and a
// declaration of UnknownType with this member. The owning type is unknown.
// TODO: Supply the declaration of PTR_FUN_003a4050 and the actual ABI and
// signature of thunk_FUN_00237ec0. Its differing argument lists below are
// preserved from the pseudocode; they do not establish C++ overloads.
void FUN_00015f30(void *unverified_this, uint8_t param_1) /* TODO original __thiscall */
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(uint32_t) == 4, "Requires 4-byte words.");
#endif

    // TODO: Confirm the member-function ABI. The pseudocode supplies the
    // object address through ECX; no pointer validation appears in evidence.
    uint32_t* const in_ECX = ((uint32_t*)(unverified_this));

    // Write the 32-bit address at object byte offset 0x00.
    in_ECX[0] = ((uint32_t)(((uintptr_t)(&PTR_FUN_003a4050))));

    // Index 3 is object byte offset 0x0C.
    if (in_ECX[3] != 0)
    {
        // TODO: Ghidra marks this call as non-returning. If accurate, the
        // subsequent stores are unreachable on this branch.
        thunk_FUN_00237ec0(in_ECX[3]);
    }

    in_ECX[3] = 0; // Object byte offset 0x0C; 4-byte store.
    in_ECX[4] = 0; // Object byte offset 0x10; 4-byte store.
    in_ECX[5] = 0; // Object byte offset 0x14; 4-byte store.

    if ((param_1 & 1) != 0)
    {
        // TODO: Ghidra also marks this call as non-returning and shows no
        // explicit argument. Do not infer an argument from the earlier call.
        thunk_FUN_00237ec0();
    }

    return;
}
