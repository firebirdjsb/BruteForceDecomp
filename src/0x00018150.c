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

// Brute Force: 0x00018150 | Ghidra label FUN_00018150
// Ghidra function-body SHA-256: F77A00EEFC1043094213EC9D419470E9CB4FAB97CD904BE66AF17FAD4CE9FA14
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Function index: 61; entry: 0x00018150.
// Recorded body SHA256:
// F77A00EEFC1043094213EC9D419470E9CB4FAB97CD904BE66AF17FAD4CE9FA14
//
// TODO: Requires <cstdint>, declarations for the referenced external functions,
// and confirmation of their calling conventions and implicit arguments.
// TODO: Supply a verified binding for the unresolved decompiler input in_EAX
// (int32_t*). Its origin and liveness across FUN_000120f0 are unknown.
// It must not be assumed to equal that function's return value.
// All offsets below are byte offsets from the supplied pseudocode.

void /* TODO: The in_EAX parameter(s) explicitly MODEL incoming register/FS or post-call values.
   They are NOT established original stack parameters or ABI declarations. */
FUN_00018150(int32_t param_1, uint32_t * in_EAX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    // TODO: Verify the indirect call's calling convention, return type, and
    // possible implicit arguments. This type represents only the visible call.
    typedef int32_t (*IndirectCall)();
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(IndirectCall) == 4,
                  "Requires 32-bit function pointers.");
#endif

    uint8_t bVar1;
    int32_t iVar2;
    int32_t iVar3;

    iVar2 = FUN_000120f0();

    if (in_EAX != NULL) {
        // Dereference the 32-bit value at in_EAX, then call the function
        // pointer stored at byte offset 0xF4 from that value.
        iVar3 = (*((IndirectCall*)(*in_EAX + 0xF4)))();

        if (iVar3 != 0) {
            FUN_00039f00(iVar3);
            FUN_00055b50();
            FUN_00015fe0();
            FUN_0001a4e0();

            bVar1 = *((uint8_t*)(*((int32_t*)(param_1 + 0x1AC)) + 0x10));

            *((uint8_t*)(*((int32_t*)(param_1 + 0x1AC)) + 0x10)) =
                ((uint8_t)(bVar1 ^
                    ((*((uint8_t*)(*((int32_t*)(iVar3 + 0x1AC)) +
                          0x10)) ^
                      bVar1) &
                     8)));
        }
    }

    if (iVar2 != 0) {
        FUN_00039f00(param_1);

        // Preserve the raw 4-byte stores; their semantic types are unknown.
        *((uint32_t*)(iVar2 + 0x7EC)) = 0x3F800000u;
        *((uint32_t*)(param_1 + 0x8A0)) = 0x3F800000u;
        *((uint8_t*)(param_1 + 0x89D)) = 0;

        if (*((int32_t*)(iVar2 + 0x59C)) != 0) {
            FUN_0005e600();
        }
    }

    if ((*((uint32_t*)(param_1 + 0x3C4)) & 0x100u) != 0) {
        FUN_00056530(param_1 + 0x4A8, param_1);
        FUN_00056980(param_1 + 0x4A8, param_1);

        *((uint32_t*)(param_1 + 0x8A0)) = 0x3F800000u;
        *((uint8_t*)(param_1 + 0x89D)) = 0;
    }

    return;
}
