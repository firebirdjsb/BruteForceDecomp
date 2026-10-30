/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B7892721632EF5FF1A653A42035E023F97E4506F310A056702F4F59D4CF162F5
 * Entry: 0x0008a9d0, Ghidra index: 1663, label: FUN_0008a9d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0008a9d0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
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
      iVar6 = 0;
      uVar7 = 1;
      do {
        uVar2 = *(uint *)(iVar1 + 4);
        uVar4 = 0;
        if (uVar2 == 0) {
LAB_0008aa4d:
          if (((*(byte *)(iVar3 + 0x70) & 1) == 0) &&
             (*(int *)(*(int *)(iVar3 + 0xc) + 8) == *param_1)) {
            return iVar3;
          }
        }
        else {
          if (uVar2 != 0) goto LAB_0008aa21;
          iVar5 = 0;
          while (*(int *)(iVar5 + 4) != iVar3) {
            uVar4 = uVar4 + 1;
            if (uVar2 <= uVar4) goto LAB_0008aa4d;
LAB_0008aa21:
            iVar5 = *(int *)(*(int *)(iVar1 + 8) + uVar4 * 4);
          }
          if (uVar4 == 0xffffffff) goto LAB_0008aa4d;
          if (uVar4 < uVar2) {
            iVar5 = *(int *)(*(int *)(iVar1 + 8) + uVar4 * 4);
          }
          else {
            iVar5 = 0;
          }
          if (*(int *)(iVar5 + 0x14) == 0) goto LAB_0008aa4d;
        }
        if (*(uint *)(iVar1 + 4) <= uVar7) {
          return 0;
        }
        iVar6 = iVar6 + 4;
        if (uVar7 < *(uint *)(iVar1 + 4)) {
          iVar3 = *(int *)(iVar6 + *(int *)(iVar1 + 8));
        }
        else {
          iVar3 = 0;
        }
        iVar3 = *(int *)(iVar3 + 4);
        uVar7 = uVar7 + 1;
      } while (iVar3 != 0);
    }
  }
  return 0;
}
