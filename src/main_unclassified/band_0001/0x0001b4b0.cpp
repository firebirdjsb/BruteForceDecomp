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
extern void FUN_0001d4c0(int param_1,int param_2,undefined4 param_3);
extern void FUN_00016030(uint32_t in_EAX);

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

typedef uint32_t u32; typedef uint8_t u8; typedef int32_t s32;
static inline s32 bf_0001b4b0_read_s32(u32 address) {
        s32 value;
        memcpy(
            &value,
            ((const void*)(((uintptr_t)(address)))),
            4);
        return value;
    }
static inline float bf_0001b4b0_read_float(u32 address) {
        float value;
        memcpy(
            &value,
            ((const void*)(((uintptr_t)(address)))),
            4);
        return value;
    }
static inline u8 bf_0001b4b0_read_u8(u32 address) {
        u8 value;
        memcpy(
            &value,
            ((const void*)(((uintptr_t)(address)))),
            1);
        return value;
    }
static inline void bf_0001b4b0_write_float(u32 address, float value) {
        memcpy(
            ((void*)(((uintptr_t)(address)))),
            &value,
            4);
    }
static inline void bf_0001b4b0_write_u32(u32 address, u32 value) {
        memcpy(
            ((void*)(((uintptr_t)(address)))),
            &value,
            4);
    }
static inline void bf_0001b4b0_write_u8(u32 address, u8 value) {
        memcpy(
            ((void*)(((uintptr_t)(address)))),
            &value,
            1);
    }
static inline s32 bf_0001b4b0_subtract_s32(s32 left, s32 right) {
        return BF_BITS_TO_I32(((u32)(left)) - ((u32)(right)));
    }
static inline float bf_0001b4b0_concat31_as_float(float value, u8 low_byte) {
        const u32 concatenated =
            (BF_BITS_TO_U32(value) & 0xffffff00U) |
            ((u32)(low_byte));
        return ((float)(concatenated));
    }

// Brute Force: 0x0001b4b0 | Ghidra label FUN_0001b4b0
// Ghidra function-body SHA-256: 45E3D8FC5CE2F9DE33D1D1827AB05232AFF5E9CC33F9F39BD73045BCDF24AFC5
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Unverified source reconstruction, not recovered original code.
// Entry: 0x0001b4b0; function index: 87.
// Recorded body SHA256:
// 45E3D8FC5CE2F9DE33D1D1827AB05232AFF5E9CC33F9F39BD73045BCDF24AFC5
//
// TODO: Requires <bit>, <climits>, <cstdint>, and <cstring>.
// TODO: Supply declarations and the actual calling conventions for
// FUN_0001d4c0 and FUN_00016030; their implementations are not provided.
// TODO: Confirm the entry ABI, floating-point evaluation precision, and
// literal precision against the instructions. No compilation or testing
// is claimed.

