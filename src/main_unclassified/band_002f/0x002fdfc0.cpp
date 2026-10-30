/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 59ACB03C6AABE7B024A35823F0B5A47BC50E286257D49E73F923DA6441E37AEE
 * Entry: 0x002fdfc0, Ghidra index: 10997, label: FUN_002fdfc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002fdfc0(int param_1,int param_2,float *param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = param_1;
  iVar6 = *param_4;
  if (iVar6 * 4 < param_1) {
    iVar6 = param_1 >> 2;
    FUN_002f8ea0();
  }
  iVar5 = param_4[1];
  if (param_4[1] < param_1) {
    FUN_002f9000();
    iVar5 = param_1;
  }
  param_1 = iVar5;
  if (param_2 < 0) {
    fVar1 = param_3[iVar4 + -1];
    iVar5 = iVar4;
    while (iVar3 = iVar5 + -2, 1 < iVar3) {
      param_3[iVar5 + -1] = param_3[iVar3] - param_3[iVar5 + -3];
      param_3[iVar3] = param_3[iVar5 + -3] + param_3[iVar3];
      iVar5 = iVar3;
    }
    param_3[1] = *param_3 - fVar1;
    *param_3 = fVar1 + *param_3;
    if (iVar4 < 5) {
      if (iVar4 == 4) {
        FUN_002fdd50(4,param_4 + 2,iVar6);
      }
    }
    else {
      FUN_002fcf30(iVar4,param_1);
      FUN_002fdd50(iVar4,param_4 + 2,iVar6);
    }
  }
  FUN_002fcff0(iVar4,param_3,param_1);
  if (-1 < param_2) {
    if (iVar4 < 5) {
      if (iVar4 == 4) {
        FUN_002fdc20(4,param_4 + 2,iVar6);
      }
    }
    else {
      FUN_002fdc20(iVar4,param_4 + 2,iVar6);
      FUN_002fce70(iVar4,param_1);
    }
    fVar1 = *param_3;
    fVar2 = param_3[1];
    *param_3 = param_3[1] + *param_3;
    iVar6 = 2;
    if (2 < iVar4) {
      do {
        iVar5 = iVar6 + 2;
        param_3[iVar6 + -1] = param_3[iVar6] - param_3[iVar6 + 1];
        param_3[iVar6] = param_3[iVar6 + 1] + param_3[iVar6];
        iVar6 = iVar5;
      } while (iVar5 < iVar4);
    }
    param_3[iVar4 + -1] = fVar1 - fVar2;
  }
  return;
}
