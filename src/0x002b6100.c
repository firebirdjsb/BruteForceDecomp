/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 87E2EFFB6DF1992C6D974F857D6C231010E5D8E40026E0CD3E11F32B516627F6
 * Entry: 0x002b6100, Ghidra index: 9818, label: FUN_002b6100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b6100(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float local_30;
  undefined8 local_2c;
  float local_24 [5];
  float local_10;
  float local_c;
  float local_8;
  
  pfVar5 = local_24;
  iVar6 = 3;
  do {
    *pfVar5 = 0.0;
    pfVar5 = pfVar5 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_30 = *param_1;
  local_2c._0_4_ = param_1[4];
  local_2c._4_4_ = param_1[8];
  local_24[1] = param_1[1];
  local_24[2] = param_1[5];
  local_24[3] = param_1[9];
  local_10 = param_1[2];
  local_c = param_1[6];
  local_8 = param_1[10];
  pfVar5 = &local_30;
  iVar6 = 3;
  do {
    fVar1 = *pfVar5;
    uVar2 = *(undefined8 *)(param_2 + 1);
    fVar7 = (float)*(undefined8 *)(pfVar5 + 1);
    fVar8 = (float)((ulonglong)*(undefined8 *)(pfVar5 + 1) >> 0x20);
    uVar3 = *(undefined8 *)(param_2 + 5);
    uVar4 = *(undefined8 *)(param_2 + 9);
    *pfVar5 = *param_2 * fVar1 + param_2[4] * fVar7 + param_2[8] * fVar8;
    *(ulonglong *)(pfVar5 + 1) =
         CONCAT44((float)((ulonglong)uVar2 >> 0x20) * fVar1 +
                  (float)((ulonglong)uVar3 >> 0x20) * fVar7 +
                  (float)((ulonglong)uVar4 >> 0x20) * fVar8,
                  (float)uVar2 * fVar1 + (float)uVar3 * fVar7 + (float)uVar4 * fVar8);
    pfVar5 = pfVar5 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  *param_3 = local_30;
  param_3[1] = (float)local_2c;
  param_3[2] = local_2c._4_4_;
  param_3[4] = local_24[1];
  param_3[5] = local_24[2];
  param_3[6] = local_24[3];
  param_3[8] = local_10;
  param_3[9] = local_c;
  param_3[10] = local_8;
  return;
}
