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

// Brute Force: 0x00018040 | Ghidra label FUN_00018040
// Ghidra function-body SHA-256: D09AB1829C4C3624C629F135B9BAB941FCFF691F8FAFFFC280D65876F27737B2
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
#include <stdint.h>

// Evidence: FUN_00018040, entry 0x00018040.
// TODO: Recover the original calling convention and incoming EAX contract.
// The third parameter is a draft-only representation of the incoming EAX
// value; it is not evidence of a third stack argument.
// TODO: Supply verified declarations for all external FUN_* functions.
// FUN_000120f0 appears with both zero and one explicit argument in the
// pseudocode. Its actual signature, return type, and implicit register
// arguments remain unresolved. Other calls may also have implicit arguments.
extern void FUN_0004e8f0(void);
extern void FUN_00018000(int32_t in_EAX);
extern void FUN_00039f00(int param_1);
extern void FUN_00055b50(void);
extern void FUN_00015fe0(void);
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern void FUN_0005e8b0(int *param_1,char param_2);

void FUN_00018040(int32_t param_1,
                  uint32_t param_2,
                  int32_t in_EAX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    // param_1 contains address bits. Unsigned address arithmetic represents
    // 32-bit x86 effective-address wrapping for the evidenced byte offsets.
    const uint32_t base_address = ((uint32_t)(param_1));

    int32_t iVar1;
    uint32_t uVar2; // Opaque 32-bit value (Ghidra undefined4).
    uint32_t uVar3; // Opaque 32-bit value (Ghidra undefined4).

    // Offset 0x58: signed 32-bit field; purpose unknown.
    if ((*((int32_t*)(base_address + 0x58u)) != in_EAX) ||
        (*((int32_t*)(base_address + 0x58u)) == 5)) {
        switch (in_EAX) {
        case 0:
            // Offset 0x3C4: unsigned 32-bit field; test mask 0x100.
            if ((*((uint32_t*)(base_address + 0x3C4u)) & 0x100u) != 0u) {
                in_EAX = 4;
            }
            // Intentional fallthrough, including when in_EAX remains zero.
        case 4:
            // Offsets 0x474 and 0x46C: opaque 4-byte fields.
            *((uint32_t*)(base_address + 0x474u)) = 0u;
            *((uint32_t*)(base_address + 0x46Cu)) = 0u;

            // Offset 0x470: 1-byte field; preserve the exact mask and OR.
            *((uint8_t*)(base_address + 0x470u)) =
                ((uint8_t)((*((uint8_t*)(base_address + 0x470u)) & 0xFA) | 2));

            FUN_0004e8f0();

            // Offset 0x3C4: clear bit zero of the 32-bit field.
            *((uint32_t*)(base_address + 0x3C4u)) =
                *((uint32_t*)(base_address + 0x3C4u)) & 0xFFFFFFFEu;
            break;

        case 5:
            // Offset 0x8AC: store all four opaque bytes of param_2.
            *((uint32_t*)(base_address + 0x8ACu)) = param_2;
            // Intentional fallthrough.
        case 1:
        case 3:
            FUN_0004e8f0();
        }

        *((int32_t*)(base_address + 0x58u)) = in_EAX;
        FUN_00018000();
        FUN_00039f00(param_1);
        FUN_00055b50();
        FUN_00015fe0();
        FUN_0001a4e0();

        iVar1 = FUN_000120f0();
        if ((iVar1 != 0) &&
            (iVar1 = FUN_000120f0(),
             *((int32_t*)(((uint32_t)(iVar1)) + 0x59Cu)) != 0)) {
            // Offset 0x59C is a signed 32-bit field of the second result.
            // The evidence does not null-check that second result.
            // Preserve each call separately; return values may differ.
            FUN_000120f0();
            uVar3 = 1u;
            uVar2 = FUN_000120f0(1);
            FUN_0005e8b0(uVar2, uVar3);
        }
    }

    return;
}
