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

// Brute Force: 0x0001b650 | Ghidra label FUN_0001b650
// Ghidra function-body SHA-256: FF8BB39FA468AA129F0F09006D512C692BC91644ED6A2FC939B6317A9E9EBF72
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
#include <stdint.h>

// Function index: 88; entry: 0x0001b650.
// Recorded body SHA256:
// FF8BB39FA468AA129F0F09006D512C692BC91644ED6A2FC939B6317A9E9EBF72
//
// TODO: These explicit parameters represent incoming ECX, incoming EDX,
// and Ghidra's unresolved FS-relative pointer. They are not a recovered ABI.
// TODO: Supply declarations and verify the ABIs of all external functions
// and the identity/type of LAB_00307960.
void FUN_0001b650(int32_t in_ECX,
                  uint32_t in_EDX,
                  uint32_t* unaff_FS_OFFSET)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    uint32_t uVar1;
    int32_t iVar2;
    uint32_t local_10;
    uint8_t* puStack_c;
    uint32_t local_8;

    // TODO: Verify exception-registration stack layout and compiler support.
    // Ordinary C++ locals do not guarantee the layout implied by this sequence.
    local_8 = 0xffffffffu;
    puStack_c = ((uint8_t*)(&LAB_00307960));
    local_10 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = ((uintptr_t)(&local_10));

    if (in_EDX < 0x40000000u) {
        // Preserve the incoming address bits; offsets are byte offsets.
        const uint32_t base = ((uint32_t)(in_ECX));

        if (*((int32_t*)(base + 0x04u)) == 0) {
            uVar1 = 0;
        } else {
            // TODO: Verify subtraction overflow and signed right-shift behavior
            // against the x86 instructions. This retains Ghidra's signed
            // subtraction and shift; portable C++ overflow is not defined.
            uVar1 = ((uint32_t)((*((int32_t*)(base + 0x0cu)) -
                 *((int32_t*)(base + 0x04u))) >> 2));
        }

        if (uVar1 < in_EDX) {
            // TODO: Recover implicit register/stack arguments, if any.
            iVar2 = FUN_002ea01d();
            local_8 = 0;
            FUN_001e0da0();
            local_8 = 0xffffffffu;

            if (*((int32_t*)(base + 0x04u)) == 0) {
                // Unsigned 32-bit arithmetic follows the in_EDX operand.
                *((uint32_t*)(base + 0x0cu)) =
                    in_EDX * 4u + iVar2;
                *((int32_t*)(base + 0x08u)) = iVar2;
                *((int32_t*)(base + 0x04u)) = iVar2;
                *unaff_FS_OFFSET = local_10;
                return;
            }

            // Ghidra warning: this subroutine does not return.
            // TODO: Verify that property and any associated unwind behavior.
            thunk_FUN_00237ec0();
        }
    } else {
        FUN_00038940();
    }

    *unaff_FS_OFFSET = local_10;
    return;
}
