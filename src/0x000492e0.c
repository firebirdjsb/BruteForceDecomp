/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6F340198B9A156F4356D6CE89192C6F1526E2D1C44F084AC67203D7BDEE997BD
 * Entry: 0x000492e0, Ghidra index: 584, label: FUN_000492e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000492e0(int *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *(int *)(in_EAX + 0xc);
  uVar3 = param_2 - iVar2;
  iVar4 = *(int *)(in_EAX + 0x10) + iVar2;
  iVar5 = param_4 - param_2;
  if (uVar3 < (uint)(iVar4 - param_4)) {
    FUN_000497e0(&param_2,iVar2);
    if (iVar5 != 0) {
      iVar2 = *(int *)(in_EAX + 0x10);
      do {
        if (iVar2 != 0) {
          uVar1 = *(int *)(in_EAX + 0xc) + 1;
          *(uint *)(in_EAX + 0xc) = uVar1;
          if ((uint)(*(int *)(in_EAX + 8) << 2) <= uVar1) {
            *(undefined4 *)(in_EAX + 0xc) = 0;
          }
          iVar2 = iVar2 + -1;
          if (iVar2 == 0) {
            *(undefined4 *)(in_EAX + 0xc) = 0;
          }
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      *(int *)(in_EAX + 0x10) = iVar2;
    }
  }
  else {
    FUN_00049880(&param_2,param_4,param_5,iVar4);
    if (iVar5 != 0) {
      iVar2 = *(int *)(in_EAX + 0x10);
      do {
        if ((iVar2 != 0) && (iVar2 = iVar2 + -1, iVar2 == 0)) {
          *(undefined4 *)(in_EAX + 0xc) = 0;
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
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
