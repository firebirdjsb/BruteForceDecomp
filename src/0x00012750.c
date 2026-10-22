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

// Brute Force: 0x00012750 | Ghidra label FUN_00012750
// Ghidra function-body SHA-256: 91EAFC71190F7BD016EF7A199C60E16295DDDBC5249D3A5EC1665E7249EF0EB4
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x00012750; function index: 31.
// Recorded body SHA256:
// 91EAFC71190F7BD016EF7A199C60E16295DDDBC5249D3A5EC1665E7249EF0EB4
//
// TODO: Requires <cstdint> and the external symbol PTR_LAB_003a4024.
// The symbol's type and contents are unknown; only its address is used.
// TODO: Resolve the native ABI. The pseudocode receives this pointer in EAX;
// the explicit parameter below represents that register input for this draft.
// uint32_t represents opaque four-byte storage, not inferred field types.
// TODO: The caller must supply valid, suitably aligned storage through +0x97.
void FUN_00012750(uint32_t* in_EAX)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(uint32_t) == 4, "Requires four-byte words.");
#endif
    _Static_assert(sizeof(unsigned char) == 1, "Requires one-byte storage.");

    in_EAX[7] = 0;                                      // Four bytes at +0x1C.
    in_EAX[8] = 0;                                      // Four bytes at +0x20.
    in_EAX[9] = 0;                                      // Four bytes at +0x24.
    in_EAX[0xD] = ((uint32_t)(((uintptr_t)(&PTR_LAB_003a4024)))); // Address at +0x34.
    in_EAX[0x10] = 0;                                   // Four bytes at +0x40.
    in_EAX[0xE] = 0;                                    // Four bytes at +0x38.
    *((unsigned char*)(in_EAX + 0xF)) =
        ((unsigned char)((*((unsigned char*)(in_EAX + 0xF)) & 0xFA) | 2));
                                                        // Byte at +0x3C; preserve mask/order.
    in_EAX[0x17] = ((uint32_t)(((uintptr_t)(&PTR_LAB_003a4024)))); // Address at +0x5C.
    in_EAX[0x1A] = 0;                                   // Four bytes at +0x68.
    in_EAX[0x18] = 0;                                   // Four bytes at +0x60.
    *((unsigned char*)(in_EAX + 0x19)) =
        ((unsigned char)((*((unsigned char*)(in_EAX + 0x19)) & 0xFA) | 2));
                                                        // Byte at +0x64; preserve mask/order.
    in_EAX[0x1D] = ((uint32_t)(((uintptr_t)(&PTR_LAB_003a4024)))); // Address at +0x74.
    in_EAX[0x20] = 0;                                   // Four bytes at +0x80.
    in_EAX[0x1E] = 0;                                   // Four bytes at +0x78.
    *((unsigned char*)(in_EAX + 0x1F)) =
        ((unsigned char)((*((unsigned char*)(in_EAX + 0x1F)) & 0xFA) | 2));
                                                        // Byte at +0x7C; preserve mask/order.
    *in_EAX = 9;                                        // Four bytes at +0x00.
    *((unsigned char*)(in_EAX + 1)) = 0;   // One byte at +0x04.
    in_EAX[2] = 0;                                      // Four bytes at +0x08.
    in_EAX[3] = 0;                                      // Four bytes at +0x0C.
    in_EAX[4] = 0;                                      // Four bytes at +0x10.
    in_EAX[5] = 0;                                      // Four bytes at +0x14.
    in_EAX[0xC] = 0;                                    // Four bytes at +0x30.
    in_EAX[0xB] = 0;                                    // Four bytes at +0x2C.
    in_EAX[10] = 0;                                     // Four bytes at +0x28.
    *((unsigned char*)(in_EAX + 0x11)) = 0;// One byte at +0x44.
    in_EAX[0x12] = 0;                                   // Four bytes at +0x48.
    *((unsigned char*)(in_EAX + 0x13)) = 0;// One byte at +0x4C.
    in_EAX[0x16] = 0;                                   // Four bytes at +0x58.
    in_EAX[0x15] = 0;                                   // Four bytes at +0x54.
    in_EAX[0x14] = 0;                                   // Four bytes at +0x50.
    in_EAX[0x1B] = 0x41200000;                          // Raw four-byte value at +0x6C.
    in_EAX[0x1C] = 0x41800000;                          // Raw four-byte value at +0x70.
    in_EAX[0x1A] = 0x3E4CCCCD;                          // Raw four-byte value at +0x68.
    in_EAX[0x18] = 0x3E4CCCCD;                          // Raw four-byte value at +0x60.
    *((unsigned char*)(in_EAX + 0x19)) =
        ((unsigned char)((*((unsigned char*)(in_EAX + 0x19)) & 0xF9) | 1));
                                                        // Byte at +0x64; preserve mask/order.
    in_EAX[0x21] = 0;                                   // Four bytes at +0x84.
    in_EAX[0x22] = 0;                                   // Four bytes at +0x88.
    in_EAX[0x23] = 0;                                   // Four bytes at +0x8C.
    in_EAX[0x24] = 0;                                   // Four bytes at +0x90.
    in_EAX[0x25] = 0;                                   // Four bytes at +0x94.
    return;
}
