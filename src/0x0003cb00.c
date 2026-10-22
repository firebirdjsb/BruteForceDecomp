/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B64B3B59608AF5934D60995D2D5FC3AB770515C9F2F1E295058E782C215E69E6
 * Entry: 0x0003cb00, Ghidra index: 439, label: FUN_0003cb00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0003cb00(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint local_10;
  
  iVar1 = param_4;
  uVar3 = param_1 - *(int *)(in_EAX + 0xc);
  param_1 = *(int *)(in_EAX + 0x10) - uVar3;
  uVar4 = param_5 - param_3;
  if (param_1 <= uVar3) {
    if (param_1 < uVar4) {
      iVar2 = param_3 + param_1;
      for (iVar5 = iVar2; (iVar1 != param_6 || (iVar5 != param_5)); iVar5 = iVar5 + 1) {
        FUN_0003d0e0();
      }
      uVar4 = 0;
      if (param_1 != 0) {
        do {
          param_5 = *(undefined4 *)(in_EAX + 0xc);
          FUN_0003d0e0();
          uVar4 = uVar4 + 1;
        } while (uVar4 < param_1);
      }
      param_5 = *(int *)(in_EAX + 0xc);
      FUN_0003ca80(&param_3,param_3,param_4,iVar2,param_4,uVar3 + param_5);
      return;
    }
    local_10 = 0;
    if (uVar4 != 0) {
      do {
        FUN_0003d0e0();
        local_10 = local_10 + 1;
      } while (local_10 < uVar4);
    }
    iVar1 = *(int *)(in_EAX + 0xc) + uVar3;
    param_1 = iVar1 + param_1;
    FUN_0003cf50(&param_1,iVar1);
    FUN_0003ca80(&param_3,param_3,param_4,param_5,param_6,iVar1);
    return;
  }
  param_1 = uVar4;
  iVar1 = param_3;
  if (uVar3 < uVar4) {
    param_2 = param_4;
    iVar1 = (param_3 - uVar3) + uVar4;
    param_1 = iVar1;
    for (; (param_4 != param_2 || (param_3 != iVar1)); iVar1 = iVar1 + -1) {
      FUN_0003d060();
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      param_3 = *(undefined4 *)(in_EAX + 0xc);
      FUN_0003d060();
    }
    param_3 = *(int *)(in_EAX + 0xc);
    FUN_0003ca80(&param_3,param_1,param_2,param_5,param_6,uVar4 + param_3);
    return;
  }
  for (; param_3 = iVar1, param_1 != 0; param_1 = param_1 - 1) {
    FUN_0003d060();
    iVar1 = param_3;
  }
  iVar2 = *(int *)(in_EAX + 0xc) + uVar4;
  param_1 = iVar2 + uVar3;
  FUN_0003ca80(&param_1,uVar4 + iVar2);
  param_1 = *(int *)(in_EAX + 0xc);
  FUN_0003ca80(&param_3,iVar1,param_4,param_5,param_6,uVar3 + param_1);
  return;
}
