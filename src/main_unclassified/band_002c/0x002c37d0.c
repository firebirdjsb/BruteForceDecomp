/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8992EAE863FC22009B77AE36F8FDB55426C0022671CCC2E3B0B8518C13C42121
 * Entry: 0x002c37d0, Ghidra index: 10048, label: FUN_002c37d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Host pointers below bind observed memory operations only. Guest addresses
 * remain 32-bit; this is not an Xbox calling-convention/guest-memory bridge.
 * Host long double does not emulate x87 precision, control/status or faults.
 */
#include "bf_ghidra_types.h"

/* 0x002c37eb: two stack words, ST(0) result, RET 8. The original
 * 0x002c2f1d..0x002c2f3c forwards ST(0) from 0x002b6500 or 0x002c2a20.
 * 0x002c37f0 immediately spills that result to one four-byte stack slot. */
extern float10 FUN_002c2e90(int param_1, float *param_2);
/* 0x002c3880 / 0x002c3b3c: five stack words; 0x002ba255 RET 0x14.
 * Arguments 2/3/4 read twelve bytes; argument 5 writes twelve bytes.
 * No hidden output array is manufactured by these C declarations. */
extern void FUN_002ba160(int param_1, float *param_2, float *param_3,
                        float *param_4, float *param_5);

static uint32_t bf_002c37d0_word(uint32_t address)
{
    uint32_t value;
    memcpy(&value, (const void *)(uintptr_t)address, 4);
    return value;
}

static float bf_002c37d0_float(uint32_t address)
{
    float value;
    memcpy(&value, (const void *)(uintptr_t)address, 4);
    return value;
}

static void bf_002c37d0_store(uint32_t address, float value)
{
    memcpy((void *)(uintptr_t)address, &value, 4);
}
/* MOVSS m32 then MOVHPS m64: preserve the separate four/eight-byte reads. */
static void bf_002c37d0_load3(uint32_t address, float lanes[4])
{
    memcpy(lanes, (const void *)(uintptr_t)address, 4);
    lanes[1] = 0.0f;
    memcpy(lanes + 2, (const void *)(uintptr_t)(address + 4u), 8);
}

/* A volatile four-byte result preserves the individual SSE arithmetic spill
 * boundary. All four lanes are evaluated, including the MOVSS-cleared lane 1.
 * Floating-point exceptions, signaling NaNs and MXCSR remain ABI_UNVERIFIED. */
static float bf_002c37d0_mul(float left, float right)
{
    volatile float result = left * right;
    return result;
}
static float bf_002c37d0_add(float left, float right)
{
    volatile float result = left + right;
    return result;
}
static float bf_002c37d0_sub(float left, float right)
{
    volatile float result = left - right;
    return result;
}

