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

static inline uintptr_t bf_00018c40_address32(int32_t value) {
        return ((uint32_t)(value));
    }
static inline uint32_t bf_00018c40_vtable_slot(int32_t* object,
                                 uint32_t byte_offset) {
        return *((uint32_t*)((uintptr_t)(uint32_t)(object[0]) + byte_offset));
    }
static inline float bf_00018c40_low_float(uint64_t value) {
        return BF_BITS_TO_F32(((uint32_t)(value)));
    }
static inline float bf_00018c40_high_float(uint64_t value) {
        return BF_BITS_TO_F32(((uint32_t)(value >> 32)));
    }

// Brute Force: 0x00018c40 | Ghidra label FUN_00018c40
// Ghidra function-body SHA-256: 95574CF2F80D742D1965DCA2D8CD7EF4F037AD1F62199D67D52EFD09624760CF
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Function index: 68; entry: 0x00018c40.
// Recorded body SHA256:
// 95574CF2F80D742D1965DCA2D8CD7EF4F037AD1F62199D67D52EFD09624760CF
//
// TODO: Requires <cstdint>, <cstddef>, <cstring>, <bit>, <cmath>,
// and the target compiler's SSE intrinsic declarations.
// TODO: Ghidra warned:
// "Restarted to delay deadcode elimination for space: stack".
// Stack aliases, apparent dead stores, and unusual control flow remain uncertain.
// TODO: Calling conventions, implicit register arguments, and hidden stack
// arguments are unresolved. The declarations below describe only visible calls;
// in particular, calls with no visible arguments may read or write this frame.
// TODO: Several Ghidra casts between float, undefined words, and pointers are
// ambiguous. Where those casts shuttle stack/vector lanes, this draft preserves
// their 32-bit representations with bit_cast. Verify against instructions.
// No compilation, execution, or binary equivalence is asserted.

char FUN_00018c40(
    int32_t* param_1,
    float* param_2,
    float* param_3,
    float* param_4,
    uint32_t param_5, // Ghidra undefined4; interpretation unresolved.
    char param_6,
    int32_t param_7)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(float) == 4, "Requires 32-bit float storage.");
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(int32_t) == 4);
#endif

    // TODO: External signatures and calling conventions are incomplete.
    extern int32_t FUN_000120f0();
    extern void FUN_00162c60();
    extern void FUN_0001d0c0();
    extern void FUN_0001fd40();
    extern void FUN_000a3d50();
    extern void FUN_0001fe40(void*, int32_t, int32_t, void (*)());
    extern void FUN_00115b00(int32_t, uint32_t, float*);
    extern void FUN_0001fc70(void*, float*, float);
    extern void FUN_0001fb70(void*, float*, float*);
    extern int32_t FUN_000ddd10(
        uint32_t, float*, void*, void*, float*, float*, void*, float,
        int32_t);
    extern void FUN_000124f0(uint32_t);
    extern float* FUN_00018b50(float*, float*);
    /* TODO: PTR_LAB_0039cc18 type unresolved; see external symbol declarations. */

    // TODO: These call types retain the absence of visible arguments.
    // A receiver in ECX or another implicit ABI dependency is not reconstructed.
    typedef int32_t* (*UnknownPointerCall)();
    typedef int32_t (*UnknownIntegerCall)();
    typedef void (*UnknownVoidCall)();

    // Preserve the relative stack locations shown by Ghidra. Padding represents
    // unlisted bytes, not inferred fields. Nothing is zero-initialized here.
