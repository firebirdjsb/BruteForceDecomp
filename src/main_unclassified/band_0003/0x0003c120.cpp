/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F0BA601E590BDD377A7FC9B088CF014D2F5D1E78437B961A1443C2DF9C2292E
 * Entry: 0x0003c120, Ghidra index: 426, label: FUN_0003c120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0003c120(int *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = *(int *)(in_EAX + 0xc);
  uVar3 = param_2 - iVar2;
  iVar4 = *(int *)(in_EAX + 0x10) + iVar2;
  iVar6 = param_4 - param_2;
  if (uVar3 < (uint)(iVar4 - param_4)) {
    FUN_0003ce20(&param_2,iVar2);
    if (iVar6 != 0) {
      iVar2 = *(int *)(in_EAX + 0x10);
      do {
        if (iVar2 != 0) {
          uVar1 = *(int *)(in_EAX + 0xc) + 1;
          uVar5 = *(int *)(in_EAX + 8) * 2;
          *(uint *)(in_EAX + 0xc) = uVar1;
          if (uVar5 < uVar1 || uVar5 - uVar1 == 0) {
            *(undefined4 *)(in_EAX + 0xc) = 0;
          }
          iVar2 = iVar2 + -1;
          if (iVar2 == 0) {
            *(undefined4 *)(in_EAX + 0xc) = 0;
          }
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      *(int *)(in_EAX + 0x10) = iVar2;
    }
  }
  else {
    FUN_0003cec0(&param_2,param_4,param_5,iVar4);
    if (iVar6 != 0) {
      iVar2 = *(int *)(in_EAX + 0x10);
      do {
        if ((iVar2 != 0) && (iVar2 = iVar2 + -1, iVar2 == 0)) {
          *(undefined4 *)(in_EAX + 0xc) = 0;
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      *(int *)(in_EAX + 0x10) = iVar2;
    }
  }
  if (uVar3 == 0) {
    param_2 = *(int *)(in_EAX + 0xc);
  }
  else {
    param_2 = *(int *)(in_EAX + 0xc) + uVar3;
  }
  *param_1 = param_2;
  param_1[1] = in_EAX;
  return;
}
