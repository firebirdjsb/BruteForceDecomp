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
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern void FUN_0014f7a0(void);
extern void FUN_00058b60(void);
extern void FUN_0003abe0(float param_1);
extern undefined4 FUN_00055aa0(void);
extern void FUN_0008f6e0(std::uint32_t guest_edx);

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

static inline uintptr_t bf_00018510_address32(int32_t base,
                              uint32_t byte_offset) {
        return ((uintptr_t)(((uint32_t)(base)) + byte_offset));
    }

// Brute Force: 0x00018510 | Ghidra label FUN_00018510
// Ghidra function-body SHA-256: 8A11D68B4D11F271E6F0F1E833761F57BFA991CAF0B67F5738AA2F3E88D8AFE1
// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.

// DRAFT: not validated against the original executable.
// Function index: 66; entry: 0x00018510.
// Recorded body SHA256:
// 8A11D68B4D11F271E6F0F1E833761F57BFA991CAF0B67F5738AA2F3E88D8AFE1
//
// TODO: Requires <cstdint> and <cstddef>, and declarations for all referenced
// FUN_* functions and PTR_FUN_* data symbols. Their implementations are unknown.
// TODO: Recover the original calling convention, implicit register arguments,
// object context, and exception-handling ABI. Empty argument lists below reflect
// the supplied pseudocode and do not establish the actual callee signatures.
void FUN_00018510(int32_t* param_1,
                  int32_t param_2,
                  float param_3,
                  float param_4)
{
    /* TODO: original x86 is 32-bit; host pointer width need not be 32-bit. */
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(int32_t) == 4);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(uint32_t) == 4);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(float) == 4);
#endif

    // Preserve 32-bit address addition, including wraparound, independently of
    // C++ signed-overflow rules. The base retains its original signed bit pattern.
    /* Former C++ lambda address32 lifted to static C11 function. */

    // These function-pointer types preserve only the visible explicit arguments.
    // TODO: Verify calling conventions, hidden arguments, and return types.
    typedef void (*UnknownVirtualNoArgs)();
    typedef void (*UnknownVirtualOneArg)(uint32_t*);

    // Model the observed stack-slot spacing because addresses of interior slots
    // escape to calls. This is a draft layout, not a recovered source class.
    // Pointer fields retain Ghidra's neutral "undefined **"/"undefined ***" types.
    struct StackSlots {
        uint8_t** ppuStack_78;        // Original stack offset -0x78.
        uint8_t** ppuStack_74;        // -0x74.
        uint32_t uStack_70;           // -0x70.
        int32_t iStack_6c;            // -0x6c.
        uint32_t uStack_68;           // -0x68.
        uint32_t uStack_64;           // -0x64.
        uint32_t uStack_60;           // -0x60.
        uint32_t uStack_5c;           // -0x5c.
        int32_t iStack_58;            // -0x58.
        uint32_t uStack_54;           // -0x54.
        uint32_t uStack_50;           // -0x50.
        uint32_t uStack_4c;           // -0x4c.
        uint32_t uStack_48;           // -0x48.
        uint32_t uStack_44;           // -0x44.
        uint8_t bStack_40;            // -0x40.
        uint8_t unknown_3f_to_3d[3];  // Unspecified intervening bytes.
        uint8_t bStack_3c;            // -0x3c.
        uint8_t unknown_3b_to_39[3];  // Unspecified intervening bytes.
        uint32_t uStack_38;           // -0x38.
        uint32_t uStack_34;           // -0x34.
        uint32_t uStack_30;           // -0x30.
        uint32_t uStack_2c;           // -0x2c.
        uint32_t uStack_28;           // -0x28.
        uint32_t uStack_24;           // -0x24.
        uint32_t uStack_20;           // -0x20.
        uint8_t*** pppuStack_1c;      // -0x1c.
        uint8_t** ppuStack_18;        // -0x18.
        uint8_t unknown_14_to_09[12]; // Unspecified intervening bytes.
        int32_t iStack_8;             // -0x08.
        uint32_t uStack_4;            // -0x04.
    };

    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(sizeof(struct StackSlots) == 0x78);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(offsetof(struct StackSlots, iStack_6c) == 0x0c);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(offsetof(struct StackSlots, iStack_58) == 0x20);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(offsetof(struct StackSlots, bStack_40) == 0x38);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(offsetof(struct StackSlots, bStack_3c) == 0x3c);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(offsetof(struct StackSlots, uStack_38) == 0x40);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(offsetof(struct StackSlots, pppuStack_1c) == 0x5c);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(offsetof(struct StackSlots, ppuStack_18) == 0x60);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(offsetof(struct StackSlots, iStack_8) == 0x70);
#endif
    #if UINTPTR_MAX == UINT32_MAX
    _Static_assert(offsetof(struct StackSlots, uStack_4) == 0x74);
