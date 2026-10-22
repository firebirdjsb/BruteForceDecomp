/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D65F7D5BC7579CE9DCB1D03F874FB4356E99A106C557731A4D3BF9CEAD7C725C
 * Entry: 0x0004d970, Ghidra index: 656, label: FUN_0004d970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0004d970(int *param_1,float *param_2,int param_3,char param_4,char param_5)

{
  undefined8 uVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  undefined1 in_XMM0 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  
  if (param_2[2] * param_2[2] + param_2[1] * param_2[1] + *param_2 * *param_2 < 1e-32) {
    piVar3 = (int *)(**(code **)(*param_1 + 0x24))();
    iVar4 = (**(code **)(*piVar3 + 0x28))();
    fVar6 = *(float *)(iVar4 + 0x20);
    fVar2 = *(float *)(iVar4 + 0x14);
    *param_2 = -*(float *)(iVar4 + 8);
    param_2[1] = -fVar2;
    param_2[2] = -fVar6;
    param_3 = 1;
  }
  if (param_1[0x10b] == 0) {
    FUN_00055a60(param_1 + 0x107);
  }
  uVar5 = (param_1[0x10a] + param_1[0x10b]) - 1;
  if ((uint)param_1[0x109] <= uVar5) {
    uVar5 = uVar5 - param_1[0x109];
  }
  if (*(int *)(*(int *)(param_1[0x108] + uVar5 * 4) + 0x94) != 0) {
    iVar4 = FUN_00055aa0();
    param_3 = *(int *)(iVar4 + 0x94);
  }
  auVar7 = rsqrtss(in_XMM0,param_2[2] * param_2[2] + param_2[1] * param_2[1] + *param_2 * *param_2);
  fVar6 = auVar7._0_4_;
  *param_2 = fVar6 * *param_2;
  param_2[1] = fVar6 * param_2[1];
  param_2[2] = fVar6 * param_2[2];
  if (param_3 == 0) {
    param_3 = param_1[0x118];
  }
  if (((param_1[0xf1] & 0x400U) != 0) && (param_3 == 4)) {
    param_3 = 3;
  }
  *(int *)(param_1[0x6a] + 4) = param_3;
  iVar4 = 0;
  if (param_5 != '\0') {
    iVar4 = FUN_0004d840();
  }
  if ((param_4 != '\0') && (param_3 = iVar4, iVar4 == 0)) {
    iVar4 = ((int *)param_1[0x6a])[1];
    param_3 = *(int *)param_1[0x6a];
    if (iVar4 < param_3) {
      param_3 = iVar4;
    }
  }
  iVar4 = FUN_000120f0();
  if (((iVar4 != 0) && ((char)param_1[0xf3] != '\0')) &&
     ((2 < param_3 || ((1 < param_3 && ((*(byte *)(*(int *)(iVar4 + 0xc) + 0x1a9) & 0x20) == 0))))))
  {
    FUN_0003f0e0(0);
  }
  if (param_3 == 1) {
    uVar1 = *(undefined8 *)(param_2 + 1);
    *param_2 = *param_2 * 0.01;
    param_2[1] = (float)uVar1 * 0.01;
    param_2[2] = (float)((ulonglong)uVar1 >> 0x20) * 0.01;
    return 1;
  }
  if (param_3 == 2) {
    uVar1 = *(undefined8 *)(param_2 + 1);
    *param_2 = *param_2 * 0.5;
    param_2[1] = (float)uVar1 * 0.5;
    param_2[2] = (float)((ulonglong)uVar1 >> 0x20) * 0.5;
    return 2;
  }
  if (param_3 == 3) {
    uVar8 = 0;
  }
  else {
    if (param_3 != 4) {
      return param_3;
    }
    if ((param_1[0xf1] & 0x400U) != 0) {
      return 4;
    }
    uVar8 = 1;
  }
  FUN_00047a40(uVar8);
  return param_3;
}
