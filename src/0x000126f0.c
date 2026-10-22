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

// Brute Force: 0x000126f0 | Ghidra label FUN_000126f0
// Ghidra function-body SHA-256: B208383B20B3623029E37FC22F013170684CF43244C6D371DF1BDBD25C2ADEC3
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Entry: 0x000126f0; function index: 30.
// Recorded body SHA256:
// B208383B20B3623029E37FC22F013170684CF43244C6D371DF1BDBD25C2ADEC3
//
// Requires <cstdint>.
// TODO: The second parameter explicitly represents Ghidra's incoming,
// unaffiliated EDI register value. It is NOT an evidenced stack argument.
// The original pseudocode lists only float param_1; recover the actual ABI.
void FUN_000126f0(float param_1, uint32_t unaff_EDI)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(float) == 4, "Requires 32-bit float storage.");
#endif

    // TODO: Confirm the indirect callee's calling convention, return type,
    // and any implicit register inputs. Only param_1 is shown by Ghidra.
    typedef void (*UnverifiedCode)(float);

    // Read the 32-bit pointer at EDI + 0x10, then the first 32-bit
    // code address stored at that pointer. No implicit object argument
    // is added because none appears in the provided pseudocode.
    const uint32_t indirect_base =
        *((const uint32_t*)(unaff_EDI + 0x10u));
    const uint32_t code_address =
        *((const uint32_t*)(indirect_base));
    ((UnverifiedCode)(code_address))(param_1);

    // TODO: Confirm raw memory layout and C++ aliasing requirements.
    // Address arithmetic below retains the 32-bit x86 address model.
    if (((*((uint8_t*)(unaff_EDI + 0x18u)) & 1) != 0) &&
        (((*((uint8_t*)(unaff_EDI + 0x18u)) >> 1) & 1) != 0))
    {
        // Each undefined4 store in the evidence writes exactly four bytes.
        *((uint32_t*)(unaff_EDI + 0x1cu)) = 0;
        *((uint32_t*)(unaff_EDI + 0x14u)) = 0;

        *((uint8_t*)(unaff_EDI + 0x18u)) =
            ((uint8_t)((*((uint8_t*)(unaff_EDI + 0x18u)) & 0xfa) | 2));

        // Preserve the literal as shown, without introducing a float suffix.
        // TODO: Confirm original floating-point comparison precision.
        if (1.1920929e-07 < param_1)
        {
            *((float*)(unaff_EDI + 0x0cu)) = param_1;
            *((float*)(unaff_EDI + 0x04u)) = param_1;

            *((uint8_t*)(unaff_EDI + 0x08u)) =
                ((uint8_t)((*((uint8_t*)(unaff_EDI + 0x08u)) & 0xf9) | 1));
        }
    }

    return;
}
