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

// Brute Force: 0x00012620 | Ghidra label FUN_00012620
// Ghidra function-body SHA-256: 7B732ED957C09DCA63BE754E0193F2B2CE69DCF1EDF9A607B339BA1F2BEC4E01
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
#include <stdint.h>

// Entry: 0x00012620; function index: 27.
// Unverified source reconstruction, not recovered original code.
// TODO: Recover the original calling convention. This explicit parameter
// represents the incoming ECX value; it is not a confirmed stack argument.
bool FUN_00012620(int32_t in_ECX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    int32_t iVar1;
    int32_t iVar2;

    // Treat ECX as a 32-bit address. Offsets are byte offsets;
    // each dereference reads a signed 32-bit integer.
    if (*((const int32_t*)(((uint32_t)(in_ECX)) + 4u)) == 0)
    {
        return true;
    }

    // TODO: Verify subtraction overflow behavior against the instructions.
    // Signed overflow is undefined in C++; this preserves the pseudocode's
    // signed expression without asserting that overflow cannot occur.
    iVar2 =
        *((const int32_t*)(((uint32_t)(in_ECX)) + 8u)) -
        *((const int32_t*)(((uint32_t)(in_ECX)) + 4u));

    // TODO: Confirm arithmetic right-shift behavior for negative values
    // with the selected C++ language version/compiler and original code.
    iVar1 = iVar2 >> 0x1f;

    return iVar2 / 0x18 + iVar1 == iVar1;
}
