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

// Brute Force: 0x00012a90 | Ghidra label FUN_00012a90
// Ghidra function-body SHA-256: BC3AC183B4EFB9C1A2EE1EDFAE1B41F01F72EF7CC9114162677252222D784975
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x00012a90; function index: 37.
// TODO: Requires <cstdint> and the original 32-bit x86 pointer/ABI environment.
// TODO: Resolve the calling convention. The explicit in_ECX argument below
// represents Ghidra's incoming ECX value; it is not an established stack argument.
// undefined4 values are represented as opaque 32-bit unsigned words.
void FUN_00012a90(uint32_t* param_1, int32_t in_ECX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;

    // Preserve the observed load order; source and destination may overlap.
    uVar2 = param_1[1]; // Source byte offset 0x04.
    uVar3 = param_1[2]; // Source byte offset 0x08.
    uVar4 = param_1[3]; // Source byte offset 0x0C.
    uVar1 = param_1[8]; // Source byte offset 0x20.
    uVar5 = param_1[4]; // Source byte offset 0x10.
    uVar6 = param_1[5]; // Source byte offset 0x14.
    uVar7 = param_1[6]; // Source byte offset 0x18.
    uVar8 = param_1[7]; // Source byte offset 0x1C.

    // Each destination offset is in bytes; each store writes four bytes.
    // TODO: Confirm destination layout, alignment, and valid address range.
    // Signed address expressions below mirror Ghidra's int representation;
    // behavior at signed overflow requires verification against x86 instructions.
    *((uint32_t*)(in_ECX + 0x04)) = *param_1;
    *((uint32_t*)(in_ECX + 0x08)) = uVar2;
    *((uint32_t*)(in_ECX + 0x0C)) = uVar3;
    *((uint32_t*)(in_ECX + 0x10)) = uVar4;
    *((uint32_t*)(in_ECX + 0x24)) = uVar1;
    *((uint32_t*)(in_ECX + 0x14)) = uVar5;
    *((uint32_t*)(in_ECX + 0x18)) = uVar6;
    *((uint32_t*)(in_ECX + 0x1C)) = uVar7;
    *((uint32_t*)(in_ECX + 0x20)) = uVar8;
    return;
}
