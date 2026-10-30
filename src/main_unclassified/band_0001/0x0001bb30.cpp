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
extern void FUN_0001d350(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern void FUN_0001c460(void);
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

// Brute Force: 0x0001bb30 | Ghidra label FUN_0001bb30
// Ghidra function-body SHA-256: 2AE314284A10EA75B0669649D1067FE501AAC897DFA2D3D04339729FBF15B14C
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// TODO: Requires <cstdint> and declarations for the external symbols below.
// TODO: The parameters expose Ghidra's incoming ECX, EDX, and FS-relative
// location; they do not establish the original function's calling convention.
// TODO: Confirm the FS location, exception-registration layout, handler symbol,
// and unwind behavior. Ordinary C++ does not reproduce the original SEH ABI.
void FUN_0001bb30(
    uint32_t in_ECX,
    int32_t in_EDX,
    uint32_t* unaff_FS_OFFSET)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    int32_t iVar1;
    uint32_t uVar2;

    // Candidate 12-byte registration record inferred from the local offsets.
    // TODO: Verify its actual placement on the stack and compiler treatment.
    struct
    {
        uint32_t local_10;  // +0: previous FS-linked value.
        uint32_t puStack_c; // +4: address represented as a 32-bit value.
        uint32_t local_8;   // +8: observed state value.
    } frame;

    frame.local_8 = 0xffffffffu;
    // TODO: LAB_00307950 is an unresolved code-label/handler address.
    frame.puStack_c = ((uintptr_t)(&LAB_00307950));
    frame.local_10 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = ((uintptr_t)(&frame.local_10));

    // Interpret EDX's bits as a 32-bit address. Offsets below are byte offsets.
    const uint32_t base = ((uint32_t)(in_EDX));

    if (in_ECX < 0x15555556u)
    {
        if (*((int32_t*)(base + 4u)) == 0)
        {
            uVar2 = 0u;
        }
        else
        {
            // Preserve signed 32-bit subtraction and signed division by 12,
            // followed by conversion to unsigned 32-bit.
            // TODO: Confirm overflow behavior; signed subtraction overflow is
            // undefined in C++, unlike the underlying x86 instruction.
            uVar2 = ((uint32_t)((*((int32_t*)(base + 0xcu)) -
                 *((int32_t*)(base + 4u))) / 0xc));
        }

        if (uVar2 < in_ECX)
        {
            // TODO: External prototype, ABI, and implicit inputs are unknown.
            iVar1 = FUN_002ea01d();
            frame.local_8 = 0u;

            // TODO: Confirm this external function's prototype and ABI.
            FUN_0001d350(in_EDX);
            frame.local_8 = 0xffffffffu;

            if (*((int32_t*)(base + 4u)) == 0)
            {
                // ECX makes this multiplication/addition unsigned 32-bit;
                // iVar1 is converted to unsigned before addition.
                *((uint32_t*)(base + 0xcu)) =
                    in_ECX * 0xcu + ((uint32_t)(iVar1));
                *((int32_t*)(base + 8u)) = iVar1;
                *((int32_t*)(base + 4u)) = iVar1;

                *unaff_FS_OFFSET = frame.local_10;
                return;
            }

            // TODO: External prototype, ABI, and implicit inputs are unknown.
            FUN_0001c460();

            // TODO: Ghidra marks this call as non-returning. Verify that claim
            // and its unwind effects; no synthetic cleanup is added here.
            thunk_FUN_00237ec0();
        }
    }
    else
    {
        // TODO: External prototype, ABI, and implicit inputs are unknown.
        FUN_00038940();
    }

    *unaff_FS_OFFSET = frame.local_10;
    return;
}
