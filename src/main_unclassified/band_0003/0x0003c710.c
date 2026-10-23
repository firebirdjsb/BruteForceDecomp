/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C58B56DD40567DD25FEBFACE57F5B3ED2349A6B2E4886C110B94842839A2A1AB
 * Entry: 0x0003c710, Ghidra index: 437, label: FUN_0003c710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0003c710(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int in_EAX;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar2 = param_1 - *(int *)(in_EAX + 0xc);
  uVar3 = *(int *)(in_EAX + 0x10) - uVar2;
  uVar5 = param_5 - param_3;
  if (uVar3 <= uVar2) {
    if (uVar3 < uVar5) {
      param_2 = param_4;
      iVar4 = param_3 + uVar3;
      for (iVar6 = iVar4; (param_2 != param_6 || (iVar6 != param_5)); iVar6 = iVar6 + 1) {
        uVar5 = iVar6 / 2;
        if (*(uint *)(param_2 + 8) <= uVar5) {
          uVar5 = uVar5 - *(uint *)(param_2 + 8);
        }
        FUN_0003bec0(*(int *)(*(int *)(param_2 + 4) + uVar5 * 4) + (iVar6 % 2) * 8);
      }
      param_1 = 0;
      if (uVar3 != 0) {
        do {
          param_5 = *(int *)(in_EAX + 0xc);
          iVar6 = param_5 + param_1 + uVar2;
          uVar5 = iVar6 / 2;
          if (*(uint *)(in_EAX + 8) <= uVar5) {
            uVar5 = uVar5 - *(uint *)(in_EAX + 8);
          }
          FUN_0003bec0(*(int *)(*(int *)(in_EAX + 4) + uVar5 * 4) + (iVar6 % 2) * 8);
          param_1 = param_1 + 1;
        } while (param_1 < uVar3);
      }
      param_5 = *(int *)(in_EAX + 0xc);
      FUN_0003cec0(&param_3,param_3,param_4,iVar4,param_4,uVar2 + param_5);
      return;
    }
    param_1 = 0;
    if (uVar5 != 0) {
      do {
        iVar4 = (*(int *)(in_EAX + 0xc) - uVar5) + param_1 + uVar3 + uVar2;
        uVar1 = iVar4 / 2;
        if (*(uint *)(in_EAX + 8) <= uVar1) {
          uVar1 = uVar1 - *(uint *)(in_EAX + 8);
        }
        FUN_0003bec0(*(int *)(*(int *)(in_EAX + 4) + uVar1 * 4) + (iVar4 % 2) * 8);
        param_1 = param_1 + 1;
      } while (param_1 < uVar5);
    }
    iVar4 = uVar2 + *(int *)(in_EAX + 0xc);
    param_1 = iVar4 + uVar3;
    FUN_0003ce20(&param_1,iVar4);
    FUN_0003cec0(&param_3,param_3,param_4,param_5,param_6,iVar4);
    return;
  }
  param_1 = uVar5;
  if (uVar2 < uVar5) {
    iVar4 = (param_3 - uVar2) + uVar5;
    param_2 = param_4;
    param_1 = iVar4;
    while ((param_4 != param_2 || (param_3 != iVar4))) {
      iVar4 = iVar4 + -1;
      uVar3 = iVar4 / 2;
      if (*(uint *)(param_2 + 8) <= uVar3) {
        uVar3 = uVar3 - *(uint *)(param_2 + 8);
      }
      FUN_0003cfd0(*(int *)(*(int *)(param_2 + 4) + uVar3 * 4) + (iVar4 % 2) * 8);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      param_3 = *(int *)(in_EAX + 0xc);
      iVar4 = (uVar5 - 1) + param_3;
      uVar3 = iVar4 / 2;
      if (*(uint *)(in_EAX + 8) <= uVar3) {
        uVar3 = uVar3 - *(uint *)(in_EAX + 8);
      }
      FUN_0003cfd0(*(int *)(*(int *)(in_EAX + 4) + uVar3 * 4) + (iVar4 % 2) * 8);
    }
    param_3 = *(int *)(in_EAX + 0xc);
    FUN_0003cec0(&param_3,param_1,param_2,param_5,param_6,uVar5 + param_3);
    return;
  }
  for (; param_1 != 0; param_1 = param_1 - 1) {
    iVar4 = (uVar5 - 1) + *(int *)(in_EAX + 0xc);
    uVar3 = iVar4 / 2;
    if (*(uint *)(in_EAX + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(in_EAX + 8);
    }
    FUN_0003cfd0(*(int *)(*(int *)(in_EAX + 4) + uVar3 * 4) + (iVar4 % 2) * 8);
  }
  iVar4 = *(int *)(in_EAX + 0xc) + uVar5;
  param_1 = iVar4 + uVar2;
  FUN_0003cec0(&param_1,uVar5 + iVar4);
  param_1 = *(int *)(in_EAX + 0xc);
  FUN_0003cec0(&param_3,param_3,param_4,param_5,param_6,uVar2 + param_1);
  return;
}
