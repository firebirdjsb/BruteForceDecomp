#ifndef BF_002339D0_QUATERNION_OPERATION_H
#define BF_002339D0_QUATERNION_OPERATION_H
#include <math.h>
#include <stdint.h>
/* Original 0x002339D0: four F32 output words from nine F32 matrix words.
 * The matrix pointer arrives in guest ECX (omitted by the Ghidra C draft).
 * This operation is not a guest ABI shim or verified x87 implementation.
 * In its audited caller the input and output storage are disjoint. */
static inline float *bf_002339d0_quaternion_operation(float *output, const float *matrix)
{
    int iVar1;
    int iVar2;
    float fVar3;
    uint32_t uVar4;
    int local_c[3];
    fVar3 = matrix[4] + *matrix + matrix[8];
    if (0.0f < fVar3) {
        fVar3 = sqrtf(fVar3 + 1.0f);
        *output = fVar3 * 0.5f;
        fVar3 = 0.5f / fVar3;
        output[1] = (matrix[7] - matrix[5]) * fVar3;
        output[2] = (matrix[2] - matrix[6]) * fVar3;
        output[3] = (matrix[3] - matrix[1]) * fVar3;
        return output;
    }
    uVar4 = (uint32_t)(*matrix < matrix[4]);
    if (matrix[uVar4 * 4] < matrix[8]) {
        uVar4 = 2;
    }
    local_c[0] = 1;
    local_c[1] = 2;
    local_c[2] = 0;
    iVar1 = local_c[uVar4];
    iVar2 = local_c[iVar1];
    fVar3 = sqrtf((matrix[uVar4 * 4] - (matrix[iVar2 * 4] + matrix[iVar1 * 4])) + 1.0f);
    output[uVar4 + 1] = fVar3 * 0.5f;
    fVar3 = 0.5f / fVar3;
    *output = (matrix[iVar2 * 3 + iVar1] - matrix[iVar1 * 3 + iVar2]) * fVar3;
    output[iVar1 + 1] = (matrix[uVar4 * 3 + iVar1] + matrix[iVar1 * 3 + uVar4]) * fVar3;
    output[iVar2 + 1] = (matrix[uVar4 * 3 + iVar2] + matrix[iVar2 * 3 + uVar4]) * fVar3;
    return output;
}
#endif
