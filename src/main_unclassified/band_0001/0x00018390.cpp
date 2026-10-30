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

// Brute Force: 0x00018390 | Ghidra label FUN_00018390
// Ghidra function-body SHA-256: 68CF03F3E6AA82D7308AC308EA86DFE301E3ECBE3E750919E686FD5EB30F0304
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x00018390; function index: 64.
// Recorded body SHA256:
// 68CF03F3E6AA82D7308AC308EA86DFE301E3ECBE3E750919E686FD5EB30F0304
//
// TODO: Requires <cstdint> and the missing external declarations for
// DAT_00414b74, FUN_000120f0, and FUN_00015f80.
// TODO: The additional parameters expose Ghidra's incoming EAX and EDI values.
// They are reconstruction inputs, not evidence of the original C++ signature.
// TODO: Recover the actual calling conventions, implicit register arguments,
// and return types of all calls. The function-pointer types below describe
// only the explicit arguments and 32-bit return transport shown by Ghidra.
// TODO: Signed address arithmetic is retained as displayed; establish overflow
// behavior before treating this draft as executable C++.
void FUN_00018390(
    int32_t* param_1,
    int32_t* in_EAX,
    int32_t unaff_EDI)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(int32_t) == 4, "Requires 32-bit integer words.");
#endif

    typedef uint32_t (*Call0)();
    typedef void (*Call1)(uint32_t*);

    int32_t iVar1;
    int32_t* piVar2;
    int32_t* piVar3;
    int32_t* piVar4;
    int32_t iVar5;
    uint32_t* puVar6;
    int32_t* piVar7;
    uint32_t uStack_4;

    piVar3 = param_1;
    if (unaff_EDI < 0) {
        return;
    }
    if (5 < unaff_EDI) {
        return;
    }

    iVar5 = *param_1;
    param_1 = ((int32_t*)(*in_EAX));

    // Indirect function pointer at byte offset 0x24 from the loaded word.
    // TODO: Any implicit object/register argument is absent from the evidence.
    piVar4 = ((int32_t*)((*((Call0*)(iVar5 + 0x24)))()));

    // Pointer-sized fields at byte offsets 4 and 8 from the external base.
    // TODO: Recover DAT_00414b74's exact declared type.
    piVar7 = *((int32_t**)(DAT_00414b74 + 4));
    piVar2 = *((int32_t**)(DAT_00414b74 + 8));

    if (piVar7 == piVar2) {
LAB_000183fb:
        iVar5 = FUN_000120f0();

        // Load a pointer at byte offset 0x0c, then its first 32-bit word;
        // call the function pointer at byte offset 0x0c from that word.
        puVar6 = ((uint32_t*)((*((Call0*)(**((int32_t**)(iVar5 + 0x0c)) + 0x0c)))()));

        if (puVar6 != NULL) {
            uStack_4 = *puVar6;
            iVar5 = FUN_00015f80();
            if (iVar5 != 0) {
                if (unaff_EDI == 0) {
                    uStack_4 = *puVar6;

                    // Function-pointer byte offset 0x70; one explicit argument.
                    (*((Call1*)(*piVar4 + 0x70)))(&uStack_4);
                }

                // Index 0xfe is byte offset 0x3f8; selected stride is 0x0c bytes.
                iVar1 = piVar3[0xfe] + unaff_EDI * 0x0c;
                *((int32_t*)(iVar1 + 4)) = iVar5;
                *((int32_t*)(iVar1 + 8)) = iVar5 + 4;
                return;
            }
        }

        // Each increment advances six 32-bit words, or 0x18 bytes.
        for (piVar7 = *((int32_t**)(DAT_00414b74 + 4));
             (piVar7 != *((int32_t**)(DAT_00414b74 + 8))) &&
             (*piVar7 != 0x1077c687);
             piVar7 = piVar7 + 6) {
        }

        uStack_4 = 0x1077c687;
        puVar6 = &uStack_4;

        // Preserve the displayed equality-minus-one mask and 32-bit pointer AND.
        piVar7 = ((int32_t*)(((uint32_t)(((int32_t)(piVar7 ==
                    *((int32_t**)(DAT_00414b74 + 8)))) - 1)) &
            ((uint32_t)(piVar7))));
    }
    else {
        do {
            if (((int32_t*)(*piVar7)) == param_1) {
                break;
            }
            piVar7 = piVar7 + 6; // Six 32-bit words: 0x18 bytes.
        } while (piVar7 != piVar2);

        if ((piVar7 == piVar2) ||
            (piVar7 == NULL) ||
            (param_1 == NULL)) {
            goto LAB_000183fb;
        }

        if (unaff_EDI != 0) {
            goto LAB_000184a2;
        }

        // Ghidra assigns &param_1 to an undefined4 pointer. Preserve access to
        // that local pointer's 32-bit storage; its intended argument type is unknown.
        puVar6 = ((uint32_t*)(&param_1));
    }

    (*((Call1*)(*piVar4 + 0x70)))(puVar6);

LAB_000184a2:
    // Index 0xfe is byte offset 0x3f8; selected stride is 0x0c bytes.
    iVar5 = piVar3[0xfe] + unaff_EDI * 0x0c;
    *((int32_t**)(iVar5 + 4)) = piVar7;
    *((int32_t**)(iVar5 + 8)) = piVar7 + 1; // Four bytes.
    return;
}
