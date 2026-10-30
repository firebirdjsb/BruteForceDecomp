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

// Brute Force: 0x00012220 | Ghidra label FUN_00012220
// Ghidra function-body SHA-256: 2C47E26B673E9A7FB8D76791B93267C5CB7DF639C7BF1C92D76869D3BDF0498A
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x00012220; evidence name: FUN_00012220.
// Recorded body SHA256:
// 2C47E26B673E9A7FB8D76791B93267C5CB7DF639C7BF1C92D76869D3BDF0498A
// TODO: Provide <cstdint> and confirm the original calling convention.
// The parameters below represent incoming EDX and ESI register values;
// they are draft placeholders, not evidence of ordinary ABI parameters.
uint32_t FUN_00012220(uint32_t in_EDX,
                          uint32_t unaff_ESI)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    // Ghidra represents these register values as signed int.
    // Address calculations below explicitly retain their 32-bit bit patterns
    // and x86 modulo-2^32 address addition. Object types remain unknown.
    uint32_t uVar1 =
        *((const uint32_t*)(unaff_ESI + 0x04u));

    if (((uVar1 ==
          *((const uint32_t*)(in_EDX + 0x04u))) &&
         (uVar1 =
              *((const uint32_t*)(unaff_ESI + 0x24u)),
          uVar1 ==
              *((const uint32_t*)(in_EDX + 0x24u)))) &&
        ((uVar1 != 2u) ||
         (*((const int32_t*)(unaff_ESI + 0x0cu)) ==
          *((const int32_t*)(in_EDX + 0x0cu)))))
    {
        // CONCAT31((int3)(uVar1 >> 8), 1): retain the upper 24 bits
        // and replace the low byte with 0x01.
        return (uVar1 & 0xffffff00u) | 0x01u;
    }

    return uVar1 & 0xffffff00u;
}
