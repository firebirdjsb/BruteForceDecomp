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

// Brute Force: 0x0001bc90 | Ghidra label FUN_0001bc90
// Ghidra function-body SHA-256: ADD9343F03507F779FEFB12145429EE54AF3D87365FFC0AB15F30ADC5810AC2C
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// TODO: Requires <cstdint> and a 32-bit x86 target.
// TODO: The parameter below represents the incoming, otherwise unexplained
// EBX register value. It is NOT evidence of a normal function argument;
// the original entry ABI and register binding remain unresolved.
void FUN_0001bc90(int32_t unaff_EBX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(uint32_t) == 4, "Requires 4-byte words.");
#endif

    // TODO: The indirect callee's return type, parameter type, and calling
    // convention are unresolved. This provisional type expresses only the
    // observed call with one zero argument and an unused return value.
    typedef void (*IndirectFunction)(int32_t);

    // TODO: Resolve this external function's actual declaration and ABI.
    // Ghidra warns that it does not return; that property is unverified,
    // so this draft does not enforce it with a noreturn annotation.
    extern void thunk_FUN_00237ec0(uint32_t);

    uint32_t* puVar1;
    uint32_t* puVar2;

    // Read a 32-bit pointer from byte offset +4 relative to incoming EBX.
    // TODO: The base object's type and validity are unknown. Signed address
    // additions below retain the pseudocode; their C++ overflow behavior
    // has not been validated against the original x86 instructions.
    puVar2 = *((uint32_t**)(unaff_EBX + 4));

    if (puVar2 == NULL) {
        // Preserve all three separate 4-byte writes at offsets +4, +8, +12.
        *((uint32_t*)(unaff_EBX + 4)) = 0;
        *((uint32_t*)(unaff_EBX + 8)) = 0;
        *((uint32_t*)(unaff_EBX + 0xc)) = 0;
        return;
    }

    // Read the comparison pointer from byte offset +8.
    puVar1 = *((uint32_t**)(unaff_EBX + 8));

    // Advance by six 4-byte words (24 bytes) after each indirect call.
    // TODO: Allocation boundaries and the relationship between these
    // pointers are unknown; no additional termination checks are evidenced.
    for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
        // Interpret the current first word as an address, load the function
        // pointer at that address, and invoke it with zero.
        (*((IndirectFunction*)(*puVar2)))(0);
    }

    // Reload the 4-byte value at +4 after the calls, preserving side effects.
    // TODO: Ghidra marks this call as non-returning. Fallthrough behavior
    // cannot be established from the supplied pseudocode.
    thunk_FUN_00237ec0(
        *((uint32_t*)(unaff_EBX + 4)));
}
