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
extern void FUN_002634a0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
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

// Brute Force: 0x0001b7a0 | Ghidra label FUN_0001b7a0
// Ghidra function-body SHA-256: 9148CE791C180F1D7A41BF51D157F5A1DFD97911992563280C160D668BCCBCF1
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Function index: 90; entry: 0x0001b7a0.
// Recorded body SHA256:
// 9148CE791C180F1D7A41BF51D157F5A1DFD97911992563280C160D668BCCBCF1
//
// TODO: Requires <cstdint> and declarations for the external symbols below.
// The parameters expose incoming machine state for this draft only.
// Ghidra reports void FUN_0001b7a0(void); the actual calling convention,
// incoming ECX/EDX contract, and FS-relative slot remain unresolved.
// TODO: Verify exception-handler layout and unwind behavior against the binary.
void FUN_0001b7a0(
    uint32_t in_ECX,
    int32_t in_EDX,
    uint32_t* unaff_FS_OFFSET)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(int32_t) == 4, "Requires 32-bit integers.");
#endif

    int32_t iVar1;
    uint32_t uVar2;
    int32_t iVar3;

    // Consecutive four-byte fields reflect the reported stack offsets.
    // Volatile retains the exception-state stores shown in the evidence.
    struct ExceptionFrameDraft
    {
        uint32_t local_10;
        uint8_t* puStack_c;
        uint32_t local_8;
    };
    volatile struct ExceptionFrameDraft frame;

    frame.local_8 = 0xffffffffu;
    // TODO: LAB_00307980 is an unresolved handler label, not a known data object.
    frame.puStack_c = ((uint8_t*)(&LAB_00307980));
    frame.local_10 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET =
        ((uint32_t)(&frame.local_10));

    if (in_ECX < 0x0ccccccdu)
    {
        iVar3 = 0;

        // +4, +8, and +0xc are byte offsets from the incoming EDX value.
        // TODO: Verify machine-level overflow behavior for the signed address
        // arithmetic and signed subtractions; C++ signed overflow is undefined.
        if (*(int32_t*)(in_EDX + 4) == 0)
        {
            uVar2 = 0;
        }
        else
        {
            // Signed subtraction/division, then conversion to unsigned.
            uVar2 = (*(int32_t*)(in_EDX + 0xc) -
                     *(int32_t*)(in_EDX + 4)) / 0x14;
        }

        if (uVar2 < in_ECX)
        {
            // TODO: External prototypes and implicit register/stack arguments
            // are unresolved; preserve the calls as reported.
            iVar1 = FUN_002ea01d();
            frame.local_8 = 0;
            FUN_002634a0(in_EDX);
            frame.local_8 = 0xffffffffu;

            if (*(int32_t*)(in_EDX + 4) != 0)
            {
                iVar3 = (*(int32_t*)(in_EDX + 8) -
                         *(int32_t*)(in_EDX + 4)) / 0x14;
            }

            if (*(int32_t*)(in_EDX + 4) != 0)
            {
                // TODO: Ghidra warns that this subroutine does not return.
                // Verify that classification and its implicit arguments.
                // The following stores are unreachable on this branch if
                // the warning is correct; no replacement flow is inferred.
                thunk_FUN_00237ec0();
            }

            // Preserve unsigned arithmetic in the first store and signed
            // arithmetic in the second; 0x14 is the evidenced stride.
            *(uint32_t*)(in_EDX + 0xc) = in_ECX * 0x14 + iVar1;
            *(int32_t*)(in_EDX + 8) = iVar1 + iVar3 * 0x14;
            *(int32_t*)(in_EDX + 4) = iVar1;

            *unaff_FS_OFFSET = frame.local_10;
            return;
        }
    }
    else
    {
        // TODO: External behavior and calling convention are unresolved.
        FUN_00038940();
    }

    *unaff_FS_OFFSET = frame.local_10;
    return;
}
