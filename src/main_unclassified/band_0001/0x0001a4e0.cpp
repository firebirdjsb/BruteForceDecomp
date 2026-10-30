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

// Brute Force: 0x0001a4e0 | Ghidra label FUN_0001a4e0
// Ghidra function-body SHA-256: 2C8D93A51F207FEB38B8784AE19E06FE53FBCDD18D2A5B24EFF2314B8834B08A
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
#include <stddef.h>
#include <stdint.h>

// Function index: 76; entry: 0x0001a4e0.
// Recorded body SHA256:
// 2C8D93A51F207FEB38B8784AE19E06FE53FBCDD18D2A5B24EFF2314B8834B08A
//
// TODO: Supply declarations for the referenced FUN_* functions and PTR_*
// symbols from further evidence; their implementations and ABIs are unknown.
// TODO: Bind unaff_EDI to the incoming EDI register value. It is an implicit
// input in the pseudocode, not evidence of a global or an explicit parameter.
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern void FUN_00015fe0(void);
extern void FUN_0008f6e0(std::uint32_t guest_edx);
extern undefined1 FUN_0003b450(void);
extern void FUN_0003abe0(float param_1);

uint32_t /* TODO: The unaff_EDI parameter(s) explicitly MODEL incoming register/FS or post-call values.
   They are NOT established original stack parameters or ABI declarations. */
FUN_0001a4e0(uint32_t * unaff_EDI)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(int32_t) == 4, "Requires 32-bit integers.");
#endif

    typedef uint8_t undefined;

    // These call signatures express only the visible arguments/results.
    // TODO: Verify calling conventions, hidden register inputs, and return types.
    typedef int32_t (*CallReturningInt)(int32_t);
    typedef void (*CallWithStackAddress)(void*);

    // Preserve the relative stack locations, including possible aliasing
    // through addresses passed to external calls. Gaps are untyped storage.
    // TODO: Verify actual object boundaries and stack layout from instructions.
    struct StackFrame
    {
        uint8_t unknown_a8[4];       // -0xa8: &stack0xffffff58
        uint32_t uStack_a4;          // -0xa4
        uint32_t uStack_a0;          // -0xa0
        uint32_t uStack_9c;          // -0x9c
        uint32_t uStack_98;          // -0x98
        uint32_t uStack_94;          // -0x94
        uint32_t uStack_90;          // -0x90
        undefined**** ppppuStack_8c;      // -0x8c
        undefined*** pppuStack_88;       // -0x88
        undefined** ppuStack_84;         // -0x84
        undefined** ppuStack_80;         // -0x80
        uint8_t unknown_7c[4];       // -0x7c
        uint32_t uStack_78;          // -0x78
        int32_t iStack_74;           // -0x74
        uint32_t uStack_70;          // -0x70
        uint32_t uStack_6c;          // -0x6c
        uint8_t unknown_68[4];       // -0x68
        uint32_t uStack_64;          // -0x64
        int32_t iStack_60;           // -0x60
        uint32_t uStack_5c;          // -0x5c
        uint32_t uStack_58;          // -0x58
        uint32_t uStack_54;          // -0x54
        uint8_t bStack_50;           // -0x50
        uint8_t unknown_4f[3];
        uint8_t bStack_4c;           // -0x4c
        uint8_t unknown_4b[3];
        uint8_t unknown_48[4];       // -0x48
        undefined** ppuStack_44;         // -0x44
        undefined** ppuStack_40;         // -0x40
        uint32_t uStack_3c;          // -0x3c
        uint8_t unknown_38[4];       // -0x38
        int32_t iStack_34;           // -0x34
        uint32_t uStack_30;          // -0x30
        uint32_t uStack_2c;          // -0x2c
        uint32_t uStack_28;          // -0x28
        uint8_t unknown_24[4];       // -0x24
        int32_t iStack_20;           // -0x20
        uint32_t uStack_1c;          // -0x1c
        uint32_t uStack_18;          // -0x18
        uint32_t uStack_14;          // -0x14
        uint32_t uStack_10;          // -0x10
        uint8_t bStack_c;            // -0x0c
        uint8_t unknown_b[3];
        uint8_t bStack_8;            // -0x08
        uint8_t unknown_7[3];
        uint8_t unknown_4[4];        // -0x04
    };

    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(struct StackFrame) == 0xa8);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(offsetof(struct StackFrame, uStack_a4) == 0x04);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(offsetof(struct StackFrame, ppppuStack_8c) == 0x1c);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(offsetof(struct StackFrame, ppuStack_44) == 0x64);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(offsetof(struct StackFrame, bStack_c) == 0x9c);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(offsetof(struct StackFrame, bStack_8) == 0xa0);
