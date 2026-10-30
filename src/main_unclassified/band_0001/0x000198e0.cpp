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
extern void FUN_0001d0c0(const float *in_EAX, float *in_ECX);

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

// Brute Force: 0x000198e0 | Ghidra label FUN_000198e0
// Ghidra function-body SHA-256: 39C84AA96546131D0FBBC9B5C6767CB2BFE29657F7C28807B874362B2B8468DD
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Function index: 69; entry: 0x000198e0.
// Unverified source reconstruction, not recovered original code.
//
// TODO: Supply <cstdint> and <cstddef>.
// TODO: Supply float10 with the observed x87 extended-precision behavior.
//       Do not assume the compiler's long double provides that behavior.
// TODO: Resolve fpatan's operand order and precision, and ABS's semantics.
//       Their decompiler spellings and argument order are retained below.
// TODO: Supply the declaration and original ABI of FUN_0001d0c0.
//
// TODO: Resolve these missing function-pointer types and calling conventions:
//   TODO_VCallReturnsIntPointer: returns int32_t*; no explicit arguments.
//   TODO_VCallReturnsInt32:      returns int32_t; no explicit arguments.
//   TODO_VCallWithBytePointer:   accepts uint8_t*.
//   TODO_VCallWithFloatPointer:  accepts float*.
// The pseudocode does not establish their complete register inputs, return
// types for calls whose results are ignored, or receiver-passing conventions.
// Ordinary function-pointer typedefs alone may not preserve those inputs.
//
// The added source parameters expose the observed incoming ECX and EDI values.
// TODO: Recover the actual entry ABI; this signature is not an ABI replacement.
/* TODO: Provisional virtual-call types; hidden receiver and ABI unknown. */
typedef int32_t *(*TODO_VCallReturnsIntPointer)(void);
typedef int32_t (*TODO_VCallReturnsInt32)(void);
typedef void (*TODO_VCallWithBytePointer)(uint8_t *);
typedef void (*TODO_VCallWithFloatPointer)(float *);
void FUN_000198e0(
    float param_1,
    int32_t* in_ECX,
    float* unaff_EDI)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(int32_t) == 4, "Requires 32-bit integers.");
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(float) == 4, "Requires 32-bit floats.");
#endif

    // Preserve relative stack offsets because calls receive addresses into
    // this storage. The four bytes at stack offset -0x2c are unidentified.
    // TODO: Confirm the full storage ranges read or written by those calls.
    struct StackStorage
    {
        float fStack_38;                 // Observed stack offset -0x38.
        float fStack_34;                 // Observed stack offset -0x34.
        float fStack_30;                 // Observed stack offset -0x30.
        uint8_t unknown_2c[4];      // Unidentified bytes at -0x2c.
        float fStack_28;                 // Observed stack offset -0x28.
        uint8_t auStack_24[32];     // Observed 32-byte region at -0x24.
        float fStack_4;                  // Observed stack offset -0x04.
    } stack;                            // Deliberately not zero-initialized.

    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(offsetof(struct StackStorage, fStack_34) == 0x04);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(offsetof(struct StackStorage, fStack_30) == 0x08);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(offsetof(struct StackStorage, fStack_28) == 0x10);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(offsetof(struct StackStorage, auStack_24) == 0x14);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(offsetof(struct StackStorage, fStack_4) == 0x34);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(struct StackStorage) == 0x38);
#endif

    int32_t* piVar1;
    int32_t iVar2;
    float10 fVar3;
    float10 fVar4;

    // The first object word is treated as a 32-bit vtable address.
    // Each offset below is a byte offset; each entry occupies four bytes.
    piVar1 = ((TODO_VCallReturnsIntPointer)(*((uint32_t*)(((uint32_t)(*in_ECX)) + 0x24u))))();

    iVar2 = ((TODO_VCallReturnsInt32)(*((uint32_t*)(((uint32_t)(*piVar1)) + 0x0cu))))();

    // iVar2 retains its observed signed 32-bit type. Conversion to uint32_t
    // models its use as a 32-bit address before byte-offset arithmetic.
    stack.fStack_28 = -*((float*)(((uint32_t)(iVar2)) + 0x20u));

    fVar3 = (float10)fpatan(
        -(float10)*((float*)(((uint32_t)(iVar2)) + 0x08u)),
        (float10)stack.fStack_28);

    // TODO: Confirm the encoded precision of the displayed constants.
    if (fVar3 <= (float10)3.1415927) {
        if (fVar3 < (float10)-3.1415927) {
            fVar3 = fVar3 + (float10)6.2831855;
        }
    }
    else {
        fVar3 = fVar3 - (float10)6.2831855;
    }

    fVar4 = (float10)fpatan(
        (float10)*unaff_EDI,
        (float10)unaff_EDI[2]); // Element 2 is eight bytes from EDI.

    if (fVar4 <= (float10)3.1415927) {
        if (fVar4 < (float10)-3.1415927) {
            fVar4 = fVar4 + (float10)6.2831855;
        }
    }
    else {
        fVar4 = fVar4 - (float10)6.2831855;
    }

    if ((float10)param_1 * (float10)0.017453292 < ABS(fVar4 - fVar3)) {
        FUN_0001d0c0();

        ((TODO_VCallWithBytePointer)(*((uint32_t*)(((uint32_t)(*piVar1)) + 0x24u))))(
                    stack.auStack_24);

        ((TODO_VCallWithFloatPointer)(*((uint32_t*)(((uint32_t)(*piVar1)) + 0x1cu))))(
                    &stack.fStack_28);

        iVar2 = ((TODO_VCallReturnsInt32)(*((uint32_t*)(((uint32_t)(*piVar1)) + 0x0cu))))();

        stack.fStack_30 = -*((float*)(((uint32_t)(iVar2)) + 0x20u));
        stack.fStack_34 = -*((float*)(((uint32_t)(iVar2)) + 0x14u));
        stack.fStack_38 = -*((float*)(((uint32_t)(iVar2)) + 0x08u));

        // Retained despite no explicit subsequent read in the pseudocode.
        stack.fStack_4 = stack.fStack_34;

        ((TODO_VCallWithFloatPointer)(*((uint32_t*)(((uint32_t)(*piVar1)) + 0x3cu))))(
                    &stack.fStack_38);
    }

    return;
}
