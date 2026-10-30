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
extern void FUN_0001d4c0(int param_1,int param_2,undefined4 param_3);
extern void FUN_0001ba60(uint32_t unaff_ESI);

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

// Brute Force: 0x00016030 | Ghidra label FUN_00016030
// Ghidra function-body SHA-256: BBAE3DEB6248A92BBC70C7A92D4353A89867C2B1207A2C543C1B9CD5776B43EB
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x00016030; function index: 43.
// Recorded body SHA256:
// BBAE3DEB6248A92BBC70C7A92D4353A89867C2B1207A2C543C1B9CD5776B43EB
//
// TODO: Requires <cstdint> and <bit>.
// TODO: The parameter below models Ghidra's incoming EAX value.
//       The original function has no explicit parameters in the pseudocode;
//       its actual calling convention and register contract remain unresolved.
// TODO: External declarations for FUN_0001d4c0 and FUN_0001ba60 are missing.
//       Preserve their unknown ABI and any implicit register arguments.
// TODO: TODO_VirtualEntry32 must describe the unresolved virtual function
//       pointer type, including its calling convention and implicit arguments.
//       The pseudocode shows only the explicit argument 1.
/* TODO: Unverified vtable slot 0x00; visible call takes one integer. */
typedef void (*TODO_VirtualEntry32)(uint32_t);
void FUN_00016030(uint32_t in_EAX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(float) == 4, "Requires 32-bit float.");
#endif
    _Static_assert((((int32_t)(-1)) >> 2) == -1,
                  "Requires arithmetic signed right shift.");

    int32_t iVar1;
    uint32_t* puVar2;

    // TODO: Ghidra preserves unknown upper 24 bits of this stack value.
    //       No initializer is evidenced. Reading local_8 below therefore
    //       involves an indeterminate C++ value; this draft is not safe to
    //       execute until the original stack/register behavior is resolved.
    uint32_t local_8;

    // CONCAT31 preserves bits 8..31 and replaces only bits 0..7.
    // Object-relative offsets 0x14 and 0x15 address individual bytes.
    local_8 =
        (local_8 & 0xffffff00U) |
        *((uint8_t*)(in_EAX + 0x14U));

    // Offsets 0x08 and 0x0c contain 32-bit values used as addresses.
    // Unsigned subtraction retains x86 wraparound; bit_cast preserves the
    // signed interpretation used by the comparison after masking.
    if (4 < BF_BITS_TO_I32((*((uint32_t*)(in_EAX + 0x0cU)) -
                 *((uint32_t*)(in_EAX + 0x08U))) &
                0xfffffffcU)) {
        FUN_0001d4c0(
            *((int32_t*)(in_EAX + 0x08U)),
            *((int32_t*)(in_EAX + 0x0cU)),
            local_8, 0, 0);
    }

    while (true) {
        iVar1 = *((int32_t*)(in_EAX + 0x08U));

        // Shift the signed interpretation of the 32-bit difference by 2.
        if ((iVar1 == 0) ||
            ((BF_BITS_TO_I32(*((uint32_t*)(in_EAX + 0x0cU)) -
                  ((uint32_t)(iVar1))) >> 2) == 0)) {
            return;
        }

        if (*((uint8_t*)(in_EAX + 0x15U)) != 0) {
            local_8 =
                (local_8 & 0xffffff00U) |
                *((uint8_t*)(in_EAX + 0x14U));

            if (4 < BF_BITS_TO_I32((*((uint32_t*)(in_EAX + 0x0cU)) -
                         ((uint32_t)(iVar1))) &
                        0xfffffffcU)) {
                FUN_0001d4c0(
                    iVar1,
                    *((int32_t*)(in_EAX + 0x0cU)),
                    local_8, 0, 0);
            }

            *((uint8_t*)(in_EAX + 0x15U)) = 0;
        }

        // Follow two 32-bit address loads, then read a float at offset 0x2c.
        // The comparison literal is unsuffixed, as in the supplied pseudocode.
        // TODO: Verify its exact machine-level floating-point representation.
        if (*((float*)(*((uint32_t*)(*((uint32_t*)(in_EAX + 0x08U)))) +
                0x2cU)) != 3.4028235e+38) {
            break;
        }

        iVar1 = *((int32_t*)(in_EAX + 0x08U));

        if ((iVar1 != 0) &&
            ((BF_BITS_TO_I32(*((uint32_t*)(in_EAX + 0x0cU)) -
                  ((uint32_t)(iVar1))) >> 2) != 0)) {
            if (*((uint8_t*)(in_EAX + 0x15U)) != 0) {
                if (4 < BF_BITS_TO_I32((*((uint32_t*)(in_EAX + 0x0cU)) -
                             ((uint32_t)(iVar1))) &
                            0xfffffffcU)) {
                    // This call passes the byte directly, unlike the earlier
                    // calls that pass the partially known local_8 word.
                    FUN_0001d4c0(
                        iVar1,
                        *((int32_t*)(in_EAX + 0x0cU)),
                        *((uint8_t*)(in_EAX + 0x14U)),
                        0, 0);
                }

                *((uint8_t*)(in_EAX + 0x15U)) = 0;
            }

            puVar2 = ((uint32_t*)(*((uint32_t*)(*((uint32_t*)(in_EAX + 0x08U))))));

            FUN_0001ba60();

            if (puVar2 != NULL) {
                // Load the table address from the first 4-byte word and call
                // its first entry. TODO: Resolve the complete indirect ABI.
                ((TODO_VirtualEntry32*)(*puVar2))[0](1);
            }
        }
    }

    return;
}
