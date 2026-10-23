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

// Brute Force: 0x0001b8c0 | Ghidra label FUN_0001b8c0
// Ghidra function-body SHA-256: 08F8C0A67166587745AD6B770679B1F9A9F150FFB0F9BA5ED0EA28E4943C57ED
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
#include <stdint.h>
#include <string.h>

void FUN_0001b8c0(void)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(uint32_t) == 4, "Requires 4-byte words.");
#endif

    // TODO: Confirm the function ABI and original stack-frame layout.
    // This backing storage models the five consecutive 4-byte source words:
    // offsets 0..11: local_14[3]; offset 12: local_8;
    // offsets 13..15: unknown bytes; offsets 16..19: local_4.
    // The final two words are backing storage, not proven array elements.
    uint32_t source_words[5];
    uint32_t auStack_30[5];

    source_words[0] = 0;
    source_words[1] = 0;
    source_words[2] = 9;
    ((unsigned char*)(source_words))[12] = 0;
    source_words[4] = 0;

    uint32_t* puVar2 = source_words;
    uint32_t* puVar3 = auStack_30;

    for (int32_t iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
        // Copy the 4-byte object representation without evaluating an
        // indeterminate integer. Bytes 13..15 remain unspecified.
        memcpy(puVar3, puVar2, 4);
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
    }

    // TODO: Confirm the external declaration, calling convention, and whether
    // auStack_30 represents outgoing stack arguments. The pseudocode shows
    // no explicit arguments; ordinary C++ does not guarantee this layout.
    extern void FUN_001b38d0(void);
    FUN_001b38d0();
    return;
}
