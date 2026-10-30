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
extern void FUN_0001fed0(undefined4 *param_1,uint param_2);
extern void FUN_002ea02b(void);
extern void FUN_0001f4f0(int param_1,uint param_2,uint param_3);
extern void FUN_002fe573(undefined4 param_1,undefined4 param_2);
extern void FUN_0001c5d0(void);
extern void FUN_0001c550(void);
extern void FUN_0001c530(void);
extern void FUN_0001c4d0(int param_1);
extern void FUN_0001c570(int param_1);
extern void FUN_0001bd30(uint32_t unaff_ESI);
extern void FUN_0008f6e0(std::uint32_t guest_edx);

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

// Brute Force: 0x0001bd90 | Ghidra label FUN_0001bd90
// Ghidra function-body SHA-256: E4A705F98ADCC82D469E28BEC35D9FBDB3C85E0D2BF93A8AEB7B76DA43A38B14
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x0001bd90; function index: 100.
// TODO: Requires <cstdint> and <cstddef>, a 32-bit x86 target, and verified
// declarations for every referenced external function and symbol.
// TODO: Recover the calling convention and implicit register arguments.
// Calls below retain only the arguments visible in the supplied pseudocode.
// param_2 is an uninterpreted 32-bit value, unused in the visible pseudocode.
//
// TODO: Ghidra removed unreachable blocks at:
// 0x0001bed5, 0x0001bee7, 0x0001bef4, 0x0001bef7, 0x0001bee3,
// 0x0001bf04, 0x0001bf15, 0x0001bf20, 0x0001bf1c, 0x0001bf10,
// 0x0001bf23. Their contents and the validity of their removal are unknown.

void FUN_0001bd90(
    int32_t param_1,
    uint32_t param_2,
    int32_t* param_3)
{
    typedef int32_t i32;
    typedef uint32_t u32;
    typedef uint8_t u8;

    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(i32) == 4, "Requires 32-bit integer words.");
#endif

    // TODO: These field positions follow Ghidra's stack-local names only.
    // This aggregate is a draft representation of the local byte region,
    // not a recovered source type. Padding contents remain uninitialized.
    // Recover actual object types, lifetimes, and any implicit this pointers.
    struct LocalRegion
    {
        u8 local_44[4];             // Offset 0x00.
        u8 local_40;                // Offset 0x04.
        u8 unknown_3f_through_31[15];
        u32 local_30;               // Offset 0x14.
        u32 local_2c;               // Offset 0x18.
        void** local_28[4];         // Offset 0x1c; four 4-byte pointer slots.
        u8 local_18;                // Offset 0x2c.
        u8 unknown_17_through_09[15];
        u32 local_8;                // Offset 0x3c.
        u32 local_4;                // Offset 0x40.
    } local;

    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(offsetof(struct LocalRegion, local_30) == 0x14);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(offsetof(struct LocalRegion, local_28) == 0x1c);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(offsetof(struct LocalRegion, local_18) == 0x2c);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(offsetof(struct LocalRegion, local_8) == 0x3c);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(struct LocalRegion) == 0x44);