#pragma pack(push, 4)
    struct StackFrame
    {
        float fStack_324;
        int32_t* piStack_320;
        float fStack_31c;
        float fStack_318;
        float fStack_314;
        float fStack_310;
        float fStack_30c;
        float fStack_308;
        float fStack_304;
        float fStack_300;
        uint64_t uStack_2fc;
        float fStack_2f4;
        float fStack_2f0;
        float fStack_2ec;
        float fStack_2e8;
        float fStack_2e4;
        float fStack_2e0;
        float fStack_2dc;
        float fStack_2d8;
        float fStack_2d4;
        char acStack_2d0[12];
        float fStack_2c4;
        float fStack_2c0;
        float fStack_2bc;
        float fStack_2b8;
        float fStack_2b4;
        float fStack_2b0;
        float fStack_2ac;
        float fStack_2a8;
        float fStack_2a4;
        float fStack_2a0;
        float fStack_29c;
        float fStack_298;
        float fStack_294;
        uint32_t uStack_290;
        float fStack_28c;
        float fStack_288;
        uint32_t uStack_284;
        float fStack_280;
        uint32_t uStack_27c;
        float fStack_278;
        float fStack_274;
        float fStack_270;
        uint8_t auStack_26c[8];
        float fStack_264;
        float fStack_260;
        float fStack_25c;
        float fStack_258;
        uint32_t uStack_254;
        uint32_t uStack_250;
        float fStack_24c;
        float fStack_248;
        uint32_t uStack_244;
        float fStack_240;
        float fStack_23c;
        float fStack_238;
        float fStack_234;
        float fStack_230;
        uint32_t uStack_22c;
        uint32_t uStack_228;
        float fStack_224;
        uint32_t uStack_220;
        float fStack_21c;
        uint8_t auStack_218[4];
        float fStack_214;
        uint8_t unlisted_210[4];
        uint8_t auStack_20c[16];
        float afStack_1fc[9];
        float afStack_1d8[4];
        uint32_t uStack_1c8;
        uint32_t uStack_1c4;
        float fStack_1c0;
        uint32_t uStack_1bc;
        uint32_t uStack_1b8;
        uint8_t unlisted_1b4[0x4c];
        float afStack_168[9];
        int32_t aiStack_144[11];
        void** appuStack_118[65];
        uint32_t uStack_14;
        uint8_t uStack_10;
        uint8_t unlisted_00f[3];
        uint32_t uStack_c;
        uint32_t uStack_8;
        uint32_t uStack_4;
    };
#pragma pack(pop)

    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(struct StackFrame) == 0x324);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(offsetof(struct StackFrame, uStack_2fc) == 0x28);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(offsetof(struct StackFrame, afStack_1d8) == 0x14c);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(offsetof(struct StackFrame, afStack_168) == 0x1bc);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(offsetof(struct StackFrame, appuStack_118) == 0x20c);
#endif

    struct StackFrame s;

    // Address-valued signed words retain their 32-bit bit patterns.
    /* Former C++ lambda address32 lifted to static C11 function. */

    // byte_offset is measured from the vtable address stored at object[0].
    /* Former C++ lambda vtable_slot lifted to static C11 function. */

    /* Former C++ lambda low_float lifted to static C11 function. */

    /* Former C++ lambda high_float lifted to static C11 function. */

    // TODO: Ghidra declares only four floats at -0x1d8 but indexes this region
    // as nine 12-byte elements. Preserve writes into the encompassing frame
    // instead of treating the four-element declaration as a reliable boundary.
    /* TODO: This closure aliases the current local StackFrame. */
