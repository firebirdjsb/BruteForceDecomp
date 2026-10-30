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
extern uint FUN_0005ea10(int *param_1);
extern undefined4 FUN_000456c0(void);
extern void FUN_0005b100(undefined4 param_1);
extern void FUN_0005b140(undefined4 param_1);

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

// Brute Force: 0x0001adf0 | Ghidra label FUN_0001adf0
// Ghidra function-body SHA-256: 85C7898AEB9C9503356ADA6DFDFA9994EB9F7691075146B80920DA8BC5C7AD8B
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x0001adf0; function index: 83.
// Recorded body SHA256:
// 85C7898AEB9C9503356ADA6DFDFA9994EB9F7691075146B80920DA8BC5C7AD8B
//
// TODO: Provide <cstdint> and the external declarations described below.
// TODO: Ghidra shows void(void) with an incoming EAX value. The explicit
// parameter represents that register value; it does not reconstruct the ABI.
void FUN_0001adf0(uint32_t in_EAX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(int) == 4, "Requires 32-bit int.");
#endif

    // TODO: External signatures and calling conventions remain unknown.
    // Expected evidence-level values:
    // FUN_000120f0(): a 32-bit value, used as an address or raw argument.
    // FUN_0005ea10(uVar3): a char-sized result.
    // FUN_000456c0(): a 32-bit value used as an address.
    // FUN_0005b100(...), FUN_0005b140(...): return values unused.
    //
    // Address additions below use unsigned 32-bit arithmetic to represent
    // x86 address calculations. Signed 32-bit field comparisons are retained.

    char cVar1;
    int32_t iVar2;
    uint32_t uVar3;
    int32_t* piVar4;
    int32_t* piVar5;

    // Four-byte write at incoming EAX + 0x6f4.
    *((uint32_t*)(in_EAX + 0x6f4u)) = 0;

    iVar2 = FUN_000120f0();

    if (((*((uint32_t*)(in_EAX + 0x3c4u))
          & 0x100u) != 0) &&
        (*((int32_t*)(((uint32_t)(iVar2)) + 0x59cu)) != 0) &&
        (*((int32_t*)(((uint32_t)(*((int32_t*)(((uint32_t)(iVar2)) + 0x59cu))))
             + 0x28u)) != 0))
    {
        uVar3 = FUN_000120f0();
        cVar1 = FUN_0005ea10(uVar3);

        if (cVar1 != '\0')
        {
            piVar4 = ((int32_t*)(((uint32_t)(FUN_000120f0()))));
            piVar5 = ((int32_t*)(((uint32_t)(FUN_000456c0()))));

            // TODO: The indirect call's ABI is unresolved. Ghidra shows no
            // explicit arguments; any implicit register arguments, including
            // a possible object pointer, must be established from instructions.
            // This function-pointer type is only an unverified draft notation.
            typedef int32_t (*UnknownIndirectCall)();

            if ((piVar5 != NULL) &&
                (piVar5 != piVar4) &&
                ((iVar2 =
                      ((UnknownIndirectCall)(*((uint32_t*)(((uint32_t)(*piVar5))
                              + 0xf4u))))()) != 0))
            {
                if (*((int32_t*)(in_EAX + 0x58u)) == 4)
                {
                    FUN_0005b100(
                        *((uint32_t*)(in_EAX + 0x71cu)));
                    return;
                }

                if (*((int32_t*)(in_EAX + 0x58u)) == 1)
                {
                    // TODO: Preserve these argument bits until the callee's
                    // parameter type and ABI are known; do not infer a float.
                    FUN_0005b140(0x41200000u);
                }
            }
        }
    }

    return;
}
