/* The original 32-bit x86 ABI is not established by this C11 translation. */
#include <stdint.h>
#include "bf_external_symbols.h"
/* Restore Ghidra 32-bit pseudotypes for this historical C++ draft.
 * Syntax alias only: no Xbox ABI, address, or class layout is inferred. */
#include "bf_ghidra_types.h"
#include <limits.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#if defined(__SSE__) || defined(__x86_64__)
#include <xmmintrin.h>
#include <emmintrin.h>
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern void FUN_0014f7a0(void);
extern uint FUN_0015a0d0(int *param_1);
extern void FUN_00039f00(int param_1);
extern void FUN_00055b50(void);
extern void FUN_00015fe0(void);
extern void FUN_0003a4a0(void);
extern undefined4 FUN_0022da80(void);
extern undefined4 FUN_0022b580(void);
extern int FUN_0014ce90(int param_1,undefined1 *param_2,undefined1 *param_3);
extern void FUN_0008f6e0(std::uint32_t guest_edx);
extern int FUN_0004d630(float *param_1);
extern void FUN_0005e8b0(int *param_1,char param_2);

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

// Brute Force: 0x00017b60 | Ghidra label FUN_00017b60
// Ghidra function-body SHA-256: 04F7A26D35078CC9748101932148C14F20680412009400231903A64602E97D5E
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Function index 57; entry 0x00017b60.
// Unverified source reconstruction from the supplied Ghidra pseudocode.
//
// TODO: Requires <cstdint>, declarations for the referenced FUN_* functions,
// and declarations/types for DAT_00414b74 and PTR_LAB_003a4028.
// TODO: Resolve the function ABI and all external/indirect-call signatures.
// Indirect-call types below describe only the visible arguments and results;
// implicit register arguments, including a possible object pointer, are unknown.
// No implicit arguments or calling conventions have been invented.
void FUN_00017b60(int32_t* param_1, int32_t param_2)
{
    typedef int32_t i32;
    typedef uint32_t u32;
    typedef uint8_t u8;

    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(i32) == 4, "Requires 4-byte integer elements.");