#endif

    // Deliberately no initialization beyond the assignments below.
    // TODO: The pseudocode reads several byte locals before defining them.
    // Their provenance is unresolved; these reads are not established as
    // well-defined C++ behavior. Zero-initializing would invent initial values.
    struct StackFrame s;

    bool bVar1;
    bool bVar2;
    int32_t iVar3;

    iVar3 = FUN_000120f0();

    // 32-bit address chain: +0x08, then +0x0bec, then vtable slot +0x0c.
    // Integer-to-pointer conversions retain the target ABI assumption.
    iVar3 =
        (*((CallReturningInt*)(**((int32_t**)(*((int32_t*)(iVar3 + 0x08)) + 0x0bec))
            + 0x0c)))(iVar3);

    if (((iVar3 == 0) ||
         (*((int32_t*)(iVar3 + 0x24)) == 0)) ||
        ((*((uint8_t*)(*((int32_t*)(iVar3 + 0x24)) + 0x14))
          & 2) == 0))
    {
        bVar1 = false;
    }
    else
    {
        bVar1 = true;
    }

    bVar2 = false;

    // int32_t indices 0x10b, 0x103, and 0x104 correspond to byte
    // offsets +0x42c, +0x40c, and +0x410 from incoming EDI.
    if ((unaff_EDI[0x10b] == 0) && (!bVar1))
    {
        FUN_00015fe0();
        bVar2 = true;
    }

    // TODO: Confirm signed subtraction overflow behavior and the right shift
    // of negative values against the original x86 instructions/compiler ABI.
    if ((unaff_EDI[0x103] == 0) ||
        (((unaff_EDI[0x104] - unaff_EDI[0x103]) >> 2) == 0))
    {
        s.bStack_c = s.bStack_c & 0xfe;
        s.uStack_3c = 2;
        s.uStack_90 = 2;
        s.pppuStack_88 = &s.ppuStack_44;
        s.bStack_8 = s.bStack_8 & 0xfe;
        s.ppuStack_44 = &PTR_FUN_003a479c;
        s.iStack_34 = 0;
        s.iStack_20 = 0;
        s.ppuStack_40 = &PTR_FUN_003a4f64;
        s.uStack_28 = 0;
        s.uStack_2c = 0;
        s.uStack_30 = 0;
        s.uStack_18 = 0;
        s.uStack_14 = 0;
        s.uStack_10 = 0;
        s.uStack_1c = 0;
        s.uStack_a4 = 0;
        s.uStack_a0 = 0;
        s.uStack_9c = 0;
        s.uStack_98 = 0;
        s.uStack_94 = 0;
        s.ppppuStack_8c = NULL;

        // Vtable byte offset +0x1c; only the visible stack argument is shown.
        (*((CallWithStackAddress*)(*unaff_EDI + 0x1c)))(&s.uStack_a4);

        s.bStack_50 = s.bStack_50 & 0xfe;
        s.bStack_4c = s.bStack_4c & 0xfe;

        // Preserve the literal pointer value 0x00000003 from the pseudocode.
        // TODO: Verify whether this slot's inferred pointer type is correct.
        s.ppuStack_80 = ((undefined**)(((uint32_t)(3))));
        s.uStack_94 = 3;
        s.ppppuStack_8c = &s.pppuStack_88;
        s.pppuStack_88 = ((undefined***)(&PTR_FUN_003a479c));
        s.uStack_78 = 0;
        s.uStack_64 = 0;
        s.ppuStack_84 = &PTR_FUN_003a4f64;
        s.uStack_6c = 0;
        s.uStack_70 = 0;
        s.iStack_74 = 0;
        s.uStack_5c = 0;
        s.uStack_58 = 0;
        s.uStack_54 = 0;
        s.iStack_60 = 0;
        bVar2 = false;
        s.uStack_a4 = 0;
        s.uStack_a0 = 0;
        s.uStack_9c = 0;
        s.uStack_98 = 0;
        s.uStack_90 = 0;

        // Preserve the distinct address &stack0xffffff58 (-0xa8).
        // TODO: Verify this unusual stack argument and the unresolved contents
        // at -0xa8; do not substitute &uStack_a4 without instruction evidence.
        (*((CallWithStackAddress*)(*unaff_EDI + 0x1c)))(&s.unknown_a8);

        s.ppuStack_80 = &PTR_FUN_003a4f64;

        // TODO: Verify hidden arguments/register state for each external call;
        // the pseudocode supplies no explicit arguments to FUN_0008f6e0.
        if (s.iStack_60 != 0)
        {
            FUN_0008f6e0();
        }

        if (s.iStack_74 != 0)
        {
            FUN_0008f6e0();
        }

        s.ppuStack_84 = &PTR_LAB_003a4f50;
        s.ppuStack_40 = &PTR_FUN_003a4f64;

        if (s.iStack_20 != 0)
        {
            FUN_0008f6e0();
        }

        if (s.iStack_34 != 0)
        {
            FUN_0008f6e0();
        }
    }

    // unaff_EDI + 5 addresses byte offset +0x14; inspect only its first byte.
    if (((*((uint8_t*)(unaff_EDI + 5)) & 2) == 0) &&
        (unaff_EDI[0x10b] == 0))
    {
        FUN_0003b450();
    }
    else if (bVar2)
    {
        FUN_0003abe0(0);

        if (unaff_EDI[0x10b] == 0)
        {
            return 0;
        }
    }

    return 1;
}
