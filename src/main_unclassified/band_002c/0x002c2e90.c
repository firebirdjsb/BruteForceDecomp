/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A8468C8DFC760BE46E8BC8E98D850D0F3D1E75DC0A6F61A9D8F562756131149B
 * Entry: 0x002c2e90, Ghidra index: 10044, label: FUN_002c2e90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Host long double is an arithmetic/return proxy, not an x87 emulator or an
 * Xbox calling-convention bridge. Guest addresses remain 32-bit values.
 */
#include "bf_ghidra_types.h"

/* 0x002c2f1d and 0x002c2f34 push one/two stack words respectively.
 * Their original callees return a value in ST(0), retained by this entry.
 * These types agree with the existing callee source definitions. */
extern float10 FUN_002b6500(float *param_1);
extern float10 FUN_002c2a20(int param_1, float *param_2);

static float bf_002c2e90_float(uint32_t address)
{
    float value;
    memcpy(&value, (const void *)(uintptr_t)address, 4);
    return value;
}
static float bf_002c2e90_mul(float left, float right)
{
    volatile float result = left * right;
    return result;
}
static float bf_002c2e90_add(float left, float right)
{
    volatile float result = left + right;
    return result;
}

float10 FUN_002c2e90(int param_1, float *param_2)
{
    uint32_t self = (uint32_t)param_1;
    uint32_t matrix;
    float scale, z_spill, input[4], before[4], after[4];
    long double x, y;
    float10 result;
    unsigned int lane;

    /* 0x002c2e93..2ece: source pointer at +0x40 is one 32-bit guest
     * word. X/Y stay on the x87 stack; Z spills to a four-byte scratch slot.
     * Output stores occur at +0,+4,+8 after all three source reads. */
    memcpy(&matrix, (const void *)(uintptr_t)(self + 0x40u), 4);
    scale = bf_002c2e90_float(self + 0x38u);
    y = (long double)scale * bf_002c2e90_float(matrix + 0x74u);
    z_spill = (float)((long double)scale * bf_002c2e90_float(matrix + 0x78u));
    x = (long double)scale * bf_002c2e90_float(matrix + 0x70u);
    param_2[0] = (float)x;
    param_2[1] = (float)y;
    param_2[2] = z_spill;

    /* 0x002c2ed5..2f14: MOVSS/MOVHPS loads map [x,y,z] to
     * [x,0,y,z]. MULPS rounds before ADDPS; both four-lane operations
     * execute before the twelve-byte output stores. No numeric conversion
     * from the packed uint64_t representation occurs. MXCSR status, faults
     * and signaling-NaN behavior remain ABI_UNVERIFIED. */
    scale = bf_002c2e90_float(self + 0x3cu);
    memcpy(input, (const void *)(uintptr_t)(matrix + 0x80u), 4);
    input[1] = 0.0f;
    memcpy(input + 2, (const void *)(uintptr_t)(matrix + 0x84u), 8);
    memcpy(before, param_2, 4);
    before[1] = 0.0f;
    memcpy(before + 2, param_2 + 1, 8);
    for (lane = 0; lane < 4; ++lane) {
        float product = bf_002c2e90_mul(input[lane], scale);
        after[lane] = bf_002c2e90_add(before[lane], product);
    }
    /* 0x002c2f10/14: one m32 write, then one m64 write. */
    param_2[0] = after[0];
    memcpy(param_2 + 1, after + 2, 8);

    /* 0x002c2f1d..2f3c: keep the first ST(0) when byte +0x34 != 1.
     * Otherwise FSTP ST(0) discards it, and the second call supplies ST(0).
     * RET 8 does not remove this remaining x87 return value. */
    result = FUN_002b6500(param_2);
    if (*(const byte *)(uintptr_t)(self + 0x34u) == 1u)
        result = FUN_002c2a20(param_1, param_2);
    return result;
}
