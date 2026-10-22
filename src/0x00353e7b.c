/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A11A9CFC3844D8E2077A0AD39C97D013CA70AC716ABB64511BB8660164670F4D
 * Entry: 0x00353e7b, Ghidra index: 13102, label: FUN_00353e7b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00353e7b(int param_1,int param_2)

{
  uint *puVar1;
  undefined2 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_1;
  KeRaiseIrqlToDpcLevel();
  uVar2 = *(undefined2 *)(param_1 + 0x48);
  if (*(int *)(param_2 + 0x18) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0x18) + 4) = *(undefined4 *)(param_1 + 0x44);
    *(undefined2 *)(*(int *)(param_2 + 0x18) + 2) = uVar2;
  }
  **(undefined4 **)(param_2 + 0xc) = 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
    if (*(byte *)(param_1 + 0x7c) < 7) {
      iVar6 = *(int *)(param_1 + 0x40);
      if (-1 < *(int *)(param_1 + 0x40)) {
        iVar6 = FUN_00345b2e(param_1,param_2);
      }
    }
    else {
      param_1 = 0;
      iVar6 = param_1;
    }
  }
  else {
    piVar3 = *(int **)(param_2 + 0xc);
    iVar6 = FUN_003534eb(param_1,param_2);
    *piVar3 = *piVar3 + iVar6;
    puVar1 = (uint *)(param_1 + 200);
    param_1 = 0;
    uVar4 = *puVar1;
    FUN_00353181(iVar5,0);
    iVar6 = param_1;
    if ((uVar4 < *(uint *)(iVar5 + 0xd0)) && (*(uint *)(iVar5 + 0xd0) <= *puVar1)) {
      FUN_00353aaf(iVar5);
    }
  }
  param_1 = iVar6;
  KfLowerIrql();
  return param_1;
}
