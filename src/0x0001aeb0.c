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

// Brute Force: 0x0001aeb0 | Ghidra label FUN_0001aeb0
// Ghidra function-body SHA-256: E9ECD032EE8BBD7FD238375D9038FC6100F19410929E68CE93FC6702A7248EF9
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x0001aeb0; function index: 84.
// Recorded body SHA256:
// E9ECD032EE8BBD7FD238375D9038FC6100F19410929E68CE93FC6702A7248EF9
//
// TODO: Requires <cstdint> and the missing external declarations.
// TODO: Requires the original 32-bit x86 ABI and calling conventions.
// TODO: float10 must represent the decompiler's x87 extended-precision type;
//       substituting double or a platform-specific long double is unverified.
// TODO: unaff_EBX, unaff_EDI, and extraout_EDX below are unresolved register
//       bindings, not established globals. Their definitions and dataflow must
//       be recovered. In particular, extraout_EDX depends on executed calls,
//       and the float interpretation of unaff_EDI remains uncertain.
// TODO: External function signatures and PTR_FUN_003a4f64's type are unknown.

void /* TODO: The unaff_EBX, extraout_EDX, unaff_EDI parameter(s) explicitly MODEL incoming register/FS or post-call values.
   They are NOT established original stack parameters or ABI declarations. */
FUN_0001aeb0(uint32_t unaff_EBX, uint32_t extraout_EDX, uint32_t unaff_EDI)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(float) == 4, "Requires 32-bit float storage.");
#endif

    float fVar1;
    char cVar2;
    int32_t iVar3;
    float10 fVar4;

    // TODO: Preserve the original stack layout and possible aliasing.
    // These declarations alone do not establish the recorded stack offsets.
    // FUN_0004d230 may affect adjacent stack storage; its write extent is unknown.
    uint8_t auStack_44[4];
    uint8_t** ppuStack_40;
    int32_t iStack_34;
    int32_t iStack_20;

    iVar3 = FUN_000120f0();

    if ((((*((int32_t*)(iVar3 + 0x1f8)) == 8) ||
          ((cVar2 = FUN_00126a40()) != '\0')) ||
         ((cVar2 = FUN_00126b40()) != '\0') ||
         (extraout_EDX == 7)) &&
        (
            // TODO: The one-argument signature and calling convention here
            // express only the decompiled call shape. No receiver is inferred.
            ((void (*)(uint32_t))(**((uint32_t**)(unaff_EBX + 0x9a4))))(
                    *((uint32_t*)(unaff_EBX + 0x440))),
            ((*((uint8_t*)(unaff_EBX + 0x9ac)) & 1) == 0 ||
             ((*((float*)(unaff_EBX + 0x9a8)) < 0.0) !=
              (*((float*)(unaff_EBX + 0x9a8)) == 0.0)))
        ))
    {
        // Preserve the raw 32-bit stores rather than substituting float stores.
        *((uint32_t*)(unaff_EBX + 0x9b0)) = 0x3f000000;
        *((uint32_t*)(unaff_EBX + 0x9a8)) = 0x3f000000;

        *((uint8_t*)(unaff_EBX + 0x9ac)) =
            (*((uint8_t*)(unaff_EBX + 0x9ac)) & 0xf9) | 1;

        // Read the signed 32-bit address value at +0x0c, then float at +0x21c.
        fVar1 = *((float*)(*((int32_t*)(iVar3 + 0x0c)) + 0x21c));

        // Follow the pointer at +0x5a4, read its first 32-bit value, then
        // load the function pointer at byte offset +0xe8.
        // TODO: Confirm the return ABI, calling convention, and implicit inputs.
        fVar4 = ((float10)((*((float10 (**)())(**((int32_t**)(iVar3 + 0x5a4)) + 0xe8)))()));

        FUN_00012320(0x34);

        FUN_0004d230(
            auStack_44,
            ((float)(fVar4 *
                ((float10)(fVar1)) *
                ((float10)(unaff_EDI)) *
                ((float10)(15.0)))),
            0);

        // TODO: Confirm this symbol's pointer type and the stack store's role.
        ppuStack_40 = &PTR_FUN_003a4f64;

        // TODO: Neither stack integer has an explicit initialization in the
        // evidence. Do not assume zero or independent local-variable storage.
        if (iStack_20 != 0)
        {
            // TODO: Recover any implicit register or stack arguments.
            FUN_0008f6e0();
        }

        if (iStack_34 != 0)
        {
            // TODO: Recover any implicit register or stack arguments.
            FUN_0008f6e0();
        }
    }

    return;
}
