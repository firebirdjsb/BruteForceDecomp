#ifndef BF_002333B0_MATRIX_OPERATION_H
#define BF_002333B0_MATRIX_OPERATION_H
/* FUN_002333B0 reads four F32 quaternion words and writes nine F32
 * matrix words through guest EDX. This is a host C operation only:
 * pointer translation, guest register entry and x87 precision unverified. */
static inline void bf_002333b0_matrix_operation(float *output, const float *quaternion)
{
    float fVar1,fVar2,fVar3,fVar4,fVar5,fVar6,fVar7,fVar8,fVar9,fVar10,fVar11;
    fVar3 = 2.0f / (quaternion[2]*quaternion[2] + *quaternion * *quaternion +
                    quaternion[3]*quaternion[3] + quaternion[1]*quaternion[1]);
    fVar9 = fVar3 * quaternion[2];
    fVar8 = fVar3 * quaternion[3];
    fVar11 = fVar3 * quaternion[1] * *quaternion;
    fVar1 = *quaternion; fVar2 = *quaternion;
    fVar10 = fVar3 * quaternion[1] * quaternion[1];
    fVar3 = quaternion[1]; fVar4 = quaternion[1];
    fVar5 = quaternion[2]; fVar6 = quaternion[2]; fVar7 = quaternion[3];
    output[0] = 1.0f - (fVar9 * fVar5 + fVar8 * fVar7);
    output[1] = fVar9 * fVar3 - fVar8 * fVar2;
    output[2] = fVar8 * fVar4 + fVar9 * fVar1;
    output[3] = fVar9 * fVar3 + fVar8 * fVar2;
    output[4] = 1.0f - (fVar8 * fVar7 + fVar10);
    output[5] = fVar8 * fVar6 - fVar11;
    output[6] = fVar8 * fVar4 - fVar9 * fVar1;
    output[7] = fVar8 * fVar6 + fVar11;
    output[8] = 1.0f - (fVar9 * fVar5 + fVar10);
}
#endif
