/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E321EAC6A0622D68240504512B242286E10EF2225A840038686E9CEAE302532C
 * Entry: 0x002b7910, Ghidra index: 9851, label: FUN_002b7910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b7910(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar1 = *(float *)(param_1 + 0x14);
  fVar2 = *(float *)(param_1 + 0x18);
  fVar3 = *(float *)(param_1 + 0x1c);
  fVar10 = *param_2 - *(float *)(param_1 + 0x40);
  fVar11 = param_2[1] - *(float *)(param_1 + 0x44);
  fVar12 = param_2[2] - *(float *)(param_1 + 0x48);
  fVar13 = param_2[3] - *(float *)(param_1 + 0x4c);
  fVar4 = *(float *)(param_1 + 0x24);
  fVar5 = *(float *)(param_1 + 0x28);
  fVar6 = *(float *)(param_1 + 0x2c);
  fVar7 = *(float *)(param_1 + 0x34);
  fVar8 = *(float *)(param_1 + 0x38);
  fVar9 = *(float *)(param_1 + 0x3c);
  *param_3 = *(float *)(param_1 + 0x10) * fVar10 + *(float *)(param_1 + 0x20) * fVar11 +
             *(float *)(param_1 + 0x30) * fVar12;
  param_3[1] = fVar1 * fVar10 + fVar4 * fVar11 + fVar7 * fVar12;
  param_3[2] = fVar2 * fVar10 + fVar5 * fVar11 + fVar8 * fVar12;
  param_3[3] = fVar3 * fVar13 + fVar6 * fVar13 + fVar9 * fVar13;
  return;
}
