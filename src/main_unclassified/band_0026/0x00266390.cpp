/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3F1F020A73BBB25DE750B6012A0D9B84CFC26E7C4A9BABCDB175FA24E00CE8BB
 * Entry: 0x00266390, Ghidra index: 8737, label: FUN_00266390
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_00266390(undefined4 *param_1,float param_2,undefined4 *param_3)

{
  float *pfVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 local_4;
  
  fVar5 = param_2;
  FUN_00233590();
  iVar7 = FUN_00266320(local_34,local_38,param_2);
  if (iVar7 != 0) {
    FUN_00233590();
    iVar8 = FUN_00266320(local_30,local_2c,local_28);
    if (iVar8 <= iVar7) {
      local_34 = local_30;
      local_38 = local_2c;
      param_2 = local_28;
    }
  }
  pfVar1 = *(float **)((int)fVar5 + 0x3c);
  bVar2 = *pfVar1 <= local_34;
  if (!bVar2) {
    local_34 = *pfVar1;
  }
  fVar5 = local_34;
  if (pfVar1[1] < local_34) {
    local_34 = pfVar1[1];
  }
  bVar3 = pfVar1[2] <= local_38;
  if (!bVar3) {
    local_38 = pfVar1[2];
  }
  fVar6 = local_38;
  if (pfVar1[3] < local_38) {
    local_38 = pfVar1[3];
  }
  bVar4 = pfVar1[4] <= param_2;
  if (!bVar4) {
    param_2 = pfVar1[4];
  }
  if (param_2 <= pfVar1[5]) {
    if (bVar4 && (fVar6 <= pfVar1[3] && (bVar3 && (fVar5 <= pfVar1[1] && bVar2)))) {
      local_24 = *param_3;
      uStack_20 = param_3[1];
      uStack_1c = param_3[2];
      uStack_18 = param_3[3];
      local_4 = param_3[8];
      local_14 = param_3[4];
      uStack_10 = param_3[5];
      uStack_c = param_3[6];
      uStack_8 = param_3[7];
      goto LAB_002664fb;
    }
  }
  else {
    param_2 = pfVar1[5];
  }
  FUN_002336d0(local_34,local_38,param_2);
LAB_002664fb:
  *param_1 = local_24;
  param_1[1] = uStack_20;
  param_1[2] = uStack_1c;
  param_1[3] = uStack_18;
  param_1[8] = local_4;
  param_1[4] = local_14;
  param_1[5] = uStack_10;
  param_1[6] = uStack_c;
  param_1[7] = uStack_8;
  return param_1;
}