#define write_1d8_float(idx, value_expr) do { \
    float bf_write_tmp = (value_expr); \
    memcpy((unsigned char*)&s + offsetof(struct StackFrame, afStack_1d8) + (idx) * 4u, &bf_write_tmp, 4u); \
} while(0)

    uint64_t uVar1;
    char cVar2;
    float fVar3;
    int32_t iVar4;
    int32_t* piVar5;
    int32_t iVar6;
    float* pfVar7;
    char cVar8;
    uint32_t uVar9;
    float* pfVar10;
    float fVar11;

    // TODO: The incoming XMM0 value is absent from the recovered signature.
    // This local intentionally does not invent an initialization or ABI capture.
    __m128 in_XMM0;
    __m128 auVar12;
    float xmm_lanes[4];

    // param_1 uses four-byte indexing: [0xf1] = +0x3c4,
    // [0x6a] = +0x1a8; the latter contains a 32-bit address.
    if (((((uint32_t)(param_1[0xf1])) & 0x1000u) != 0) ||
        (*((int32_t*)(bf_00018c40_address32(param_1[0x6a]))) == 1))
    {
        return '\0';
    }

    iVar4 = FUN_000120f0();
    piVar5 = ((UnknownPointerCall)(bf_00018c40_vtable_slot(param_1, 0x24)))();

    uVar9 = 0;
    param_2[2] = 0.0f;
    param_2[1] = 0.0f;
    *param_2 = 0.0f;

    s.uStack_c = 8;
    s.uStack_4 = 8;
    s.uStack_14 = 0;
    s.uStack_10 = 1;
    s.appuStack_118[0] = &PTR_LAB_0039cc18;
    s.uStack_8 = 0x435a1018;
    s.piStack_320 = piVar5;

    FUN_00162c60();
    cVar8 = '\0';

    // TODO: Retains the displayed numeric cast. Confirm whether Ghidra instead
    // intended a float reinterpretation of the word at param_1 + 0x924.
    if (0.0f < ((float)(param_1[0x249])))
    {
        return '\0';
    }

    iVar6 = ((UnknownIntegerCall)(bf_00018c40_vtable_slot(piVar5, 0x0c)))();

    // Byte offsets +0x24, +0x28, +0x2c from the returned 32-bit address.
    s.fStack_2bc =
        *((float*)(bf_00018c40_address32(iVar6) + 0x2c));
    s.fStack_2c4 =
        *((float*)(bf_00018c40_address32(iVar6) + 0x24));
    s.fStack_324 = param_3[2];
    s.fStack_2c0 =
        *((float*)(bf_00018c40_address32(iVar6) + 0x28)) - 0.25f;
    s.fStack_2d8 = param_3[1];
    s.fStack_2dc = *param_3;
    s.fStack_304 =
        *((float*)(bf_00018c40_address32(iVar4) + 0x720));
    s.fStack_2d4 = s.fStack_324;

    // TODO: Hidden outputs must explain subsequent reads of frame slots.
    FUN_0001d0c0();

    s.fStack_308 = s.fStack_248;
    s.fStack_324 = s.fStack_248;
    s.fStack_310 = s.fStack_260;
    s.fStack_30c = 0.0f;

    FUN_0001fd40();

    s.fStack_2ec = -s.fStack_308;
    s.fStack_2f0 = -s.fStack_30c;
    s.fStack_2f4 = -s.fStack_310;

    // Preserve approximate scalar RSQRTSS, including the source upper lanes.
    auVar12 = _mm_move_ss(
        in_XMM0,
        _mm_rsqrt_ss(_mm_set_ss(
            s.fStack_240 * s.fStack_240 +
            s.fStack_258 * s.fStack_258)));

    s.fStack_2e0 = _mm_cvtss_f32(auVar12);
    s.fStack_2e8 = s.fStack_2e0 * s.fStack_258;
    s.fStack_2e4 = s.fStack_2e0 * 0.0f;
    s.fStack_2e0 = s.fStack_240 * s.fStack_2e0;
    s.fStack_324 = 0.5f;

    auVar12 = _mm_setr_ps(
        s.fStack_2e8 * 0.5f,
        0.0f, // Lane 1 is explicitly all-zero bits in the pseudocode.
        s.fStack_2e4 * 0.5f,
        s.fStack_2e0 * 0.5f);
    _mm_storeu_ps(xmm_lanes, auVar12);

    // Copy the upper eight bytes without numeric integer conversion.
    memcpy(&s.uStack_2fc, xmm_lanes + 2, 8);
    s.fStack_2c4 = s.fStack_2c4 + xmm_lanes[0];
    s.fStack_2c0 = xmm_lanes[2] + s.fStack_2c0;
    s.fStack_2bc = xmm_lanes[3] + s.fStack_2bc;
    s.fStack_314 = xmm_lanes[3];
    s.fStack_300 = xmm_lanes[0];
    s.fStack_264 = xmm_lanes[3];

    // TODO: 0x0c-byte stride and count 9 exceed the declared four-float member.
    FUN_0001fe40(s.afStack_1d8, 0x0c, 9, FUN_000a3d50);

    s.acStack_2d0[0] = '\0';
    s.acStack_2d0[1] = '\0';
    s.acStack_2d0[2] = '\0';
    s.acStack_2d0[3] = '\0';
    s.acStack_2d0[4] = '\0';
    s.acStack_2d0[5] = '\0';
    s.acStack_2d0[6] = '\0';
    s.acStack_2d0[7] = '\0';
    s.acStack_2d0[8] = 0;

    s.fStack_318 = 0.0f;
    FUN_00115b00(iVar4, 0x3ecccccd, &s.fStack_318);
    if (100.0f < fabs(s.fStack_318))
    {
        s.fStack_318 = 0.0f;
    }