#endif

    char* pcVar1;
    char* pcVar2;
    i32* piVar3;
    u32 uVar4;
    i32* piVar5;
    i32* piVar6;
    bool bVar7;

    // Pointer/integer casts below intentionally assume 32-bit addresses.
    // Word indexing advances by four bytes. Index 0x2a addresses offset 0xa8;
    // byte accesses at 0xa8 and 0xa9 have distinct, unknown meanings.
    // TODO: Verify the target's plain-char behavior, including narrowing
    // conversions from entire 32-bit words to char.

    if (*(char*)((i32)param_3 + 0xa9) != '\0')
    {
        local.local_2c = 0xf;
        local.local_30 = 0;
        local.local_40 = 0;

        // TODO: Recover the declaration and extent of DAT_0040e7d8.
        pcVar1 = (char*)&DAT_0040e7d8;
        do
        {
            pcVar2 = pcVar1;
            pcVar1 = pcVar2 + 1;
        } while (*pcVar2 != '\0');

        // Preserve subtraction of the literal address 0x0040e7d8.
        // TODO: Ghidra renders this as pointer-minus-integer; establish the
        // actual argument type and relocation behavior from instructions.
        FUN_0001fed0(&DAT_0040e7d8, pcVar2 + -0x40e7d8);
        FUN_002ea02b();

        // TODO: Recover the type of PTR_FUN_003a401c and its pointed-to data.
        local.local_28[0] = (void**)&PTR_FUN_003a401c;
        local.local_4 = 0xf;
        local.local_8 = 0;
        local.local_18 = 0;

        FUN_0001f4f0(local.local_44, 0, 0xffffffff);

        local.local_28[0] = (void**)&PTR_FUN_003a401c;

        // TODO: Ghidra marks this call as non-returning. Verify that property,
        // its ABI, and the type of LAB_003a55bc. No recovery path is inferred.
        FUN_002fe573(local.local_28, &LAB_003a55bc);
    }

    FUN_0001c5d0();

    piVar5 = (i32*)*param_3;
    if ((*(char*)((i32)piVar5 + 0xa9) != '\0') ||
        (*(char*)(param_3[2] + 0xa9) == '\0'))
    {
        piVar5 = (i32*)param_3[2];
    }

    piVar6 = (i32*)param_3[1];

    if (*(char*)((i32)piVar5 + 0xa9) == '\0')
    {
        piVar5[1] = (i32)piVar6;
    }

    // param_1 + 4 contains a 32-bit address in the supplied pseudocode.
    // Accesses through that address use byte offsets 0, 4, and 8.
    if (*(i32**)(*(i32*)(param_1 + 4) + 4) == param_3)
    {
        *(i32**)(*(i32*)(param_1 + 4) + 4) = piVar5;
    }
    else if ((i32*)*piVar6 == param_3)
    {
        *piVar6 = (i32)piVar5;
    }
    else
    {
        piVar6[2] = (i32)piVar5;
    }

    if ((i32*)**(u32**)(param_1 + 4) == param_3)
    {
        piVar3 = piVar6;
        if (*(char*)((i32)piVar5 + 0xa9) == '\0')
        {
            piVar3 = (i32*)FUN_0001c550();
        }

        **(u32**)(param_1 + 4) = (u32)piVar3;
    }

    if (*(i32**)(*(i32*)(param_1 + 4) + 8) == param_3)
    {
        if (*(char*)((i32)piVar5 + 0xa9) == '\0')
        {
            uVar4 = FUN_0001c530();
            *(u32*)(*(i32*)(param_1 + 4) + 8) = uVar4;
        }
        else
        {
            *(i32**)(*(i32*)(param_1 + 4) + 8) = piVar6;
        }
    }

    if ((char)param_3[0x2a] == '\x01')
    {
        if (piVar5 != *(i32**)(*(i32*)(param_1 + 4) + 4))
        {
            do
            {
                if ((char)piVar5[0x2a] != '\x01')
                {
                    break;
                }

                piVar3 = (i32*)*piVar6;
                if (piVar5 == piVar3)
                {
                    piVar3 = (i32*)piVar6[2];
                    if ((char)piVar3[0x2a] == '\0')
                    {
                        *(u8*)(piVar3 + 0x2a) = 1;
                        *(u8*)(piVar6 + 0x2a) = 0;
                        FUN_0001c4d0(param_1);
                        piVar3 = (i32*)piVar6[2];
                    }

                    if (*(char*)((i32)piVar3 + 0xa9) == '\0')
                    {
                        if ((*(char*)(*piVar3 + 0xa8) != '\x01') ||
                            (*(char*)(piVar3[2] + 0xa8) != '\x01'))
                        {
                            if (*(char*)(piVar3[2] + 0xa8) == '\x01')
                            {
                                *(u8*)(*piVar3 + 0xa8) = 1;
                                *(u8*)(piVar3 + 0x2a) = 0;
                                FUN_0001c570(param_1);
                                piVar3 = (i32*)piVar6[2];
                            }

                            *(char*)(piVar3 + 0x2a) =
                                (char)piVar6[0x2a];
                            *(u8*)(piVar6 + 0x2a) = 1;
                            *(u8*)(piVar3[2] + 0xa8) = 1;
                            FUN_0001c4d0(param_1);
                            break;
                        }

                    LAB_0001c05d:
                        *(u8*)(piVar3 + 0x2a) = 0;
                    }
                }
                else
                {
                    if ((char)piVar3[0x2a] == '\0')
                    {
                        *(u8*)(piVar3 + 0x2a) = 1;
                        *(u8*)(piVar6 + 0x2a) = 0;
                        FUN_0001c570(param_1);
                        piVar3 = (i32*)*piVar6;
                    }

                    if (*(char*)((i32)piVar3 + 0xa9) == '\0')
                    {
                        if ((*(char*)(piVar3[2] + 0xa8) == '\x01') &&
                            (*(char*)(*piVar3 + 0xa8) == '\x01'))
                        {
                            goto LAB_0001c05d;
                        }

                        if (*(char*)(*piVar3 + 0xa8) == '\x01')
                        {
                            *(u8*)(piVar3[2] + 0xa8) = 1;
                            *(u8*)(piVar3 + 0x2a) = 0;
                            FUN_0001c4d0(param_1);
                            piVar3 = (i32*)*piVar6;
                        }

                        *(char*)(piVar3 + 0x2a) =
                            (char)piVar6[0x2a];
                        *(u8*)(piVar6 + 0x2a) = 1;
                        *(u8*)(*piVar3 + 0xa8) = 1;
                        FUN_0001c570(param_1);
                        break;
                    }
                }

                bVar7 =
                    piVar6 != *(i32**)(*(i32*)(param_1 + 4) + 4);
                piVar5 = piVar6;
                piVar6 = (i32*)piVar6[1];
            } while (bVar7);
        }

        *(u8*)(piVar5 + 0x2a) = 1;
    }

    FUN_0001bd30();
    FUN_0001bd30();

    if (param_3[4] != 0)
    {
        FUN_0008f6e0();
    }

    // TODO: Ghidra marks this call as non-returning. Verify its behavior
    // and ABI; no additional cleanup or termination operation is inferred.
    thunk_FUN_00237ec0(param_3);
}
