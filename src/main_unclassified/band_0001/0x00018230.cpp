/* The original 32-bit x86 ABI is not established by this C11 translation. */
#include <stdint.h>
#include "bf_external_symbols.h"
/* Restore Ghidra 32-bit pseudotypes for this historical C++ draft.
 * Syntax alias only: no Xbox ABI, address, or class layout is inferred. */
#include "bf_ghidra_types.h"
#include <limits.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#if defined(__SSE__) || defined(__x86_64__)
#include <xmmintrin.h>
#include <emmintrin.h>
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern int FUN_0014f5c0(undefined4 param_1,int *param_2,int param_3,undefined4 param_4,int param_5);
extern void FUN_0014f7a0(void);
extern void FUN_0005e8b0(int *param_1,char param_2);
extern void FUN_00018000(int32_t in_EAX);

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

// Brute Force: 0x00018230 | Ghidra label FUN_00018230
// Ghidra function-body SHA-256: F2BCFF373B1781E16BCF37097FC2115C2581E145BC1DAC073489F237E2D42F5C
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x00018230.
// TODO: Requires <cstdint> and declarations for the external functions.
// TODO: Verify external return types, calling conventions, and implicit
// register arguments against the original 32-bit x86 ABI.
void FUN_00018230(void)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(int32_t) == 4, "Requires 32-bit integers.");
#endif

    int32_t* piVar1;
    int32_t iVar2;

    // TODO: Ghidra identifies this as an incoming, unaffiliated EDI value.
    // Its source is unknown. This uninitialized local is only a placeholder;
    // using it in executable C++ would not reproduce the incoming register.
    int32_t unaff_EDI;

    piVar1 = (int32_t*)FUN_000120f0();
    if (piVar1 != NULL) {
        // Index 3 is byte offset 0x0C; index 0x1FB is byte offset 0x7EC.
        // TODO: Confirm floating-point precision and conversion behavior,
        // including zero divisors and out-of-range float-to-integer results.
        piVar1[0x1fb] = (int32_t)(
            200.0 / (*(float*)(piVar1[3] + 0x2d0) * 57.295776));

        // Index 0x93 is byte offset 0x24C.
        iVar2 = FUN_0014f5c0(
            piVar1 + 0x93, piVar1, piVar1[0x93], 0xc, 6);

        if (iVar2 == 0) {
            // Load the indirect target at byte offset 0x40 from *piVar1.
            // TODO: The no-argument function-pointer type reflects only the
            // displayed pseudocode; receiver/register arguments are unknown.
            (**(void (**)())(*piVar1 + 0x40))();
            FUN_0014f7a0();
        }
        else if ((*(uint8_t*)(piVar1 + 0x94) & 1) != 0) {
            // Index 0x94 is byte offset 0x250; inspect its first byte.
            piVar1[0x93] = iVar2;
        }

        // Index 0x167 is byte offset 0x59C.
        if (piVar1[0x167] != 0) {
            FUN_0005e8b0(piVar1, 0);
        }

        // TODO: Resolve incoming EDI before this access can be implemented.
        // Preserve the unsigned 32-bit load at byte offset 0x3C4.
        if ((*(uint32_t*)(unaff_EDI + 0x3c4) & 0x100) != 0) {
            FUN_00018000();
        }
    }

    return;
}
