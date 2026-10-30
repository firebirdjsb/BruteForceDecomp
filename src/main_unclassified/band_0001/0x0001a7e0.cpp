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
extern int FUN_0014d330(void);
extern int FUN_0014d3b0(void);

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

// Brute Force: 0x0001a7e0 | Ghidra label FUN_0001a7e0
// Ghidra function-body SHA-256: 9398ED2C4C4A4AED4528F54D8B5142A668B6A429BD06CB13191B4362E87212D6
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x0001a7e0; function index: 78.
// Unverified source reconstruction, not recovered original code.
// TODO: Confirm the function's calling convention and external declarations.
void FUN_0001a7e0(int* param_1, int* param_2)
{
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(int) == 4, "Requires 32-bit int.");
#endif
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */

    char cVar1;
    // TODO: Resolve the source of Ghidra's in_EAX and its relationship to
    // the following calls. This variable is deliberately uninitialized:
    // the supplied evidence provides no C++ assignment. Do not execute
    // this draft until the register dependency has been reconstructed.
    int in_EAX;
    int iVar2;
    int iVar3;
    int iVar4;

    // TODO: Supply verified declarations and ABIs for these external calls.
    iVar2 = FUN_0014d330();
    iVar3 = FUN_0014d3b0();

    // Read a 32-bit value at byte offset 0x2e8 from unresolved in_EAX.
    iVar4 = *((int*)(in_EAX + 0x2e8));

    // Read the 32-bit address at byte offset 0x144, then call the function
    // pointer at byte offset 0x20 from that address.
    // TODO: Verify the indirect callee's ABI, return type, and any implicit
    // register arguments; Ghidra shows no explicit arguments.
    cVar1 = (*((char (**)())(*((int*)(iVar4 + 0x144)) + 0x20)))();

    // Preserve short-circuit evaluation and the conditional reassignment.
    if (((cVar1 == '\0') ||
         (iVar4 = *((int*)(iVar4 + 0x164)), iVar4 == 0)) ||
        (*((int*)(*((int*)(iVar4 + 0xc)) + 4)) != 0x14))
    {
        iVar4 = 0;
    }

    if (iVar2 == iVar4)
    {
        *param_1 = iVar2;
        *param_2 = iVar3;
        return;
    }

    *param_1 = iVar3;
    *param_2 = iVar2;
    return;
}
