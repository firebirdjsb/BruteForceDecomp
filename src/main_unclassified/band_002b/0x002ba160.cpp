/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3F0E95B193DD627D119E63E5587739CD4702C3625C2E8A97E9A70B112B0CC220
 * Entry: 0x002ba160, Ghidra index: 9880, label: FUN_002ba160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002ba160(int param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar8 = param_4[1] * param_2[2] - param_4[2] * param_2[1];
  fVar9 = param_4[2] * *param_2 - *param_4 * param_2[2];
  fVar5 = *(float *)(param_1 + 0x11c);
  fVar6 = *(float *)(param_1 + 0x120);
  fVar7 = *(float *)(param_1 + 0x124);
  fVar10 = *param_4 * param_2[1] - param_4[1] * *param_2;
  fVar2 = *(float *)(param_1 + 0x10c);
  fVar3 = *(float *)(param_1 + 0x110);
  fVar4 = *(float *)(param_1 + 0x114);
  *param_5 = fVar8 * *(float *)(param_1 + 0xfc) +
             *(float *)(param_1 + 0x104) * fVar10 + *(float *)(param_1 + 0x100) * fVar9;
  param_5[1] = fVar2 * fVar8 + fVar4 * fVar10 + fVar9 * fVar3;
  param_5[2] = fVar5 * fVar8 + fVar7 * fVar10 + fVar9 * fVar6;
  uVar1 = *(undefined8 *)(param_3 + 1);
  *param_5 = *param_5 + *param_3;
  *(ulonglong *)(param_5 + 1) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_5 + 1) >> 0x20) +
                (float)((ulonglong)uVar1 >> 0x20),(float)*(undefined8 *)(param_5 + 1) + (float)uVar1
               );
  return;
}