void FUN_0001b4b0(float param_1)
{
    /* type aliases moved to file scope */
    /* type aliases moved to file scope */
    /* type aliases moved to file scope */

    _Static_assert(CHAR_BIT == 8);
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(float) == 4);
#endif
    _Static_assert(sizeof(s32) == 4 && sizeof(u32) == 4);
    _Static_assert((((s32)(-1)) >> 2) == -1,
                  "Requires arithmetic right shift of signed 32-bit values.");

    // TODO: This unresolved symbol represents the incoming ESI register.
    // It is NOT evidence of an original global variable. Replace this
    // declaration with the correct register/ABI binding once established.
    extern u32 unaff_ESI;

    // Addresses and address arithmetic below are explicitly 32-bit.
    // memcpy preserves raw memory representations without float/integer aliasing.
    /* Former C++ lambda read_s32 lifted to static C11 function. */

    /* Former C++ lambda read_float lifted to static C11 function. */

    /* Former C++ lambda read_u8 lifted to static C11 function. */

    /* Former C++ lambda write_float lifted to static C11 function. */

    /* Former C++ lambda write_u32 lifted to static C11 function. */

    /* Former C++ lambda write_u8 lifted to static C11 function. */

    // Preserve 32-bit subtraction and reinterpret its result as signed before
    // the signed shifts/comparisons shown by Ghidra; avoid C++ signed overflow.
    /* Former C++ lambda subtract_s32 lifted to static C11 function. */

    // CONCAT31 retains representation bytes 1..3 and replaces byte 0.
    // TODO: Ghidra explicitly renders a subsequent numeric conversion to float.
    // Preserve that spelling here; verify whether the executable instead uses
    // a retyped bit pattern or a partially reused argument/stack slot.
    /* Former C++ lambda concat31_as_float lifted to static C11 function. */

    float fVar1;
    s32 iVar2;
    s32 iVar3;
    bool bVar4;
    u32 uVar5 = 0;

    // ESI+0x08 and ESI+0x0c contain 32-bit values used as addresses.
    // Indexed entries have a four-byte stride. No container type is inferred.
    do {
        while (true) {
            iVar2 = bf_0001b4b0_read_s32(unaff_ESI + 8U);
            if ((iVar2 == 0) ||
                (((u32)(bf_0001b4b0_subtract_s32(bf_0001b4b0_read_s32(unaff_ESI + 0x0cU), iVar2) >> 2))
                 <= uVar5)) {
                param_1 = bf_0001b4b0_concat31_as_float(
                    param_1, bf_0001b4b0_read_u8(unaff_ESI + 0x14U));

                // Clear the low two bits, then interpret the result as signed.
                if (4 < BF_BITS_TO_I32(((u32)(bf_0001b4b0_subtract_s32(
                                bf_0001b4b0_read_s32(unaff_ESI + 0x0cU),
                                bf_0001b4b0_read_s32(unaff_ESI + 8U)))) &
                            0xfffffffcU)) {
                    FUN_0001d4c0(
                        bf_0001b4b0_read_s32(unaff_ESI + 8U),
                        bf_0001b4b0_read_s32(unaff_ESI + 0x0cU),
                        param_1, 0, 0);
                }

                FUN_00016030();

                iVar2 = bf_0001b4b0_read_s32(unaff_ESI + 8U);
                if ((iVar2 != 0) &&
                    ((bf_0001b4b0_subtract_s32(bf_0001b4b0_read_s32(unaff_ESI + 0x0cU), iVar2) >> 2)
                     != 0)) {
                    // ESI+0x15 is tested as one byte; signedness does not affect
                    // this comparison with zero.
                    if (bf_0001b4b0_read_u8(unaff_ESI + 0x15U) != 0) {
                        param_1 = bf_0001b4b0_concat31_as_float(
                            param_1, bf_0001b4b0_read_u8(unaff_ESI + 0x14U));

                        if (4 < BF_BITS_TO_I32(((u32)(bf_0001b4b0_subtract_s32(
                                        bf_0001b4b0_read_s32(unaff_ESI + 0x0cU), iVar2))) &
                                    0xfffffffcU)) {
                            FUN_0001d4c0(
                                iVar2,
                                bf_0001b4b0_read_s32(unaff_ESI + 0x0cU),
                                param_1, 0, 0);
                        }

                        bf_0001b4b0_write_u8(unaff_ESI + 0x15U, 0);
                    }

                    // Two successive four-byte loads, as in **(int**)(ESI+8).
                    iVar2 = bf_0001b4b0_read_s32(
                        ((u32)(bf_0001b4b0_read_s32(unaff_ESI + 8U))));
                    bVar4 = false;
                    uVar5 = 0;

                    while ((iVar3 = bf_0001b4b0_read_s32(unaff_ESI + 8U),
                            iVar3 != 0 &&
                            (uVar5 < ((u32)(bf_0001b4b0_subtract_s32(
                                    bf_0001b4b0_read_s32(unaff_ESI + 0x0cU), iVar3) >> 2))))) {
                        iVar3 = bf_0001b4b0_read_s32(
                            ((u32)(iVar3)) + uVar5 * 4U);

                        // Preserve both comparisons and their short-circuit
                        // behavior, including the behavior for NaNs.
                        if (((86.86001 <=
                              bf_0001b4b0_read_float(((u32)(iVar3)) + 0x30U)) ||
                             (bf_0001b4b0_read_float(((u32)(iVar3)) + 0x30U) <=
                              86.85999)) ||
                            (iVar3 == iVar2)) {
                            uVar5 = uVar5 + 1U;
                        } else {
                            // Exact four-byte store; no field meaning inferred.
                            bf_0001b4b0_write_u32(
                                ((u32)(iVar3)) + 0x2cU,
                                0x7f7fffffU);
                            bVar4 = true;
                            uVar5 = uVar5 + 1U;
                        }
                    }

                    if (bVar4) {
                        param_1 = bf_0001b4b0_concat31_as_float(
                            param_1, bf_0001b4b0_read_u8(unaff_ESI + 0x14U));

                        if (4 < BF_BITS_TO_I32(((u32)(bf_0001b4b0_subtract_s32(
                                        bf_0001b4b0_read_s32(unaff_ESI + 0x0cU),
                                        bf_0001b4b0_read_s32(unaff_ESI + 8U)))) &
                                    0xfffffffcU)) {
                            FUN_0001d4c0(
                                bf_0001b4b0_read_s32(unaff_ESI + 8U),
                                bf_0001b4b0_read_s32(unaff_ESI + 0x0cU),
                                param_1, 0, 0);
                        }

                        FUN_00016030();
                    }
                }

                return;
            }

            iVar2 = bf_0001b4b0_read_s32(((u32)(iVar2)) + uVar5 * 4U);
            fVar1 = bf_0001b4b0_read_float(((u32)(iVar2)) + 0x30U);
            if ((86.86001 <= fVar1) || (fVar1 <= 86.85999)) {
                break;
            }

        LAB_0001b523:
            uVar5 = uVar5 + 1U;
        }

        fVar1 = bf_0001b4b0_read_float(((u32)(iVar2)) + 0x2cU) -
                fVar1 * param_1;
        bf_0001b4b0_write_float(((u32)(iVar2)) + 0x2cU, fVar1);

        if (fVar1 < 0.0) {
            bf_0001b4b0_write_u32(((u32)(iVar2)) + 0x2cU, 0x7f7fffffU);
        }

        // These are four-byte signed integer loads at entry+0x24 and +0x0c.
        if ((bf_0001b4b0_read_s32(((u32)(iVar2)) + 0x24U) != 2) ||
            (bf_0001b4b0_read_s32(((u32)(iVar2)) + 0x0cU) != 0)) {
            goto LAB_0001b523;
        }

        bf_0001b4b0_write_u32(((u32)(iVar2)) + 0x2cU, 0x7f7fffffU);
        uVar5 = uVar5 + 1U;
    } while (true);
}
