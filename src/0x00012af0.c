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

// Brute Force: 0x00012af0 | Ghidra label FUN_00012af0
// Ghidra function-body SHA-256: 59C4BC174566BC81B0A51B317495DEB93BC33C207388478FAAF6CB4ABDED087E
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Unverified source reconstruction from Ghidra pseudocode at 0x00012af0.
// TODO: Requires <cstdint> and a 32-bit x86 pointer/ABI environment.
// TODO: Resolve the actual calling convention. The explicit parameter below
// represents the pointer observed in EAX, not an established stack argument.
// TODO: The pointed-to object's type is unknown; each indexed write is 4 bytes.
void FUN_00012af0(uint32_t* in_EAX)
{
    in_EAX[0] = 0;              // Byte offset 0x00.
    in_EAX[1] = 0;              // Byte offset 0x04.
    in_EAX[2] = 0;              // Byte offset 0x08.
    in_EAX[3] = 0xffffffffu;    // Byte offset 0x0c.
    in_EAX[4] = 0;              // Byte offset 0x10.
    in_EAX[5] = 0;              // Byte offset 0x14.
    in_EAX[6] = 0;              // Byte offset 0x18.
    in_EAX[7] = 0xffffffffu;    // Byte offset 0x1c.
    in_EAX[8] = 0;              // Byte offset 0x20.
    in_EAX[9] = 0;              // Byte offset 0x24.
    in_EAX[10] = 0;             // Byte offset 0x28.
    in_EAX[0xb] = 0xffffffffu;  // Byte offset 0x2c.
    in_EAX[0xc] = 0;            // Byte offset 0x30.
    in_EAX[0xd] = 0;            // Byte offset 0x34.
    in_EAX[0xe] = 0;            // Byte offset 0x38.
    in_EAX[0xf] = 0xffffffffu;  // Byte offset 0x3c.
    return;
}
