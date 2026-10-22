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

// Brute Force: 0x00016ff0 | Ghidra label FUN_00016ff0
// Ghidra function-body SHA-256: B3358D5E3F4BEE0EF1BBCBBE7155F13F53EC477E17D6D2FC7362FB55AB316B09
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Function index: 54; entry: 0x00016ff0.
// Recorded body SHA256:
// B3358D5E3F4BEE0EF1BBCBBE7155F13F53EC477E17D6D2FC7362FB55AB316B09
//
// TODO: Provide <cstdint> and evidence-based declarations for all referenced
// FUN_*, PTR_*, and DAT_* symbols. External implementations are not reconstructed.
// TODO: Recover the actual calling convention, implicit register arguments,
// external return types, and any implicit object arguments.
// All offsets below are byte offsets unless expressed as u32 array indices.
// Raw 32-bit constants are retained without assigning field semantics.

void FUN_00016ff0(void)
{
    typedef uint8_t byte;
    typedef uint32_t u32;
    typedef int32_t s32;
    typedef s32 code(); // TODO: Indirect-call signature and ABI are unknown.

    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    _Static_assert(sizeof(u32) == 4 && sizeof(s32) == 4);
    _Static_assert(sizeof(byte) == 1 && sizeof(float) == 4);

    float fVar1;
    // TODO: Ghidra models this as an incoming EAX value. Ordinary C++ does not
    // bind this local to EAX; it remains unresolved and must not be used as-is.
    s32 in_EAX;
    s32 iVar2;
    u32* puVar3;
    s32 iVar4;
    u32 uVar5;
    s32 iVar6;
    // TODO: No initialization is shown for this stack value. Recover its source
    // and the call ABI before treating the later call as executable C++.
    u32 uStack_4;

    iVar2 = FUN_000120f0();
    *(byte*)(in_EAX + 0x464) = *(byte*)(in_EAX + 0x464) | 3;
    *(u32*)(in_EAX + 0x35c) = 0;
    *(u32*)(in_EAX + 0x1bc) = 0;
    *(u32*)(in_EAX + 0x1b8) = 0;
    *(u32*)(in_EAX + 0x1b4) = 0;

    puVar3 = (u32*)FUN_002ea01d(0x18);
    if (puVar3 == NULL) {
        puVar3 = NULL;
    }
    else {
        *puVar3 = (u32)&PTR_FUN_003a47b4;
        puVar3[2] = 0;
        if (puVar3[2] != iVar2) {
            FUN_0008f6a0(iVar2);
        }
        *(byte*)((s32)puVar3 + 0xd) = 0;
        puVar3[5] = 0;
        puVar3[4] = 0;
        *(byte*)(puVar3 + 3) = 1; // Byte at allocation offset 0x0c.
    }
    *(u32**)(in_EAX + 0x794) = puVar3;

    iVar4 = FUN_002ea01d(0x38);
    if (iVar4 == 0) {
        uVar5 = 0;
    }
    else {
        // TODO: No explicit connection to iVar4 is shown; implicit ABI unknown.
        uVar5 = FUN_00058530();
    }
    *(u32*)(in_EAX + 0x1a8) = uVar5;

    puVar3 = (u32*)FUN_002ea01d(0x14);
    if (puVar3 == NULL) {
        puVar3 = NULL;
    }
    else {
        uVar5 = FUN_000120f0();
        *puVar3 = uVar5;
        puVar3[2] = 0;
        puVar3[1] = 0;
        // Byte read/modify/write at allocation offset 0x10 is retained.
        *(byte*)(puVar3 + 4) = (*(byte*)(puVar3 + 4) & 0xef) | 0xb;
        puVar3[3] = 0;
    }
    *(u32**)(in_EAX + 0x1ac) = puVar3;

    iVar4 = FUN_002ea01d(0x20);
    if (iVar4 == 0) {
        uVar5 = 0;
    }
    else {
        // TODO: Recover any implicit relationship between this call and iVar4.
        uVar5 = FUN_00016300();
    }
    *(u32*)(in_EAX + 0x1b0) = uVar5;
    *(u32*)(in_EAX + 0x364) = 0x40a00000;
    *(u32*)(in_EAX + 0x368) = 0x40a00000;
    *(u32*)(in_EAX + 0x360) = 0x40600000;
    *(u32*)(in_EAX + 0x214) = 0x47c35000;
    *(u32*)(in_EAX + 0x218) = 0x47c35000;

    puVar3 = (u32*)FUN_002ea01d(0xc);
    if (puVar3 == NULL) {
        puVar3 = NULL;
    }
    else {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0x3f800000;
    }
    *(u32**)(in_EAX + 0x1c0) = puVar3;
    // TODO: Evidence dereferences puVar3 even after the null branch.
    // Preserve this uncertainty; no allocation-failure guard is inferred.
    puVar3[2] = 0x41000000;

    *(u32*)(in_EAX + 0x9b0) = 0x3f800000;
    *(u32*)(in_EAX + 0x9a8) = 0x3f800000;
    *(byte*)(in_EAX + 0x9ac) = (*(byte*)(in_EAX + 0x9ac) & 0xf9) | 1;
    *(u32*)(in_EAX + 0x1d4) = 0;
    *(u32*)(in_EAX + 0x1d0) = 0;
    *(u32*)(in_EAX + 0x1cc) = 0;
    *(u32*)(in_EAX + 0x370) = 0;
    *(u32*)(in_EAX + 0x810) = 0;
    *(u32*)(in_EAX + 0x80c) = 0;
    *(u32*)(in_EAX + 0x808) = 0;
    *(u32*)(in_EAX + 0x3c4) = *(u32*)(in_EAX + 0x3c4) & 0xffffcbff;
    *(u32*)(in_EAX + 0x6c0) = 0;
    *(u32*)(in_EAX + 0x730) = 3;
    *(u32*)(in_EAX + 0x374) = 0;
    *(u32*)(in_EAX + 0x1a4) = 0;
    *(u32*)(in_EAX + 0x9c0) = 0;
    *(u32*)(in_EAX + 0x9c4) = 0;

    FUN_0001b650();

    iVar4 = FUN_002ea01d(0xc);
    if (iVar4 == 0) {
        iVar4 = 0;
    }
    else {
        FUN_0001d0b0(uStack_4);
        iVar6 = FUN_0001cfc0(iVar4);
        *(s32*)(iVar4 + 4) = iVar6;
        *(byte*)(iVar6 + 0xa9) = 1;
        *(s32*)(*(s32*)(iVar4 + 4) + 4) = *(s32*)(iVar4 + 4);
        *(u32*)*(u32*)(iVar4 + 4) = *(u32*)(iVar4 + 4);
        *(s32*)(*(s32*)(iVar4 + 4) + 8) = *(s32*)(iVar4 + 4);
        *(u32*)(iVar4 + 8) = 0;
    }
    *(s32*)(in_EAX + 0x358) = iVar4;
    *(u32*)(in_EAX + 0x3c4) = *(u32*)(in_EAX + 0x3c4) & 0xffffbdff;

    // TODO: DAT_00469d90's width and signedness are not supplied.
    DAT_00469d90 = DAT_00469d90 + 1;

    *(u32*)(in_EAX + 0x9bc) = 0;
    *(u32*)(in_EAX + 0x3c8) = 0;
    FUN_0001b650();

    // Thirty separate calls appear in the evidence. Any changing implicit
    // arguments or destinations are unresolved; retain each call in order.
    FUN_001611d0(); // 1
    FUN_001611d0(); // 2
    FUN_001611d0(); // 3
    FUN_001611d0(); // 4
    FUN_001611d0(); // 5
    FUN_001611d0(); // 6
    FUN_001611d0(); // 7
    FUN_001611d0(); // 8
    FUN_001611d0(); // 9
    FUN_001611d0(); // 10
    FUN_001611d0(); // 11
    FUN_001611d0(); // 12
    FUN_001611d0(); // 13
    FUN_001611d0(); // 14
    FUN_001611d0(); // 15
    FUN_001611d0(); // 16
    FUN_001611d0(); // 17
    FUN_001611d0(); // 18
    FUN_001611d0(); // 19
    FUN_001611d0(); // 20
    FUN_001611d0(); // 21
    FUN_001611d0(); // 22
    FUN_001611d0(); // 23
    FUN_001611d0(); // 24
    FUN_001611d0(); // 25
    FUN_001611d0(); // 26
    FUN_001611d0(); // 27
    FUN_001611d0(); // 28
    FUN_001611d0(); // 29
    FUN_001611d0(); // 30

    *(u32*)(in_EAX + 0x7f4) = 0x40c00000;
    *(u32*)(in_EAX + 0x7ec) = 0x40c00000;
    *(byte*)(in_EAX + 0x7f0) = (*(byte*)(in_EAX + 0x7f0) & 0xf9) | 1;
    *(u32*)(in_EAX + 0x70) = 0x40a00000;
    *(u32*)(in_EAX + 0x68) = 0x40a00000;
    *(byte*)(in_EAX + 0x6c) = (*(byte*)(in_EAX + 0x6c) & 0xf9) | 1;
    *(u32*)(in_EAX + 0x60) = 0;

    // Load a 32-bit address from iVar2 + 0x1b4, then call through the
    // function-pointer slot at that address + 8. Implicit arguments unknown.
    iVar4 = (**(code**)(*(s32*)(iVar2 + 0x1b4) + 8))();
    fVar1 = *(float*)(iVar4 + 0x80);
    if (1.1920929e-07 < fVar1) {
        *(float*)(in_EAX + 0x3b4) = fVar1;
        *(float*)(in_EAX + 0x3ac) = fVar1;
        *(byte*)(in_EAX + 0x3b0) = (*(byte*)(in_EAX + 0x3b0) & 0xf9) | 1;
    }

    *(byte*)(in_EAX + 0x13c) = (*(byte*)(in_EAX + 0x13c) & 0xf9) | 1;
    *(u32*)(in_EAX + 0x140) = 0x3e99999a;
    *(u32*)(in_EAX + 0x138) = 0x3e99999a;
    *(u32*)(in_EAX + 0x130) = 0x40800000;
    *(u32*)(in_EAX + 0x128) = 0x40800000;
    *(byte*)(in_EAX + 300) = (*(byte*)(in_EAX + 300) & 0xf9) | 1;
    *(u32*)(in_EAX + 0x170) = 0x40a00000;
    *(u32*)(in_EAX + 0x168) = 0x40a00000;
    *(byte*)(in_EAX + 0x16c) = (*(byte*)(in_EAX + 0x16c) & 0xf9) | 1;
    *(byte*)(in_EAX + 0x904) = *(byte*)(in_EAX + 0x904) & 0xfe;
    *(u32*)(in_EAX + 0x9dc) = 0;
    *(u32*)(in_EAX + 0x8f0) = 2;
    *(u32*)(in_EAX + 0x460) = 3;
    *(u32*)(in_EAX + 0x3c4) = (*(u32*)(in_EAX + 0x3c4) & 0xfffff7c2) | 0x82;
    *(u32*)(in_EAX + 4) = 1;
    *(u32*)(in_EAX + 0x490) = 0;
    *(u32*)(in_EAX + 0x48c) = 0;
    *(u32*)(in_EAX + 0x488) = 0;
    *(u32*)(in_EAX + 0x498) = 0;
    *(u32*)(in_EAX + 0x49c) = 0;
    *(u32*)(in_EAX + 0x4a0) = 0;
    *(u32*)(in_EAX + 0x4a4) = 0;
    *(u32*)(in_EAX + 0x924) = 0;
    *(u32*)(in_EAX + 0x81c) = 0;
    *(u32*)(in_EAX + 0x818) = 0;
    *(u32*)(in_EAX + 0x814) = 0;
    *(byte*)(in_EAX + 0x464) = *(byte*)(in_EAX + 0x464) & 0xfb;
    *(byte*)(in_EAX + 0x980) = 0;
    *(u32*)(in_EAX + 0x3c4) = *(u32*)(in_EAX + 0x3c4) & 0xfffffeff;
    *(u32*)(in_EAX + 0x484) = 0;
    *(u32*)(in_EAX + 0x1c8) = 0;
    *(u32*)(in_EAX + 0x1c4) = 0;
    *(u32*)(in_EAX + 0x92c) = 0;
    *(u32*)(in_EAX + 0x440) = 0;
    *(u32*)(in_EAX + 0x58) = 6;
    *(u32*)(in_EAX + 0x8fc) = 0xffffffff;
    *(u32*)(in_EAX + 0x900) = 0;
    *(s32*)(*(s32*)(in_EAX + 0x1a8) + 8) = iVar2;
    *(u32*)(in_EAX + 0x36c) = 0x3dcccccd;

    // Literal forms and expression grouping follow the pseudocode.
    // TODO: Original floating-point instruction precision is unverified.
    *(float*)(iVar2 + 0x7ec) =
        200.0 / (*(float*)(*(s32*)(iVar2 + 0xc) + 0x2d0) * 57.295776);

    if ((*(byte*)(*(s32*)(iVar2 + 0xc) + 0x1a8) & 1) == 0) {
        FUN_0001bb30();
        FUN_0001c3b0(&PTR_LAB_003a4028, 0, 0);
        *(u32*)(in_EAX + 0x58) = 0;
        *(u32*)(iVar2 + 0x7ec) = 0x3fe66666;
    }
    else {
        *(u32*)(in_EAX + 0x3c4) = *(u32*)(in_EAX + 0x3c4) | 0x100;
        FUN_0001bb30();
        FUN_0001c3b0(&PTR_LAB_003a4028, 0, 0);
        *(u32*)(in_EAX + 0x58) = 1;
        *(u32*)(*(s32*)(in_EAX + 0x1b0) + 8) = 0x3f800000;
    }

    if ((*(u32*)(in_EAX + 0x3c4) & 0x100) != 0) {
        FUN_001611d0();
    }
    return;
}
