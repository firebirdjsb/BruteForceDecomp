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
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern float10 FUN_0001fb30(float param_1);
extern float10 FUN_00019a20(float param_1, float param_2);
extern float10 FUN_0011e5e0(float param_1);

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

// Brute Force: 0x00019ed0 | Ghidra label FUN_00019ed0
// Ghidra function-body SHA-256: 1BDC4AF673F18A1880F7AD02091F6814471583EC6EDE44E6D8CE67A7DDA0254D
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Function index 74; entry 0x00019ed0.
// Unverified source reconstruction, not recovered original code.
//
// TODO: Supply <cstdint> and the missing external declarations.
// TODO: float10 must represent the decompiler's x87 extended-precision
//       intermediate type; do not assume that C++ long double matches it.
// TODO: Establish the original function ABI and external function signatures.
// TODO: Define FUN_00019ed0_slot30_type and FUN_00019ed0_slot34_type as
//       function types with the verified signatures and calling conventions.
// TODO: Resolve fpatan operand ordering and the exact ABS/SQRT operations.
//       Their evidence-level names are retained without implementations.
/* TODO: Both slot ABIs are unresolved; prototypes model visible operands only. */
typedef void FUN_00019ed0_slot30_type(void *);
typedef uint32_t FUN_00019ed0_slot34_type(float *, float *);
uint32_t FUN_00019ed0(float* param_1, float* param_2)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(float) == 4, "Requires 32-bit float storage.");
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(int32_t) == 4, "Requires 32-bit signed integers.");
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(uint32_t) == 4, "Requires 32-bit raw words.");
#endif

    int32_t iVar1;
    uint32_t uVar2;

    // TODO: These are unresolved decompiler register/stack artifacts.
    // The pseudocode provides no initial value for unaff_retaddr and does not
    // express how FUN_00019a20 produces extraout_ECX or extraout_EDX.
    // Ordinary C++ calls do not populate these locals automatically.
    // Their uses below are indeterminate until the original ABI is resolved.
    // Do not infer that unaff_retaddr is a valid object base.
    int32_t extraout_ECX;
    uint32_t extraout_EDX;
    int32_t unaff_retaddr;

    float10 fVar3;
    float10 fVar4;
    float10 fVar5;
    float* pfVar6;
    float fVar7;

    // TODO: Recover the actual stack layout and initialization.
    // These names retain the decompiler's stack-offset labels. Separate C++
    // locals do not preserve that layout. The call receiving local_18 may
    // involve a larger output region or hidden ABI arguments; neither is
    // established by this pseudocode. Several reads remain uninitialized.
    float fStack_1c;
    uint8_t local_18[4];
    float fStack_14;
    float fStack_10;
    float local_c;
    float fStack_8;
    float local_4;

    iVar1 = FUN_000120f0();

    // Float indices 0x122, 0x123, 0x124 correspond to byte offsets
    // 0x488, 0x48c, 0x490 under the required four-byte float layout.
    if (param_1[0x124] * param_1[0x124] +
        param_1[0x123] * param_1[0x123] +
        param_1[0x122] * param_1[0x122] <= 1e-16)
    {
        local_4 = param_2[2]; // Byte offset 0x08.
        local_c = *param_2;   // Byte offset 0x00.
    }
    else
    {
        local_4 = param_1[0x124];
        local_c = param_1[0x122];
    }

    // Read a 32-bit table address at byte offset 0x1b4, then call the
    // function pointer at table byte offset 0x30.
    // TODO: Any implicit receiver or hidden output argument is unresolved.
    (**((FUN_00019ed0_slot30_type**)(*((int32_t*)(iVar1 + 0x1b4)) + 0x30)))(local_18);

    // param_1[0], [1], [2] occupy byte offsets 0x00, 0x04, 0x08.
    if (1e-16 <= param_1[2] * param_1[2] +
                 *param_1 * *param_1 +
                 param_1[1] * param_1[1])
    {
        fVar4 = ((float10)(fpatan(((float10)(fStack_10)),
                   ((float10)(fStack_8)))));

        if (fVar4 <= ((float10)(3.1415927)))
        {
            if (fVar4 < ((float10)(-3.1415927)))
            {
                fVar4 = fVar4 + ((float10)(6.2831855));
            }
        }
        else
        {
            fVar4 = fVar4 - ((float10)(6.2831855));
        }

        fVar5 = ((float10)(fpatan(((float10)(fStack_1c)),
                   ((float10)(fStack_14)))));

        if (fVar5 <= ((float10)(3.1415927)))
        {
            if (fVar5 < ((float10)(-3.1415927)))
            {
                fVar5 = fVar5 + ((float10)(6.2831855));
            }
        }
        else
        {
            fVar5 = fVar5 - ((float10)(6.2831855));
        }

        if (0.017453292 < ABS(((float)(fVar4 - fVar5))))
        {
            fVar4 = ((float10)(FUN_0001fb30(((float)(fVar4 - fVar5)))));

            // Read a 32-bit address at byte offset 0x0c, then a float at
            // its byte offset 0x2d0; multiply by the float at iVar1 + 0x7ec.
            fVar5 =
                ((float10)(*((float*)(*((int32_t*)(iVar1 + 0x0c)) + 0x2d0)))) *
                ((float10)(*((float*)(iVar1 + 0x7ec))));

            // Byte offset 0x440 is retained against the unresolved base.
            fVar3 = fVar5 * ((float10)(*((float*)(unaff_retaddr + 0x440))));

            // Preserve the decompiled comparison of two Boolean results.
            // TODO: Verify the original floating-point comparison flags;
            // this unusual expression is not established as intended logic.
            if ((fVar3 < ABS(fVar4)) == (fVar3 == ABS(fVar4)))
            {
                fVar7 = ((float)((fVar4 / ((float10)(*((float*)(unaff_retaddr + 0x440))))) /
                    fVar5));

                // Four-byte float write at byte offset 0x1c8.
                *((float*)(unaff_retaddr + 0x1c8)) =
                    fVar7 * 0.5;
            }
            else if (((float10)(0.0)) <= fVar4)
            {
                fVar7 = 1.0;
            }
            else
            {
                fVar7 = -1.0;
            }

            // Preserve the argument at byte offset 0x1c8 as raw 32-bit data.
            fVar4 = ((float10)(FUN_00019a20(
                    fVar7,
                    *((uint32_t*)(unaff_retaddr + 0x1c8)))));

            // TODO: extraout_ECX is an unresolved output register from
            // the preceding call, not an initialized C++ local.
            *((float*)(extraout_ECX + 0x1c8)) =
                ((float)(fVar4));

            // TODO: extraout_EDX likewise requires original ABI evidence.
            fVar4 = ((float10)(FUN_00019a70(
                    SQRT(param_1[2] * param_1[2] +
                         *param_1 * *param_1 +
                         param_1[1] * param_1[1]),
                    extraout_EDX,
                    *((uint32_t*)(unaff_retaddr + 0x1c8)))));

            FUN_0011e5e0(((float)(fVar4)));

            *((float*)(unaff_retaddr + 0x1c8)) =
                ((float)(fVar4));

            goto LAB_0001a12b;
        }
    }

    // Four-byte raw zero write at byte offset 0x1c8.
    *((uint32_t*)(unaff_retaddr + 0x1c8)) = 0;