LAB_00018f30:
    // param_1[0xd5] (+0x354) contains an address. Its +4 and +8
    // words participate in a signed difference and signed division by 0x14.
    iVar4 = *((int32_t*)(bf_00018c40_address32(param_1[0xd5]) + 4));

    // TODO: Signed-overflow behavior of the displayed subtraction is unverified.
    if ((iVar4 == 0) ||
        (((uint32_t)((*((int32_t*)(bf_00018c40_address32(param_1[0xd5]) + 8)) -
              iVar4) /
             0x14)) <= uVar9))
    {
        goto LAB_00019530;
    }

    pfVar10 = ((float*)(((uint32_t)(*((int32_t*)(bf_00018c40_address32(param_1[0xd5]) + 4)))) +
        uVar9 * 0x14u));

    cVar2 = *((char*)(pfVar10 + 3)); // Byte offset +0x0c.

    // TODO: The pseudocode has no explicit bound against the local array sizes.
    s.acStack_2d0[uVar9] = '\0';
    if (cVar2 == '\0')
    {
        goto switchD_000192a0_default;
    }

    fVar11 = pfVar10[2];
    if (fVar11 == 0.0f)
    {
        s.fStack_274 = s.fStack_248;
        s.uStack_284 = s.uStack_254;
        s.fStack_224 = s.fStack_260;
        fVar11 = pfVar10[1];
        s.uStack_220 = s.uStack_254;
        pfVar7 = &s.fStack_224;
        s.fStack_21c = s.fStack_248;

LAB_0001909f:
        FUN_0001fc70(s.auStack_20c, pfVar7, fVar11);
    }
    else
    {
        // Retain the displayed subnormal float comparisons.
        // TODO: Verify their exact encodings and whether the field is mistyped.
        if (fVar11 == 1.4013e-45f)
        {
            s.uStack_27c = s.uStack_244;
            s.uStack_290 = s.uStack_250;
            s.fStack_230 = s.fStack_25c;
            fVar11 = pfVar10[1];
            s.uStack_22c = s.uStack_250;
            pfVar7 = &s.fStack_230;
            s.uStack_228 = s.uStack_244;
            goto LAB_0001909f;
        }

        if (fVar11 == 2.8026e-45f)
        {
            s.fStack_28c = s.fStack_240;
            s.fStack_314 = s.fStack_24c;
            s.fStack_23c = s.fStack_258;
            fVar11 = pfVar10[1];
            s.fStack_238 = s.fStack_24c;
            pfVar7 = &s.fStack_23c;
            s.fStack_234 = s.fStack_240;
            goto LAB_0001909f;
        }
    }

    // TODO: If none of the comparisons matched, auStack_20c may retain
    // previous or uninitialized contents. No missing branch is invented.
    FUN_0001fb70(s.auStack_20c, &s.fStack_300, &s.fStack_2dc);

    s.fStack_298 = bf_00018c40_low_float(s.uStack_2fc);
    s.fStack_2b4 = bf_00018c40_high_float(s.uStack_2fc);

    // CONCAT44 preserves the high word and replaces the low float's bits.
    s.uStack_2fc =
        (s.uStack_2fc & UINT64_C(0xffffffff00000000)) |
        ((uint64_t)(BF_BITS_TO_U32(bf_00018c40_low_float(s.uStack_2fc) + s.fStack_318)));

    write_1d8_float(uVar9 * 3u, s.fStack_300);
    write_1d8_float(uVar9 * 3u + 1u, s.fStack_298);
    write_1d8_float(uVar9 * 3u + 2u, bf_00018c40_high_float(s.uStack_2fc));

    FUN_0001fd40();

    if (param_4 == NULL)
    {
        if (param_6 == '\0')
        {
            pfVar7 = s.afStack_168 + uVar9;
            *pfVar7 = *pfVar10;
        }
        else
        {
            piVar5 = ((UnknownPointerCall)(bf_00018c40_vtable_slot(piVar5, 0)))();
            s.fStack_2b0 = *pfVar10;
            ((UnknownVoidCall)(bf_00018c40_vtable_slot(piVar5, 0x54)))();
            pfVar7 = s.afStack_168 + uVar9;
            *pfVar7 = s.fStack_2b0;
        }

        if (*((int32_t*)(bf_00018c40_address32(param_1[0x6a]))) == 2)
        {
            fVar11 = *pfVar7 * 0.6f;

LAB_00019188:
            *pfVar7 = fVar11;
        }
        else if (*((int32_t*)(bf_00018c40_address32(param_1[0x6a]))) == 4)
        {
            fVar11 = *pfVar7 * 1.6f;
            goto LAB_00019188;
        }

        if (s.fStack_304 <= 1.0f)
        {
            fVar11 = 1.0f;
        }
        else
        {
            fVar11 = s.fStack_304 * 0.9f;
        }
        *pfVar7 = fVar11 * *pfVar7;
    }
    else
    {
        pfVar7 = s.afStack_168 + uVar9;
        *pfVar7 = *param_4;
    }

    // Preserve the unusual boolean inequality rather than simplifying it.
    if ((*pfVar7 < 0.01f) != (*pfVar7 == 0.01f))
    {
        goto switchD_000192a0_default;
    }

    fVar11 = *pfVar7;
    piVar5 = s.aiStack_144;
    for (iVar4 = 0x0b; iVar4 != 0; iVar4 = iVar4 + -1)
    {
        *piVar5 = 0;
        piVar5 = piVar5 + 1;
    }

    // param_1[4] (+0x10) contains an address; read its word at byte offset +8.
    iVar4 = FUN_000ddd10(
        *((uint32_t*)(bf_00018c40_address32(param_1[4]) + 8)),
        &s.fStack_324,
        s.auStack_26c,
        s.auStack_218,
        &s.fStack_2c4,
        &s.fStack_300,
        s.appuStack_118,
        fVar11,
        0);

    s.acStack_2d0[uVar9] = ((char)(iVar4 != 0));
    if ((s.aiStack_144[0] == 1) && (0.7f < s.fStack_214))
    {
        s.acStack_2d0[uVar9] = '\0';
    }

    if (s.acStack_2d0[uVar9] == '\0')
    {
        goto switchD_000192a0_default;
    }

    s.afStack_1fc[uVar9] = s.fStack_324;
    if (param_4 != NULL)
    {
switchD_000192a0_switchD:
        piVar5 = s.piStack_320;
        switch (uVar9)
        {
        case 1:
            s.fStack_2a0 = s.fStack_308;
            s.fStack_2a8 = s.fStack_30c;
            *param_2 = s.fStack_310;
            param_2[1] = s.fStack_30c;
            param_2[2] = s.fStack_308;
            cVar8 = '\x01';
            uVar9 = uVar9 + 1;
            break;

        case 2:
            s.fStack_2ac = s.fStack_2ec;
            s.fStack_288 = s.fStack_2f0;
            *param_2 = s.fStack_2f4;
            param_2[1] = s.fStack_2f0;
            param_2[2] = s.fStack_2ec;
            cVar8 = '\x01';
            uVar9 = uVar9 + 1;
            break;

        case 3:
            s.fStack_2a4 = s.fStack_2d4;
            s.fStack_280 = s.fStack_2d8;
            *param_2 = s.fStack_2dc;
            param_2[1] = s.fStack_2d8;
            param_2[2] = s.fStack_2d4;
            param_2[1] = -1.0f;
            cVar8 = '\x01';
            uVar9 = uVar9 + 1;
            break;

        case 4:
            s.fStack_29c = s.fStack_2d4;
            s.fStack_278 = s.fStack_2d8;
            *param_2 = s.fStack_2dc;
            param_2[1] = s.fStack_2d8;
            param_2[2] = s.fStack_2d4;
            // TODO: Preserve this fourth-float write; output extent is unknown.
            param_2[3] = 1.0f;
            cVar8 = '\x01';
            uVar9 = uVar9 + 1;
            break;

        case 5:
            *param_2 = s.fStack_310;
            s.fStack_31c = s.fStack_308;
            param_2[1] = s.fStack_30c;
            s.fStack_294 = s.fStack_30c;
            param_2[2] = s.fStack_308;
            [[fallthrough]];

        case 0:
            cVar8 = '\x01';
            [[fallthrough]];

        default:
switchD_000192a0_default:
            uVar9 = uVar9 + 1;
            piVar5 = s.piStack_320;
            break;

        case 6:
            s.fStack_2b8 = s.fStack_2ec;
            s.fStack_270 = s.fStack_2f0;
            *param_2 = s.fStack_2f4;
            param_2[1] = s.fStack_2f0;
            param_2[2] = s.fStack_2ec;
            cVar8 = '\x01';
            uVar9 = uVar9 + 1;
            break;

        case 7:
            param_2[3] = -1.0f;
            uVar9 = uVar9 + 1;
            break;

        case 8:
            param_2[3] = 1.0f;
            uVar9 = uVar9 + 1;
            break;
        }
        goto LAB_00018f30;
    }

    if (*((int32_t*)(bf_00018c40_address32(param_1[0x6a]))) == 4)
    {
        if (s.fStack_304 <= 1.0f)
        {
            *((uint32_t*)(bf_00018c40_address32(param_1[0x6a]))) = 3;

LAB_00019517:
            FUN_000124f0(0x3fc00000);
        }
        else
        {
            param_1[0x229] = 0x3fc00000; // Four-byte store at +0x8a4.
        }
    }
    else
    {
        if (((((uint32_t)(param_1[0xf1])) & 0x400u) == 0) ||
            (*((int32_t*)(bf_00018c40_address32(param_1[0x6a]))) != 3))
        {
            goto switchD_000192a0_switchD;
        }

        if (s.fStack_304 <= 1.0f)
        {
            *((uint32_t*)(bf_00018c40_address32(param_1[0x6a]))) = 2;
            goto LAB_00019517;
        }

        param_1[0x229] = 0x3fc00000;
    }

    s.acStack_2d0[uVar9] = '\0';

    // Preserve the fall-through into postprocessing: no loop back is shown.
