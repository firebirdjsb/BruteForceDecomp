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

// Brute Force: 0x00019af0 | Ghidra label FUN_00019af0
// Ghidra function-body SHA-256: 25881B20D047F2AF8B77BF6CDE29829EAB334712F5AA8E7FAB4B187EF5AE0366
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Function index: 73; entry: 0x00019af0.
// Recorded body SHA256:
// 25881B20D047F2AF8B77BF6CDE29829EAB334712F5AA8E7FAB4B187EF5AE0366
//
// TODO: Requires <cstdint> and <cstring>, and the unresolved external declarations.
// TODO: Recover the function and indirect-call ABIs, including implicit register
// arguments. The indirect calls below preserve only the displayed arguments.
// TODO: float10 must represent the decompiler's x87 extended-precision values.
// TODO: Define GhidraVector16, its _0_4_ member, ZEXT416, rsqrtss, SQRT, ABS,
// fpatan, and FUN_* from evidence; their types and semantics remain unresolved.
// In particular, confirm the type/interpretation of the rsqrtss low lane.
//
// Ghidra warned: "Restarted to delay deadcode elimination for space: stack".
// TODO: Resolve stack recovery before treating this draft as executable logic.

/* TODO: Ghidra 16-byte vector semantics and rsqrtss ABI unresolved. */
typedef struct GhidraVector16 { float _0_4_; unsigned char unknown[12]; } GhidraVector16;
extern GhidraVector16 rsqrtss();
uint32_t FUN_00019af0(
    int32_t* param_1,
    float* param_2,
    float* param_3)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(float) == 4, "Requires 32-bit float storage.");
