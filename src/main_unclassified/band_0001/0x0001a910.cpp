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

static inline int32_t * bf_0001a910_i32(uint32_t address) {
        return ((int32_t*)(address)); // Four-byte signed access.
    }
static inline uint32_t * bf_0001a910_u32(uint32_t address) {
        return ((uint32_t*)(address)); // Four-byte unsigned access.
    }
static inline uint8_t * bf_0001a910_u8(uint32_t address) {
        return ((uint8_t*)(address)); // One-byte access.
    }
static inline float * bf_0001a910_f32(uint32_t address) {
        return ((float*)(address)); // Four-byte floating-point access.
    }

// Brute Force: 0x0001a910 | Ghidra label FUN_0001a910
// Ghidra function-body SHA-256: FD5A7EFC732E3D45FD330C38E025858C8CF4B6FD0774EB68B0AE505167DCFDE5
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Function index: 80; entry: 0x0001a910.
// TODO: Provide <cstdint> and declarations for the external FUN_* functions.
// TODO: Recover the actual function and indirect-call ABIs, including any
// implicit receiver/register arguments. No receiver arguments are invented here.
// All offsets below are byte offsets unless explicitly described as array indices.
// Raw memory references assume the original 32-bit address space and valid memory;
// TODO: Confirm alignment, object layout, and compiler aliasing requirements.
uint8_t FUN_0001a910(int32_t param_1)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(int32_t) == 4, "Requires 32-bit signed integers.");
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(uint32_t) == 4, "Requires 32-bit unsigned integers.");
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(float) == 4, "Requires 32-bit float storage.");
#endif
    // TODO: Confirm the target's floating-point evaluation and storage behavior.

    // Integer addresses remain 32-bit; unsigned address arithmetic wraps modulo 2^32.
    const uint32_t base = ((uint32_t)(param_1));

    /* Former C++ lambda i32 lifted to static C11 function. */
    /* Former C++ lambda u32 lifted to static C11 function. */
    /* Former C++ lambda u8 lifted to static C11 function. */
    /* Former C++ lambda f32 lifted to static C11 function. */

    // Provisional call types reflect only the explicit arguments in the pseudocode.
    // TODO: Replace these with verified calling conventions and receiver handling.
    typedef char (*Call114)();
    typedef void (*Call15C)(int32_t, int32_t);

    float fVar1;
    char cVar2;
    char cVar3;
    int32_t* piVar4;
    int32_t iVar5;
    int32_t iVar6;
    uint32_t uVar7;
    int32_t local_c;
    int32_t local_8[2]; // The pseudocode does not initialize local_8[1].

    if (((*bf_0001a910_u32(base + 0x3c4u)) & 0x100u) == 0) {
        return 0;
    }

    piVar4 = (int32_t*)FUN_000120f0();

    if (0.0 < (*bf_0001a910_f32(base + 0x374u))) {
        fVar1 = (*bf_0001a910_f32(base + 0x374u)) - (*bf_0001a910_f32(base + 0x440u));
        (*bf_0001a910_f32(base + 0x374u)) = fVar1;

        // Preserve the decompiler's exact Boolean comparison.
        if ((fVar1 < 0.0) != (fVar1 == 0.0)) {
            (*bf_0001a910_u32(base + 0x374u)) = 0;
        }
        return 0;
    }

    // Raw four-byte store; preserve the observed bit pattern.
    (*bf_0001a910_u32(base + 0x374u)) = 0x40000000u;

    if (piVar4 == NULL) {
        return 0;
    }
    if ((*bf_0001a910_i32(base + 0x44u)) == 0x2d) {
        return 0;
    }

    cVar2 = FUN_0004c3e0();
    if (cVar2 == '\0') {
        return 0;
    }

    if (((*bf_0001a910_u8(base + 0x904u)) & 1) == 0) {
        local_8[0] = 0;
        local_c = 0;
        FUN_0001a7e0(local_8, &local_c);
        iVar6 = local_8[0];

        if (local_8[0] == 0) {
            return 0;
        }
        if (local_c == 0) {
            return 0;
        }

        // Each +0x228 field supplies a 32-bit address; +0x40 reads a signed word.
        if (((*bf_0001a910_i32(((uint32_t)((*bf_0001a910_i32(((uint32_t)(local_8[0])) + 0x228u))))
                 + 0x40u)) != 2) ||
            ((*bf_0001a910_i32(((uint32_t)((*bf_0001a910_i32(((uint32_t)(local_c)) + 0x228u))))
                 + 0x40u)) == 2)) {
            iVar5 = FUN_00049c60();
            if (iVar5 == 0) {
                return 0;
            }
            if ((((*bf_0001a910_u32(((uint32_t)(iVar5)) + 0x80u)) >> 3) & 1u) == 0) {
                return 0;
            }

            cVar2 = FUN_0001a850(0, iVar6);
            cVar3 = FUN_0001a850(0, local_c);

            if (cVar2 != '\0') {
                return 0;
            }
            if (cVar3 == '\0') {
                return 0;
            }

            cVar2 = FUN_00023cd0();
            if (cVar2 == '\0') {
                return 0;
            }
        }
    }

    // piVar4[0x169] is a four-byte element index (byte offset 0x5a4).
    // Dereference that stored address, then load the call target at byte +0x114.
    cVar2 = ((Call114)((*bf_0001a910_u32((*bf_0001a910_u32(((uint32_t)(piVar4[0x169])))) + 0x114u))))();

    if (cVar2 == '\0') {
        cVar2 = FUN_0004c3e0();
        if (cVar2 != '\0') {
            // *piVar4 supplies the table address; +0x15c is a byte offset.
            ((Call15C)((*bf_0001a910_u32(((uint32_t)(*piVar4)) + 0x15cu))))(9, 0);

            (*bf_0001a910_u8(base + 0x904u)) = (*bf_0001a910_u8(base + 0x904u)) & 0xfe;
        }
    } else {
        // TODO: Recover parameter types; retain the literal argument bit patterns.
        iVar6 = FUN_00024540(param_1, 0x2d, 0, 0, 0, 0x3fc00000, 0);
        if (iVar6 == 1) {
            iVar6 = FUN_00055aa0();
            (*bf_0001a910_u32(((uint32_t)(iVar6)) + 0x88u)) =
                (*bf_0001a910_u32(((uint32_t)(iVar6)) + 0x88u)) | 0x8000u;

            iVar6 = FUN_00055aa0();
            (*bf_0001a910_u32(((uint32_t)(iVar6)) + 0x88u)) =
                (*bf_0001a910_u32(((uint32_t)(iVar6)) + 0x88u)) | 0x10000u;

            local_8[0] = (*bf_0001a910_i32(base + 0x428u));

            // Preserve the signed additions before conversion to unsigned.
            // TODO: Verify overflow behavior against instructions; signed overflow
            // in this source expression is undefined in standard C++.
            uVar7 = (*bf_0001a910_i32(base + 0x42cu)) + -2 + local_8[0];

            if ((*bf_0001a910_u32(base + 0x424u)) <= uVar7) {
                uVar7 = uVar7 - (*bf_0001a910_u32(base + 0x424u));
            }

            // +0x420 supplies the array address; each indexed entry is four bytes.
            iVar6 = (*bf_0001a910_i32(
                ((uint32_t)((*bf_0001a910_i32(base + 0x420u)))) + uVar7 * 4u));

            (*bf_0001a910_u32(((uint32_t)(iVar6)) + 0x88u)) =
                ((*bf_0001a910_u32(((uint32_t)(iVar6)) + 0x88u)) & 0xfff3ffffu)
                | 0x20000u;

            iVar6 = FUN_00055aa0();
            (*bf_0001a910_u32(((uint32_t)(iVar6)) + 0x88u)) =
                (*bf_0001a910_u32(((uint32_t)(iVar6)) + 0x88u)) | 2u;

            (*bf_0001a910_u8(base + 0x904u)) = (*bf_0001a910_u8(base + 0x904u)) & 0xfe;
        }

        iVar6 = FUN_00024540(param_1, 0x7f, 2, 0, 0, 0x3fa66666, 0);
        if (iVar6 == 1) {
            iVar6 = FUN_00055aa0();
            (*bf_0001a910_u32(((uint32_t)(iVar6)) + 0x88u)) =
                (*bf_0001a910_u32(((uint32_t)(iVar6)) + 0x88u)) | 2u;
            return 1;
        }
    }

    return 1;
}
