/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3D3A49F7DC4AD20B9B32A990E56C29214A6724BF9A83705713344F205860D4C6
 * Entry: 0x0001fb70, Ghidra index: 156, label: FUN_0001fb70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float * FUN_0001fb70(float *param_1,float *param_2,float *param_3)

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
  
  fVar6 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar1 = *param_3;
  fVar8 = (float)*(undefined8 *)(param_3 + 1);
  fVar9 = (float)((ulonglong)*(undefined8 *)(param_3 + 1) >> 0x20);
  fVar7 = fVar6 + fVar6;
  fVar5 = fVar1 * fVar2 + fVar8 * fVar3 + fVar9 * fVar4;
  fVar6 = (fVar6 * fVar6 + fVar6 * fVar6) - 1.0;
  fVar5 = fVar5 + fVar5;
  *param_2 = (fVar5 * fVar2 - (fVar4 * fVar8 - fVar9 * fVar3) * fVar7) + fVar6 * fVar1;
  param_2[1] = (fVar5 * fVar3 - (fVar2 * fVar9 - fVar1 * fVar4) * fVar7) + fVar6 * fVar8;
  param_2[2] = (fVar5 * fVar4 - (fVar3 * fVar1 - fVar8 * fVar2) * fVar7) + fVar6 * fVar9;
  return param_2;
}
