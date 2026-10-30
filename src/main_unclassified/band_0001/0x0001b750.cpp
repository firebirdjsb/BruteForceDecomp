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
extern void FUN_0001c5d0(void);

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

// Brute Force: 0x0001b750 | Ghidra label FUN_0001b750
// Ghidra function-body SHA-256: 1CF6CBCFA3367B5FEC033589069EF3041089E3D500558906020CE03F6DF7E89E
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Function index: 89; entry: 0x0001b750.
// Unverified source reconstruction, not recovered original code.
// TODO: Requires <cstdint> and declarations for the external functions.
// TODO: Confirm external function signatures and calling conventions.
void FUN_0001b750(void)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(int32_t) == 4, "Requires 32-bit integers.");
#endif

    // TODO: Ghidra identifies an incoming ESI value without a recovered
    // parameter or assignment. Bind this to the original register/ABI state.
    // It is deliberately unresolved here; this draft is unsafe to execute.
    int32_t unaff_ESI;

    int32_t local_8;
    // Four bytes of uninitialized storage; contents and interpretation unknown.
    unsigned char local_4[4];

    // Preserve the evidenced signed address arithmetic and double dereference.
    // Offset +4 contains a pointer to a 32-bit value.
    local_8 = **((int32_t**)(unaff_ESI + 4));

    if (((int32_t*)(local_8)) !=
        *((int32_t**)(unaff_ESI + 4)))
    {
        do
        {
            // Read the 32-bit value at byte offset +0x10.
            if (*((int32_t*)(local_8 + 0x10)) == 0)
            {
                // TODO: Return type and parameter types require ABI verification.
                local_8 = FUN_0001bd90(unaff_ESI, local_4, local_8);
                local_8 = *((int32_t*)(local_8));
            }
            else
            {
                // TODO: No arguments or local_8 advancement are shown.
                // Verify implicit register inputs and control-flow recovery;
                // do not infer a missing iteration step.
                FUN_0001c5d0();
            }
        } while (local_8 !=
                 *((int32_t*)(unaff_ESI + 4)));
    }

    return;
}
