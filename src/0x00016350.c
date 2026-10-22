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

// Brute Force: 0x00016350 | Ghidra label FUN_00016350
// Ghidra function-body SHA-256: 8F3D0BBDC2A82358A14B43A1822DCF1654420734D51FA51E9F22C56FB4456096
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Function index 50; entry 0x00016350.
// TODO: Requires <cstdint> and declarations for FUN_00055590 and FUN_00055450.
// TODO: Establish the original calling conventions, including any implicit inputs.
void /* TODO: The in_EAX parameter(s) explicitly MODEL incoming register/FS or post-call values.
   They are NOT established original stack parameters or ABI declarations. */
FUN_00016350(uint32_t param_1, uint32_t in_EAX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    // TODO: Resolve the decompiler's incoming EAX value. The identifier in_EAX
    // below intentionally remains unresolved; it must represent that register's
    // 32-bit value, not an invented argument or an uninitialized local.
    const uint32_t eaxAddress = ((uint32_t)(in_EAX));

    // Read the 32-bit pointer at EAX + 0x08, then its first 32-bit word.
    const uint32_t pointerAt08 =
        *((const uint32_t*)(eaxAddress + 0x08u));
    const uint32_t tableAddress =
        *((const uint32_t*)(pointerAt08));

    // TODO: This function-pointer type is provisional. The pseudocode shows
    // no explicit arguments, but does not establish implicit register/stack
    // inputs or the calling convention.
    typedef int32_t (*IndirectFunction)();
    const int32_t iVar1 =
        (*((IndirectFunction*)(tableAddress + 0xF4u)))();

    if (((iVar1 != 0) &&
         ((*((const uint32_t*)(((uint32_t)(iVar1)) + 0x3C4u)) &
           0x100u) == 0u)) &&
        (*((const char*)(eaxAddress + 0x0Cu)) != '\0'))
    {
        if (*((const char*)(eaxAddress + 0x0Du)) != '\0')
        {
            FUN_00055590(param_1);
            return;
        }
        FUN_00055450(param_1);
    }
    return;
}