LAB_00019530:
    if (s.acStack_2d0[0] == '\0')
    {
        if (s.acStack_2d0[1] == '\0')
        {
            goto LAB_00019821;
        }

LAB_000197ad:
        if (s.acStack_2d0[2] == '\0')
        {
            goto LAB_00019821;
        }

        if (s.afStack_1fc[2] <= s.afStack_1fc[1])
        {
            *param_2 = s.fStack_2f4;
            param_2[1] = s.fStack_2f0;
            param_2[2] = s.fStack_2ec;
            goto LAB_00019821;
        }

        *param_2 = s.fStack_310;
        s.fStack_31c = s.fStack_308;

        // TODO: Ghidra displays "(int *)fStack_30c"; treated as a raw
        // four-byte stack-slot transfer, not a float-to-address conversion.
        s.piStack_320 = (int32_t*)(uintptr_t)BF_float_to_u32(s.fStack_30c);
    }
    else
    {
        if (s.acStack_2d0[1] != '\0')
        {
            goto LAB_000197ad;
        }
        if (s.acStack_2d0[2] != '\0')
        {
            goto LAB_00019821;
        }

        s.fStack_31c = BF_BITS_TO_F32(s.uStack_1c4);
        s.piStack_320 = ((int32_t*)(s.uStack_1c8));
        s.fStack_300 = s.afStack_1d8[3];

        FUN_0001fd40();
        FUN_000ddd10(
            *((uint32_t*)(bf_00018c40_address32(param_1[4]) + 8)),
            &s.fStack_324,
            s.auStack_26c,
            s.auStack_218,
            &s.fStack_2c4,
            &s.fStack_300,
            s.appuStack_118,
            s.afStack_168[1] * 4.0f,
            0);

        s.afStack_1fc[1] = s.fStack_324;
        s.fStack_31c = BF_BITS_TO_F32(s.uStack_1b8);
        s.piStack_320 = ((int32_t*)(s.uStack_1bc));
        s.fStack_300 = s.fStack_1c0;

        FUN_0001fd40();
        FUN_000ddd10(
            *((uint32_t*)(bf_00018c40_address32(param_1[4]) + 8)),
            &s.fStack_324,
            s.auStack_26c,
            s.auStack_218,
            &s.fStack_2c4,
            &s.fStack_300,
            s.appuStack_118,
            s.afStack_168[2] * 4.0f,
            0);

        if (s.afStack_1fc[1] <= 0.0f)
        {
LAB_000196b6:
            pfVar10 = &s.fStack_2f4;
            if (s.fStack_324 <= 0.0f)
            {
                goto LAB_000196cb;
            }
        }
        else
        {
            if (s.fStack_324 <= 0.0f)
            {
                // Retain the apparently redundant test and backward jump.
                if (s.afStack_1fc[1] <= 0.0f)
                {
                    goto LAB_000196b6;
                }
            }
            else if ((s.afStack_1fc[1] < s.fStack_324) ==
                     (s.afStack_1fc[1] == s.fStack_324))
            {
                pfVar10 = &s.fStack_2f4;
                goto LAB_000196cf;
            }

LAB_000196cb:
            pfVar10 = &s.fStack_310;
        }

LAB_000196cf:
        if ((((param_7 == 0) ||
              ((pfVar7 = FUN_00018b50(
                    &s.fStack_2f4, &s.fStack_310)) == NULL)) ||
             (pfVar7 == pfVar10)) ||
            (*((int32_t*)(bf_00018c40_address32(param_1[0x6a]))) < 3))
        {
            fVar11 = pfVar10[2];
            fVar3 = pfVar10[1];
            *param_2 = *pfVar10;
            param_2[1] = fVar3;
            param_2[2] = fVar11;
            goto LAB_00019821;
        }

        FUN_000124f0(0x40000000);
        *((uint32_t*)(bf_00018c40_address32(param_1[0x6a]))) = 2;
        s.fStack_31c = pfVar7[2];

        // TODO: Same unresolved float/pointer stack-slot cast as above.
        s.piStack_320 = (int32_t*)(uintptr_t)BF_float_to_u32(pfVar7[1]);
        *param_2 = *pfVar7;
    }

    // TODO: Ghidra displays "(float)piStack_320", which is not a direct
    // standard C++ pointer-to-float conversion. Preserve the raw slot bits.
    param_2[1] = BF_BITS_TO_F32(s.piStack_320);
    param_2[2] = s.fStack_31c;

LAB_00019821:
    if ((cVar8 == '\x01') &&
        ((fVar11 =
              param_2[2] * param_2[2] +
              param_2[1] * param_2[1] +
              *param_2 * *param_2),
         0.0001f < fVar11))
    {
        auVar12 = _mm_move_ss(
            auVar12, _mm_rsqrt_ss(_mm_set_ss(fVar11)));
        fVar11 = _mm_cvtss_f32(auVar12);

        // Preserve the eight-byte snapshot before modifying either component.
        memcpy(&uVar1, param_2 + 1, 8);
        *param_2 = *param_2 * fVar11;

        // TODO: Undefined-word-to-float casts are interpreted as lane bit views.
        param_2[1] = bf_00018c40_low_float(uVar1) * fVar11;
        param_2[2] = bf_00018c40_high_float(uVar1) * fVar11;
        return '\x01';
    }

    return cVar8;
}