LAB_0001a12b:
    // Retain signed 32-bit reads, subtraction, and division by 0x18.
    // TODO: Verify signed-overflow behavior against the x86 instructions.
    if (*((int32_t*)(unaff_retaddr + 0x688)) != 0)
    {
        if ((*((int32_t*)(unaff_retaddr + 0x68c)) -
             *((int32_t*)(unaff_retaddr + 0x688))) /
                0x18 != 0)
        {
            fVar7 = param_1[2] * param_1[2] +
                    *param_1 * *param_1 +
                    param_1[1] * param_1[1];

            if (0.0625 <= fVar7)
            {
                fStack_8 = -SQRT(fVar7);
            }
            else
            {
                fStack_8 = 0.0;
            }

            // Four-byte raw writes at offsets 0x5ec and 0x5e8,
            // followed by a four-byte float write at offset 0x5f0.
            *((uint32_t*)(iVar1 + 0x5ec)) = 0;
            *((uint32_t*)(iVar1 + 0x5e8)) = 0;
            *((float*)(iVar1 + 0x5f0)) = fStack_8;
            return 1;
        }
    }

    pfVar6 = &fStack_10;

    // Read the table address at byte offset 0x1b4 and call its slot at
    // byte offset 0x34. Preserve the returned raw 32-bit value.
    // TODO: Resolve the signature, implicit receiver, and output extent.
    uVar2 = (**((FUN_00019ed0_slot34_type**)(*((int32_t*)(iVar1 + 0x1b4)) + 0x34)))(
            pfVar6, param_1);

    FUN_00019af0(local_4, uVar2, pfVar6);
    return 1;
}
