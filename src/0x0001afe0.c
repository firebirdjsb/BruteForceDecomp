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

// Brute Force: 0x0001afe0 | Ghidra label FUN_0001afe0
// Ghidra function-body SHA-256: DE9E1F6ADADEA17BE167A4AD3D89B36F5C91BDF39B2CE438124480326D2ED017
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Function index: 85; entry: 0x0001afe0.
// Recorded body SHA256:
// DE9E1F6ADADEA17BE167A4AD3D89B36F5C91BDF39B2CE438124480326D2ED017
//
// TODO: Requires <cstdint> and declarations for all referenced external functions.
// TODO: The explicit in_ECX parameter represents the incoming ECX register.
//       The original calling convention, receiver handling, and stack layout
//       remain unresolved; this signature is only a source-level draft.
// TODO: External calls may consume implicit register arguments absent from the
//       pseudocode. Their prototypes and calling conventions must be established.
// TODO: UnknownCall preserves the visible call expressions only. Its return type
//       and variadic signature do not establish the original indirect-call ABI.
// All hexadecimal address additions below are byte offsets. Indexing int32_t*
// scales indices by four bytes. uint8_t accesses cover one byte; int32_t,
// uint32_t, and float accesses cover four bytes.
// No additional pointer checks or exception handling are inferred from evidence.
uint32_t FUN_0001afe0(int32_t* in_ECX, float param_1)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(int) == 4, "This draft assumes 32-bit int arithmetic.");
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(float) == 4, "This draft requires 32-bit float.");
#endif

    typedef uint32_t (*UnknownCall)(); /* TODO: unknown ABI and arguments */

    uint8_t bVar1;
    int8_t cVar2;
    int32_t* piVar3;
    int32_t* piVar4;
    uint32_t uVar5;
    int32_t iVar6;
    uint32_t uVar7;
    float* pfVar8;

    // TODO: Ghidra shows no assignment to iStack_34 before its first use.
    // Its definition or recovery is missing. Do not assume it aliases in_ECX.
    // Reading it as written below is undefined behavior in C++; the affected
    // control flow and memory operations cannot yet be treated as executable.
    int32_t iStack_34;

    // The recorded stack offsets imply four consecutive four-byte slots.
    // Use contiguous storage because calls receive the address of uStack_1c.
    uint32_t stackWords[4];
    uint32_t *uStack_1c = &(stackWords[0]);
    uint32_t *uStack_18 = &(stackWords[1]);
    uint32_t *uStack_14 = &(stackWords[2]);
    uint32_t *uStack_10 = &(stackWords[3]);

    // TODO: Resolve the indirect-call receiver/register state.
    (*((UnknownCall*)(*in_ECX + 0x24)))();

    piVar3 = ((int32_t*)(((uintptr_t)(FUN_000120f0()))));

    in_ECX[0xf1] = in_ECX[0xf1] & 0xffff7fff; // Byte offset 0x3c4.
    in_ECX[0x26f] = 0;                       // Byte offset 0x9bc.

    // TODO: Preserve the shown numeric conversion; confirm target behavior for
    // NaN or values outside the representable int32_t range.
    in_ECX[0x110] = ((int32_t)(param_1)); // Byte offset 0x440.

    if ((*((uint8_t*)(piVar3 + 0x1c)) & 1) != 0)
    {
        // piVar3 + 0x1c is byte offset 0x70.
        bVar1 = *((uint8_t*)(piVar3 + 0x20d));
        // piVar3 + 0x20d is byte offset 0x834.

        if ((bVar1 & 0x10) != 0)
        {
            return 1;
        }

        *((uint8_t*)(piVar3 + 0x20d)) = bVar1 | 0x10;

        if ((bVar1 & 0xd) != 0)
        {
            return 1;
        }

        FUN_00129530();
        return 1;
    }

    FUN_00016350(param_1);

    // in_ECX[0x1e5] is the four-byte value at byte offset 0x794.
    if (*((int8_t*)(in_ECX[0x1e5] + 0xd)) != 0)
    {
        piVar3[0x17c] = 0; // Byte offset 0x5f0.
        piVar3[0x17a] = 0; // Byte offset 0x5e8.
        piVar3[0x17b] = 0; // Byte offset 0x5ec.
        return 1;
    }

    if (piVar3[0x93] != 0) // Byte offset 0x24c.
    {
        // Preserve the shown single dereference through the value at offset
        // 0xb0; do not infer an additional vtable or object-pointer dereference.
        (*((UnknownCall*)(in_ECX[0x2c])))(param_1);

        FUN_00047960(param_1);
        FUN_00047ac0(param_1);
        FUN_00047730(param_1);
        FUN_00048080(param_1);
        FUN_00058670(param_1);

        if (((*((uint8_t*)(iStack_34 + 0x13c)) & 1) != 0) &&
            (((*((uint8_t*)(iStack_34 + 0x13c)) >> 1) & 1) != 0))
        {
            *((uint32_t*)(iStack_34 + 0x140)) = 0;
            *((uint32_t*)(iStack_34 + 0x138)) = 0;
            *((uint8_t*)(iStack_34 + 0x13c)) =
                (*((uint8_t*)(iStack_34 + 0x13c)) & 0xfa) | 2;

            if ((*((uint32_t*)(iStack_34 + 0x3c4)) & 4) == 0)
            {
                *((uint32_t*)(iStack_34 + 0x3c4)) =
                    *((uint32_t*)(iStack_34 + 0x3c4)) &
                    0xfffffffd;
            }
        }

        FUN_0001ad50(param_1);
        FUN_0001ab90(iStack_34, 0);
        FUN_0001a910(iStack_34);
        FUN_00041870(iStack_34);
        FUN_00041ff0();
        FUN_000426b0();
        FUN_0001adf0();
        FUN_0001aeb0();

        if (((*((uint32_t*)(iStack_34 + 0x3c4)) & 0x100) != 0) ||
            (piVar4 = ((int32_t*)(((uintptr_t)(FUN_000456c0())))),
             piVar4 == in_ECX))
        {
            FUN_000564c0();
        }

        if (((*((uint32_t*)(iStack_34 + 0x3c4)) & 0x100) != 0) &&
            (in_ECX[0x167] != 0)) // Byte offset 0x59c.
        {
            uVar5 = FUN_000120f0();
            FUN_0005acb0(
                *((uint32_t*)(iStack_34 + 0x1ac)),
                uVar5);
        }

        if ((((*((uint32_t*)(iStack_34 + 0x3c4)) & 0x100) != 0) &&
             (*((int32_t*)(iStack_34 + 0x58)) != 4)) &&
            ((*((uint8_t*)(iStack_34 + 0x470)) & 1) != 0) &&
            (((*((uint8_t*)(iStack_34 + 0x470)) >> 1) & 1) != 0))
        {
            *((uint32_t*)(iStack_34 + 0x474)) = 0;
            *((uint32_t*)(iStack_34 + 0x46c)) = 0;
            *((uint8_t*)(iStack_34 + 0x470)) =
                (*((uint8_t*)(iStack_34 + 0x470)) & 0xfa) | 2;
            *((uint8_t*)(iStack_34 + 0x464)) =
                *((uint8_t*)(iStack_34 + 0x464)) & 0xfe;
        }

        // TODO: Confirm signed storage of the indirect call's address result
        // and the implicit receiver for each call through *piVar3.
        iVar6 = ((int32_t)((*((UnknownCall*)(*piVar3 + 8)))()));

        FUN_000126f0(
            param_1,
            *((uint32_t*)(iVar6 + 0x80)));

        iVar6 = ((int32_t)((*((UnknownCall*)(*piVar3 + 8)))()));

        *((uint32_t*)(iStack_34 + 0xac)) =
            *((uint32_t*)(iVar6 + 0x20));

        FUN_000120f0();
        uVar7 = FUN_0004cb60();

        *((uint32_t*)(iStack_34 + 0x3c4)) =
            *((uint32_t*)(iStack_34 + 0x3c4)) ^
            ((((uVar7 & 0xff) << 10) ^
              *((uint32_t*)(iStack_34 + 0x3c4))) &
             0x400);

        if (((*((int32_t*)(iStack_34 + 0x42c)) == 0) ||
             (cVar2 = FUN_0001bb00(), cVar2 != 0)) &&
            (cVar2 = FUN_0001a4e0(), cVar2 == 0))
        {
            return 1;
        }

        *((uint32_t*)(iStack_34 + 0x1bc)) = 0;
        *((uint32_t*)(iStack_34 + 0x1b8)) = 0;
        *((uint32_t*)(iStack_34 + 0x1b4)) = 0;

        if ((0.0 < *((float*)(iStack_34 + 0x924))) &&
            (param_1 = *((float*)(iStack_34 + 0x924)) - param_1,
             *((float*)(iStack_34 + 0x924)) = param_1,
             param_1 < 0.0))
        {
            *((uint32_t*)(iStack_34 + 0x924)) = 0;
        }

        FUN_0001b750();
        FUN_00047930();
        FUN_000481a0();

        iVar6 = *((int32_t*)(iStack_34 + 0x58));
        (*uStack_14) = 0;
        (*uStack_18) = 0;
        (*uStack_1c) = 0;
        (*uStack_10) = 0;

        if ((iVar6 < 0) || (5 < iVar6))
        {
            if (iVar6 == 6)
            {
                (*uStack_14) = 0;
                (*uStack_18) = 0;
                (*uStack_1c) = 0;
                (*uStack_10) = 0;
            }
            else if (iVar6 == 7)
            {
                // TODO: Resolve the implicit receiver and output-buffer type.
                (*((UnknownCall*)(*((int32_t*)(iStack_34 + 0x40)) +
                    0x120)))(&(*uStack_1c));
            }
        }
        else
        {
            FUN_000377b0(iStack_34, &(*uStack_1c));
        }

        if (0.0 < *((float*)(iStack_34 + 0x440)))
        {
            // Preserve the raw four-byte third argument shown by Ghidra.
            // TODO: Establish whether its actual ABI type is integer or float.
            FUN_00048270(
                iStack_34 + 0x89c,
                iStack_34,
                *((uint32_t*)(iStack_34 + 0x440)));

            FUN_00019ed0(iStack_34, &(*uStack_1c));

            *((uint32_t*)(iStack_34 + 0x1d4)) = (*uStack_14);
            *((uint32_t*)(iStack_34 + 0x1cc)) = (*uStack_1c);
            *((uint32_t*)(iStack_34 + 0x1d0)) = (*uStack_18);

            // TODO: Confirm the indirect return is a 32-bit address of floats.
            pfVar8 = ((float*)(((uintptr_t)((*((UnknownCall*)(*in_ECX + 0x54)))()))));

            // Float indices 0, 1, and 2 address byte offsets 0, 4, and 8.
            // Preserve the literal and arithmetic grouping shown by Ghidra.
            // TODO: Original x86 floating-point precision remains unresolved.
            if (0.010000001 <
                pfVar8[2] * pfVar8[2] +
                pfVar8[1] * pfVar8[1] +
                *pfVar8 * *pfVar8)
            {
                // TODO: Establish the second argument's ABI type; retain the
                // evidenced raw constant without interpreting it as a float.
                FUN_0011e7c0(in_ECX, 0xbe19999a);
            }
        }

        return 1;
    }

    return 1;
}
