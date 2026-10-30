/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3970BC5D2359AAA212ED28DCE4F0B02873C1F10CE5DAEC787985B0BCCE528554
 * Entry: 0x00055da0, Ghidra index: 824, label: FUN_00055da0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0001d470(void);

void FUN_00055da0(int *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = *(int *)(in_EAX + 0xc);
  uVar4 = param_2 - iVar2;
  iVar5 = *(int *)(in_EAX + 0x10) + iVar2;
  iVar6 = param_4 - param_2;
  if (uVar4 < (uint)(iVar5 - param_4)) {
    FUN_00055fe0(&param_2,iVar2);
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*(int *)(in_EAX + 0x10) != 0) {
        FUN_0001d470();
        uVar3 = *(int *)(in_EAX + 0xc) + 1;
        *(uint *)(in_EAX + 0xc) = uVar3;
        if (*(uint *)(in_EAX + 8) <= uVar3) {
          *(undefined4 *)(in_EAX + 0xc) = 0;
        }
        piVar1 = (int *)(in_EAX + 0x10);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *(undefined4 *)(in_EAX + 0xc) = 0;
        }
      }
    }
  }
  else {
    FUN_00056050(&param_2,param_4,param_5,iVar5);
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*(int *)(in_EAX + 0x10) != 0) {
        FUN_0001d470();
        piVar1 = (int *)(in_EAX + 0x10);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *(undefined4 *)(in_EAX + 0xc) = 0;
        }
      }
    }
  }
  param_2 = *(int *)(in_EAX + 0xc);
  if (uVar4 != 0) {
    param_2 = param_2 + uVar4;
  }
  *param_1 = param_2;
  param_1[1] = in_EAX;
  return;
}
