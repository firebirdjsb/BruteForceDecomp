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

// Brute Force: 0x0001ab90 | Ghidra label FUN_0001ab90
// Ghidra function-body SHA-256: 9789228CE612EBFC7113CBA720DE0276D87EB561EAC1A1EB8E5103D19109E2D5
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Function index: 81; entry: 0x0001ab90.
// Recorded body SHA256:
// 9789228CE612EBFC7113CBA720DE0276D87EB561EAC1A1EB8E5103D19109E2D5
// Unverified source reconstruction, not recovered original code.
// TODO: Requires <cstdint> and declarations for the external FUN_* functions.
// TODO: Confirm the function ABI, external signatures, and virtual-call ABI.
// The virtual-call types below are provisional; no explicit arguments appear
// in the pseudocode. Any implicit object/register arguments remain unresolved.
uint16_t FUN_0001ab90(int32_t* param_1)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(float) == 4, "Requires 32-bit float storage.");
#endif

    float fVar1;
    float fVar2;
    int32_t iVar3;
    int32_t* piVar4;
    uint8_t auStack_40[8];
    uint32_t uStack_38;

    // TODO: The undefined2 return is represented as an unsigned 16-bit value.
    // TODO: Both stack objects lack initialization in the supplied evidence.
    // In particular, evaluating uStack_38 below reads an indeterminate value
    // in C++; its actual source must be established from the executable.

    // Index 0xf1: byte offset 0x3c4; retain the unsigned mask operation.
    if ((((uint32_t)(param_1[0xf1])) & 0x100U) == 0) {
        return 0;
    }

    iVar3 = FUN_000120f0();

    // *param_1 is treated as a 32-bit address of a dispatch table.
    // Slot byte offset 0x24; return type and calling convention are provisional.
    piVar4 = (*((int32_t* (**)())(((uintptr_t)(((uint32_t)(*param_1)))) + 0x24)))();

    // Index 0xe0: byte offset 0x380; only its first byte is accessed.
    if ((*((uint8_t*)(param_1 + 0xe0)) & 1) != 0) {
        // Index 0xdf: byte offset 0x37c.
        // Preserve the numeric int-to-float casts and unusual comparison.
        // TODO: Verify these casts and comparison against the instructions;
        // the evidence does not justify interpreting the stored bits as float.
        if ((((float)(param_1[0xdf])) < 0.0) ==
            (((float)(param_1[0xdf])) == 0.0)) {
            return 0;
        }
    }

    param_1[0xe1] = 0x3f000000; // Byte offset 0x384; integer bit-pattern store.
    param_1[0xdf] = 0x3f000000; // Byte offset 0x37c; integer bit-pattern store.
    *((uint8_t*)(param_1 + 0xe0)) =
        (*((uint8_t*)(param_1 + 0xe0)) & 0xf9) | 1;

    // Treat iVar3 as a 32-bit address; read floats at byte offsets 0x54/0x50.
    fVar1 = *((float*)(((uintptr_t)(((uint32_t)(iVar3)))) + 0x54));
    fVar2 = *((float*)(((uintptr_t)(((uint32_t)(iVar3)))) + 0x50));

    // *piVar4 is treated as a 32-bit dispatch-table address.
    // Slot byte offset 0x68; return type and calling convention are provisional.
    iVar3 = (*((int32_t (**)())(((uintptr_t)(((uint32_t)(*piVar4)))) + 0x68)))();

    // Preserve the signed integer conversion followed by conversion to float.
    // TODO: Confirm intermediate floating-point precision and machine behavior
    // for division by zero or an out-of-range float-to-integer conversion.
    if (((float)(iVar3)) <=
        ((float)(((int32_t)((fVar1 * 100.0) / fVar2))))) {
        return 0;
    }

    iVar3 = param_1[0x104]; // Byte offset 0x410.
    piVar4 = ((int32_t*)(FUN_000161b0()));
    if (*piVar4 != iVar3) {
        FUN_000121f0();
        return 0;
    }

    FUN_000122d0(5);
    FUN_00012000(uStack_38, auStack_40);
    FUN_00012440();
    FUN_000121f0();
    return 1;
}
