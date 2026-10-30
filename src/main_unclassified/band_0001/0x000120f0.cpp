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

// Brute Force: 0x000120f0 | Ghidra label FUN_000120f0
// Ghidra function-body SHA-256: 9FEFE68C61CEC0943A913B1988495825BFD1E3F128E1F92DB0A3DA5D8376BB9C
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x000120f0
// Recorded body SHA256: 9FEFE68C61CEC0943A913B1988495825BFD1E3F128E1F92DB0A3DA5D8376BB9C
// TODO: Requires <cstdint>, <cstddef>, and the actual declaration of FUN_0008f6e0.
// TODO: Ghidra shows no formal parameters. This parameter represents its
// unresolved incoming EAX value; it does not establish the original calling ABI.
uint32_t FUN_000120f0(int32_t in_EAX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    // Model the adjacent four-byte stack slots implied by &local_8 + 4.
    // TODO: Verify their placement and address-based aliasing against assembly.
    struct LocalSlots
    {
        uint32_t local_8;
        int32_t local_4;
    } locals;

    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(offsetof(struct LocalSlots, local_4) == 4,
                  "local_4 must follow local_8 by four bytes.");
#endif

    uint32_t* puVar2 = &locals.local_8;
    locals.local_8 = 0;

    // Preserve Ghidra's signed 32-bit address arithmetic and four-byte load.
    // TODO: Verify address arithmetic assumptions and validity of incoming EAX.
    bool bVar3 =
        *((int32_t*)(in_EAX + 8)) != 0;

    if (bVar3)
    {
        locals.local_4 = 0;
    }
    else
    {
        puVar2 = ((uint32_t*)(in_EAX + 0xc));
    }

    // Read four bytes at puVar2 + 4 bytes, preserving the signed address cast.
    uint32_t uVar1 =
        *((uint32_t*)(((int32_t)(puVar2)) + 4));

    // This condition appears unreachable after local_4 = 0 on the true path.
    // TODO: Verify that apparent redundancy; retain the evidence's call site.
    if (bVar3 && (locals.local_4 != 0))
    {
        FUN_0008f6e0();
    }

    return uVar1;
}
