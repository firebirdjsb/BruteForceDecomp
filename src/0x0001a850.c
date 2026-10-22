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

// Brute Force: 0x0001a850 | Ghidra label FUN_0001a850
// Ghidra function-body SHA-256: F2A20964307838C0A44EEF10C27874B4A837CA79EBC604D0A4A81DADE69C7FF9
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x0001a850; function index: 79.
// Recorded body SHA256:
// F2A20964307838C0A44EEF10C27874B4A837CA79EBC604D0A4A81DADE69C7FF9
//
// TODO: Requires <cstdint> and the external declarations.
// TODO: Resolve the actual calling convention and entry-register inputs.
//       in_EAX (int32_t) and unaff_EDI (int32_t*) are intentionally
//       unresolved placeholders for Ghidra's incoming EAX and EDI values;
//       they are not known globals or additional confirmed parameters.
// TODO: Supply float10 with the evidenced x87 extended-precision behavior;
//       ordinary C++ long double is not sufficient on every compiler.
// TODO: Resolve FUN_0001a760's declaration, implicit inputs, and return ABI.
// TODO: Resolve SQRT's operation and intermediate precision from instructions.

uint32_t /* TODO: The in_EAX, unaff_EDI parameter(s) explicitly MODEL incoming register/FS or post-call values.
   They are NOT established original stack parameters or ABI declarations. */
FUN_0001a850(uint32_t param_1, int32_t param_2, uint32_t in_EAX, uint32_t * unaff_EDI)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(float) == 4, "Requires 32-bit float storage.");
#endif

    // TODO: The indirect-call ABI and any implicit register arguments are unknown.
    // This provisional type preserves the shown signed 32-bit return values
    // and empty explicit argument lists; it does not establish the actual ABI.
    typedef int32_t (*IndirectFunction)();

    float fVar1;
    float fVar2;
    float fVar3;
    int32_t iVar4;
    int32_t iVar5;
    uint32_t uVar6;
    float10 fVar7;

    // param_1 is unused in the supplied pseudocode.
    if (param_2 == 0) {
        return 0;
    }

    // +4 is a byte offset from the signed 32-bit incoming EAX value.
    if ((in_EAX != 0) &&
        (*((int32_t**)(in_EAX + 4)) != NULL)) {

        // Read the object's first 32-bit word, then the function pointer
        // at byte offset +0x40 from that word's address value.
        iVar4 = (*((IndirectFunction*)(**((int32_t**)(in_EAX + 4)) + 0x40)))();

        iVar5 = (*((IndirectFunction*)(*unaff_EDI + 0x40)))();

        // Each offset is in bytes from the corresponding signed 32-bit result.
        fVar1 = *((float*)(iVar5 + 0x2c)) -
                *((float*)(iVar4 + 0x2c));
        fVar2 = *((float*)(iVar5 + 0x28)) -
                *((float*)(iVar4 + 0x28));
        fVar3 = *((float*)(iVar5 + 0x24)) -
                *((float*)(iVar4 + 0x24));

        fVar7 = ((float10)(FUN_0001a760()));

        // CONCAT31 places the 24-bit comparison value above the low byte 1.
        // The shown comparison produces 0 or 1, giving 0x00000001 or 0x00000101.
        uVar6 = (((uint32_t)(fVar7 < ((float10)(SQRT(fVar3 * fVar3 +
                              fVar2 * fVar2 +
                              fVar1 * fVar1))))) << 8) |
                1u;

        if ((uVar6 & 0x100u) == 0) {
            return uVar6;
        }
    }

    return 0;
}
