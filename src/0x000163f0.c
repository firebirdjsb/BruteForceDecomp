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

// Brute Force: 0x000163f0 | Ghidra label FUN_000163f0
// Ghidra function-body SHA-256: BF79F5757CEC6817F733441D21164A18BBDEA2A06C276D40B6B84AE6FA5365D5
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Function index: 52; entry: 0x000163f0.
// Recorded body SHA256:
// BF79F5757CEC6817F733441D21164A18BBDEA2A06C276D40B6B84AE6FA5365D5
//
// TODO: Supply <cstdint>, declarations for referenced symbols and functions,
// and the actual x86 calling conventions, including any implicit register
// arguments or object/subobject context omitted by the pseudocode.
// TODO: Recover the local stack storage represented by unverified_stack_minus_0x18.
// That unresolved name below must identify the original 20-byte source region;
// its contents and initialization are not established by the supplied evidence.
//
// All param_1 indices address 4-byte words: index n means byte offset 4*n.
// Byte and 2-byte accesses intentionally preserve the remaining bytes.
// PTR_* expressions store the addresses of those symbols, not their contents.
// Hexadecimal data constants remain raw 32-bit values without inferred types.
uint32_t* FUN_000163f0(uint32_t* param_1, int32_t* param_2)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    /* TODO: 32-bit x86 width assumption; host build may use 64-bit pointers. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(uint32_t) == 4, "Requires 4-byte words.");
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(int32_t) == 4, "Requires 4-byte signed integers.");
#endif

    uint32_t uVar1;
    int32_t iVar2;
    int32_t iVar3;
    uint32_t* puVar4;
    uint32_t* puVar5;

    param_1[4] = 0;
    param_1[4] = 0;
    param_1[2] = 0;
    param_1[1] = 0xffffffffu;
    *param_1 = ((uint32_t)(&PTR_FUN_003a4f2c));
    *((uint8_t*)(param_1 + 5)) =
        (*((uint8_t*)(param_1 + 5)) & 0xfb) | 0xb;
    param_1[6] = ((uint32_t)(&PTR_LAB_003a4748));
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[0xf] = 0x3f800000u;
    param_1[0xb] = 0x3f800000u;
    param_1[7] = 0x3f800000u;
    FUN_00012b40();
    *param_1 = ((uint32_t)(&PTR_FUN_003a4f04));
    param_1[6] = ((uint32_t)(&PTR_LAB_003a4eb0));
    param_1[0x10] = ((uint32_t)(&PTR_LAB_003a47b8));
    func_0x00012980();
    param_1[0x28] = 0;
    param_1[0x26] = ((uint32_t)(param_1));
    param_1[0x2b] = 0x3e99999au;
    param_1[0x29] = 0;
    *((uint8_t*)(param_1 + 0x2a)) =
        *((uint8_t*)(param_1 + 0x2a)) | 1;
    param_1[0x2c] = ((uint32_t)(&PTR_FUN_003a47b0));
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x34] = 0;
    param_1[0x32] = 0;
    param_1[0x31] = ((uint32_t)(&PTR_LAB_003a4024));
    *((uint8_t*)(param_1 + 0x33)) =
        (*((uint8_t*)(param_1 + 0x33)) & 0xfa) | 2;
    param_1[0x35] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x38] = 0;
    param_1[0x36] = 0;
    *((uint8_t*)(param_1 + 0x37)) =
        (*((uint8_t*)(param_1 + 0x37)) & 0xfa) | 2;
    param_1[0x39] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x3c] = 0;
    param_1[0x3a] = 0;
    *((uint8_t*)(param_1 + 0x3b)) =
        (*((uint8_t*)(param_1 + 0x3b)) & 0xfa) | 2;
    param_1[0x3d] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x40] = 0;
    param_1[0x3e] = 0;
    *((uint8_t*)(param_1 + 0x3f)) =
        (*((uint8_t*)(param_1 + 0x3f)) & 0xfa) | 2;
    param_1[0x41] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x44] = 0;
    param_1[0x42] = 0;
    *((uint8_t*)(param_1 + 0x43)) =
        (*((uint8_t*)(param_1 + 0x43)) & 0xfa) | 2;
    param_1[0x45] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x48] = 0;
    param_1[0x46] = 0;
    *((uint8_t*)(param_1 + 0x47)) =
        (*((uint8_t*)(param_1 + 0x47)) & 0xfa) | 2;
    param_1[0x49] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x4c] = 0;
    param_1[0x4a] = 0;
    *((uint8_t*)(param_1 + 0x4b)) =
        (*((uint8_t*)(param_1 + 0x4b)) & 0xfa) | 2;
    param_1[0x4d] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x50] = 0;
    param_1[0x4e] = 0;
    *((uint8_t*)(param_1 + 0x4f)) =
        (*((uint8_t*)(param_1 + 0x4f)) & 0xfa) | 2;
    param_1[0x51] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x54] = 0;
    param_1[0x52] = 0;
    *((uint8_t*)(param_1 + 0x53)) =
        (*((uint8_t*)(param_1 + 0x53)) & 0xfa) | 2;
    param_1[0x55] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x58] = 0;
    param_1[0x56] = 0;
    *((uint8_t*)(param_1 + 0x57)) =
        (*((uint8_t*)(param_1 + 0x57)) & 0xfa) | 2;
    param_1[0x59] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x5c] = 0;
    param_1[0x5a] = 0;
    *((uint8_t*)(param_1 + 0x5b)) =
        (*((uint8_t*)(param_1 + 0x5b)) & 0xfa) | 2;
    param_1[0x5d] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x60] = 0;
    param_1[0x5e] = 0;
    *((uint8_t*)(param_1 + 0x5f)) =
        (*((uint8_t*)(param_1 + 0x5f)) & 0xfa) | 2;
    param_1[0x61] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[100] = 0;
    param_1[0x62] = 0;
    *((uint8_t*)(param_1 + 99)) =
        (*((uint8_t*)(param_1 + 99)) & 0xfa) | 2;
    param_1[0x65] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x68] = 0;
    param_1[0x66] = 0;
    *((uint8_t*)(param_1 + 0x67)) =
        (*((uint8_t*)(param_1 + 0x67)) & 0xfa) | 2;
    param_1[0x76] = 0x3f800000u;
    param_1[0x77] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x7a] = 0;
    param_1[0x78] = 0;
    *((uint8_t*)(param_1 + 0x79)) =
        (*((uint8_t*)(param_1 + 0x79)) & 0xfa) | 2;
    param_1[0x7b] = 0;
    param_1[0x85] = 0x42c80000u;
    param_1[0x86] = 0x41a00000u;
    *((uint8_t*)(param_1 + 0x87)) =
        *((uint8_t*)(param_1 + 0x87)) & 0xfc;
    param_1[0x8a] = 0;
    param_1[0x8b] = 0;
    param_1[0x8c] = 0;
    param_1[0x8d] = 0;
    param_1[0x8e] = 0x402ccccdu;
    param_1[0x8f] = ((uint32_t)(&PTR_LAB_0039cc18));
    param_1[0xd2] = 0;
    param_1[0xd3] = 0;
    param_1[0xd0] = 0;
    *((uint8_t*)(param_1 + 0xd1)) = 1;
    param_1[0xd4] = 0;
    param_1[0xde] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0xe1] = 0;
    param_1[0xdf] = 0;
    *((uint8_t*)(param_1 + 0xe0)) =
        (*((uint8_t*)(param_1 + 0xe0)) & 0xfa) | 2;
    param_1[0xe2] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0xe5] = 0;
    param_1[0xe3] = 0;
    *((uint8_t*)(param_1 + 0xe4)) =
        (*((uint8_t*)(param_1 + 0xe4)) & 0xfa) | 2;
    param_1[0xe6] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0xe9] = 0;
    param_1[0xe7] = 0;
    *((uint8_t*)(param_1 + 0xe8)) =
        (*((uint8_t*)(param_1 + 0xe8)) & 0xfa) | 2;
    param_1[0xea] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0xed] = 0;
    param_1[0xeb] = 0;
    *((uint8_t*)(param_1 + 0xec)) =
        (*((uint8_t*)(param_1 + 0xec)) & 0xfa) | 2;
    param_1[0xf4] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0xf7] = 0;
    param_1[0xf5] = 0;
    *((uint8_t*)(param_1 + 0xf6)) =
        (*((uint8_t*)(param_1 + 0xf6)) & 0xfa) | 2;

    // Explicit byte offset 0x3cd, one byte after word index 0xf3.
    *(((uint8_t*)(param_1)) + 0x3cd) = 0;
    *((uint8_t*)(param_1 + 0xf3)) = 0;
    param_1[0xf9] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0xfc] = 0;
    param_1[0xfa] = 0;
    *((uint8_t*)(param_1 + 0xfb)) =
        (*((uint8_t*)(param_1 + 0xfb)) & 0xfa) | 2;
    *((uint8_t*)(param_1 + 0xf8)) = 0;
    param_1[0xfe] = 0;
    param_1[0xff] = 0;
    param_1[0x100] = 0;

    // Preserve param_2._0_1_ as the low byte of the pointer value.
    // TODO: Confirm the parameter type; this is not a dereference of param_2.
    *((uint8_t*)(param_1 + 0x106)) =
        ((uint8_t)(((uint32_t)(param_2))));
    param_1[0x103] = 0;
    param_1[0x104] = 0;
    param_1[0x105] = 0;
    // Explicit byte offset 0x419, one byte after word index 0x106.
    *(((uint8_t*)(param_1)) + 0x419) = 0;
    param_1[0x101] = ((uint32_t)(&PTR_FUN_003a4f70));
    FUN_0001b650();
    param_1[0x108] = 0;
    param_1[0x109] = 0;
    param_1[0x10a] = 0;
    param_1[0x10b] = 0;
    param_1[0x10d] = 0;
    param_1[0x10e] = 0;
    param_1[0x10f] = 0;
    param_1[0x115] = 0;
    param_1[0x117] = 0;
    param_1[0x11a] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x11d] = 0;
    param_1[0x11b] = 0;
    *((uint8_t*)(param_1 + 0x11c)) =
        (*((uint8_t*)(param_1 + 0x11c)) & 0xfa) | 2;
    param_1[299] = 0;
    param_1[300] = 0;
    param_1[0x12d] = 0;
    param_1[0x12e] = 0;
    param_1[0x12f] = 8;
    param_1[0x135] = 8;
    param_1[0x131] = 0;
    param_1[0x132] = 0;
    param_1[0x133] = 0;
    param_1[0x134] = 0;
    param_1[0x137] = 0;
    param_1[0x136] = 0;
    param_1[0x138] = 0x42b40000u;
    param_1[0x139] = 0x40800000u;
    param_1[0x13f] = 0x3f19999au;
    param_1[0x13d] = 0x40e00000u;
    param_1[0x13e] = 0x3fc00000u;
    param_1[0x13b] = 0;
    param_1[0x13c] = 0;
    param_1[0x13a] = 0;
    param_1[0x140] = 1;
    param_1[0x143] = 0;
    param_1[0x142] = 0;
    param_1[0x141] = 0;
    FUN_00012820();
    param_1[0x166] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x169] = 0;
    param_1[0x167] = 0;
    *((uint8_t*)(param_1 + 0x168)) =
        (*((uint8_t*)(param_1 + 0x168)) & 0xfa) | 2;
    *((uint8_t*)(param_1 + 0x16a)) = 0;
    param_1[0x164] = 0;
    param_1[0x165] = 0;
    FUN_000128c0();
    param_1[0x17c] = 0;
    param_1[0x17f] = 0;
    param_1[0x17e] = 0;
    param_1[0x17d] = 0;
    *((uint8_t*)(param_1 + 0x180)) =
        *((uint8_t*)(param_1 + 0x180)) & 0xfc;
    param_1[0x188] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x18b] = 0;
    param_1[0x189] = 0;
    *((uint8_t*)(param_1 + 0x18a)) =
        (*((uint8_t*)(param_1 + 0x18a)) & 0xfa) | 2;
    param_1[0x18c] = 0;
    param_1[0x182] = 0;
    param_1[0x183] = 0;
    param_1[0x184] = 0;
    param_1[0x186] = 0;
    param_1[0x187] = 0;
    *((uint8_t*)(param_1 + 0x181)) =
        *((uint8_t*)(param_1 + 0x181)) & 0xfe;
    param_1[0x18d] = ((uint32_t)(&PTR_LAB_003a4f6c));
    param_1[0x192] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x195] = 0;
    param_1[0x193] = 0;
    *((uint8_t*)(param_1 + 0x194)) =
        (*((uint8_t*)(param_1 + 0x194)) & 0xfa) | 2;
    param_1[0x18e] = 0;
    param_1[399] = 0;
    param_1[400] = 0;
    param_1[0x191] = 0;
    param_1[0x196] = 0x497423f0u;
    param_1[0x197] = 0;
    param_1[0x198] = 0;
    param_1[0x1a2] = 0;
    param_1[0x1a3] = 0;
    param_1[0x1a4] = 0;
    param_1[0x1a6] = 0;
    param_1[0x1a5] = 0xffffffffu;
    param_1[0x1a8] = 0;
    param_1[0x1a7] = 0x7f7fffffu;
    *((uint8_t*)(param_1 + 0x1a9)) = 0;
    param_1[0x1aa] = 0;
    param_1[0x19b] = 0;
    param_1[0x19a] = 0;
    param_1[0x199] = 0;
    param_1[0x19e] = 0;
    param_1[0x19d] = 0;
    param_1[0x19c] = 0;
    param_1[0x1a0] = 0;
    param_1[0x19f] = 0;
    FUN_00012750();
    param_1[0x1d2] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x1d5] = 0;
    param_1[0x1d3] = 0;
    *((uint8_t*)(param_1 + 0x1d4)) =
        (*((uint8_t*)(param_1 + 0x1d4)) & 0xfa) | 2;
    param_1[0x1d6] = 0;
    param_1[0x1d1] = 0;
    param_1[0x1d7] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x1da] = 0;
    param_1[0x1d8] = 0;
    param_1[0x1db] = 0;
    *((uint8_t*)(param_1 + 0x1d9)) =
        (*((uint8_t*)(param_1 + 0x1d9)) & 0xfa) | 2;
    param_1[0x1dd] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x1e0] = 0;
    param_1[0x1de] = 0;
    *((uint8_t*)(param_1 + 0x1df)) =
        (*((uint8_t*)(param_1 + 0x1df)) & 0xfa) | 2;
    param_1[0x1dc] = 0;
    param_1[0x1e3] = 0x40a00000u;
    param_1[0x1e0] = 0x40a00000u;
    param_1[0x1de] = 0x40a00000u;
    *((uint8_t*)(param_1 + 0x1df)) =
        (*((uint8_t*)(param_1 + 0x1df)) & 0xf9) | 1;
    param_1[0x1e1] = 0;
    *((uint8_t*)(param_1 + 0x1e2)) =
        *((uint8_t*)(param_1 + 0x1e2)) & 0xfe;
    param_1[0x1e4] = 1;
    param_1[0x1e7] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x1ea] = 0;
    param_1[0x1e8] = 0;
    *((uint8_t*)(param_1 + 0x1e9)) =
        (*((uint8_t*)(param_1 + 0x1e9)) & 0xfa) | 2;
    param_1[0x1e6] = 0;
    param_1[0x1ec] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x1ef] = 0;
    param_1[0x1ed] = 0;
    *((uint8_t*)(param_1 + 0x1ee)) =
        (*((uint8_t*)(param_1 + 0x1ee)) & 0xfa) | 2;
    param_1[0x1eb] = 0;
    param_1[0x1f6] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x1f9] = 0;
    param_1[0x1f7] = 0;
    *((uint8_t*)(param_1 + 0x1f8)) =
        (*((uint8_t*)(param_1 + 0x1f8)) & 0xfa) | 2;
    param_1[0x1fa] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x1fd] = 0;
    param_1[0x1fb] = 0;
    *((uint8_t*)(param_1 + 0x1fc)) =
        (*((uint8_t*)(param_1 + 0x1fc)) & 0xfa) | 2;
    *((uint8_t*)(param_1 + 0x200)) =
        (*((uint8_t*)(param_1 + 0x200)) & 0xfa) | 2;
    param_1[0x1fe] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x201] = 0;
    param_1[0x1ff] = 0;
    FUN_00012920();
    *((uint16_t*)(param_1 + 0x224)) = 0;
    // Explicit byte offset 0x892: upper 2 bytes of word index 0x224.
    *((uint16_t*)(((uint8_t*)(param_1)) + 0x892)) = 0;
    param_1[0x225] = 0;
    param_1[0x226] = 0;
    *((uint8_t*)(param_1 + 0x227)) = 0;
    // Explicit byte offset 0x89d, one byte after word index 0x227.
    *(((uint8_t*)(param_1)) + 0x89d) = 0;
    param_1[0x229] = 0;
    param_1[0x228] = 0x3f800000u;
    param_1[0x22c] = 0;
    *((uint8_t*)(param_1 + 0x22d)) = 0;
    param_1[0x22e] = 0;
    param_1[0x22f] = 0x13;
    param_1[0x230] = 0;
    param_1[0x237] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x23a] = 0;
    param_1[0x238] = 0;
    *((uint8_t*)(param_1 + 0x239)) =
        (*((uint8_t*)(param_1 + 0x239)) & 0xfa) | 2;
    *((uint8_t*)(param_1 + 0x232)) = 0;
    param_1[0x233] = 0;
    param_1[0x236] = 0xffffffffu;
    param_1[0x235] = 0;
    param_1[0x234] = 0;
    param_1[0x23b] = 0;
    param_1[0x23d] = 0;
    param_1[0x23c] = 0;
    *((uint8_t*)(param_1 + 0x23e)) = 0;
    param_1[0x242] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x245] = 0;
    param_1[0x243] = 0;
    *((uint8_t*)(param_1 + 0x244)) =
        (*((uint8_t*)(param_1 + 0x244)) & 0xfa) | 2;
    uVar1 = FUN_000e0c80(param_1 + 0x246);
    param_1[0x247] = uVar1;
    param_1[0x248] = 0;
    param_1[0x24d] = 0;
    param_1[0x24e] = 0;
    param_1[0x24f] = 0;
    param_1[0x251] = 0;
    param_1[0x253] = 0;
    *((uint8_t*)(param_1 + 0x254)) = 0;
    param_1[0x255] = 0;
    param_1[0x250] = 0xffffffffu;
    param_1[0x252] = 0x7f7fffffu;
    param_1[0x25a] = 0xffffffffu;
    param_1[599] = 0;
    param_1[600] = 0;
    param_1[0x259] = 0;
    param_1[0x25b] = 0;
    param_1[0x25d] = 0;
    param_1[0x25c] = 0x7f7fffffu;
    *((uint8_t*)(param_1 + 0x25e)) = 0;
    param_1[0x25f] = 0;
    param_1[0x261] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x264] = 0;
    param_1[0x262] = 0;
    *((uint8_t*)(param_1 + 0x263)) =
        (*((uint8_t*)(param_1 + 0x263)) & 0xfa) | 2;
    param_1[0x265] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x268] = 0;
    param_1[0x266] = 0;
    *((uint8_t*)(param_1 + 0x267)) =
        (*((uint8_t*)(param_1 + 0x267)) & 0xfa) | 2;
    param_1[0x269] = ((uint32_t)(&PTR_LAB_003a4024));
    param_1[0x26c] = 0;
    param_1[0x26a] = 0;
    *((uint8_t*)(param_1 + 0x26b)) =
        (*((uint8_t*)(param_1 + 0x26b)) & 0xfa) | 2;
    param_1[0x26e] = 0;
    param_1[0x274] = 0;
    param_1[0x275] = 0;
    param_1[0x276] = 0;

    if (((int32_t*)(param_1[4])) != param_2) {
        FUN_0008f6a0(param_2);
    }

    // TODO: Recover the indirect callee's return type and calling convention.
    // This provisional function-pointer type represents only the explicit
    // argument shown. The entry is read at byte offset 0x164 from *param_2;
    // *param_2 remains signed 32-bit in the address addition, as supplied.
    ((void (*)(uint32_t*))(*((uint32_t*)(*param_2 + 0x164))))(param_1);

    iVar2 = FUN_002ea01d(0x10);
    if (iVar2 == 0) {
        iVar2 = 0;
    }
    else {
        // These are 4-byte writes at byte offsets 4, 8, and 0xc.
        *((uint32_t*)(iVar2 + 4)) = 0;
        *((uint32_t*)(iVar2 + 8)) = 0;
        *((uint32_t*)(iVar2 + 0xc)) = 0;
        FUN_0001b7a0();
        FUN_0001b8c0(iVar2);
    }
    param_1[0xd5] = iVar2;

    // TODO: The supplied flow reads address iVar2 + 4 even after iVar2 == 0.
    // Preserve that uncertainty; no failure return or null guard is evidenced.
    // TODO: unverified_stack_minus_0x18 is unresolved original stack storage, not an
    // invented initialized array. Each loop copies five 4-byte words (20 bytes).
    uint32_t unverified_stack_minus_0x18; /* TODO: stack region and caller aliasing unresolved */
    puVar4 = ((uint32_t*)(&unverified_stack_minus_0x18));
    puVar5 = *((uint32_t**)(iVar2 + 4));
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
    }

    puVar4 = ((uint32_t*)(&unverified_stack_minus_0x18));
    // Read a signed 32-bit address value at byte offset 4, then add 0x14.
    puVar5 = ((uint32_t*)(*((int32_t*)(param_1[0xd5] + 4)) + 0x14));
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
    }

    puVar4 = ((uint32_t*)(&unverified_stack_minus_0x18));
    // Read a signed 32-bit address value at byte offset 4, then add 0x28.
    puVar5 = ((uint32_t*)(*((int32_t*)(param_1[0xd5] + 4)) + 0x28));
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
    }

    param_1[0xef] = 0x3fc00000u;
    param_1[0xf0] = 0x42b40000u;
    // The index addition and counter increment use unsigned 32-bit arithmetic.
    param_1[param_1[0xd0] + 0x90] =
        ((uint32_t)(param_1));
    param_1[0xd0] = param_1[0xd0] + 1;
    param_1[0x24a] = 0;
    FUN_00016ff0();
    return param_1;
}