void FUN_002c37d0(int param_1, float *param_2)
{
    uint32_t self = (uint32_t)param_1;
    uint32_t objects[2];
    float axis[4];
    float first[2][4];
    float linear[2][4];
    float angular[2][4];
    float transformed[2][4];
    float delta[4];
    float signed_axis[4];
    float temporary_linear[4];
    float temporary_angular[4];
    float helper_output[4];
    float result, bound, previous_dot, denominator, sign;
    unsigned int object_index, component, lane;
    long double accumulator, cross_x, cross_y;
    float cross_z;

    /* Stable ESP below means ESP after SUB 0x11c and four saved registers.
     * +0x28/+0x2c/+0x30: twelve-byte output passed at 0x002c37e3.
     * +0x34 is explicitly zeroed at 0x002c37e7 (before two more saves).
     * 0x002c37f0 stores the x87 result as m32fp, not an integer conversion. */
    axis[3] = 0.0f;
    result = (float)FUN_002c2e90(param_1, axis);
    /* 0x002c3801/11: MOV pointer words to stable ESP+0x64/+0x68.
     * Their bits are never converted to float. Every address addition below
     * operates in uint32_t before the explicit host-pointer conversion. */
    objects[0] = bf_002c37d0_word(bf_002c37d0_word(self + 0x10u) + 0x94u);
    objects[1] = bf_002c37d0_word(bf_002c37d0_word(self + 0x24u) + 0x94u);
    accumulator = (long double)bf_002c37d0_float(self + 0x54u);
    accumulator *= (long double)bf_002c37d0_float(self + 0x44u);
    bound = (float)(accumulator * (long double)*param_2);

    /* 0x002c3834/36: only fourth words at stable +0x108/+0x118
     * are zeroed. 0x002c3855..3896 fills +0xfc/+0x10c with exactly
     * three floats each; these are TWO 16-byte records, not five-float records. */
    first[0][3] = 0.0f;
    first[1][3] = 0.0f;
    for (object_index = 0; object_index < 2; ++object_index) {
        uint32_t object = objects[object_index];
        if ((*(const byte *)(uintptr_t)object & 0x0cu) == 0) {
            uint32_t vector = bf_002c37d0_word(self + 0x40u)
                            + 0x90u + object_index * 0x10u;
            FUN_002ba160((int)object, (float *)(uintptr_t)vector,
                         (float *)(uintptr_t)(object + 0xacu),
                         (float *)(uintptr_t)(object + 0x9cu), first[object_index]);
        } else {
            first[object_index][2] = 0.0f;
            first[object_index][1] = 0.0f;
            first[object_index][0] = 0.0f;
        }
    }
    /* 0x002c38be..38dd: MOVSS/MOVHPS maps memory [x,y,z] to
     * SIMD [x,0,y,z]. SUBPS and stores preserve three f32 lane results. */
    for (lane = 0; lane < 4; ++lane) {
        float left = lane == 1 ? 0.0f : first[0][lane == 0 ? 0 : lane - 1];
        float right = lane == 1 ? 0.0f : first[1][lane == 0 ? 0 : lane - 1];
        float difference = bf_002c37d0_sub(left, right);
        if (lane != 1) delta[lane == 0 ? 0 : lane - 1] = difference;
    }
    delta[3] = 0.0f; /* 0x002c38aa, stable ESP+0x5c. */
    /* 0x002c38e1..3909: x87 order is (Z + Y) + X, then FSTP m32fp. */
    accumulator = (long double)delta[2] * (long double)axis[2];
    accumulator += (long double)delta[1] * (long double)axis[1];
    accumulator += (long double)delta[0] * (long double)axis[0];
    previous_dot = (float)accumulator;

    /* 0x002c3910/24/38: fourth words only, 16-byte stride:
     * linear +0x88/+0x98; angular +0xb8/+0xc8; transformed +0xe8/+0xf8.
     * Record starts are +0x7c/+0x8c, +0xac/+0xbc and +0xdc/+0xec. */
    for (object_index = 0; object_index < 2; ++object_index) {
        linear[object_index][3] = 0.0f;
        angular[object_index][3] = 0.0f;
        transformed[object_index][3] = 0.0f;
    }
    denominator = 0.0f;
    sign = 1.0f;
    for (object_index = 0; object_index < 2; ++object_index) {
        uint32_t object = objects[object_index];
        for (component = 0; component < 3; ++component) {
            linear[object_index][component] = 0.0f;
            angular[object_index][component] = 0.0f;
        }
        if ((*(const byte *)(uintptr_t)object & 0x0cu) == 0) {
            uint32_t vector;
            float r[3], matrix[3][4], output_lanes[4];
            /* 0x002c3996..39e1: three x87 products, each spilled as m32fp.
             * Scratch +0x40/+0x44/+0x48/+0x4c has a zero fourth word. */
            for (component = 0; component < 3; ++component)
                signed_axis[component] = (float)((long double)axis[component] * sign);
            signed_axis[3] = 0.0f;
            /* 0x002c39e9..3a38: each matrix input is [x,0,y,z].
             * MULPS, ADDPS, MULPS, ADDPS each round to four-byte lanes. */
            for (component = 0; component < 3; ++component) {
                uint32_t row = object + 0xfcu + component * 0x10u;
                bf_002c37d0_load3(row, matrix[component]);
            }
            for (lane = 0; lane < 4; ++lane) {
                float first_product = bf_002c37d0_mul(matrix[0][lane], signed_axis[0]);
                float second_product = bf_002c37d0_mul(matrix[1][lane], signed_axis[1]);
                float partial = bf_002c37d0_add(first_product, second_product);
                float third_product = bf_002c37d0_mul(matrix[2][lane], signed_axis[2]);
                output_lanes[lane] = bf_002c37d0_add(partial, third_product);
            }
            transformed[object_index][0] = output_lanes[0];
            memcpy(transformed[object_index] + 1, output_lanes + 2, 8);
            temporary_linear[3] = 0.0f; /* +0x78, 0x002c3a43. */
            temporary_angular[3] = 0.0f; /* +0xa8, 0x002c3a47. */
            vector = bf_002c37d0_word(self + 0x40u) + 0x90u + object_index * 0x10u;
            for (component = 0; component < 3; ++component)
                r[component] = bf_002c37d0_float(vector + component * 4u);
            /* 0x002c3a57..3ab7: x87 differences; only cross Z is
             * spilled before its scale multiply (stable ESP+0x124). */
            cross_x = (long double)r[1] * transformed[object_index][2]
                    - (long double)r[2] * transformed[object_index][1];
            cross_y = (long double)r[2] * transformed[object_index][0]
                    - (long double)r[0] * transformed[object_index][2];
            cross_z = (float)((long double)r[0] * transformed[object_index][1]
                            - (long double)r[1] * transformed[object_index][0]);
            temporary_angular[0] = (float)(cross_x * bf_002c37d0_float(object + 0x34u));
            cross_y *= bf_002c37d0_float(object + 0x38u);
            accumulator = (long double)cross_z * bf_002c37d0_float(object + 0x3cu);
            temporary_angular[1] = (float)cross_y;
            temporary_angular[2] = (float)accumulator;
            /* 0x002c3abe..3b12: three m32fp products copied into the
             * 16-byte linear record; angular X is copied as raw f32 bits,
             * angular Y/Z are FSTP m32fp from their retained x87 values. */
            for (component = 0; component < 3; ++component) {
                temporary_linear[component] = (float)((long double)signed_axis[component]
                                             * bf_002c37d0_float(object + 0x40u));
                linear[object_index][component] = temporary_linear[component];
            }
            angular[object_index][0] = temporary_angular[0];
            angular[object_index][1] = (float)cross_y;
            angular[object_index][2] = (float)accumulator;
            /* 0x002c3b19..3b3c: output is stable ESP+0xcc, an actual
             * pointer passed as argument 5. Argument 3 is +0x6c (linear);
             * argument 4 is +0x9c (angular). +0xd8 is explicitly zeroed. */
            helper_output[3] = 0.0f;
            FUN_002ba160((int)object, (float *)(uintptr_t)vector,
                         temporary_linear, temporary_angular, helper_output);
            accumulator = (long double)helper_output[2] * signed_axis[2];
            accumulator += (long double)helper_output[1] * signed_axis[1];
            accumulator += (long double)helper_output[0] * signed_axis[0];
            accumulator += (long double)denominator;
            denominator = (float)accumulator;
        }
        sign = (float)((long double)sign * -1.0f);
    }
    /* 0x002c3b93..3bd4: unordered/equal/below bypass the update.
     * FST m32fp retains the unrounded quotient for FABS/FCOMP. */
    if (denominator > 1e-10f) {
        long double quotient = ((long double)result * (long double)*param_2
                              - (long double)previous_dot) / (long double)denominator;
        float amount = (float)quotient;
        if (fabsl(quotient) > (long double)bound) amount = bound;
        for (object_index = 0; object_index < 2; ++object_index) {
            uint32_t object = objects[object_index];
            if ((*(const byte *)(uintptr_t)object & 0x0cu) == 0) {
                unsigned int group;
                for (group = 0; group < 2; ++group) {
                    uint32_t destination = object + (group == 0 ? 0xacu : 0x9cu);
                    float *change = group == 0 ? linear[object_index] : angular[object_index];
                    float before[4], after[4];
                    /* 0x002c3c13..3c39 / 3c66..3c8c: all original
                     * source lanes load before any of the twelve output bytes.
                     * MULPS rounds before ADDPS; store only lanes 0/2/3. */
                    bf_002c37d0_load3(destination, before);
                    for (lane = 0; lane < 4; ++lane) {
                        float operand = lane == 1 ? 0.0f : change[lane == 0 ? 0 : lane - 1];
                        float product = bf_002c37d0_mul(operand, amount);
                        after[lane] = bf_002c37d0_add(before[lane], product);
                    }
                    bf_002c37d0_store(destination, after[0]);
                    memcpy((void *)(uintptr_t)(destination + 4u), after + 2, 8);
                }
            }
        }
    }
}