#endif

    // All integer-pointer indices below are measured in 4-byte elements.
    // Raw address additions and vtable offsets are measured in bytes.
    //
    // TODO: This models the apparent adjacency of stack slots -0x8 and -0x4.
    // Their actual roles and the validity of the final pointer-selection flow
    // require assembly review. The supplied flow can select a null pointer.
    i32 stack_slots_8_4[2];
    i32 *local_8 = &(stack_slots_8_4[0]);
    i32 *iStack_4 = &(stack_slots_8_4[1]);

    char cVar1;
    i32* piVar2;
    i32* piVar3;
    i32 iVar4;
    i32* piVar5;
    i32 iVar6;
    u32 uVar7;
    u8 bVar8;
    u32 uVar9;
    u32 uVar10;
    u32 uStack_c;

    (*local_8) = 0;

    piVar2 = (*((i32* (**)())(((u32)(*param_1)) + 0x24u)))();

    // TODO: FUN_000120f0's actual return type is unknown; its result is used
    // as a 32-bit address here and as an integer address later.
    piVar3 = (i32*)FUN_000120f0();

    uVar9 = ((u32)(piVar3[0x94]));
    piVar3[0x94] = ((i32)(uVar9 | 1u));
    piVar3[0x94] = ((i32)(uVar9 | 5u));

    if (param_2 == 0) {
        (*((void (**)())(((u32)(*piVar3)) + 0x40u)))();
        FUN_0014f7a0();
    }
    else if ((*((u8*)(piVar3 + 0x94)) & 1u) != 0) {
        piVar3[0x93] = param_2;
    }

    piVar3[0x94] = ((i32)(((u32)(piVar3[0x94])) | 1u));
    param_1[0x7b] = piVar3[0x93];

    *((u8*)(param_1 + 0x87)) =
        ((u8)(*((u8*)(param_1 + 0x87)) & 0xfeu));
    *((u8*)(param_1 + 0x87)) =
        ((u8)(*((u8*)(param_1 + 0x87)) | 2u));

    (*((void (**)())(((u32)(*piVar2)) + 0x6cu)))();

    FUN_00018390(param_1);

    cVar1 = FUN_0015a0d0(param_1 + 0x240, &uStack_c);
    if (cVar1 != '\0') {
        iVar4 = (*((i32 (**)(u32))(((u32)(*piVar3)) + 0x34u)))(uStack_c);
        param_1[0x23f] = iVar4;
    }

    if ((((u32)(param_1[0xf1])) & 0x100u) == 0) {
        if (piVar3[0x73] != 0) {
            FUN_0001bb30();
            FUN_0001c3b0(&PTR_LAB_003a4028, 0, 0);
            FUN_00018390(param_1);
        }
    }
    else {
        FUN_000120f0();
        FUN_0001bb30();
        FUN_0001c3b0(&PTR_LAB_003a4028, 0, 0);
        FUN_00018390(param_1);
        FUN_00018390(param_1);
        FUN_00018390(param_1);
        FUN_00018390(param_1);
        FUN_00018390(param_1);

        param_1[0x16] = 1;
        param_1[0x85] = 0x7f7fffff;
        param_1[0x86] = 0x7f7fffff;
        *((u8*)(param_1 + 0x227)) = 1;
    }

    FUN_00039f00(param_1);
    FUN_00055b50();
    FUN_00015fe0();

    // TODO: DAT_00414b74 is treated as a 32-bit base address, as supplied.
    piVar2 = *((i32**)((u32)DAT_00414b74 + 8u));
    piVar5 = *((i32**)((u32)DAT_00414b74 + 4u));

    if (piVar5 != piVar2) {
        do {
            if (*piVar5 == *((i32*)(((u32)(piVar3[3])) + 0x1a4u))) {
                break;
            }

            piVar5 = piVar5 + 6; // Advance by 6 integers: 0x18 bytes.
        } while (piVar5 != piVar2);

        if ((((piVar5 != piVar2) && (piVar5 != NULL)) &&
             (piVar2 = ((i32*)(((u32)(piVar5[2])))), piVar2 != NULL)) &&
            // Preserve the 32-bit subtraction followed by signed shift.
            // Unsigned subtraction models wraparound before conversion.
            ((((i32)(((u32)(piVar5[3])) -
                  ((u32)(piVar2)))) >> 2) != 0)) {
            iVar4 = *piVar2;

            for (uVar9 = 0;
                 (iVar6 = *((i32*)(((u32)(iVar4)) + 0x74u)),
                  iVar6 != 0 &&
                  uVar9 < ((u32)(((i32)(((u32)(*((i32*)(((u32)(iVar4)) + 0x78u)))) -
                          ((u32)(iVar6)))) / 0xc)));
                 uVar9 = uVar9 + 1u) {
                // TODO: No explicit arguments appear in the pseudocode.
                FUN_0003a4a0();
            }
        }
    }

    if (((((u32)(param_1[0xf1])) & 0x100u) == 0) &&
        (iVar4 = (i32)FUN_000120f0(), iVar4 != 0)) {
        iVar6 = *((i32*)(((u32)(iVar4)) + 0x2e8u));

        // Preserve the supplied single load at iVar6 + 0x144 before
        // accessing the indirect-call slot at byte offset 0x20.
        cVar1 = (*((char (**)())(((u32)(*((i32*)(((u32)(iVar6)) + 0x144u)))) + 0x20u)))();

        if ((cVar1 != '\0') &&
            (((iVar6 = *((i32*)(((u32)(iVar6)) + 0x164u)),
               iVar6 != 0 &&
               (*((i32*)(((u32)(*((i32*)(((u32)(iVar6)) + 0xcu)))) + 4u)) == 0x14)) &&
              (iVar6 != 0)))) {
            piVar2 = (i32*)FUN_0022da80();

            if ((piVar2 != NULL) &&
                (cVar1 = (*((char (**)())(((u32)(*piVar2)) + 0x20u)))(),
                 cVar1 == '\0')) {
                uVar7 = *((u32*)(((u32)(*((i32*)(((u32)(iVar6)) + 0x228u)))) + 0xe4u));

                uVar10 = 0;
                FUN_0022b580(uVar7, 0);
                FUN_0014ce90(
                    *((u32*)(((u32)(iVar4)) + 0x2e8u)),
                    uVar7,
                    uVar10);
            }

            FUN_00017f80();
        }
    }

    if (param_1[2] == 0) {
        piVar2 = param_1 + 3;
        bVar8 = ((u8)((*local_8)));
    }
    else {
        bVar8 = 1;
        (*iStack_4) = 0;
        piVar2 = &(*local_8);
    }

    // TODO: In the second branch, this reads the modeled (*iStack_4) slot,
    // which was just set to zero, producing a null piVar2. Preserve this
    // suspicious flow pending instruction-level verification.
    piVar2 = ((i32*)(((u32)(piVar2[1]))));

    if (((bVar8 & 1u) != 0) && ((*iStack_4) != 0)) {
        FUN_0008f6e0();
    }

    iVar4 = param_1[0x6b];

    if ((*((u8*)(((u32)(iVar4)) + 0x10u)) & 1u) != 0) {
        // TODO: The supplied flow does not establish that piVar2 is non-null.
        iVar6 = (*((i32 (**)())(((u32)(*piVar2)) + 0x40u)))();

        // TODO: Preserve the address bits passed by the original ABI;
        // FUN_0004d630's parameter and return types remain unresolved.
        uVar7 = FUN_0004d630(((i32)(((u32)(iVar6)) + 0x24u)));

        *((u32*)(((u32)(iVar4)) + 4u)) = uVar7;
    }

    if (piVar3[0x167] != 0) {
        FUN_0005e8b0(piVar3, 1);
    }

    return;
}
