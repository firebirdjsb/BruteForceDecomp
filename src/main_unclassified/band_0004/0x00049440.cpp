/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 013F61909DE1A9C99A255B1E64A313CFD6722D2BCB6809D1D900F70B2A4AF24B
 * Entry: 0x00049440, Ghidra index: 587, label: FUN_00049440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000384a0(undefined4 *param_1);
extern void FUN_000e4570(undefined4 *param_1);

void FUN_00049440(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar4 = param_1 - *(int *)(in_EAX + 0xc);
  uVar5 = *(int *)(in_EAX + 0x10) - uVar4;
  uVar6 = param_5 - param_3;
  if (uVar5 <= uVar4) {
    if (uVar5 < uVar6) {
      param_2 = param_4;
      iVar1 = param_3 + uVar5;
      for (iVar7 = iVar1; (param_2 != param_6 || (iVar7 != param_5)); iVar7 = iVar7 + 1) {
        uVar6 = (int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2;
        iVar3 = uVar6 * -4;
        if (*(uint *)(param_2 + 8) <= uVar6) {
          uVar6 = uVar6 - *(uint *)(param_2 + 8);
        }
        FUN_000384a0(*(int *)(*(int *)(param_2 + 4) + uVar6 * 4) + (iVar7 + iVar3) * 4);
      }
      param_1 = 0;
      if (uVar5 != 0) {
        do {
          param_5 = *(int *)(in_EAX + 0xc);
          iVar3 = param_1 + param_5 + uVar4;
          uVar6 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
          iVar7 = uVar6 * -4;
          if (*(uint *)(in_EAX + 8) <= uVar6) {
            uVar6 = uVar6 - *(uint *)(in_EAX + 8);
          }
          FUN_000384a0(*(int *)(*(int *)(in_EAX + 4) + uVar6 * 4) + (iVar3 + iVar7) * 4);
          param_1 = param_1 + 1;
        } while (param_1 < uVar5);
      }
      param_5 = *(int *)(in_EAX + 0xc);
      FUN_00049880(&param_3,param_3,param_4,iVar1,param_4,uVar4 + param_5);
      return;
    }
    param_1 = 0;
    if (uVar6 != 0) {
      do {
        iVar7 = (*(int *)(in_EAX + 0xc) - uVar6) + param_1 + uVar5 + uVar4;
        uVar2 = (int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2;
        iVar1 = uVar2 * -4;
        if (*(uint *)(in_EAX + 8) <= uVar2) {
          uVar2 = uVar2 - *(uint *)(in_EAX + 8);
        }
        FUN_000384a0(*(int *)(*(int *)(in_EAX + 4) + uVar2 * 4) + (iVar7 + iVar1) * 4);
        param_1 = param_1 + 1;
      } while (param_1 < uVar6);
    }
    iVar1 = uVar4 + *(int *)(in_EAX + 0xc);
    param_1 = iVar1 + uVar5;
    FUN_000497e0(&param_1,iVar1);
    FUN_00049880(&param_3,param_3,param_4,param_5,param_6,iVar1);
    return;
  }
  param_1 = uVar6;
  if (uVar4 < uVar6) {
    param_2 = param_4;
    iVar1 = (param_3 - uVar4) + uVar6;
    param_1 = iVar1;
    while ((param_4 != param_2 || (param_3 != iVar1))) {
      iVar1 = iVar1 + -1;
      uVar5 = (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
      iVar7 = uVar5 * -4;
      if (*(uint *)(param_2 + 8) <= uVar5) {
        uVar5 = uVar5 - *(uint *)(param_2 + 8);
      }
      FUN_000e4570(*(int *)(*(int *)(param_2 + 4) + uVar5 * 4) + (iVar1 + iVar7) * 4);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      param_3 = *(int *)(in_EAX + 0xc);
      iVar1 = (uVar6 - 1) + param_3;
      uVar5 = (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
      iVar7 = uVar5 * -4;
      if (*(uint *)(in_EAX + 8) <= uVar5) {
        uVar5 = uVar5 - *(uint *)(in_EAX + 8);
      }
      FUN_000e4570(*(int *)(*(int *)(in_EAX + 4) + uVar5 * 4) + (iVar1 + iVar7) * 4);
    }
    param_3 = *(int *)(in_EAX + 0xc);
    FUN_00049880(&param_3,param_1,param_2,param_5,param_6,uVar6 + param_3);
    return;
  }
  for (; param_1 != 0; param_1 = param_1 - 1) {
    iVar1 = (uVar6 - 1) + *(int *)(in_EAX + 0xc);
    uVar5 = (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
    iVar7 = uVar5 * -4;
    if (*(uint *)(in_EAX + 8) <= uVar5) {
      uVar5 = uVar5 - *(uint *)(in_EAX + 8);
    }
    FUN_000e4570(*(int *)(*(int *)(in_EAX + 4) + uVar5 * 4) + (iVar1 + iVar7) * 4);
  }
  iVar1 = *(int *)(in_EAX + 0xc) + uVar6;
  param_1 = iVar1 + uVar4;
  FUN_00049880(&param_1,uVar6 + iVar1);
  param_1 = *(int *)(in_EAX + 0xc);
  FUN_00049880(&param_3,param_3,param_4,param_5,param_6,uVar4 + param_1);
  return;
}