#endif

    // TODO: Several slots are read without visible initialization. Hidden call
    // arguments, stack aliasing, or omitted construction may explain this.
    // Deliberately do not invent initial values; these reads are indeterminate
    // in ordinary C++ unless the missing initialization is recovered.
    struct StackSlots stack;

    int32_t* piVar1;
    int32_t iVar2;

    piVar1 = ((int32_t*)(bf_00018510_address32(FUN_000120f0(), 0)));

    // First object word supplies a 32-bit table address; load the function
    // pointer at byte offset 0x40. No explicit arguments appear in the evidence.
    (*((UnknownVirtualNoArgs*)(bf_00018510_address32(*piVar1, 0x40))))();

    FUN_0014f7a0();

    if ((0.0f <= param_3) && (0.0f <= param_4)) {
        if (param_3 <= 7.0f) {
            param_3 = 7.0f;
        }
        if (param_4 <= 7.0f) {
            param_4 = 7.0f;
        }

        // Element offsets 0x85 and 0x86 correspond to byte offsets 0x214/0x218.
        // TODO: Verify the machine conversion for values outside int32_t range;
        // the supplied pseudocode specifies only these casts.
        param_1[0x85] = ((int32_t)(param_3));
        param_1[0x86] = ((int32_t)(param_4));
    }

    FUN_0001a4e0();

    if (param_2 == 0) {
        iVar2 = FUN_000120f0();

        // Read/modify/write the 32-bit word at byte offset 0x250.
        *((uint32_t*)(bf_00018510_address32(iVar2, 0x250))) =
            *((uint32_t*)(bf_00018510_address32(iVar2, 0x250))) | 1u;

        // Destination element 0x7b is byte offset 0x1ec.
        param_1[0x7b] =
            *((int32_t*)(bf_00018510_address32(iVar2, 0x24c)));

        // Element 0x87 locates byte offset 0x21c; modify only its first byte.
        *((uint8_t*)(param_1 + 0x87)) =
            *((uint8_t*)(param_1 + 0x87)) & 0xfe;
        *((uint8_t*)(param_1 + 0x87)) =
            *((uint8_t*)(param_1 + 0x87)) | 2;
    } else {
        // TODO: Recover the actual types of these table/data symbols.
        stack.ppuStack_18 =
            ((uint8_t**)(&PTR_FUN_003a4f68));
        stack.uStack_4 = 0;
        FUN_00058b60();

        param_1[0x7b] = param_2;
        *((uint8_t*)(param_1 + 0x87)) =
            *((uint8_t*)(param_1 + 0x87)) & 0xfe;
        *((uint8_t*)(param_1 + 0x87)) =
            *((uint8_t*)(param_1 + 0x87)) & 0xfd;

        // TODO: Both bytes lack visible initialization before these reads.
        stack.bStack_3c = stack.bStack_3c & 0xfe;
        stack.bStack_40 = stack.bStack_40 & 0xfe;

        stack.pppuStack_1c = &stack.ppuStack_78;
        stack.ppuStack_78 =
            ((uint8_t**)(&PTR_FUN_003a479c));
        stack.uStack_68 = 0;
        stack.uStack_54 = 0;
        stack.ppuStack_74 =
            ((uint8_t**)(&PTR_FUN_003a4f64));
        stack.uStack_5c = 0;
        stack.uStack_60 = 0;
        stack.uStack_64 = 0;
        stack.uStack_4c = 0;
        stack.uStack_48 = 0;
        stack.uStack_44 = 0;
        stack.uStack_50 = 0;
        stack.uStack_70 = 0x1f;
        stack.uStack_38 = 0;
        stack.uStack_34 = 0;
        stack.uStack_30 = 0;
        stack.uStack_2c = 0;
        stack.uStack_28 = 0;
        stack.uStack_20 = 0;
        stack.uStack_24 = 0x1f;

        // Load the function pointer at table byte offset 0x1c and pass the
        // address of the original -0x38 slot as the sole visible argument.
        (*((UnknownVirtualOneArg*)(bf_00018510_address32(*param_1, 0x1c))))(&stack.uStack_38);

        FUN_0003abe0(0);
        iVar2 = FUN_00055aa0();

        // Preserve short-circuit order: the memory reads precede the signed
        // comparison with -0x1c. No earlier validity guard appears in evidence.
        if ((((*((uint32_t*)(bf_00018510_address32(iVar2, 0x88))) & 0x2000u) == 0) ||
             (*((char*)(bf_00018510_address32(iVar2, 0x19))) != '\0')) &&
            (iVar2 != -0x1c)) {
            iVar2 = FUN_00055aa0();

            if (((*((uint32_t*)(bf_00018510_address32(iVar2, 0x88))) & 0x2000u) == 0) ||
                (*((char*)(bf_00018510_address32(iVar2, 0x19))) != '\0')) {
                // Preserve the 32-bit addition and retain a signed result.
                // TODO: This conversion assumes the target's x86 integer ABI.
                iVar2 = ((int32_t)(((uint32_t)(iVar2)) + 0x1cu));
            } else {
                iVar2 = 0;
            }

            // TODO: The visible flow permits iVar2 == 0 here, yielding a read
            // at address 0x00000004. Preserve this uncertainty without a repair.
            if (*((int32_t*)(bf_00018510_address32(iVar2, 4))) == 0x1f) {
                iVar2 = FUN_00055aa0();
                *((float*)(bf_00018510_address32(iVar2, 0x94))) = param_4;
            }
        }

        stack.ppuStack_78 =
            ((uint8_t**)(&PTR_FUN_003a4f64));

        // TODO: These cleanup conditions have no visible initializing stores;
        // the calls may also require implicit object/stack arguments.
        if (stack.iStack_58 != 0) {
            FUN_0008f6e0();
        }
        if (stack.iStack_6c != 0) {
            FUN_0008f6e0();
        }

        // Preserve the observed pointer-type change without inferring its role.
        stack.pppuStack_1c =
            ((uint8_t***)(&PTR_FUN_003a4f68));

        if (stack.iStack_8 != 0) {
            FUN_0008f6e0();
            return;
        }
    }

    return;
}
