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

// Brute Force: 0x00017770 | Ghidra label FUN_00017770
// Ghidra function-body SHA-256: 06E9CE4EB3AEC0B8C2FEBBCF845D4B307790AEF5A51DD083BA03A5FD471C5E54
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Function index: 55; entry: 0x00017770.
// Unverified source reconstruction, not recovered original code.
//
// TODO: Supply <cstdint>, external declarations, and address-table symbols.
// TODO: Recover the original calling convention. The parameter below explicitly
// models the incoming ECX value; it does not establish the original source ABI.
// External calls retain only the arguments visible in the pseudocode. Any
// implicit register arguments, including ECX receivers, remain unresolved.
// TODO: Define the external function type `code` with the correct indirect-call
// ABI and the observed explicit argument. Its return value is unused here.
//
// Ghidra marks every thunk_FUN_00237ec0 call as non-returning, although it also
// displays subsequent statements. Preserve that displayed sequence below;
// TODO: Verify the thunk's return behavior and reachability of later statements.
//
// Signed address additions are retained as displayed. TODO: Verify their
// overflow behavior against x86 instructions; signed C++ overflow is undefined.
typedef void code(uint32_t); /* TODO: Unverified indirect call ABI */
void FUN_00017770(uint32_t* in_ECX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(uint32_t) == 4, "Four-byte slots are required.");
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(int32_t) == 4, "Four-byte signed values are required.");
#endif

    uint32_t* puVar1;
    int32_t iVar2;
    int32_t iVar3;
    uint32_t uVar4;
    uint8_t auStack_4[4]; // Four uninitialized bytes, as displayed.

    // Each in_ECX index addresses a four-byte slot.
    in_ECX[0] = ((uint32_t)(&PTR_FUN_003a4f04));       // +0x000
    in_ECX[6] = ((uint32_t)(&PTR_LAB_003a4eb0));       // +0x018
    in_ECX[0x10] = ((uint32_t)(&PTR_LAB_003a47b8));    // +0x040

    iVar2 = FUN_000120f0();
    if (iVar2 == 0) {
        iVar3 = 0;
    } else {
        iVar3 = *((int32_t*)(iVar2 + 0x59c));
    }

    if (((((in_ECX[0xf1] & 0x100u) != 0) && (iVar2 != 0)) &&
         (iVar3 != 0)) &&
        (*((int32_t*)(iVar3 + 0x28)) != 0)) {
        FUN_0005e600();
    }

    if (in_ECX[0x6a] != 0) {
        thunk_FUN_00237ec0(in_ECX[0x6a]);
    }

    if (in_ECX[0x6b] != 0) {
        thunk_FUN_00237ec0(in_ECX[0x6b]);
    }

    if (in_ECX[0x70] != 0) {
        thunk_FUN_00237ec0(in_ECX[0x70]);
    }

    // Preserve the four-byte slot's bit pattern when interpreted as signed.
    // TODO: Require C++20 conversion semantics or confirm target compiler behavior.
    iVar2 = ((int32_t)(in_ECX[0x6c]));
    if (iVar2 != 0) {
        if (*((int32_t*)(iVar2 + 4)) != 0) {
            FUN_0008f6e0();
        }
        thunk_FUN_00237ec0(iVar2);
    }

    if (in_ECX[0xd6] != 0) {
        FUN_00017af0(1);
        in_ECX[0xd6] = 0;
    }

    // Same signed, four-byte interpretation as the assignment above.
    iVar2 = ((int32_t)(in_ECX[0xd5]));
    if (iVar2 != 0) {
        if (*((int32_t*)(iVar2 + 4)) != 0) {
            thunk_FUN_00237ec0(
                *((int32_t*)(iVar2 + 4)));
        }

        *((uint32_t*)(iVar2 + 4)) = 0;
        *((uint32_t*)(iVar2 + 8)) = 0;
        *((uint32_t*)(iVar2 + 0xc)) = 0;
        thunk_FUN_00237ec0(iVar2);
    }

    if (((uint32_t*)(in_ECX[0x1e5])) != NULL) {
        // Read a 32-bit pointer at the stored address, then its first
        // four-byte entry, and invoke that entry with visible argument 1.
        // TODO: Recover any implicit receiver/register arguments.
        (*((code*)(**((uint32_t**)(in_ECX[0x1e5])))))(1);
        in_ECX[0x1e5] = 0;
    }

    if (in_ECX[0x274] != 0) {
        thunk_FUN_00237ec0(in_ECX[0x274]);
    }

    in_ECX[0x274] = 0;
    in_ECX[0x275] = 0;
    in_ECX[0x276] = 0;

    if (in_ECX[0x26e] != 0) {
        FUN_0008f6e0();
    }

    FUN_0001bc90();
    FUN_0001bc90();

    puVar1 = ((uint32_t*)(in_ECX[0x247]));
    if (puVar1 == NULL) {
        uVar4 = 0;
    } else {
        uVar4 = *puVar1;
    }

    // Pointer addition advances 0x246 four-byte slots, or 0x918 bytes.
    FUN_000e1150(in_ECX + 0x246, auStack_4, uVar4, puVar1);

    // Ghidra explicitly marks this final call as non-returning.
    thunk_FUN_00237ec0(in_ECX[0x247]);
}
