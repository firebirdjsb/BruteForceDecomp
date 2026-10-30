/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7CDAF5FC2571625A2BEEA8DBE510A181290CCDC8CD99A4102BB7F8F2687AD788
 * Entry: 0x0008aa90, Ghidra index: 1664, label: FUN_0008aa90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0008aa90(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = param_1[10];
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(iVar1 + 4) != 0) {
    if (*(int *)(iVar1 + 4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = **(int **)(iVar1 + 8);
    }
    iVar3 = *(int *)(iVar3 + 4);
    if (iVar3 != 0) {
      iVar7 = 0;
      uVar6 = 1;
      do {
        uVar2 = *(uint *)(iVar1 + 4);
        uVar4 = 0;
        if (uVar2 == 0) {
LAB_0008ab0d:
          if (*(int *)(*(int *)(iVar3 + 0xc) + 8) == *param_1) {
            return iVar3;
          }
        }
        else {
          if (uVar2 != 0) goto LAB_0008aae1;
          iVar5 = 0;
          while (*(int *)(iVar5 + 4) != iVar3) {
            uVar4 = uVar4 + 1;
            if (uVar2 <= uVar4) goto LAB_0008ab0d;
LAB_0008aae1:
            iVar5 = *(int *)(*(int *)(iVar1 + 8) + uVar4 * 4);
          }
          if (uVar4 == 0xffffffff) goto LAB_0008ab0d;
          if (uVar4 < uVar2) {
            iVar5 = *(int *)(*(int *)(iVar1 + 8) + uVar4 * 4);
          }
          else {
            iVar5 = 0;
          }
          if (*(int *)(iVar5 + 0x14) == 0) goto LAB_0008ab0d;
        }
        if (*(uint *)(iVar1 + 4) <= uVar6) {
          return 0;
        }
        iVar7 = iVar7 + 4;
        if (uVar6 < *(uint *)(iVar1 + 4)) {
          iVar3 = *(int *)(*(int *)(iVar1 + 8) + iVar7);
        }
        else {
          iVar3 = 0;
        }
        iVar3 = *(int *)(iVar3 + 4);
        uVar6 = uVar6 + 1;
      } while (iVar3 != 0);
    }
  }
  return 0;
}