#endif

    float fVar1;
    char cVar2;
    int32_t* piVar3;

    // TODO: These are unresolved machine-state artifacts, intentionally left
    // uninitialized. Ordinary C++ locals cannot recover the original registers.
    // Their uses below are indeterminate until the instruction flow is resolved.
    uint32_t extraout_ECX;
    int32_t extraout_EDX;
    int32_t unaff_retaddr;

    float10 fVar4;
    float10 fVar5;
    float fVar6;
    GhidraVector16 auVar7;

    float fStack_48;

    // Each three-element array preserves contiguous 4-byte stack slots.
    // TODO: Confirm the complete stack layout and any aliasing between locals.
    float stack_3c[3]; // +0: fStack_3c; +4: fStack_38; +8: fStack_34.
    float stack_30[3]; // +0: fStack_30; +4: fStack_2c; +8: fStack_28.
    uint32_t stack_24[9]; // uStack_24 through uStack_4, at 4-byte intervals.

    // Read the 32-bit table address, then the function pointer at byte offset 0x24.
    piVar3 = ((int32_t* (*)())(((uintptr_t)(*((const uint32_t*)(((uintptr_t)(((uint32_t)(*param_1)) + 0x24u))))))))();

    fVar6 = SQRT(
        param_3[2] * param_3[2] +
        param_3[1] * param_3[1] +
        *param_3 * *param_3);

    if (1.0 <= fVar6) {
        fVar6 = 1.0f;
    }

    // param_1 indices are 4-byte units:
    // 0xf1 -> byte offset 0x3c4; 0x73..0x75 -> 0x1cc..0x1d4.
    if ((((uint32_t)(param_1[0xf1])) & 0x4000u) != 0) {
        param_1[0x75] = 0;
        param_1[0x74] = 0;
        param_1[0x73] = 0;
        param_1[0xf1] = ((int32_t)(((uint32_t)(param_1[0xf1])) & 0xffffbfffu));
    }

    if (0.1 <= fVar6) {
        stack_3c[2] = param_3[2];
        stack_3c[1] = param_3[1];
        stack_3c[0] = *param_3;

        // Preserve the displayed numeric uint conversion and vector operation.
        // TODO: Confirm whether the decompiler's casts conceal bit reinterpretation.
        auVar7 = rsqrtss(
            ZEXT416(((uint32_t)(fVar6))),
            stack_3c[0] * stack_3c[0] +
            stack_3c[1] * stack_3c[1] +
            stack_3c[2] * stack_3c[2]);

        fVar4 = ((float10)(fpatan(
            ((float10)(auVar7._0_4_)) *
                ((float10)(stack_3c[0])),
            ((float10)(stack_3c[2])) *
                ((float10)(auVar7._0_4_)))));

        if (fVar4 <= ((float10)(3.1415927))) {
            if (fVar4 < ((float10)(-3.1415927))) {
                fVar4 = fVar4 + ((float10)(6.2831855));
            }
        } else {
            fVar4 = fVar4 - ((float10)(6.2831855));
        }

        fVar5 = ((float10)(fpatan(
            ((float10)(*param_2)),
            ((float10)(param_2[2])))));

        if (fVar5 <= ((float10)(3.1415927))) {
            if (fVar5 < ((float10)(-3.1415927))) {
                fVar5 = fVar5 + ((float10)(6.2831855));
            }
        } else {
            fVar5 = fVar5 - ((float10)(6.2831855));
        }

        // TODO: Verify literal precision and intermediate rounding in the binary.
        if (1.0 < ABS(((float)(fVar4 - fVar5))) * 57.295776) {
            cVar2 = FUN_000162c0();

            if (cVar2 == '\0') {
                // Function pointer at byte offset 0x3c in piVar3's table.
                // TODO: Return type and implicit object argument are unresolved.
                ((void (*)(float*))(((uintptr_t)(*((const uint32_t*)(((uintptr_t)(((uint32_t)(*piVar3)) + 0x3cu))))))))(
                    param_3);
                return 0;
            }

            fVar4 = ((float10)(FUN_0001fb30(((float)(fVar4 - fVar5)))));

            // param_1[0x110] is a signed 32-bit value at byte offset 0x440.
            // Preserve its numeric float conversion and the opaque third argument.
            fVar4 = ((float10)(FUN_00019ab0(
                ((float)(fVar4)),
                ((float)(fVar4)) /
                    ((float)(param_1[0x110])),
                0x405f66f3)));

            fVar1 = ((float)(-fVar4));

            // param_1[0x71] is at byte offset 0x1c4.
            fVar4 = ((float10)(FUN_00019a20(fVar1, param_1[0x71])));
            param_1[0x71] =
                ((int32_t)(((float)(fVar4))));

            // TODO: Recover extraout_ECX from the actual preceding call sequence.
            fVar4 = ((float10)(FUN_00019a70(
                SQRT(
                    param_3[2] * param_3[2] +
                    param_3[1] * param_3[1] +
                    *param_3 * *param_3),
                extraout_ECX,
                param_1[0x71])));

            fStack_48 = ((float)(fVar4));

            if (fVar1 <= 0.0) {
                if ((fVar1 < 0.0) && (fStack_48 < fVar1)) {
                    fStack_48 = fVar1;
                }
            } else if (fVar1 < fStack_48) {
                fStack_48 = fVar1;
            }

            stack_24[7] = 0;          // uStack_8.
            stack_24[6] = 0;          // uStack_c.
            stack_24[5] = 0;          // uStack_10.
            stack_24[3] = 0;          // uStack_18.
            stack_24[2] = 0;          // uStack_1c.
            stack_24[1] = 0;          // uStack_20.
            stack_24[8] = 0x3f800000; // uStack_4: raw 32-bit word.
            stack_24[4] = 0x3f800000; // uStack_14: raw 32-bit word.
            stack_24[0] = 0x3f800000; // uStack_24: raw 32-bit word.

            // TODO: Recover extraout_EDX before using this address.
            // Address arithmetic is explicitly modulo 2^32; load is 4 bytes.
            FUN_0001fa20(
                &stack_24[0],
                fStack_48 * *((const float*)(((uintptr_t)(((uint32_t)(extraout_EDX)) + 0x440u)))));

            // TODO: Recover implicit arguments and stack/register side effects.
            FUN_0001f9c0();

            stack_3c[0] = stack_3c[0] * fVar6;
            stack_3c[1] = stack_3c[1] * fVar6;
            stack_3c[2] = stack_3c[2] * fVar6;

            ((void (*)(float*))(((uintptr_t)(*((const uint32_t*)(((uintptr_t)(((uint32_t)(*piVar3)) + 0x3cu))))))))(
                &stack_3c[0]);

            // TODO: The recovered "unaff_retaddr" base is suspicious. Preserve
            // the displayed 4-byte float store, without assuming a valid object.
            *((float*)(((uintptr_t)(((uint32_t)(unaff_retaddr)) + 0x1c4u)))) = fVar1;
            return 1;
        }

        stack_3c[0] = fVar6 * *param_2;

        // TODO: Ghidra's undefined8 load/casts are ambiguous. These retain a
        // literal unsigned 64-bit numeric interpretation, pending verification.
        // Preserve two separate 8-byte loads from param_2 + 1 (byte offset +4).
        uint64_t loaded_8;
        memcpy(&loaded_8, param_2 + 1, sizeof(loaded_8));
        stack_3c[1] = fVar6 * ((float)(loaded_8));

        memcpy(&loaded_8, param_2 + 1, sizeof(loaded_8));
        stack_3c[2] = fVar6 * ((float)(loaded_8 >> 0x20));

        param_3 = &stack_30[0];
        stack_30[0] = stack_3c[0];
        stack_30[1] = stack_3c[1];
        stack_30[2] = stack_3c[2];
    }

    ((void (*)(float*))(((uintptr_t)(*((const uint32_t*)(((uintptr_t)(((uint32_t)(*piVar3)) + 0x3cu))))))))(
        param_3);

    // TODO: Resolve the same suspicious base before interpreting this write.
    // Preserve a raw 4-byte zero store at byte offset 0x1c4.
    *((uint32_t*)(((uintptr_t)(((uint32_t)(unaff_retaddr)) + 0x1c4u)))) = 0;
    return 0;
}
