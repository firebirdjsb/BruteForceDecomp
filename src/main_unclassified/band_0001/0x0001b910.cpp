/* The original 32-bit x86 ABI is not established by this C11 translation. */
#include <stdint.h>
#include "bf_external_symbols.h"
/* Historical Ghidra scalar and guest32 aliases (syntax only).
 * Guest storage, x86 calling conventions and native linkage unverified. */
#include "bf_ghidra_types.h"
#include <limits.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#if defined(__SSE__) || defined(__x86_64__)
#include <xmmintrin.h>
#include <emmintrin.h>
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern void FUN_0001d320(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern void FUN_00038940(void);

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

// Brute Force: 0x0001b910 | Ghidra label FUN_0001b910
// Ghidra function-body SHA-256: AB0F0A91B60C0EE7DE5B77E6F74EF8A663772108F99E42374F8BAF7F53C3354B
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Function index 92; entry 0x0001b910.
// Recorded body SHA256:
// AB0F0A91B60C0EE7DE5B77E6F74EF8A663772108F99E42374F8BAF7F53C3354B
//
// TODO: Requires <cstdint> and <bit>, and C++20 arithmetic signed right shift.
// TODO: Confirm the ABI. Parameters below explicitly model incoming ECX/EDX;
//       the pseudocode does not establish original source-level parameters.
// TODO: Supply declarations for the referenced external functions and label.
// TODO: Supply unaff_FS_OFFSET as the actual FS-relative 32-bit slot binding;
//       its segment offset is not established by the supplied pseudocode.
// TODO: Confirm exception-registration layout and LAB_00307970 behavior.
//       This explicit record does not reconstruct compiler-generated unwinding.

void __fastcall /* TODO: The unaff_FS_OFFSET parameter(s) explicitly MODEL incoming register/FS or post-call values.
   They are NOT established original stack parameters or ABI declarations. */
FUN_0001b910(uint32_t in_ECX, uint32_t in_EDX, uint32_t * unaff_FS_OFFSET)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(int) == 4, "Requires 32-bit int.");
#endif

    uint32_t uVar1;
    int32_t iVar2;

    // Three consecutive 4-byte fields model the displayed stack record.
    struct
    {
        uint32_t local_10;
        uint32_t puStack_c;
        uint32_t local_8;
    } frame;

    frame.local_8 = 0xffffffffu;
    frame.puStack_c =
        ((uint32_t)(((uintptr_t)(&LAB_00307970))));
    frame.local_10 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET =
        ((uint32_t)(((uintptr_t)(&frame.local_10))));

    if (in_EDX < 0x04000000u)
    {
        // Object field at byte offset +4, interpreted as a signed 32-bit value.
        if (*((int32_t*)(in_ECX + 0x04u)) == 0)
        {
            uVar1 = 0;
        }
        else
        {
            // Fields at byte offsets +0x0c and +4 are signed in the evidence.
            // Unsigned subtraction preserves the 32-bit x86 result bits;
            // reinterpret those bits before the signed arithmetic shift by 6.
            const int32_t difference = BF_BITS_TO_I32(((uint32_t)(*((int32_t*)(in_ECX + 0x0cu)))) -
                ((uint32_t)(*((int32_t*)(in_ECX + 0x04u)))));

            uVar1 = ((uint32_t)(difference >> 6));
        }

        if (uVar1 < in_EDX)
        {
            // TODO: External call ABI and any implicit arguments are unknown.
            iVar2 = FUN_002ea01d();
            frame.local_8 = 0;
            FUN_0001d320(in_ECX);
            frame.local_8 = 0xffffffffu;

            if (*((int32_t*)(in_ECX + 0x04u)) == 0)
            {
                // Unsigned 32-bit multiplication/addition as in the evidence.
                *((uint32_t*)(in_ECX + 0x0cu)) =
                    in_EDX * 0x40u + ((uint32_t)(iVar2));

                // Four-byte stores at object byte offsets +8 and +4.
                *((int32_t*)(in_ECX + 0x08u)) = iVar2;
                *((int32_t*)(in_ECX + 0x04u)) = iVar2;

                *unaff_FS_OFFSET = frame.local_10;
                return;
            }

            // TODO: Ghidra marks this subroutine as non-returning. Confirm that
            // property and its ABI; the apparent fallthrough is unverified.
            thunk_FUN_00237ec0();
        }
    }
    else
    {
        FUN_00038940();
    }

    *unaff_FS_OFFSET = frame.local_10;
    return;
}
